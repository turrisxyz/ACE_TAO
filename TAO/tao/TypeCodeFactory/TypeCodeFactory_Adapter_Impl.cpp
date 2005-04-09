// $Id$

#include "TypeCodeFactory_Adapter_Impl.h"
#include "TypeCodeFactory_i.h"
#include "Factory_Map.h"

#include "tao/ORB_Core.h"


ACE_RCSID (TypeCodeFactory,
           TypeCodeFactory_Adapter_Impl,
           "$Id$")


TAO_TypeCodeFactory_Adapter_Impl::~TAO_TypeCodeFactory_Adapter_Impl (void)
{
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_struct_tc (
    const char * id,
    const char * name,
    const CORBA::StructMemberSeq & members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_struct_tc (id,
                               name,
                               members
                               ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_union_tc (
    const char * id,
    const char * name,
    CORBA::TypeCode_ptr discriminator_type,
    const CORBA::UnionMemberSeq & members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_union_tc (id,
                              name,
                              discriminator_type,
                              members
                              ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_enum_tc (
    const char * id,
    const char * name,
    const CORBA::EnumMemberSeq & members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_enum_tc (id,
                             name,
                             members
                             ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_alias_tc (
    const char * id,
    const char * name,
    CORBA::TypeCode_ptr original_type
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_alias_tc (id,
                              name,
                              original_type
                              ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_exception_tc (
    const char * id,
    const char * name,
    const CORBA::StructMemberSeq & members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_exception_tc (id,
                                  name,
                                  members
                                  ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_interface_tc (
    const char * id,
    const char * name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_interface_tc (id,
                                  name
                                  ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_string_tc (
    CORBA::ULong bound
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_string_tc (bound
                               ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_wstring_tc (
    CORBA::ULong bound
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_wstring_tc (bound
                                ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_fixed_tc (
    CORBA::UShort digits,
    CORBA::UShort scale
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_fixed_tc (digits,
                              scale
                              ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_sequence_tc (
    CORBA::ULong bound,
    CORBA::TypeCode_ptr element_type
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_sequence_tc (bound,
                                 element_type
                                 ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_array_tc (
    CORBA::ULong length,
    CORBA::TypeCode_ptr element_type
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_array_tc (length,
                              element_type
                              ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_value_tc (
    const char * id,
    const char * name,
    CORBA::ValueModifier type_modifier,
    CORBA::TypeCode_ptr concrete_base,
    const CORBA::ValueMemberSeq & members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_value_tc (id,
                              name,
                              type_modifier,
                              concrete_base,
                              members
                              ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_value_box_tc (
    const char * id,
    const char * name,
    CORBA::TypeCode_ptr boxed_type
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_value_box_tc (id,
                                  name,
                                  boxed_type
                                  ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_native_tc (
    const char * id,
    const char * name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_native_tc (id,
                               name
                               ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_recursive_tc (
    const char * id
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_recursive_tc (id
                                  ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_abstract_interface_tc (
    const char * id,
    const char * name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_abstract_interface_tc (id,
                                           name
                                           ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_local_interface_tc (
    const char * id,
    const char * name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_local_interface_tc (id,
                                        name
                                        ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_component_tc (
    const char *id,
    const char *name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_component_tc (id,
                                  name
                                  ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_home_tc (
    const char *id,
    const char *name
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_home_tc (id,
                             name
                             ACE_ENV_ARG_PARAMETER);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_event_tc (
    const char *id,
    const char *name,
    CORBA::ValueModifier type_modifier,
    CORBA::TypeCode_ptr concrete_base,
    const CORBA::ValueMemberSeq &members
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO_TypeCodeFactory_i tcf;

  return tcf.create_event_tc (id,
                              name,
                              type_modifier,
                              concrete_base,
                              members
                              ACE_ENV_ARG_PARAMETER);
}

// --

bool
TAO_TypeCodeFactory_Adapter_Impl::extract_typecode (TAO_InputCDR & cdr,
                                                    CORBA::TypeCode_ptr & tc)
{
  CORBA::TCKind kind;
  if (!(cdr >> kind) || kind >= CORBA::TAO_TC_KIND_COUNT)
    return false;

  using namespace TAO::TypeCodeFactory;

  static factory const factory_map[] =
    {
      tc_null_factory,
      tc_void_factory,
      tc_short_factory,
      tc_long_factory,
      tc_ushort_factory,
      tc_ulong_factory,
      tc_float_factory,
      tc_double_factory,
      tc_boolean_factory,
      tc_char_factory,
      tc_octet_factory,
      tc_any_factory,
      tc_TypeCode_factory,
      tc_Principal_factory,
      tc_objref_factory,
      tc_struct_factory,
      tc_union_factory,
      tc_enum_factory,
      tc_string_factory,
      tc_sequence_factory,
      tc_array_factory,
      tc_alias_factory,
      tc_except_factory,
      tc_longlong_factory,
      tc_ulonglong_factory,
      tc_longdouble_factory,
      tc_wchar_factory,
      tc_wstring_factory,
      tc_fixed_factory,
      tc_value_factory,
      tc_value_box_factory,
      tc_native_factory,
      tc_abstract_interface_factory,
      tc_local_interface_factory,
      tc_component_factory,
      tc_home_factory,
      tc_event_factory
    };

  return factory_map[kind] (kind, cdr, tc);
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_enum_tc (
  char const * /* id */,
  char const * /* name */,
  ACE_Array_Base<CORBA::String_var> const & /* enumerators */,
  CORBA::ULong /* ncases */
  ACE_ENV_ARG_DECL)
{
  ACE_THROW_RETURN (CORBA::NO_IMPLEMENT (), CORBA::TypeCode::_nil ());
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_struct_except_tc (
  CORBA::TCKind /* kind */,
  char const * /* id */,
  char const * /* name */,
  ACE_Array_Base<
    TAO::TypeCode::Struct_Field<CORBA::String_var,
                                CORBA::TypeCode_var> > const & /* fields */,
  CORBA::ULong /* nfields */
  ACE_ENV_ARG_DECL)
{
  ACE_THROW_RETURN (CORBA::NO_IMPLEMENT (), CORBA::TypeCode::_nil ());
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_union_tc (
  char const * /* id */,
  char const * /* name */,
  CORBA::TypeCode_ptr /* discriminant_type */,
  ACE_Array_Base<TAO::TypeCode::Case<CORBA::String_var,
                                     CORBA::TypeCode_var> > const & /* cases */,
  CORBA::ULong /* ncases */,
  CORBA::Long /* default_index */,
  char const * /* default_case_name */,
  CORBA::TypeCode_ptr /* default_case_type */
  ACE_ENV_ARG_DECL)
{
  ACE_THROW_RETURN (CORBA::NO_IMPLEMENT (), CORBA::TypeCode::_nil ());
}

CORBA::TypeCode_ptr
TAO_TypeCodeFactory_Adapter_Impl::create_value_event_tc (
  CORBA::TCKind /* kind */,
  char const * /* id */,
  char const * /* name */,
  CORBA::ValueModifier /* modifier */,
  CORBA::TypeCode_ptr /* concrete_base */,
  ACE_Array_Base<
    TAO::TypeCode::Value_Field<CORBA::String_var,
                               CORBA::TypeCode_var> > const & /* fields */,
  CORBA::ULong /* nfields */
  ACE_ENV_ARG_DECL)
{
  ACE_THROW_RETURN (CORBA::NO_IMPLEMENT (), CORBA::TypeCode::_nil ());
}

// *********************************************************************

// Initialization and registration of dynamic service object.

int
TAO_TypeCodeFactory_Adapter_Impl::Initializer (void)
{
  TAO_ORB_Core::typecodefactory_adapter_name ("Concrete_TypeCodeFactory_Adapter");

  return ACE_Service_Config::process_directive (ace_svc_desc_TAO_TypeCodeFactory_Adapter_Impl);
}

ACE_STATIC_SVC_DEFINE (
    TAO_TypeCodeFactory_Adapter_Impl,
    ACE_TEXT ("Concrete_TypeCodeFactory_Adapter"),
    ACE_SVC_OBJ_T,
    &ACE_SVC_NAME (TAO_TypeCodeFactory_Adapter_Impl),
    ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
    0
  )

ACE_FACTORY_DEFINE (TAO_TypeCodeFactory, TAO_TypeCodeFactory_Adapter_Impl)
