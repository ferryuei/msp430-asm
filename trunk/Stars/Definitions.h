/**********************************************************************************************
* Additional register and bit definitions for the Texas Instruments MSP430 Microcontroller.
* This file supports assembler and C development within the IAR-Embedded-Workbench environment.
* Enclose all #define statements with parentheses
*
* Gerald Gradl, Version 0.1
**********************************************************************************************/

#define F2012
//#define F2132

//**********************************************************************************************
Global_Include_Files                            ; Include files
//**********************************************************************************************
#ifdef F2132
#include        "msp430x21x2.h"
#endif
#ifdef F2012
#include        "msp430x20x2.h"
#endif

/**********************************************************************************************
* GLOBAL DEFINITIONS
**********************************************************************************************/
#define     DotCorrection   00063d
//#define     DotCorrection   0010d
//#define     DIMMLOW         01EFh
#define     DIMMLOW         00050d
//#define     DIMMHIGH        0FFFh
#define     DIMMHIGH        02000d
//#define     DIMMSTEP        00B4h                   // (0fffh-01efh)/20d = 180d
#define     DIMMSTEP        00002d                    // /200d
#define     STARTIME        00200d
#define     BACKGROUNDTIME  00100d
#define     TOTALREPEAT     00015d

//STATUSBITS
#define     FIRSTCYCLE      01h
#define     ONOFF           02h

//#define     WDTIS_3         03h
/**********************************************************************************************
* PORT DEFINITIONS
**********************************************************************************************/
//PORT 1.X
#define     VPRG    001h
#define     GSCLK   002h
#define     XLAT    004h
#define     MULTI   008h
#define     KEYS    008h
#define     BLANK   010h

#define     SCLK    020h
#define     SIN     040h
#define     SOUT    080h

//PORT 2.X
#define     LED     040h

/**********************************************************************************************
* REGISTER DEFINITIONS
**********************************************************************************************/
#define     ACTSTAR R13
#define     RTEMP1  R14				/* Temp register 1 */
#define     RTEMP2  R15				/* Temp register 2 */
#define     CODE_REV 0xFFE0-2                   /* Revision Counter */

/**********************************************************************************************
* Memory Definitions
**********************************************************************************************/
#define		BOR     00200h
#define		EOR     00280h
#define		BOI     01000h
#define		EOI     010FFh
#define		BOF     0F800h
#define		EOF     0FF00h

/**********************************************************************************************
* END OF INCLUDEFILE
**********************************************************************************************/