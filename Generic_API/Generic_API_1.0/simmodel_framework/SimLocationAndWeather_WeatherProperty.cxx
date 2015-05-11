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

#include "SimLocationAndWeather_WeatherProperty.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimLocationAndWeather_WeatherProperty
      // 

      const SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_NameOfCategoryForOverride_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_NameOfCategoryForOverride () const
      {
        return this->SimLocationAndWeather_NameOfCategoryForOverride_;
      }

      SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_NameOfCategoryForOverride_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_NameOfCategoryForOverride ()
      {
        return this->SimLocationAndWeather_NameOfCategoryForOverride_;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_NameOfCategoryForOverride (const SimLocationAndWeather_NameOfCategoryForOverride_type& x)
      {
        this->SimLocationAndWeather_NameOfCategoryForOverride_.set (x);
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_NameOfCategoryForOverride (const SimLocationAndWeather_NameOfCategoryForOverride_optional& x)
      {
        this->SimLocationAndWeather_NameOfCategoryForOverride_ = x;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_NameOfCategoryForOverride (::std::auto_ptr< SimLocationAndWeather_NameOfCategoryForOverride_type > x)
      {
        this->SimLocationAndWeather_NameOfCategoryForOverride_.set (x);
      }

      const SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_CalcType_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_CalcType () const
      {
        return this->SimLocationAndWeather_CalcType_;
      }

      SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_CalcType_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_CalcType ()
      {
        return this->SimLocationAndWeather_CalcType_;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_CalcType (const SimLocationAndWeather_CalcType_type& x)
      {
        this->SimLocationAndWeather_CalcType_.set (x);
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_CalcType (const SimLocationAndWeather_CalcType_optional& x)
      {
        this->SimLocationAndWeather_CalcType_ = x;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_CalcType (::std::auto_ptr< SimLocationAndWeather_CalcType_type > x)
      {
        this->SimLocationAndWeather_CalcType_.set (x);
      }

      const SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_SchedName_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_SchedName () const
      {
        return this->SimLocationAndWeather_SchedName_;
      }

      SimLocationAndWeather_WeatherProperty::SimLocationAndWeather_SchedName_optional& SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_SchedName ()
      {
        return this->SimLocationAndWeather_SchedName_;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_SchedName (const SimLocationAndWeather_SchedName_type& x)
      {
        this->SimLocationAndWeather_SchedName_.set (x);
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_SchedName (const SimLocationAndWeather_SchedName_optional& x)
      {
        this->SimLocationAndWeather_SchedName_ = x;
      }

      void SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_SchedName (::std::auto_ptr< SimLocationAndWeather_SchedName_type > x)
      {
        this->SimLocationAndWeather_SchedName_.set (x);
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
    namespace ResourcesGeneral
    {
      // SimLocationAndWeather_WeatherProperty
      //

      SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_WeatherProperty (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimLocationAndWeather (RefId),
        SimLocationAndWeather_NameOfCategoryForOverride_ (this),
        SimLocationAndWeather_CalcType_ (this),
        SimLocationAndWeather_SchedName_ (this)
      {
      }

      SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_WeatherProperty (const SimLocationAndWeather_WeatherProperty& x,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimLocationAndWeather (x, f, c),
        SimLocationAndWeather_NameOfCategoryForOverride_ (x.SimLocationAndWeather_NameOfCategoryForOverride_, f, this),
        SimLocationAndWeather_CalcType_ (x.SimLocationAndWeather_CalcType_, f, this),
        SimLocationAndWeather_SchedName_ (x.SimLocationAndWeather_SchedName_, f, this)
      {
      }

      SimLocationAndWeather_WeatherProperty::
      SimLocationAndWeather_WeatherProperty (const ::xercesc::DOMElement& e,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimLocationAndWeather (e, f | ::xml_schema::flags::base, c),
        SimLocationAndWeather_NameOfCategoryForOverride_ (this),
        SimLocationAndWeather_CalcType_ (this),
        SimLocationAndWeather_SchedName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimLocationAndWeather_WeatherProperty::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimLocationAndWeather::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimLocationAndWeather_NameOfCategoryForOverride
          //
          if (n.name () == "SimLocationAndWeather_NameOfCategoryForOverride" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimLocationAndWeather_NameOfCategoryForOverride_type > r (
              SimLocationAndWeather_NameOfCategoryForOverride_traits::create (i, f, this));

            if (!this->SimLocationAndWeather_NameOfCategoryForOverride_)
            {
              this->SimLocationAndWeather_NameOfCategoryForOverride_.set (r);
              continue;
            }
          }

          // SimLocationAndWeather_CalcType
          //
          if (n.name () == "SimLocationAndWeather_CalcType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimLocationAndWeather_CalcType_type > r (
              SimLocationAndWeather_CalcType_traits::create (i, f, this));

            if (!this->SimLocationAndWeather_CalcType_)
            {
              this->SimLocationAndWeather_CalcType_.set (r);
              continue;
            }
          }

          // SimLocationAndWeather_SchedName
          //
          if (n.name () == "SimLocationAndWeather_SchedName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimLocationAndWeather_SchedName_type > r (
              SimLocationAndWeather_SchedName_traits::create (i, f, this));

            if (!this->SimLocationAndWeather_SchedName_)
            {
              this->SimLocationAndWeather_SchedName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimLocationAndWeather_WeatherProperty* SimLocationAndWeather_WeatherProperty::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimLocationAndWeather_WeatherProperty (*this, f, c);
      }

      SimLocationAndWeather_WeatherProperty& SimLocationAndWeather_WeatherProperty::
      operator= (const SimLocationAndWeather_WeatherProperty& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimLocationAndWeather& > (*this) = x;
          this->SimLocationAndWeather_NameOfCategoryForOverride_ = x.SimLocationAndWeather_NameOfCategoryForOverride_;
          this->SimLocationAndWeather_CalcType_ = x.SimLocationAndWeather_CalcType_;
          this->SimLocationAndWeather_SchedName_ = x.SimLocationAndWeather_SchedName_;
        }

        return *this;
      }

      SimLocationAndWeather_WeatherProperty::
      ~SimLocationAndWeather_WeatherProperty ()
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

