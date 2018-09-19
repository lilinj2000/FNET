/*
 * Copyright (c) 2017, NXP Semiconductor, Inc.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __WIFI_SHIELD_GT202_H__
#define __WIFI_SHIELD_GT202_H__

#include "fsl_gpio.h"
#include "wifi_common.h"
#include "pin_mux.h"
#include "fsl_clock.h"

/* This file cannot be included directly in common code, it must pass through "wifi_shield.h" */
#ifndef WIFISHIELD_ENABLED
#   define WIFISHIELD_ENABLED
#else
#   error "Other WiFi shield is already enabled !"
#endif

/* Pinmux function, generated by pinmuxtool */
#define WIFISHIELD_PINMUX_INIT BOARD_InitGT202Shield

/* WLAN_IRQ signal */
#define WIFISHIELD_WLAN_IRQn (GPIO1_Combined_16_31_IRQn)
#define WIFISHIELD_WLAN_ISR GPIO1_Combined_16_31_IRQHandler
#define WIFISHIELD_WLAN_IRQ_DIRECTION (BOARD_INITGT202SHIELD_IRQ_DIRECTION)
#define WIFISHIELD_WLAN_IRQ_PORT (BOARD_INITGT202SHIELD_IRQ_PORT)
#define WIFISHIELD_WLAN_IRQ_GPIO (BOARD_INITGT202SHIELD_IRQ_GPIO)
#define WIFISHIELD_WLAN_IRQ_PIN (BOARD_INITGT202SHIELD_IRQ_GPIO_PIN)

/* WLAN_PWRON (PWRDWN) signal */
#define WIFISHIELD_WLAN_PWRON_DIRECTION (BOARD_INITGT202SHIELD_PWRON_DIRECTION)
#define WIFISHIELD_WLAN_PWRON_PORT (BOARD_INITGT202SHIELD_PWRON_PORT)
#define WIFISHIELD_WLAN_PWRON_GPIO (BOARD_INITGT202SHIELD_PWRON_GPIO)
#define WIFISHIELD_WLAN_PWRON_PIN (BOARD_INITGT202SHIELD_PWRON_GPIO_PIN)

/* SPI settings */
#define WIFISHIELD_SPI (LPSPI1)
#define WIFISHIELD_SPI_INIT_CS (kLPSPI_Pcs0)
#define WIFISHIELD_SPI_XFER_CS (kLPSPI_MasterPcs0)
#define WIFISHIELD_SPI_BAUDRATE (10000000)
#define WIFISHIELD_SPI_THRESHOLD (8)
#define WIFISHIELD_SPI_INTMUX_CHNL (0)

/* Select USB1 PLL PFD0 (720 MHz) as lpspi clock source */
#define WIFISHIELD_SPI_CLOCK_SOURCE_SELECT (1U)
/* Clock divider for master lpspi clock source */
#define WIFISHIELD_SPI_CLOCK_SOURCE_DIVIDER (7U)
#define WIFISHIELD_SPI_CLOCK_FREQ \
    (CLOCK_GetFreq(kCLOCK_Usb1PllPfd0Clk) / (WIFISHIELD_SPI_CLOCK_SOURCE_DIVIDER + 1U))

/* DMAMUX settings, interconnect SPI with DMA */
#define WIFISHIELD_DMAMUX (DMAMUX)
#define WIFISHIELD_DMAMUX_RX_REQ (kDmaRequestMuxLPSPI1Rx)
#define WIFISHIELD_DMAMUX_TX_REQ (kDmaRequestMuxLPSPI1Tx)

/* DMA settings */
#define WIFISHIELD_DMA (DMA0)
#define WIFISHIELD_DMA_RX_CHNL (0)
#define WIFISHIELD_DMA_IM_CHNL (1)
#define WIFISHIELD_DMA_TX_CHNL (2)

#endif
