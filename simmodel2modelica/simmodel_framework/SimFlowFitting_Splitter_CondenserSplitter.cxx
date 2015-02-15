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

#include "SimFlowFitting_Splitter_CondenserSplitter.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowFitting_Splitter_CondenserSplitter
      // 

      const SimFlowFitting_Splitter_CondenserSplitter::SimFlowFitting_InletBranchName_optional& SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_InletBranchName () const
      {
        return this->SimFlowFitting_InletBranchName_;
      }

      SimFlowFitting_Splitter_CondenserSplitter::SimFlowFitting_InletBranchName_optional& SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_InletBranchName ()
      {
        return this->SimFlowFitting_InletBranchName_;
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_InletBranchName (const SimFlowFitting_InletBranchName_type& x)
      {
        this->SimFlowFitting_InletBranchName_.set (x);
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_InletBranchName (const SimFlowFitting_InletBranchName_optional& x)
      {
        this->SimFlowFitting_InletBranchName_ = x;
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_InletBranchName (::std::auto_ptr< SimFlowFitting_InletBranchName_type > x)
      {
        this->SimFlowFitting_InletBranchName_.set (x);
      }

      const SimFlowFitting_Splitter_CondenserSplitter::SimFlowFitting_OutletBranch_1_500_Name_optional& SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_OutletBranch_1_500_Name () const
      {
        return this->SimFlowFitting_OutletBranch_1_500_Name_;
      }

      SimFlowFitting_Splitter_CondenserSplitter::SimFlowFitting_OutletBranch_1_500_Name_optional& SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_OutletBranch_1_500_Name ()
      {
        return this->SimFlowFitting_OutletBranch_1_500_Name_;
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_OutletBranch_1_500_Name (const SimFlowFitting_OutletBranch_1_500_Name_type& x)
      {
        this->SimFlowFitting_OutletBranch_1_500_Name_.set (x);
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_OutletBranch_1_500_Name (const SimFlowFitting_OutletBranch_1_500_Name_optional& x)
      {
        this->SimFlowFitting_OutletBranch_1_500_Name_ = x;
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_OutletBranch_1_500_Name (::std::auto_ptr< SimFlowFitting_OutletBranch_1_500_Name_type > x)
      {
        this->SimFlowFitting_OutletBranch_1_500_Name_.set (x);
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
    namespace MepModel
    {
      // SimFlowFitting_Splitter_CondenserSplitter
      //

      SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_Splitter_CondenserSplitter (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowFitting_Splitter (RefId),
        SimFlowFitting_InletBranchName_ (this),
        SimFlowFitting_OutletBranch_1_500_Name_ (this)
      {
      }

      SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_Splitter_CondenserSplitter (const SimFlowFitting_Splitter_CondenserSplitter& x,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowFitting_Splitter (x, f, c),
        SimFlowFitting_InletBranchName_ (x.SimFlowFitting_InletBranchName_, f, this),
        SimFlowFitting_OutletBranch_1_500_Name_ (x.SimFlowFitting_OutletBranch_1_500_Name_, f, this)
      {
      }

      SimFlowFitting_Splitter_CondenserSplitter::
      SimFlowFitting_Splitter_CondenserSplitter (const ::xercesc::DOMElement& e,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowFitting_Splitter (e, f | ::xml_schema::flags::base, c),
        SimFlowFitting_InletBranchName_ (this),
        SimFlowFitting_OutletBranch_1_500_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowFitting_Splitter_CondenserSplitter::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowFitting_Splitter::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowFitting_InletBranchName
          //
          if (n.name () == "SimFlowFitting_InletBranchName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_InletBranchName_type > r (
              SimFlowFitting_InletBranchName_traits::create (i, f, this));

            if (!this->SimFlowFitting_InletBranchName_)
            {
              this->SimFlowFitting_InletBranchName_.set (r);
              continue;
            }
          }

          // SimFlowFitting_OutletBranch_1_500_Name
          //
          if (n.name () == "SimFlowFitting_OutletBranch_1_500_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_OutletBranch_1_500_Name_type > r (
              SimFlowFitting_OutletBranch_1_500_Name_traits::create (i, f, this));

            if (!this->SimFlowFitting_OutletBranch_1_500_Name_)
            {
              this->SimFlowFitting_OutletBranch_1_500_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowFitting_Splitter_CondenserSplitter* SimFlowFitting_Splitter_CondenserSplitter::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowFitting_Splitter_CondenserSplitter (*this, f, c);
      }

      SimFlowFitting_Splitter_CondenserSplitter& SimFlowFitting_Splitter_CondenserSplitter::
      operator= (const SimFlowFitting_Splitter_CondenserSplitter& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowFitting_Splitter& > (*this) = x;
          this->SimFlowFitting_InletBranchName_ = x.SimFlowFitting_InletBranchName_;
          this->SimFlowFitting_OutletBranch_1_500_Name_ = x.SimFlowFitting_OutletBranch_1_500_Name_;
        }

        return *this;
      }

      SimFlowFitting_Splitter_CondenserSplitter::
      ~SimFlowFitting_Splitter_CondenserSplitter ()
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

