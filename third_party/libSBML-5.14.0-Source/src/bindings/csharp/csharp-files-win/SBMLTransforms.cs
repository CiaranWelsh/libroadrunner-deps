/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace libsbml {

 using System;
 using System.Runtime.InteropServices;

/** 
 * @sbmlpackage{core}
 *
@htmlinclude pkg-marker-core.html Methods for transform elements of SBML
 *
 * @internal
 */

public class SBMLTransforms : IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal SBMLTransforms(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(SBMLTransforms obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (SBMLTransforms obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~SBMLTransforms() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_SBMLTransforms(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  
/** */ /* libsbml-internal */ public
 static void replaceFD(ASTNode math, FunctionDefinition fd, IdList idsToExclude) {
    libsbmlPINVOKE.SBMLTransforms_replaceFD__SWIG_0(ASTNode.getCPtr(math), FunctionDefinition.getCPtr(fd), IdList.getCPtr(idsToExclude));
  }

  
/** */ /* libsbml-internal */ public
 static void replaceFD(ASTNode math, FunctionDefinition fd) {
    libsbmlPINVOKE.SBMLTransforms_replaceFD__SWIG_1(ASTNode.getCPtr(math), FunctionDefinition.getCPtr(fd));
  }

  
/** */ /* libsbml-internal */ public
 static void replaceFD(ASTNode math, ListOfFunctionDefinitions lofd, IdList idsToExclude) {
    libsbmlPINVOKE.SBMLTransforms_replaceFD__SWIG_2(ASTNode.getCPtr(math), ListOfFunctionDefinitions.getCPtr(lofd), IdList.getCPtr(idsToExclude));
  }

  
/** */ /* libsbml-internal */ public
 static void replaceFD(ASTNode math, ListOfFunctionDefinitions lofd) {
    libsbmlPINVOKE.SBMLTransforms_replaceFD__SWIG_3(ASTNode.getCPtr(math), ListOfFunctionDefinitions.getCPtr(lofd));
  }

  
/** */ /* libsbml-internal */ public
 static bool expandInitialAssignments(Model m) {
    bool ret = libsbmlPINVOKE.SBMLTransforms_expandInitialAssignments(Model.getCPtr(m));
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 static double evaluateASTNode(ASTNode node, Model m) {
    double ret = libsbmlPINVOKE.SBMLTransforms_evaluateASTNode__SWIG_0(ASTNode.getCPtr(node), Model.getCPtr(m));
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 static double evaluateASTNode(ASTNode node) {
    double ret = libsbmlPINVOKE.SBMLTransforms_evaluateASTNode__SWIG_1(ASTNode.getCPtr(node));
    return ret;
  }

  
/** */ /* libsbml-internal */ public
 static bool expandL3V2InitialAssignments(Model m) {
    bool ret = libsbmlPINVOKE.SBMLTransforms_expandL3V2InitialAssignments(Model.getCPtr(m));
    return ret;
  }

  public static IdList mapComponentValues(Model m) {
    IdList ret = new IdList(libsbmlPINVOKE.SBMLTransforms_mapComponentValues(Model.getCPtr(m)), true);
    return ret;
  }

  public static void clearComponentValues() {
    libsbmlPINVOKE.SBMLTransforms_clearComponentValues();
  }

  public SBMLTransforms() : this(libsbmlPINVOKE.new_SBMLTransforms(), true) {
  }

}

}