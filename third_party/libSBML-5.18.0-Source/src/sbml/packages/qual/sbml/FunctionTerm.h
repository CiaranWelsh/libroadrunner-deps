/**
 * @file   FunctionTerm.h
 * @brief  Implementation of the FunctionTerm class
 * @author Generated by autocreate code
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2019 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2013-2018 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *     3. University of Heidelberg, Heidelberg, Germany
 * 
 * Copyright (C) 2009-2013 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 *     Pasadena, CA, USA 
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution
 * and also available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class FunctionTerm
 * @sbmlbrief{qual} A function term.
 *
 * Each FunctionTerm is associated with a result and with a Boolean function
 * inside a Math element that can be used to set the conditions under which
 * this term is selected.
 *
 * <!-- ------------------------------------------------------------------- -->
 * @class ListOfFunctionTerms
 * @sbmlbrief{qual} A list of FunctionTerm objects.
 *
 * The ListOfFunctionTerms is a container for the FunctionTerms of a Transition.
 *
 * @copydetails doc_what_is_listof
 *
 * @see Input
 */

#ifndef FunctionTerm_H__
#define FunctionTerm_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/qual/common/qualfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/ListOf.h>
#include <sbml/packages/qual/extension/QualExtension.h>
#include <sbml/packages/qual/sbml/DefaultTerm.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN FunctionTerm : public SBase
{

protected:

  /** @cond doxygenLibsbmlInternal */
  int           mResultLevel;
  bool          mIsSetResultLevel;
  ASTNode*      mMath;
  /** @endcond */


public:

  /**
   * Creates a new FunctionTerm with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this FunctionTerm.
   *
   * @param version an unsigned int, the SBML Version to assign to this FunctionTerm.
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this FunctionTerm.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  FunctionTerm(unsigned int level      = QualExtension::getDefaultLevel(),
               unsigned int version    = QualExtension::getDefaultVersion(),
               unsigned int pkgVersion = QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new FunctionTerm with the given QualPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param qualns the QualPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  FunctionTerm(QualPkgNamespaces* qualns);


  /**
   * Copy constructor for FunctionTerm.
   *
   * @param orig the FunctionTerm instance to copy.
   */
  FunctionTerm(const FunctionTerm& orig);


  /**
   * Assignment operator for FunctionTerm.
   *
   * @param rhs the object whose values are used as the basis
   * of the assignment.
   */
  FunctionTerm& operator=(const FunctionTerm& rhs);


  /**
   * Creates and returns a deep copy of this FunctionTerm object.
   *
   * @return a (deep) copy of this FunctionTerm object.
   */
  virtual FunctionTerm* clone () const;


  /**
   * Destructor for FunctionTerm.
   */
  virtual ~FunctionTerm();


  /**
   * Returns the value of the "resultLevel" attribute of this FunctionTerm.
   *
   * @return the value of the "resultLevel" attribute of this FunctionTerm as a integer.
   */
  virtual int getResultLevel() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * FunctionTerm's "resultLevel" attribute has been set.
   *
   * @return @c true if this FunctionTerm's "resultLevel" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetResultLevel() const;


  /**
   * Sets the value of the "resultLevel" attribute of this FunctionTerm.
   *
   * @param resultLevel int value of the "resultLevel" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setResultLevel(int resultLevel);


  /**
   * Unsets the value of the "resultLevel" attribute of this FunctionTerm.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetResultLevel();


  /**
   * Returns the "math" element of this FunctionTerm.
   *
   * @return the "math" element of this FunctionTerm, or @c NULL if the math is not set.
   */
  virtual const ASTNode* getMath() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * FunctionTerm's "math" element has been set.
   *
   * @return @c true if this FunctionTerm's "math" element has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetMath() const;


  /**
   * Sets the "math" element of this FunctionTerm.
   *
   * @param math ASTNode * math of the "resultLevel" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setMath(const ASTNode* math);


  /**
   * Unsets the "math" element of this FunctionTerm.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetMath();


  /**
   * @copydoc doc_renamesidref_common
   */
   virtual void renameSIdRefs(const std::string& oldid, const std::string& newid);


  /**
   * Returns the XML name of this object.
   *
   * @return the name of this element.
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code of this object instance.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_QUAL_FUNCTION_TERM, SBMLQualTypeCode_t}
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode () const;


  /**
   * Predicate returning @c true if all the required attributes
   * for this FunctionTerm object have been set.
   *
   * @note The required attributes for a FunctionTerm object are:
   *
   * @return a boolean value indicating whether all the required
   * attributes for this object have been defined.
   */
  virtual bool hasRequiredAttributes() const;


  /**
   * Predicate returning @c true if all the required elements
   * for this FunctionTerm object have been set.
   *
   * @note The required elements for a FunctionTerm object are:
   * @li "math"
   *
   * @return a boolean value indicating whether all the required
   * elements for this object have been defined.
   */
  virtual bool hasRequiredElements() const;


  /** @cond doxygenLibsbmlInternal */
  /**
   * Subclasses should override this method to write out their contained
   * SBML objects as XML elements.  Be sure to call your parent's
   * implementation of this method as well.
   */
  virtual void writeElements (XMLOutputStream& stream) const;


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Accepts the given SBMLVisitor.
   */
  virtual bool accept (SBMLVisitor& v) const;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Sets the parent SBMLDocument.
   */
  virtual void setSBMLDocument (SBMLDocument* d);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Enables/Disables the given package with this element.
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
               const std::string& pkgPrefix, bool flag);


  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Predicate returning @c true if this FunctionTerm's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this FunctionTerm's attribute "attributeName" has been
   * set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this FunctionTerm.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */




  #endif /* !SWIG */


