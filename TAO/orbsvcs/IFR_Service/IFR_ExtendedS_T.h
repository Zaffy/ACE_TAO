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
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_IFR_EXTENDEDS_T_H_
#define _TAO_IDL_IFR_EXTENDEDS_T_H_

#include "ace/pre.h"
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (ACE_HAS_USING_KEYWORD)

TAO_NAMESPACE  POA_CORBA
{
}
TAO_NAMESPACE_CLOSE // module CORBA

// TIE class: Refer to CORBA v2.2, Section 20.34.4
template <class T>
class  POA_CORBA_FixedDef_tie : public POA_CORBA_FixedDef
{
public:
  POA_CORBA_FixedDef_tie (T &t);
  // the T& ctor
  POA_CORBA_FixedDef_tie (T &t, PortableServer::POA_ptr poa);
  // ctor taking a POA
  POA_CORBA_FixedDef_tie (T *tp, CORBA::Boolean release=1);
  // ctor taking pointer and an ownership flag
  POA_CORBA_FixedDef_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
  // ctor with T*, ownership flag and a POA
  ~POA_CORBA_FixedDef_tie (void);
  // dtor

  // TIE specific functions
  T *_tied_object (void);
  // return the underlying object
  void _tied_object (T &obj);
  // set the underlying object
  void _tied_object (T *obj, CORBA::Boolean release=1);
  // set the underlying object and the ownership flag
  CORBA::Boolean _is_owner (void);
  // do we own it
  void _is_owner (CORBA::Boolean b);
  // set the ownership

