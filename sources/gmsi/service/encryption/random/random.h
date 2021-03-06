/****************************************************************************
*  Copyright 2017 Gorgon Meducer (Email:embedded_zhuoran@hotmail.com)       *
*                                                                           *
*  Licensed under the Apache License, Version 2.0 (the "License");          *
*  you may not use this file except in compliance with the License.         *
*  You may obtain a copy of the License at                                  *
*                                                                           *
*     http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                           *
*  Unless required by applicable law or agreed to in writing, software      *
*  distributed under the License is distributed on an "AS IS" BASIS,        *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
*  See the License for the specific language governing permissions and      *
*  limitations under the License.                                           *
*                                                                           *
****************************************************************************/

#ifndef __RANDOM_H__
#define __RANDOM_H__

/*============================ INCLUDES ======================================*/
#include ".\app_cfg.h"

/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/

/*! \note get a random byte
 *  \param none
 *  \return random integer value
 */
#define get_random_u8()     get_random_u16()

/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/

/*! \note set random generator seed 
 *  \param hwSeed random seed
 *  \return none
 */
extern void set_random_seed( uint16_t hwSeed );

/*! \note reset software random generator
 *! \param none
 *! \return none
 */
extern void reset_random( void );

/*! \note get a random integer
 *  \param none
 *  \return random integer value
 */
extern uint16_t get_random_u16( void );

#endif
/* EOF */
