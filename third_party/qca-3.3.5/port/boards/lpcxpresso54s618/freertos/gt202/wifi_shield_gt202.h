/*
 * Copyright (c) 2017, NXP Semiconductor, Inc.
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __WIFI_SHIELD_GT202_H__
#define __WIFI_SHIELD_GT202_H__

#include "wifi_common.h"
#include "pin_mux.h"

/* This file cannot be included directly in common code, it must pass through "wifi_shield.h" */
#ifndef WIFISHIELD_ENABLED
#   define WIFISHIELD_ENABLED
#else
#   error "Other WiFi shield is already enabled !"
#endif

/* Pinmux function, generated by pinmuxtool */
#define WIFISHIELD_PINMUX_INIT BOARD_InitGT202Shield

/* WLAN_IRQ PINT */
#define WIFISHIELD_WLAN_PINT (kPINT_PinInt0)
#define WIFISHIELD_WLAN_PINT_EDGE (kPINT_PinIntEnableFallEdge)
#define WIFISHIELD_WLAN_PINT_CONNECT (kINPUTMUX_GpioPort1Pin22ToPintsel)
#define WIFISHIELD_WLAN_PINT_IRQ (PIN_INT0_IRQn)

/* WLAN_IRQ signal */
#define WIFISHIELD_WLAN_IRQ_DIRECTION (BOARD_INITGT202SHIELD_IRQ_DIRECTION)
#define WIFISHIELD_WLAN_IRQ_PORT (BOARD_INITGT202SHIELD_IRQ_PORT)
#define WIFISHIELD_WLAN_IRQ_GPIO (BOARD_INITGT202SHIELD_IRQ_GPIO)
#define WIFISHIELD_WLAN_IRQ_PIN (BOARD_INITGT202SHIELD_IRQ_GPIO_PIN)
#define WIFISHIELD_WLAN_IRQ_CLOCKSRC (kCLOCK_Gpio1)

/* WLAN_PWRON (PWRDWN) signal */
#define WIFISHIELD_WLAN_PWRON_DIRECTION (BOARD_INITGT202SHIELD_PWRON_DIRECTION)
#define WIFISHIELD_WLAN_PWRON_PORT (BOARD_INITGT202SHIELD_PWRON_PORT)
#define WIFISHIELD_WLAN_PWRON_GPIO (BOARD_INITGT202SHIELD_PWRON_GPIO)
#define WIFISHIELD_WLAN_PWRON_PIN (BOARD_INITGT202SHIELD_PWRON_GPIO_PIN)
#define WIFISHIELD_WLAN_PWRON_CLOCKSRC (kCLOCK_Gpio4)

/* SPI settings */
#define WIFISHIELD_SPI (SPI9)
#define WIFISHIELD_SPI_INIT_CS (kSPI_Ssel0)
#define WIFISHIELD_SPI_CLK_CONNECT (kFRO12M_to_FLEXCOMM9)
#define WIFISHIELD_SPI_IP_RESET (kFC9_RST_SHIFT_RSTn)
#define WIFISHIELD_SPI_BAUDRATE (10000000)
#define WIFISHIELD_SPI_THRESHOLD (8)

/* EDMA settings */
#define WIFISHIELD_DMA (DMA0)
#define WIFISHIELD_DMA_RX_CHNL (22)
#define WIFISHIELD_DMA_TX_CHNL (23)

#endif
