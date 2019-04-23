/*****************************************************************************
* Copyright 2006 - 2007 Broadcom.  All rights reserved.
*
* This program is the proprietary software of Broadcom and/or
* its licensors, and may only be used, duplicated, modified or distributed
* pursuant to the terms and conditions of a separate, written license
* agreement executed between you and Broadcom (an "Authorized License").
* Except as set forth in an Authorized License, Broadcom grants no license
* (express or implied), right to use, or waiver of any kind with respect to
* the Software, and Broadcom expressly reserves all rights in and to the
* Software and all intellectual property rights therein.  IF YOU HAVE NO
* AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE IN ANY
* WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE ALL USE OF
* THE SOFTWARE.
*
* Except as expressly set forth in the Authorized License,
* 1. This program, including its structure, sequence and organization,
*    constitutes the valuable trade secrets of Broadcom, and you shall use
*    all reasonable efforts to protect the confidentiality thereof, and to
*    use this information only in connection with your use of Broadcom
*    integrated circuit products.
* 2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
*    AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR
*    WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
*    RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND ALL
*    IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS
*    FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR COMPLETENESS,
*    QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE TO DESCRIPTION. YOU
*    ASSUME THE ENTIRE RISK ARISING OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
* 3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR ITS
*    LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL, INDIRECT,
*    OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY WAY RELATING TO
*    YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN
*    ADVISED OF THE POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS
*    OF THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR U.S. $1, WHICHEVER
*    IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING ANY FAILURE OF
*    ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.
*****************************************************************************/



#ifndef MXG_PRESIPSTACKCFG_H
#define MXG_PRESIPSTACKCFG_H

#if 0
#include <cctkCfg.h>
#else
#define CCTKCFG_TLS 1
#define CCTKCFG_IPV6 1
#define CCTKCFG_PRIVACY 1
#define CCTKCFG_TEL_ALL 1
#define CCTKCFG_TEL_MODE CCTKCFG_TEL_ALL
#endif

/* TLS support */
#undef MXD_SIPSTACK_ENABLE_TLS
#if CCTKCFG_TLS
   #define MXD_SIPSTACK_ENABLE_TLS
#endif

/* IPv6 support */
#undef MXD_SIPSTACK_IPV6_ENABLE_SUPPORT
#if CCTKCFG_IPV6
   #define MXD_SIPSTACK_IPV6_ENABLE_SUPPORT
#endif

/* ==============================================================================
** ==  Services  ================================================================
** ==============================================================================
*/
/* Connection services */
#define MXD_SIPSTACK_ENABLE_SIP_CONNECTION_BLACKLIST_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_CORE_OUTPUT_CONTROLLING_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_DESTINATION_SELECTION_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_PERSISTENT_CONNECTION_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_SERVER_LOCATION_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_SIGCOMP_IMS_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_SYMMETRIC_UDP_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_VIA_MANAGEMENT_SVC_SUPPORT

/* Core services */
/* #define MXD_SIPSTACK_ENABLE_SIP_STATELESS_DIGEST_SERVER_AUTH_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_TRANSACTION_STATEFUL_PROXY_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_SESSION_STATEFUL_PROXY_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_STATELESS_PROXY_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_DIGEST_CLIENT_AUTH_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_GENERIC_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_GLARE_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_MESSAGE_SUMMARY_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_PRESENCE_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_REFER_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_REG_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_SPIRITS_INDPS_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_SPIRITS_USER_PROF_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_NOTIFIER_WINFO_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_PUBLISH_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_REDIRECTION_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_REFEREE_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_REFERRER_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_REGISTRATION_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_RELIABLE_PROVISIONAL_RESPONSE_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_REPLACES_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_SESSION_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_SESSION_TIMER_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_STATISTICS_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_PRESENCE_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_REFER_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_REG_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_SPIRITS_INDPS_SVC_SUPPORT */
/* #define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_SPIRITS_USER_PROF_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_SVC_SUPPORT
/* #define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_WINFO_SVC_SUPPORT */
#define MXD_SIPSTACK_ENABLE_SIP_TRANSFER_SVC_07_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_UPDATE_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_PUBLISH_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_USER_AGENT_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_DEPRECATED_SIP_NOTIFIER_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_DEPRECATED_SIP_SUBSCRIBER_SVC_SUPPORT

#if CCTKCFG_PRIVACY
   #define MXD_SIPSTACK_ENABLE_SIP_PRIVACY_SVC_SUPPORT
   #define MXD_SIPSTACK_ENABLE_SIP_UA_ASSERTED_IDENTITY_SVC_SUPPORT
#endif

#define MXD_SIPSTACK_ENABLE_TEMPLATE_SVC
#define MXD_SIPSTACK_ENABLE_SIP_MWI_SVC_SUPPORT
#define MXD_SIPSTACK_ENABLE_SIP_SUBSCRIBER_MESSAGE_SUMMARY_SVC_SUPPORT

#if ( CCTKCFG_TEL_MODE == CCTKCFG_TEL_ALL )
   #define MXD_SIPSTACK_ENABLE_SIP_ENUM_SVC_SUPPORT
   #define MXD_SIPSTACK_ENUM_DEFAULT_ZONE          "e164.arpa"
#endif

#define MXD_SIPSTACK_ENABLE_REGINFO_SUPPORT
#define MXD_SIPSTACK_MAILBOX_URI_ENABLE_SUPPORT


#endif // #ifndef MXG_PRESIPSTACKCFG_H
