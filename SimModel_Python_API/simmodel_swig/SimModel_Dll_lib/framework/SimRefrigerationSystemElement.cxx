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

#include "SimRefrigerationSystemElement.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimRefrigerationSystemElement
      // 

      const SimRefrigerationSystemElement::Representation_optional& SimRefrigerationSystemElement::
      Representation () const
      {
        return this->Representation_;
      }

      SimRefrigerationSystemElement::Representation_optional& SimRefrigerationSystemElement::
      Representation ()
      {
        return this->Representation_;
      }

      void SimRefrigerationSystemElement::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimRefrigerationSystemElement::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimRefrigerationSystemElement::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
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
    namespace MepModel
    {
      // SimRefrigerationSystemElement
      //

      SimRefrigerationSystemElement::
      SimRefrigerationSystemElement ()
      : ::schema::simxml::SimModelCore::SimDistributionFlowElement (),
        Representation_ (this)
      {
      }

      SimRefrigerationSystemElement::
      SimRefrigerationSystemElement (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimDistributionFlowElement (RefId),
        Representation_ (this)
      {
      }

      SimRefrigerationSystemElement::
      SimRefrigerationSystemElement (const SimRefrigerationSystemElement& x,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimDistributionFlowElement (x, f, c),
        Representation_ (x.Representation_, f, this)
      {
      }

      SimRefrigerationSystemElement::
      SimRefrigerationSystemElement (const ::xercesc::DOMElement& e,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimDistributionFlowElement (e, f | ::xml_schema::flags::base, c),
        Representation_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimRefrigerationSystemElement::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimDistributionFlowElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimRefrigerationSystemElement* SimRefrigerationSystemElement::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimRefrigerationSystemElement (*this, f, c);
      }

      SimRefrigerationSystemElement& SimRefrigerationSystemElement::
      operator= (const SimRefrigerationSystemElement& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimDistributionFlowElement& > (*this) = x;
          this->Representation_ = x.Representation_;
        }

        return *this;
      }

      SimRefrigerationSystemElement::
      ~SimRefrigerationSystemElement ()
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
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

