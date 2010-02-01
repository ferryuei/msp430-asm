/*********************************************************************************************\
* Filename:     Definitions.h                                                                 *
* Description:  Definition file for Star Project                                              *
* Device:       MSP430F2012IN                                                                 *
* Version:      1.0.2                                                                         *
* Compiler:     IAR Embedded Workbench IDE V.4.21 (TI: V5.21)                                 *
* Date:         01/2010                                                                       *
* Author:       (c) Gerald Gradl                                                              *
\*********************************************************************************************/

/**********************************************************************************************
* GLOBAL INCLUDE FILES
**********************************************************************************************/
#define F2012
//#define F2132

#ifdef F2132
#include        "msp430x21x2.h"
#endif
#ifdef F2012
#include        "msp430x20x2.h"
#endif

/**********************************************************************************************
* GLOBAL DEFINITIONS
**********************************************************************************************/
#define     DotCorrection   00063d                    // 0-63d
#define     DIMMLOW         00050d
#define     DIMMHIGH        01250d                    // 0-4095d
#define     DIMMSTEP        00002d                    // (DIMMHIGH-DIMMLOW)/DIMMSTEP = INTEGER
#define     DIMMTIME        00004d
#define     STARTIME        00400d
#define     BACKGROUNDTIME  00400d
#define     TOTALREPEAT     00010d

#define     ADCNOKEY        00070h
#define     ADCKEY1         00055h
#define     ADCKEY2         00035h
#define     ADCKEY3         00010h

//STATUSBITS
#define     FIRSTCYCLE      01h
#define     ONOFF           02h
#define     INITIAL         04h
#define     ALLONOFF        08h

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
#define     HELL    080h

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
#define	    BOR     00200h
#define	    EOR     00280h
#define	    BOI     01000h
#define	    EOI     010FFh
#define	    BOF     0F800h
#define	    EOF     0FF00h

/**********************************************************************************************
* END OF INCLUDEFILE
**********************************************************************************************/