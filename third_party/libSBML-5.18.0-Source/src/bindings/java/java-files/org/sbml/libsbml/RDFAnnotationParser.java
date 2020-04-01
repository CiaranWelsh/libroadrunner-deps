/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.sbml.libsbml;

/** 
 *  MIRIAM-compliant RDF annotation reader/writer.
 <p>
 * <p style='color: #777; font-style: italic'>
This class of objects is defined by libSBML only and has no direct
equivalent in terms of SBML components.  This class is not prescribed by
the SBML specifications, although it is used to implement features
defined in SBML.
</p>

 <p>
 * {@link RDFAnnotationParser} is a libSBML construct used as part of the libSBML
 * support for annotations conforming to the guidelines specified by MIRIAM
 * (<a target='_blank'
 * href='http://www.nature.com/nbt/journal/v23/n12/abs/nbt1156.html'>'Minimum
 * Information Requested in the Annotation of biochemical Models'</a>,
 * <i>Nature Biotechnology</i>, vol. 23, no. 12, Dec. 2005).  Section 6 of
 * the SBML Level&nbsp;2 and Level&nbsp;3 specification documents defines a
 * recommended way of encoding MIRIAM information using a subset of RDF (<a
 * target='_blank' href='http://www.w3.org/RDF/'>Resource Description
 * Format</a>).  The general scheme is as follows.  A set of RDF-based
 * annotations attached to a given SBML <code>&lt;annotation&gt;</code>
 * element are read by {@link RDFAnnotationParser} and converted into a list of
 * {@link CVTerm} objects.  There are different versions of the main method, {@link RDFAnnotationParser#parseRDFAnnotation(XMLNode, CVTermList)}  and
 * {@link RDFAnnotationParser#parseRDFAnnotation(XMLNode annotation)}, used
 * depending on whether the annotation in question concerns the MIRIAM model
 * history or other MIRIAM resource annotations.  A special object class,
 * {@link ModelHistory}, is used to make it easier to manipulate model history
 * annotations.
 <p>
 * All of the methods on {@link RDFAnnotationParser} are static; the class exists
 * only to encapsulate the annotation and {@link CVTerm} parsing and manipulation
 * functionality.
 */

public class RDFAnnotationParser {
   private long swigCPtr;
   protected boolean swigCMemOwn;

   protected RDFAnnotationParser(long cPtr, boolean cMemoryOwn)
   {
     swigCMemOwn = cMemoryOwn;
     swigCPtr    = cPtr;
   }

   protected static long getCPtr(RDFAnnotationParser obj)
   {
     return (obj == null) ? 0 : obj.swigCPtr;
   }

