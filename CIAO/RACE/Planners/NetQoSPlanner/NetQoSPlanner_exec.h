// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#ifndef CIAO_NETQOSPLANNER_EXEC_H
#define CIAO_NETQOSPLANNER_EXEC_H

#include /**/ "ace/pre.h"

#include "NetQoSPlanner_svnt.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "NetQoSPlanner_exec_export.h"
#include "tao/LocalObject.h"
#include "ace/Hash_Map_Manager_T.h"
#include "ciao/DeploymentS.h"
#include "ciao/NetQoSC.h"
#include "ciao/CIAO_common.h"
#include "BandwidthBroker/BandwidthBrokerC.h"
#include "BB_proxy.h"
#include <map>
#include <string>
#include <sstream>

using namespace mil::darpa::arms::mlrm;
using namespace mil::darpa::arms::mlrm::BandwidthBroker;

namespace CIAO
{
  namespace RACE
  {
    namespace CIDL_NetQoSPlanner_Impl
    {
      class NetQoSPlanner_exec_i;

      class NETQOSPLANNER_EXEC_Export Planner_I_exec_i
        : public virtual ::CIAO::RACE::CCM_Planner_I,
          public virtual TAO_Local_RefCounted_Object
      {
        public:
        Planner_I_exec_i (NetQoSPlanner_exec_i &);
        virtual ~Planner_I_exec_i (void);

        // Operations from ::CIAO::RACE::Planner_I

        virtual ::CORBA::Boolean
        process_plan (::CIAO::RACE::Plan_Actions & plan
                      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
                      ACE_THROW_SPEC (( ::CORBA::SystemException, ::CIAO::RACE::PlannerFailure));

        virtual ::CORBA::Boolean
        process_domain_change (
          const ::CIAO::RACE::Planner_I::Domain_Changes & changes,
          ::CIAO::RACE::Plan_Actions_out plans
          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException,
                         ::CIAO::RACE::PlannerFailure));

        virtual char *
        name (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        char *
        type (
          ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
          ACE_THROW_SPEC (( ::CORBA::SystemException));
        
        protected:
          NetQoSPlanner_exec_i *net_qos_planner_exec_;
      };

      class NETQOSPLANNER_EXEC_Export NetQoSPlanner_exec_i
        : public virtual NetQoSPlanner_Exec,
          public virtual TAO_Local_RefCounted_Object
      {
        public:
        NetQoSPlanner_exec_i (void);
        virtual ~NetQoSPlanner_exec_i (void);

        // Supported or inherited operations.

        // Attribute operations.

        virtual char *
        name (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        void
        name (
          const char * name
          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        virtual char *
        type (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        void
        type (
          const char * type
          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        virtual char *
        NetQoSPlanner_exec_i::node_map_file (
          ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        virtual void
        NetQoSPlanner_exec_i::node_map_file (
          const char * /* node_map_file */
          ACE_ENV_ARG_DECL_NOT_USED)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        // Port operations.
        
        ::CORBA::Boolean process_plan (::CIAO::RACE::Plan_Actions &  plans
                                       ACE_ENV_ARG_DECL_NOT_USED)
             ACE_THROW_SPEC (( ::CORBA::SystemException, ::CIAO::RACE::PlannerFailure));

        virtual ::CIAO::RACE::CCM_Planner_I_ptr
        get_planner_i (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC (( ::CORBA::SystemException));

        // Operations from Components::SessionComponent

        virtual void
        set_session_context (
          ::Components::SessionContext_ptr ctx
          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        virtual void
        ciao_preactivate (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        virtual void
        ciao_postactivate (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        virtual void
        ccm_activate (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        virtual void
        ccm_passivate (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        virtual void
        ccm_remove (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));

        protected:

        typedef ACE_Hash_Map_Manager_Ex<ACE_CString,
                                          int, ACE_Hash<ACE_CString>,
                                          ACE_Equal_To<ACE_CString>,
                                          ACE_Null_Mutex> Instance_Map;
        enum NWPriorityModel { UNDEF_NWPM = -1, CLIENT = 0 , SERVER = 1 };
        

        NetQoSPlanner_Context *context_;
        //std::auto_ptr <PlanManager> plan_man_;
        std::map <std::string, PlanManager *> dep_plan_map_;
        PlanManager *current_pm_;
        std::string node_map_filename_;
        std::string planner_name_;
        std::string planner_type_;
        BB_Proxy BB_proxy_;
        
        protected:

        void get_traffic_qos (CommonDef::QOSRequired &qos_req, 
                              const ::CIAO::DAnCE::NetworkQoS::ConnectionQoS & conn_qos);
        
        void dump_policies (const ::Deployment::DeploymentPlan &dep_plan);
        void dump_deployed_resources (const ::Deployment::DeploymentPlan &dep_plan);

        bool resolve_BB ();
        bool deploy_plan (::Deployment::DeploymentPlan &dep_plan, 
                          PlanManager *&plan_man_ptr);
        bool teardown_plan (std::string const &dep_plan_uuid);
        bool process_netqos_req ();

        int make_flow_request (const CommonDef::IPAddress &srcIP,
                               const CommonDef::IPAddress &destIP,
                               int bandwidth,
                               CommonDef::QOSRequired qos_req,
                               long &dscp);
      };

      class NETQOSPLANNER_EXEC_Export NetQoSPlanner_Home_exec_i
        : public virtual NetQoSPlanner_Home_Exec,
          public virtual TAO_Local_RefCounted_Object
      {
        public:
        NetQoSPlanner_Home_exec_i (void);
        virtual ~NetQoSPlanner_Home_exec_i (void);

        // Supported or inherited operations.

        // Home operations.

        // Factory and finder operations.

        // Attribute operations.

        // Implicit operations.

        virtual ::Components::EnterpriseComponent_ptr
        create (
          ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
                          ::CORBA::SystemException,
                          ::Components::CCMException));
      };

      extern "C" NETQOSPLANNER_EXEC_Export ::Components::HomeExecutorBase_ptr
      create_CIAO_RACE_NetQoSPlanner_Home_Impl (void);
    }
  }
}

#include /**/ "ace/post.h"

#endif /* CIAO_NETQOSPLANNER_EXEC_H */

