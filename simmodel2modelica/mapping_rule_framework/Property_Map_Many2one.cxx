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

#include "Property_Map_Many2one.hxx"

#include "refstringlist.hxx"

#include "stringlist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // Property_Map_Many2one
      // 

      const Property_Map_Many2one::Description_optional& Property_Map_Many2one::
      Description () const
      {
        return this->Description_;
      }

      Property_Map_Many2one::Description_optional& Property_Map_Many2one::
      Description ()
      {
        return this->Description_;
      }

      void Property_Map_Many2one::
      Description (const Description_type& x)
      {
        this->Description_.set (x);
      }

      void Property_Map_Many2one::
      Description (const Description_optional& x)
      {
        this->Description_ = x;
      }

      void Property_Map_Many2one::
      Description (::std::auto_ptr< Description_type > x)
      {
        this->Description_.set (x);
      }

      const Property_Map_Many2one::RefValue_sequence& Property_Map_Many2one::
      RefValue () const
      {
        return this->RefValue_;
      }

      Property_Map_Many2one::RefValue_sequence& Property_Map_Many2one::
      RefValue ()
      {
        return this->RefValue_;
      }

      void Property_Map_Many2one::
      RefValue (const RefValue_sequence& s)
      {
        this->RefValue_ = s;
      }

      const Property_Map_Many2one::TargetPropertyNameList_type& Property_Map_Many2one::
      TargetPropertyNameList () const
      {
        return this->TargetPropertyNameList_.get ();
      }

      Property_Map_Many2one::TargetPropertyNameList_type& Property_Map_Many2one::
      TargetPropertyNameList ()
      {
        return this->TargetPropertyNameList_.get ();
      }

      void Property_Map_Many2one::
      TargetPropertyNameList (const TargetPropertyNameList_type& x)
      {
        this->TargetPropertyNameList_.set (x);
      }

      void Property_Map_Many2one::
      TargetPropertyNameList (::std::auto_ptr< TargetPropertyNameList_type > x)
      {
        this->TargetPropertyNameList_.set (x);
      }

      const Property_Map_Many2one::TargetLocation_optional& Property_Map_Many2one::
      TargetLocation () const
      {
        return this->TargetLocation_;
      }

      Property_Map_Many2one::TargetLocation_optional& Property_Map_Many2one::
      TargetLocation ()
      {
        return this->TargetLocation_;
      }

      void Property_Map_Many2one::
      TargetLocation (const TargetLocation_type& x)
      {
        this->TargetLocation_.set (x);
      }

      void Property_Map_Many2one::
      TargetLocation (const TargetLocation_optional& x)
      {
        this->TargetLocation_ = x;
      }

      void Property_Map_Many2one::
      TargetLocation (::std::auto_ptr< TargetLocation_type > x)
      {
        this->TargetLocation_.set (x);
      }

      const Property_Map_Many2one::RecordInstance_optional& Property_Map_Many2one::
      RecordInstance () const
      {
        return this->RecordInstance_;
      }

      Property_Map_Many2one::RecordInstance_optional& Property_Map_Many2one::
      RecordInstance ()
      {
        return this->RecordInstance_;
      }

      void Property_Map_Many2one::
      RecordInstance (const RecordInstance_type& x)
      {
        this->RecordInstance_.set (x);
      }

      void Property_Map_Many2one::
      RecordInstance (const RecordInstance_optional& x)
      {
        this->RecordInstance_ = x;
      }

      void Property_Map_Many2one::
      RecordInstance (::std::auto_ptr< RecordInstance_type > x)
      {
        this->RecordInstance_.set (x);
      }

      const Property_Map_Many2one::RecordInstanceLocation_optional& Property_Map_Many2one::
      RecordInstanceLocation () const
      {
        return this->RecordInstanceLocation_;
      }

      Property_Map_Many2one::RecordInstanceLocation_optional& Property_Map_Many2one::
      RecordInstanceLocation ()
      {
        return this->RecordInstanceLocation_;
      }

      void Property_Map_Many2one::
      RecordInstanceLocation (const RecordInstanceLocation_type& x)
      {
        this->RecordInstanceLocation_.set (x);
      }

      void Property_Map_Many2one::
      RecordInstanceLocation (const RecordInstanceLocation_optional& x)
      {
        this->RecordInstanceLocation_ = x;
      }

      void Property_Map_Many2one::
      RecordInstanceLocation (::std::auto_ptr< RecordInstanceLocation_type > x)
      {
        this->RecordInstanceLocation_.set (x);
      }

      const Property_Map_Many2one::RecordLocation_optional& Property_Map_Many2one::
      RecordLocation () const
      {
        return this->RecordLocation_;
      }

      Property_Map_Many2one::RecordLocation_optional& Property_Map_Many2one::
      RecordLocation ()
      {
        return this->RecordLocation_;
      }

      void Property_Map_Many2one::
      RecordLocation (const RecordLocation_type& x)
      {
        this->RecordLocation_.set (x);
      }

      void Property_Map_Many2one::
      RecordLocation (const RecordLocation_optional& x)
      {
        this->RecordLocation_ = x;
      }

      void Property_Map_Many2one::
      RecordLocation (::std::auto_ptr< RecordLocation_type > x)
      {
        this->RecordLocation_.set (x);
      }

      const Property_Map_Many2one::RefId_type& Property_Map_Many2one::
      RefId () const
      {
        return this->RefId_.get ();
      }

      Property_Map_Many2one::RefId_type& Property_Map_Many2one::
      RefId ()
      {
        return this->RefId_.get ();
      }

      void Property_Map_Many2one::
      RefId (const RefId_type& x)
      {
        this->RefId_.set (x);
      }

      void Property_Map_Many2one::
      RefId (::std::auto_ptr< RefId_type > x)
      {
        this->RefId_.set (x);
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
    namespace DataMap
    {
      // Property_Map_Many2one
      //

      Property_Map_Many2one::
      Property_Map_Many2one (const TargetPropertyNameList_type& TargetPropertyNameList,
                             const RefId_type& RefId)
      : ::xml_schema::type (),
        Description_ (this),
        RefValue_ (this),
        TargetPropertyNameList_ (TargetPropertyNameList, this),
        TargetLocation_ (this),
        RecordInstance_ (this),
        RecordInstanceLocation_ (this),
        RecordLocation_ (this),
        RefId_ (RefId, this)
      {
      }

      Property_Map_Many2one::
      Property_Map_Many2one (const Property_Map_Many2one& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        Description_ (x.Description_, f, this),
        RefValue_ (x.RefValue_, f, this),
        TargetPropertyNameList_ (x.TargetPropertyNameList_, f, this),
        TargetLocation_ (x.TargetLocation_, f, this),
        RecordInstance_ (x.RecordInstance_, f, this),
        RecordInstanceLocation_ (x.RecordInstanceLocation_, f, this),
        RecordLocation_ (x.RecordLocation_, f, this),
        RefId_ (x.RefId_, f, this)
      {
      }

      Property_Map_Many2one::
      Property_Map_Many2one (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        Description_ (this),
        RefValue_ (this),
        TargetPropertyNameList_ (this),
        TargetLocation_ (this),
        RecordInstance_ (this),
        RecordInstanceLocation_ (this),
        RecordLocation_ (this),
        RefId_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void Property_Map_Many2one::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Description
          //
          if (n.name () == "Description" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Description_type > r (
              Description_traits::create (i, f, this));

            if (!this->Description_)
            {
              this->Description_.set (r);
              continue;
            }
          }

          // RefValue
          //
          if (n.name () == "RefValue" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< RefValue_type > r (
              RefValue_traits::create (i, f, this));

            this->RefValue_.push_back (r);
            continue;
          }

          // TargetPropertyNameList
          //
          if (n.name () == "TargetPropertyNameList" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetPropertyNameList_type > r (
              TargetPropertyNameList_traits::create (i, f, this));

            if (!TargetPropertyNameList_.present ())
            {
              this->TargetPropertyNameList_.set (r);
              continue;
            }
          }

          // TargetLocation
          //
          if (n.name () == "TargetLocation" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetLocation_type > r (
              TargetLocation_traits::create (i, f, this));

            if (!this->TargetLocation_)
            {
              this->TargetLocation_.set (r);
              continue;
            }
          }

          // RecordInstance
          //
          if (n.name () == "RecordInstance" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< RecordInstance_type > r (
              RecordInstance_traits::create (i, f, this));

            if (!this->RecordInstance_)
            {
              this->RecordInstance_.set (r);
              continue;
            }
          }

          // RecordInstanceLocation
          //
          if (n.name () == "RecordInstanceLocation" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< RecordInstanceLocation_type > r (
              RecordInstanceLocation_traits::create (i, f, this));

            if (!this->RecordInstanceLocation_)
            {
              this->RecordInstanceLocation_.set (r);
              continue;
            }
          }

          // RecordLocation
          //
          if (n.name () == "RecordLocation" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< RecordLocation_type > r (
              RecordLocation_traits::create (i, f, this));

            if (!this->RecordLocation_)
            {
              this->RecordLocation_.set (r);
              continue;
            }
          }

          break;
        }

        if (!TargetPropertyNameList_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "TargetPropertyNameList",
            "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap");
        }

        while (p.more_attributes ())
        {
          const ::xercesc::DOMAttr& i (p.next_attribute ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          if (n.name () == "RefId" && n.namespace_ ().empty ())
          {
            this->RefId_.set (RefId_traits::create (i, f, this));
            continue;
          }
        }

        if (!RefId_.present ())
        {
          throw ::xsd::cxx::tree::expected_attribute< char > (
            "RefId",
            "");
        }
      }

      Property_Map_Many2one* Property_Map_Many2one::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class Property_Map_Many2one (*this, f, c);
      }

      Property_Map_Many2one& Property_Map_Many2one::
      operator= (const Property_Map_Many2one& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->Description_ = x.Description_;
          this->RefValue_ = x.RefValue_;
          this->TargetPropertyNameList_ = x.TargetPropertyNameList_;
          this->TargetLocation_ = x.TargetLocation_;
          this->RecordInstance_ = x.RecordInstance_;
          this->RecordInstanceLocation_ = x.RecordInstanceLocation_;
          this->RecordLocation_ = x.RecordLocation_;
          this->RefId_ = x.RefId_;
        }

        return *this;
      }

      Property_Map_Many2one::
      ~Property_Map_Many2one ()
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
    namespace DataMap
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

