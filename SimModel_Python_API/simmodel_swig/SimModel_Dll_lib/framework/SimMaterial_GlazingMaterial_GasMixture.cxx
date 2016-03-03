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

#include "SimMaterial_GlazingMaterial_GasMixture.hxx"

#include "simmaterial_gastype_1_4.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_GlazingMaterial_GasMixture
      // 

      const SimMaterial_GlazingMaterial_GasMixture::SimMaterial_Thick_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_Thick () const
      {
        return this->SimMaterial_Thick_;
      }

      SimMaterial_GlazingMaterial_GasMixture::SimMaterial_Thick_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_Thick ()
      {
        return this->SimMaterial_Thick_;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_Thick (const SimMaterial_Thick_type& x)
      {
        this->SimMaterial_Thick_.set (x);
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_Thick (const SimMaterial_Thick_optional& x)
      {
        this->SimMaterial_Thick_ = x;
      }

      const SimMaterial_GlazingMaterial_GasMixture::SimMaterial_NumGasesMixture_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_NumGasesMixture () const
      {
        return this->SimMaterial_NumGasesMixture_;
      }

      SimMaterial_GlazingMaterial_GasMixture::SimMaterial_NumGasesMixture_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_NumGasesMixture ()
      {
        return this->SimMaterial_NumGasesMixture_;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_NumGasesMixture (const SimMaterial_NumGasesMixture_type& x)
      {
        this->SimMaterial_NumGasesMixture_.set (x);
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_NumGasesMixture (const SimMaterial_NumGasesMixture_optional& x)
      {
        this->SimMaterial_NumGasesMixture_ = x;
      }

      const SimMaterial_GlazingMaterial_GasMixture::SimMaterial_GasType_1_4_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasType_1_4 () const
      {
        return this->SimMaterial_GasType_1_4_;
      }

      SimMaterial_GlazingMaterial_GasMixture::SimMaterial_GasType_1_4_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasType_1_4 ()
      {
        return this->SimMaterial_GasType_1_4_;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasType_1_4 (const SimMaterial_GasType_1_4_type& x)
      {
        this->SimMaterial_GasType_1_4_.set (x);
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasType_1_4 (const SimMaterial_GasType_1_4_optional& x)
      {
        this->SimMaterial_GasType_1_4_ = x;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasType_1_4 (::std::auto_ptr< SimMaterial_GasType_1_4_type > x)
      {
        this->SimMaterial_GasType_1_4_.set (x);
      }

      const SimMaterial_GlazingMaterial_GasMixture::SimMaterial_GasFract_1_4_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasFract_1_4 () const
      {
        return this->SimMaterial_GasFract_1_4_;
      }

      SimMaterial_GlazingMaterial_GasMixture::SimMaterial_GasFract_1_4_optional& SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasFract_1_4 ()
      {
        return this->SimMaterial_GasFract_1_4_;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasFract_1_4 (const SimMaterial_GasFract_1_4_type& x)
      {
        this->SimMaterial_GasFract_1_4_.set (x);
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasFract_1_4 (const SimMaterial_GasFract_1_4_optional& x)
      {
        this->SimMaterial_GasFract_1_4_ = x;
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GasFract_1_4 (::std::auto_ptr< SimMaterial_GasFract_1_4_type > x)
      {
        this->SimMaterial_GasFract_1_4_.set (x);
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
      // SimMaterial_GlazingMaterial_GasMixture
      //

      SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GlazingMaterial_GasMixture ()
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (),
        SimMaterial_Thick_ (this),
        SimMaterial_NumGasesMixture_ (this),
        SimMaterial_GasType_1_4_ (this),
        SimMaterial_GasFract_1_4_ (this)
      {
      }

      SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GlazingMaterial_GasMixture (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (RefId),
        SimMaterial_Thick_ (this),
        SimMaterial_NumGasesMixture_ (this),
        SimMaterial_GasType_1_4_ (this),
        SimMaterial_GasFract_1_4_ (this)
      {
      }

      SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GlazingMaterial_GasMixture (const SimMaterial_GlazingMaterial_GasMixture& x,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (x, f, c),
        SimMaterial_Thick_ (x.SimMaterial_Thick_, f, this),
        SimMaterial_NumGasesMixture_ (x.SimMaterial_NumGasesMixture_, f, this),
        SimMaterial_GasType_1_4_ (x.SimMaterial_GasType_1_4_, f, this),
        SimMaterial_GasFract_1_4_ (x.SimMaterial_GasFract_1_4_, f, this)
      {
      }

      SimMaterial_GlazingMaterial_GasMixture::
      SimMaterial_GlazingMaterial_GasMixture (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_Thick_ (this),
        SimMaterial_NumGasesMixture_ (this),
        SimMaterial_GasType_1_4_ (this),
        SimMaterial_GasFract_1_4_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_GlazingMaterial_GasMixture::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_Thick
          //
          if (n.name () == "SimMaterial_Thick" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimMaterial_Thick_)
            {
              this->SimMaterial_Thick_.set (SimMaterial_Thick_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_NumGasesMixture
          //
          if (n.name () == "SimMaterial_NumGasesMixture" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimMaterial_NumGasesMixture_)
            {
              this->SimMaterial_NumGasesMixture_.set (SimMaterial_NumGasesMixture_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_GasType_1_4
          //
          if (n.name () == "SimMaterial_GasType_1_4" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_GasType_1_4_type > r (
              SimMaterial_GasType_1_4_traits::create (i, f, this));

            if (!this->SimMaterial_GasType_1_4_)
            {
              this->SimMaterial_GasType_1_4_.set (r);
              continue;
            }
          }

          // SimMaterial_GasFract_1_4
          //
          if (n.name () == "SimMaterial_GasFract_1_4" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_GasFract_1_4_type > r (
              SimMaterial_GasFract_1_4_traits::create (i, f, this));

            if (!this->SimMaterial_GasFract_1_4_)
            {
              this->SimMaterial_GasFract_1_4_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_GlazingMaterial_GasMixture* SimMaterial_GlazingMaterial_GasMixture::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_GlazingMaterial_GasMixture (*this, f, c);
      }

      SimMaterial_GlazingMaterial_GasMixture& SimMaterial_GlazingMaterial_GasMixture::
      operator= (const SimMaterial_GlazingMaterial_GasMixture& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial& > (*this) = x;
          this->SimMaterial_Thick_ = x.SimMaterial_Thick_;
          this->SimMaterial_NumGasesMixture_ = x.SimMaterial_NumGasesMixture_;
          this->SimMaterial_GasType_1_4_ = x.SimMaterial_GasType_1_4_;
          this->SimMaterial_GasFract_1_4_ = x.SimMaterial_GasFract_1_4_;
        }

        return *this;
      }

      SimMaterial_GlazingMaterial_GasMixture::
      ~SimMaterial_GlazingMaterial_GasMixture ()
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
