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
// be/be_codegen.cpp:150

#ifndef _TAO_IDL_FP_SCHEDULINGC_H_
#define _TAO_IDL_FP_SCHEDULINGC_H_

#include "tao/ORB.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/CDR.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/RTScheduling/RTScheduler.h"
#include "tao/RTCORBA/RTCORBA.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:63

namespace TAO
{
  class Collocation_Proxy_Broker;

  template<typename T> class Narrow_Utils;
  template<typename T> class AbstractBase_Narrow_Utils;
}

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:48

namespace FP_Scheduling
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:610

#if !defined (_FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_)
#define _FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_

  class SegmentSchedulingParameterPolicy;
  typedef SegmentSchedulingParameterPolicy *SegmentSchedulingParameterPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        SegmentSchedulingParameterPolicy
      >
    SegmentSchedulingParameterPolicy_var;

  typedef
    TAO_Objref_Out_T<
        SegmentSchedulingParameterPolicy
      >
    SegmentSchedulingParameterPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:54

#if !defined (_FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY_CH_)
#define _FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY_CH_

  class  SegmentSchedulingParameterPolicy
    : public virtual CORBA::Policy
  {
  public:
    typedef SegmentSchedulingParameterPolicy_ptr _ptr_type;
    typedef SegmentSchedulingParameterPolicy_var _var_type;

    // The static operations.
    static SegmentSchedulingParameterPolicy_ptr _duplicate (SegmentSchedulingParameterPolicy_ptr obj);

    static SegmentSchedulingParameterPolicy_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static SegmentSchedulingParameterPolicy_ptr _nil (void)
    {
      return (SegmentSchedulingParameterPolicy_ptr)0;
    }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual RTCORBA::Priority value (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void value (
        RTCORBA::Priority value
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:192

    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Abstract or local interface only.
    SegmentSchedulingParameterPolicy (void);

    virtual ~SegmentSchedulingParameterPolicy (void);

  private:
    // Private and unimplemented for concrete interfaces.
    SegmentSchedulingParameterPolicy (const SegmentSchedulingParameterPolicy &);

    void operator= (const SegmentSchedulingParameterPolicy &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_SegmentSchedulingParameterPolicy;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:610

#if !defined (_FP_SCHEDULING_FP_SCHEDULER__VAR_OUT_CH_)
#define _FP_SCHEDULING_FP_SCHEDULER__VAR_OUT_CH_

  class FP_Scheduler;
  typedef FP_Scheduler *FP_Scheduler_ptr;

  typedef
    TAO_Objref_Var_T<
        FP_Scheduler
      >
    FP_Scheduler_var;

  typedef
    TAO_Objref_Out_T<
        FP_Scheduler
      >
    FP_Scheduler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:54

#if !defined (_FP_SCHEDULING_FP_SCHEDULER_CH_)
#define _FP_SCHEDULING_FP_SCHEDULER_CH_

  class  FP_Scheduler
    : public virtual RTScheduling::Scheduler
  {
  public:
    typedef FP_Scheduler_ptr _ptr_type;
    typedef FP_Scheduler_var _var_type;

    // The static operations.
    static FP_Scheduler_ptr _duplicate (FP_Scheduler_ptr obj);

    static FP_Scheduler_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static FP_Scheduler_ptr _nil (void)
    {
      return (FP_Scheduler_ptr)0;
    }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr create_segment_scheduling_parameter (
        RTCORBA::Priority segment_priority
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:192

    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Abstract or local interface only.
    FP_Scheduler (void);

    virtual ~FP_Scheduler (void);

  private:
    // Private and unimplemented for concrete interfaces.
    FP_Scheduler (const FP_Scheduler &);

    void operator= (const FP_Scheduler &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_FP_Scheduler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:66

} // module FP_Scheduling

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:48

// Traits specializations.
namespace TAO
{

#if !defined (_FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_CH_)
#define _FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_CH_

  ACE_TEMPLATE_SPECIALIZATION
  struct  Objref_Traits<FP_Scheduling::SegmentSchedulingParameterPolicy>
  {
    static FP_Scheduling::SegmentSchedulingParameterPolicy_ptr tao_duplicate (
        FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
      );
    static void tao_release (
        FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
      );
    static FP_Scheduling::SegmentSchedulingParameterPolicy_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_FP_SCHEDULING_FP_SCHEDULER__TRAITS_CH_)
#define _FP_SCHEDULING_FP_SCHEDULER__TRAITS_CH_

  ACE_TEMPLATE_SPECIALIZATION
  struct  Objref_Traits<FP_Scheduling::FP_Scheduler>
  {
    static FP_Scheduling::FP_Scheduler_ptr tao_duplicate (
        FP_Scheduling::FP_Scheduler_ptr
      );
    static void tao_release (
        FP_Scheduling::FP_Scheduler_ptr
      );
    static FP_Scheduling::FP_Scheduler_ptr tao_nil (void);
    static CORBA::Boolean tao_marshal (
        FP_Scheduling::FP_Scheduler_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr); // copying
 void operator<<= (CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

 void operator<<= (CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr); // copying
 void operator<<= (CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr *); // non-copying
 CORBA::Boolean operator>>= (const CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// be/be_codegen.cpp:911

#if defined (__ACE_INLINE__)
#include "FP_SchedulingC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#endif /* ifndef */