   protected static long getCPtrAndDisown (RDFAnnotationParser obj)
   {
     long ptr = 0;

     if (obj != null)
     {
       ptr             = obj.swigCPtr;
       obj.swigCMemOwn = false;
     }

     return ptr;
   }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libsbmlJNI.delete_RDFAnnotationParser(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  
/**
   * Parses an annotation into a {@link ModelHistory} class instance.
   <p>
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding {@link CVTerm} objects.
   <p>
   * @param annotation {@link XMLNode} containing the annotation.
   * @param stream optional {@link XMLInputStream} that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   <p>
   * 
   <p>
   * @return a pointer to the {@link ModelHistory} created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation, String metaId, XMLInputStream stream) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_0(XMLNode.getCPtr(annotation), annotation, metaId, XMLInputStream.getCPtr(stream), stream);
    return (cPtr == 0) ? null : new ModelHistory(cPtr, false);
  }

  
/**
   * Parses an annotation into a {@link ModelHistory} class instance.
   <p>
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding {@link CVTerm} objects.
   <p>
   * @param annotation {@link XMLNode} containing the annotation.
   * @param stream optional {@link XMLInputStream} that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   <p>
   * 
   <p>
   * @return a pointer to the {@link ModelHistory} created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation, String metaId) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_1(XMLNode.getCPtr(annotation), annotation, metaId);
    return (cPtr == 0) ? null : new ModelHistory(cPtr, false);
  }

  
/**
   * Parses an annotation into a {@link ModelHistory} class instance.
   <p>
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements representing model history
   * information, and create a list of corresponding {@link CVTerm} objects.
   <p>
   * @param annotation {@link XMLNode} containing the annotation.
   * @param stream optional {@link XMLInputStream} that facilitates error logging.
   * @param metaId optional metaId, if set only the RDF annotation for this metaId will be returned.
   <p>
   * 
   <p>
   * @return a pointer to the {@link ModelHistory} created.
   */ public
 static ModelHistory parseRDFAnnotation(XMLNode annotation) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_2(XMLNode.getCPtr(annotation), annotation);
    return (cPtr == 0) ? null : new ModelHistory(cPtr, false);
  }

  
/**
   * Creates a blank annotation and returns its root {@link XMLNode} object.
   <p>
   * This creates a completely empty SBML <code>&lt;annotation&gt;</code>
   * element.  It is not attached to any SBML element.  An example of how
   * this might be used is illustrated in the following code fragment.  In
   * this example, suppose that <code>content</code> is an {@link XMLNode} object previously
   * created, containing MIRIAM-style annotations, and that <code>sbmlObject</code>
   * is an SBML object derived from {@link SBase} (e.g., a {@link Model}, or a {@link Species}, or
   * a {@link Compartment}, etc.).  Then:<pre class='fragment'>
int success;                                   // Status code variable.

{@link XMLNode} RDF = createRDFAnnotation();          // Create XML structure.
success      = RDF.addChild(...content...);    // Put some content into it.
...                                            // Check return code value.

{@link XMLNode} ann = createAnnotation();             // Create &lt;annotation&gt;.
success      = ann.addChild(RDF);              // Put the annotation into it.
...                                            // Check return code value.

success      = sbmlObject.setAnnotation(ann); // Set object's annotation.
...                                            // Check return code value.
</pre>
   <p>
   * The SBML specification contains more information about the format of
   * annotations.  We urge readers to consult Section&nbsp;6 of the SBML
   * Level&nbsp;2 (Versions 2&ndash;4) and SBML Level&nbsp;3 specification
   * documents.
   <p>
   * @return a pointer to an {@link XMLNode} for the annotation.
   <p>
   * 
   <p>
   * @see RDFAnnotationParser#createRDFAnnotation() 
   */ public
 static XMLNode createAnnotation() {
    long cPtr = libsbmlJNI.RDFAnnotationParser_createAnnotation();
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   <p>
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
<pre class='fragment'>
&lt;rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' &gt;

&lt;/rdf:RDF&gt;
</pre>
   <p>
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * {@link RDFAnnotationParser#createAnnotation()}
   * is available for creating the container.
   <p>
   * @return a pointer to an {@link XMLNode}.
   <p>
   * 
   <p>
   * @see RDFAnnotationParser#createAnnotation() 
   */ public
 static XMLNode createRDFAnnotation(long level, long version) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_createRDFAnnotation__SWIG_0(level, version);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   <p>
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
<pre class='fragment'>
&lt;rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' &gt;

&lt;/rdf:RDF&gt;
</pre>
   <p>
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * {@link RDFAnnotationParser#createAnnotation()}
   * is available for creating the container.
   <p>
   * @return a pointer to an {@link XMLNode}.
   <p>
   * 
   <p>
   * @see RDFAnnotationParser#createAnnotation() 
   */ public
 static XMLNode createRDFAnnotation(long level) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_createRDFAnnotation__SWIG_1(level);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Creates a blank RDF element suitable for use in SBML annotations.
   <p>
   * The annotation created by this method has namespace declarations for
   * all the relevant XML namespaces used in RDF annotations and also has
   * an empty RDF element.  The result is the following XML:
<pre class='fragment'>
&lt;rdf:RDF xmlns:rdf='http://www.w3.org/1999/02/22-rdf-syntax-ns#'
         xmlns:dc='http://purl.org/dc/elements/1.1/'
         xmlns:dcterms='http://purl.org/dc/terms/'
         xmlns:vCard='http://www.w3.org/2001/vcard-rdf/3.0#'
         xmlns:bqbiol='http://biomodels.net/biology-qualifiers/'
         xmlns:bqmodel='http://biomodels.net/model-qualifiers/' &gt;

&lt;/rdf:RDF&gt;
</pre>
   <p>
   * Note that this does not create the containing SBML
   * <code>&lt;annotation&gt;</code> element; the method
   * {@link RDFAnnotationParser#createAnnotation()}
   * is available for creating the container.
   <p>
   * @return a pointer to an {@link XMLNode}.
   <p>
   * 
   <p>
   * @see RDFAnnotationParser#createAnnotation() 
   */ public
 static XMLNode createRDFAnnotation() {
    long cPtr = libsbmlJNI.RDFAnnotationParser_createRDFAnnotation__SWIG_2();
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Takes a list of {@link CVTerm} objects and creates a the RDF 'Description'
   * element.
   <p>
   * This essentially takes the given SBML object, reads out the {@link CVTerm}
   * objects attached to it, creates an RDF 'Description' element to hold
   * the terms, and adds each term with appropriate qualifiers.
   <p>
   * @param obj the SBML object to start from.
   <p>
   * @return the {@link XMLNode} tree corresponding to the Description element of
   * an RDF annotation.
   <p>
   * 
   */ public
 static XMLNode createCVTerms(SBase obj) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_createCVTerms(SBase.getCPtr(obj), obj);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Takes a list of {@link CVTerm} objects and creates a complete SBML annotation
   * around it.
   <p>
   * This essentially takes the given SBML object, reads out the {@link CVTerm}
   * objects attached to it, calls * {@link RDFAnnotationParser#createRDFAnnotation()} to create an RDF
   * annotation to hold the terms, and finally calls * {@link RDFAnnotationParser#createAnnotation()} to wrap the result as
   * an SBML <code>&lt;annotation&gt;</code> element.
   <p>
   * @param obj the SBML object to start from.
   <p>
   * @return the {@link XMLNode} tree corresponding to the annotation.
   <p>
   * 
   */ public
 static XMLNode parseCVTerms(SBase obj) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseCVTerms(SBase.getCPtr(obj), obj);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Reads the model history and cvTerms stored in <code>obj</code> and creates the
   * XML structure for an SBML annotation representing that metadata if 
   * there is a model history stored in <code>obj</code>.
   <p>
   * @param obj any {@link SBase} object.
   <p>
   * @return the {@link XMLNode} corresponding to an annotation containing 
   * MIRIAM-compliant model history and CV term information in RDF format.
   <p>
   * @note If the object does not have a history element stored then
   * <code>null</code> is returned even if CVTerms are present.
   <p>
   * 
   */ public
 static XMLNode parseModelHistory(SBase obj) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseModelHistory(SBase.getCPtr(obj), obj);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Reads the model history stored in <code>obj</code> and creates the
   * XML structure for an SBML annotation representing that history.
   <p>
   * @param obj any {@link SBase} object.
   <p>
   * @return the {@link XMLNode} corresponding to an annotation containing 
   * MIRIAM-compliant model history information in RDF format.
   <p>
   * 
   */ public
 static XMLNode parseOnlyModelHistory(SBase obj) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_parseOnlyModelHistory(SBase.getCPtr(obj), obj);
    return (cPtr == 0) ? null : new XMLNode(cPtr, false);
  }

  
/**
   * Deletes any SBML MIRIAM RDF annotation found in the given {@link XMLNode} 
   * tree and returns
   * any remaining annotation content.
   <p>
   * The name of the {@link XMLNode} given as parameter <code>annotation</code> must be
   * 'annotation', or else this method returns <code>null.</code>  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove them if they conform to the syntax
   * of a History or {@link CVTerm} element.
   <p>
   * @param annotation the {@link XMLNode} tree within which the RDF annotation is
   * to be found and deleted.
   <p>
   * @return the {@link XMLNode} structure that is left after RDF annotations are
   * deleted.
   <p>
   * 
   */ public
 static XMLNode deleteRDFAnnotation(XMLNode annotation) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_deleteRDFAnnotation(XMLNode.getCPtr(annotation), annotation);
    return (cPtr == 0) ? null : new XMLNode(cPtr, true);
  }

  
/**
   * Deletes any SBML MIRIAM RDF 'History' annotation found in the given 
   * {@link XMLNode} tree and returns
   * any remaining annotation content.
   <p>
   * The name of the {@link XMLNode} given as parameter <code>annotation</code> must be
   * 'annotation', or else this method returns <code>null.</code>  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove any that conform to the syntax of a
   * History element.
   <p>
   * @param annotation the {@link XMLNode} tree within which the RDF annotation is
   * to be found and deleted.
   <p>
   * @return the {@link XMLNode} structure that is left after RDF annotations are
   * deleted.
   <p>
   * 
   */ public
 static XMLNode deleteRDFHistoryAnnotation(XMLNode annotation) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_deleteRDFHistoryAnnotation(XMLNode.getCPtr(annotation), annotation);
    return (cPtr == 0) ? null : new XMLNode(cPtr, false);
  }

  
/**
   * Deletes any SBML MIRIAM RDF '{@link CVTerm}' annotation found in the given 
   * {@link XMLNode} tree and returns
   * any remaining annotation content.
   <p>
   * The name of the {@link XMLNode} given as parameter <code>annotation</code> must be
   * 'annotation', or else this method returns <code>null.</code>  The method will
   * walk down the XML structure looking for elements that are in the
   * RDF XML namespace, and remove any that conform to the syntax of a
   * {@link CVTerm} element.
   <p>
   * @param annotation the {@link XMLNode} tree within which the RDF annotation is
   * to be found and deleted.
   <p>
   * @return the {@link XMLNode} structure that is left after RDF annotations are
   * deleted.
   <p>
   * 
   */ public
 static XMLNode deleteRDFCVTermAnnotation(XMLNode annotation) {
    long cPtr = libsbmlJNI.RDFAnnotationParser_deleteRDFCVTermAnnotation(XMLNode.getCPtr(annotation), annotation);
    return (cPtr == 0) ? null : new XMLNode(cPtr, false);
  }

  
  /**
   * Parses an annotation (given as an {@link XMLNode} tree) into a
   * list of {@link CVTerm} objects.
   * <p>
   * This is used to take an annotation that has been read into an SBML
   * model, identify the RDF elements within it, and create a list of
   * corresponding {@link CVTerm} (controlled vocabulary term) objects.
   * <p>
   * @param annotation {@link XMLNode} containing the annotation.
   * <p>
   * @param CVTerms a {@link CVTermList} of {@link CVTerm} objects to be created.
   * <p>
   * @see #parseRDFAnnotation(XMLNode annotation)
   */
 public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms) {
    libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_3(XMLNode.getCPtr(annotation), annotation, CVTermList.getCPtr(CVTerms), CVTerms);
  }

  public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms, String metaId, XMLInputStream stream) {
    libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_4(XMLNode.getCPtr(annotation), annotation, CVTermList.getCPtr(CVTerms), CVTerms, metaId, XMLInputStream.getCPtr(stream), stream);
  }

  public static void parseRDFAnnotation(XMLNode annotation, CVTermList CVTerms, String metaId) {
    libsbmlJNI.RDFAnnotationParser_parseRDFAnnotation__SWIG_5(XMLNode.getCPtr(annotation), annotation, CVTermList.getCPtr(CVTerms), CVTerms, metaId);
  }

  public RDFAnnotationParser() {
    this(libsbmlJNI.new_RDFAnnotationParser(), true);
  }

}
