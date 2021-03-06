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

#include "SimClassification_ClassificationReference.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimClassification_ClassificationReference
      // 

      const SimClassification_ClassificationReference::Location_optional& SimClassification_ClassificationReference::
      Location () const
      {
        return this->Location_;
      }

      SimClassification_ClassificationReference::Location_optional& SimClassification_ClassificationReference::
      Location ()
      {
        return this->Location_;
      }

      void SimClassification_ClassificationReference::
      Location (const Location_type& x)
      {
        this->Location_.set (x);
      }

      void SimClassification_ClassificationReference::
      Location (const Location_optional& x)
      {
        this->Location_ = x;
      }

      void SimClassification_ClassificationReference::
      Location (::std::auto_ptr< Location_type > x)
      {
        this->Location_.set (x);
      }

      const SimClassification_ClassificationReference::ItemReference_optional& SimClassification_ClassificationReference::
      ItemReference () const
      {
        return this->ItemReference_;
      }

      SimClassification_ClassificationReference::ItemReference_optional& SimClassification_ClassificationReference::
      ItemReference ()
      {
        return this->ItemReference_;
      }

      void SimClassification_ClassificationReference::
      ItemReference (const ItemReference_type& x)
      {
        this->ItemReference_.set (x);
      }

      void SimClassification_ClassificationReference::
      ItemReference (const ItemReference_optional& x)
      {
        this->ItemReference_ = x;
      }

      void SimClassification_ClassificationReference::
      ItemReference (::std::auto_ptr< ItemReference_type > x)
      {
        this->ItemReference_.set (x);
      }

      const SimClassification_ClassificationReference::ReferencedSource_optional& SimClassification_ClassificationReference::
      ReferencedSource () const
      {
        return this->ReferencedSource_;
      }

      SimClassification_ClassificationReference::ReferencedSource_optional& SimClassification_ClassificationReference::
      ReferencedSource ()
      {
        return this->ReferencedSource_;
      }

      void SimClassification_ClassificationReference::
      ReferencedSource (const ReferencedSource_type& x)
      {
        this->ReferencedSource_.set (x);
      }

      void SimClassification_ClassificationReference::
      ReferencedSource (const ReferencedSource_optional& x)
      {
        this->ReferencedSource_ = x;
      }

      void SimClassification_ClassificationReference::
      ReferencedSource (::std::auto_ptr< ReferencedSource_type > x)
      {
        this->ReferencedSource_.set (x);
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
      // SimClassification_ClassificationReference
      //

      SimClassification_ClassificationReference::
      SimClassification_ClassificationReference ()
      : ::schema::simxml::ResourcesGeneral::SimClassification (),
        Location_ (this),
        ItemReference_ (this),
        ReferencedSource_ (this)
      {
      }

      SimClassification_ClassificationReference::
      SimClassification_ClassificationReference (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimClassification (RefId),
        Location_ (this),
        ItemReference_ (this),
        ReferencedSource_ (this)
      {
      }

      SimClassification_ClassificationReference::
      SimClassification_ClassificationReference (const SimClassification_ClassificationReference& x,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimClassification (x, f, c),
        Location_ (x.Location_, f, this),
        ItemReference_ (x.ItemReference_, f, this),
        ReferencedSource_ (x.ReferencedSource_, f, this)
      {
      }

      SimClassification_ClassificationReference::
      SimClassification_ClassificationReference (const ::xercesc::DOMElement& e,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimClassification (e, f | ::xml_schema::flags::base, c),
        Location_ (this),
        ItemReference_ (this),
        ReferencedSource_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimClassification_ClassificationReference::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimClassification::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Location
          //
          if (n.name () == "Location" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Location_type > r (
              Location_traits::create (i, f, this));

            if (!this->Location_)
            {
              this->Location_.set (r);
              continue;
            }
          }

          // ItemReference
          //
          if (n.name () == "ItemReference" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ItemReference_type > r (
              ItemReference_traits::create (i, f, this));

            if (!this->ItemReference_)
            {
              this->ItemReference_.set (r);
              continue;
            }
          }

          // ReferencedSource
          //
          if (n.name () == "ReferencedSource" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ReferencedSource_type > r (
              ReferencedSource_traits::create (i, f, this));

            if (!this->ReferencedSource_)
            {
              this->ReferencedSource_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimClassification_ClassificationReference* SimClassification_ClassificationReference::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimClassification_ClassificationReference (*this, f, c);
      }

      SimClassification_ClassificationReference& SimClassification_ClassificationReference::
      operator= (const SimClassification_ClassificationReference& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimClassification& > (*this) = x;
          this->Location_ = x.Location_;
          this->ItemReference_ = x.ItemReference_;
          this->ReferencedSource_ = x.ReferencedSource_;
        }

        return *this;
      }

      SimClassification_ClassificationReference::
      ~SimClassification_ClassificationReference ()
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