  // overridden ServantBase operations
  PortableServer::POA_ptr _default_POA (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

  CORBA::UShort digits (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void digits (
      CORBA::UShort digits
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Short scale (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void scale (
      CORBA::Short scale
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::TypeCode_ptr type (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::DefinitionKind def_kind (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void destroy (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  private:
  T *ptr_;
  PortableServer::POA_var poa_;
  CORBA::Boolean rel_;

  // copy and assignment are not allowed
  POA_CORBA_FixedDef_tie (const POA_CORBA_FixedDef_tie &);
  void operator= (const POA_CORBA_FixedDef_tie &);
};

// TIE class: Refer to CORBA v2.2, Section 20.34.4
template <class T>
class  POA_CORBA_ValueMemberDef_tie : public POA_CORBA_ValueMemberDef
{
public:
  POA_CORBA_ValueMemberDef_tie (T &t);
  // the T& ctor
  POA_CORBA_ValueMemberDef_tie (T &t, PortableServer::POA_ptr poa);
  // ctor taking a POA
  POA_CORBA_ValueMemberDef_tie (T *tp, CORBA::Boolean release=1);
  // ctor taking pointer and an ownership flag
  POA_CORBA_ValueMemberDef_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
  // ctor with T*, ownership flag and a POA
  ~POA_CORBA_ValueMemberDef_tie (void);
  // dtor

  // TIE specific functions
  T *_tied_object (void);
  // return the underlying object
  void _tied_object (T &obj);
  // set the underlying object
  void _tied_object (T *obj, CORBA::Boolean release=1);
  // set the underlying object and the ownership flag
  CORBA::Boolean _is_owner (void);
  // do we own it
  void _is_owner (CORBA::Boolean b);
  // set the ownership

  // overridden ServantBase operations
  PortableServer::POA_ptr _default_POA (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

  CORBA::TypeCode_ptr type (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_IDLType_ptr type_def (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void type_def (
      CORBA_IDLType_ptr type_def
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Visibility access (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void access (
      CORBA::Visibility access
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * id (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void id (
      const char * id
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void name (
      const char * name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * version (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void version (
      const char * version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Container_ptr defined_in (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * absolute_name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Repository_ptr containing_repository (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Contained::Description * describe (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void move (
      CORBA_Container_ptr new_container,
      const char * new_name,
      const char * new_version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::DefinitionKind def_kind (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void destroy (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  private:
  T *ptr_;
  PortableServer::POA_var poa_;
  CORBA::Boolean rel_;

  // copy and assignment are not allowed
  POA_CORBA_ValueMemberDef_tie (const POA_CORBA_ValueMemberDef_tie &);
  void operator= (const POA_CORBA_ValueMemberDef_tie &);
};

// TIE class: Refer to CORBA v2.2, Section 20.34.4
template <class T>
class  POA_CORBA_ValueDef_tie : public POA_CORBA_ValueDef
{
public:
  POA_CORBA_ValueDef_tie (T &t);
  // the T& ctor
  POA_CORBA_ValueDef_tie (T &t, PortableServer::POA_ptr poa);
  // ctor taking a POA
  POA_CORBA_ValueDef_tie (T *tp, CORBA::Boolean release=1);
  // ctor taking pointer and an ownership flag
  POA_CORBA_ValueDef_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
  // ctor with T*, ownership flag and a POA
  ~POA_CORBA_ValueDef_tie (void);
  // dtor

  // TIE specific functions
  T *_tied_object (void);
  // return the underlying object
  void _tied_object (T &obj);
  // set the underlying object
  void _tied_object (T *obj, CORBA::Boolean release=1);
  // set the underlying object and the ownership flag
  CORBA::Boolean _is_owner (void);
  // do we own it
  void _is_owner (CORBA::Boolean b);
  // set the ownership

  // overridden ServantBase operations
  PortableServer::POA_ptr _default_POA (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

  CORBA_InterfaceDefSeq * supported_interfaces (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void supported_interfaces (
      const CORBA_InterfaceDefSeq & supported_interfaces
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_InitializerSeq * initializers (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void initializers (
      const CORBA_InitializerSeq & initializers
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueDef_ptr base_value (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void base_value (
      CORBA_ValueDef_ptr base_value
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueDefSeq * abstract_base_values (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void abstract_base_values (
      const CORBA_ValueDefSeq & abstract_base_values
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Boolean is_abstract (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void is_abstract (
      CORBA::Boolean is_abstract
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Boolean is_custom (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void is_custom (
      CORBA::Boolean is_custom
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Boolean is_truncatable (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void is_truncatable (
      CORBA::Boolean is_truncatable
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::Boolean is_a (
      const char * id
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueDef::FullValueDescription * describe_value (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueMemberDef_ptr create_value_member (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr type,
      CORBA::Visibility access
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_AttributeDef_ptr create_attribute (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr type,
      CORBA::AttributeMode mode
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_OperationDef_ptr create_operation (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr result,
      CORBA::OperationMode mode,
      const CORBA_ParDescriptionSeq & params,
      const CORBA_ExceptionDefSeq & exceptions,
      const CORBA_ContextIdSeq & contexts
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Contained_ptr lookup (
      const char * search_name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ContainedSeq * contents (
      CORBA::DefinitionKind limit_type,
      CORBA::Boolean exclude_inherited
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ContainedSeq * lookup_name (
      const char * search_name,
      CORBA::Long levels_to_search,
      CORBA::DefinitionKind limit_type,
      CORBA::Boolean exclude_inherited
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Container::DescriptionSeq * describe_contents (
      CORBA::DefinitionKind limit_type,
      CORBA::Boolean exclude_inherited,
      CORBA::Long max_returned_objs
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ModuleDef_ptr create_module (
      const char * id,
      const char * name,
      const char * version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ConstantDef_ptr create_constant (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr type,
      const CORBA::Any & value
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_StructDef_ptr create_struct (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_StructMemberSeq & members
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_UnionDef_ptr create_union (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr discriminator_type,
      const CORBA_UnionMemberSeq & members
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_EnumDef_ptr create_enum (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_EnumMemberSeq & members
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_AliasDef_ptr create_alias (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr original_type
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_InterfaceDef_ptr create_interface (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_InterfaceDefSeq & base_interfaces
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueDef_ptr create_value (
      const char * id,
      const char * name,
      const char * version,
      CORBA::Boolean is_custom,
      CORBA::Boolean is_abstract,
      CORBA_ValueDef_ptr base_value,
      CORBA::Boolean is_truncatable,
      const CORBA_ValueDefSeq & abstract_base_values,
      const CORBA_InterfaceDefSeq & supported_interfaces,
      const CORBA_InitializerSeq & initializers
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ValueBoxDef_ptr create_value_box (
      const char * id,
      const char * name,
      const char * version,
      CORBA_IDLType_ptr original_type_def
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_ExceptionDef_ptr create_exception (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_StructMemberSeq & members
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_NativeDef_ptr create_native (
      const char * id,
      const char * name,
      const char * version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_AbstractInterfaceDef_ptr create_abstract_interface (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_AbstractInterfaceDefSeq & base_interfaces
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_LocalInterfaceDef_ptr create_local_interface (
      const char * id,
      const char * name,
      const char * version,
      const CORBA_InterfaceDefSeq & base_interfaces
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * id (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void id (
      const char * id
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void name (
      const char * name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * version (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void version (
      const char * version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Container_ptr defined_in (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * absolute_name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Repository_ptr containing_repository (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Contained::Description * describe (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void move (
      CORBA_Container_ptr new_container,
      const char * new_name,
      const char * new_version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::TypeCode_ptr type (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::DefinitionKind def_kind (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void destroy (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  private:
  T *ptr_;
  PortableServer::POA_var poa_;
  CORBA::Boolean rel_;

  // copy and assignment are not allowed
  POA_CORBA_ValueDef_tie (const POA_CORBA_ValueDef_tie &);
  void operator= (const POA_CORBA_ValueDef_tie &);
};

// TIE class: Refer to CORBA v2.2, Section 20.34.4
template <class T>
class  POA_CORBA_ValueBoxDef_tie : public POA_CORBA_ValueBoxDef
{
public:
  POA_CORBA_ValueBoxDef_tie (T &t);
  // the T& ctor
  POA_CORBA_ValueBoxDef_tie (T &t, PortableServer::POA_ptr poa);
  // ctor taking a POA
  POA_CORBA_ValueBoxDef_tie (T *tp, CORBA::Boolean release=1);
  // ctor taking pointer and an ownership flag
  POA_CORBA_ValueBoxDef_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
  // ctor with T*, ownership flag and a POA
  ~POA_CORBA_ValueBoxDef_tie (void);
  // dtor

  // TIE specific functions
  T *_tied_object (void);
  // return the underlying object
  void _tied_object (T &obj);
  // set the underlying object
  void _tied_object (T *obj, CORBA::Boolean release=1);
  // set the underlying object and the ownership flag
  CORBA::Boolean _is_owner (void);
  // do we own it
  void _is_owner (CORBA::Boolean b);
  // set the ownership

  // overridden ServantBase operations
  PortableServer::POA_ptr _default_POA (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS);

  CORBA_IDLType_ptr original_type_def (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void original_type_def (
      CORBA_IDLType_ptr original_type_def
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * id (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void id (
      const char * id
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void name (
      const char * name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * version (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void version (
      const char * version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Container_ptr defined_in (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    char * absolute_name (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Repository_ptr containing_repository (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA_Contained::Description * describe (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void move (
      CORBA_Container_ptr new_container,
      const char * new_name,
      const char * new_version
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::TypeCode_ptr type (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    CORBA::DefinitionKind def_kind (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

    void destroy (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)

    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  private:
  T *ptr_;
  PortableServer::POA_var poa_;
  CORBA::Boolean rel_;

  // copy and assignment are not allowed
  POA_CORBA_ValueBoxDef_tie (const POA_CORBA_ValueBoxDef_tie &);
  void operator= (const POA_CORBA_ValueBoxDef_tie &);
};

#endif /* ACE_HAS_USING_KEYWORD */

#if defined (__ACE_INLINE__)
#include "IFR_ExtendedS_T.i"
#endif /* defined INLINE */


#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "IFR_ExtendedS_T.cpp"
#endif /* defined REQUIRED SOURCE */


#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("IFR_ExtendedS_T.cpp")
#endif /* defined REQUIRED PRAGMA */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include "ace/post.h"
#endif /* ifndef */
