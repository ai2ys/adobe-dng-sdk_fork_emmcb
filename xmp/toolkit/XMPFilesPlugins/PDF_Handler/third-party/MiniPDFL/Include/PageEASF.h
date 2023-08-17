/*
* DO NOT EDIT THIS FILE MANNUALLY.
*
*
* Header file generated AUTOMATICALLY by The batch file ...\Tools\win\makePDFLHfromASF.bat.
* The batch file calls ZBFGen2, a ZString2.0 library program, using the template ...\Tools\win\ztrings\PDFLError_Str.tmpl.
*
* DO NOT EDIT THIS FILE MANNUALLY. THIS IS CLOSELY TIED WITH THE ZString2.0 Binary
* Format. Regenerate this whenever the corresponding .asfx file changes.
*
*/


DefineErr(pageErrNoError, "No error.")

DefineErr(pageErrTooFewOps, "Too few operands.")

DefineErr(pageErrWrongOpType, "Wrong operand type.")

DefineErr(pageErrOpTooLarge, "Operand too large.")

DefineErr(pageErrBadContents, "The page contents object has the wrong type.")

DefineErr(pageErrImageExpectedNumber, "Expected a number while parsing an image.")

DefineErr(pageErrExpectedEndOfColor, "Expected end of color space.")

DefineErr(pageErrExpectedHexOrASC85, "Expected AsciiHex or Ascii85 string.")

DefineErr(pageErrErrorParsingImage, "There was an error while trying to parse an image.")

DefineErr(pageErrBadTypeInXTextArray, "Bad object type within a text operator array.")

DefineErr(pageErrUnexpectedOpInDisplay, "Found an unexpected operator in the display list.")

DefineErr(pageErrInvalidGRestore, "Invalid restore.")

DefineErr(pageErrFontNotSet, "Font has not been set.")

DefineErr(pageErrTooFewPathOps, "Too few operands in path.")

DefineErr(pageErrImageTooBig, "Image in Form, Type 3 font, or Pattern is too big.")

DefineErr(pageErrParseContextError, "Error while parsing a Form, Type 3 font, or Pattern.")

DefineErr(pageErrBadType3Font, "Invalid Type 3 font.")

DefineErr(pageErrFontNotInResources, "A font is not in the Resources dictionary.")

DefineErr(pageErrInvalidDash, "Dash arguments are invalid.")

DefineErr(pageErrArrayLenWrong, "Array length is out of range.")

DefineErr(pageErrNumberOutOfRange, "A number value is out of range.")

DefineErr(pageErrColorOutOfRange, "A color value is out of range.")

DefineErr(pageErrIllegalOpInTextOutline, "There is an illegal operator inside a text outline object.")

DefineErr(pageErrWrongNumOpsInCurve, "A curve operator has the wrong number of operands.")

DefineErr(pageErrSeveralParsingErrors, "An error exists on this page. Acrobat may not display the page correctly. Please contact the person who created the PDF document to correct the problem.")

DefineErr(pageErrWrongOperand, "Wrong operand type - expected type '%s'.")

DefineErr(pageErrFontNotInResDict, "Could not find a font in the Resources dictionary - using Helvetica instead.")

DefineErr(pageErrXObjectNotFound, "Could not find the XObject named '%s'.")

DefineErr(pageErrFormNotFound, "Could not find the Form named '%s'.")

DefineErr(pageErrUnknownXObjectType, "Unknown XObject type '%s'.")

DefineErr(pageErrReadLessImageData, "Insufficient data for an image.")

DefineErr(pageErrUnrecognizedToken, "An unrecognized token '%s' was found.")

DefineErr(pageErrTokenTypeNotRec, "Token type not recognized.")

DefineErr(pageErrTooFewArgs, "There were too few arguments.")

DefineErr(pageErrTooManyArgs, "There were too many arguments.")

DefineErr(pageErrOperandTooLarge, "An operand is too large.")

