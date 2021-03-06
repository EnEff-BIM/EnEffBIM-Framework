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

#include "SimAddress_Telecom.hxx"

#include "telephonenumbers.hxx"

#include "facsimilenumbers.hxx"

#include "electronicmailaddresses.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimAddress_Telecom
      // 

      const SimAddress_Telecom::TelephoneNumbers_optional& SimAddress_Telecom::
      TelephoneNumbers () const
      {
        return this->TelephoneNumbers_;
      }

      SimAddress_Telecom::TelephoneNumbers_optional& SimAddress_Telecom::
      TelephoneNumbers ()
      {
        return this->TelephoneNumbers_;
      }

      void SimAddress_Telecom::
      TelephoneNumbers (const TelephoneNumbers_type& x)
      {
        this->TelephoneNumbers_.set (x);
      }

      void SimAddress_Telecom::
      TelephoneNumbers (const TelephoneNumbers_optional& x)
      {
        this->TelephoneNumbers_ = x;
      }

      void SimAddress_Telecom::
      TelephoneNumbers (::std::auto_ptr< TelephoneNumbers_type > x)
      {
        this->TelephoneNumbers_.set (x);
      }

      const SimAddress_Telecom::FacsimileNumbers_optional& SimAddress_Telecom::
      FacsimileNumbers () const
      {
        return this->FacsimileNumbers_;
      }

      SimAddress_Telecom::FacsimileNumbers_optional& SimAddress_Telecom::
      FacsimileNumbers ()
      {
        return this->FacsimileNumbers_;
      }

      void SimAddress_Telecom::
      FacsimileNumbers (const FacsimileNumbers_type& x)
      {
        this->FacsimileNumbers_.set (x);
      }

      void SimAddress_Telecom::
      FacsimileNumbers (const FacsimileNumbers_optional& x)
      {
        this->FacsimileNumbers_ = x;
      }

      void SimAddress_Telecom::
      FacsimileNumbers (::std::auto_ptr< FacsimileNumbers_type > x)
      {
        this->FacsimileNumbers_.set (x);
      }

      const SimAddress_Telecom::PagerNumber_optional& SimAddress_Telecom::
      PagerNumber () const
      {
        return this->PagerNumber_;
      }

      SimAddress_Telecom::PagerNumber_optional& SimAddress_Telecom::
      PagerNumber ()
      {
        return this->PagerNumber_;
      }

      void SimAddress_Telecom::
      PagerNumber (const PagerNumber_type& x)
      {
        this->PagerNumber_.set (x);
      }

      void SimAddress_Telecom::
      PagerNumber (const PagerNumber_optional& x)
      {
        this->PagerNumber_ = x;
      }

      void SimAddress_Telecom::
      PagerNumber (::std::auto_ptr< PagerNumber_type > x)
      {
        this->PagerNumber_.set (x);
      }

      const SimAddress_Telecom::ElectronicMailAddresses_optional& SimAddress_Telecom::
      ElectronicMailAddresses () const
      {
        return this->ElectronicMailAddresses_;
      }

      SimAddress_Telecom::ElectronicMailAddresses_optional& SimAddress_Telecom::
      ElectronicMailAddresses ()
      {
        return this->ElectronicMailAddresses_;
      }

      void SimAddress_Telecom::
      ElectronicMailAddresses (const ElectronicMailAddresses_type& x)
      {
        this->ElectronicMailAddresses_.set (x);
      }

      void SimAddress_Telecom::
      ElectronicMailAddresses (const ElectronicMailAddresses_optional& x)
      {
        this->ElectronicMailAddresses_ = x;
      }

      void SimAddress_Telecom::
      ElectronicMailAddresses (::std::auto_ptr< ElectronicMailAddresses_type > x)
      {
        this->ElectronicMailAddresses_.set (x);
      }

      const SimAddress_Telecom::WWWHomePageURL_optional& SimAddress_Telecom::
      WWWHomePageURL () const
      {
        return this->WWWHomePageURL_;
      }

      SimAddress_Telecom::WWWHomePageURL_optional& SimAddress_Telecom::
      WWWHomePageURL ()
      {
        return this->WWWHomePageURL_;
      }

      void SimAddress_Telecom::
      WWWHomePageURL (const WWWHomePageURL_type& x)
      {
        this->WWWHomePageURL_.set (x);
      }

      void SimAddress_Telecom::
      WWWHomePageURL (const WWWHomePageURL_optional& x)
      {
        this->WWWHomePageURL_ = x;
      }

      void SimAddress_Telecom::
      WWWHomePageURL (::std::auto_ptr< WWWHomePageURL_type > x)
      {
        this->WWWHomePageURL_.set (x);
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
      // SimAddress_Telecom
      //

      SimAddress_Telecom::
      SimAddress_Telecom ()
      : ::schema::simxml::ResourcesGeneral::SimAddress (),
        TelephoneNumbers_ (this),
        FacsimileNumbers_ (this),
        PagerNumber_ (this),
        ElectronicMailAddresses_ (this),
        WWWHomePageURL_ (this)
      {
      }

      SimAddress_Telecom::
      SimAddress_Telecom (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimAddress (RefId),
        TelephoneNumbers_ (this),
        FacsimileNumbers_ (this),
        PagerNumber_ (this),
        ElectronicMailAddresses_ (this),
        WWWHomePageURL_ (this)
      {
      }

      SimAddress_Telecom::
      SimAddress_Telecom (const SimAddress_Telecom& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimAddress (x, f, c),
        TelephoneNumbers_ (x.TelephoneNumbers_, f, this),
        FacsimileNumbers_ (x.FacsimileNumbers_, f, this),
        PagerNumber_ (x.PagerNumber_, f, this),
        ElectronicMailAddresses_ (x.ElectronicMailAddresses_, f, this),
        WWWHomePageURL_ (x.WWWHomePageURL_, f, this)
      {
      }

      SimAddress_Telecom::
      SimAddress_Telecom (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimAddress (e, f | ::xml_schema::flags::base, c),
        TelephoneNumbers_ (this),
        FacsimileNumbers_ (this),
        PagerNumber_ (this),
        ElectronicMailAddresses_ (this),
        WWWHomePageURL_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimAddress_Telecom::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimAddress::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // TelephoneNumbers
          //
          if (n.name () == "TelephoneNumbers" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< TelephoneNumbers_type > r (
              TelephoneNumbers_traits::create (i, f, this));

            if (!this->TelephoneNumbers_)
            {
              this->TelephoneNumbers_.set (r);
              continue;
            }
          }

          // FacsimileNumbers
          //
          if (n.name () == "FacsimileNumbers" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< FacsimileNumbers_type > r (
              FacsimileNumbers_traits::create (i, f, this));

            if (!this->FacsimileNumbers_)
            {
              this->FacsimileNumbers_.set (r);
              continue;
            }
          }

          // PagerNumber
          //
          if (n.name () == "PagerNumber" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< PagerNumber_type > r (
              PagerNumber_traits::create (i, f, this));

            if (!this->PagerNumber_)
            {
              this->PagerNumber_.set (r);
              continue;
            }
          }

          // ElectronicMailAddresses
          //
          if (n.name () == "ElectronicMailAddresses" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ElectronicMailAddresses_type > r (
              ElectronicMailAddresses_traits::create (i, f, this));

            if (!this->ElectronicMailAddresses_)
            {
              this->ElectronicMailAddresses_.set (r);
              continue;
            }
          }

          // WWWHomePageURL
          //
          if (n.name () == "WWWHomePageURL" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WWWHomePageURL_type > r (
              WWWHomePageURL_traits::create (i, f, this));

            if (!this->WWWHomePageURL_)
            {
              this->WWWHomePageURL_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimAddress_Telecom* SimAddress_Telecom::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimAddress_Telecom (*this, f, c);
      }

      SimAddress_Telecom& SimAddress_Telecom::
      operator= (const SimAddress_Telecom& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimAddress& > (*this) = x;
          this->TelephoneNumbers_ = x.TelephoneNumbers_;
          this->FacsimileNumbers_ = x.FacsimileNumbers_;
          this->PagerNumber_ = x.PagerNumber_;
          this->ElectronicMailAddresses_ = x.ElectronicMailAddresses_;
          this->WWWHomePageURL_ = x.WWWHomePageURL_;
        }

        return *this;
      }

      SimAddress_Telecom::
      ~SimAddress_Telecom ()
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

