/******************************************************************************
*  Generated by PSoC Designer 5.4.3191
******************************************************************************/
#include <m8c.h>
/*
*   PSoCGPIOINT.h
*   Data: 04 June, 2002
*   Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
*
*  This file is generated by the Device Editor on Application Generation.
*  It contains equates that are useful in writing code relating to GPIO
*  related values.
*  
*  DO NOT EDIT THIS FILE MANUALLY, AS IT IS OVERWRITTEN!!!
*  Edits to this file will not be preserved.
*/
// IRQ address and mask defines
#pragma	ioport	IRQ_Data_ADDR:	0x0
BYTE			IRQ_Data_ADDR;
#pragma	ioport	IRQ_DriveMode_0_ADDR:	0x100
BYTE			IRQ_DriveMode_0_ADDR;
#pragma	ioport	IRQ_DriveMode_1_ADDR:	0x101
BYTE			IRQ_DriveMode_1_ADDR;
#pragma	ioport	IRQ_DriveMode_2_ADDR:	0x3
BYTE			IRQ_DriveMode_2_ADDR;
#pragma	ioport	IRQ_GlobalSelect_ADDR:	0x2
BYTE			IRQ_GlobalSelect_ADDR;
#pragma	ioport	IRQ_IntCtrl_0_ADDR:	0x102
BYTE			IRQ_IntCtrl_0_ADDR;
#pragma	ioport	IRQ_IntCtrl_1_ADDR:	0x103
BYTE			IRQ_IntCtrl_1_ADDR;
#pragma	ioport	IRQ_IntEn_ADDR:	0x1
BYTE			IRQ_IntEn_ADDR;
#define IRQ_MASK 0x40
#pragma	ioport	IRQ_MUXBusCtrl_ADDR:	0x1d8
BYTE			IRQ_MUXBusCtrl_ADDR;
// MISO address and mask defines
#pragma	ioport	MISO_Data_ADDR:	0x0
BYTE			MISO_Data_ADDR;
#pragma	ioport	MISO_DriveMode_0_ADDR:	0x100
BYTE			MISO_DriveMode_0_ADDR;
#pragma	ioport	MISO_DriveMode_1_ADDR:	0x101
BYTE			MISO_DriveMode_1_ADDR;
#pragma	ioport	MISO_DriveMode_2_ADDR:	0x3
BYTE			MISO_DriveMode_2_ADDR;
#pragma	ioport	MISO_GlobalSelect_ADDR:	0x2
BYTE			MISO_GlobalSelect_ADDR;
#pragma	ioport	MISO_IntCtrl_0_ADDR:	0x102
BYTE			MISO_IntCtrl_0_ADDR;
#pragma	ioport	MISO_IntCtrl_1_ADDR:	0x103
BYTE			MISO_IntCtrl_1_ADDR;
#pragma	ioport	MISO_IntEn_ADDR:	0x1
BYTE			MISO_IntEn_ADDR;
#define MISO_MASK 0x1
#pragma	ioport	MISO_MUXBusCtrl_ADDR:	0x1d8
BYTE			MISO_MUXBusCtrl_ADDR;
// SCLK address and mask defines
#pragma	ioport	SCLK_Data_ADDR:	0x0
BYTE			SCLK_Data_ADDR;
#pragma	ioport	SCLK_DriveMode_0_ADDR:	0x100
BYTE			SCLK_DriveMode_0_ADDR;
#pragma	ioport	SCLK_DriveMode_1_ADDR:	0x101
BYTE			SCLK_DriveMode_1_ADDR;
#pragma	ioport	SCLK_DriveMode_2_ADDR:	0x3
BYTE			SCLK_DriveMode_2_ADDR;
#pragma	ioport	SCLK_GlobalSelect_ADDR:	0x2
BYTE			SCLK_GlobalSelect_ADDR;
#pragma	ioport	SCLK_IntCtrl_0_ADDR:	0x102
BYTE			SCLK_IntCtrl_0_ADDR;
#pragma	ioport	SCLK_IntCtrl_1_ADDR:	0x103
BYTE			SCLK_IntCtrl_1_ADDR;
#pragma	ioport	SCLK_IntEn_ADDR:	0x1
BYTE			SCLK_IntEn_ADDR;
#define SCLK_MASK 0x8
#pragma	ioport	SCLK_MUXBusCtrl_ADDR:	0x1d8
BYTE			SCLK_MUXBusCtrl_ADDR;
// RST address and mask defines
#pragma	ioport	RST_Data_ADDR:	0x0
BYTE			RST_Data_ADDR;
#pragma	ioport	RST_DriveMode_0_ADDR:	0x100
BYTE			RST_DriveMode_0_ADDR;
#pragma	ioport	RST_DriveMode_1_ADDR:	0x101
BYTE			RST_DriveMode_1_ADDR;
#pragma	ioport	RST_DriveMode_2_ADDR:	0x3
BYTE			RST_DriveMode_2_ADDR;
#pragma	ioport	RST_GlobalSelect_ADDR:	0x2
BYTE			RST_GlobalSelect_ADDR;
#pragma	ioport	RST_IntCtrl_0_ADDR:	0x102
BYTE			RST_IntCtrl_0_ADDR;
#pragma	ioport	RST_IntCtrl_1_ADDR:	0x103
BYTE			RST_IntCtrl_1_ADDR;
#pragma	ioport	RST_IntEn_ADDR:	0x1
BYTE			RST_IntEn_ADDR;
#define RST_MASK 0x10
#pragma	ioport	RST_MUXBusCtrl_ADDR:	0x1d8
BYTE			RST_MUXBusCtrl_ADDR;
// MOSI address and mask defines
#pragma	ioport	MOSI_Data_ADDR:	0x0
BYTE			MOSI_Data_ADDR;
#pragma	ioport	MOSI_DriveMode_0_ADDR:	0x100
BYTE			MOSI_DriveMode_0_ADDR;
#pragma	ioport	MOSI_DriveMode_1_ADDR:	0x101
BYTE			MOSI_DriveMode_1_ADDR;
#pragma	ioport	MOSI_DriveMode_2_ADDR:	0x3
BYTE			MOSI_DriveMode_2_ADDR;
#pragma	ioport	MOSI_GlobalSelect_ADDR:	0x2
BYTE			MOSI_GlobalSelect_ADDR;
#pragma	ioport	MOSI_IntCtrl_0_ADDR:	0x102
BYTE			MOSI_IntCtrl_0_ADDR;
#pragma	ioport	MOSI_IntCtrl_1_ADDR:	0x103
BYTE			MOSI_IntCtrl_1_ADDR;
#pragma	ioport	MOSI_IntEn_ADDR:	0x1
BYTE			MOSI_IntEn_ADDR;
#define MOSI_MASK 0x20
#pragma	ioport	MOSI_MUXBusCtrl_ADDR:	0x1d8
BYTE			MOSI_MUXBusCtrl_ADDR;
// SS address and mask defines
#pragma	ioport	SS_Data_ADDR:	0x0
BYTE			SS_Data_ADDR;
#pragma	ioport	SS_DriveMode_0_ADDR:	0x100
BYTE			SS_DriveMode_0_ADDR;
#pragma	ioport	SS_DriveMode_1_ADDR:	0x101
BYTE			SS_DriveMode_1_ADDR;
#pragma	ioport	SS_DriveMode_2_ADDR:	0x3
BYTE			SS_DriveMode_2_ADDR;
#pragma	ioport	SS_GlobalSelect_ADDR:	0x2
BYTE			SS_GlobalSelect_ADDR;
#pragma	ioport	SS_IntCtrl_0_ADDR:	0x102
BYTE			SS_IntCtrl_0_ADDR;
#pragma	ioport	SS_IntCtrl_1_ADDR:	0x103
BYTE			SS_IntCtrl_1_ADDR;
#pragma	ioport	SS_IntEn_ADDR:	0x1
BYTE			SS_IntEn_ADDR;
#define SS_MASK 0x80
#pragma	ioport	SS_MUXBusCtrl_ADDR:	0x1d8
BYTE			SS_MUXBusCtrl_ADDR;
// TX8 address and mask defines
#pragma	ioport	TX8_Data_ADDR:	0x4
BYTE			TX8_Data_ADDR;
#pragma	ioport	TX8_DriveMode_0_ADDR:	0x104
BYTE			TX8_DriveMode_0_ADDR;
#pragma	ioport	TX8_DriveMode_1_ADDR:	0x105
BYTE			TX8_DriveMode_1_ADDR;
#pragma	ioport	TX8_DriveMode_2_ADDR:	0x7
BYTE			TX8_DriveMode_2_ADDR;
#pragma	ioport	TX8_GlobalSelect_ADDR:	0x6
BYTE			TX8_GlobalSelect_ADDR;
#pragma	ioport	TX8_IntCtrl_0_ADDR:	0x106
BYTE			TX8_IntCtrl_0_ADDR;
#pragma	ioport	TX8_IntCtrl_1_ADDR:	0x107
BYTE			TX8_IntCtrl_1_ADDR;
#pragma	ioport	TX8_IntEn_ADDR:	0x5
BYTE			TX8_IntEn_ADDR;
#define TX8_MASK 0x40
#pragma	ioport	TX8_MUXBusCtrl_ADDR:	0x1d9
BYTE			TX8_MUXBusCtrl_ADDR;
// LED address and mask defines
#pragma	ioport	LED_Data_ADDR:	0xc
BYTE			LED_Data_ADDR;
#pragma	ioport	LED_DriveMode_0_ADDR:	0x10c
BYTE			LED_DriveMode_0_ADDR;
#pragma	ioport	LED_DriveMode_1_ADDR:	0x10d
BYTE			LED_DriveMode_1_ADDR;
#pragma	ioport	LED_DriveMode_2_ADDR:	0xf
BYTE			LED_DriveMode_2_ADDR;
#pragma	ioport	LED_GlobalSelect_ADDR:	0xe
BYTE			LED_GlobalSelect_ADDR;
#pragma	ioport	LED_IntCtrl_0_ADDR:	0x10e
BYTE			LED_IntCtrl_0_ADDR;
#pragma	ioport	LED_IntCtrl_1_ADDR:	0x10f
BYTE			LED_IntCtrl_1_ADDR;
#pragma	ioport	LED_IntEn_ADDR:	0xd
BYTE			LED_IntEn_ADDR;
#define LED_MASK 0x1
#pragma	ioport	LED_MUXBusCtrl_ADDR:	0x1db
BYTE			LED_MUXBusCtrl_ADDR;
// BIND address and mask defines
#pragma	ioport	BIND_Data_ADDR:	0xc
BYTE			BIND_Data_ADDR;
#pragma	ioport	BIND_DriveMode_0_ADDR:	0x10c
BYTE			BIND_DriveMode_0_ADDR;
#pragma	ioport	BIND_DriveMode_1_ADDR:	0x10d
BYTE			BIND_DriveMode_1_ADDR;
#pragma	ioport	BIND_DriveMode_2_ADDR:	0xf
BYTE			BIND_DriveMode_2_ADDR;
#pragma	ioport	BIND_GlobalSelect_ADDR:	0xe
BYTE			BIND_GlobalSelect_ADDR;
#pragma	ioport	BIND_IntCtrl_0_ADDR:	0x10e
BYTE			BIND_IntCtrl_0_ADDR;
#pragma	ioport	BIND_IntCtrl_1_ADDR:	0x10f
BYTE			BIND_IntCtrl_1_ADDR;
#pragma	ioport	BIND_IntEn_ADDR:	0xd
BYTE			BIND_IntEn_ADDR;
#define BIND_MASK 0x4
#pragma	ioport	BIND_MUXBusCtrl_ADDR:	0x1db
BYTE			BIND_MUXBusCtrl_ADDR;
