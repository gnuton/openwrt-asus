/**********************************************************************************
** Copyright � 2009 - 2010 Broadcom Corporation
**
** This program  is the  proprietary software  of Broadcom  Corporation and/or  its
** licensors, and may only be used, duplicated, modified or distributed pursuant to
** the  terms and  conditions of  a separate,  written license  agreement executed
** between you and Broadcom (an "Authorized  License").  Except as set forth in  an
** Authorized License, Broadcom  grants no license  (express or implied),  right to
** use, or waiver of any kind with respect to the Software, and Broadcom  expressly
** reserves all rights in and to the Software and all intellectual property  rights
** therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE  THIS
** SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE  ALL
** USE OF THE SOFTWARE.
**
** Except as expressly set forth in the Authorized License,
**
** 1.      This  program,  including  its  structure,  sequence  and  organization,
** constitutes  the valuable  trade secrets  of Broadcom,  and you  shall use  all
** reasonable  efforts to  protect the  confidentiality thereof,  and to  use this
** information only  in connection  with your  use of  Broadcom integrated  circuit
** products.
**
** 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS  IS"
** AND  WITH  ALL  FAULTS  AND  BROADCOM  MAKES  NO  PROMISES,  REPRESENTATIONS  OR
** WARRANTIES, EITHER EXPRESS,  IMPLIED, STATUTORY, OR  OTHERWISE, WITH RESPECT  TO
** THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF
** TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE,  LACK
** OF  VIRUSES,  ACCURACY OR  COMPLETENESS,  QUIET ENJOYMENT,  QUIET  POSSESSION OR
** CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE  OR
** PERFORMANCE OF THE SOFTWARE.
**
** 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR ITS
** LICENSORS BE  LIABLE FOR  (i) CONSEQUENTIAL,  INCIDENTAL, SPECIAL,  INDIRECT, OR
** EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF  OR IN ANY WAY RELATING TO  YOUR USE
** OF OR INABILITY  TO USE THE  SOFTWARE EVEN IF  BROADCOM HAS BEEN  ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY
** PAID FOR THE SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
** SHALL APPLY  NOTWITHSTANDING ANY  FAILURE OF  ESSENTIAL PURPOSE  OF ANY  LIMITED
** REMEDY.
***********************************************************************************/

/***********************************************************************************
**
**    Description:
**
**      This file defines the Telephony Client Application Manager Interface to
**      the outside world endpoint control.
**
***********************************************************************************/

/* ---- Include Files ----------------------------------------------------------- */
#include <tcamInc.h>

/* ---- Public Variables -------------------------------------------------------- */

/* ---- Private Constants and Types --------------------------------------------- */

/* ---- Private Variables ------------------------------------------------------- */

/* ---- Private Function Prototypes --------------------------------------------- */

/* ---- Functions --------------------------------------------------------------- */

/****************************************************************************
** FUNCTION:   tcamIfcEpt
**
** PURPOSE:    TCAM interface to the endpoint session realm that may be
**             internal to TCAM or external as a third party module.
**
** PARAMETERS: eCmd  - the session command to apply.
**             uPhy  - the physical handle associated with this session.
**             uHdl  - the handle for which this command applies.
**             pData - additional data (may be NULL) necessary to complete
**                     the action.
**
** RETURNS:    The reference index for the session of interest as allocated
**             by the outside world.
**
** NOTE:
*****************************************************************************/
BOS_UINT32 tcamIfcEpt ( CMGRSESCMD eCmd, BOS_UINT32 uPhy,
                        BOS_UINT32 uHdl, void *pData )
{
   BOS_UINT32 uRet;   
   CMGRMEDINFO *pCmgrMed = (CMGRMEDINFO *)pData;

   /* Use the application index - which should be set at this time - as the
   ** handle.
   */
   if ( pCmgrMed && (eCmd != eCMGRSESCMD_ACTMONTHRES) )
   {
      uRet = pCmgrMed->uAppIx;
   }
   else
   {
      uRet = uHdl;
   }

   /* If due to some race condition on initial creation the handle
   ** seen here is not the application handle yet, remap it.
   */
   if ( eCmd == eCMGRSESCMD_CREATE )
   {
      tcamResRemapAppHdl( pCmgrMed->uAppIx, &uRet );
   }

   TCAM_IFC__EPT_CALLBACK__IMPLEMENT (( (BOS_UINT32) eCmd,
                                        uPhy,
                                        uRet,
                                        pData ));   

   return uRet;   
}


