/***************************************************************************//**
 * @file
 * @brief CMSIS Cortex-M Peripheral Access Layer for Silicon Laboratories
 *        microcontroller devices
 *
 * This is a convenience header file for defining the part number on the
 * build command line, instead of specifying the part specific header file.
 *
 * @verbatim
 * Example: Add "-DEFM32G890F128" to your build options, to define part
 *          Add "#include "em_device.h" to your source files
 * @endverbatim
 *
 *******************************************************************************
 * # License
 * <b>Copyright 2021 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef EM_DEVICE_H
#define EM_DEVICE_H

#if defined(BGM111A256V2)
#include "bgm111a256v2.h"

#elif defined(BGM111E256V2)
#include "bgm111e256v2.h"

#elif defined(BGM113A256V2)
#include "bgm113a256v2.h"

#elif defined(BGM11S12F256GA)
#include "bgm11s12f256ga.h"

#elif defined(BGM11S22F256GA)
#include "bgm11s22f256ga.h"

#elif defined(BGM121A256V2)
#include "bgm121a256v2.h"

#elif defined(BGM121N256V2)
#include "bgm121n256v2.h"

#elif defined(BGM123A256V2)
#include "bgm123a256v2.h"

#elif defined(BGM123N256V2)
#include "bgm123n256v2.h"

#else
#error "em_device.h: PART NUMBER undefined"
#endif

#endif /* EM_DEVICE_H */
