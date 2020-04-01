//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 3.0.12
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace libsbml {

 using System;
 using System.Runtime.InteropServices;

/** 
 * @sbmlpackage{core}
 *
@htmlinclude pkg-marker-core.html A qualified XML name.
 *
 * @htmlinclude not-sbml-warning.html
 *
 * A 'triple' in the libSBML XML layer encapsulates the notion of qualified
 * name, meaning an element name or an attribute name with an optional
 * namespace qualifier.  Triples by themselves are not entities in an XML
 * stream&mdash;they are not, for example, elements or attributes; rather,
 * XMLTriple is used in libSBML to construct these other kinds of objects.
 *
 * An XMLTriple instance carries up to three data items:
 * <ol>
 * <li> The name of the attribute or element; that is, the attribute name
 * as it appears in an XML document or data stream;
 * <li> The XML namespace prefix (if any) of the attribute.  For example,
 * in the following fragment of XML, the namespace prefix is the string
 * <code>mysim</code> and it appears on both the element
 * <code>someelement</code> and the attribute <code>attribA</code>.  When
 * both the element and the attribute are stored as XMLTriple objects,
 * their <i>prefix</i> is <code>mysim</code>.
 * @verbatim
<mysim:someelement mysim:attribA='value' />
@endverbatim
 * <li> The XML namespace URI with which the prefix is associated.  In
 * XML, every namespace used must be declared and mapped to a URI.
 * </ol>
 *
 * XMLTriple objects are the lowest-level data item in the XML layer
 * of libSBML.  Other objects such as XMLToken make use of XMLTriple
 * objects.
 *
 * @see XMLToken
 * @see XMLNode
 * @see XMLAttributes
 * @see XMLNamespaces
 */

public class XMLTriple : global::System.IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal XMLTriple(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(XMLTriple obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (XMLTriple obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~XMLTriple() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_XMLTriple(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
      global::System.GC.SuppressFinalize(this);
    }
  }

  
/**
   * Creates a new, empty XMLTriple object.
   */ public
 XMLTriple() : this(libsbmlPINVOKE.new_XMLTriple__SWIG_0(), true) {
  }

  
/**
   * Creates a new XMLTriple object with a given @p name, @p uri and and @p
   * prefix.
   *
   * @param name a string, the name for the entity represented by this object.
   * @param uri a string, the XML namespace URI associated with the prefix.
   * @param prefix a string, the XML namespace prefix for this triple.
   */ public
 XMLTriple(string name, string uri, string prefix) : this(libsbmlPINVOKE.new_XMLTriple__SWIG_1(name, uri, prefix), true) {
  }

  
/**
   * Creates an XMLTriple object by splitting a given string at a given
   * separator character.
   *
   * The 'triplet' in this case is a string that may be in one of the
   * following three possible formats:
   * <ol>
   * <li> <span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span> </li>
   * <li> <span style='background-color: #ccc; padding-left: 2px; padding-right: 2px'>URI</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span></li>
   * <li> <span style='background-color: #ccc; padding-left: 2px; padding-right: 2px'>URI</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: #d0d0fd; padding-left: 2px; padding-right: 2px'>prefix</span></li>
   * </ol>
   *
   * where <span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span>
   * represents the separator character, @p sepchar.
   *
   * @param triplet a string representing the triplet as shown above.
   * @param sepchar a character, the sepchar used in the triplet.
   *
   * @ifnot hasDefaultArgs @htmlinclude warn-default-args-in-docs.html @endif
   */ public
 XMLTriple(string triplet, char sepchar) : this(libsbmlPINVOKE.new_XMLTriple__SWIG_2(triplet, sepchar), true) {
  }

  
/**
   * Creates an XMLTriple object by splitting a given string at a given
   * separator character.
   *
   * The 'triplet' in this case is a string that may be in one of the
   * following three possible formats:
   * <ol>
   * <li> <span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span> </li>
   * <li> <span style='background-color: #ccc; padding-left: 2px; padding-right: 2px'>URI</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span></li>
   * <li> <span style='background-color: #ccc; padding-left: 2px; padding-right: 2px'>URI</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: lightblue; padding-left: 2px; padding-right: 2px'>name</span><span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span><span style='background-color: #d0d0fd; padding-left: 2px; padding-right: 2px'>prefix</span></li>
   * </ol>
   *
   * where <span style='background-color: purple; color: white; padding-left: 2px; padding-right: 2px'>x</span>
   * represents the separator character, @p sepchar.
   *
   * @param triplet a string representing the triplet as shown above.
   * @param sepchar a character, the sepchar used in the triplet.
   *
   * @ifnot hasDefaultArgs @htmlinclude warn-default-args-in-docs.html @endif
   */ public
 XMLTriple(string triplet) : this(libsbmlPINVOKE.new_XMLTriple__SWIG_3(triplet), true) {
  }

  
/**
   * Copy constructor; creates a copy of this XMLTriple object.
   *
   * @param orig the XMLTriple object to copy.
   */ public
 XMLTriple(XMLTriple orig) : this(libsbmlPINVOKE.new_XMLTriple__SWIG_4(XMLTriple.getCPtr(orig)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  
/**
   * Creates and returns a deep copy of this XMLTriple object.
   *
   * @return the (deep) copy of this XMLTriple object.
   */ public
 XMLTriple clone() {
    global::System.IntPtr cPtr = libsbmlPINVOKE.XMLTriple_clone(swigCPtr);
    XMLTriple ret = (cPtr == global::System.IntPtr.Zero) ? null : new XMLTriple(cPtr, true);
    return ret;
  }

  
/**
   * Returns the @em name portion of this XMLTriple object.
   *
   * @return a string, the name portion of this XMLTriple object.
   */ public
 string getName() {
    string ret = libsbmlPINVOKE.XMLTriple_getName(swigCPtr);
    return ret;
  }

  
/**
   * Returns the @em prefix portion of this XMLTriple object.
   *
   * @return a string, the prefix portion of this XMLTriple object.
   */ public
 string getPrefix() {
    string ret = libsbmlPINVOKE.XMLTriple_getPrefix(swigCPtr);
    return ret;
  }

  
/**
   * Returns the @em URI portion of this XMLTriple object.
   *
   * @return URI a string, the URI portion of this XMLTriple object.
   */ public
 string getURI() {
    string ret = libsbmlPINVOKE.XMLTriple_getURI(swigCPtr);
    return ret;
  }

  
/**
   * Returns the prefixed name from this XMLTriple.
   *
   * @return a string, the prefixed name from this XMLTriple.  This is
   * constructed by concatenating the @em prefix stored in this XMLTriple
   * object, followed by a colon character <code>':'</code>, followed by the
   * @em name stored in this XMLTriple object.
   */ public
 string getPrefixedName() {
    string ret = libsbmlPINVOKE.XMLTriple_getPrefixedName(swigCPtr);
    return ret;
  }

  
/**
   * Returns @c true if this XMLTriple object is empty.
   *
   * @return @c true if this XMLTriple is empty, @c false otherwise.
   */ public
 bool isEmpty() {
    bool ret = libsbmlPINVOKE.XMLTriple_isEmpty(swigCPtr);
    return ret;
  }

}

}
