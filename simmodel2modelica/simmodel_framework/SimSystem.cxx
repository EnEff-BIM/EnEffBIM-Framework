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

#include "SimSystem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSystem
      // 

      const SimSystem::ParentSystem_optional& SimSystem::
      ParentSystem () const
      {
        return this->ParentSystem_;
      }

      SimSystem::ParentSystem_optional& SimSystem::
      ParentSystem ()
      {
        return this->ParentSystem_;
      }

      void SimSystem::
      ParentSystem (const ParentSystem_type& x)
      {
        this->ParentSystem_.set (x);
      }

      void SimSystem::
      ParentSystem (const ParentSystem_optional& x)
      {
        this->ParentSystem_ = x;
      }

      void SimSystem::
      ParentSystem (::std::auto_ptr< ParentSystem_type > x)
      {
        this->ParentSystem_.set (x);
      }

      const SimSystem::SystemServicesSpatialElements_optional& SimSystem::
      SystemServicesSpatialElements () const
      {
        return this->SystemServicesSpatialElements_;
      }

      SimSystem::SystemServicesSpatialElements_optional& SimSystem::
      SystemServicesSpatialElements ()
      {
        return this->SystemServicesSpatialElements_;
      }

      void SimSystem::
      SystemServicesSpatialElements (const SystemServicesSpatialElements_type& x)
      {
        this->SystemServicesSpatialElements_.set (x);
      }

      void SimSystem::
      SystemServicesSpatialElements (const SystemServicesSpatialElements_optional& x)
      {
        this->SystemServicesSpatialElements_ = x;
      }

      void SimSystem::
      SystemServicesSpatialElements (::std::auto_ptr< SystemServicesSpatialElements_type > x)
      {
        this->SystemServicesSpatialElements_.set (x);
      }

      const SimSystem::SourceLibraryForTemplate_optional& SimSystem::
      SourceLibraryForTemplate () const
      {
        return this->SourceLibraryForTemplate_;
      }

      SimSystem::SourceLibraryForTemplate_optional& SimSystem::
      SourceLibraryForTemplate ()
      {
        return this->SourceLibraryForTemplate_;
      }

      void SimSystem::
      SourceLibraryForTemplate (const SourceLibraryForTemplate_type& x)
      {
        this->SourceLibraryForTemplate_.set (x);
      }

      void SimSystem::
      SourceLibraryForTemplate (const SourceLibraryForTemplate_optional& x)
      {
        this->SourceLibraryForTemplate_ = x;
      }

      void SimSystem::
      SourceLibraryForTemplate (::std::auto_ptr< SourceLibraryForTemplate_type > x)
      {
        this->SourceLibraryForTemplate_.set (x);
      }

      const SimSystem::SourceLibraryVersion_optional& SimSystem::
      SourceLibraryVersion () const
      {
        return this->SourceLibraryVersion_;
      }

      SimSystem::SourceLibraryVersion_optional& SimSystem::
      SourceLibraryVersion ()
      {
        return this->SourceLibraryVersion_;
      }

      void SimSystem::
      SourceLibraryVersion (const SourceLibraryVersion_type& x)
      {
        this->SourceLibraryVersion_.set (x);
      }

      void SimSystem::
      SourceLibraryVersion (const SourceLibraryVersion_optional& x)
      {
        this->SourceLibraryVersion_ = x;
      }

      void SimSystem::
      SourceLibraryVersion (::std::auto_ptr< SourceLibraryVersion_type > x)
      {
        this->SourceLibraryVersion_.set (x);
      }

      const SimSystem::SourceTemplateName_optional& SimSystem::
      SourceTemplateName () const
      {
        return this->SourceTemplateName_;
      }

      SimSystem::SourceTemplateName_optional& SimSystem::
      SourceTemplateName ()
      {
        return this->SourceTemplateName_;
      }

      void SimSystem::
      SourceTemplateName (const SourceTemplateName_type& x)
      {
        this->SourceTemplateName_.set (x);
      }

      void SimSystem::
      SourceTemplateName (const SourceTemplateName_optional& x)
      {
        this->SourceTemplateName_ = x;
      }

      void SimSystem::
      SourceTemplateName (::std::auto_ptr< SourceTemplateName_type > x)
      {
        this->SourceTemplateName_.set (x);
      }

      const SimSystem::SourceTemplateVersion_optional& SimSystem::
      SourceTemplateVersion () const
      {
        return this->SourceTemplateVersion_;
      }

      SimSystem::SourceTemplateVersion_optional& SimSystem::
      SourceTemplateVersion ()
      {
        return this->SourceTemplateVersion_;
      }

      void SimSystem::
      SourceTemplateVersion (const SourceTemplateVersion_type& x)
      {
        this->SourceTemplateVersion_.set (x);
      }

      void SimSystem::
      SourceTemplateVersion (const SourceTemplateVersion_optional& x)
      {
        this->SourceTemplateVersion_ = x;
      }

      void SimSystem::
      SourceTemplateVersion (::std::auto_ptr< SourceTemplateVersion_type > x)
      {
        this->SourceTemplateVersion_.set (x);
      }

      const SimSystem::LocalTemplateCopy_optional& SimSystem::
      LocalTemplateCopy () const
      {
        return this->LocalTemplateCopy_;
      }

      SimSystem::LocalTemplateCopy_optional& SimSystem::
      LocalTemplateCopy ()
      {
        return this->LocalTemplateCopy_;
      }

      void SimSystem::
      LocalTemplateCopy (const LocalTemplateCopy_type& x)
      {
        this->LocalTemplateCopy_.set (x);
      }

      void SimSystem::
      LocalTemplateCopy (const LocalTemplateCopy_optional& x)
      {
        this->LocalTemplateCopy_ = x;
      }

      void SimSystem::
      LocalTemplateCopy (::std::auto_ptr< LocalTemplateCopy_type > x)
      {
        this->LocalTemplateCopy_.set (x);
      }

      const SimSystem::HvacSystemSizingParams_optional& SimSystem::
      HvacSystemSizingParams () const
      {
        return this->HvacSystemSizingParams_;
      }

      SimSystem::HvacSystemSizingParams_optional& SimSystem::
      HvacSystemSizingParams ()
      {
        return this->HvacSystemSizingParams_;
      }

      void SimSystem::
      HvacSystemSizingParams (const HvacSystemSizingParams_type& x)
      {
        this->HvacSystemSizingParams_.set (x);
      }

      void SimSystem::
      HvacSystemSizingParams (const HvacSystemSizingParams_optional& x)
      {
        this->HvacSystemSizingParams_ = x;
      }

      void SimSystem::
      HvacSystemSizingParams (::std::auto_ptr< HvacSystemSizingParams_type > x)
      {
        this->HvacSystemSizingParams_.set (x);
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
    namespace BuildingModel
    {
      // SimSystem
      //

      SimSystem::
      SimSystem (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimGroup (RefId),
        ParentSystem_ (this),
        SystemServicesSpatialElements_ (this),
        SourceLibraryForTemplate_ (this),
        SourceLibraryVersion_ (this),
        SourceTemplateName_ (this),
        SourceTemplateVersion_ (this),
        LocalTemplateCopy_ (this),
        HvacSystemSizingParams_ (this)
      {
      }

      SimSystem::
      SimSystem (const SimSystem& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimGroup (x, f, c),
        ParentSystem_ (x.ParentSystem_, f, this),
        SystemServicesSpatialElements_ (x.SystemServicesSpatialElements_, f, this),
        SourceLibraryForTemplate_ (x.SourceLibraryForTemplate_, f, this),
        SourceLibraryVersion_ (x.SourceLibraryVersion_, f, this),
        SourceTemplateName_ (x.SourceTemplateName_, f, this),
        SourceTemplateVersion_ (x.SourceTemplateVersion_, f, this),
        LocalTemplateCopy_ (x.LocalTemplateCopy_, f, this),
        HvacSystemSizingParams_ (x.HvacSystemSizingParams_, f, this)
      {
      }

      SimSystem::
      SimSystem (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimGroup (e, f | ::xml_schema::flags::base, c),
        ParentSystem_ (this),
        SystemServicesSpatialElements_ (this),
        SourceLibraryForTemplate_ (this),
        SourceLibraryVersion_ (this),
        SourceTemplateName_ (this),
        SourceTemplateVersion_ (this),
        LocalTemplateCopy_ (this),
        HvacSystemSizingParams_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimGroup::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ParentSystem
          //
          if (n.name () == "ParentSystem" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ParentSystem_type > r (
              ParentSystem_traits::create (i, f, this));

            if (!this->ParentSystem_)
            {
              this->ParentSystem_.set (r);
              continue;
            }
          }

          // SystemServicesSpatialElements
          //
          if (n.name () == "SystemServicesSpatialElements" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SystemServicesSpatialElements_type > r (
              SystemServicesSpatialElements_traits::create (i, f, this));

            if (!this->SystemServicesSpatialElements_)
            {
              this->SystemServicesSpatialElements_.set (r);
              continue;
            }
          }

          // SourceLibraryForTemplate
          //
          if (n.name () == "SourceLibraryForTemplate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SourceLibraryForTemplate_type > r (
              SourceLibraryForTemplate_traits::create (i, f, this));

            if (!this->SourceLibraryForTemplate_)
            {
              this->SourceLibraryForTemplate_.set (r);
              continue;
            }
          }

          // SourceLibraryVersion
          //
          if (n.name () == "SourceLibraryVersion" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SourceLibraryVersion_type > r (
              SourceLibraryVersion_traits::create (i, f, this));

            if (!this->SourceLibraryVersion_)
            {
              this->SourceLibraryVersion_.set (r);
              continue;
            }
          }

          // SourceTemplateName
          //
          if (n.name () == "SourceTemplateName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SourceTemplateName_type > r (
              SourceTemplateName_traits::create (i, f, this));

            if (!this->SourceTemplateName_)
            {
              this->SourceTemplateName_.set (r);
              continue;
            }
          }

          // SourceTemplateVersion
          //
          if (n.name () == "SourceTemplateVersion" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SourceTemplateVersion_type > r (
              SourceTemplateVersion_traits::create (i, f, this));

            if (!this->SourceTemplateVersion_)
            {
              this->SourceTemplateVersion_.set (r);
              continue;
            }
          }

          // LocalTemplateCopy
          //
          if (n.name () == "LocalTemplateCopy" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< LocalTemplateCopy_type > r (
              LocalTemplateCopy_traits::create (i, f, this));

            if (!this->LocalTemplateCopy_)
            {
              this->LocalTemplateCopy_.set (r);
              continue;
            }
          }

          // HvacSystemSizingParams
          //
          if (n.name () == "HvacSystemSizingParams" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< HvacSystemSizingParams_type > r (
              HvacSystemSizingParams_traits::create (i, f, this));

            if (!this->HvacSystemSizingParams_)
            {
              this->HvacSystemSizingParams_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSystem* SimSystem::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem (*this, f, c);
      }

      SimSystem& SimSystem::
      operator= (const SimSystem& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimGroup& > (*this) = x;
          this->ParentSystem_ = x.ParentSystem_;
          this->SystemServicesSpatialElements_ = x.SystemServicesSpatialElements_;
          this->SourceLibraryForTemplate_ = x.SourceLibraryForTemplate_;
          this->SourceLibraryVersion_ = x.SourceLibraryVersion_;
          this->SourceTemplateName_ = x.SourceTemplateName_;
          this->SourceTemplateVersion_ = x.SourceTemplateVersion_;
          this->LocalTemplateCopy_ = x.LocalTemplateCopy_;
          this->HvacSystemSizingParams_ = x.HvacSystemSizingParams_;
        }

        return *this;
      }

      SimSystem::
      ~SimSystem ()
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
