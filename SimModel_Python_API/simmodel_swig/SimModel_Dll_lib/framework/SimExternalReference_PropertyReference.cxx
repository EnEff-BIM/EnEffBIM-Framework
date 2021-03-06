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

#include "SimExternalReference_PropertyReference.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimExternalReference_PropertyReference
      // 

      const SimExternalReference_PropertyReference::UsageName_optional& SimExternalReference_PropertyReference::
      UsageName () const
      {
        return this->UsageName_;
      }

      SimExternalReference_PropertyReference::UsageName_optional& SimExternalReference_PropertyReference::
      UsageName ()
      {
        return this->UsageName_;
      }

      void SimExternalReference_PropertyReference::
      UsageName (const UsageName_type& x)
      {
        this->UsageName_.set (x);
      }

      void SimExternalReference_PropertyReference::
      UsageName (const UsageName_optional& x)
      {
        this->UsageName_ = x;
      }

      void SimExternalReference_PropertyReference::
      UsageName (::std::auto_ptr< UsageName_type > x)
      {
        this->UsageName_.set (x);
      }

      const SimExternalReference_PropertyReference::PropertyReference_optional& SimExternalReference_PropertyReference::
      PropertyReference () const
      {
        return this->PropertyReference_;
      }

      SimExternalReference_PropertyReference::PropertyReference_optional& SimExternalReference_PropertyReference::
      PropertyReference ()
      {
        return this->PropertyReference_;
      }

      void SimExternalReference_PropertyReference::
      PropertyReference (const PropertyReference_type& x)
      {
        this->PropertyReference_.set (x);
      }

      void SimExternalReference_PropertyReference::
      PropertyReference (const PropertyReference_optional& x)
      {
        this->PropertyReference_ = x;
      }

      void SimExternalReference_PropertyReference::
      PropertyReference (::std::auto_ptr< PropertyReference_type > x)
      {
        this->PropertyReference_.set (x);
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
      // SimExternalReference_PropertyReference
      //

      SimExternalReference_PropertyReference::
      SimExternalReference_PropertyReference ()
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (),
        UsageName_ (this),
        PropertyReference_ (this)
      {
      }

      SimExternalReference_PropertyReference::
      SimExternalReference_PropertyReference (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (RefId),
        UsageName_ (this),
        PropertyReference_ (this)
      {
      }

      SimExternalReference_PropertyReference::
      SimExternalReference_PropertyReference (const SimExternalReference_PropertyReference& x,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (x, f, c),
        UsageName_ (x.UsageName_, f, this),
        PropertyReference_ (x.PropertyReference_, f, this)
      {
      }

      SimExternalReference_PropertyReference::
      SimExternalReference_PropertyReference (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (e, f | ::xml_schema::flags::base, c),
        UsageName_ (this),
        PropertyReference_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimExternalReference_PropertyReference::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimExternalReference::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // UsageName
          //
          if (n.name () == "UsageName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< UsageName_type > r (
              UsageName_traits::create (i, f, this));

            if (!this->UsageName_)
            {
              this->UsageName_.set (r);
              continue;
            }
          }

          // PropertyReference
          //
          if (n.name () == "PropertyReference" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< PropertyReference_type > r (
              PropertyReference_traits::create (i, f, this));

            if (!this->PropertyReference_)
            {
              this->PropertyReference_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimExternalReference_PropertyReference* SimExternalReference_PropertyReference::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimExternalReference_PropertyReference (*this, f, c);
      }

      SimExternalReference_PropertyReference& SimExternalReference_PropertyReference::
      operator= (const SimExternalReference_PropertyReference& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimExternalReference& > (*this) = x;
          this->UsageName_ = x.UsageName_;
          this->PropertyReference_ = x.PropertyReference_;
        }

        return *this;
      }

      SimExternalReference_PropertyReference::
      ~SimExternalReference_PropertyReference ()
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

