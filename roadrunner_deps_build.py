"""
Build the libroadrunner-deps  roadrunner dependency package.

Usage:

    python roadrunner_deps_build.py "/full/path/to/where/you/want/to/install/the/roadrunner/dependencies/" [--with-llvm] [--build-type=[Release|Debug]]

Options:

    --with-llvm: turns on building llvm along with the other dependencies
    --build-type=value: where value is a valid cmake build type. Defaults to Release
"""

import os, sys
import subprocess
import argparse
import requests
import zipfile
import re
import tarfile

parser = argparse.ArgumentParser()
parser.add_argument("install_prefix", help="the cmake_install_prefix variable")
parser.add_argument("--with_llvm", help="Download and build llvm-6.x (takes longer)", default=False,
                    action="store_true")
parser.add_argument("--build_type", type=str, help="the cmake_build_type variable", default="Release")
args = parser.parse_args()

try:
    cmake_version = subprocess.run(["cmake", "--version"], capture_output=True).stdout
    major, minor, patch = re.findall("(\d*).(\d*).(\d*)", cmake_version)[0]
    if int(major) != 3:
        raise ValueError("Cmake version > 3.14 required")
    if int(minor) < 14:
        raise ValueError("Cmake version > 3.14 required")
    cmake_command = "cmake"
except (subprocess.CalledProcessError, ValueError) as e:

    if sys.platform == "windows":
        l = r"https://github.com/Kitware/CMake/releases/download/v3.18.4/cmake-3.18.4-win64-x64.zip"
        cmake_file = "cmake-3.18.4-win64-x64.zip"
    elif sys.platform == "linux":
        l = r"https://github.com/Kitware/CMake/releases/download/v3.18.4/cmake-3.18.4-Linux-x86_64.tar.gz"
        cmake_file = "cmake-3.18.4-Linux-x86_64.tar.gz"
    elif sys.platform == "darwin":
        l = r"https://github.com/Kitware/CMake/releases/download/v3.18.4/cmake-3.18.4-Darwin-x86_64.tar.gz"
        cmake_file = "cmake-3.18.4-Darwin-x86_64.tar.gz"
    else:
        raise e

    cmake_dir = os.path.join(os.getcwd(), "cmake")
    r = requests.get(l, allow_redirects=True)
    open(cmake_file, 'wb').write(r.content)

    if sys.platform == "windows":
        with zipfile.ZipFile(cmake_file, 'r') as zip_ref:
            zip_ref.extractall(cmake_dir)
        cmake_command = os.path.join(cmake_dir, "bin/cmake.exe")
    elif sys.platform == "darwin":
        my_tar = tarfile.open(cmake_file)
        my_tar.extractall(cmake_dir) # specify which folder to extract to
        my_tar.close()
        cmake_command = os.path.join(cmake_dir, "CMake.app/Contents/bin/cmake")
    elif sys.platform == "linux":
        my_tar = tarfile.open(cmake_file)
        my_tar.extractall(cmake_dir) # specify which folder to extract to
        my_tar.close()
        cmake_command = os.path.join(cmake_dir, "bin/cmake")




def do_check_call(commands: list, error_message=None):
    try:
        subprocess.check_call(commands)
    except subprocess.CalledProcessError as e:
        print(e.output)
        if error_message:
            print(error_message)
        exit(1)


BASE_DIRECTORY = os.getcwd()

# will error if cmake not available
do_check_call([cmake_command, "--version"],
              "Make sure cmake is available and your environment variables are correctly configured to allow the 'cmake' command to be run from shell")

# clone repo
libroadrunner_deps_github = r"https://github.com/CiaranWelsh/libroadrunner-deps.git"
LIBROADRUNNER_DEPS_DIR = os.path.join(BASE_DIRECTORY, "libroadrunner-deps")
do_check_call(["git", "clone", "--recurse-submodules", libroadrunner_deps_github, LIBROADRUNNER_DEPS_DIR])

# make build directory and cd
os.chdir(LIBROADRUNNER_DEPS_DIR)
LIBROADRUNNER_DEPS_BUILD_DIR = os.path.join(LIBROADRUNNER_DEPS_DIR, "build")
os.makedirs(LIBROADRUNNER_DEPS_BUILD_DIR)
os.chdir(LIBROADRUNNER_DEPS_BUILD_DIR)


# cmake command
if (args.with_llvm):
    do_check_call([
        "cmake",
        f"-DCMAKE_INSTALL_PREFIX={args.install_prefix}",
        f"CMAKE_BUILD_TYPE={args.build_type}",
        "-DBUILD_LLVM=ON",
        LIBROADRUNNER_DEPS_DIR
    ])
else:
    do_check_call([
        "cmake",
        f"-DCMAKE_INSTALL_PREFIX={args.install_prefix}",
        f"CMAKE_BUILD_TYPE={args.build_type}",
        LIBROADRUNNER_DEPS_DIR
    ])

# build and install command
do_check_call(["cmake" "--build", f"{LIBROADRUNNER_DEPS_BUILD_DIR}", "--target", "install", "-j", 12])
