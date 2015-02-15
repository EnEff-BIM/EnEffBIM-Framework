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

#include "SimSystem_HvacHotWater_ControlDemand.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSystem_HvacHotWater_ControlDemand
      // 
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
      // SimSystem_HvacHotWater_ControlDemand
      //

      SimSystem_HvacHotWater_ControlDemand::
      SimSystem_HvacHotWater_ControlDemand (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacHotWater (RefId)
      {
      }

      SimSystem_HvacHotWater_ControlDemand::
      SimSystem_HvacHotWater_ControlDemand (const SimSystem_HvacHotWater_ControlDemand& x,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacHotWater (x, f, c)
      {
      }

      SimSystem_HvacHotWater_ControlDemand::
      SimSystem_HvacHotWater_ControlDemand (const ::xercesc::DOMElement& e,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacHotWater (e, f, c)
      {
      }

      SimSystem_HvacHotWater_ControlDemand* SimSystem_HvacHotWater_ControlDemand::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_HvacHotWater_ControlDemand (*this, f, c);
      }

      SimSystem_HvacHotWater_ControlDemand::
      ~SimSystem_HvacHotWater_ControlDemand ()
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

