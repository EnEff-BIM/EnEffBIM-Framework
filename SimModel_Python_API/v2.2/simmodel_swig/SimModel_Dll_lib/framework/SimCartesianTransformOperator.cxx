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

#include "SimCartesianTransformOperator.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimCartesianTransformOperator
      // 

      const SimCartesianTransformOperator::Axis1_optional& SimCartesianTransformOperator::
      Axis1 () const
      {
        return this->Axis1_;
      }

      SimCartesianTransformOperator::Axis1_optional& SimCartesianTransformOperator::
      Axis1 ()
      {
        return this->Axis1_;
      }

      void SimCartesianTransformOperator::
      Axis1 (const Axis1_type& x)
      {
        this->Axis1_.set (x);
      }

      void SimCartesianTransformOperator::
      Axis1 (const Axis1_optional& x)
      {
        this->Axis1_ = x;
      }

      void SimCartesianTransformOperator::
      Axis1 (::std::auto_ptr< Axis1_type > x)
      {
        this->Axis1_.set (x);
      }

      const SimCartesianTransformOperator::Axis2_optional& SimCartesianTransformOperator::
      Axis2 () const
      {
        return this->Axis2_;
      }

      SimCartesianTransformOperator::Axis2_optional& SimCartesianTransformOperator::
      Axis2 ()
      {
        return this->Axis2_;
      }

      void SimCartesianTransformOperator::
      Axis2 (const Axis2_type& x)
      {
        this->Axis2_.set (x);
      }

      void SimCartesianTransformOperator::
      Axis2 (const Axis2_optional& x)
      {
        this->Axis2_ = x;
      }

      void SimCartesianTransformOperator::
      Axis2 (::std::auto_ptr< Axis2_type > x)
      {
        this->Axis2_.set (x);
      }

      const SimCartesianTransformOperator::LocalOrigin_optional& SimCartesianTransformOperator::
      LocalOrigin () const
      {
        return this->LocalOrigin_;
      }

      SimCartesianTransformOperator::LocalOrigin_optional& SimCartesianTransformOperator::
      LocalOrigin ()
      {
        return this->LocalOrigin_;
      }

      void SimCartesianTransformOperator::
      LocalOrigin (const LocalOrigin_type& x)
      {
        this->LocalOrigin_.set (x);
      }

      void SimCartesianTransformOperator::
      LocalOrigin (const LocalOrigin_optional& x)
      {
        this->LocalOrigin_ = x;
      }

      void SimCartesianTransformOperator::
      LocalOrigin (::std::auto_ptr< LocalOrigin_type > x)
      {
        this->LocalOrigin_.set (x);
      }

      const SimCartesianTransformOperator::Scale_optional& SimCartesianTransformOperator::
      Scale () const
      {
        return this->Scale_;
      }

      SimCartesianTransformOperator::Scale_optional& SimCartesianTransformOperator::
      Scale ()
      {
        return this->Scale_;
      }

      void SimCartesianTransformOperator::
      Scale (const Scale_type& x)
      {
        this->Scale_.set (x);
      }

      void SimCartesianTransformOperator::
      Scale (const Scale_optional& x)
      {
        this->Scale_ = x;
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
      // SimCartesianTransformOperator
      //

      SimCartesianTransformOperator::
      SimCartesianTransformOperator ()
      : ::schema::simxml::SimModelCore::SimRepresentationItem (),
        Axis1_ (this),
        Axis2_ (this),
        LocalOrigin_ (this),
        Scale_ (this)
      {
      }

      SimCartesianTransformOperator::
      SimCartesianTransformOperator (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimRepresentationItem (RefId),
        Axis1_ (this),
        Axis2_ (this),
        LocalOrigin_ (this),
        Scale_ (this)
      {
      }

      SimCartesianTransformOperator::
      SimCartesianTransformOperator (const SimCartesianTransformOperator& x,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimRepresentationItem (x, f, c),
        Axis1_ (x.Axis1_, f, this),
        Axis2_ (x.Axis2_, f, this),
        LocalOrigin_ (x.LocalOrigin_, f, this),
        Scale_ (x.Scale_, f, this)
      {
      }

      SimCartesianTransformOperator::
      SimCartesianTransformOperator (const ::xercesc::DOMElement& e,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimRepresentationItem (e, f | ::xml_schema::flags::base, c),
        Axis1_ (this),
        Axis2_ (this),
        LocalOrigin_ (this),
        Scale_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCartesianTransformOperator::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimRepresentationItem::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Axis1
          //
          if (n.name () == "Axis1" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Axis1_type > r (
              Axis1_traits::create (i, f, this));

            if (!this->Axis1_)
            {
              this->Axis1_.set (r);
              continue;
            }
          }

          // Axis2
          //
          if (n.name () == "Axis2" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Axis2_type > r (
              Axis2_traits::create (i, f, this));

            if (!this->Axis2_)
            {
              this->Axis2_.set (r);
              continue;
            }
          }

          // LocalOrigin
          //
          if (n.name () == "LocalOrigin" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< LocalOrigin_type > r (
              LocalOrigin_traits::create (i, f, this));

            if (!this->LocalOrigin_)
            {
              this->LocalOrigin_.set (r);
              continue;
            }
          }

          // Scale
          //
          if (n.name () == "Scale" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->Scale_)
            {
              this->Scale_.set (Scale_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimCartesianTransformOperator* SimCartesianTransformOperator::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCartesianTransformOperator (*this, f, c);
      }

      SimCartesianTransformOperator& SimCartesianTransformOperator::
      operator= (const SimCartesianTransformOperator& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimRepresentationItem& > (*this) = x;
          this->Axis1_ = x.Axis1_;
          this->Axis2_ = x.Axis2_;
          this->LocalOrigin_ = x.LocalOrigin_;
          this->Scale_ = x.Scale_;
        }

        return *this;
      }

      SimCartesianTransformOperator::
      ~SimCartesianTransformOperator ()
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

