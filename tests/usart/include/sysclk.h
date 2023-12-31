/***************************************************************************************************
 * @file        sysclk.h
 * 
 * @brief       Header file for System Clock
 * 
 * @details     This file provides the necessary definitions and functions for configuring the
 *              System Clock.
 * 
 * @author      Hiram Montejano Gómez (hiram.montejano.gomez@gmail.com)
 * 
 * @date        Last Updated: 04/11/2023
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


#ifndef SYSCLK_TEST_H
#define SYSCLK_TEST_H


#define SYS_CLK       60000000UL
#define AHB_FREQ      (SYS_CLK * 1UL)
#define APB1_FREQ     (AHB_FREQ / 4UL)
#define APB2_FREQ     (AHB_FREQ / 2UL)


void set_system_clock(void);  /* Sets the System Clock to 60MHz */

#endif