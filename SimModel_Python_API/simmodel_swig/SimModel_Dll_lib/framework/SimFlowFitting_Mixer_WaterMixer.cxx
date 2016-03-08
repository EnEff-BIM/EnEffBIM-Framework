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

#include "SimFlowFitting_Mixer_WaterMixer.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowFitting_Mixer_WaterMixer
      // 

      const SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_Name_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Name () const
      {
        return this->SimFlowFitting_Name_;
      }

      SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_Name_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Name ()
      {
        return this->SimFlowFitting_Name_;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Name (const SimFlowFitting_Name_type& x)
      {
        this->SimFlowFitting_Name_.set (x);
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Name (const SimFlowFitting_Name_optional& x)
      {
        this->SimFlowFitting_Name_ = x;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Name (::std::auto_ptr< SimFlowFitting_Name_type > x)
      {
        this->SimFlowFitting_Name_.set (x);
      }

      const SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_OutletBranchName_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_OutletBranchName () const
      {
        return this->SimFlowFitting_OutletBranchName_;
      }

      SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_OutletBranchName_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_OutletBranchName ()
      {
        return this->SimFlowFitting_OutletBranchName_;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_OutletBranchName (const SimFlowFitting_OutletBranchName_type& x)
      {
        this->SimFlowFitting_OutletBranchName_.set (x);
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_OutletBranchName (const SimFlowFitting_OutletBranchName_optional& x)
      {
        this->SimFlowFitting_OutletBranchName_ = x;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_OutletBranchName (::std::auto_ptr< SimFlowFitting_OutletBranchName_type > x)
      {
        this->SimFlowFitting_OutletBranchName_.set (x);
      }

      const SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_InletBranch_1_500_Name_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_InletBranch_1_500_Name () const
      {
        return this->SimFlowFitting_InletBranch_1_500_Name_;
      }

      SimFlowFitting_Mixer_WaterMixer::SimFlowFitting_InletBranch_1_500_Name_optional& SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_InletBranch_1_500_Name ()
      {
        return this->SimFlowFitting_InletBranch_1_500_Name_;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_InletBranch_1_500_Name (const SimFlowFitting_InletBranch_1_500_Name_type& x)
      {
        this->SimFlowFitting_InletBranch_1_500_Name_.set (x);
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_InletBranch_1_500_Name (const SimFlowFitting_InletBranch_1_500_Name_optional& x)
      {
        this->SimFlowFitting_InletBranch_1_500_Name_ = x;
      }

      void SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_InletBranch_1_500_Name (::std::auto_ptr< SimFlowFitting_InletBranch_1_500_Name_type > x)
      {
        this->SimFlowFitting_InletBranch_1_500_Name_.set (x);
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
      // SimFlowFitting_Mixer_WaterMixer
      //

      SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Mixer_WaterMixer ()
      : ::schema::simxml::MepModel::SimFlowFitting_Mixer (),
        SimFlowFitting_Name_ (this),
        SimFlowFitting_OutletBranchName_ (this),
        SimFlowFitting_InletBranch_1_500_Name_ (this)
      {
      }

      SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Mixer_WaterMixer (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowFitting_Mixer (RefId),
        SimFlowFitting_Name_ (this),
        SimFlowFitting_OutletBranchName_ (this),
        SimFlowFitting_InletBranch_1_500_Name_ (this)
      {
      }

      SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Mixer_WaterMixer (const SimFlowFitting_Mixer_WaterMixer& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowFitting_Mixer (x, f, c),
        SimFlowFitting_Name_ (x.SimFlowFitting_Name_, f, this),
        SimFlowFitting_OutletBranchName_ (x.SimFlowFitting_OutletBranchName_, f, this),
        SimFlowFitting_InletBranch_1_500_Name_ (x.SimFlowFitting_InletBranch_1_500_Name_, f, this)
      {
      }

      SimFlowFitting_Mixer_WaterMixer::
      SimFlowFitting_Mixer_WaterMixer (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowFitting_Mixer (e, f | ::xml_schema::flags::base, c),
        SimFlowFitting_Name_ (this),
        SimFlowFitting_OutletBranchName_ (this),
        SimFlowFitting_InletBranch_1_500_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowFitting_Mixer_WaterMixer::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowFitting_Mixer::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowFitting_Name
          //
          if (n.name () == "SimFlowFitting_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_Name_type > r (
              SimFlowFitting_Name_traits::create (i, f, this));

            if (!this->SimFlowFitting_Name_)
            {
              this->SimFlowFitting_Name_.set (r);
              continue;
            }
          }

          // SimFlowFitting_OutletBranchName
          //
          if (n.name () == "SimFlowFitting_OutletBranchName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_OutletBranchName_type > r (
              SimFlowFitting_OutletBranchName_traits::create (i, f, this));

            if (!this->SimFlowFitting_OutletBranchName_)
            {
              this->SimFlowFitting_OutletBranchName_.set (r);
              continue;
            }
          }

          // SimFlowFitting_InletBranch_1_500_Name
          //
          if (n.name () == "SimFlowFitting_InletBranch_1_500_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_InletBranch_1_500_Name_type > r (
              SimFlowFitting_InletBranch_1_500_Name_traits::create (i, f, this));

            if (!this->SimFlowFitting_InletBranch_1_500_Name_)
            {
              this->SimFlowFitting_InletBranch_1_500_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowFitting_Mixer_WaterMixer* SimFlowFitting_Mixer_WaterMixer::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowFitting_Mixer_WaterMixer (*this, f, c);
      }

      SimFlowFitting_Mixer_WaterMixer& SimFlowFitting_Mixer_WaterMixer::
      operator= (const SimFlowFitting_Mixer_WaterMixer& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowFitting_Mixer& > (*this) = x;
          this->SimFlowFitting_Name_ = x.SimFlowFitting_Name_;
          this->SimFlowFitting_OutletBranchName_ = x.SimFlowFitting_OutletBranchName_;
          this->SimFlowFitting_InletBranch_1_500_Name_ = x.SimFlowFitting_InletBranch_1_500_Name_;
        }

        return *this;
      }

      SimFlowFitting_Mixer_WaterMixer::
      ~SimFlowFitting_Mixer_WaterMixer ()
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

