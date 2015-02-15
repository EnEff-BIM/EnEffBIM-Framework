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

#include "Multiple_Library_Map.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // Multiple_Library_Map
      // 

      const Multiple_Library_Map::Description_optional& Multiple_Library_Map::
      Description () const
      {
        return this->Description_;
      }

      Multiple_Library_Map::Description_optional& Multiple_Library_Map::
      Description ()
      {
        return this->Description_;
      }

      void Multiple_Library_Map::
      Description (const Description_type& x)
      {
        this->Description_.set (x);
      }

      void Multiple_Library_Map::
      Description (const Description_optional& x)
      {
        this->Description_ = x;
      }

      void Multiple_Library_Map::
      Description (::std::auto_ptr< Description_type > x)
      {
        this->Description_.set (x);
      }

      const Multiple_Library_Map::TargetLibraryName_type& Multiple_Library_Map::
      TargetLibraryName () const
      {
        return this->TargetLibraryName_.get ();
      }

      Multiple_Library_Map::TargetLibraryName_type& Multiple_Library_Map::
      TargetLibraryName ()
      {
        return this->TargetLibraryName_.get ();
      }

      void Multiple_Library_Map::
      TargetLibraryName (const TargetLibraryName_type& x)
      {
        this->TargetLibraryName_.set (x);
      }

      void Multiple_Library_Map::
      TargetLibraryName (::std::auto_ptr< TargetLibraryName_type > x)
      {
        this->TargetLibraryName_.set (x);
      }

      const Multiple_Library_Map::Component_Map_One2one_Name_sequence& Multiple_Library_Map::
      Component_Map_One2one_Name () const
      {
        return this->Component_Map_One2one_Name_;
      }

      Multiple_Library_Map::Component_Map_One2one_Name_sequence& Multiple_Library_Map::
      Component_Map_One2one_Name ()
      {
        return this->Component_Map_One2one_Name_;
      }

      void Multiple_Library_Map::
      Component_Map_One2one_Name (const Component_Map_One2one_Name_sequence& s)
      {
        this->Component_Map_One2one_Name_ = s;
      }

      const Multiple_Library_Map::Component_Map_Many2One_Name_sequence& Multiple_Library_Map::
      Component_Map_Many2One_Name () const
      {
        return this->Component_Map_Many2One_Name_;
      }

      Multiple_Library_Map::Component_Map_Many2One_Name_sequence& Multiple_Library_Map::
      Component_Map_Many2One_Name ()
      {
        return this->Component_Map_Many2One_Name_;
      }

      void Multiple_Library_Map::
      Component_Map_Many2One_Name (const Component_Map_Many2One_Name_sequence& s)
      {
        this->Component_Map_Many2One_Name_ = s;
      }

      const Multiple_Library_Map::Component_Map_One2Many_Name_sequence& Multiple_Library_Map::
      Component_Map_One2Many_Name () const
      {
        return this->Component_Map_One2Many_Name_;
      }

      Multiple_Library_Map::Component_Map_One2Many_Name_sequence& Multiple_Library_Map::
      Component_Map_One2Many_Name ()
      {
        return this->Component_Map_One2Many_Name_;
      }

      void Multiple_Library_Map::
      Component_Map_One2Many_Name (const Component_Map_One2Many_Name_sequence& s)
      {
        this->Component_Map_One2Many_Name_ = s;
      }

      const Multiple_Library_Map::Component_Map_Gap_Name_sequence& Multiple_Library_Map::
      Component_Map_Gap_Name () const
      {
        return this->Component_Map_Gap_Name_;
      }

      Multiple_Library_Map::Component_Map_Gap_Name_sequence& Multiple_Library_Map::
      Component_Map_Gap_Name ()
      {
        return this->Component_Map_Gap_Name_;
      }

      void Multiple_Library_Map::
      Component_Map_Gap_Name (const Component_Map_Gap_Name_sequence& s)
      {
        this->Component_Map_Gap_Name_ = s;
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
      // Multiple_Library_Map
      //

      Multiple_Library_Map::
      Multiple_Library_Map (const TargetLibraryName_type& TargetLibraryName)
      : ::xml_schema::type (),
        Description_ (this),
        TargetLibraryName_ (TargetLibraryName, this),
        Component_Map_One2one_Name_ (this),
        Component_Map_Many2One_Name_ (this),
        Component_Map_One2Many_Name_ (this),
        Component_Map_Gap_Name_ (this)
      {
      }

      Multiple_Library_Map::
      Multiple_Library_Map (const Multiple_Library_Map& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        Description_ (x.Description_, f, this),
        TargetLibraryName_ (x.TargetLibraryName_, f, this),
        Component_Map_One2one_Name_ (x.Component_Map_One2one_Name_, f, this),
        Component_Map_Many2One_Name_ (x.Component_Map_Many2One_Name_, f, this),
        Component_Map_One2Many_Name_ (x.Component_Map_One2Many_Name_, f, this),
        Component_Map_Gap_Name_ (x.Component_Map_Gap_Name_, f, this)
      {
      }

      Multiple_Library_Map::
      Multiple_Library_Map (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        Description_ (this),
        TargetLibraryName_ (this),
        Component_Map_One2one_Name_ (this),
        Component_Map_Many2One_Name_ (this),
        Component_Map_One2Many_Name_ (this),
        Component_Map_Gap_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
          this->parse (p, f);
        }
      }

      void Multiple_Library_Map::
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

          // TargetLibraryName
          //
          if (n.name () == "TargetLibraryName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetLibraryName_type > r (
              TargetLibraryName_traits::create (i, f, this));

            if (!TargetLibraryName_.present ())
            {
              this->TargetLibraryName_.set (r);
              continue;
            }
          }

          // Component_Map_One2one_Name
          //
          if (n.name () == "Component_Map_One2one_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_One2one_Name_type > r (
              Component_Map_One2one_Name_traits::create (i, f, this));

            this->Component_Map_One2one_Name_.push_back (r);
            continue;
          }

          // Component_Map_Many2One_Name
          //
          if (n.name () == "Component_Map_Many2One_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_Many2One_Name_type > r (
              Component_Map_Many2One_Name_traits::create (i, f, this));

            this->Component_Map_Many2One_Name_.push_back (r);
            continue;
          }

          // Component_Map_One2Many_Name
          //
          if (n.name () == "Component_Map_One2Many_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_One2Many_Name_type > r (
              Component_Map_One2Many_Name_traits::create (i, f, this));

            this->Component_Map_One2Many_Name_.push_back (r);
            continue;
          }

          // Component_Map_Gap_Name
          //
          if (n.name () == "Component_Map_Gap_Name" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Component_Map_Gap_Name_type > r (
              Component_Map_Gap_Name_traits::create (i, f, this));

            this->Component_Map_Gap_Name_.push_back (r);
            continue;
          }

          break;
        }

        if (!TargetLibraryName_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "TargetLibraryName",
            "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap");
        }
      }

      Multiple_Library_Map* Multiple_Library_Map::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class Multiple_Library_Map (*this, f, c);
      }

      Multiple_Library_Map& Multiple_Library_Map::
      operator= (const Multiple_Library_Map& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->Description_ = x.Description_;
          this->TargetLibraryName_ = x.TargetLibraryName_;
          this->Component_Map_One2one_Name_ = x.Component_Map_One2one_Name_;
          this->Component_Map_Many2One_Name_ = x.Component_Map_Many2One_Name_;
          this->Component_Map_One2Many_Name_ = x.Component_Map_One2Many_Name_;
          this->Component_Map_Gap_Name_ = x.Component_Map_Gap_Name_;
        }

        return *this;
      }

      Multiple_Library_Map::
      ~Multiple_Library_Map ()
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

