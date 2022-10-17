/*
 * File: SmartKit.h
 * Project: SmartKit
 * Created Date: Monday, October 17th 2022, 2:15:25 pm
 * Author: Joshua Yewman
 * Author Email: joshua@gosystem.co.uk
 * -----
 * Last Modified:
 * Modified By:
 * -----
 * Copyright (c) 2022 goSysten Solutions Limited
 */

#ifndef SmartKit
#define SmartKit

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4)
#define SMARTKIT_HAS_PRAGMA_MESSAGE
#endif

#define SMARTKIT_VERSION 100001
#ifndef SMARTKIT_INTERNAL
#ifdef SMARTKIT_SHOW_VERSION
#ifdef SMARTKIT_HAS_PRAGMA_MESSAGE
#pragma message "SmartKit version 1.00.001"
#else
#warning SmartKit version 1.00.001
#endif
#endif
#endif

#ifndef __PROG_TYPES_COMPAT__
#define __PROG_TYPES_COMPAT__
#endif

#include "Arduino.h"

class SmartKit
{
};

#endif
