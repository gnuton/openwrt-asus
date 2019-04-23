/****************************************************************************
*
* Copyright � 2008 Broadcom
*
* This program is the proprietary software of Broadcom and/or its
* licensors, and may only be used, duplicated, modified or distributed
* pursuant to the terms and conditions of a separate, written license
* agreement executed between you and Broadcom (an "Authorized License").
* Except as set forth in an Authorized License, Broadcom grants no license
* (express or implied), right to use, or waiver of any kind with respect to
* the Software, and Broadcom expressly reserves all rights in and to the
* Software and all intellectual property rights therein.  IF YOU HAVE NO
* AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE IN ANY WAY,
* AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE ALL USE OF THE
* SOFTWARE.
*
* Except as expressly set forth in the Authorized License,
*
* 1.     This program, including its structure, sequence and organization,
*        constitutes the valuable trade secrets of Broadcom, and you shall
*        use all reasonable efforts to protect the confidentiality thereof,
*        and to use this information only in connection with your use of
*        Broadcom integrated circuit products.
*
* 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED
*        "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
*        REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
*        OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
*        DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
*        NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
*        ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
*        CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
*        OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
*
* 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM
*        OR ITS LICENSORS BE LIABLE FOR
*        (i)  CONSEQUENTIAL, INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY
*             DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY WAY RELATING TO
*             YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN IF BROADCOM
*             HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES; OR
*        (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE
*             SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE
*             LIMITATIONS SHALL APPLY NOTWITHSTANDING ANY FAILURE OF
*             ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.
*
*****************************************************************************
*
*    Filename: boardHal6362.h
*
****************************************************************************
*    Description:
*
*     Private defines for the 6362 board HAL.
*
****************************************************************************/

#ifndef BOARD_HAL_6XXX_H
#define BOARD_HAL_6XXX_H

#ifdef __cplusplus
extern "C" {
#endif

#define USE_DLB_STUB          1

/* ---- Include Files ---------------------------------------------------- */

#include <vrgCountry.h>
#include <xdrvItpc.h>
#include <xdrvSpinLock.h>
#include <xdrvDebug.h>
#if USE_DLB_STUB
#include <dlbStub.h>
#else
#include <dlb.h>
#endif 
#include <boardHalInit.h>
#include <board.h>
#include <lhapi.h>

/* ---- Constants and Types ---------------------------------------------- */


/* ---- Variable Externs ------------------------------------------------- */

/*
** Shared memory locations used to pass commands between thread processors.
*/
extern XDRV_ITPC_SHARED_MEM_DATA *gHalItpcSharedMemData;


/* ITPC driver instance memory. */
extern XDRV_ITPC                 gHalItpcDrv;


/* Spin lock synchronization primitive used to prevent concurrent access
** to shared memory data structures by both MIPS cores. */
extern XDRV_SPIN_LOCK            *gHalSpinLock;


/* Dynamic load balancing driver. */
#if USE_DLB_STUB
extern DLB_STUB_DRV              gHalDlbDrv;
#else 
extern DLB_DRV                   gHalDlbDrv;
#endif 

/* Debug driver */
extern XDRV_DEBUG                gDebugCmtDrv;

/* DSP stack dump */
extern XDRV_ITPC_DSP_STACK_DUMP *gHalDspStackDump;

/* HAL SHIM configuration table */
extern LHAPI_HALSHIM_CONFIG          *gHalshimConfig;

/* Number of entries in the HAL shom config table */
extern XDRV_UINT32              gHalshimEntryCount;
/* ---- Function Prototypes ---------------------------------------------- */


/*
*****************************************************************************
** FUNCTION:   boardHalDspInit
**
** PURPOSE:    To initialize the DSP, load an image, and start it running.
**
** PARAMETERS:
**
** RETURNS:    0 on success.
**
** NOTE:
*****************************************************************************
*/
int boardHalDspInit( void );


/*
*****************************************************************************
** FUNCTION:   boardHalDspDeinit
**
** PURPOSE:
**
** PARAMETERS:
**
** RETURNS:    void
**
** NOTE:
*****************************************************************************
*/
void boardHalDspDeinit( void );

#ifdef DYING_GASP_API
void boardHalShutdown( void *context );
void boardHalDspShutdown( void *context );
#endif


#ifdef __cplusplus
    }
#endif

#endif  /* BOARD_HAL_6XXX_H  */