protected:

  /** @cond doxygenLibsbmlInternal */
  /**
   * Get the list of expected attributes for this element.
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Read values from the given XMLAttributes set into their specific fields.
   */
  virtual void readAttributes (const XMLAttributes& attributes,
                               const ExpectedAttributes& expectedAttributes);


  /** @endcond */

  /** @cond doxygenLibsbmlInternal */
  /**
   * Subclasses should override this method to read (and store) XHTML,
   * MathML, etc. directly from the XMLInputStream.
   *
   * @return @c true if the subclass read from the stream, @c false otherwise.
   */
  virtual bool readOtherXML (XMLInputStream& stream);

  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write values of XMLAttributes to the output stream.
   */
  virtual void writeAttributes (XMLOutputStream& stream) const;


  /** @endcond */



};

class LIBSBML_EXTERN ListOfFunctionTerms : public ListOf
{

public:

  /**
   * Creates a new ListOfFunctionTerms with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this ListOfFunctionTerms.
   *
   * @param version an unsigned int, the SBML Version to assign to this ListOfFunctionTerms.
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this ListOfFunctionTerms.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfFunctionTerms(unsigned int level      = QualExtension::getDefaultLevel(),
                      unsigned int version    = QualExtension::getDefaultVersion(),
                      unsigned int pkgVersion = QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new ListOfFunctionTerms with the given QualPkgNamespaces object.
   *
   * @copydetails doc_what_are_sbml_package_namespaces
   *
   * @param qualns the QualPkgNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  ListOfFunctionTerms(QualPkgNamespaces* qualns);


  /**
   * Creates a new ListOfFunctionTerms from the original.
   *
   * @param orig the ListOfFunctionTerms object.
   */
  ListOfFunctionTerms(const ListOfFunctionTerms& orig);

  
  /**
   * Creates a new ListOfFunctionTerms from the original.
   *
   * @param rhs the ListOfFunctionTerms object.
   */
  ListOfFunctionTerms& operator=(const ListOfFunctionTerms& rhs);
  
  
  /**
   * Creates and returns a deep copy of this ListOfFunctionTerms object.
   *
   * @return a (deep) copy of this ListOfFunctionTerms object.
   */
  virtual ListOfFunctionTerms* clone () const;


  /**
   * Destroys this ListOfFunctionTerms object.
   */
  virtual ~ListOfFunctionTerms();

  /**
   * Get a FunctionTerm from the ListOfFunctionTerms.
   *
   * @param n the index number of the FunctionTerm to get.
   *
   * @return the nth FunctionTerm in this ListOfFunctionTerms.
   * If the index @p n is invalid, @c NULL is returned.
   *
   * @see size()
   */
  virtual FunctionTerm* get(unsigned int n);


  /**
   * Get a FunctionTerm from the ListOfFunctionTerms.
   *
   * @param n the index number of the FunctionTerm to get.
   *
   * @return the nth FunctionTerm in this ListOfFunctionTerms.
   * If the index @p n is invalid, @c NULL is returned.
   *
   * @see size()
   */
  virtual const FunctionTerm* get(unsigned int n) const;


  /**
   * Get a FunctionTerm from the ListOfFunctionTerms
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the FunctionTerm to get.
   *
   * @return FunctionTerm in this ListOfFunctionTerms
   * with the given id or @c NULL if no such
   * FunctionTerm exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
  virtual FunctionTerm* get(const std::string& sid);


  /**
   * Get a FunctionTerm from the ListOfFunctionTerms
   * based on its identifier.
   *
   * @param sid a string representing the identifier
   * of the FunctionTerm to get.
   *
   * @return FunctionTerm in this ListOfFunctionTerms
   * with the given id or @c NULL if no such
   * FunctionTerm exists.
   *
   * @see get(unsigned int n)   *
   * @see size()
   */
  virtual const FunctionTerm* get(const std::string& sid) const;


