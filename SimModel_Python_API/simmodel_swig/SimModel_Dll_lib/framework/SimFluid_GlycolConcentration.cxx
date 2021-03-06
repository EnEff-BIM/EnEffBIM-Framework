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

#include "SimFluid_GlycolConcentration.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimFluid_GlycolConcentration
      // 

      const SimFluid_GlycolConcentration::SimFluid_Name_optional& SimFluid_GlycolConcentration::
      SimFluid_Name () const
      {
        return this->SimFluid_Name_;
      }

      SimFluid_GlycolConcentration::SimFluid_Name_optional& SimFluid_GlycolConcentration::
      SimFluid_Name ()
      {
        return this->SimFluid_Name_;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_Name (const SimFluid_Name_type& x)
      {
        this->SimFluid_Name_.set (x);
      }

      void SimFluid_GlycolConcentration::
      SimFluid_Name (const SimFluid_Name_optional& x)
      {
        this->SimFluid_Name_ = x;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_Name (::std::auto_ptr< SimFluid_Name_type > x)
      {
        this->SimFluid_Name_.set (x);
      }

      const SimFluid_GlycolConcentration::SimFluid_GlycolType_optional& SimFluid_GlycolConcentration::
      SimFluid_GlycolType () const
      {
        return this->SimFluid_GlycolType_;
      }

      SimFluid_GlycolConcentration::SimFluid_GlycolType_optional& SimFluid_GlycolConcentration::
      SimFluid_GlycolType ()
      {
        return this->SimFluid_GlycolType_;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_GlycolType (const SimFluid_GlycolType_type& x)
      {
        this->SimFluid_GlycolType_.set (x);
      }

      void SimFluid_GlycolConcentration::
      SimFluid_GlycolType (const SimFluid_GlycolType_optional& x)
      {
        this->SimFluid_GlycolType_ = x;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_GlycolType (::std::auto_ptr< SimFluid_GlycolType_type > x)
      {
        this->SimFluid_GlycolType_.set (x);
      }

      const SimFluid_GlycolConcentration::SimFluid_UserDefGlycolName_optional& SimFluid_GlycolConcentration::
      SimFluid_UserDefGlycolName () const
      {
        return this->SimFluid_UserDefGlycolName_;
      }

      SimFluid_GlycolConcentration::SimFluid_UserDefGlycolName_optional& SimFluid_GlycolConcentration::
      SimFluid_UserDefGlycolName ()
      {
        return this->SimFluid_UserDefGlycolName_;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_UserDefGlycolName (const SimFluid_UserDefGlycolName_type& x)
      {
        this->SimFluid_UserDefGlycolName_.set (x);
      }

      void SimFluid_GlycolConcentration::
      SimFluid_UserDefGlycolName (const SimFluid_UserDefGlycolName_optional& x)
      {
        this->SimFluid_UserDefGlycolName_ = x;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_UserDefGlycolName (::std::auto_ptr< SimFluid_UserDefGlycolName_type > x)
      {
        this->SimFluid_UserDefGlycolName_.set (x);
      }

      const SimFluid_GlycolConcentration::SimFluid_GlycolConcentration1_optional& SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration1 () const
      {
        return this->SimFluid_GlycolConcentration1_;
      }

      SimFluid_GlycolConcentration::SimFluid_GlycolConcentration1_optional& SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration1 ()
      {
        return this->SimFluid_GlycolConcentration1_;
      }

      void SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration1 (const SimFluid_GlycolConcentration1_type& x)
      {
        this->SimFluid_GlycolConcentration1_.set (x);
      }

      void SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration1 (const SimFluid_GlycolConcentration1_optional& x)
      {
        this->SimFluid_GlycolConcentration1_ = x;
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
      // SimFluid_GlycolConcentration
      //

      SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration ()
      : ::schema::simxml::ResourcesGeneral::SimFluid (),
        SimFluid_Name_ (this),
        SimFluid_GlycolType_ (this),
        SimFluid_UserDefGlycolName_ (this),
        SimFluid_GlycolConcentration1_ (this)
      {
      }

      SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimFluid (RefId),
        SimFluid_Name_ (this),
        SimFluid_GlycolType_ (this),
        SimFluid_UserDefGlycolName_ (this),
        SimFluid_GlycolConcentration1_ (this)
      {
      }

      SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration (const SimFluid_GlycolConcentration& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (x, f, c),
        SimFluid_Name_ (x.SimFluid_Name_, f, this),
        SimFluid_GlycolType_ (x.SimFluid_GlycolType_, f, this),
        SimFluid_UserDefGlycolName_ (x.SimFluid_UserDefGlycolName_, f, this),
        SimFluid_GlycolConcentration1_ (x.SimFluid_GlycolConcentration1_, f, this)
      {
      }

      SimFluid_GlycolConcentration::
      SimFluid_GlycolConcentration (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (e, f | ::xml_schema::flags::base, c),
        SimFluid_Name_ (this),
        SimFluid_GlycolType_ (this),
        SimFluid_UserDefGlycolName_ (this),
        SimFluid_GlycolConcentration1_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFluid_GlycolConcentration::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimFluid::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFluid_Name
          //
          if (n.name () == "SimFluid_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_Name_type > r (
              SimFluid_Name_traits::create (i, f, this));

            if (!this->SimFluid_Name_)
            {
              this->SimFluid_Name_.set (r);
              continue;
            }
          }

          // SimFluid_GlycolType
          //
          if (n.name () == "SimFluid_GlycolType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_GlycolType_type > r (
              SimFluid_GlycolType_traits::create (i, f, this));

            if (!this->SimFluid_GlycolType_)
            {
              this->SimFluid_GlycolType_.set (r);
              continue;
            }
          }

          // SimFluid_UserDefGlycolName
          //
          if (n.name () == "SimFluid_UserDefGlycolName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_UserDefGlycolName_type > r (
              SimFluid_UserDefGlycolName_traits::create (i, f, this));

            if (!this->SimFluid_UserDefGlycolName_)
            {
              this->SimFluid_UserDefGlycolName_.set (r);
              continue;
            }
          }

          // SimFluid_GlycolConcentration
          //
          if (n.name () == "SimFluid_GlycolConcentration" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimFluid_GlycolConcentration1_)
            {
              this->SimFluid_GlycolConcentration1_.set (SimFluid_GlycolConcentration1_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFluid_GlycolConcentration* SimFluid_GlycolConcentration::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFluid_GlycolConcentration (*this, f, c);
      }

      SimFluid_GlycolConcentration& SimFluid_GlycolConcentration::
      operator= (const SimFluid_GlycolConcentration& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimFluid& > (*this) = x;
          this->SimFluid_Name_ = x.SimFluid_Name_;
          this->SimFluid_GlycolType_ = x.SimFluid_GlycolType_;
          this->SimFluid_UserDefGlycolName_ = x.SimFluid_UserDefGlycolName_;
          this->SimFluid_GlycolConcentration1_ = x.SimFluid_GlycolConcentration1_;
        }

        return *this;
      }

      SimFluid_GlycolConcentration::
      ~SimFluid_GlycolConcentration ()
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

