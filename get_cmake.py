import sys, zipfile, tarfile, os, requests

print(f"System is {sys.platform}")

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
    raise ValueError

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

