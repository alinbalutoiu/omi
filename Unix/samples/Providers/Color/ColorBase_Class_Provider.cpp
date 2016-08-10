/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#include <MI.h>
#include "ColorBase_Class_Provider.h"

MI_BEGIN_NAMESPACE

ColorBase_Class_Provider::ColorBase_Class_Provider(
    Module* module) :
    m_Module(module)
{
}

ColorBase_Class_Provider::~ColorBase_Class_Provider()
{
}

void ColorBase_Class_Provider::Load(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void ColorBase_Class_Provider::Unload(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void ColorBase_Class_Provider::EnumerateInstances(
    Context& context,
    const String& nameSpace,
    const PropertySet& propertySet,
    bool keysOnly,
    const MI_Filter* filter)
{
    ColorBase_Class colorBase;
    colorBase.Id_value(1000);
    context.Post(colorBase);

    context.Post(MI_RESULT_OK);
}

void ColorBase_Class_Provider::GetInstance(
    Context& context,
    const String& nameSpace,
    const ColorBase_Class& instanceName,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void ColorBase_Class_Provider::CreateInstance(
    Context& context,
    const String& nameSpace,
    const ColorBase_Class& newInstance)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void ColorBase_Class_Provider::ModifyInstance(
    Context& context,
    const String& nameSpace,
    const ColorBase_Class& modifiedInstance,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void ColorBase_Class_Provider::DeleteInstance(
    Context& context,
    const String& nameSpace,
    const ColorBase_Class& instanceName)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}


MI_END_NAMESPACE
