/* Copyright 2010-2011 JP Norair
  *
  * Licensed under the OpenTag License, Version 1.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  * http://www.indigresso.com/wiki/doku.php?id=opentag:license_1_0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  */
/**
  * @file       /Apps/.../platform_config.h
  * @author     JP Norair (jpnorair@indigresso.com)
  * @version    V1.0
  * @date       16 November 2011
  * @brief      Board & Platform Selection
  *
  * Don't actually include this.  Include OT_platform.h instead.
  ******************************************************************************
  */

#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H

#include "build_config.h"



// Comment-out the boards you are not using
#include "board_EM430RF.h"
//#include "board_DKA7433.h"



/// Macro settings: ENABLED, DISABLED, NOT_AVAILABLE
#ifdef ENABLED
#   undef ENABLED
#endif
#define ENABLED  1

#ifdef DISABLED
#   undef DISABLED
#endif
#define DISABLED  0

#ifdef NOT_AVAILABLE
#   undef NOT_AVAILABLE
#endif
#define NOT_AVAILABLE   DISABLED



#define OS_FEATURE(VAL)                 DISABLED                // NO OS Featuresetting just yet
#define OS_FEATURE_MEMCPY               DISABLED                //  
#define OS_FEATURE_MALLOC               DISABLED



#endif 
