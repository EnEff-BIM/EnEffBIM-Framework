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

#include "SimList_EquipmentList_RefrigerationLoadTransfer.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimList_EquipmentList_RefrigerationLoadTransfer
      // 

      const SimList_EquipmentList_RefrigerationLoadTransfer::SimList_CascadeCndnsrNameOrSecndSysName_1_9_optional& SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_CascadeCndnsrNameOrSecndSysName_1_9 () const
      {
        return this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_;
      }

      SimList_EquipmentList_RefrigerationLoadTransfer::SimList_CascadeCndnsrNameOrSecndSysName_1_9_optional& SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_CascadeCndnsrNameOrSecndSysName_1_9 ()
      {
        return this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_;
      }

      void SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_CascadeCndnsrNameOrSecndSysName_1_9 (const SimList_CascadeCndnsrNameOrSecndSysName_1_9_type& x)
      {
        this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_.set (x);
      }

      void SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_CascadeCndnsrNameOrSecndSysName_1_9 (const SimList_CascadeCndnsrNameOrSecndSysName_1_9_optional& x)
      {
        this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_ = x;
      }

      void SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_CascadeCndnsrNameOrSecndSysName_1_9 (::std::auto_ptr< SimList_CascadeCndnsrNameOrSecndSysName_1_9_type > x)
      {
        this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_.set (x);
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
    namespace BuildingModel
    {
      // SimList_EquipmentList_RefrigerationLoadTransfer
      //

      SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_EquipmentList_RefrigerationLoadTransfer ()
      : ::schema::simxml::BuildingModel::SimList_EquipmentList (),
        SimList_CascadeCndnsrNameOrSecndSysName_1_9_ (this)
      {
      }

      SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_EquipmentList_RefrigerationLoadTransfer (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimList_EquipmentList (RefId),
        SimList_CascadeCndnsrNameOrSecndSysName_1_9_ (this)
      {
      }

      SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_EquipmentList_RefrigerationLoadTransfer (const SimList_EquipmentList_RefrigerationLoadTransfer& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimList_EquipmentList (x, f, c),
        SimList_CascadeCndnsrNameOrSecndSysName_1_9_ (x.SimList_CascadeCndnsrNameOrSecndSysName_1_9_, f, this)
      {
      }

      SimList_EquipmentList_RefrigerationLoadTransfer::
      SimList_EquipmentList_RefrigerationLoadTransfer (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimList_EquipmentList (e, f | ::xml_schema::flags::base, c),
        SimList_CascadeCndnsrNameOrSecndSysName_1_9_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimList_EquipmentList_RefrigerationLoadTransfer::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimList_EquipmentList::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimList_CascadeCndnsrNameOrSecndSysName_1_9
          //
          if (n.name () == "SimList_CascadeCndnsrNameOrSecndSysName_1_9" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimList_CascadeCndnsrNameOrSecndSysName_1_9_type > r (
              SimList_CascadeCndnsrNameOrSecndSysName_1_9_traits::create (i, f, this));

            if (!this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_)
            {
              this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimList_EquipmentList_RefrigerationLoadTransfer* SimList_EquipmentList_RefrigerationLoadTransfer::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimList_EquipmentList_RefrigerationLoadTransfer (*this, f, c);
      }

      SimList_EquipmentList_RefrigerationLoadTransfer& SimList_EquipmentList_RefrigerationLoadTransfer::
      operator= (const SimList_EquipmentList_RefrigerationLoadTransfer& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimList_EquipmentList& > (*this) = x;
          this->SimList_CascadeCndnsrNameOrSecndSysName_1_9_ = x.SimList_CascadeCndnsrNameOrSecndSysName_1_9_;
        }

        return *this;
      }

      SimList_EquipmentList_RefrigerationLoadTransfer::
      ~SimList_EquipmentList_RefrigerationLoadTransfer ()
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

