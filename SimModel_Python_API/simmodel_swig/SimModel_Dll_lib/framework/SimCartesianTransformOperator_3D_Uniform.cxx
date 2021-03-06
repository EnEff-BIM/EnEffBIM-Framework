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

#include "SimCartesianTransformOperator_3D_Uniform.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimCartesianTransformOperator_3D_Uniform
      // 

      const SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_PlaneTransform_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_PlaneTransform () const
      {
        return this->SimCartesianTransformOperator_PlaneTransform_;
      }

      SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_PlaneTransform_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_PlaneTransform ()
      {
        return this->SimCartesianTransformOperator_PlaneTransform_;
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_PlaneTransform (const SimCartesianTransformOperator_PlaneTransform_type& x)
      {
        this->SimCartesianTransformOperator_PlaneTransform_.set (x);
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_PlaneTransform (const SimCartesianTransformOperator_PlaneTransform_optional& x)
      {
        this->SimCartesianTransformOperator_PlaneTransform_ = x;
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_PlaneTransform (::std::auto_ptr< SimCartesianTransformOperator_PlaneTransform_type > x)
      {
        this->SimCartesianTransformOperator_PlaneTransform_.set (x);
      }

      const SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_CurrentAspectRatio_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_CurrentAspectRatio () const
      {
        return this->SimCartesianTransformOperator_CurrentAspectRatio_;
      }

      SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_CurrentAspectRatio_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_CurrentAspectRatio ()
      {
        return this->SimCartesianTransformOperator_CurrentAspectRatio_;
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_CurrentAspectRatio (const SimCartesianTransformOperator_CurrentAspectRatio_type& x)
      {
        this->SimCartesianTransformOperator_CurrentAspectRatio_.set (x);
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_CurrentAspectRatio (const SimCartesianTransformOperator_CurrentAspectRatio_optional& x)
      {
        this->SimCartesianTransformOperator_CurrentAspectRatio_ = x;
      }

      const SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_NewAspectRatio_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_NewAspectRatio () const
      {
        return this->SimCartesianTransformOperator_NewAspectRatio_;
      }

      SimCartesianTransformOperator_3D_Uniform::SimCartesianTransformOperator_NewAspectRatio_optional& SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_NewAspectRatio ()
      {
        return this->SimCartesianTransformOperator_NewAspectRatio_;
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_NewAspectRatio (const SimCartesianTransformOperator_NewAspectRatio_type& x)
      {
        this->SimCartesianTransformOperator_NewAspectRatio_.set (x);
      }

      void SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_NewAspectRatio (const SimCartesianTransformOperator_NewAspectRatio_optional& x)
      {
        this->SimCartesianTransformOperator_NewAspectRatio_ = x;
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
      // SimCartesianTransformOperator_3D_Uniform
      //

      SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_3D_Uniform ()
      : ::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D (),
        SimCartesianTransformOperator_PlaneTransform_ (this),
        SimCartesianTransformOperator_CurrentAspectRatio_ (this),
        SimCartesianTransformOperator_NewAspectRatio_ (this)
      {
      }

      SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_3D_Uniform (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D (RefId),
        SimCartesianTransformOperator_PlaneTransform_ (this),
        SimCartesianTransformOperator_CurrentAspectRatio_ (this),
        SimCartesianTransformOperator_NewAspectRatio_ (this)
      {
      }

      SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_3D_Uniform (const SimCartesianTransformOperator_3D_Uniform& x,
                                                ::xml_schema::flags f,
                                                ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D (x, f, c),
        SimCartesianTransformOperator_PlaneTransform_ (x.SimCartesianTransformOperator_PlaneTransform_, f, this),
        SimCartesianTransformOperator_CurrentAspectRatio_ (x.SimCartesianTransformOperator_CurrentAspectRatio_, f, this),
        SimCartesianTransformOperator_NewAspectRatio_ (x.SimCartesianTransformOperator_NewAspectRatio_, f, this)
      {
      }

      SimCartesianTransformOperator_3D_Uniform::
      SimCartesianTransformOperator_3D_Uniform (const ::xercesc::DOMElement& e,
                                                ::xml_schema::flags f,
                                                ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D (e, f | ::xml_schema::flags::base, c),
        SimCartesianTransformOperator_PlaneTransform_ (this),
        SimCartesianTransformOperator_CurrentAspectRatio_ (this),
        SimCartesianTransformOperator_NewAspectRatio_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCartesianTransformOperator_3D_Uniform::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCartesianTransformOperator_PlaneTransform
          //
          if (n.name () == "SimCartesianTransformOperator_PlaneTransform" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< SimCartesianTransformOperator_PlaneTransform_type > r (
              SimCartesianTransformOperator_PlaneTransform_traits::create (i, f, this));

            if (!this->SimCartesianTransformOperator_PlaneTransform_)
            {
              this->SimCartesianTransformOperator_PlaneTransform_.set (r);
              continue;
            }
          }

          // SimCartesianTransformOperator_CurrentAspectRatio
          //
          if (n.name () == "SimCartesianTransformOperator_CurrentAspectRatio" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimCartesianTransformOperator_CurrentAspectRatio_)
            {
              this->SimCartesianTransformOperator_CurrentAspectRatio_.set (SimCartesianTransformOperator_CurrentAspectRatio_traits::create (i, f, this));
              continue;
            }
          }

          // SimCartesianTransformOperator_NewAspectRatio
          //
          if (n.name () == "SimCartesianTransformOperator_NewAspectRatio" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimCartesianTransformOperator_NewAspectRatio_)
            {
              this->SimCartesianTransformOperator_NewAspectRatio_.set (SimCartesianTransformOperator_NewAspectRatio_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimCartesianTransformOperator_3D_Uniform* SimCartesianTransformOperator_3D_Uniform::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCartesianTransformOperator_3D_Uniform (*this, f, c);
      }

      SimCartesianTransformOperator_3D_Uniform& SimCartesianTransformOperator_3D_Uniform::
      operator= (const SimCartesianTransformOperator_3D_Uniform& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D& > (*this) = x;
          this->SimCartesianTransformOperator_PlaneTransform_ = x.SimCartesianTransformOperator_PlaneTransform_;
          this->SimCartesianTransformOperator_CurrentAspectRatio_ = x.SimCartesianTransformOperator_CurrentAspectRatio_;
          this->SimCartesianTransformOperator_NewAspectRatio_ = x.SimCartesianTransformOperator_NewAspectRatio_;
        }

        return *this;
      }

      SimCartesianTransformOperator_3D_Uniform::
      ~SimCartesianTransformOperator_3D_Uniform ()
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

