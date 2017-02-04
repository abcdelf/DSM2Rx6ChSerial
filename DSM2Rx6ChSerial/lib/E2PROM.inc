;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME:   E2PROM.inc
;;  Version: 1.7, Updated on 2015/3/4 at 22:26:11
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION:
;;    Assembler include file for E2PROM User Module
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "e2promlib.inc"

;-----------------------------------------------
;  EQUATES
;-----------------------------------------------
E2PROM_START_BLOCK:              equ      7fh                        ; Starting block of E2PROM EEPROM device
E2PROM_START_ADDR:               equ      7fh * 64                   ; absolute address of E2PROM EEPROM device
E2PROM_LENGTH:                   equ      40h                        ; length of E2PROM EEPROM device

E2_WR_ARG_STACK_FRAME_SIZE:      equ       7    ; E2PROM_bE2Write: SIZE of the argument list in stack frame
E2_RD_ARG_STACK_FRAME_SIZE:      equ       6    ; E2PROM_bE2Read:  SIZE of argument list in stack frame

;-------------------------------------
;  RETURN VALUES
;-------------------------------------
E2PROM_NOERROR:                  equ      0                          ; Successfull completion
E2PROM_FAILURE:                  equ     -1                          ; Error condition
E2PROM_STACKOVERFLOW:            equ     -2                          ; Error Stack Overflow


; end of E2PROM.inc