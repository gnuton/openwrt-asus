/**********************************************************************************
** Copyright (c) 2011-2013 Broadcom
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
**      This file contains the Call Manager feature processing functionality.
**
***********************************************************************************/

#ifndef __CM_FEAT__H__INCLUDED__
#define __CM_FEAT__H__INCLUDED__

/* ---- Include Files ----------------------------------------------------------- */
#include <cmDm.h>

/* ---- Constants and Types ----------------------------------------------------- */

/* ---- Function Prototypes ----------------------------------------------------- */
#if defined(__cplusplus)
extern "C"
{
#endif



/***********************************************************************************
** FUNCTION:   cmFeatApplyAction
**
** PURPOSE:    Feature handler to apply an action from the digit manipulation
**             output.
**
** PARAMETERS: pRes - the resource to apply this action on.
**             eAction - the action to execute.
**
** RETURNS:    BOS_TRUE if the action is successfully processed and one can
**             continue with other successive actions following.
**             BOS_FALSE otherwise.
***********************************************************************************/
BOS_BOOL cmFeatApplyAction ( void *pRes, CMDMACTIONTYPE eAction );



/***********************************************************************************
** FUNCTION:   cmFeatDialStrManip
**
** PURPOSE:    Apply feature specific digit string manipulation.  This function
**             is meant to be used to see whether a given dial string needs to
**             be morphed to a different one prior to digit map processing.
**
** PARAMETERS: pUsrRes - the user resource to apply this on.
**             pSesRes - the session resource associated to the user (can be
**                       NULL) to apply this on.  Only relevant when the dialing
**                       is associated with a session rather than with the user.
**
** RETURNS:    BOS_TRUE if the dial string was manipulated (i.e. changed in any
**             ways within this function call), BOS_FALSE otherwise.
***********************************************************************************/
BOS_BOOL cmFeatDialStrManip ( void *pUsrRes, void *pSesRes );




#if defined(__cplusplus)
}
#endif

#endif /* __CM_FEAT__H__INCLUDED__ */

