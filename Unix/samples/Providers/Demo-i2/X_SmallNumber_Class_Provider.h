/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#ifndef _X_SmallNumber_Class_Provider_h
#define _X_SmallNumber_Class_Provider_h

#include "X_SmallNumber.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** X_SmallNumber provider class declaration
**
**==============================================================================
*/

class X_SmallNumber_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;
    Module* GetModule( void ) { return m_Module; };

public:
    X_SmallNumber_Class_Provider(
        Module* module);

    ~X_SmallNumber_Class_Provider();

    void EnumerateInstances(
        Context&  context,
        const String& nameSpace,
        const PropertySet& propertySet,
        bool keysOnly,
        const MI_Filter* filter);

    void GetInstance(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& instance_ref,
        const PropertySet& propertySet);

    void CreateInstance(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& new_instance);

    void ModifyInstance(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& new_instance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& instance_ref);

    void Invoke_SpellNumber(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& instance,
        const X_SmallNumber_SpellNumber_Class& in_param );

    void Invoke_GetFactors(
        Context&  context,
        const String& nameSpace,
        const X_SmallNumber_Class& instance,
        const X_SmallNumber_GetFactors_Class& in_param );

    void Load(
        Context& context);

    void Unload(
        Context& context);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _X_SmallNumber_Class_Provider_h */

