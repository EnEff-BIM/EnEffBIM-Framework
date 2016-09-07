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

#include "ComponentMappingGroup.hxx"

#include "stringlist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // ComponentMappingGroup
      // 

      const ComponentMappingGroup::Description_optional& ComponentMappingGroup::
      Description () const
      {
        return this->Description_;
      }

      ComponentMappingGroup::Description_optional& ComponentMappingGroup::
      Description ()
      {
        return this->Description_;
      }

      void ComponentMappingGroup::
      Description (const Description_type& x)
      {
        this->Description_.set (x);
      }

      void ComponentMappingGroup::
      Description (const Description_optional& x)
      {
        this->Description_ = x;
      }

      void ComponentMappingGroup::
      Description (::std::auto_ptr< Description_type > x)
      {
        this->Description_.set (x);
      }

      const ComponentMappingGroup::TargetComponentName_type& ComponentMappingGroup::
      TargetComponentName () const
      {
        return this->TargetComponentName_.get ();
      }

      ComponentMappingGroup::TargetComponentName_type& ComponentMappingGroup::
      TargetComponentName ()
      {
        return this->TargetComponentName_.get ();
      }

      void ComponentMappingGroup::
      TargetComponentName (const TargetComponentName_type& x)
      {
        this->TargetComponentName_.set (x);
      }

      void ComponentMappingGroup::
      TargetComponentName (::std::auto_ptr< TargetComponentName_type > x)
      {
        this->TargetComponentName_.set (x);
      }

      const ComponentMappingGroup::TargetLocation_optional& ComponentMappingGroup::
      TargetLocation () const
      {
        return this->TargetLocation_;
      }

      ComponentMappingGroup::TargetLocation_optional& ComponentMappingGroup::
      TargetLocation ()
      {
        return this->TargetLocation_;
      }

      void ComponentMappingGroup::
      TargetLocation (const TargetLocation_type& x)
      {
        this->TargetLocation_.set (x);
      }

      void ComponentMappingGroup::
      TargetLocation (const TargetLocation_optional& x)
      {
        this->TargetLocation_ = x;
      }

      void ComponentMappingGroup::
      TargetLocation (::std::auto_ptr< TargetLocation_type > x)
      {
        this->TargetLocation_.set (x);
      }

      const ComponentMappingGroup::Property_Map_One2One_Name_sequence& ComponentMappingGroup::
      Property_Map_One2One_Name () const
      {
        return this->Property_Map_One2One_Name_;
      }

      ComponentMappingGroup::Property_Map_One2One_Name_sequence& ComponentMappingGroup::
      Property_Map_One2One_Name ()
      {
        return this->Property_Map_One2One_Name_;
      }

      void ComponentMappingGroup::
      Property_Map_One2One_Name (const Property_Map_One2One_Name_sequence& s)
      {
        this->Property_Map_One2One_Name_ = s;
      }

      const ComponentMappingGroup::Property_Map_Gap_Name_sequence& ComponentMappingGroup::
      Property_Map_Gap_Name () const
      {
        return this->Property_Map_Gap_Name_;
      }

      ComponentMappingGroup::Property_Map_Gap_Name_sequence& ComponentMappingGroup::
      Property_Map_Gap_Name ()
      {
        return this->Property_Map_Gap_Name_;
      }

      void ComponentMappingGroup::
      Property_Map_Gap_Name (const Property_Map_Gap_Name_sequence& s)
      {
        this->Property_Map_Gap_Name_ = s;
      }

      const ComponentMappingGroup::Property_Map_Transformation_Name_sequence& ComponentMappingGroup::
      Property_Map_Transformation_Name () const
      {
        return this->Property_Map_Transformation_Name_;
      }

      ComponentMappingGroup::Property_Map_Transformation_Name_sequence& ComponentMappingGroup::
      Property_Map_Transformation_Name ()
      {
        return this->Property_Map_Transformation_Name_;
      }

      void ComponentMappingGroup::
      Property_Map_Transformation_Name (const Property_Map_Transformation_Name_sequence& s)
      {
        this->Property_Map_Transformation_Name_ = s;
      }

      const ComponentMappingGroup::RefId_type& ComponentMappingGroup::
      RefId () const
      {
        return this->RefId_.get ();
      }

      ComponentMappingGroup::RefId_type& ComponentMappingGroup::
      RefId ()
      {
        return this->RefId_.get ();
      }

      void ComponentMappingGroup::
      RefId (const RefId_type& x)
      {
        this->RefId_.set (x);
      }

      void ComponentMappingGroup::
      RefId (::std::auto_ptr< RefId_type > x)
      {
        this->RefId_.set (x);
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
      // ComponentMappingGroup
      //

      ComponentMappingGroup::
      ComponentMappingGroup ()
      : ::xml_schema::type (),
        Description_ (this),
        TargetComponentName_ (this),
        TargetLocation_ (this),
        Property_Map_One2One_Name_ (this),
        Property_Map_Gap_Name_ (this),
        Property_Map_Transformation_Name_ (this),
        RefId_ (this)
      {
      }

      ComponentMappingGroup::
      ComponentMappingGroup (const TargetComponentName_type& TargetComponentName,
                             const RefId_type& RefId)
      : ::xml_schema::type (),
        Description_ (this),
        TargetComponentName_ (TargetComponentName, this),
        TargetLocation_ (this),
        Property_Map_One2One_Name_ (this),
        Property_Map_Gap_Name_ (this),
        Property_Map_Transformation_Name_ (this),
        RefId_ (RefId, this)
      {
      }

      ComponentMappingGroup::
      ComponentMappingGroup (const ComponentMappingGroup& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        Description_ (x.Description_, f, this),
        TargetComponentName_ (x.TargetComponentName_, f, this),
        TargetLocation_ (x.TargetLocation_, f, this),
        Property_Map_One2One_Name_ (x.Property_Map_One2One_Name_, f, this),
        Property_Map_Gap_Name_ (x.Property_Map_Gap_Name_, f, this),
        Property_Map_Transformation_Name_ (x.Property_Map_Transformation_Name_, f, this),
        RefId_ (x.RefId_, f, this)
      {
      }

      ComponentMappingGroup::
      ComponentMappingGroup (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        Description_ (this),
        TargetComponentName_ (this),
        TargetLocation_ (this),
        Property_Map_One2One_Name_ (this),
        Property_Map_Gap_Name_ (this),
        Property_Map_Transformation_Name_ (this),
        RefId_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void ComponentMappingGroup::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Description
          //
          if (n.name () == "Description" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Description_type > r (
              Description_traits::create (i, f, this));

            if (!this->Description_)
            {
              this->Description_.set (r);
              continue;
            }
          }

          // TargetComponentName
          //
          if (n.name () == "TargetComponentName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetComponentName_type > r (
              TargetComponentName_traits::create (i, f, this));

            if (!TargetComponentName_.present ())
            {
              this->TargetComponentName_.set (r);
              continue;
            }
          }

          // TargetLocation
          //
          if (n.name () == "TargetLocation" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetLocation_type > r (
              TargetLocation_traits::create (i, f, this));

            if (!this->TargetLocation_)
            {
              this->TargetLocation_.set (r);
              continue;
            }
          }

          // Property_Map_One2One_Name
          //
          if (n.name () == "Property_Map_One2One_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_One2One_Name_type > r (
              Property_Map_One2One_Name_traits::create (i, f, this));

            this->Property_Map_One2One_Name_.push_back (r);
            continue;
          }

          // Property_Map_Gap_Name
          //
          if (n.name () == "Property_Map_Gap_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Gap_Name_type > r (
              Property_Map_Gap_Name_traits::create (i, f, this));

            this->Property_Map_Gap_Name_.push_back (r);
            continue;
          }

          // Property_Map_Transformation_Name
          //
          if (n.name () == "Property_Map_Transformation_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Property_Map_Transformation_Name_type > r (
              Property_Map_Transformation_Name_traits::create (i, f, this));

            this->Property_Map_Transformation_Name_.push_back (r);
            continue;
          }

          break;
        }

        if (!TargetComponentName_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "TargetComponentName",
            "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap");
        }

        while (p.more_attributes ())
        {
          const ::xercesc::DOMAttr& i (p.next_attribute ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          if (n.name () == "RefId" && n.namespace_ ().empty ())
          {
            this->RefId_.set (RefId_traits::create (i, f, this));
            continue;
          }
        }

        if (!RefId_.present ())
        {
          throw ::xsd::cxx::tree::expected_attribute< char > (
            "RefId",
            "");
        }
      }

      ComponentMappingGroup* ComponentMappingGroup::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class ComponentMappingGroup (*this, f, c);
      }

      ComponentMappingGroup& ComponentMappingGroup::
      operator= (const ComponentMappingGroup& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->Description_ = x.Description_;
          this->TargetComponentName_ = x.TargetComponentName_;
          this->TargetLocation_ = x.TargetLocation_;
          this->Property_Map_One2One_Name_ = x.Property_Map_One2One_Name_;
          this->Property_Map_Gap_Name_ = x.Property_Map_Gap_Name_;
          this->Property_Map_Transformation_Name_ = x.Property_Map_Transformation_Name_;
          this->RefId_ = x.RefId_;
        }

        return *this;
      }

      ComponentMappingGroup::
      ~ComponentMappingGroup ()
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

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      void
      operator<< (::xercesc::DOMElement& e, const ComponentMappingGroup& i)
      {
        e << static_cast< const ::xml_schema::type& > (i);

        // Description
        //
        if (i.Description ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Description",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.Description ();
        }

        // TargetComponentName
        //
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "TargetComponentName",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << i.TargetComponentName ();
        }

        // TargetLocation
        //
        if (i.TargetLocation ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "TargetLocation",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.TargetLocation ();
        }

        // Property_Map_One2One_Name
        //
        for (ComponentMappingGroup::Property_Map_One2One_Name_const_iterator
             b (i.Property_Map_One2One_Name ().begin ()), n (i.Property_Map_One2One_Name ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Property_Map_One2One_Name",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // Property_Map_Gap_Name
        //
        for (ComponentMappingGroup::Property_Map_Gap_Name_const_iterator
             b (i.Property_Map_Gap_Name ().begin ()), n (i.Property_Map_Gap_Name ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Property_Map_Gap_Name",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // Property_Map_Transformation_Name
        //
        for (ComponentMappingGroup::Property_Map_Transformation_Name_const_iterator
             b (i.Property_Map_Transformation_Name ().begin ()), n (i.Property_Map_Transformation_Name ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Property_Map_Transformation_Name",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // RefId
        //
        {
          ::xercesc::DOMAttr& a (
            ::xsd::cxx::xml::dom::create_attribute (
              "RefId",
              e));

          a << i.RefId ();
        }
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

