///////////////////////////////////////////////////////////////////////////////
//
// Copyright 1998
// Matthew Versluys
//
// Common Identifiers
//


#ifndef __IDENT_H
#define __IDENT_H


///////////////////////////////////////////////////////////////////////////////
//
// Includes
//
#include "str.h"


///////////////////////////////////////////////////////////////////////////////
//
// Definitions
//
#define IDENT_LEN 32
typedef StrCrc<IDENT_LEN> Ident;
typedef StrCrc<IDENT_LEN, CH> IdentCH;


#endif

