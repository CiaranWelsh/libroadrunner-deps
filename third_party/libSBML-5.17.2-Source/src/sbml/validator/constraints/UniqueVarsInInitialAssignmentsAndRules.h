/**
 * @cond doxygenLibsbmlInternal
 *
 * @file    UniqueVarsInInitialAssignmentsAndRules.h
 * @brief   Ensures unique variables assigned by rules and events
 * @author  Sarah Keating
 * 
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
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
 * ---------------------------------------------------------------------- -->*/

#ifndef UniqueVarsInInitialAssignmentsAndRules_h
#define UniqueVarsInInitialAssignmentsAndRules_h


#ifdef __cplusplus

#include <string>

#include "UniqueIdBase.h"

LIBSBML_CPP_NAMESPACE_BEGIN

class UniqueVarsInInitialAssignmentsAndRules: public UniqueIdBase
{
public:

  /**
   * Creates a new Constraint with the given constraint id.
   */
  UniqueVarsInInitialAssignmentsAndRules (unsigned int id, Validator& v);

  /**
   * Destroys this Constraint.
   */
  virtual ~UniqueVarsInInitialAssignmentsAndRules ();


protected:

  /**
   * Returns the preamble to use when logging constraint violations.  
   *
   * @return the preamble to use when logging constraint violations.
   */
  virtual const char* getPreamble ();

  /**
   * Checks that all ids on the following Model objects are unique:
   * FunctionDefinitions, Species, Compartments, global Parameters,
   * Reactions, and Events.
   */
  virtual void doCheck (const Model& m);

  /**
   * Returns the error message to use when logging constraint violations.
   * This method is called by logFailure.
   *
   * Returns a message that the given @p id and its corresponding object are
   * in conflict with an object previously defined.
   */
  virtual const std::string
  getMessage (const std::string& id, const SBase& object);


  /**
   * Returns the fieldname to use when logging constraint violations
   * ("variable or symbol")
   *
   * Should not actually be called, as this constraint has two different 
   * attributes that could be used.
   *
   * @return the fieldname ("variable or symbol") to use when logging constraint
   * violations.
   */
  virtual const char* getFieldname ();

  /**
   * Returns the fieldname to use when logging constraint violations
   * ("variable" or "symbol", depending on the type)
   *
   * @return the fieldname ("variable" or "symbol") to use when logging constraint
   * violations, depending on the typecode passed in.  If an unknown code 
   * is passed in, "variable or symbol" is returned.
   */
  virtual const char* getFieldname (int typecode);
};

LIBSBML_CPP_NAMESPACE_END

#endif  /* __cplusplus */
#endif  /* UniqueVarsInInitialAssignmentsAndRules_h */
/** @endcond */