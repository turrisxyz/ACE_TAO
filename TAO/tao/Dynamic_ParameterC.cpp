// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:323


#include "Dynamic_ParameterC.h"
#include "tao/CDR.h"
#include "tao/Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "Dynamic_ParameterC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:64

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_Dynamic_Parameter[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  26,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x44796e61), 
  ACE_NTOHL (0x6d69632f), 
  ACE_NTOHL (0x50617261), 
  ACE_NTOHL (0x6d657465), 
  ACE_NTOHL (0x723a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:Dynamic/Parameter:1.0
    10,
  ACE_NTOHL (0x50617261), 
  ACE_NTOHL (0x6d657465), 
  ACE_NTOHL (0x72000000),  // name = Parameter
  2, // member count
    9,
  ACE_NTOHL (0x61726775), 
  ACE_NTOHL (0x6d656e74), 
  ACE_NTOHL (0x0),  // name = argument
    CORBA::tk_any,

  5,
  ACE_NTOHL (0x6d6f6465), 
  ACE_NTOHL (0x0),  // name = mode
    CORBA::tk_enum, // typecode kind
  116, // encapsulation length
TAO_ENCAP_BYTE_ORDER, // byte order
    36,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f5242), 
    ACE_NTOHL (0x412f5061), 
    ACE_NTOHL (0x72616d65), 
    ACE_NTOHL (0x7465724d), 
    ACE_NTOHL (0x6f64653a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CORBA/ParameterMode:1.0
    14,
    ACE_NTOHL (0x50617261), 
    ACE_NTOHL (0x6d657465), 
    ACE_NTOHL (0x724d6f64), 
    ACE_NTOHL (0x65000000),  // name = ParameterMode
    3, // member count
    9,
    ACE_NTOHL (0x50415241), 
    ACE_NTOHL (0x4d5f494e), 
    ACE_NTOHL (0x0),  // name = PARAM_IN
    10,
    ACE_NTOHL (0x50415241), 
    ACE_NTOHL (0x4d5f4f55), 
    ACE_NTOHL (0x54000000),  // name = PARAM_OUT
    12,
    ACE_NTOHL (0x50415241), 
    ACE_NTOHL (0x4d5f494e), 
    ACE_NTOHL (0x4f555400),  // name = PARAM_INOUT
    
};

static CORBA::TypeCode _tc_TAO_tc_Dynamic_Parameter (
    CORBA::tk_struct,
    sizeof (_oc_Dynamic_Parameter),
    (char *) &_oc_Dynamic_Parameter,
    0,
    sizeof (Dynamic::Parameter)
  );

namespace Dynamic
{
  ::CORBA::TypeCode_ptr _tc_Parameter =
    &_tc_TAO_tc_Dynamic_Parameter;
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/structure_cs.cpp:66

void 
Dynamic::Parameter::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  Parameter *_tao_tmp_pointer =
    ACE_static_cast (Parameter *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_cs.cpp:61

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Dynamic::Parameter &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.argument) &&
    (strm << _tao_aggregate.mode);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Dynamic::Parameter &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.argument) &&
    (strm >> _tao_aggregate.mode);
}

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1633

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_Var_Var_T<
        Dynamic::Parameter
      >;

  template class
    TAO_Var_Base_T<
        Dynamic::Parameter
      >;

  template class
    TAO_Out_T<
        Dynamic::Parameter,
        Dynamic::Parameter_var
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_Var_Var_T< \
        Dynamic::Parameter \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        Dynamic::Parameter \
      >

# pragma instantiate \
    TAO_Out_T< \
        Dynamic::Parameter, \
        Dynamic::Parameter_var \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

