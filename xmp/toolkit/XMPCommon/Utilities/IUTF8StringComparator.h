#ifndef IUTF8StringComparator_h__
#define IUTF8StringComparator_h__ 1

// =================================================================================================
// Copyright Adobe
// Copyright 2015 Adobe
// All Rights Reserved
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the terms
// of the Adobe license agreement accompanying it. If you have received this file from a source other 
// than Adobe, then your use, modification, or distribution of it requires the prior written permission
// of Adobe.
// =================================================================================================

#include "XMPCommon/XMPCommonFwdDeclarations_I.h"

namespace XMP_COMPONENT_INT_NAMESPACE {

	struct IUTF8StringComparator {

		bool operator() ( const spcIUTF8String & left, const spcIUTF8String & right ) const;
	};
}
#endif  // IUTF8StringComparator_h__

