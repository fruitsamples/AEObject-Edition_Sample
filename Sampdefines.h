/*------------------------------------------------------------------------------ * *  Apple Developer Technical Support * *  Edition publishing routines * *  Program:    AEObject-Edition Sample *  File:       SampDefines.h - C Source * *  by:         C.K. Haun <TR> * *  Copyright � 1990-1992 Apple Computer, Inc. *  All rights reserved. * *------------------------------------------------------------------------------ * This file loads the defines, macros, and prototypes I use in this sample *----------------------------------------------------------------------------*/#ifndef __DEFINES__#define __DEFINES__#ifdef __REDUMP__#include "SampConstants.h"#include "Structs.h"#include "prototypes.h"#include "Macros.h"#else#pragma load "Sampheaders"      /* see the Buildheaders.c file */#endif #endif