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

#include "SimAppLibraryDefault.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimAppLibraryDefault
      // 

      const SimAppLibraryDefault::DefaultforLibraryType_optional& SimAppLibraryDefault::
      DefaultforLibraryType () const
      {
        return this->DefaultforLibraryType_;
      }

      SimAppLibraryDefault::DefaultforLibraryType_optional& SimAppLibraryDefault::
      DefaultforLibraryType ()
      {
        return this->DefaultforLibraryType_;
      }

      void SimAppLibraryDefault::
      DefaultforLibraryType (const DefaultforLibraryType_type& x)
      {
        this->DefaultforLibraryType_.set (x);
      }

      void SimAppLibraryDefault::
      DefaultforLibraryType (const DefaultforLibraryType_optional& x)
      {
        this->DefaultforLibraryType_ = x;
      }

      void SimAppLibraryDefault::
      DefaultforLibraryType (::std::auto_ptr< DefaultforLibraryType_type > x)
      {
        this->DefaultforLibraryType_.set (x);
      }

      const SimAppLibraryDefault::DefaultPreferenceIndex_optional& SimAppLibraryDefault::
      DefaultPreferenceIndex () const
      {
        return this->DefaultPreferenceIndex_;
      }

      SimAppLibraryDefault::DefaultPreferenceIndex_optional& SimAppLibraryDefault::
      DefaultPreferenceIndex ()
      {
        return this->DefaultPreferenceIndex_;
      }

      void SimAppLibraryDefault::
      DefaultPreferenceIndex (const DefaultPreferenceIndex_type& x)
      {
        this->DefaultPreferenceIndex_.set (x);
      }

      void SimAppLibraryDefault::
      DefaultPreferenceIndex (const DefaultPreferenceIndex_optional& x)
      {
        this->DefaultPreferenceIndex_ = x;
      }

      const SimAppLibraryDefault::LibraryLocation_optional& SimAppLibraryDefault::
      LibraryLocation () const
      {
        return this->LibraryLocation_;
      }

      SimAppLibraryDefault::LibraryLocation_optional& SimAppLibraryDefault::
      LibraryLocation ()
      {
        return this->LibraryLocation_;
      }

      void SimAppLibraryDefault::
      LibraryLocation (const LibraryLocation_type& x)
      {
        this->LibraryLocation_.set (x);
      }

      void SimAppLibraryDefault::
      LibraryLocation (const LibraryLocation_optional& x)
      {
        this->LibraryLocation_ = x;
      }

      void SimAppLibraryDefault::
      LibraryLocation (::std::auto_ptr< LibraryLocation_type > x)
      {
        this->LibraryLocation_.set (x);
      }

      const SimAppLibraryDefault::LibraryName_optional& SimAppLibraryDefault::
      LibraryName () const
      {
        return this->LibraryName_;
      }

      SimAppLibraryDefault::LibraryName_optional& SimAppLibraryDefault::
      LibraryName ()
      {
        return this->LibraryName_;
      }

      void SimAppLibraryDefault::
      LibraryName (const LibraryName_type& x)
      {
        this->LibraryName_.set (x);
      }

      void SimAppLibraryDefault::
      LibraryName (const LibraryName_optional& x)
      {
        this->LibraryName_ = x;
      }

      void SimAppLibraryDefault::
      LibraryName (::std::auto_ptr< LibraryName_type > x)
      {
        this->LibraryName_.set (x);
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
      // SimAppLibraryDefault
      //

      SimAppLibraryDefault::
      SimAppLibraryDefault ()
      : ::schema::simxml::SimModelCore::SimAppDefault (),
        DefaultforLibraryType_ (this),
        DefaultPreferenceIndex_ (this),
        LibraryLocation_ (this),
        LibraryName_ (this)
      {
      }

      SimAppLibraryDefault::
      SimAppLibraryDefault (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimAppDefault (RefId),
        DefaultforLibraryType_ (this),
        DefaultPreferenceIndex_ (this),
        LibraryLocation_ (this),
        LibraryName_ (this)
      {
      }

      SimAppLibraryDefault::
      SimAppLibraryDefault (const SimAppLibraryDefault& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimAppDefault (x, f, c),
        DefaultforLibraryType_ (x.DefaultforLibraryType_, f, this),
        DefaultPreferenceIndex_ (x.DefaultPreferenceIndex_, f, this),
        LibraryLocation_ (x.LibraryLocation_, f, this),
        LibraryName_ (x.LibraryName_, f, this)
      {
      }

      SimAppLibraryDefault::
      SimAppLibraryDefault (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimAppDefault (e, f | ::xml_schema::flags::base, c),
        DefaultforLibraryType_ (this),
        DefaultPreferenceIndex_ (this),
        LibraryLocation_ (this),
        LibraryName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimAppLibraryDefault::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimAppDefault::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // DefaultforLibraryType
          //
          if (n.name () == "DefaultforLibraryType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< DefaultforLibraryType_type > r (
              DefaultforLibraryType_traits::create (i, f, this));

            if (!this->DefaultforLibraryType_)
            {
              this->DefaultforLibraryType_.set (r);
              continue;
            }
          }

          // DefaultPreferenceIndex
          //
          if (n.name () == "DefaultPreferenceIndex" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->DefaultPreferenceIndex_)
            {
              this->DefaultPreferenceIndex_.set (DefaultPreferenceIndex_traits::create (i, f, this));
              continue;
            }
          }

          // LibraryLocation
          //
          if (n.name () == "LibraryLocation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< LibraryLocation_type > r (
              LibraryLocation_traits::create (i, f, this));

            if (!this->LibraryLocation_)
            {
              this->LibraryLocation_.set (r);
              continue;
            }
          }

          // LibraryName
          //
          if (n.name () == "LibraryName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< LibraryName_type > r (
              LibraryName_traits::create (i, f, this));

            if (!this->LibraryName_)
            {
              this->LibraryName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimAppLibraryDefault* SimAppLibraryDefault::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimAppLibraryDefault (*this, f, c);
      }

      SimAppLibraryDefault& SimAppLibraryDefault::
      operator= (const SimAppLibraryDefault& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimAppDefault& > (*this) = x;
          this->DefaultforLibraryType_ = x.DefaultforLibraryType_;
          this->DefaultPreferenceIndex_ = x.DefaultPreferenceIndex_;
          this->LibraryLocation_ = x.LibraryLocation_;
          this->LibraryName_ = x.LibraryName_;
        }

        return *this;
      }

      SimAppLibraryDefault::
      ~SimAppLibraryDefault ()
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
