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

#include "SimDistributionFlowElement.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimDistributionFlowElement
      // 

      const SimDistributionFlowElement::ControlledBy_optional& SimDistributionFlowElement::
      ControlledBy () const
      {
        return this->ControlledBy_;
      }

      SimDistributionFlowElement::ControlledBy_optional& SimDistributionFlowElement::
      ControlledBy ()
      {
        return this->ControlledBy_;
      }

      void SimDistributionFlowElement::
      ControlledBy (const ControlledBy_type& x)
      {
        this->ControlledBy_.set (x);
      }

      void SimDistributionFlowElement::
      ControlledBy (const ControlledBy_optional& x)
      {
        this->ControlledBy_ = x;
      }

      void SimDistributionFlowElement::
      ControlledBy (::std::auto_ptr< ControlledBy_type > x)
      {
        this->ControlledBy_.set (x);
      }

      const SimDistributionFlowElement::_3dLength_optional& SimDistributionFlowElement::
      _3dLength () const
      {
        return this->_3dLength_;
      }

      SimDistributionFlowElement::_3dLength_optional& SimDistributionFlowElement::
      _3dLength ()
      {
        return this->_3dLength_;
      }

      void SimDistributionFlowElement::
      _3dLength (const _3dLength_type& x)
      {
        this->_3dLength_.set (x);
      }

      void SimDistributionFlowElement::
      _3dLength (const _3dLength_optional& x)
      {
        this->_3dLength_ = x;
      }

      const SimDistributionFlowElement::_3dWidth_optional& SimDistributionFlowElement::
      _3dWidth () const
      {
        return this->_3dWidth_;
      }

      SimDistributionFlowElement::_3dWidth_optional& SimDistributionFlowElement::
      _3dWidth ()
      {
        return this->_3dWidth_;
      }

      void SimDistributionFlowElement::
      _3dWidth (const _3dWidth_type& x)
      {
        this->_3dWidth_.set (x);
      }

      void SimDistributionFlowElement::
      _3dWidth (const _3dWidth_optional& x)
      {
        this->_3dWidth_ = x;
      }

      const SimDistributionFlowElement::_3dHeight_optional& SimDistributionFlowElement::
      _3dHeight () const
      {
        return this->_3dHeight_;
      }

      SimDistributionFlowElement::_3dHeight_optional& SimDistributionFlowElement::
      _3dHeight ()
      {
        return this->_3dHeight_;
      }

      void SimDistributionFlowElement::
      _3dHeight (const _3dHeight_type& x)
      {
        this->_3dHeight_.set (x);
      }

      void SimDistributionFlowElement::
      _3dHeight (const _3dHeight_optional& x)
      {
        this->_3dHeight_ = x;
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
      // SimDistributionFlowElement
      //

      SimDistributionFlowElement::
      SimDistributionFlowElement (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimDistributionElement (RefId),
        ControlledBy_ (this),
        _3dLength_ (this),
        _3dWidth_ (this),
        _3dHeight_ (this)
      {
      }

      SimDistributionFlowElement::
      SimDistributionFlowElement (const SimDistributionFlowElement& x,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimDistributionElement (x, f, c),
        ControlledBy_ (x.ControlledBy_, f, this),
        _3dLength_ (x._3dLength_, f, this),
        _3dWidth_ (x._3dWidth_, f, this),
        _3dHeight_ (x._3dHeight_, f, this)
      {
      }

      SimDistributionFlowElement::
      SimDistributionFlowElement (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimDistributionElement (e, f | ::xml_schema::flags::base, c),
        ControlledBy_ (this),
        _3dLength_ (this),
        _3dWidth_ (this),
        _3dHeight_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimDistributionFlowElement::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimDistributionElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ControlledBy
          //
          if (n.name () == "ControlledBy" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< ControlledBy_type > r (
              ControlledBy_traits::create (i, f, this));

            if (!this->ControlledBy_)
            {
              this->ControlledBy_.set (r);
              continue;
            }
          }

          // _3dLength
          //
          if (n.name () == "_3dLength" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->_3dLength_)
            {
              this->_3dLength_.set (_3dLength_traits::create (i, f, this));
              continue;
            }
          }

          // _3dWidth
          //
          if (n.name () == "_3dWidth" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->_3dWidth_)
            {
              this->_3dWidth_.set (_3dWidth_traits::create (i, f, this));
              continue;
            }
          }

          // _3dHeight
          //
          if (n.name () == "_3dHeight" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->_3dHeight_)
            {
              this->_3dHeight_.set (_3dHeight_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimDistributionFlowElement* SimDistributionFlowElement::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimDistributionFlowElement (*this, f, c);
      }

      SimDistributionFlowElement& SimDistributionFlowElement::
      operator= (const SimDistributionFlowElement& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimDistributionElement& > (*this) = x;
          this->ControlledBy_ = x.ControlledBy_;
          this->_3dLength_ = x._3dLength_;
          this->_3dWidth_ = x._3dWidth_;
          this->_3dHeight_ = x._3dHeight_;
        }

        return *this;
      }

      SimDistributionFlowElement::
      ~SimDistributionFlowElement ()
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

