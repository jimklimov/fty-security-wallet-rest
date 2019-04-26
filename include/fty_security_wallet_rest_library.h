/*  =========================================================================
    fty-security-wallet-rest - generated layer of public API

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_SECURITY_WALLET_REST_LIBRARY_H_INCLUDED
#define FTY_SECURITY_WALLET_REST_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <cxxtools/allocator.h>
#include <fty_log.h>
#include <fty_common_mlm.h>
#include <fty_common_rest.h>

//  FTY_SECURITY_WALLET_REST version macros for compile-time API detection
#define FTY_SECURITY_WALLET_REST_VERSION_MAJOR 1
#define FTY_SECURITY_WALLET_REST_VERSION_MINOR 0
#define FTY_SECURITY_WALLET_REST_VERSION_PATCH 0

#define FTY_SECURITY_WALLET_REST_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_SECURITY_WALLET_REST_VERSION \
    FTY_SECURITY_WALLET_REST_MAKE_VERSION(FTY_SECURITY_WALLET_REST_VERSION_MAJOR, FTY_SECURITY_WALLET_REST_VERSION_MINOR, FTY_SECURITY_WALLET_REST_VERSION_PATCH)

// czmq_prelude.h bits
#if !defined (__WINDOWS__)
#   if (defined WIN32 || defined _WIN32 || defined WINDOWS || defined _WINDOWS)
#       undef __WINDOWS__
#       define __WINDOWS__
#   endif
#endif

// Windows MSVS doesn't have stdbool
#if (defined (_MSC_VER) && !defined (true))
#   if (!defined (__cplusplus) && (!defined (true)))
#       define true 1
#       define false 0
        typedef char bool;
#   endif
#else
#   include <stdbool.h>
#endif
// czmq_prelude.h bits

#if defined (__WINDOWS__)
#   if defined FTY_SECURITY_WALLET_REST_STATIC
#       define FTY_SECURITY_WALLET_REST_EXPORT
#   elif defined FTY_SECURITY_WALLET_REST_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_SECURITY_WALLET_REST_EXPORT __declspec(dllexport)
#       else
#           define FTY_SECURITY_WALLET_REST_EXPORT
#       endif
#   elif defined FTY_SECURITY_WALLET_REST_EXPORTS
#       define FTY_SECURITY_WALLET_REST_EXPORT __declspec(dllexport)
#   else
#       define FTY_SECURITY_WALLET_REST_EXPORT __declspec(dllimport)
#   endif
#   define FTY_SECURITY_WALLET_REST_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_SECURITY_WALLET_REST_EXPORT
#   define FTY_SECURITY_WALLET_REST_PRIVATE
#else
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_SECURITY_WALLET_REST_PRIVATE __attribute__ ((visibility ("hidden")))
#       define FTY_SECURITY_WALLET_REST_EXPORT __attribute__ ((visibility ("default")))
#   else
#       define FTY_SECURITY_WALLET_REST_PRIVATE
#       define FTY_SECURITY_WALLET_REST_EXPORT
#   endif
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _helpers_t helpers_t;
#define HELPERS_T_DEFINED


//  Public classes, each with its own header file
#include "helpers.h"

#ifdef FTY_SECURITY_WALLET_REST_BUILD_DRAFT_API

#ifdef __cplusplus
extern "C" {
#endif

//  Self test for private classes
FTY_SECURITY_WALLET_REST_EXPORT void
    fty_security_wallet_rest_private_selftest (bool verbose, const char *subtest);

#ifdef __cplusplus
}
#endif
#endif // FTY_SECURITY_WALLET_REST_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/