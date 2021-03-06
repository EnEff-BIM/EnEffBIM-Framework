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

#include "SimBeamParams.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimBeamParams
      // 

      const SimBeamParams::CrossSectVertDim_optional& SimBeamParams::
      CrossSectVertDim () const
      {
        return this->CrossSectVertDim_;
      }

      SimBeamParams::CrossSectVertDim_optional& SimBeamParams::
      CrossSectVertDim ()
      {
        return this->CrossSectVertDim_;
      }

      void SimBeamParams::
      CrossSectVertDim (const CrossSectVertDim_type& x)
      {
        this->CrossSectVertDim_.set (x);
      }

      void SimBeamParams::
      CrossSectVertDim (const CrossSectVertDim_optional& x)
      {
        this->CrossSectVertDim_ = x;
      }

      const SimBeamParams::CrossSectHorizDim_optional& SimBeamParams::
      CrossSectHorizDim () const
      {
        return this->CrossSectHorizDim_;
      }

      SimBeamParams::CrossSectHorizDim_optional& SimBeamParams::
      CrossSectHorizDim ()
      {
        return this->CrossSectHorizDim_;
      }

      void SimBeamParams::
      CrossSectHorizDim (const CrossSectHorizDim_type& x)
      {
        this->CrossSectHorizDim_.set (x);
      }

      void SimBeamParams::
      CrossSectHorizDim (const CrossSectHorizDim_optional& x)
      {
        this->CrossSectHorizDim_ = x;
      }

      const SimBeamParams::Length_optional& SimBeamParams::
      Length () const
      {
        return this->Length_;
      }

      SimBeamParams::Length_optional& SimBeamParams::
      Length ()
      {
        return this->Length_;
      }

      void SimBeamParams::
      Length (const Length_type& x)
      {
        this->Length_.set (x);
      }

      void SimBeamParams::
      Length (const Length_optional& x)
      {
        this->Length_ = x;
      }

      const SimBeamParams::TopOfBeamElev_optional& SimBeamParams::
      TopOfBeamElev () const
      {
        return this->TopOfBeamElev_;
      }

      SimBeamParams::TopOfBeamElev_optional& SimBeamParams::
      TopOfBeamElev ()
      {
        return this->TopOfBeamElev_;
      }

      void SimBeamParams::
      TopOfBeamElev (const TopOfBeamElev_type& x)
      {
        this->TopOfBeamElev_.set (x);
      }

      void SimBeamParams::
      TopOfBeamElev (const TopOfBeamElev_optional& x)
      {
        this->TopOfBeamElev_ = x;
      }

      const SimBeamParams::DegreeOfNormal_optional& SimBeamParams::
      DegreeOfNormal () const
      {
        return this->DegreeOfNormal_;
      }

      SimBeamParams::DegreeOfNormal_optional& SimBeamParams::
      DegreeOfNormal ()
      {
        return this->DegreeOfNormal_;
      }

      void SimBeamParams::
      DegreeOfNormal (const DegreeOfNormal_type& x)
      {
        this->DegreeOfNormal_.set (x);
      }

      void SimBeamParams::
      DegreeOfNormal (const DegreeOfNormal_optional& x)
      {
        this->DegreeOfNormal_ = x;
      }

      const SimBeamParams::ProfilePath_optional& SimBeamParams::
      ProfilePath () const
      {
        return this->ProfilePath_;
      }

      SimBeamParams::ProfilePath_optional& SimBeamParams::
      ProfilePath ()
      {
        return this->ProfilePath_;
      }

      void SimBeamParams::
      ProfilePath (const ProfilePath_type& x)
      {
        this->ProfilePath_.set (x);
      }

      void SimBeamParams::
      ProfilePath (const ProfilePath_optional& x)
      {
        this->ProfilePath_ = x;
      }

      void SimBeamParams::
      ProfilePath (::std::auto_ptr< ProfilePath_type > x)
      {
        this->ProfilePath_.set (x);
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
      // SimBeamParams
      //

      SimBeamParams::
      SimBeamParams ()
      : ::schema::simxml::SimModelCore::SimBldgModelParams (),
        CrossSectVertDim_ (this),
        CrossSectHorizDim_ (this),
        Length_ (this),
        TopOfBeamElev_ (this),
        DegreeOfNormal_ (this),
        ProfilePath_ (this)
      {
      }

      SimBeamParams::
      SimBeamParams (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (RefId),
        CrossSectVertDim_ (this),
        CrossSectHorizDim_ (this),
        Length_ (this),
        TopOfBeamElev_ (this),
        DegreeOfNormal_ (this),
        ProfilePath_ (this)
      {
      }

      SimBeamParams::
      SimBeamParams (const SimBeamParams& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (x, f, c),
        CrossSectVertDim_ (x.CrossSectVertDim_, f, this),
        CrossSectHorizDim_ (x.CrossSectHorizDim_, f, this),
        Length_ (x.Length_, f, this),
        TopOfBeamElev_ (x.TopOfBeamElev_, f, this),
        DegreeOfNormal_ (x.DegreeOfNormal_, f, this),
        ProfilePath_ (x.ProfilePath_, f, this)
      {
      }

      SimBeamParams::
      SimBeamParams (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (e, f | ::xml_schema::flags::base, c),
        CrossSectVertDim_ (this),
        CrossSectHorizDim_ (this),
        Length_ (this),
        TopOfBeamElev_ (this),
        DegreeOfNormal_ (this),
        ProfilePath_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBeamParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimBldgModelParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // CrossSectVertDim
          //
          if (n.name () == "CrossSectVertDim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->CrossSectVertDim_)
            {
              this->CrossSectVertDim_.set (CrossSectVertDim_traits::create (i, f, this));
              continue;
            }
          }

          // CrossSectHorizDim
          //
          if (n.name () == "CrossSectHorizDim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->CrossSectHorizDim_)
            {
              this->CrossSectHorizDim_.set (CrossSectHorizDim_traits::create (i, f, this));
              continue;
            }
          }

          // Length
          //
          if (n.name () == "Length" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Length_)
            {
              this->Length_.set (Length_traits::create (i, f, this));
              continue;
            }
          }

          // TopOfBeamElev
          //
          if (n.name () == "TopOfBeamElev" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->TopOfBeamElev_)
            {
              this->TopOfBeamElev_.set (TopOfBeamElev_traits::create (i, f, this));
              continue;
            }
          }

          // DegreeOfNormal
          //
          if (n.name () == "DegreeOfNormal" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->DegreeOfNormal_)
            {
              this->DegreeOfNormal_.set (DegreeOfNormal_traits::create (i, f, this));
              continue;
            }
          }

          // ProfilePath
          //
          if (n.name () == "ProfilePath" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ProfilePath_type > r (
              ProfilePath_traits::create (i, f, this));

            if (!this->ProfilePath_)
            {
              this->ProfilePath_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBeamParams* SimBeamParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBeamParams (*this, f, c);
      }

      SimBeamParams& SimBeamParams::
      operator= (const SimBeamParams& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimBldgModelParams& > (*this) = x;
          this->CrossSectVertDim_ = x.CrossSectVertDim_;
          this->CrossSectHorizDim_ = x.CrossSectHorizDim_;
          this->Length_ = x.Length_;
          this->TopOfBeamElev_ = x.TopOfBeamElev_;
          this->DegreeOfNormal_ = x.DegreeOfNormal_;
          this->ProfilePath_ = x.ProfilePath_;
        }

        return *this;
      }

      SimBeamParams::
      ~SimBeamParams ()
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

