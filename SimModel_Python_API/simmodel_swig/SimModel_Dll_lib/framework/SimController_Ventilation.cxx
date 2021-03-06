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

#include "SimController_Ventilation.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimController_Ventilation
      // 

      const SimController_Ventilation::SimCntrl_Name_optional& SimController_Ventilation::
      SimCntrl_Name () const
      {
        return this->SimCntrl_Name_;
      }

      SimController_Ventilation::SimCntrl_Name_optional& SimController_Ventilation::
      SimCntrl_Name ()
      {
        return this->SimCntrl_Name_;
      }

      void SimController_Ventilation::
      SimCntrl_Name (const SimCntrl_Name_type& x)
      {
        this->SimCntrl_Name_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_Name (const SimCntrl_Name_optional& x)
      {
        this->SimCntrl_Name_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_Name (::std::auto_ptr< SimCntrl_Name_type > x)
      {
        this->SimCntrl_Name_.set (x);
      }

      const SimController_Ventilation::SimCntrl_CntlledZoneName_optional& SimController_Ventilation::
      SimCntrl_CntlledZoneName () const
      {
        return this->SimCntrl_CntlledZoneName_;
      }

      SimController_Ventilation::SimCntrl_CntlledZoneName_optional& SimController_Ventilation::
      SimCntrl_CntlledZoneName ()
      {
        return this->SimCntrl_CntlledZoneName_;
      }

      void SimController_Ventilation::
      SimCntrl_CntlledZoneName (const SimCntrl_CntlledZoneName_type& x)
      {
        this->SimCntrl_CntlledZoneName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_CntlledZoneName (const SimCntrl_CntlledZoneName_optional& x)
      {
        this->SimCntrl_CntlledZoneName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_CntlledZoneName (::std::auto_ptr< SimCntrl_CntlledZoneName_type > x)
      {
        this->SimCntrl_CntlledZoneName_.set (x);
      }

      const SimController_Ventilation::SimCntrl_CO2ControlAvailSchedName_optional& SimController_Ventilation::
      SimCntrl_CO2ControlAvailSchedName () const
      {
        return this->SimCntrl_CO2ControlAvailSchedName_;
      }

      SimController_Ventilation::SimCntrl_CO2ControlAvailSchedName_optional& SimController_Ventilation::
      SimCntrl_CO2ControlAvailSchedName ()
      {
        return this->SimCntrl_CO2ControlAvailSchedName_;
      }

      void SimController_Ventilation::
      SimCntrl_CO2ControlAvailSchedName (const SimCntrl_CO2ControlAvailSchedName_type& x)
      {
        this->SimCntrl_CO2ControlAvailSchedName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_CO2ControlAvailSchedName (const SimCntrl_CO2ControlAvailSchedName_optional& x)
      {
        this->SimCntrl_CO2ControlAvailSchedName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_CO2ControlAvailSchedName (::std::auto_ptr< SimCntrl_CO2ControlAvailSchedName_type > x)
      {
        this->SimCntrl_CO2ControlAvailSchedName_.set (x);
      }

      const SimController_Ventilation::SimCntrl_CO2SetpntSchedName_optional& SimController_Ventilation::
      SimCntrl_CO2SetpntSchedName () const
      {
        return this->SimCntrl_CO2SetpntSchedName_;
      }

      SimController_Ventilation::SimCntrl_CO2SetpntSchedName_optional& SimController_Ventilation::
      SimCntrl_CO2SetpntSchedName ()
      {
        return this->SimCntrl_CO2SetpntSchedName_;
      }

      void SimController_Ventilation::
      SimCntrl_CO2SetpntSchedName (const SimCntrl_CO2SetpntSchedName_type& x)
      {
        this->SimCntrl_CO2SetpntSchedName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_CO2SetpntSchedName (const SimCntrl_CO2SetpntSchedName_optional& x)
      {
        this->SimCntrl_CO2SetpntSchedName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_CO2SetpntSchedName (::std::auto_ptr< SimCntrl_CO2SetpntSchedName_type > x)
      {
        this->SimCntrl_CO2SetpntSchedName_.set (x);
      }

      const SimController_Ventilation::SimCntrl_MinCarbonDioxideConcentrationSchedName_optional& SimController_Ventilation::
      SimCntrl_MinCarbonDioxideConcentrationSchedName () const
      {
        return this->SimCntrl_MinCarbonDioxideConcentrationSchedName_;
      }

      SimController_Ventilation::SimCntrl_MinCarbonDioxideConcentrationSchedName_optional& SimController_Ventilation::
      SimCntrl_MinCarbonDioxideConcentrationSchedName ()
      {
        return this->SimCntrl_MinCarbonDioxideConcentrationSchedName_;
      }

      void SimController_Ventilation::
      SimCntrl_MinCarbonDioxideConcentrationSchedName (const SimCntrl_MinCarbonDioxideConcentrationSchedName_type& x)
      {
        this->SimCntrl_MinCarbonDioxideConcentrationSchedName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_MinCarbonDioxideConcentrationSchedName (const SimCntrl_MinCarbonDioxideConcentrationSchedName_optional& x)
      {
        this->SimCntrl_MinCarbonDioxideConcentrationSchedName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_MinCarbonDioxideConcentrationSchedName (::std::auto_ptr< SimCntrl_MinCarbonDioxideConcentrationSchedName_type > x)
      {
        this->SimCntrl_MinCarbonDioxideConcentrationSchedName_.set (x);
      }

      const SimController_Ventilation::SimCntrl_GenContamControlAvailSchedName_optional& SimController_Ventilation::
      SimCntrl_GenContamControlAvailSchedName () const
      {
        return this->SimCntrl_GenContamControlAvailSchedName_;
      }

      SimController_Ventilation::SimCntrl_GenContamControlAvailSchedName_optional& SimController_Ventilation::
      SimCntrl_GenContamControlAvailSchedName ()
      {
        return this->SimCntrl_GenContamControlAvailSchedName_;
      }

      void SimController_Ventilation::
      SimCntrl_GenContamControlAvailSchedName (const SimCntrl_GenContamControlAvailSchedName_type& x)
      {
        this->SimCntrl_GenContamControlAvailSchedName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_GenContamControlAvailSchedName (const SimCntrl_GenContamControlAvailSchedName_optional& x)
      {
        this->SimCntrl_GenContamControlAvailSchedName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_GenContamControlAvailSchedName (::std::auto_ptr< SimCntrl_GenContamControlAvailSchedName_type > x)
      {
        this->SimCntrl_GenContamControlAvailSchedName_.set (x);
      }

      const SimController_Ventilation::SimCntrl_GenContamSetpointSchedName_optional& SimController_Ventilation::
      SimCntrl_GenContamSetpointSchedName () const
      {
        return this->SimCntrl_GenContamSetpointSchedName_;
      }

      SimController_Ventilation::SimCntrl_GenContamSetpointSchedName_optional& SimController_Ventilation::
      SimCntrl_GenContamSetpointSchedName ()
      {
        return this->SimCntrl_GenContamSetpointSchedName_;
      }

      void SimController_Ventilation::
      SimCntrl_GenContamSetpointSchedName (const SimCntrl_GenContamSetpointSchedName_type& x)
      {
        this->SimCntrl_GenContamSetpointSchedName_.set (x);
      }

      void SimController_Ventilation::
      SimCntrl_GenContamSetpointSchedName (const SimCntrl_GenContamSetpointSchedName_optional& x)
      {
        this->SimCntrl_GenContamSetpointSchedName_ = x;
      }

      void SimController_Ventilation::
      SimCntrl_GenContamSetpointSchedName (::std::auto_ptr< SimCntrl_GenContamSetpointSchedName_type > x)
      {
        this->SimCntrl_GenContamSetpointSchedName_.set (x);
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
      // SimController_Ventilation
      //

      SimController_Ventilation::
      SimController_Ventilation ()
      : ::schema::simxml::MepModel::SimController (),
        SimCntrl_Name_ (this),
        SimCntrl_CntlledZoneName_ (this),
        SimCntrl_CO2ControlAvailSchedName_ (this),
        SimCntrl_CO2SetpntSchedName_ (this),
        SimCntrl_MinCarbonDioxideConcentrationSchedName_ (this),
        SimCntrl_GenContamControlAvailSchedName_ (this),
        SimCntrl_GenContamSetpointSchedName_ (this)
      {
      }

      SimController_Ventilation::
      SimController_Ventilation (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimController (RefId),
        SimCntrl_Name_ (this),
        SimCntrl_CntlledZoneName_ (this),
        SimCntrl_CO2ControlAvailSchedName_ (this),
        SimCntrl_CO2SetpntSchedName_ (this),
        SimCntrl_MinCarbonDioxideConcentrationSchedName_ (this),
        SimCntrl_GenContamControlAvailSchedName_ (this),
        SimCntrl_GenContamSetpointSchedName_ (this)
      {
      }

      SimController_Ventilation::
      SimController_Ventilation (const SimController_Ventilation& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (x, f, c),
        SimCntrl_Name_ (x.SimCntrl_Name_, f, this),
        SimCntrl_CntlledZoneName_ (x.SimCntrl_CntlledZoneName_, f, this),
        SimCntrl_CO2ControlAvailSchedName_ (x.SimCntrl_CO2ControlAvailSchedName_, f, this),
        SimCntrl_CO2SetpntSchedName_ (x.SimCntrl_CO2SetpntSchedName_, f, this),
        SimCntrl_MinCarbonDioxideConcentrationSchedName_ (x.SimCntrl_MinCarbonDioxideConcentrationSchedName_, f, this),
        SimCntrl_GenContamControlAvailSchedName_ (x.SimCntrl_GenContamControlAvailSchedName_, f, this),
        SimCntrl_GenContamSetpointSchedName_ (x.SimCntrl_GenContamSetpointSchedName_, f, this)
      {
      }

      SimController_Ventilation::
      SimController_Ventilation (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (e, f | ::xml_schema::flags::base, c),
        SimCntrl_Name_ (this),
        SimCntrl_CntlledZoneName_ (this),
        SimCntrl_CO2ControlAvailSchedName_ (this),
        SimCntrl_CO2SetpntSchedName_ (this),
        SimCntrl_MinCarbonDioxideConcentrationSchedName_ (this),
        SimCntrl_GenContamControlAvailSchedName_ (this),
        SimCntrl_GenContamSetpointSchedName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimController_Ventilation::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimController::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrl_Name
          //
          if (n.name () == "SimCntrl_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_Name_type > r (
              SimCntrl_Name_traits::create (i, f, this));

            if (!this->SimCntrl_Name_)
            {
              this->SimCntrl_Name_.set (r);
              continue;
            }
          }

          // SimCntrl_CntlledZoneName
          //
          if (n.name () == "SimCntrl_CntlledZoneName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_CntlledZoneName_type > r (
              SimCntrl_CntlledZoneName_traits::create (i, f, this));

            if (!this->SimCntrl_CntlledZoneName_)
            {
              this->SimCntrl_CntlledZoneName_.set (r);
              continue;
            }
          }

          // SimCntrl_CO2ControlAvailSchedName
          //
          if (n.name () == "SimCntrl_CO2ControlAvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_CO2ControlAvailSchedName_type > r (
              SimCntrl_CO2ControlAvailSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_CO2ControlAvailSchedName_)
            {
              this->SimCntrl_CO2ControlAvailSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_CO2SetpntSchedName
          //
          if (n.name () == "SimCntrl_CO2SetpntSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_CO2SetpntSchedName_type > r (
              SimCntrl_CO2SetpntSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_CO2SetpntSchedName_)
            {
              this->SimCntrl_CO2SetpntSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_MinCarbonDioxideConcentrationSchedName
          //
          if (n.name () == "SimCntrl_MinCarbonDioxideConcentrationSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_MinCarbonDioxideConcentrationSchedName_type > r (
              SimCntrl_MinCarbonDioxideConcentrationSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_MinCarbonDioxideConcentrationSchedName_)
            {
              this->SimCntrl_MinCarbonDioxideConcentrationSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_GenContamControlAvailSchedName
          //
          if (n.name () == "SimCntrl_GenContamControlAvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_GenContamControlAvailSchedName_type > r (
              SimCntrl_GenContamControlAvailSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_GenContamControlAvailSchedName_)
            {
              this->SimCntrl_GenContamControlAvailSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_GenContamSetpointSchedName
          //
          if (n.name () == "SimCntrl_GenContamSetpointSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_GenContamSetpointSchedName_type > r (
              SimCntrl_GenContamSetpointSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_GenContamSetpointSchedName_)
            {
              this->SimCntrl_GenContamSetpointSchedName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimController_Ventilation* SimController_Ventilation::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimController_Ventilation (*this, f, c);
      }

      SimController_Ventilation& SimController_Ventilation::
      operator= (const SimController_Ventilation& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimController& > (*this) = x;
          this->SimCntrl_Name_ = x.SimCntrl_Name_;
          this->SimCntrl_CntlledZoneName_ = x.SimCntrl_CntlledZoneName_;
          this->SimCntrl_CO2ControlAvailSchedName_ = x.SimCntrl_CO2ControlAvailSchedName_;
          this->SimCntrl_CO2SetpntSchedName_ = x.SimCntrl_CO2SetpntSchedName_;
          this->SimCntrl_MinCarbonDioxideConcentrationSchedName_ = x.SimCntrl_MinCarbonDioxideConcentrationSchedName_;
          this->SimCntrl_GenContamControlAvailSchedName_ = x.SimCntrl_GenContamControlAvailSchedName_;
          this->SimCntrl_GenContamSetpointSchedName_ = x.SimCntrl_GenContamSetpointSchedName_;
        }

        return *this;
      }

      SimController_Ventilation::
      ~SimController_Ventilation ()
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

