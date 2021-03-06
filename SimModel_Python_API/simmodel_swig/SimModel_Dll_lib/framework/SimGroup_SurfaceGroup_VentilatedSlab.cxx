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

#include "SimGroup_SurfaceGroup_VentilatedSlab.hxx"

#include "doublelist.hxx"

#include "simgroup_slabinnodenameforsurf_1_10.hxx"

#include "simgroup_slaboutnodenamesurf_1_10.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      // SimGroup_SurfaceGroup_VentilatedSlab
      // 

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_Name_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Name () const
      {
        return this->SimGroup_Name_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_Name_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Name ()
      {
        return this->SimGroup_Name_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Name (const SimGroup_Name_type& x)
      {
        this->SimGroup_Name_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Name (const SimGroup_Name_optional& x)
      {
        this->SimGroup_Name_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Name (::std::auto_ptr< SimGroup_Name_type > x)
      {
        this->SimGroup_Name_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_Zone_1_10_Name_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Zone_1_10_Name () const
      {
        return this->SimGroup_Zone_1_10_Name_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_Zone_1_10_Name_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Zone_1_10_Name ()
      {
        return this->SimGroup_Zone_1_10_Name_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Zone_1_10_Name (const SimGroup_Zone_1_10_Name_type& x)
      {
        this->SimGroup_Zone_1_10_Name_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Zone_1_10_Name (const SimGroup_Zone_1_10_Name_optional& x)
      {
        this->SimGroup_Zone_1_10_Name_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_Zone_1_10_Name (::std::auto_ptr< SimGroup_Zone_1_10_Name_type > x)
      {
        this->SimGroup_Zone_1_10_Name_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SurfName_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfName_1_10 () const
      {
        return this->SimGroup_SurfName_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SurfName_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfName_1_10 ()
      {
        return this->SimGroup_SurfName_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfName_1_10 (const SimGroup_SurfName_1_10_type& x)
      {
        this->SimGroup_SurfName_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfName_1_10 (const SimGroup_SurfName_1_10_optional& x)
      {
        this->SimGroup_SurfName_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfName_1_10 (::std::auto_ptr< SimGroup_SurfName_1_10_type > x)
      {
        this->SimGroup_SurfName_1_10_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreDiamSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreDiamSurf_1_10 () const
      {
        return this->SimGroup_CoreDiamSurf_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreDiamSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreDiamSurf_1_10 ()
      {
        return this->SimGroup_CoreDiamSurf_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreDiamSurf_1_10 (const SimGroup_CoreDiamSurf_1_10_type& x)
      {
        this->SimGroup_CoreDiamSurf_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreDiamSurf_1_10 (const SimGroup_CoreDiamSurf_1_10_optional& x)
      {
        this->SimGroup_CoreDiamSurf_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreDiamSurf_1_10 (::std::auto_ptr< SimGroup_CoreDiamSurf_1_10_type > x)
      {
        this->SimGroup_CoreDiamSurf_1_10_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreLengthSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreLengthSurf_1_10 () const
      {
        return this->SimGroup_CoreLengthSurf_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreLengthSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreLengthSurf_1_10 ()
      {
        return this->SimGroup_CoreLengthSurf_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreLengthSurf_1_10 (const SimGroup_CoreLengthSurf_1_10_type& x)
      {
        this->SimGroup_CoreLengthSurf_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreLengthSurf_1_10 (const SimGroup_CoreLengthSurf_1_10_optional& x)
      {
        this->SimGroup_CoreLengthSurf_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreLengthSurf_1_10 (::std::auto_ptr< SimGroup_CoreLengthSurf_1_10_type > x)
      {
        this->SimGroup_CoreLengthSurf_1_10_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreNumbsSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreNumbsSurf_1_10 () const
      {
        return this->SimGroup_CoreNumbsSurf_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_CoreNumbsSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreNumbsSurf_1_10 ()
      {
        return this->SimGroup_CoreNumbsSurf_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreNumbsSurf_1_10 (const SimGroup_CoreNumbsSurf_1_10_type& x)
      {
        this->SimGroup_CoreNumbsSurf_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreNumbsSurf_1_10 (const SimGroup_CoreNumbsSurf_1_10_optional& x)
      {
        this->SimGroup_CoreNumbsSurf_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_CoreNumbsSurf_1_10 (::std::auto_ptr< SimGroup_CoreNumbsSurf_1_10_type > x)
      {
        this->SimGroup_CoreNumbsSurf_1_10_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SlabInNodeNameForSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabInNodeNameForSurf_1_10 () const
      {
        return this->SimGroup_SlabInNodeNameForSurf_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SlabInNodeNameForSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabInNodeNameForSurf_1_10 ()
      {
        return this->SimGroup_SlabInNodeNameForSurf_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabInNodeNameForSurf_1_10 (const SimGroup_SlabInNodeNameForSurf_1_10_type& x)
      {
        this->SimGroup_SlabInNodeNameForSurf_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabInNodeNameForSurf_1_10 (const SimGroup_SlabInNodeNameForSurf_1_10_optional& x)
      {
        this->SimGroup_SlabInNodeNameForSurf_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabInNodeNameForSurf_1_10 (::std::auto_ptr< SimGroup_SlabInNodeNameForSurf_1_10_type > x)
      {
        this->SimGroup_SlabInNodeNameForSurf_1_10_.set (x);
      }

      const SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SlabOutNodeNameSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabOutNodeNameSurf_1_10 () const
      {
        return this->SimGroup_SlabOutNodeNameSurf_1_10_;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::SimGroup_SlabOutNodeNameSurf_1_10_optional& SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabOutNodeNameSurf_1_10 ()
      {
        return this->SimGroup_SlabOutNodeNameSurf_1_10_;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabOutNodeNameSurf_1_10 (const SimGroup_SlabOutNodeNameSurf_1_10_type& x)
      {
        this->SimGroup_SlabOutNodeNameSurf_1_10_.set (x);
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabOutNodeNameSurf_1_10 (const SimGroup_SlabOutNodeNameSurf_1_10_optional& x)
      {
        this->SimGroup_SlabOutNodeNameSurf_1_10_ = x;
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SlabOutNodeNameSurf_1_10 (::std::auto_ptr< SimGroup_SlabOutNodeNameSurf_1_10_type > x)
      {
        this->SimGroup_SlabOutNodeNameSurf_1_10_.set (x);
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
    namespace SimModelCore
    {
      // SimGroup_SurfaceGroup_VentilatedSlab
      //

      SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfaceGroup_VentilatedSlab ()
      : ::schema::simxml::SimModelCore::SimGroup_SurfaceGroup (),
        SimGroup_Name_ (this),
        SimGroup_Zone_1_10_Name_ (this),
        SimGroup_SurfName_1_10_ (this),
        SimGroup_CoreDiamSurf_1_10_ (this),
        SimGroup_CoreLengthSurf_1_10_ (this),
        SimGroup_CoreNumbsSurf_1_10_ (this),
        SimGroup_SlabInNodeNameForSurf_1_10_ (this),
        SimGroup_SlabOutNodeNameSurf_1_10_ (this)
      {
      }

      SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfaceGroup_VentilatedSlab (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimGroup_SurfaceGroup (RefId),
        SimGroup_Name_ (this),
        SimGroup_Zone_1_10_Name_ (this),
        SimGroup_SurfName_1_10_ (this),
        SimGroup_CoreDiamSurf_1_10_ (this),
        SimGroup_CoreLengthSurf_1_10_ (this),
        SimGroup_CoreNumbsSurf_1_10_ (this),
        SimGroup_SlabInNodeNameForSurf_1_10_ (this),
        SimGroup_SlabOutNodeNameSurf_1_10_ (this)
      {
      }

      SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfaceGroup_VentilatedSlab (const SimGroup_SurfaceGroup_VentilatedSlab& x,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimGroup_SurfaceGroup (x, f, c),
        SimGroup_Name_ (x.SimGroup_Name_, f, this),
        SimGroup_Zone_1_10_Name_ (x.SimGroup_Zone_1_10_Name_, f, this),
        SimGroup_SurfName_1_10_ (x.SimGroup_SurfName_1_10_, f, this),
        SimGroup_CoreDiamSurf_1_10_ (x.SimGroup_CoreDiamSurf_1_10_, f, this),
        SimGroup_CoreLengthSurf_1_10_ (x.SimGroup_CoreLengthSurf_1_10_, f, this),
        SimGroup_CoreNumbsSurf_1_10_ (x.SimGroup_CoreNumbsSurf_1_10_, f, this),
        SimGroup_SlabInNodeNameForSurf_1_10_ (x.SimGroup_SlabInNodeNameForSurf_1_10_, f, this),
        SimGroup_SlabOutNodeNameSurf_1_10_ (x.SimGroup_SlabOutNodeNameSurf_1_10_, f, this)
      {
      }

      SimGroup_SurfaceGroup_VentilatedSlab::
      SimGroup_SurfaceGroup_VentilatedSlab (const ::xercesc::DOMElement& e,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimGroup_SurfaceGroup (e, f | ::xml_schema::flags::base, c),
        SimGroup_Name_ (this),
        SimGroup_Zone_1_10_Name_ (this),
        SimGroup_SurfName_1_10_ (this),
        SimGroup_CoreDiamSurf_1_10_ (this),
        SimGroup_CoreLengthSurf_1_10_ (this),
        SimGroup_CoreNumbsSurf_1_10_ (this),
        SimGroup_SlabInNodeNameForSurf_1_10_ (this),
        SimGroup_SlabOutNodeNameSurf_1_10_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGroup_SurfaceGroup_VentilatedSlab::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimGroup_SurfaceGroup::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimGroup_Name
          //
          if (n.name () == "SimGroup_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_Name_type > r (
              SimGroup_Name_traits::create (i, f, this));

            if (!this->SimGroup_Name_)
            {
              this->SimGroup_Name_.set (r);
              continue;
            }
          }

          // SimGroup_Zone_1_10_Name
          //
          if (n.name () == "SimGroup_Zone_1_10_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_Zone_1_10_Name_type > r (
              SimGroup_Zone_1_10_Name_traits::create (i, f, this));

            if (!this->SimGroup_Zone_1_10_Name_)
            {
              this->SimGroup_Zone_1_10_Name_.set (r);
              continue;
            }
          }

          // SimGroup_SurfName_1_10
          //
          if (n.name () == "SimGroup_SurfName_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_SurfName_1_10_type > r (
              SimGroup_SurfName_1_10_traits::create (i, f, this));

            if (!this->SimGroup_SurfName_1_10_)
            {
              this->SimGroup_SurfName_1_10_.set (r);
              continue;
            }
          }

          // SimGroup_CoreDiamSurf_1_10
          //
          if (n.name () == "SimGroup_CoreDiamSurf_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_CoreDiamSurf_1_10_type > r (
              SimGroup_CoreDiamSurf_1_10_traits::create (i, f, this));

            if (!this->SimGroup_CoreDiamSurf_1_10_)
            {
              this->SimGroup_CoreDiamSurf_1_10_.set (r);
              continue;
            }
          }

          // SimGroup_CoreLengthSurf_1_10
          //
          if (n.name () == "SimGroup_CoreLengthSurf_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_CoreLengthSurf_1_10_type > r (
              SimGroup_CoreLengthSurf_1_10_traits::create (i, f, this));

            if (!this->SimGroup_CoreLengthSurf_1_10_)
            {
              this->SimGroup_CoreLengthSurf_1_10_.set (r);
              continue;
            }
          }

          // SimGroup_CoreNumbsSurf_1_10
          //
          if (n.name () == "SimGroup_CoreNumbsSurf_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_CoreNumbsSurf_1_10_type > r (
              SimGroup_CoreNumbsSurf_1_10_traits::create (i, f, this));

            if (!this->SimGroup_CoreNumbsSurf_1_10_)
            {
              this->SimGroup_CoreNumbsSurf_1_10_.set (r);
              continue;
            }
          }

          // SimGroup_SlabInNodeNameForSurf_1_10
          //
          if (n.name () == "SimGroup_SlabInNodeNameForSurf_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_SlabInNodeNameForSurf_1_10_type > r (
              SimGroup_SlabInNodeNameForSurf_1_10_traits::create (i, f, this));

            if (!this->SimGroup_SlabInNodeNameForSurf_1_10_)
            {
              this->SimGroup_SlabInNodeNameForSurf_1_10_.set (r);
              continue;
            }
          }

          // SimGroup_SlabOutNodeNameSurf_1_10
          //
          if (n.name () == "SimGroup_SlabOutNodeNameSurf_1_10" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< SimGroup_SlabOutNodeNameSurf_1_10_type > r (
              SimGroup_SlabOutNodeNameSurf_1_10_traits::create (i, f, this));

            if (!this->SimGroup_SlabOutNodeNameSurf_1_10_)
            {
              this->SimGroup_SlabOutNodeNameSurf_1_10_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGroup_SurfaceGroup_VentilatedSlab* SimGroup_SurfaceGroup_VentilatedSlab::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGroup_SurfaceGroup_VentilatedSlab (*this, f, c);
      }

      SimGroup_SurfaceGroup_VentilatedSlab& SimGroup_SurfaceGroup_VentilatedSlab::
      operator= (const SimGroup_SurfaceGroup_VentilatedSlab& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimGroup_SurfaceGroup& > (*this) = x;
          this->SimGroup_Name_ = x.SimGroup_Name_;
          this->SimGroup_Zone_1_10_Name_ = x.SimGroup_Zone_1_10_Name_;
          this->SimGroup_SurfName_1_10_ = x.SimGroup_SurfName_1_10_;
          this->SimGroup_CoreDiamSurf_1_10_ = x.SimGroup_CoreDiamSurf_1_10_;
          this->SimGroup_CoreLengthSurf_1_10_ = x.SimGroup_CoreLengthSurf_1_10_;
          this->SimGroup_CoreNumbsSurf_1_10_ = x.SimGroup_CoreNumbsSurf_1_10_;
          this->SimGroup_SlabInNodeNameForSurf_1_10_ = x.SimGroup_SlabInNodeNameForSurf_1_10_;
          this->SimGroup_SlabOutNodeNameSurf_1_10_ = x.SimGroup_SlabOutNodeNameSurf_1_10_;
        }

        return *this;
      }

      SimGroup_SurfaceGroup_VentilatedSlab::
      ~SimGroup_SurfaceGroup_VentilatedSlab ()
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
    namespace SimModelCore
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

