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

#include "SimSensor_TemperatureSensor_DryBulb.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimSensor_TemperatureSensor_DryBulb
      // 

      const SimSensor_TemperatureSensor_DryBulb::SimSensor_Name_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Name () const
      {
        return this->SimSensor_Name_;
      }

      SimSensor_TemperatureSensor_DryBulb::SimSensor_Name_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Name ()
      {
        return this->SimSensor_Name_;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Name (const SimSensor_Name_type& x)
      {
        this->SimSensor_Name_.set (x);
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Name (const SimSensor_Name_optional& x)
      {
        this->SimSensor_Name_ = x;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Name (::std::auto_ptr< SimSensor_Name_type > x)
      {
        this->SimSensor_Name_.set (x);
      }

      const SimSensor_TemperatureSensor_DryBulb::SimSensor_Controller_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Controller () const
      {
        return this->SimSensor_Controller_;
      }

      SimSensor_TemperatureSensor_DryBulb::SimSensor_Controller_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Controller ()
      {
        return this->SimSensor_Controller_;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Controller (const SimSensor_Controller_type& x)
      {
        this->SimSensor_Controller_.set (x);
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Controller (const SimSensor_Controller_optional& x)
      {
        this->SimSensor_Controller_ = x;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Controller (::std::auto_ptr< SimSensor_Controller_type > x)
      {
        this->SimSensor_Controller_.set (x);
      }

      const SimSensor_TemperatureSensor_DryBulb::SimSensor_Accuracy_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Accuracy () const
      {
        return this->SimSensor_Accuracy_;
      }

      SimSensor_TemperatureSensor_DryBulb::SimSensor_Accuracy_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Accuracy ()
      {
        return this->SimSensor_Accuracy_;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Accuracy (const SimSensor_Accuracy_type& x)
      {
        this->SimSensor_Accuracy_.set (x);
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_Accuracy (const SimSensor_Accuracy_optional& x)
      {
        this->SimSensor_Accuracy_ = x;
      }

      const SimSensor_TemperatureSensor_DryBulb::SimSensor_MinSensedValue_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MinSensedValue () const
      {
        return this->SimSensor_MinSensedValue_;
      }

      SimSensor_TemperatureSensor_DryBulb::SimSensor_MinSensedValue_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MinSensedValue ()
      {
        return this->SimSensor_MinSensedValue_;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MinSensedValue (const SimSensor_MinSensedValue_type& x)
      {
        this->SimSensor_MinSensedValue_.set (x);
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MinSensedValue (const SimSensor_MinSensedValue_optional& x)
      {
        this->SimSensor_MinSensedValue_ = x;
      }

      const SimSensor_TemperatureSensor_DryBulb::SimSensor_MaxSensedValue_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MaxSensedValue () const
      {
        return this->SimSensor_MaxSensedValue_;
      }

      SimSensor_TemperatureSensor_DryBulb::SimSensor_MaxSensedValue_optional& SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MaxSensedValue ()
      {
        return this->SimSensor_MaxSensedValue_;
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MaxSensedValue (const SimSensor_MaxSensedValue_type& x)
      {
        this->SimSensor_MaxSensedValue_.set (x);
      }

      void SimSensor_TemperatureSensor_DryBulb::
      SimSensor_MaxSensedValue (const SimSensor_MaxSensedValue_optional& x)
      {
        this->SimSensor_MaxSensedValue_ = x;
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
      // SimSensor_TemperatureSensor_DryBulb
      //

      SimSensor_TemperatureSensor_DryBulb::
      SimSensor_TemperatureSensor_DryBulb ()
      : ::schema::simxml::MepModel::SimSensor_TemperatureSensor (),
        SimSensor_Name_ (this),
        SimSensor_Controller_ (this),
        SimSensor_Accuracy_ (this),
        SimSensor_MinSensedValue_ (this),
        SimSensor_MaxSensedValue_ (this)
      {
      }

      SimSensor_TemperatureSensor_DryBulb::
      SimSensor_TemperatureSensor_DryBulb (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimSensor_TemperatureSensor (RefId),
        SimSensor_Name_ (this),
        SimSensor_Controller_ (this),
        SimSensor_Accuracy_ (this),
        SimSensor_MinSensedValue_ (this),
        SimSensor_MaxSensedValue_ (this)
      {
      }

      SimSensor_TemperatureSensor_DryBulb::
      SimSensor_TemperatureSensor_DryBulb (const SimSensor_TemperatureSensor_DryBulb& x,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimSensor_TemperatureSensor (x, f, c),
        SimSensor_Name_ (x.SimSensor_Name_, f, this),
        SimSensor_Controller_ (x.SimSensor_Controller_, f, this),
        SimSensor_Accuracy_ (x.SimSensor_Accuracy_, f, this),
        SimSensor_MinSensedValue_ (x.SimSensor_MinSensedValue_, f, this),
        SimSensor_MaxSensedValue_ (x.SimSensor_MaxSensedValue_, f, this)
      {
      }

      SimSensor_TemperatureSensor_DryBulb::
      SimSensor_TemperatureSensor_DryBulb (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimSensor_TemperatureSensor (e, f | ::xml_schema::flags::base, c),
        SimSensor_Name_ (this),
        SimSensor_Controller_ (this),
        SimSensor_Accuracy_ (this),
        SimSensor_MinSensedValue_ (this),
        SimSensor_MaxSensedValue_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSensor_TemperatureSensor_DryBulb::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimSensor_TemperatureSensor::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSensor_Name
          //
          if (n.name () == "SimSensor_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimSensor_Name_type > r (
              SimSensor_Name_traits::create (i, f, this));

            if (!this->SimSensor_Name_)
            {
              this->SimSensor_Name_.set (r);
              continue;
            }
          }

          // SimSensor_Controller
          //
          if (n.name () == "SimSensor_Controller" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimSensor_Controller_type > r (
              SimSensor_Controller_traits::create (i, f, this));

            if (!this->SimSensor_Controller_)
            {
              this->SimSensor_Controller_.set (r);
              continue;
            }
          }

          // SimSensor_Accuracy
          //
          if (n.name () == "SimSensor_Accuracy" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimSensor_Accuracy_)
            {
              this->SimSensor_Accuracy_.set (SimSensor_Accuracy_traits::create (i, f, this));
              continue;
            }
          }

          // SimSensor_MinSensedValue
          //
          if (n.name () == "SimSensor_MinSensedValue" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimSensor_MinSensedValue_)
            {
              this->SimSensor_MinSensedValue_.set (SimSensor_MinSensedValue_traits::create (i, f, this));
              continue;
            }
          }

          // SimSensor_MaxSensedValue
          //
          if (n.name () == "SimSensor_MaxSensedValue" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimSensor_MaxSensedValue_)
            {
              this->SimSensor_MaxSensedValue_.set (SimSensor_MaxSensedValue_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimSensor_TemperatureSensor_DryBulb* SimSensor_TemperatureSensor_DryBulb::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSensor_TemperatureSensor_DryBulb (*this, f, c);
      }

      SimSensor_TemperatureSensor_DryBulb& SimSensor_TemperatureSensor_DryBulb::
      operator= (const SimSensor_TemperatureSensor_DryBulb& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimSensor_TemperatureSensor& > (*this) = x;
          this->SimSensor_Name_ = x.SimSensor_Name_;
          this->SimSensor_Controller_ = x.SimSensor_Controller_;
          this->SimSensor_Accuracy_ = x.SimSensor_Accuracy_;
          this->SimSensor_MinSensedValue_ = x.SimSensor_MinSensedValue_;
          this->SimSensor_MaxSensedValue_ = x.SimSensor_MaxSensedValue_;
        }

        return *this;
      }

      SimSensor_TemperatureSensor_DryBulb::
      ~SimSensor_TemperatureSensor_DryBulb ()
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

