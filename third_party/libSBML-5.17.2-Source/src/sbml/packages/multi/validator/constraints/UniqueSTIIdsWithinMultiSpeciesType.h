/**
 * @cond doxygenLibsbmlInternal
 *
 * @file    UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType.h
 * @brief   Ensures the SpeciesTypeInstance ids within a MultiSpeciesType are unique
 * @author  Fengkai Zhang
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
 * Copyright 2011-2012 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution
 * and also available online as http://sbml.org/software/libsbml/license.html
 * ---------------------------------------------------------------------- -->
 */

#ifndef UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType_h
#define UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType_h


#ifdef __cplusplus

#include <string>

#include "UniqueMultiIdBase.h"

LIBSBML_CPP_NAMESPACE_BEGIN

class UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType: public UniqueMultiIdBase
{
public:

  /**
   * Creates a new Constraint with the given constraint id.
   */
  UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType (unsigned int id, MultiValidator& v);

  /**
   * Destroys this Constraint.
   */
  virtual ~UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType ();


protected:

  /**
   * Checks that all the SpeciesTypeInstance ids under the direct parent MultiSpeciesType objects are unique.
   */
  virtual void doCheck (const Model& st);
};

LIBSBML_CPP_NAMESPACE_END

#endif  /* __cplusplus */
#endif  /* UniqueSpeciesTypeInstanceIdsWithinMultiSpeciesType_h */

/** @endcond */