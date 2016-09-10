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

#include "SimSoftwareApplication.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSoftwareApplication
      // 

      const SimSoftwareApplication::ApplicationDeveloper_optional& SimSoftwareApplication::
      ApplicationDeveloper () const
      {
        return this->ApplicationDeveloper_;
      }

      SimSoftwareApplication::ApplicationDeveloper_optional& SimSoftwareApplication::
      ApplicationDeveloper ()
      {
        return this->ApplicationDeveloper_;
      }

      void SimSoftwareApplication::
      ApplicationDeveloper (const ApplicationDeveloper_type& x)
      {
        this->ApplicationDeveloper_.set (x);
      }

      void SimSoftwareApplication::
      ApplicationDeveloper (const ApplicationDeveloper_optional& x)
      {
        this->ApplicationDeveloper_ = x;
      }

      void SimSoftwareApplication::
      ApplicationDeveloper (::std::auto_ptr< ApplicationDeveloper_type > x)
      {
        this->ApplicationDeveloper_.set (x);
      }

      const SimSoftwareApplication::Version_optional& SimSoftwareApplication::
      Version () const
      {
        return this->Version_;
      }

      SimSoftwareApplication::Version_optional& SimSoftwareApplication::
      Version ()
      {
        return this->Version_;
      }

      void SimSoftwareApplication::
      Version (const Version_type& x)
      {
        this->Version_.set (x);
      }

      void SimSoftwareApplication::
      Version (const Version_optional& x)
      {
        this->Version_ = x;
      }

      void SimSoftwareApplication::
      Version (::std::auto_ptr< Version_type > x)
      {
        this->Version_.set (x);
      }

      const SimSoftwareApplication::ApplicationFullName_optional& SimSoftwareApplication::
      ApplicationFullName () const
      {
        return this->ApplicationFullName_;
      }

      SimSoftwareApplication::ApplicationFullName_optional& SimSoftwareApplication::
      ApplicationFullName ()
      {
        return this->ApplicationFullName_;
      }

      void SimSoftwareApplication::
      ApplicationFullName (const ApplicationFullName_type& x)
      {
        this->ApplicationFullName_.set (x);
      }

      void SimSoftwareApplication::
      ApplicationFullName (const ApplicationFullName_optional& x)
      {
        this->ApplicationFullName_ = x;
      }

      void SimSoftwareApplication::
      ApplicationFullName (::std::auto_ptr< ApplicationFullName_type > x)
      {
        this->ApplicationFullName_.set (x);
      }

      const SimSoftwareApplication::ApplicationIdentifier_optional& SimSoftwareApplication::
      ApplicationIdentifier () const
      {
        return this->ApplicationIdentifier_;
      }

      SimSoftwareApplication::ApplicationIdentifier_optional& SimSoftwareApplication::
      ApplicationIdentifier ()
      {
        return this->ApplicationIdentifier_;
      }

      void SimSoftwareApplication::
      ApplicationIdentifier (const ApplicationIdentifier_type& x)
      {
        this->ApplicationIdentifier_.set (x);
      }

      void SimSoftwareApplication::
      ApplicationIdentifier (const ApplicationIdentifier_optional& x)
      {
        this->ApplicationIdentifier_ = x;
      }

      void SimSoftwareApplication::
      ApplicationIdentifier (::std::auto_ptr< ApplicationIdentifier_type > x)
      {
        this->ApplicationIdentifier_.set (x);
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
      // SimSoftwareApplication
      //

      SimSoftwareApplication::
      SimSoftwareApplication ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        ApplicationDeveloper_ (this),
        Version_ (this),
        ApplicationFullName_ (this),
        ApplicationIdentifier_ (this)
      {
      }

      SimSoftwareApplication::
      SimSoftwareApplication (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        ApplicationDeveloper_ (this),
        Version_ (this),
        ApplicationFullName_ (this),
        ApplicationIdentifier_ (this)
      {
      }

      SimSoftwareApplication::
      SimSoftwareApplication (const SimSoftwareApplication& x,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        ApplicationDeveloper_ (x.ApplicationDeveloper_, f, this),
        Version_ (x.Version_, f, this),
        ApplicationFullName_ (x.ApplicationFullName_, f, this),
        ApplicationIdentifier_ (x.ApplicationIdentifier_, f, this)
      {
      }

      SimSoftwareApplication::
      SimSoftwareApplication (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        ApplicationDeveloper_ (this),
        Version_ (this),
        ApplicationFullName_ (this),
        ApplicationIdentifier_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSoftwareApplication::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ApplicationDeveloper
          //
          if (n.name () == "ApplicationDeveloper" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ApplicationDeveloper_type > r (
              ApplicationDeveloper_traits::create (i, f, this));

            if (!this->ApplicationDeveloper_)
            {
              this->ApplicationDeveloper_.set (r);
              continue;
            }
          }

          // Version
          //
          if (n.name () == "Version" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Version_type > r (
              Version_traits::create (i, f, this));

            if (!this->Version_)
            {
              this->Version_.set (r);
              continue;
            }
          }

          // ApplicationFullName
          //
          if (n.name () == "ApplicationFullName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ApplicationFullName_type > r (
              ApplicationFullName_traits::create (i, f, this));

            if (!this->ApplicationFullName_)
            {
              this->ApplicationFullName_.set (r);
              continue;
            }
          }

          // ApplicationIdentifier
          //
          if (n.name () == "ApplicationIdentifier" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ApplicationIdentifier_type > r (
              ApplicationIdentifier_traits::create (i, f, this));

            if (!this->ApplicationIdentifier_)
            {
              this->ApplicationIdentifier_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSoftwareApplication* SimSoftwareApplication::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSoftwareApplication (*this, f, c);
      }

      SimSoftwareApplication& SimSoftwareApplication::
      operator= (const SimSoftwareApplication& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->ApplicationDeveloper_ = x.ApplicationDeveloper_;
          this->Version_ = x.Version_;
          this->ApplicationFullName_ = x.ApplicationFullName_;
          this->ApplicationIdentifier_ = x.ApplicationIdentifier_;
        }

        return *this;
      }

      SimSoftwareApplication::
      ~SimSoftwareApplication ()
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