  /**
   * Removes the nth FunctionTerm from this ListOfFunctionTerms
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   *
   * @param n the index of the FunctionTerm to remove.
   *
   * @see size()
   */
  virtual FunctionTerm* remove(unsigned int n);


  /**
   * Removes the FunctionTerm from this ListOfFunctionTerms with the given identifier
   * and returns a pointer to it.
   *
   * The caller owns the returned item and is responsible for deleting it.
   * If none of the items in this list have the identifier @p sid, then
   * @c NULL is returned.
   *
   * @param sid the identifier of the FunctionTerm to remove.
   *
   * @return the FunctionTerm removed. As mentioned above, the caller owns the
   * returned item.
   */
  virtual FunctionTerm* remove(const std::string& sid);


  /**
   * Returns a List of all child SBase objects, including those nested to an
   * arbitary depth.
   *
   * @return a List of pointers to all child objects.
   */
   virtual List* getAllElements(ElementFilter * filter = NULL);


  /**
   * Returns the XML name of this object.
   *
   * @return the name of this element.
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code for the SBML objects
   * contained in this ListOf object.
   * 
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for objects contained in this list:
   * @sbmlconstant{SBML_QUAL_FUNCTION_TERM, SBMLTypeCode_t} (default).
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getItemTypeCode () const;

  /**
   * Get the DefaultTerm from this ListOfFunctionTerms.
   *
   * @return the DefaultTerm in this ListOfFunctionTerms, or @c NULL if no such value is set.
   *
   * @see Transition::getDefaultTerm
   */
  DefaultTerm * getDefaultTerm();

  /**
   * Get the DefaultTerm from this ListOfFunctionTerms.
   *
   * @return the DefaultTerm in this ListOfFunctionTerms, or @c NULL if no such value is set.
   *
   * @see Transition::getDefaultTerm
   */
  const DefaultTerm * getDefaultTerm() const;

  /**
   * Sets the given DefaultTerm to this Transition.
   *
   * @param dt the DefaultTerm object to add.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  int setDefaultTerm(const DefaultTerm* dt);

  /**
   * Predicate returning @c true if the defaultTerm 
   * for this ListOfFunctionTerms object has been set.
   *
   * @return a boolean value indicating whether the defaultTerm
   * child for this object has been defined.
   */
  bool isSetDefaultTerm() const;

  /**
   * Creates a new DefaultTerm object, adds it to this
   * ListOfFunctionTerms and returns the DefaultTerm object created. 
   *
   * @return a new DefaultTerm object instance.
   *
   * @see setDefaultTerm(const DefaultTerm* ft)
   */
   DefaultTerm* createDefaultTerm();


  /** @cond doxygenLibsbmlInternal */
  /**
   * Connects to child elements.
   */
  virtual void setSBMLDocument (SBMLDocument* d);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Connects to child elements.
   */
  virtual bool accept (SBMLVisitor& v) const;
  /** @endcond */


protected:

  /** @cond doxygenLibsbmlInternal */
  /**
   * Creates a new FunctionTerm in this ListOfFunctionTerms
   */
  virtual SBase* createObject(XMLInputStream& stream);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write the namespace for the Qual package.
   */
  virtual void writeXMLNS(XMLOutputStream& stream) const;


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write the namespace for the Qual package.
   */
  virtual void writeElements(XMLOutputStream& stream) const;


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Connects to child elements.
   */
  virtual void connectToChild ();


  /** @endcond */


  DefaultTerm * mDefaultTerm;

};



LIBSBML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Creates a new FunctionTerm_t structure using the given SBML @p level
 * and @p version, and the @p pkgVersion package version.
 *
 * @param level an unsigned int, the SBML Level to assign to this
 * FunctionTerm_t.
 * @param version an unsigned int, the SBML Version to assign to this
 * FunctionTerm_t.
 * @param pkgVersion an unsigned int, the SBML 'Qual' package Version to assign to this
 * FunctionTerm_t.
 *
 * @return a pointer to the newly created FunctionTerm_t structure.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
FunctionTerm_t *
FunctionTerm_create(unsigned int level, unsigned int version,
                    unsigned int pkgVersion);


