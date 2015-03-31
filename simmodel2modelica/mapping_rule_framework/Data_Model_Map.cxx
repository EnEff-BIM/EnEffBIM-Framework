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

#include "Data_Model_Map.hxx"

#include "refstringlist.hxx"

#include "inputparameter.hxx"

#include "inputcoefficient.hxx"

#include "outputparameter.hxx"

#include "property_map_one2one.hxx"

#include "property_map_gap.hxx"

#include "property_map_many2one.hxx"

#include "property_map_conversion.hxx"

#include "property_map_combination.hxx"

#include "component_map_one2one.hxx"

#include "component_map_many2one.hxx"

#include "componentmappinggroup.hxx"

#include "component_map_one2many.hxx"

#include "component_map_gap.hxx"

#include "multiple_library_map.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // Data_Model_Map
      // 

      const Data_Model_Map::RefValue_sequence& Data_Model_Map::
      RefValue () const
      {
        return this->RefValue_;
      }

      Data_Model_Map::RefValue_sequence& Data_Model_Map::
      RefValue ()
      {
        return this->RefValue_;
      }

      void Data_Model_Map::
      RefValue (const RefValue_sequence& s)
      {
        this->RefValue_ = s;
      }

      const Data_Model_Map::InputParameter_sequence& Data_Model_Map::
      InputParameter () const
      {
        return this->InputParameter_;
      }

      Data_Model_Map::InputParameter_sequence& Data_Model_Map::
      InputParameter ()
      {
        return this->InputParameter_;
      }

      void Data_Model_Map::
      InputParameter (const InputParameter_sequence& s)
      {
        this->InputParameter_ = s;
      }

      const Data_Model_Map::InputCoefficient_sequence& Data_Model_Map::
      InputCoefficient () const
      {
        return this->InputCoefficient_;
      }

      Data_Model_Map::InputCoefficient_sequence& Data_Model_Map::
      InputCoefficient ()
      {
        return this->InputCoefficient_;
      }

      void Data_Model_Map::
      InputCoefficient (const InputCoefficient_sequence& s)
      {
        this->InputCoefficient_ = s;
      }

      const Data_Model_Map::OutputParameter_sequence& Data_Model_Map::
      OutputParameter () const
      {
        return this->OutputParameter_;
      }

      Data_Model_Map::OutputParameter_sequence& Data_Model_Map::
      OutputParameter ()
      {
        return this->OutputParameter_;
      }

      void Data_Model_Map::
      OutputParameter (const OutputParameter_sequence& s)
      {
        this->OutputParameter_ = s;
      }

      const Data_Model_Map::Property_Map_One2one_sequence& Data_Model_Map::
      Property_Map_One2one () const
      {
        return this->Property_Map_One2one_;
      }

      Data_Model_Map::Property_Map_One2one_sequence& Data_Model_Map::
      Property_Map_One2one ()
      {
        return this->Property_Map_One2one_;
      }

      void Data_Model_Map::
      Property_Map_One2one (const Property_Map_One2one_sequence& s)
      {
        this->Property_Map_One2one_ = s;
      }

      const Data_Model_Map::Property_Map_Gap_sequence& Data_Model_Map::
      Property_Map_Gap () const
      {
        return this->Property_Map_Gap_;
      }

      Data_Model_Map::Property_Map_Gap_sequence& Data_Model_Map::
      Property_Map_Gap ()
      {
        return this->Property_Map_Gap_;
      }

      void Data_Model_Map::
      Property_Map_Gap (const Property_Map_Gap_sequence& s)
      {
        this->Property_Map_Gap_ = s;
      }

      const Data_Model_Map::Property_Map_Many2one_sequence& Data_Model_Map::
      Property_Map_Many2one () const
      {
        return this->Property_Map_Many2one_;
      }

      Data_Model_Map::Property_Map_Many2one_sequence& Data_Model_Map::
      Property_Map_Many2one ()
      {
        return this->Property_Map_Many2one_;
      }

      void Data_Model_Map::
      Property_Map_Many2one (const Property_Map_Many2one_sequence& s)
      {
        this->Property_Map_Many2one_ = s;
      }

      const Data_Model_Map::Property_Map_Conversion_sequence& Data_Model_Map::
      Property_Map_Conversion () const
      {
        return this->Property_Map_Conversion_;
      }

      Data_Model_Map::Property_Map_Conversion_sequence& Data_Model_Map::
      Property_Map_Conversion ()
      {
        return this->Property_Map_Conversion_;
      }

      void Data_Model_Map::
      Property_Map_Conversion (const Property_Map_Conversion_sequence& s)
      {
        this->Property_Map_Conversion_ = s;
      }

      const Data_Model_Map::Property_Map_Combination_sequence& Data_Model_Map::
      Property_Map_Combination () const
      {
        return this->Property_Map_Combination_;
      }

      Data_Model_Map::Property_Map_Combination_sequence& Data_Model_Map::
      Property_Map_Combination ()
      {
        return this->Property_Map_Combination_;
      }

      void Data_Model_Map::
      Property_Map_Combination (const Property_Map_Combination_sequence& s)
      {
        this->Property_Map_Combination_ = s;
      }

      const Data_Model_Map::Component_Map_One2one_sequence& Data_Model_Map::
      Component_Map_One2one () const
      {
        return this->Component_Map_One2one_;
      }

      Data_Model_Map::Component_Map_One2one_sequence& Data_Model_Map::
      Component_Map_One2one ()
      {
        return this->Component_Map_One2one_;
      }

      void Data_Model_Map::
      Component_Map_One2one (const Component_Map_One2one_sequence& s)
      {
        this->Component_Map_One2one_ = s;
      }

      const Data_Model_Map::Component_Map_Many2One_sequence& Data_Model_Map::
      Component_Map_Many2One () const
      {
        return this->Component_Map_Many2One_;
      }

      Data_Model_Map::Component_Map_Many2One_sequence& Data_Model_Map::
      Component_Map_Many2One ()
      {
        return this->Component_Map_Many2One_;
      }

      void Data_Model_Map::
      Component_Map_Many2One (const Component_Map_Many2One_sequence& s)
      {
        this->Component_Map_Many2One_ = s;
      }

      const Data_Model_Map::ComponentMappingGroup_sequence& Data_Model_Map::
      ComponentMappingGroup () const
      {
        return this->ComponentMappingGroup_;
      }

      Data_Model_Map::ComponentMappingGroup_sequence& Data_Model_Map::
      ComponentMappingGroup ()
      {
        return this->ComponentMappingGroup_;
      }

      void Data_Model_Map::
      ComponentMappingGroup (const ComponentMappingGroup_sequence& s)
      {
        this->ComponentMappingGroup_ = s;
      }

      const Data_Model_Map::Component_Map_One2Many_sequence& Data_Model_Map::
      Component_Map_One2Many () const
      {
        return this->Component_Map_One2Many_;
      }

      Data_Model_Map::Component_Map_One2Many_sequence& Data_Model_Map::
      Component_Map_One2Many ()
      {
        return this->Component_Map_One2Many_;
      }

      void Data_Model_Map::
      Component_Map_One2Many (const Component_Map_One2Many_sequence& s)
      {
        this->Component_Map_One2Many_ = s;
      }

      const Data_Model_Map::Component_Map_Gap_sequence& Data_Model_Map::
      Component_Map_Gap () const
      {
        return this->Component_Map_Gap_;
      }

      Data_Model_Map::Component_Map_Gap_sequence& Data_Model_Map::
      Component_Map_Gap ()
      {
        return this->Component_Map_Gap_;
      }

      void Data_Model_Map::
      Component_Map_Gap (const Component_Map_Gap_sequence& s)
      {
        this->Component_Map_Gap_ = s;
      }

      const Data_Model_Map::Multiple_Library_Map_sequence& Data_Model_Map::
      Multiple_Library_Map () const
      {
        return this->Multiple_Library_Map_;
      }

      Data_Model_Map::Multiple_Library_Map_sequence& Data_Model_Map::
      Multiple_Library_Map ()
      {
        return this->Multiple_Library_Map_;
      }

      void Data_Model_Map::
      Multiple_Library_Map (const Multiple_Library_Map_sequence& s)
      {
        this->Multiple_Library_Map_ = s;
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
    namespace DataMap
    {
      // Data_Model_Map
      //

      Data_Model_Map::
      Data_Model_Map ()
      : ::xml_schema::type (),
        RefValue_ (this),
        InputParameter_ (this),
        InputCoefficient_ (this),
        OutputParameter_ (this),
        Property_Map_One2one_ (this),
        Property_Map_Gap_ (this),
        Property_Map_Many2one_ (this),
        Property_Map_Conversion_ (this),
        Property_Map_Combination_ (this),
        Component_Map_One2one_ (this),
        Component_Map_Many2One_ (this),
        ComponentMappingGroup_ (this),
        Component_Map_One2Many_ (this),
        Component_Map_Gap_ (this),
        Multiple_Library_Map_ (this)
      {
      }

      Data_Model_Map::
      Data_Model_Map (const Data_Model_Map& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        RefValue_ (x.RefValue_, f, this),
        InputParameter_ (x.InputParameter_, f, this),
        InputCoefficient_ (x.InputCoefficient_, f, this),
        OutputParameter_ (x.OutputParameter_, f, this),
        Property_Map_One2one_ (x.Property_Map_One2one_, f, this),
        Property_Map_Gap_ (x.Property_Map_Gap_, f, this),
        Property_Map_Many2one_ (x.Property_Map_Many2one_, f, this),
        Property_Map_Conversion_ (x.Property_Map_Conversion_, f, this),
        Property_Map_Combination_ (x.Property_Map_Combination_, f, this),
        Component_Map_One2one_ (x.Component_Map_One2one_, f, this),
        Component_Map_Many2One_ (x.Component_Map_Many2One_, f, this),
        ComponentMappingGroup_ (x.ComponentMappingGroup_, f, this),
        Component_Map_One2Many_ (x.Component_Map_One2Many_, f, this),
        Component_Map_Gap_ (x.Component_Map_Gap_, f, this),
        Multiple_Library_Map_ (x.Multiple_Library_Map_, f, this)
      {
      }

      Data_Model_Map::
      Data_Model_Map (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        RefValue_ (this),
        InputParameter_ (this),
        InputCoefficient_ (this),
        OutputParameter_ (this),
        Property_Map_One2one_ (this),
        Property_Map_Gap_ (this),
        Property_Map_Many2one_ (this),
        Property_Map_Conversion_ (this),
        Property_Map_Combination_ (this),
        Component_Map_One2one_ (this),
        Component_Map_Many2One_ (this),
        ComponentMappingGroup_ (this),
        Component_Map_One2Many_ (this),
        Component_Map_Gap_ (this),
        Multiple_Library_Map_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
          this->parse (p, f);
        }
      }

      void Data_Model_Map::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RefValue
          //
          if (n.name () == "RefValue" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< RefValue_type > r (
              RefValue_traits::create (i, f, this));

            this->RefValue_.push_back (r);
            continue;
          }

          // InputParameter
          //
          if (n.name () == "InputParameter" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< InputParameter_type > r (
              InputParameter_traits::create (i, f, this));

            this->InputParameter_.push_back (r);
            continue;
          }

          // InputCoefficient
          //
          if (n.name () == "InputCoefficient" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< InputCoefficient_type > r (
              InputCoefficient_traits::create (i, f, this));

            this->InputCoefficient_.push_back (r);
            continue;
          }

          // OutputParameter
          //
          if (n.name () == "OutputParameter" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< OutputParameter_type > r (
              OutputParameter_traits::create (i, f, this));

            this->OutputParameter_.push_back (r);
            continue;
          }

          // Property_Map_One2one
          //
          if (n.name () == "Property_Map_One2one" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_One2one_type > r (
              Property_Map_One2one_traits::create (i, f, this));

            this->Property_Map_One2one_.push_back (r);
            continue;
          }

          // Property_Map_Gap
          //
          if (n.name () == "Property_Map_Gap" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Gap_type > r (
              Property_Map_Gap_traits::create (i, f, this));

            this->Property_Map_Gap_.push_back (r);
            continue;
          }

          // Property_Map_Many2one
          //
          if (n.name () == "Property_Map_Many2one" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Many2one_type > r (
              Property_Map_Many2one_traits::create (i, f, this));

            this->Property_Map_Many2one_.push_back (r);
            continue;
          }

          // Property_Map_Conversion
          //
          if (n.name () == "Property_Map_Conversion" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Conversion_type > r (
              Property_Map_Conversion_traits::create (i, f, this));

            this->Property_Map_Conversion_.push_back (r);
            continue;
          }

          // Property_Map_Combination
          //
          if (n.name () == "Property_Map_Combination" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Combination_type > r (
              Property_Map_Combination_traits::create (i, f, this));

            this->Property_Map_Combination_.push_back (r);
            continue;
          }

          // Component_Map_One2one
          //
          if (n.name () == "Component_Map_One2one" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_One2one_type > r (
              Component_Map_One2one_traits::create (i, f, this));

            this->Component_Map_One2one_.push_back (r);
            continue;
          }

          // Component_Map_Many2One
          //
          if (n.name () == "Component_Map_Many2One" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_Many2One_type > r (
              Component_Map_Many2One_traits::create (i, f, this));

            this->Component_Map_Many2One_.push_back (r);
            continue;
          }

          // ComponentMappingGroup
          //
          if (n.name () == "ComponentMappingGroup" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< ComponentMappingGroup_type > r (
              ComponentMappingGroup_traits::create (i, f, this));

            this->ComponentMappingGroup_.push_back (r);
            continue;
          }

          // Component_Map_One2Many
          //
          if (n.name () == "Component_Map_One2Many" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_One2Many_type > r (
              Component_Map_One2Many_traits::create (i, f, this));

            this->Component_Map_One2Many_.push_back (r);
            continue;
          }

          // Component_Map_Gap
          //
          if (n.name () == "Component_Map_Gap" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_Gap_type > r (
              Component_Map_Gap_traits::create (i, f, this));

            this->Component_Map_Gap_.push_back (r);
            continue;
          }

          // Multiple_Library_Map
          //
          if (n.name () == "Multiple_Library_Map" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Multiple_Library_Map_type > r (
              Multiple_Library_Map_traits::create (i, f, this));

            this->Multiple_Library_Map_.push_back (r);
            continue;
          }

          break;
        }
      }

      Data_Model_Map* Data_Model_Map::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class Data_Model_Map (*this, f, c);
      }

      Data_Model_Map& Data_Model_Map::
      operator= (const Data_Model_Map& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->RefValue_ = x.RefValue_;
          this->InputParameter_ = x.InputParameter_;
          this->InputCoefficient_ = x.InputCoefficient_;
          this->OutputParameter_ = x.OutputParameter_;
          this->Property_Map_One2one_ = x.Property_Map_One2one_;
          this->Property_Map_Gap_ = x.Property_Map_Gap_;
          this->Property_Map_Many2one_ = x.Property_Map_Many2one_;
          this->Property_Map_Conversion_ = x.Property_Map_Conversion_;
          this->Property_Map_Combination_ = x.Property_Map_Combination_;
          this->Component_Map_One2one_ = x.Component_Map_One2one_;
          this->Component_Map_Many2One_ = x.Component_Map_Many2One_;
          this->ComponentMappingGroup_ = x.ComponentMappingGroup_;
          this->Component_Map_One2Many_ = x.Component_Map_One2Many_;
          this->Component_Map_Gap_ = x.Component_Map_Gap_;
          this->Multiple_Library_Map_ = x.Multiple_Library_Map_;
        }

        return *this;
      }

      Data_Model_Map::
      ~Data_Model_Map ()
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
    namespace DataMap
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
