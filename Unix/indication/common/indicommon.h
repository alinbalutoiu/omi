/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

#ifndef _indication_common_indicommon_h
#define _indication_common_indicommon_h

#include <common.h>

BEGIN_EXTERNC

/*
**==============================================================================
**
** Defines common macros and const strings
**
**==============================================================================
*/
#define QUERY_LANGUAGE_WQL MI_T("WQL")
#define QUERY_LANGUAGE_CQL MI_T("CQL")

/*
**==============================================================================
**
** Common utility functions
**
**==============================================================================
*/
/* Create unique subscription ID */
MI_Uint64 GenerateSubscriptionID();


/*
**==============================================================================
**
** Represents subscription target type
** Basically it is the type of the target class
**==============================================================================
*/
typedef enum _SubscriptionTargetType
{
    SUBSCRIP_TARGET_UNSUPPORTED = 0,
    SUBSCRIP_TARGET_DEFAULT = 1,
    SUBSCRIP_TARGET_LIFECYCLE_ALL = 100,
    SUBSCRIP_TARGET_LIFECYCLE_CREATE = 101,
    SUBSCRIP_TARGET_LIFECYCLE_MODIFY = 102,
    SUBSCRIP_TARGET_LIFECYCLE_DELETE = 103,
    SUBSCRIP_TARGET_LIFECYCLE_READ = 104,
    SUBSCRIP_TARGET_LIFECYCLE_METHODCALL = 105
}
SubscriptionTargetType;

/*
**==============================================================================
**
** Get SubscriptionTargetType if given class is lifecycle class
**
**==============================================================================
*/
SubscriptionTargetType GetSubscriptionTargetType(_In_z_ MI_ConstString name);

/*
 *============================================================================== 
 * 
 * Determines whether a specified SubscriptionTargetType falls within the
 * Lifecycle range.
 *
 *============================================================================== 
 */
MI_INLINE
MI_Boolean SubscriptionTargetType_IsLifecycle( SubscriptionTargetType type )
{
    if (SUBSCRIP_TARGET_LIFECYCLE_ALL <= type && 
        SUBSCRIP_TARGET_LIFECYCLE_METHODCALL >= type)
    {
        return MI_TRUE;
    }
    else
    {
        return MI_FALSE;
    }
}

END_EXTERNC

#endif /* _indication_common_indicommon_h */
