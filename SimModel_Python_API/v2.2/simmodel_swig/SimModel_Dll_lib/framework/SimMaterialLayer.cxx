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

#include "SimMaterialLayer.hxx"

#include "logical.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimMaterialLayer
      // 

      const SimMaterialLayer::LayerMaterial_optional& SimMaterialLayer::
      LayerMaterial () const
      {
        return this->LayerMaterial_;
      }

      SimMaterialLayer::LayerMaterial_optional& SimMaterialLayer::
      LayerMaterial ()
      {
        return this->LayerMaterial_;
      }

      void SimMaterialLayer::
      LayerMaterial (const LayerMaterial_type& x)
      {
        this->LayerMaterial_.set (x);
      }

      void SimMaterialLayer::
      LayerMaterial (const LayerMaterial_optional& x)
      {
        this->LayerMaterial_ = x;
      }

      void SimMaterialLayer::
      LayerMaterial (::std::auto_ptr< LayerMaterial_type > x)
      {
        this->LayerMaterial_.set (x);
      }

      const SimMaterialLayer::LayerThickness_optional& SimMaterialLayer::
      LayerThickness () const
      {
        return this->LayerThickness_;
      }

      SimMaterialLayer::LayerThickness_optional& SimMaterialLayer::
      LayerThickness ()
      {
        return this->LayerThickness_;
      }

      void SimMaterialLayer::
      LayerThickness (const LayerThickness_type& x)
      {
        this->LayerThickness_.set (x);
      }

      void SimMaterialLayer::
      LayerThickness (const LayerThickness_optional& x)
      {
        this->LayerThickness_ = x;
      }

      const SimMaterialLayer::IsVentilated_optional& SimMaterialLayer::
      IsVentilated () const
      {
        return this->IsVentilated_;
      }

      SimMaterialLayer::IsVentilated_optional& SimMaterialLayer::
      IsVentilated ()
      {
        return this->IsVentilated_;
      }

      void SimMaterialLayer::
      IsVentilated (const IsVentilated_type& x)
      {
        this->IsVentilated_.set (x);
      }

      void SimMaterialLayer::
      IsVentilated (const IsVentilated_optional& x)
      {
        this->IsVentilated_ = x;
      }

      void SimMaterialLayer::
      IsVentilated (::std::auto_ptr< IsVentilated_type > x)
      {
        this->IsVentilated_.set (x);
      }

      const SimMaterialLayer::MaterialLayerName_optional& SimMaterialLayer::
      MaterialLayerName () const
      {
        return this->MaterialLayerName_;
      }

      SimMaterialLayer::MaterialLayerName_optional& SimMaterialLayer::
      MaterialLayerName ()
      {
        return this->MaterialLayerName_;
      }

      void SimMaterialLayer::
      MaterialLayerName (const MaterialLayerName_type& x)
      {
        this->MaterialLayerName_.set (x);
      }

      void SimMaterialLayer::
      MaterialLayerName (const MaterialLayerName_optional& x)
      {
        this->MaterialLayerName_ = x;
      }

      void SimMaterialLayer::
      MaterialLayerName (::std::auto_ptr< MaterialLayerName_type > x)
      {
        this->MaterialLayerName_.set (x);
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

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimMaterialLayer
      //

      SimMaterialLayer::
      SimMaterialLayer ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        LayerMaterial_ (this),
        LayerThickness_ (this),
        IsVentilated_ (this),
        MaterialLayerName_ (this)
      {
      }

      SimMaterialLayer::
      SimMaterialLayer (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        LayerMaterial_ (this),
        LayerThickness_ (this),
        IsVentilated_ (this),
        MaterialLayerName_ (this)
      {
      }

      SimMaterialLayer::
      SimMaterialLayer (const SimMaterialLayer& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        LayerMaterial_ (x.LayerMaterial_, f, this),
        LayerThickness_ (x.LayerThickness_, f, this),
        IsVentilated_ (x.IsVentilated_, f, this),
        MaterialLayerName_ (x.MaterialLayerName_, f, this)
      {
      }

      SimMaterialLayer::
      SimMaterialLayer (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        LayerMaterial_ (this),
        LayerThickness_ (this),
        IsVentilated_ (this),
        MaterialLayerName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterialLayer::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // LayerMaterial
          //
          if (n.name () == "LayerMaterial" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< LayerMaterial_type > r (
              LayerMaterial_traits::create (i, f, this));

            if (!this->LayerMaterial_)
            {
              this->LayerMaterial_.set (r);
              continue;
            }
          }

          // LayerThickness
          //
          if (n.name () == "LayerThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->LayerThickness_)
            {
              this->LayerThickness_.set (LayerThickness_traits::create (i, f, this));
              continue;
            }
          }

          // IsVentilated
          //
          if (n.name () == "IsVentilated" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< IsVentilated_type > r (
              IsVentilated_traits::create (i, f, this));

            if (!this->IsVentilated_)
            {
              this->IsVentilated_.set (r);
              continue;
            }
          }

          // MaterialLayerName
          //
          if (n.name () == "MaterialLayerName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< MaterialLayerName_type > r (
              MaterialLayerName_traits::create (i, f, this));

            if (!this->MaterialLayerName_)
            {
              this->MaterialLayerName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimMaterialLayer* SimMaterialLayer::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterialLayer (*this, f, c);
      }

      SimMaterialLayer& SimMaterialLayer::
      operator= (const SimMaterialLayer& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->LayerMaterial_ = x.LayerMaterial_;
          this->LayerThickness_ = x.LayerThickness_;
          this->IsVentilated_ = x.IsVentilated_;
          this->MaterialLayerName_ = x.MaterialLayerName_;
        }

        return *this;
      }

      SimMaterialLayer::
      ~SimMaterialLayer ()
      {
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace schema
{
  namespace simxml
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

