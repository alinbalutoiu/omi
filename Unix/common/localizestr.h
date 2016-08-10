/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

#ifndef _common_localizestr_h
#define _common_localizestr_h

#define STR_SUB_ALL_TARGET_CLASS_FAILED                             MI_T("All target class(es) failed.")
#define STR_OUT_OF_MEMORY                                           MI_T("Out of memory.")
#define STR_NULL_NAMESPACE_NOT_ALLOWED                              MI_T("Namespace cannot be NULL.")
#define STR_NULL_DIALECT_NOT_ALLOWED                                MI_T("Dialect or filter cannot be NULL.")
#define STR_INVALID_FILTER                                          MI_T("The filter expression is invalid because it contains a syntax error.")
#define STR_NOT_SUPPORTED_QUERY_DIALECT                             MI_T("The specified query dialect is not supported. Supported dialects include: WQL, CQL.")
#define STR_INDICATION_CLASS_NOT_FOUND                              MI_T("No indication class was found for the specified indication query. Ensure the target class is present in the given namespace.")

#define STR_LIFECYCLE_INDICATION_QUERY_ISA_HAS_WRONG_PROPERTYNAME   MI_T("The lifecycle filter expression specifies an invalid property name for the ISA operator.")
#define STR_LIFECYCLE_INDICATION_QUERY_NO_ISA_OPERATOR              MI_T("The lifecycle filter expression is not supported. The WHERE clause must specify a target class using an ISA operator.")
#define STR_LIFECYCLE_INDICATION_QUERY_MORETHANONE_ISA_OPERATOR     MI_T("The lifecycle filter expression is not supported. It has more than one ISA operator within the WHERE clause.")
#define STR_LIFECYCLE_INDICATION_QUERY_ISA_OPERATOR_WITHIN_OR       MI_T("The lifecycle filter expression is not supported. The ISA operator is within the scope of an OR operator.")
#define STR_LIFECYCLE_INDICATION_QUERY_INVALID                      MI_T("Invalid lifecycle filter expression.")


#endif /* _common_localizestr_h */


