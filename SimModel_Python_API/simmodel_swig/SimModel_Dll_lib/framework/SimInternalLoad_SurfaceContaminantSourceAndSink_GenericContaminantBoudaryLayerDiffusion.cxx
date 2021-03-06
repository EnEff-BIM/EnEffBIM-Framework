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

#include "SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion
      // 

      const SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_SchedName_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SchedName () const
      {
        return this->SimInternalLoad_SchedName_;
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_SchedName_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SchedName ()
      {
        return this->SimInternalLoad_SchedName_;
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SchedName (const SimInternalLoad_SchedName_type& x)
      {
        this->SimInternalLoad_SchedName_.set (x);
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SchedName (const SimInternalLoad_SchedName_optional& x)
      {
        this->SimInternalLoad_SchedName_ = x;
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SchedName (::std::auto_ptr< SimInternalLoad_SchedName_type > x)
      {
        this->SimInternalLoad_SchedName_.set (x);
      }

      const SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_MassTransferCoefficient_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_MassTransferCoefficient () const
      {
        return this->SimInternalLoad_MassTransferCoefficient_;
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_MassTransferCoefficient_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_MassTransferCoefficient ()
      {
        return this->SimInternalLoad_MassTransferCoefficient_;
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_MassTransferCoefficient (const SimInternalLoad_MassTransferCoefficient_type& x)
      {
        this->SimInternalLoad_MassTransferCoefficient_.set (x);
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_MassTransferCoefficient (const SimInternalLoad_MassTransferCoefficient_optional& x)
      {
        this->SimInternalLoad_MassTransferCoefficient_ = x;
      }

      const SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_HenryAdsorpConstOrPartCoeff_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_HenryAdsorpConstOrPartCoeff () const
      {
        return this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_;
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::SimInternalLoad_HenryAdsorpConstOrPartCoeff_optional& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_HenryAdsorpConstOrPartCoeff ()
      {
        return this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_;
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_HenryAdsorpConstOrPartCoeff (const SimInternalLoad_HenryAdsorpConstOrPartCoeff_type& x)
      {
        this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_.set (x);
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_HenryAdsorpConstOrPartCoeff (const SimInternalLoad_HenryAdsorpConstOrPartCoeff_optional& x)
      {
        this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_ = x;
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
    namespace ResourcesGeneral
    {
      // SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion
      //

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion ()
      : ::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink (),
        SimInternalLoad_SchedName_ (this),
        SimInternalLoad_MassTransferCoefficient_ (this),
        SimInternalLoad_HenryAdsorpConstOrPartCoeff_ (this)
      {
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink (RefId),
        SimInternalLoad_SchedName_ (this),
        SimInternalLoad_MassTransferCoefficient_ (this),
        SimInternalLoad_HenryAdsorpConstOrPartCoeff_ (this)
      {
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion (const SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion& x,
                                                                                               ::xml_schema::flags f,
                                                                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink (x, f, c),
        SimInternalLoad_SchedName_ (x.SimInternalLoad_SchedName_, f, this),
        SimInternalLoad_MassTransferCoefficient_ (x.SimInternalLoad_MassTransferCoefficient_, f, this),
        SimInternalLoad_HenryAdsorpConstOrPartCoeff_ (x.SimInternalLoad_HenryAdsorpConstOrPartCoeff_, f, this)
      {
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion (const ::xercesc::DOMElement& e,
                                                                                               ::xml_schema::flags f,
                                                                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink (e, f | ::xml_schema::flags::base, c),
        SimInternalLoad_SchedName_ (this),
        SimInternalLoad_MassTransferCoefficient_ (this),
        SimInternalLoad_HenryAdsorpConstOrPartCoeff_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimInternalLoad_SchedName
          //
          if (n.name () == "SimInternalLoad_SchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimInternalLoad_SchedName_type > r (
              SimInternalLoad_SchedName_traits::create (i, f, this));

            if (!this->SimInternalLoad_SchedName_)
            {
              this->SimInternalLoad_SchedName_.set (r);
              continue;
            }
          }

          // SimInternalLoad_MassTransferCoefficient
          //
          if (n.name () == "SimInternalLoad_MassTransferCoefficient" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimInternalLoad_MassTransferCoefficient_)
            {
              this->SimInternalLoad_MassTransferCoefficient_.set (SimInternalLoad_MassTransferCoefficient_traits::create (i, f, this));
              continue;
            }
          }

          // SimInternalLoad_HenryAdsorpConstOrPartCoeff
          //
          if (n.name () == "SimInternalLoad_HenryAdsorpConstOrPartCoeff" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_)
            {
              this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_.set (SimInternalLoad_HenryAdsorpConstOrPartCoeff_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion* SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion (*this, f, c);
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion& SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      operator= (const SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimInternalLoad_SurfaceContaminantSourceAndSink& > (*this) = x;
          this->SimInternalLoad_SchedName_ = x.SimInternalLoad_SchedName_;
          this->SimInternalLoad_MassTransferCoefficient_ = x.SimInternalLoad_MassTransferCoefficient_;
          this->SimInternalLoad_HenryAdsorpConstOrPartCoeff_ = x.SimInternalLoad_HenryAdsorpConstOrPartCoeff_;
        }

        return *this;
      }

      SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion::
      ~SimInternalLoad_SurfaceContaminantSourceAndSink_GenericContaminantBoudaryLayerDiffusion ()
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