DefineErr(pageErrErrorReadingPage, "There was an error reading page %s near the contents: ")

DefineErr(pageErrImageExpectedEI, "Expected 'EI' while parsing an image.")

DefineErr(pageErrUnknownFilterName, "Unknown filter name.")

DefineErr(pageErrBadDecodeArray, "Bad decode array.")

DefineErr(pageErrIllegalOpInPath, "Illegal operation inside a path.")

DefineErr(pageErrIllegalOpInTextObj, "Illegal operation '%s' inside a text object.")

DefineErr(pageErrReadLessImageColor, "An indexed color table is too small.")

DefineErr(pageErrWrongArgsForSetColor, "Wrong number of arguments for a setcolor operator.")

DefineErr(pageErrUnknownColorSpace, "Unknown ColorSpace '%s'.")

DefineErr(pageErrColorSpaceNotFound, "Could not find the ColorSpace named '%s'.")

DefineErr(pageErrBadForm, "Invalid Form.")

DefineErr(pageErrIllegalTextOp, "Illegal operation '%s' outside text object.")

DefineErr(pageErrFormTypeNotAvailable, "Form type '%s' is not supported.")

DefineErr(pageErrOBSOLETE, "")

DefineErr(pageErrRecursiveMachine, "Internal error - machine called recursively.")

DefineErr(pageErrInvalidImageMaskDepth, "An image is specified as an image mask with more than 1 bit per pixel.")

DefineErr(pageErrBadPattern, "Invalid Pattern.")

DefineErr(pageErrPatternTypeNotAvailable, "Pattern type '%s' is not supported.")

DefineErr(pageErrPatternNotFound, "Could not find the Pattern named '%s'.")

DefineErr(pageErrBadColorSpace, "Invalid ColorSpace.")

DefineErr(pageErrMissingResource, "A resource is missing")

DefineErr(pageErrMissingKey, "Dictionary is missing the key '%s'.")

DefineErr(pageErrEGStateNotFound, "Could not find the Extended Graphics State named '%s'.")

DefineErr(pageErrBadEGS, "Invalid Extended Graphics State due to invalid entry of '%s'.")

DefineErr(pageErrBadFunction, "Invalid Function resource.")

DefineErr(pageErrBadEPSColorSpace, "An image uses a color space which will not separate correctly in some applications.")

DefineErr(pageErrBadShading, "Error in Shading dictionary.")

DefineErr(pageErrBadMaskImage, "Error in Masked Image.")

DefineErr(pageErrTooManyComps, "There were too many color components.")

DefineErr(pageErrNotLevel3, "A feature requires PostScript 3.")

DefineErr(pageErrBadAltXObject, "Invalid alternate image for the XObject named '%s'.")

DefineErr(pageErrBadTGroup, "Invalid Transparency Group")

DefineErr(pageErrBadSoftMask, "Invalid Soft Mask")

DefineErr(pageErrBadHalftone, "Invalid Halftone")

DefineErr(pageErrIllegalColorOp, "A color operator was used where it is not permitted.")

DefineErr(pageErrRefXObjTargetNotFound, "Reference XObject target '%s' not found.")

DefineErr(pageErrRefXObjPageNum, "Invalid page number for target document '%s'")

DefineErr(pageErrRefXObjMissingInvalidID, "Missing or Invalid ID in Reference Dictionary")

DefineErr(pageErrRefXObjUnmatchedID, "Xobject ID does not match with Document ID for Reference XObject '%s'")

DefineErr(pageErrRefXObjMissingInvalidMetadata, "Missing or invalid metadata in X-5 compliant file")

DefineErr(pageErrRefXObjRecursive, "Reference XObject '%s' points to itself")

DefineErr(pageErrUnableRenderImage, "There was an error while trying to render an image")

DefineErr(pageErrErrorParsingInlineImage, "Image data for an inline image object is out of range")

/* End of automatic generated header file */

/***** End of file ***********************************************************/
