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

#include "OutputParameter.hxx"

#include "stringlist.hxx"

#include "valuetype.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // OutputParameter
      // 

      const OutputParameter::Description_optional& OutputParameter::
      Description () const
      {
        return this->Description_;
      }

      OutputParameter::Description_optional& OutputParameter::
      Description ()
      {
        return this->Description_;
      }

      void OutputParameter::
      Description (const Description_type& x)
      {
        this->Description_.set (x);
      }

      void OutputParameter::
      Description (const Description_optional& x)
      {
        this->Description_ = x;
      }

      void OutputParameter::
      Description (::std::auto_ptr< Description_type > x)
      {
        this->Description_.set (x);
      }

      const OutputParameter::ParameterName_type& OutputParameter::
      ParameterName () const
      {
        return this->ParameterName_.get ();
      }

      OutputParameter::ParameterName_type& OutputParameter::
      ParameterName ()
      {
        return this->ParameterName_.get ();
      }

      void OutputParameter::
      ParameterName (const ParameterName_type& x)
      {
        this->ParameterName_.set (x);
      }

      void OutputParameter::
      ParameterName (::std::auto_ptr< ParameterName_type > x)
      {
        this->ParameterName_.set (x);
      }

      const OutputParameter::ValueType_optional& OutputParameter::
      ValueType () const
      {
        return this->ValueType_;
      }

      OutputParameter::ValueType_optional& OutputParameter::
      ValueType ()
      {
        return this->ValueType_;
      }

      void OutputParameter::
      ValueType (const ValueType_type& x)
      {
        this->ValueType_.set (x);
      }

      void OutputParameter::
      ValueType (const ValueType_optional& x)
      {
        this->ValueType_ = x;
      }

      void OutputParameter::
      ValueType (::std::auto_ptr< ValueType_type > x)
      {
        this->ValueType_.set (x);
      }

      const OutputParameter::ValueFormat_optional& OutputParameter::
      ValueFormat () const
      {
        return this->ValueFormat_;
      }

      OutputParameter::ValueFormat_optional& OutputParameter::
      ValueFormat ()
      {
        return this->ValueFormat_;
      }

      void OutputParameter::
      ValueFormat (const ValueFormat_type& x)
      {
        this->ValueFormat_.set (x);
      }

      void OutputParameter::
      ValueFormat (const ValueFormat_optional& x)
      {
        this->ValueFormat_ = x;
      }

      void OutputParameter::
      ValueFormat (::std::auto_ptr< ValueFormat_type > x)
      {
        this->ValueFormat_.set (x);
      }

      const OutputParameter::RefId_type& OutputParameter::
      RefId () const
      {
        return this->RefId_.get ();
      }

      OutputParameter::RefId_type& OutputParameter::
      RefId ()
      {
        return this->RefId_.get ();
      }

      void OutputParameter::
      RefId (const RefId_type& x)
      {
        this->RefId_.set (x);
      }

      void OutputParameter::
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
      // OutputParameter
      //

      OutputParameter::
      OutputParameter ()
      : ::xml_schema::type (),
        Description_ (this),
        ParameterName_ (this),
        ValueType_ (this),
        ValueFormat_ (this),
        RefId_ (this)
      {
      }

      OutputParameter::
      OutputParameter (const ParameterName_type& ParameterName,
                       const RefId_type& RefId)
      : ::xml_schema::type (),
        Description_ (this),
        ParameterName_ (ParameterName, this),
        ValueType_ (this),
        ValueFormat_ (this),
        RefId_ (RefId, this)
      {
      }

      OutputParameter::
      OutputParameter (const OutputParameter& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        Description_ (x.Description_, f, this),
        ParameterName_ (x.ParameterName_, f, this),
        ValueType_ (x.ValueType_, f, this),
        ValueFormat_ (x.ValueFormat_, f, this),
        RefId_ (x.RefId_, f, this)
      {
      }

      OutputParameter::
      OutputParameter (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        Description_ (this),
        ParameterName_ (this),
        ValueType_ (this),
        ValueFormat_ (this),
        RefId_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void OutputParameter::
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

          // ParameterName
          //
          if (n.name () == "ParameterName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< ParameterName_type > r (
              ParameterName_traits::create (i, f, this));

            if (!ParameterName_.present ())
            {
              this->ParameterName_.set (r);
              continue;
            }
          }

          // ValueType
          //
          if (n.name () == "ValueType" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< ValueType_type > r (
              ValueType_traits::create (i, f, this));

            if (!this->ValueType_)
            {
              this->ValueType_.set (r);
              continue;
            }
          }

          // ValueFormat
          //
          if (n.name () == "ValueFormat" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< ValueFormat_type > r (
              ValueFormat_traits::create (i, f, this));

            if (!this->ValueFormat_)
            {
              this->ValueFormat_.set (r);
              continue;
            }
          }

          break;
        }

        if (!ParameterName_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "ParameterName",
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

      OutputParameter* OutputParameter::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class OutputParameter (*this, f, c);
      }

      OutputParameter& OutputParameter::
      operator= (const OutputParameter& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->Description_ = x.Description_;
          this->ParameterName_ = x.ParameterName_;
          this->ValueType_ = x.ValueType_;
          this->ValueFormat_ = x.ValueFormat_;
          this->RefId_ = x.RefId_;
        }

        return *this;
      }

      OutputParameter::
      ~OutputParameter ()
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

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      void
      operator<< (::xercesc::DOMElement& e, const OutputParameter& i)
      {
        e << static_cast< const ::xml_schema::type& > (i);

        // Description
        //
        if (i.Description ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Description",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.Description ();
        }

        // ParameterName
        //
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "ParameterName",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << i.ParameterName ();
        }

        // ValueType
        //
        if (i.ValueType ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "ValueType",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.ValueType ();
        }

        // ValueFormat
        //
        if (i.ValueFormat ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "ValueFormat",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.ValueFormat ();
        }

        // RefId
        //
        {
          ::xercesc::DOMAttr& a (
            ::xsd::cxx::xml::dom::create_attribute (
              "RefId",
              e));

          a << i.RefId ();
        }
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