/**
 * Frees the given FunctionTerm_t structure.
 *
 * @param ft the FunctionTerm_t structure to free.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
void
FunctionTerm_free(FunctionTerm_t * ft);


/**
 * Returns a copy of the given FunctionTerm_t structure.
 *
 * @param ft the FunctionTerm_t structure to copy.
 * 
 * @return a (deep) copy of the FunctionTerm_t.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
FunctionTerm_t *
FunctionTerm_clone(FunctionTerm_t * ft);


/**
 * Takes a FunctionTerm_t structure and returns its resultLevel.
 *
 * @param ft the FunctionTerm_t whose resultLevel is sought.
 *
 * @return the resultLevel attribute of the given FunctionTerm_t, as an @c int.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_getResultLevel(FunctionTerm_t * ft);


/**
 * Predicate returning @c 1 (true) or @c 0 (false) depending on whether the given
 * FunctionTerm_t structure's resultLevel is set.
 *
 * @param ft the FunctionTerm_t structure to query.
 * 
 * @return @c 1 (true) if the "resultLevel" attribute of the given
 * FunctionTerm_t structure is set, @c 0 (false) otherwise.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_isSetResultLevel(FunctionTerm_t * ft);


/**
 * Sets the "resultLevel" attribute of the given FunctionTerm_t
 * structure.
 *
 * @param ft the FunctionTerm_t structure.
 * 
 * @param resultLevel the value of resultLevel to assign to the "resultLevel" attribute.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_setResultLevel(FunctionTerm_t * ft, int resultLevel);


/**
 * Unsets the "resultLevel" attribute of the given FunctionTerm_t structure.
 *
 * @param ft the FunctionTerm_t structure to unset.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_unsetResultLevel(FunctionTerm_t * ft);


/**
 * Returns the value of the "math" element of this FunctionTerm_t.
 *
 * @param ft the FunctionTerm_t structure whose math is sought.
 *
 * @return the value of the "math" element of this FunctionTerm_t as a
 * ASTNode_t.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
const ASTNode_t*
FunctionTerm_getMath(const FunctionTerm_t * ft);


/**
 * Predicate returning @c 1 (true) if this FunctionTerm_t's "math" element is
 * set.
 *
 * @param ft the FunctionTerm_t structure.
 *
 * @return @c 1 (true) if this FunctionTerm_t's "math" element has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_isSetMath(const FunctionTerm_t * ft);


/**
 * Sets the value of the "math" element of this FunctionTerm_t.
 *
 * @param ft the FunctionTerm_t structure.
 *
 * @param math ASTNode_t value of the "math" element to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_setMath(FunctionTerm_t * ft, const ASTNode_t* math);


/**
 * Unsets the value of the "math" element of this FunctionTerm_t.
 *
 * @param ft the FunctionTerm_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_unsetMath(FunctionTerm_t * ft);


/**
  * Predicate returning @c 1 (true) or @c 0 (false) depending on whether
  * all the required attributes for the given FunctionTerm_t structure
  * have been set.
  *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_hasRequiredAttributes(const FunctionTerm_t * ft);


/**
  * Predicate returning @c 1 (true) or @c 0 (false) depending on whether
  * all the required elements for the given FunctionTerm_t structure
  * have been set.
  *
   * @note The required elements for a FunctionTerm object are:
   * @li "math"
  *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
int
FunctionTerm_hasRequiredElements(const FunctionTerm_t * ft);


/**
 * Return the FunctionTerm_t indicated by the given @p sid.
 *
 * @param lo the ListOf_t structure to use.
 *
 * @param sid a string, the identifier of the
 * FunctionTerm_t being sought.
 *
 * @return the FunctionTerm_t for the given variable, or @c NULL if no such
 * FunctionTerm_t exists.
 *
 * @memberof FunctionTerm_t
 */
LIBSBML_EXTERN
FunctionTerm_t *
ListOfFunctionTerms_getById(ListOf_t * lo, const char * sid);


/**
 * Removes the FunctionTerm_t structure with the given @p sid
 * from the given ListOf_t structure and returns a pointer to it.
 *
 * The caller owns the returned structure and is responsible for deleting it.
 *
 * @param lo the ListOf_t structure.
 * @param sid the string of the "id" attribute of the FunctionTerm_t sought.
 *
 * @return the FunctionTerm_t structure removed.  As mentioned above, the 
 * caller owns the returned structure. @c NULL is returned if no FunctionTerm_t
 * structure with the "id" attribute exists in the given ListOf_t structure.
 *
 * @memberof ListOfFunctionTerms_t
 */
LIBSBML_EXTERN
FunctionTerm_t *
ListOfFunctionTerms_removeById(ListOf_t * lo, const char * sid);




END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  FunctionTerm_H__  */
