/***************************************************************************************************
 * @file        err.h
 * @defgroup    errors err.h
 * 
 * @brief       Error Number and Error Code
 * 
 * @details     This file defines a combined error information structure that consists 
 *              of an error number and an error code.
 *              The error number represents the type or category of the error, while the 
 *              error code provides additional specific information about the error.
 * 
 *              The error information is stored in a 32-bit memory location, allowing 
 *              for convenient access and manipulation of the error number and error code 
 *              using a single variable. The structure contains two 16-bit fields:
 *              `errorNumber`(errnum) and `errorCode`(errcode).
 * 
 * @author      Hiram Montejano Gómez (hiram.montejano.gomez@gmail.com)
 * 
 * @date        Last Updated:   21/07/2023
 * 
 * @copyright   This file is part of the "STM32F10RB Microcontroller Applications" project.
 * 
 *              Every file is free software: you can redistribute it and/or modify
 *              it under the terms of the GNU General Public License as published by
 *              the Free Software Foundation, either version 3 of the License, or
 *              (at your option) any later version.
 * 
 *              These files are distributed in the hope that they will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *              GNU General Public License for more details.
 * 
 *              You should have received a copy of the GNU General Public License
 *              along with the "STM32F10RB Microcontroller Applications" project. If not, 
 *              see <http://www.gnu.org/licenses/>.
 */

#ifndef ERR_H
#define ERR_H


#include <stdint.h>


/**
 * @defgroup    errvar Error Variables
 * @ingroup     errors
 * @{
 */
/***************************************************************************************************
 * @brief       Error number variable.
 *
 * @details     This variable holds the error number indicating the type of error that occurred.
 *              It is used to provide error information or status in the application.
 *              The value of `errnum` can be accessed and modified from different parts of the code.
 *              Refer to the documentation or code references for specific usage information.
 *
 * @note        This variable is located in the ".err" section at address 0x20000000.
 */
extern uint16_t errnum;


/***************************************************************************************************
 * @brief       Error code variable.
 *
 * @details     This variable holds the error code providing additional information about the error.
 *              It complements the `errnum` variable by providing more specific error details.
 *              The value of `errcode` can be accessed and modified from different parts of the code.
 *              Refer to the documentation or code references for specific usage information.
 *
 * @note        This variable is located in the ".err" section at address 0x20000002.
 */
extern uint16_t errcode;
/** @} */


/***************************************************************************************************
 * @brief       Triggers an error condition, sets error information, and enters an error 
 *              handling loop.
 *
 * @param       number  An unsigned 16-bit integer representing the type of error.
 *                      It is used to set the "errnum" variable, which indicates the type of error.
 *                      (e.g., GPIO error, peripheral error, etc.)
 *
 * @param       code    An unsigned 16-bit integer representing the specific code associated with 
 *                      the error.
 *                      It is used to set the "errcode" variable, which provides additional 
 *                      information about the error condition (e.g., error details, source, etc.).
 */
void triggerError(uint16_t number, uint16_t code);


#endif