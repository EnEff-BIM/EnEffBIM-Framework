// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable
      // 

      const SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::SimCntrlSchm_Name_optional& SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::SimCntrlSchm_Name_optional& SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::SimCntrlSchm_ConstructionObjName_optional& SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_ConstructionObjName () const
      {
        return this->SimCntrlSchm_ConstructionObjName_;
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::SimCntrlSchm_ConstructionObjName_optional& SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_ConstructionObjName ()
      {
        return this->SimCntrlSchm_ConstructionObjName_;
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_ConstructionObjName (const SimCntrlSchm_ConstructionObjName_type& x)
      {
        this->SimCntrlSchm_ConstructionObjName_.set (x);
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_ConstructionObjName (const SimCntrlSchm_ConstructionObjName_optional& x)
      {
        this->SimCntrlSchm_ConstructionObjName_ = x;
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimCntrlSchm_ConstructionObjName (::std::auto_ptr< SimCntrlSchm_ConstructionObjName_type > x)
      {
        this->SimCntrlSchm_ConstructionObjName_.set (x);
      }
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable
      //

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_EnergyManagementScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_ConstructionObjName_ (this)
      {
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable (const SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable& x,
                                                                                      ::xml_schema::flags f,
                                                                                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_EnergyManagementScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_ConstructionObjName_ (x.SimCntrlSchm_ConstructionObjName_, f, this)
      {
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable (const ::xercesc::DOMElement& e,
                                                                                      ::xml_schema::flags f,
                                                                                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_EnergyManagementScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_ConstructionObjName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_EnergyManagementScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_Name
          //
          if (n.name () == "SimCntrlSchm_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_Name_type > r (
              SimCntrlSchm_Name_traits::create (i, f, this));

            if (!this->SimCntrlSchm_Name_)
            {
              this->SimCntrlSchm_Name_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_ConstructionObjName
          //
          if (n.name () == "SimCntrlSchm_ConstructionObjName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_ConstructionObjName_type > r (
              SimCntrlSchm_ConstructionObjName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_ConstructionObjName_)
            {
              this->SimCntrlSchm_ConstructionObjName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable* SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable (*this, f, c);
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable& SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      operator= (const SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_EnergyManagementScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_ConstructionObjName_ = x.SimCntrlSchm_ConstructionObjName_;
        }

        return *this;
      }

      SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable::
      ~SimControlScheme_EnergyManagementScheme_EnergyMgmtSysConstructionIndexVariable ()
      {
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

