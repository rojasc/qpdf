// Copyright (c) 2005-2009 Jay Berkenbilt
//
// This file is part of qpdf.  This software may be distributed under
// the terms of version 2 of the Artistic License which may be found
// in the source distribution.  It is provided "as is" without express
// or implied warranty.

#ifndef __QPDFXREFENTRY_HH__
#define __QPDFXREFENTRY_HH__

#include <qpdf/DLL.h>

class QPDFXRefEntry
{
  public:
    // Type constants are from the PDF spec section
    // "Cross-Reference Streams":
    // 0 = free entry; not used
    // 1 = "uncompressed"; field 1 = offset
    // 2 = "compressed"; field 1 = object stream number, field 2 = index

    DLL_EXPORT
    QPDFXRefEntry();
    DLL_EXPORT
    QPDFXRefEntry(int type, int field1, int field2);

    DLL_EXPORT
    int getType() const;
    DLL_EXPORT
    int getOffset() const;	// only for type 1
    DLL_EXPORT
    int getObjStreamNumber() const; // only for type 2
    DLL_EXPORT
    int getObjStreamIndex() const;	// only for type 2

  private:
    int type;
    int field1;
    int field2;
};

#endif // __QPDFXREFENTRY_HH__
