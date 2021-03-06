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

#include "SimGeomBooleanResult.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomBooleanResult
      // 

      const SimGeomBooleanResult::Operator_optional& SimGeomBooleanResult::
      Operator () const
      {
        return this->Operator_;
      }

      SimGeomBooleanResult::Operator_optional& SimGeomBooleanResult::
      Operator ()
      {
        return this->Operator_;
      }

      void SimGeomBooleanResult::
      Operator (const Operator_type& x)
      {
        this->Operator_.set (x);
      }

      void SimGeomBooleanResult::
      Operator (const Operator_optional& x)
      {
        this->Operator_ = x;
      }

      void SimGeomBooleanResult::
      Operator (::std::auto_ptr< Operator_type > x)
      {
        this->Operator_.set (x);
      }

      const SimGeomBooleanResult::FirstOperand_optional& SimGeomBooleanResult::
      FirstOperand () const
      {
        return this->FirstOperand_;
      }

      SimGeomBooleanResult::FirstOperand_optional& SimGeomBooleanResult::
      FirstOperand ()
      {
        return this->FirstOperand_;
      }

      void SimGeomBooleanResult::
      FirstOperand (const FirstOperand_type& x)
      {
        this->FirstOperand_.set (x);
      }

      void SimGeomBooleanResult::
      FirstOperand (const FirstOperand_optional& x)
      {
        this->FirstOperand_ = x;
      }

      void SimGeomBooleanResult::
      FirstOperand (::std::auto_ptr< FirstOperand_type > x)
      {
        this->FirstOperand_.set (x);
      }

      const SimGeomBooleanResult::SecondOperand_optional& SimGeomBooleanResult::
      SecondOperand () const
      {
        return this->SecondOperand_;
      }

      SimGeomBooleanResult::SecondOperand_optional& SimGeomBooleanResult::
      SecondOperand ()
      {
        return this->SecondOperand_;
      }

      void SimGeomBooleanResult::
      SecondOperand (const SecondOperand_type& x)
      {
        this->SecondOperand_.set (x);
      }

      void SimGeomBooleanResult::
      SecondOperand (const SecondOperand_optional& x)
      {
        this->SecondOperand_ = x;
      }

      void SimGeomBooleanResult::
      SecondOperand (::std::auto_ptr< SecondOperand_type > x)
      {
        this->SecondOperand_.set (x);
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
    namespace ResourcesGeometry
    {
      // SimGeomBooleanResult
      //

      SimGeomBooleanResult::
      SimGeomBooleanResult ()
      : ::schema::simxml::SimModelCore::SimGeometricRepresentationItem (),
        Operator_ (this),
        FirstOperand_ (this),
        SecondOperand_ (this)
      {
      }

      SimGeomBooleanResult::
      SimGeomBooleanResult (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimGeometricRepresentationItem (RefId),
        Operator_ (this),
        FirstOperand_ (this),
        SecondOperand_ (this)
      {
      }

      SimGeomBooleanResult::
      SimGeomBooleanResult (const SimGeomBooleanResult& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimGeometricRepresentationItem (x, f, c),
        Operator_ (x.Operator_, f, this),
        FirstOperand_ (x.FirstOperand_, f, this),
        SecondOperand_ (x.SecondOperand_, f, this)
      {
      }

      SimGeomBooleanResult::
      SimGeomBooleanResult (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimGeometricRepresentationItem (e, f | ::xml_schema::flags::base, c),
        Operator_ (this),
        FirstOperand_ (this),
        SecondOperand_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomBooleanResult::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimGeometricRepresentationItem::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Operator
          //
          if (n.name () == "Operator" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Operator_type > r (
              Operator_traits::create (i, f, this));

            if (!this->Operator_)
            {
              this->Operator_.set (r);
              continue;
            }
          }

          // FirstOperand
          //
          if (n.name () == "FirstOperand" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< FirstOperand_type > r (
              FirstOperand_traits::create (i, f, this));

            if (!this->FirstOperand_)
            {
              this->FirstOperand_.set (r);
              continue;
            }
          }

          // SecondOperand
          //
          if (n.name () == "SecondOperand" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< SecondOperand_type > r (
              SecondOperand_traits::create (i, f, this));

            if (!this->SecondOperand_)
            {
              this->SecondOperand_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomBooleanResult* SimGeomBooleanResult::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomBooleanResult (*this, f, c);
      }

      SimGeomBooleanResult& SimGeomBooleanResult::
      operator= (const SimGeomBooleanResult& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimGeometricRepresentationItem& > (*this) = x;
          this->Operator_ = x.Operator_;
          this->FirstOperand_ = x.FirstOperand_;
          this->SecondOperand_ = x.SecondOperand_;
        }

        return *this;
      }

      SimGeomBooleanResult::
      ~SimGeomBooleanResult ()
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

