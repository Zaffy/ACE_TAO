/* -*- C++ -*- $Id$ */



// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_INTERCEPTORC_H_
#define _TAO_IDL_INTERCEPTORC_H_

#include "tao/orbconf.h"
#include "tao/IOPC.h"
#include "tao/Any.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export
#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (TAO_HAS_INTERCEPTORS)
TAO_NAMESPACE  PortableInterceptor
{

#if !defined (_PORTABLEINTERCEPTOR_COOKIE___PTR_CH_)
#define _PORTABLEINTERCEPTOR_COOKIE___PTR_CH_

  class Cookie;
  typedef Cookie *Cookie_ptr;

#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_COOKIE___VAR_CH_)
#define _PORTABLEINTERCEPTOR_COOKIE___VAR_CH_

  class TAO_Export Cookie_var
  {
  public:
    Cookie_var (void); // default constructor
    Cookie_var (Cookie_ptr);
    Cookie_var (const Cookie_var &); // copy constructor
    ~Cookie_var (void); // destructor

    Cookie_var &operator= (Cookie_ptr);
    Cookie_var &operator= (const Cookie_var &);
    Cookie_ptr operator-> (void) const;

    operator const Cookie_ptr &() const;
    operator Cookie_ptr &();
    // in, inout, out, _retn
    Cookie_ptr in (void) const;
    Cookie_ptr &inout (void);
    Cookie_ptr &out (void);
    Cookie_ptr _retn (void);
    Cookie_ptr ptr (void) const;

  private:
    Cookie_ptr ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_COOKIE___OUT_CH_)
#define _PORTABLEINTERCEPTOR_COOKIE___OUT_CH_

  class TAO_Export Cookie_out
  {
  public:
    Cookie_out (Cookie_ptr &);
    Cookie_out (Cookie_var &);
    Cookie_out (const Cookie_out &);
    Cookie_out &operator= (const Cookie_out &);
    Cookie_out &operator= (const Cookie_var &);
    Cookie_out &operator= (Cookie_ptr);
    operator Cookie_ptr &();
    Cookie_ptr &ptr (void);
    Cookie_ptr operator-> (void);

  private:
    Cookie_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_COOKIE_CH_)
#define _PORTABLEINTERCEPTOR_COOKIE_CH_

class TAO_Export Cookie : public virtual ACE_CORBA_1 (Object)
  {
  public:
  #if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef Cookie_ptr _ptr_type;
    typedef Cookie_var _var_type;
  #endif /* ! __GNUC__ || g++ >= 2.8 */

    // the static operations
    static Cookie_ptr _duplicate (Cookie_ptr obj);
    static Cookie_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    static Cookie_ptr _nil (void)
      {
        return (PortableInterceptor::Cookie_ptr)0;
      }

    virtual char * myname (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    virtual const char* _interface_repository_id (void) const;

  protected:
    Cookie (void);
    Cookie (TAO_Stub *objref,
        TAO_ServantBase *_tao_servant = 0,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~Cookie (void);
  private:
    Cookie (const Cookie &);
    void operator= (const Cookie &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_Cookie;


#if !defined (TAO_USE_SEQUENCE_TEMPLATES)

#if !defined (__TAO_UNBOUNDED_OBJECT_SEQUENCE_PORTABLEINTERCEPTOR_COOKIES_CH_)
#define __TAO_UNBOUNDED_OBJECT_SEQUENCE_PORTABLEINTERCEPTOR_COOKIES_CH_

    class _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies : public TAO_Unbounded_Base_Sequence
    {
    public:
      // = Initialization and termination methods.

      _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies (void);
      _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies (CORBA::ULong maximum);
      _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies (CORBA::ULong maximum,
        CORBA::ULong length,
        Cookie* *value,
        CORBA::Boolean release = 0);
      _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies(const _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies &rhs);
      virtual ~_TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies (void);
      _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies &operator= (const _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies &rhs);
      TAO_Object_Manager<PortableInterceptor::Cookie,PortableInterceptor::Cookie_var> operator[] (CORBA::ULong index) const;
      static Cookie **allocbuf (CORBA::ULong nelems);
      static void freebuf (Cookie **buffer);
      // The Base_Sequence functions, please see tao/Sequence.h
      virtual void _allocate_buffer (CORBA::ULong length);
      virtual void _deallocate_buffer (void);
      Cookie* *get_buffer (CORBA::Boolean orphan = 0);
      const Cookie* *get_buffer (void) const;
      virtual void _shrink_buffer (CORBA::ULong nl, CORBA::ULong ol);
      virtual void _downcast (
          void* target,
          CORBA_Object *src,
          CORBA_Environment &ACE_TRY_ENV =
            TAO_default_environment ()
        );
      virtual CORBA_Object* _upcast (void *src) const;

    };

#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */

#if !defined (_PORTABLEINTERCEPTOR_COOKIES_CH_)
#define _PORTABLEINTERCEPTOR_COOKIES_CH_

  // *************************************************************
  // Cookies
  // *************************************************************

  class TAO_Export Cookies : public
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
    _TAO_Unbounded_Object_Sequence_PortableInterceptor_Cookies
#else /* TAO_USE_SEQUENCE_TEMPLATES */
    TAO_Unbounded_Object_Sequence<Cookie,Cookie_var>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
  {
  public:
    Cookies (void); // default ctor
    Cookies (CORBA::ULong max); // uses max size
    Cookies (
      CORBA::ULong max,
      CORBA::ULong length,
      Cookie_ptr *buffer,
      CORBA::Boolean release=0
    );
    Cookies (const Cookies &); // copy ctor
    ~Cookies (void); // dtor
  };
  typedef Cookies *Cookies_ptr;

#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_COOKIES___VAR_CH_)
#define _PORTABLEINTERCEPTOR_COOKIES___VAR_CH_

// *************************************************************
  // class PortableInterceptor::Cookies_var
  // *************************************************************

  class TAO_Export Cookies_var
  {
  public:
    Cookies_var (void); // default constructor
    Cookies_var (Cookies *);
    Cookies_var (const Cookies_var &); // copy constructor
    ~Cookies_var (void); // destructor

    Cookies_var &operator= (Cookies *);
    Cookies_var &operator= (const Cookies_var &);
    Cookies *operator-> (void);
    const Cookies *operator-> (void) const;

    operator const Cookies &() const;
    operator Cookies &();
    operator Cookies &() const;
    TAO_Object_Manager<Cookie,Cookie_var> operator[] (CORBA::ULong index);
    // in, inout, out, _retn
    const Cookies &in (void) const;
    Cookies &inout (void);
    Cookies *&out (void);
    Cookies *_retn (void);
    Cookies *ptr (void) const;

  private:
    Cookies *ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_COOKIES___OUT_CH_)
#define _PORTABLEINTERCEPTOR_COOKIES___OUT_CH_

  class TAO_Export Cookies_out
  {
  public:
    Cookies_out (Cookies *&);
    Cookies_out (Cookies_var &);
    Cookies_out (const Cookies_out &);
    Cookies_out &operator= (const Cookies_out &);
    Cookies_out &operator= (Cookies *);
    operator Cookies *&();
    Cookies *&ptr (void);
    Cookies *operator-> (void);
    TAO_Object_Manager<Cookie,Cookie_var> operator[] (CORBA::ULong index);

  private:
    Cookies *&ptr_;
    // assignment from T_var not allowed
    void operator= (const Cookies_var &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_Cookies;


#if !defined (_PORTABLEINTERCEPTOR_INTERCEPTOR___PTR_CH_)
#define _PORTABLEINTERCEPTOR_INTERCEPTOR___PTR_CH_

  class Interceptor;
  typedef Interceptor *Interceptor_ptr;

#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_INTERCEPTOR___VAR_CH_)
#define _PORTABLEINTERCEPTOR_INTERCEPTOR___VAR_CH_

  class TAO_Export Interceptor_var
  {
  public:
    Interceptor_var (void); // default constructor
    Interceptor_var (Interceptor_ptr);
    Interceptor_var (const Interceptor_var &); // copy constructor
    ~Interceptor_var (void); // destructor

    Interceptor_var &operator= (Interceptor_ptr);
    Interceptor_var &operator= (const Interceptor_var &);
    Interceptor_ptr operator-> (void) const;

    operator const Interceptor_ptr &() const;
    operator Interceptor_ptr &();
    // in, inout, out, _retn
    Interceptor_ptr in (void) const;
    Interceptor_ptr &inout (void);
    Interceptor_ptr &out (void);
    Interceptor_ptr _retn (void);
    Interceptor_ptr ptr (void) const;

  private:
    Interceptor_ptr ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_INTERCEPTOR___OUT_CH_)
#define _PORTABLEINTERCEPTOR_INTERCEPTOR___OUT_CH_

  class TAO_Export Interceptor_out
  {
  public:
    Interceptor_out (Interceptor_ptr &);
    Interceptor_out (Interceptor_var &);
    Interceptor_out (const Interceptor_out &);
    Interceptor_out &operator= (const Interceptor_out &);
    Interceptor_out &operator= (const Interceptor_var &);
    Interceptor_out &operator= (Interceptor_ptr);
    operator Interceptor_ptr &();
    Interceptor_ptr &ptr (void);
    Interceptor_ptr operator-> (void);

  private:
    Interceptor_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_INTERCEPTOR_CH_)
#define _PORTABLEINTERCEPTOR_INTERCEPTOR_CH_

class TAO_Export Interceptor : public virtual ACE_CORBA_1 (Object)
  {
  public:
  #if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef Interceptor_ptr _ptr_type;
    typedef Interceptor_var _var_type;
  #endif /* ! __GNUC__ || g++ >= 2.8 */

    // the static operations
    static Interceptor_ptr _duplicate (Interceptor_ptr obj);
    static Interceptor_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    static Interceptor_ptr _nil (void)
      {
        return (PortableInterceptor::Interceptor_ptr)0;
      }

    virtual char * name (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    virtual const char* _interface_repository_id (void) const;

  protected:
    Interceptor (void);
    Interceptor (TAO_Stub *objref,
        TAO_ServantBase *_tao_servant = 0,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~Interceptor (void);
  private:
    Interceptor (const Interceptor &);
    void operator= (const Interceptor &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_Interceptor;


#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___PTR_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___PTR_CH_

  class ServerRequestInterceptor;
  typedef ServerRequestInterceptor *ServerRequestInterceptor_ptr;

#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___VAR_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___VAR_CH_

  class TAO_Export ServerRequestInterceptor_var
  {
  public:
    ServerRequestInterceptor_var (void); // default constructor
    ServerRequestInterceptor_var (ServerRequestInterceptor_ptr);
    ServerRequestInterceptor_var (const ServerRequestInterceptor_var &); // copy constructor
    ~ServerRequestInterceptor_var (void); // destructor

    ServerRequestInterceptor_var &operator= (ServerRequestInterceptor_ptr);
    ServerRequestInterceptor_var &operator= (const ServerRequestInterceptor_var &);
    ServerRequestInterceptor_ptr operator-> (void) const;

    operator const ServerRequestInterceptor_ptr &() const;
    operator ServerRequestInterceptor_ptr &();
    // in, inout, out, _retn
    ServerRequestInterceptor_ptr in (void) const;
    ServerRequestInterceptor_ptr &inout (void);
    ServerRequestInterceptor_ptr &out (void);
    ServerRequestInterceptor_ptr _retn (void);
    ServerRequestInterceptor_ptr ptr (void) const;

  private:
    ServerRequestInterceptor_ptr ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___OUT_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR___OUT_CH_

  class TAO_Export ServerRequestInterceptor_out
  {
  public:
    ServerRequestInterceptor_out (ServerRequestInterceptor_ptr &);
    ServerRequestInterceptor_out (ServerRequestInterceptor_var &);
    ServerRequestInterceptor_out (const ServerRequestInterceptor_out &);
    ServerRequestInterceptor_out &operator= (const ServerRequestInterceptor_out &);
    ServerRequestInterceptor_out &operator= (const ServerRequestInterceptor_var &);
    ServerRequestInterceptor_out &operator= (ServerRequestInterceptor_ptr);
    operator ServerRequestInterceptor_ptr &();
    ServerRequestInterceptor_ptr &ptr (void);
    ServerRequestInterceptor_ptr operator-> (void);

  private:
    ServerRequestInterceptor_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR_CH_

class TAO_Export ServerRequestInterceptor: public virtual Interceptor
  {
  public:
  #if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef ServerRequestInterceptor_ptr _ptr_type;
    typedef ServerRequestInterceptor_var _var_type;
  #endif /* ! __GNUC__ || g++ >= 2.8 */

    // the static operations
    static ServerRequestInterceptor_ptr _duplicate (ServerRequestInterceptor_ptr obj);
    static ServerRequestInterceptor_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    static ServerRequestInterceptor_ptr _nil (void)
      {
        return (PortableInterceptor::ServerRequestInterceptor_ptr)0;
      }

    virtual void preinvoke (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        IOP::ServiceContextList & sc,
        CORBA::NVList_ptr & arguments,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual void postinvoke (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        IOP::ServiceContextList & sc,
        CORBA::NVList_ptr & arguments,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual void exception_occurred (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    virtual const char* _interface_repository_id (void) const;

  protected:
    ServerRequestInterceptor (void);
    ServerRequestInterceptor (TAO_Stub *objref,
        TAO_ServantBase *_tao_servant = 0,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~ServerRequestInterceptor (void);
  private:
    ServerRequestInterceptor (const ServerRequestInterceptor &);
    void operator= (const ServerRequestInterceptor &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_ServerRequestInterceptor;


#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___PTR_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___PTR_CH_

  class ClientRequestInterceptor;
  typedef ClientRequestInterceptor *ClientRequestInterceptor_ptr;

#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___VAR_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___VAR_CH_

  class TAO_Export ClientRequestInterceptor_var
  {
  public:
    ClientRequestInterceptor_var (void); // default constructor
    ClientRequestInterceptor_var (ClientRequestInterceptor_ptr);
    ClientRequestInterceptor_var (const ClientRequestInterceptor_var &); // copy constructor
    ~ClientRequestInterceptor_var (void); // destructor

    ClientRequestInterceptor_var &operator= (ClientRequestInterceptor_ptr);
    ClientRequestInterceptor_var &operator= (const ClientRequestInterceptor_var &);
    ClientRequestInterceptor_ptr operator-> (void) const;

    operator const ClientRequestInterceptor_ptr &() const;
    operator ClientRequestInterceptor_ptr &();
    // in, inout, out, _retn
    ClientRequestInterceptor_ptr in (void) const;
    ClientRequestInterceptor_ptr &inout (void);
    ClientRequestInterceptor_ptr &out (void);
    ClientRequestInterceptor_ptr _retn (void);
    ClientRequestInterceptor_ptr ptr (void) const;

  private:
    ClientRequestInterceptor_ptr ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___OUT_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR___OUT_CH_

  class TAO_Export ClientRequestInterceptor_out
  {
  public:
    ClientRequestInterceptor_out (ClientRequestInterceptor_ptr &);
    ClientRequestInterceptor_out (ClientRequestInterceptor_var &);
    ClientRequestInterceptor_out (const ClientRequestInterceptor_out &);
    ClientRequestInterceptor_out &operator= (const ClientRequestInterceptor_out &);
    ClientRequestInterceptor_out &operator= (const ClientRequestInterceptor_var &);
    ClientRequestInterceptor_out &operator= (ClientRequestInterceptor_ptr);
    operator ClientRequestInterceptor_ptr &();
    ClientRequestInterceptor_ptr &ptr (void);
    ClientRequestInterceptor_ptr operator-> (void);

  private:
    ClientRequestInterceptor_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_CH_

class TAO_Export ClientRequestInterceptor: public virtual Interceptor
  {
  public:
  #if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef ClientRequestInterceptor_ptr _ptr_type;
    typedef ClientRequestInterceptor_var _var_type;
  #endif /* ! __GNUC__ || g++ >= 2.8 */

    // the static operations
    static ClientRequestInterceptor_ptr _duplicate (ClientRequestInterceptor_ptr obj);
    static ClientRequestInterceptor_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    static ClientRequestInterceptor_ptr _nil (void)
      {
        return (PortableInterceptor::ClientRequestInterceptor_ptr)0;
      }

    virtual void preinvoke (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        IOP::ServiceContextList & sc,
        CORBA::NVList_ptr & arguments,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual void postinvoke (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        IOP::ServiceContextList & sc,
        CORBA::NVList_ptr & arguments,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual void exception_occurred (
        CORBA::ULong request_id,
        CORBA::Boolean response_expected,
        CORBA::Object_ptr objref,
        const char * operation_name,
        Cookies & ck,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      ) = 0;

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    virtual const char* _interface_repository_id (void) const;

  protected:
    ClientRequestInterceptor (void);
    ClientRequestInterceptor (TAO_Stub *objref,
        TAO_ServantBase *_tao_servant = 0,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~ClientRequestInterceptor (void);
  private:
    ClientRequestInterceptor (const ClientRequestInterceptor &);
    void operator= (const ClientRequestInterceptor &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_ClientRequestInterceptor;


}
TAO_NAMESPACE_CLOSE // module PortableInterceptor

// Any operators for interface PortableInterceptor::Cookie
TAO_Export void operator<<= (CORBA::Any &, PortableInterceptor::Cookie_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableInterceptor::Cookie *&);
TAO_Export void operator<<= (CORBA::Any &, const PortableInterceptor::Cookies &); // copying version
TAO_Export void operator<<= (CORBA::Any &, PortableInterceptor::Cookies*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableInterceptor::Cookies *&);
// Any operators for interface PortableInterceptor::Interceptor
TAO_Export void operator<<= (CORBA::Any &, PortableInterceptor::Interceptor_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableInterceptor::Interceptor *&);
// Any operators for interface PortableInterceptor::ServerRequestInterceptor
TAO_Export void operator<<= (CORBA::Any &, PortableInterceptor::ServerRequestInterceptor_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableInterceptor::ServerRequestInterceptor *&);
// Any operators for interface PortableInterceptor::ClientRequestInterceptor
TAO_Export void operator<<= (CORBA::Any &, PortableInterceptor::ClientRequestInterceptor_ptr);
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableInterceptor::ClientRequestInterceptor *&);

#endif /* TAO_HAS_INTERCEPTORS */

#ifndef __ACE_INLINE__


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "tao/InterceptorC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* ifndef */
