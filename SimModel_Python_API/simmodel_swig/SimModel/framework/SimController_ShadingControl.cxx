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

#include "SimController_ShadingControl.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimController_ShadingControl
      // 

      const SimController_ShadingControl::SimCntrl_Name_optional& SimController_ShadingControl::
      SimCntrl_Name () const
      {
        return this->SimCntrl_Name_;
      }

      SimController_ShadingControl::SimCntrl_Name_optional& SimController_ShadingControl::
      SimCntrl_Name ()
      {
        return this->SimCntrl_Name_;
      }

      void SimController_ShadingControl::
      SimCntrl_Name (const SimCntrl_Name_type& x)
      {
        this->SimCntrl_Name_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_Name (const SimCntrl_Name_optional& x)
      {
        this->SimCntrl_Name_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_Name (::std::auto_ptr< SimCntrl_Name_type > x)
      {
        this->SimCntrl_Name_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_ShadingType_optional& SimController_ShadingControl::
      SimCntrl_ShadingType () const
      {
        return this->SimCntrl_ShadingType_;
      }

      SimController_ShadingControl::SimCntrl_ShadingType_optional& SimController_ShadingControl::
      SimCntrl_ShadingType ()
      {
        return this->SimCntrl_ShadingType_;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingType (const SimCntrl_ShadingType_type& x)
      {
        this->SimCntrl_ShadingType_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingType (const SimCntrl_ShadingType_optional& x)
      {
        this->SimCntrl_ShadingType_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingType (::std::auto_ptr< SimCntrl_ShadingType_type > x)
      {
        this->SimCntrl_ShadingType_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_ConstwithShadingName_optional& SimController_ShadingControl::
      SimCntrl_ConstwithShadingName () const
      {
        return this->SimCntrl_ConstwithShadingName_;
      }

      SimController_ShadingControl::SimCntrl_ConstwithShadingName_optional& SimController_ShadingControl::
      SimCntrl_ConstwithShadingName ()
      {
        return this->SimCntrl_ConstwithShadingName_;
      }

      void SimController_ShadingControl::
      SimCntrl_ConstwithShadingName (const SimCntrl_ConstwithShadingName_type& x)
      {
        this->SimCntrl_ConstwithShadingName_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_ConstwithShadingName (const SimCntrl_ConstwithShadingName_optional& x)
      {
        this->SimCntrl_ConstwithShadingName_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_ConstwithShadingName (::std::auto_ptr< SimCntrl_ConstwithShadingName_type > x)
      {
        this->SimCntrl_ConstwithShadingName_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_ShadingCntlType_optional& SimController_ShadingControl::
      SimCntrl_ShadingCntlType () const
      {
        return this->SimCntrl_ShadingCntlType_;
      }

      SimController_ShadingControl::SimCntrl_ShadingCntlType_optional& SimController_ShadingControl::
      SimCntrl_ShadingCntlType ()
      {
        return this->SimCntrl_ShadingCntlType_;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlType (const SimCntrl_ShadingCntlType_type& x)
      {
        this->SimCntrl_ShadingCntlType_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlType (const SimCntrl_ShadingCntlType_optional& x)
      {
        this->SimCntrl_ShadingCntlType_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlType (::std::auto_ptr< SimCntrl_ShadingCntlType_type > x)
      {
        this->SimCntrl_ShadingCntlType_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_SchedName_optional& SimController_ShadingControl::
      SimCntrl_SchedName () const
      {
        return this->SimCntrl_SchedName_;
      }

      SimController_ShadingControl::SimCntrl_SchedName_optional& SimController_ShadingControl::
      SimCntrl_SchedName ()
      {
        return this->SimCntrl_SchedName_;
      }

      void SimController_ShadingControl::
      SimCntrl_SchedName (const SimCntrl_SchedName_type& x)
      {
        this->SimCntrl_SchedName_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_SchedName (const SimCntrl_SchedName_optional& x)
      {
        this->SimCntrl_SchedName_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_SchedName (::std::auto_ptr< SimCntrl_SchedName_type > x)
      {
        this->SimCntrl_SchedName_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_Setpoint_optional& SimController_ShadingControl::
      SimCntrl_Setpoint () const
      {
        return this->SimCntrl_Setpoint_;
      }

      SimController_ShadingControl::SimCntrl_Setpoint_optional& SimController_ShadingControl::
      SimCntrl_Setpoint ()
      {
        return this->SimCntrl_Setpoint_;
      }

      void SimController_ShadingControl::
      SimCntrl_Setpoint (const SimCntrl_Setpoint_type& x)
      {
        this->SimCntrl_Setpoint_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_Setpoint (const SimCntrl_Setpoint_optional& x)
      {
        this->SimCntrl_Setpoint_ = x;
      }

      const SimController_ShadingControl::SimCntrl_ShadingCntlSchedd_optional& SimController_ShadingControl::
      SimCntrl_ShadingCntlSchedd () const
      {
        return this->SimCntrl_ShadingCntlSchedd_;
      }

      SimController_ShadingControl::SimCntrl_ShadingCntlSchedd_optional& SimController_ShadingControl::
      SimCntrl_ShadingCntlSchedd ()
      {
        return this->SimCntrl_ShadingCntlSchedd_;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlSchedd (const SimCntrl_ShadingCntlSchedd_type& x)
      {
        this->SimCntrl_ShadingCntlSchedd_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlSchedd (const SimCntrl_ShadingCntlSchedd_optional& x)
      {
        this->SimCntrl_ShadingCntlSchedd_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingCntlSchedd (::std::auto_ptr< SimCntrl_ShadingCntlSchedd_type > x)
      {
        this->SimCntrl_ShadingCntlSchedd_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_GlareCntlActive_optional& SimController_ShadingControl::
      SimCntrl_GlareCntlActive () const
      {
        return this->SimCntrl_GlareCntlActive_;
      }

      SimController_ShadingControl::SimCntrl_GlareCntlActive_optional& SimController_ShadingControl::
      SimCntrl_GlareCntlActive ()
      {
        return this->SimCntrl_GlareCntlActive_;
      }

      void SimController_ShadingControl::
      SimCntrl_GlareCntlActive (const SimCntrl_GlareCntlActive_type& x)
      {
        this->SimCntrl_GlareCntlActive_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_GlareCntlActive (const SimCntrl_GlareCntlActive_optional& x)
      {
        this->SimCntrl_GlareCntlActive_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_GlareCntlActive (::std::auto_ptr< SimCntrl_GlareCntlActive_type > x)
      {
        this->SimCntrl_GlareCntlActive_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_ShadingDeviceMatlName_optional& SimController_ShadingControl::
      SimCntrl_ShadingDeviceMatlName () const
      {
        return this->SimCntrl_ShadingDeviceMatlName_;
      }

      SimController_ShadingControl::SimCntrl_ShadingDeviceMatlName_optional& SimController_ShadingControl::
      SimCntrl_ShadingDeviceMatlName ()
      {
        return this->SimCntrl_ShadingDeviceMatlName_;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingDeviceMatlName (const SimCntrl_ShadingDeviceMatlName_type& x)
      {
        this->SimCntrl_ShadingDeviceMatlName_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingDeviceMatlName (const SimCntrl_ShadingDeviceMatlName_optional& x)
      {
        this->SimCntrl_ShadingDeviceMatlName_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_ShadingDeviceMatlName (::std::auto_ptr< SimCntrl_ShadingDeviceMatlName_type > x)
      {
        this->SimCntrl_ShadingDeviceMatlName_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_TypeSlatAngleCntlForBlinds_optional& SimController_ShadingControl::
      SimCntrl_TypeSlatAngleCntlForBlinds () const
      {
        return this->SimCntrl_TypeSlatAngleCntlForBlinds_;
      }

      SimController_ShadingControl::SimCntrl_TypeSlatAngleCntlForBlinds_optional& SimController_ShadingControl::
      SimCntrl_TypeSlatAngleCntlForBlinds ()
      {
        return this->SimCntrl_TypeSlatAngleCntlForBlinds_;
      }

      void SimController_ShadingControl::
      SimCntrl_TypeSlatAngleCntlForBlinds (const SimCntrl_TypeSlatAngleCntlForBlinds_type& x)
      {
        this->SimCntrl_TypeSlatAngleCntlForBlinds_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_TypeSlatAngleCntlForBlinds (const SimCntrl_TypeSlatAngleCntlForBlinds_optional& x)
      {
        this->SimCntrl_TypeSlatAngleCntlForBlinds_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_TypeSlatAngleCntlForBlinds (::std::auto_ptr< SimCntrl_TypeSlatAngleCntlForBlinds_type > x)
      {
        this->SimCntrl_TypeSlatAngleCntlForBlinds_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_SlatAngleSchedName_optional& SimController_ShadingControl::
      SimCntrl_SlatAngleSchedName () const
      {
        return this->SimCntrl_SlatAngleSchedName_;
      }

      SimController_ShadingControl::SimCntrl_SlatAngleSchedName_optional& SimController_ShadingControl::
      SimCntrl_SlatAngleSchedName ()
      {
        return this->SimCntrl_SlatAngleSchedName_;
      }

      void SimController_ShadingControl::
      SimCntrl_SlatAngleSchedName (const SimCntrl_SlatAngleSchedName_type& x)
      {
        this->SimCntrl_SlatAngleSchedName_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_SlatAngleSchedName (const SimCntrl_SlatAngleSchedName_optional& x)
      {
        this->SimCntrl_SlatAngleSchedName_ = x;
      }

      void SimController_ShadingControl::
      SimCntrl_SlatAngleSchedName (::std::auto_ptr< SimCntrl_SlatAngleSchedName_type > x)
      {
        this->SimCntrl_SlatAngleSchedName_.set (x);
      }

      const SimController_ShadingControl::SimCntrl_Setpoint2_optional& SimController_ShadingControl::
      SimCntrl_Setpoint2 () const
      {
        return this->SimCntrl_Setpoint2_;
      }

      SimController_ShadingControl::SimCntrl_Setpoint2_optional& SimController_ShadingControl::
      SimCntrl_Setpoint2 ()
      {
        return this->SimCntrl_Setpoint2_;
      }

      void SimController_ShadingControl::
      SimCntrl_Setpoint2 (const SimCntrl_Setpoint2_type& x)
      {
        this->SimCntrl_Setpoint2_.set (x);
      }

      void SimController_ShadingControl::
      SimCntrl_Setpoint2 (const SimCntrl_Setpoint2_optional& x)
      {
        this->SimCntrl_Setpoint2_ = x;
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
      // SimController_ShadingControl
      //

      SimController_ShadingControl::
      SimController_ShadingControl ()
      : ::schema::simxml::MepModel::SimController (),
        SimCntrl_Name_ (this),
        SimCntrl_ShadingType_ (this),
        SimCntrl_ConstwithShadingName_ (this),
        SimCntrl_ShadingCntlType_ (this),
        SimCntrl_SchedName_ (this),
        SimCntrl_Setpoint_ (this),
        SimCntrl_ShadingCntlSchedd_ (this),
        SimCntrl_GlareCntlActive_ (this),
        SimCntrl_ShadingDeviceMatlName_ (this),
        SimCntrl_TypeSlatAngleCntlForBlinds_ (this),
        SimCntrl_SlatAngleSchedName_ (this),
        SimCntrl_Setpoint2_ (this)
      {
      }

      SimController_ShadingControl::
      SimController_ShadingControl (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimController (RefId),
        SimCntrl_Name_ (this),
        SimCntrl_ShadingType_ (this),
        SimCntrl_ConstwithShadingName_ (this),
        SimCntrl_ShadingCntlType_ (this),
        SimCntrl_SchedName_ (this),
        SimCntrl_Setpoint_ (this),
        SimCntrl_ShadingCntlSchedd_ (this),
        SimCntrl_GlareCntlActive_ (this),
        SimCntrl_ShadingDeviceMatlName_ (this),
        SimCntrl_TypeSlatAngleCntlForBlinds_ (this),
        SimCntrl_SlatAngleSchedName_ (this),
        SimCntrl_Setpoint2_ (this)
      {
      }

      SimController_ShadingControl::
      SimController_ShadingControl (const SimController_ShadingControl& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (x, f, c),
        SimCntrl_Name_ (x.SimCntrl_Name_, f, this),
        SimCntrl_ShadingType_ (x.SimCntrl_ShadingType_, f, this),
        SimCntrl_ConstwithShadingName_ (x.SimCntrl_ConstwithShadingName_, f, this),
        SimCntrl_ShadingCntlType_ (x.SimCntrl_ShadingCntlType_, f, this),
        SimCntrl_SchedName_ (x.SimCntrl_SchedName_, f, this),
        SimCntrl_Setpoint_ (x.SimCntrl_Setpoint_, f, this),
        SimCntrl_ShadingCntlSchedd_ (x.SimCntrl_ShadingCntlSchedd_, f, this),
        SimCntrl_GlareCntlActive_ (x.SimCntrl_GlareCntlActive_, f, this),
        SimCntrl_ShadingDeviceMatlName_ (x.SimCntrl_ShadingDeviceMatlName_, f, this),
        SimCntrl_TypeSlatAngleCntlForBlinds_ (x.SimCntrl_TypeSlatAngleCntlForBlinds_, f, this),
        SimCntrl_SlatAngleSchedName_ (x.SimCntrl_SlatAngleSchedName_, f, this),
        SimCntrl_Setpoint2_ (x.SimCntrl_Setpoint2_, f, this)
      {
      }

      SimController_ShadingControl::
      SimController_ShadingControl (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (e, f | ::xml_schema::flags::base, c),
        SimCntrl_Name_ (this),
        SimCntrl_ShadingType_ (this),
        SimCntrl_ConstwithShadingName_ (this),
        SimCntrl_ShadingCntlType_ (this),
        SimCntrl_SchedName_ (this),
        SimCntrl_Setpoint_ (this),
        SimCntrl_ShadingCntlSchedd_ (this),
        SimCntrl_GlareCntlActive_ (this),
        SimCntrl_ShadingDeviceMatlName_ (this),
        SimCntrl_TypeSlatAngleCntlForBlinds_ (this),
        SimCntrl_SlatAngleSchedName_ (this),
        SimCntrl_Setpoint2_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimController_ShadingControl::
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

          // SimCntrl_ShadingType
          //
          if (n.name () == "SimCntrl_ShadingType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ShadingType_type > r (
              SimCntrl_ShadingType_traits::create (i, f, this));

            if (!this->SimCntrl_ShadingType_)
            {
              this->SimCntrl_ShadingType_.set (r);
              continue;
            }
          }

          // SimCntrl_ConstwithShadingName
          //
          if (n.name () == "SimCntrl_ConstwithShadingName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ConstwithShadingName_type > r (
              SimCntrl_ConstwithShadingName_traits::create (i, f, this));

            if (!this->SimCntrl_ConstwithShadingName_)
            {
              this->SimCntrl_ConstwithShadingName_.set (r);
              continue;
            }
          }

          // SimCntrl_ShadingCntlType
          //
          if (n.name () == "SimCntrl_ShadingCntlType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ShadingCntlType_type > r (
              SimCntrl_ShadingCntlType_traits::create (i, f, this));

            if (!this->SimCntrl_ShadingCntlType_)
            {
              this->SimCntrl_ShadingCntlType_.set (r);
              continue;
            }
          }

          // SimCntrl_SchedName
          //
          if (n.name () == "SimCntrl_SchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_SchedName_type > r (
              SimCntrl_SchedName_traits::create (i, f, this));

            if (!this->SimCntrl_SchedName_)
            {
              this->SimCntrl_SchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_Setpoint
          //
          if (n.name () == "SimCntrl_Setpoint" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimCntrl_Setpoint_)
            {
              this->SimCntrl_Setpoint_.set (SimCntrl_Setpoint_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_ShadingCntlSchedd
          //
          if (n.name () == "SimCntrl_ShadingCntlSchedd" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ShadingCntlSchedd_type > r (
              SimCntrl_ShadingCntlSchedd_traits::create (i, f, this));

            if (!this->SimCntrl_ShadingCntlSchedd_)
            {
              this->SimCntrl_ShadingCntlSchedd_.set (r);
              continue;
            }
          }

          // SimCntrl_GlareCntlActive
          //
          if (n.name () == "SimCntrl_GlareCntlActive" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_GlareCntlActive_type > r (
              SimCntrl_GlareCntlActive_traits::create (i, f, this));

            if (!this->SimCntrl_GlareCntlActive_)
            {
              this->SimCntrl_GlareCntlActive_.set (r);
              continue;
            }
          }

          // SimCntrl_ShadingDeviceMatlName
          //
          if (n.name () == "SimCntrl_ShadingDeviceMatlName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ShadingDeviceMatlName_type > r (
              SimCntrl_ShadingDeviceMatlName_traits::create (i, f, this));

            if (!this->SimCntrl_ShadingDeviceMatlName_)
            {
              this->SimCntrl_ShadingDeviceMatlName_.set (r);
              continue;
            }
          }

          // SimCntrl_TypeSlatAngleCntlForBlinds
          //
          if (n.name () == "SimCntrl_TypeSlatAngleCntlForBlinds" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_TypeSlatAngleCntlForBlinds_type > r (
              SimCntrl_TypeSlatAngleCntlForBlinds_traits::create (i, f, this));

            if (!this->SimCntrl_TypeSlatAngleCntlForBlinds_)
            {
              this->SimCntrl_TypeSlatAngleCntlForBlinds_.set (r);
              continue;
            }
          }

          // SimCntrl_SlatAngleSchedName
          //
          if (n.name () == "SimCntrl_SlatAngleSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_SlatAngleSchedName_type > r (
              SimCntrl_SlatAngleSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_SlatAngleSchedName_)
            {
              this->SimCntrl_SlatAngleSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_Setpoint2
          //
          if (n.name () == "SimCntrl_Setpoint2" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimCntrl_Setpoint2_)
            {
              this->SimCntrl_Setpoint2_.set (SimCntrl_Setpoint2_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimController_ShadingControl* SimController_ShadingControl::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimController_ShadingControl (*this, f, c);
      }

      SimController_ShadingControl& SimController_ShadingControl::
      operator= (const SimController_ShadingControl& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimController& > (*this) = x;
          this->SimCntrl_Name_ = x.SimCntrl_Name_;
          this->SimCntrl_ShadingType_ = x.SimCntrl_ShadingType_;
          this->SimCntrl_ConstwithShadingName_ = x.SimCntrl_ConstwithShadingName_;
          this->SimCntrl_ShadingCntlType_ = x.SimCntrl_ShadingCntlType_;
          this->SimCntrl_SchedName_ = x.SimCntrl_SchedName_;
          this->SimCntrl_Setpoint_ = x.SimCntrl_Setpoint_;
          this->SimCntrl_ShadingCntlSchedd_ = x.SimCntrl_ShadingCntlSchedd_;
          this->SimCntrl_GlareCntlActive_ = x.SimCntrl_GlareCntlActive_;
          this->SimCntrl_ShadingDeviceMatlName_ = x.SimCntrl_ShadingDeviceMatlName_;
          this->SimCntrl_TypeSlatAngleCntlForBlinds_ = x.SimCntrl_TypeSlatAngleCntlForBlinds_;
          this->SimCntrl_SlatAngleSchedName_ = x.SimCntrl_SlatAngleSchedName_;
          this->SimCntrl_Setpoint2_ = x.SimCntrl_Setpoint2_;
        }

        return *this;
      }

      SimController_ShadingControl::
      ~SimController_ShadingControl ()
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
