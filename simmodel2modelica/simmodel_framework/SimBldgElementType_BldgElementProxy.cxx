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

#include "SimBldgElementType_BldgElementProxy.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimBldgElementType_BldgElementProxy
      // 

      const SimBldgElementType_BldgElementProxy::ElementType_optional& SimBldgElementType_BldgElementProxy::
      ElementType () const
      {
        return this->ElementType_;
      }

      SimBldgElementType_BldgElementProxy::ElementType_optional& SimBldgElementType_BldgElementProxy::
      ElementType ()
      {
        return this->ElementType_;
      }

      void SimBldgElementType_BldgElementProxy::
      ElementType (const ElementType_type& x)
      {
        this->ElementType_.set (x);
      }

      void SimBldgElementType_BldgElementProxy::
      ElementType (const ElementType_optional& x)
      {
        this->ElementType_ = x;
      }

      void SimBldgElementType_BldgElementProxy::
      ElementType (::std::auto_ptr< ElementType_type > x)
      {
        this->ElementType_.set (x);
      }

      const SimBldgElementType_BldgElementProxy::PredefinedType_optional& SimBldgElementType_BldgElementProxy::
      PredefinedType () const
      {
        return this->PredefinedType_;
      }

      SimBldgElementType_BldgElementProxy::PredefinedType_optional& SimBldgElementType_BldgElementProxy::
      PredefinedType ()
      {
        return this->PredefinedType_;
      }

      void SimBldgElementType_BldgElementProxy::
      PredefinedType (const PredefinedType_type& x)
      {
        this->PredefinedType_.set (x);
      }

      void SimBldgElementType_BldgElementProxy::
      PredefinedType (const PredefinedType_optional& x)
      {
        this->PredefinedType_ = x;
      }

      void SimBldgElementType_BldgElementProxy::
      PredefinedType (::std::auto_ptr< PredefinedType_type > x)
      {
        this->PredefinedType_.set (x);
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
      // SimBldgElementType_BldgElementProxy
      //

      SimBldgElementType_BldgElementProxy::
      SimBldgElementType_BldgElementProxy (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimBldgElementType (RefId),
        ElementType_ (this),
        PredefinedType_ (this)
      {
      }

      SimBldgElementType_BldgElementProxy::
      SimBldgElementType_BldgElementProxy (const SimBldgElementType_BldgElementProxy& x,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBldgElementType (x, f, c),
        ElementType_ (x.ElementType_, f, this),
        PredefinedType_ (x.PredefinedType_, f, this)
      {
      }

      SimBldgElementType_BldgElementProxy::
      SimBldgElementType_BldgElementProxy (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBldgElementType (e, f | ::xml_schema::flags::base, c),
        ElementType_ (this),
        PredefinedType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBldgElementType_BldgElementProxy::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimBldgElementType::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ElementType
          //
          if (n.name () == "ElementType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ElementType_type > r (
              ElementType_traits::create (i, f, this));

            if (!this->ElementType_)
            {
              this->ElementType_.set (r);
              continue;
            }
          }

          // PredefinedType
          //
          if (n.name () == "PredefinedType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< PredefinedType_type > r (
              PredefinedType_traits::create (i, f, this));

            if (!this->PredefinedType_)
            {
              this->PredefinedType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBldgElementType_BldgElementProxy* SimBldgElementType_BldgElementProxy::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBldgElementType_BldgElementProxy (*this, f, c);
      }

      SimBldgElementType_BldgElementProxy& SimBldgElementType_BldgElementProxy::
      operator= (const SimBldgElementType_BldgElementProxy& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimBldgElementType& > (*this) = x;
          this->ElementType_ = x.ElementType_;
          this->PredefinedType_ = x.PredefinedType_;
        }

        return *this;
      }

      SimBldgElementType_BldgElementProxy::
      ~SimBldgElementType_BldgElementProxy ()
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

