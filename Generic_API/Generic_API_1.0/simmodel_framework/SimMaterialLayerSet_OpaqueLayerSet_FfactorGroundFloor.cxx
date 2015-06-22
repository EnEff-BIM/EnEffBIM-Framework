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

#include "SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor
      // 

      const SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_FFactor_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_FFactor () const
      {
        return this->SimMatLayerSet_FFactor_;
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_FFactor_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_FFactor ()
      {
        return this->SimMatLayerSet_FFactor_;
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_FFactor (const SimMatLayerSet_FFactor_type& x)
      {
        this->SimMatLayerSet_FFactor_.set (x);
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_FFactor (const SimMatLayerSet_FFactor_optional& x)
      {
        this->SimMatLayerSet_FFactor_ = x;
      }

      const SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_Area_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_Area () const
      {
        return this->SimMatLayerSet_Area_;
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_Area_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_Area ()
      {
        return this->SimMatLayerSet_Area_;
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_Area (const SimMatLayerSet_Area_type& x)
      {
        this->SimMatLayerSet_Area_.set (x);
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_Area (const SimMatLayerSet_Area_optional& x)
      {
        this->SimMatLayerSet_Area_ = x;
      }

      const SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_PerimeterExposed_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_PerimeterExposed () const
      {
        return this->SimMatLayerSet_PerimeterExposed_;
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::SimMatLayerSet_PerimeterExposed_optional& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_PerimeterExposed ()
      {
        return this->SimMatLayerSet_PerimeterExposed_;
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_PerimeterExposed (const SimMatLayerSet_PerimeterExposed_type& x)
      {
        this->SimMatLayerSet_PerimeterExposed_.set (x);
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMatLayerSet_PerimeterExposed (const SimMatLayerSet_PerimeterExposed_optional& x)
      {
        this->SimMatLayerSet_PerimeterExposed_ = x;
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
      // SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor
      //

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet (RefId),
        SimMatLayerSet_FFactor_ (this),
        SimMatLayerSet_Area_ (this),
        SimMatLayerSet_PerimeterExposed_ (this)
      {
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor (const SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor& x,
                                                             ::xml_schema::flags f,
                                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet (x, f, c),
        SimMatLayerSet_FFactor_ (x.SimMatLayerSet_FFactor_, f, this),
        SimMatLayerSet_Area_ (x.SimMatLayerSet_Area_, f, this),
        SimMatLayerSet_PerimeterExposed_ (x.SimMatLayerSet_PerimeterExposed_, f, this)
      {
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor (const ::xercesc::DOMElement& e,
                                                             ::xml_schema::flags f,
                                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet (e, f | ::xml_schema::flags::base, c),
        SimMatLayerSet_FFactor_ (this),
        SimMatLayerSet_Area_ (this),
        SimMatLayerSet_PerimeterExposed_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMatLayerSet_FFactor
          //
          if (n.name () == "SimMatLayerSet_FFactor" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMatLayerSet_FFactor_)
            {
              this->SimMatLayerSet_FFactor_.set (SimMatLayerSet_FFactor_traits::create (i, f, this));
              continue;
            }
          }

          // SimMatLayerSet_Area
          //
          if (n.name () == "SimMatLayerSet_Area" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMatLayerSet_Area_)
            {
              this->SimMatLayerSet_Area_.set (SimMatLayerSet_Area_traits::create (i, f, this));
              continue;
            }
          }

          // SimMatLayerSet_PerimeterExposed
          //
          if (n.name () == "SimMatLayerSet_PerimeterExposed" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMatLayerSet_PerimeterExposed_)
            {
              this->SimMatLayerSet_PerimeterExposed_.set (SimMatLayerSet_PerimeterExposed_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor* SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor (*this, f, c);
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor& SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      operator= (const SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet& > (*this) = x;
          this->SimMatLayerSet_FFactor_ = x.SimMatLayerSet_FFactor_;
          this->SimMatLayerSet_Area_ = x.SimMatLayerSet_Area_;
          this->SimMatLayerSet_PerimeterExposed_ = x.SimMatLayerSet_PerimeterExposed_;
        }

        return *this;
      }

      SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor::
      ~SimMaterialLayerSet_OpaqueLayerSet_FfactorGroundFloor ()
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
