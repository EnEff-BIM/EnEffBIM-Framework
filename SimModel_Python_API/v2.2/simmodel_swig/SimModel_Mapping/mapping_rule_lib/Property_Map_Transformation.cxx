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

#include "Property_Map_Transformation.hxx"

#include "stringlist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace DataMap
    {
      // Property_Map_Transformation
      // 

      const Property_Map_Transformation::Description_optional& Property_Map_Transformation::
      Description () const
      {
        return this->Description_;
      }

      Property_Map_Transformation::Description_optional& Property_Map_Transformation::
      Description ()
      {
        return this->Description_;
      }

      void Property_Map_Transformation::
      Description (const Description_type& x)
      {
        this->Description_.set (x);
      }

      void Property_Map_Transformation::
      Description (const Description_optional& x)
      {
        this->Description_ = x;
      }

      void Property_Map_Transformation::
      Description (::std::auto_ptr< Description_type > x)
      {
        this->Description_.set (x);
      }

      const Property_Map_Transformation::InputParameterName_sequence& Property_Map_Transformation::
      InputParameterName () const
      {
        return this->InputParameterName_;
      }

      Property_Map_Transformation::InputParameterName_sequence& Property_Map_Transformation::
      InputParameterName ()
      {
        return this->InputParameterName_;
      }

      void Property_Map_Transformation::
      InputParameterName (const InputParameterName_sequence& s)
      {
        this->InputParameterName_ = s;
      }

      const Property_Map_Transformation::InputCoefficientName_sequence& Property_Map_Transformation::
      InputCoefficientName () const
      {
        return this->InputCoefficientName_;
      }

      Property_Map_Transformation::InputCoefficientName_sequence& Property_Map_Transformation::
      InputCoefficientName ()
      {
        return this->InputCoefficientName_;
      }

      void Property_Map_Transformation::
      InputCoefficientName (const InputCoefficientName_sequence& s)
      {
        this->InputCoefficientName_ = s;
      }

      const Property_Map_Transformation::Function_type& Property_Map_Transformation::
      Function () const
      {
        return this->Function_.get ();
      }

      Property_Map_Transformation::Function_type& Property_Map_Transformation::
      Function ()
      {
        return this->Function_.get ();
      }

      void Property_Map_Transformation::
      Function (const Function_type& x)
      {
        this->Function_.set (x);
      }

      void Property_Map_Transformation::
      Function (::std::auto_ptr< Function_type > x)
      {
        this->Function_.set (x);
      }

      const Property_Map_Transformation::OutputParameterName_sequence& Property_Map_Transformation::
      OutputParameterName () const
      {
        return this->OutputParameterName_;
      }

      Property_Map_Transformation::OutputParameterName_sequence& Property_Map_Transformation::
      OutputParameterName ()
      {
        return this->OutputParameterName_;
      }

      void Property_Map_Transformation::
      OutputParameterName (const OutputParameterName_sequence& s)
      {
        this->OutputParameterName_ = s;
      }

      const Property_Map_Transformation::TargetLocation_sequence& Property_Map_Transformation::
      TargetLocation () const
      {
        return this->TargetLocation_;
      }

      Property_Map_Transformation::TargetLocation_sequence& Property_Map_Transformation::
      TargetLocation ()
      {
        return this->TargetLocation_;
      }

      void Property_Map_Transformation::
      TargetLocation (const TargetLocation_sequence& s)
      {
        this->TargetLocation_ = s;
      }

      const Property_Map_Transformation::RecordInstance_optional& Property_Map_Transformation::
      RecordInstance () const
      {
        return this->RecordInstance_;
      }

      Property_Map_Transformation::RecordInstance_optional& Property_Map_Transformation::
      RecordInstance ()
      {
        return this->RecordInstance_;
      }

      void Property_Map_Transformation::
      RecordInstance (const RecordInstance_type& x)
      {
        this->RecordInstance_.set (x);
      }

      void Property_Map_Transformation::
      RecordInstance (const RecordInstance_optional& x)
      {
        this->RecordInstance_ = x;
      }

      void Property_Map_Transformation::
      RecordInstance (::std::auto_ptr< RecordInstance_type > x)
      {
        this->RecordInstance_.set (x);
      }

      const Property_Map_Transformation::RecordInstanceLocation_optional& Property_Map_Transformation::
      RecordInstanceLocation () const
      {
        return this->RecordInstanceLocation_;
      }

      Property_Map_Transformation::RecordInstanceLocation_optional& Property_Map_Transformation::
      RecordInstanceLocation ()
      {
        return this->RecordInstanceLocation_;
      }

      void Property_Map_Transformation::
      RecordInstanceLocation (const RecordInstanceLocation_type& x)
      {
        this->RecordInstanceLocation_.set (x);
      }

      void Property_Map_Transformation::
      RecordInstanceLocation (const RecordInstanceLocation_optional& x)
      {
        this->RecordInstanceLocation_ = x;
      }

      void Property_Map_Transformation::
      RecordInstanceLocation (::std::auto_ptr< RecordInstanceLocation_type > x)
      {
        this->RecordInstanceLocation_.set (x);
      }

      const Property_Map_Transformation::RecordLocation_optional& Property_Map_Transformation::
      RecordLocation () const
      {
        return this->RecordLocation_;
      }

      Property_Map_Transformation::RecordLocation_optional& Property_Map_Transformation::
      RecordLocation ()
      {
        return this->RecordLocation_;
      }

      void Property_Map_Transformation::
      RecordLocation (const RecordLocation_type& x)
      {
        this->RecordLocation_.set (x);
      }

      void Property_Map_Transformation::
      RecordLocation (const RecordLocation_optional& x)
      {
        this->RecordLocation_ = x;
      }

      void Property_Map_Transformation::
      RecordLocation (::std::auto_ptr< RecordLocation_type > x)
      {
        this->RecordLocation_.set (x);
      }

      const Property_Map_Transformation::RefId_type& Property_Map_Transformation::
      RefId () const
      {
        return this->RefId_.get ();
      }

      Property_Map_Transformation::RefId_type& Property_Map_Transformation::
      RefId ()
      {
        return this->RefId_.get ();
      }

      void Property_Map_Transformation::
      RefId (const RefId_type& x)
      {
        this->RefId_.set (x);
      }

      void Property_Map_Transformation::
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
      // Property_Map_Transformation
      //

      Property_Map_Transformation::
      Property_Map_Transformation ()
      : ::xml_schema::type (),
        Description_ (this),
        InputParameterName_ (this),
        InputCoefficientName_ (this),
        Function_ (this),
        OutputParameterName_ (this),
        TargetLocation_ (this),
        RecordInstance_ (this),
        RecordInstanceLocation_ (this),
        RecordLocation_ (this),
        RefId_ (this)
      {
      }

      Property_Map_Transformation::
      Property_Map_Transformation (const Function_type& Function,
                                   const RefId_type& RefId)
      : ::xml_schema::type (),
        Description_ (this),
        InputParameterName_ (this),
        InputCoefficientName_ (this),
        Function_ (Function, this),
        OutputParameterName_ (this),
        TargetLocation_ (this),
        RecordInstance_ (this),
        RecordInstanceLocation_ (this),
        RecordLocation_ (this),
        RefId_ (RefId, this)
      {
      }

      Property_Map_Transformation::
      Property_Map_Transformation (const Property_Map_Transformation& x,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        Description_ (x.Description_, f, this),
        InputParameterName_ (x.InputParameterName_, f, this),
        InputCoefficientName_ (x.InputCoefficientName_, f, this),
        Function_ (x.Function_, f, this),
        OutputParameterName_ (x.OutputParameterName_, f, this),
        TargetLocation_ (x.TargetLocation_, f, this),
        RecordInstance_ (x.RecordInstance_, f, this),
        RecordInstanceLocation_ (x.RecordInstanceLocation_, f, this),
        RecordLocation_ (x.RecordLocation_, f, this),
        RefId_ (x.RefId_, f, this)
      {
      }

      Property_Map_Transformation::
      Property_Map_Transformation (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        Description_ (this),
        InputParameterName_ (this),
        InputCoefficientName_ (this),
        Function_ (this),
        OutputParameterName_ (this),
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

      void Property_Map_Transformation::
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

          // InputParameterName
          //
          if (n.name () == "InputParameterName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< InputParameterName_type > r (
              InputParameterName_traits::create (i, f, this));

            this->InputParameterName_.push_back (r);
            continue;
          }

          // InputCoefficientName
          //
          if (n.name () == "InputCoefficientName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< InputCoefficientName_type > r (
              InputCoefficientName_traits::create (i, f, this));

            this->InputCoefficientName_.push_back (r);
            continue;
          }

          // Function
          //
          if (n.name () == "Function" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< Function_type > r (
              Function_traits::create (i, f, this));

            if (!Function_.present ())
            {
              this->Function_.set (r);
              continue;
            }
          }

          // OutputParameterName
          //
          if (n.name () == "OutputParameterName" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< OutputParameterName_type > r (
              OutputParameterName_traits::create (i, f, this));

            this->OutputParameterName_.push_back (r);
            continue;
          }

          // TargetLocation
          //
          if (n.name () == "TargetLocation" && n.namespace_ () == "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap")
          {
            ::std::auto_ptr< TargetLocation_type > r (
              TargetLocation_traits::create (i, f, this));

            this->TargetLocation_.push_back (r);
            continue;
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

        if (!Function_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "Function",
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

      Property_Map_Transformation* Property_Map_Transformation::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class Property_Map_Transformation (*this, f, c);
      }

      Property_Map_Transformation& Property_Map_Transformation::
      operator= (const Property_Map_Transformation& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->Description_ = x.Description_;
          this->InputParameterName_ = x.InputParameterName_;
          this->InputCoefficientName_ = x.InputCoefficientName_;
          this->Function_ = x.Function_;
          this->OutputParameterName_ = x.OutputParameterName_;
          this->TargetLocation_ = x.TargetLocation_;
          this->RecordInstance_ = x.RecordInstance_;
          this->RecordInstanceLocation_ = x.RecordInstanceLocation_;
          this->RecordLocation_ = x.RecordLocation_;
          this->RefId_ = x.RefId_;
        }

        return *this;
      }

      Property_Map_Transformation::
      ~Property_Map_Transformation ()
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
      operator<< (::xercesc::DOMElement& e, const Property_Map_Transformation& i)
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

        // InputParameterName
        //
        for (Property_Map_Transformation::InputParameterName_const_iterator
             b (i.InputParameterName ().begin ()), n (i.InputParameterName ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "InputParameterName",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // InputCoefficientName
        //
        for (Property_Map_Transformation::InputCoefficientName_const_iterator
             b (i.InputCoefficientName ().begin ()), n (i.InputCoefficientName ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "InputCoefficientName",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // Function
        //
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "Function",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << i.Function ();
        }

        // OutputParameterName
        //
        for (Property_Map_Transformation::OutputParameterName_const_iterator
             b (i.OutputParameterName ().begin ()), n (i.OutputParameterName ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "OutputParameterName",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // TargetLocation
        //
        for (Property_Map_Transformation::TargetLocation_const_iterator
             b (i.TargetLocation ().begin ()), n (i.TargetLocation ().end ());
             b != n; ++b)
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "TargetLocation",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *b;
        }

        // RecordInstance
        //
        if (i.RecordInstance ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "RecordInstance",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.RecordInstance ();
        }

        // RecordInstanceLocation
        //
        if (i.RecordInstanceLocation ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "RecordInstanceLocation",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.RecordInstanceLocation ();
        }

        // RecordLocation
        //
        if (i.RecordLocation ())
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "RecordLocation",
              "http://www.e3d.rwth-aachen.de/namespaces/Sim/DataMap",
              e));

          s << *i.RecordLocation ();
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

