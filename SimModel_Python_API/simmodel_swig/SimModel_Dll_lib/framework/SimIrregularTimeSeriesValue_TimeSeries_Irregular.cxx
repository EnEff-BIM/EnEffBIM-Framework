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

#include "SimIrregularTimeSeriesValue_TimeSeries_Irregular.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimIrregularTimeSeriesValue_TimeSeries_Irregular
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

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimIrregularTimeSeriesValue_TimeSeries_Irregular
      //

      SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      SimIrregularTimeSeriesValue_TimeSeries_Irregular ()
      : ::schema::simxml::ResourcesGeneral::SimIrregularTimeSeriesValue_TimeSeries ()
      {
      }

      SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      SimIrregularTimeSeriesValue_TimeSeries_Irregular (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimIrregularTimeSeriesValue_TimeSeries (RefId)
      {
      }

      SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      SimIrregularTimeSeriesValue_TimeSeries_Irregular (const SimIrregularTimeSeriesValue_TimeSeries_Irregular& x,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimIrregularTimeSeriesValue_TimeSeries (x, f, c)
      {
      }

      SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      SimIrregularTimeSeriesValue_TimeSeries_Irregular (const ::xercesc::DOMElement& e,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimIrregularTimeSeriesValue_TimeSeries (e, f, c)
      {
      }

      SimIrregularTimeSeriesValue_TimeSeries_Irregular* SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimIrregularTimeSeriesValue_TimeSeries_Irregular (*this, f, c);
      }

      SimIrregularTimeSeriesValue_TimeSeries_Irregular::
      ~SimIrregularTimeSeriesValue_TimeSeries_Irregular ()
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

