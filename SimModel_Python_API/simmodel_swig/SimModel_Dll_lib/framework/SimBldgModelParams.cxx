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

#include "SimBldgModelParams.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      // SimBldgModelParams
      // 

      const SimBldgModelParams::ObjectIndex_optional& SimBldgModelParams::
      ObjectIndex () const
      {
        return this->ObjectIndex_;
      }

      SimBldgModelParams::ObjectIndex_optional& SimBldgModelParams::
      ObjectIndex ()
      {
        return this->ObjectIndex_;
      }

      void SimBldgModelParams::
      ObjectIndex (const ObjectIndex_type& x)
      {
        this->ObjectIndex_.set (x);
      }

      void SimBldgModelParams::
      ObjectIndex (const ObjectIndex_optional& x)
      {
        this->ObjectIndex_ = x;
      }

      const SimBldgModelParams::ObjectName_optional& SimBldgModelParams::
      ObjectName () const
      {
        return this->ObjectName_;
      }

      SimBldgModelParams::ObjectName_optional& SimBldgModelParams::
      ObjectName ()
      {
        return this->ObjectName_;
      }

      void SimBldgModelParams::
      ObjectName (const ObjectName_type& x)
      {
        this->ObjectName_.set (x);
      }

      void SimBldgModelParams::
      ObjectName (const ObjectName_optional& x)
      {
        this->ObjectName_ = x;
      }

      void SimBldgModelParams::
      ObjectName (::std::auto_ptr< ObjectName_type > x)
      {
        this->ObjectName_.set (x);
      }

      const SimBldgModelParams::IsAutoGenerated_optional& SimBldgModelParams::
      IsAutoGenerated () const
      {
        return this->IsAutoGenerated_;
      }

      SimBldgModelParams::IsAutoGenerated_optional& SimBldgModelParams::
      IsAutoGenerated ()
      {
        return this->IsAutoGenerated_;
      }

      void SimBldgModelParams::
      IsAutoGenerated (const IsAutoGenerated_type& x)
      {
        this->IsAutoGenerated_.set (x);
      }

      void SimBldgModelParams::
      IsAutoGenerated (const IsAutoGenerated_optional& x)
      {
        this->IsAutoGenerated_ = x;
      }

      const SimBldgModelParams::LocalPlacementX_optional& SimBldgModelParams::
      LocalPlacementX () const
      {
        return this->LocalPlacementX_;
      }

      SimBldgModelParams::LocalPlacementX_optional& SimBldgModelParams::
      LocalPlacementX ()
      {
        return this->LocalPlacementX_;
      }

      void SimBldgModelParams::
      LocalPlacementX (const LocalPlacementX_type& x)
      {
        this->LocalPlacementX_.set (x);
      }

      void SimBldgModelParams::
      LocalPlacementX (const LocalPlacementX_optional& x)
      {
        this->LocalPlacementX_ = x;
      }

      const SimBldgModelParams::LocalPlacementY_optional& SimBldgModelParams::
      LocalPlacementY () const
      {
        return this->LocalPlacementY_;
      }

      SimBldgModelParams::LocalPlacementY_optional& SimBldgModelParams::
      LocalPlacementY ()
      {
        return this->LocalPlacementY_;
      }

      void SimBldgModelParams::
      LocalPlacementY (const LocalPlacementY_type& x)
      {
        this->LocalPlacementY_.set (x);
      }

      void SimBldgModelParams::
      LocalPlacementY (const LocalPlacementY_optional& x)
      {
        this->LocalPlacementY_ = x;
      }

      const SimBldgModelParams::LocalPlacementZ_optional& SimBldgModelParams::
      LocalPlacementZ () const
      {
        return this->LocalPlacementZ_;
      }

      SimBldgModelParams::LocalPlacementZ_optional& SimBldgModelParams::
      LocalPlacementZ ()
      {
        return this->LocalPlacementZ_;
      }

      void SimBldgModelParams::
      LocalPlacementZ (const LocalPlacementZ_type& x)
      {
        this->LocalPlacementZ_.set (x);
      }

      void SimBldgModelParams::
      LocalPlacementZ (const LocalPlacementZ_optional& x)
      {
        this->LocalPlacementZ_ = x;
      }

      const SimBldgModelParams::LocalPlacementCoordinates_optional& SimBldgModelParams::
      LocalPlacementCoordinates () const
      {
        return this->LocalPlacementCoordinates_;
      }

      SimBldgModelParams::LocalPlacementCoordinates_optional& SimBldgModelParams::
      LocalPlacementCoordinates ()
      {
        return this->LocalPlacementCoordinates_;
      }

      void SimBldgModelParams::
      LocalPlacementCoordinates (const LocalPlacementCoordinates_type& x)
      {
        this->LocalPlacementCoordinates_.set (x);
      }

      void SimBldgModelParams::
      LocalPlacementCoordinates (const LocalPlacementCoordinates_optional& x)
      {
        this->LocalPlacementCoordinates_ = x;
      }

      void SimBldgModelParams::
      LocalPlacementCoordinates (::std::auto_ptr< LocalPlacementCoordinates_type > x)
      {
        this->LocalPlacementCoordinates_.set (x);
      }

      const SimBldgModelParams::LocalPlacementRotation_optional& SimBldgModelParams::
      LocalPlacementRotation () const
      {
        return this->LocalPlacementRotation_;
      }

      SimBldgModelParams::LocalPlacementRotation_optional& SimBldgModelParams::
      LocalPlacementRotation ()
      {
        return this->LocalPlacementRotation_;
      }

      void SimBldgModelParams::
      LocalPlacementRotation (const LocalPlacementRotation_type& x)
      {
        this->LocalPlacementRotation_.set (x);
      }

      void SimBldgModelParams::
      LocalPlacementRotation (const LocalPlacementRotation_optional& x)
      {
        this->LocalPlacementRotation_ = x;
      }

      const SimBldgModelParams::XDirectionX_optional& SimBldgModelParams::
      XDirectionX () const
      {
        return this->XDirectionX_;
      }

      SimBldgModelParams::XDirectionX_optional& SimBldgModelParams::
      XDirectionX ()
      {
        return this->XDirectionX_;
      }

      void SimBldgModelParams::
      XDirectionX (const XDirectionX_type& x)
      {
        this->XDirectionX_.set (x);
      }

      void SimBldgModelParams::
      XDirectionX (const XDirectionX_optional& x)
      {
        this->XDirectionX_ = x;
      }

      const SimBldgModelParams::XDirectionY_optional& SimBldgModelParams::
      XDirectionY () const
      {
        return this->XDirectionY_;
      }

      SimBldgModelParams::XDirectionY_optional& SimBldgModelParams::
      XDirectionY ()
      {
        return this->XDirectionY_;
      }

      void SimBldgModelParams::
      XDirectionY (const XDirectionY_type& x)
      {
        this->XDirectionY_.set (x);
      }

      void SimBldgModelParams::
      XDirectionY (const XDirectionY_optional& x)
      {
        this->XDirectionY_ = x;
      }

      const SimBldgModelParams::XDirectionZ_optional& SimBldgModelParams::
      XDirectionZ () const
      {
        return this->XDirectionZ_;
      }

      SimBldgModelParams::XDirectionZ_optional& SimBldgModelParams::
      XDirectionZ ()
      {
        return this->XDirectionZ_;
      }

      void SimBldgModelParams::
      XDirectionZ (const XDirectionZ_type& x)
      {
        this->XDirectionZ_.set (x);
      }

      void SimBldgModelParams::
      XDirectionZ (const XDirectionZ_optional& x)
      {
        this->XDirectionZ_ = x;
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
    namespace SimModelCore
    {
      // SimBldgModelParams
      //

      SimBldgModelParams::
      SimBldgModelParams ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        ObjectIndex_ (this),
        ObjectName_ (this),
        IsAutoGenerated_ (this),
        LocalPlacementX_ (this),
        LocalPlacementY_ (this),
        LocalPlacementZ_ (this),
        LocalPlacementCoordinates_ (this),
        LocalPlacementRotation_ (this),
        XDirectionX_ (this),
        XDirectionY_ (this),
        XDirectionZ_ (this)
      {
      }

      SimBldgModelParams::
      SimBldgModelParams (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        ObjectIndex_ (this),
        ObjectName_ (this),
        IsAutoGenerated_ (this),
        LocalPlacementX_ (this),
        LocalPlacementY_ (this),
        LocalPlacementZ_ (this),
        LocalPlacementCoordinates_ (this),
        LocalPlacementRotation_ (this),
        XDirectionX_ (this),
        XDirectionY_ (this),
        XDirectionZ_ (this)
      {
      }

      SimBldgModelParams::
      SimBldgModelParams (const SimBldgModelParams& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        ObjectIndex_ (x.ObjectIndex_, f, this),
        ObjectName_ (x.ObjectName_, f, this),
        IsAutoGenerated_ (x.IsAutoGenerated_, f, this),
        LocalPlacementX_ (x.LocalPlacementX_, f, this),
        LocalPlacementY_ (x.LocalPlacementY_, f, this),
        LocalPlacementZ_ (x.LocalPlacementZ_, f, this),
        LocalPlacementCoordinates_ (x.LocalPlacementCoordinates_, f, this),
        LocalPlacementRotation_ (x.LocalPlacementRotation_, f, this),
        XDirectionX_ (x.XDirectionX_, f, this),
        XDirectionY_ (x.XDirectionY_, f, this),
        XDirectionZ_ (x.XDirectionZ_, f, this)
      {
      }

      SimBldgModelParams::
      SimBldgModelParams (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        ObjectIndex_ (this),
        ObjectName_ (this),
        IsAutoGenerated_ (this),
        LocalPlacementX_ (this),
        LocalPlacementY_ (this),
        LocalPlacementZ_ (this),
        LocalPlacementCoordinates_ (this),
        LocalPlacementRotation_ (this),
        XDirectionX_ (this),
        XDirectionY_ (this),
        XDirectionZ_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBldgModelParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ObjectIndex
          //
          if (n.name () == "ObjectIndex" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->ObjectIndex_)
            {
              this->ObjectIndex_.set (ObjectIndex_traits::create (i, f, this));
              continue;
            }
          }

          // ObjectName
          //
          if (n.name () == "ObjectName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< ObjectName_type > r (
              ObjectName_traits::create (i, f, this));

            if (!this->ObjectName_)
            {
              this->ObjectName_.set (r);
              continue;
            }
          }

          // IsAutoGenerated
          //
          if (n.name () == "IsAutoGenerated" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->IsAutoGenerated_)
            {
              this->IsAutoGenerated_.set (IsAutoGenerated_traits::create (i, f, this));
              continue;
            }
          }

          // LocalPlacementX
          //
          if (n.name () == "LocalPlacementX" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->LocalPlacementX_)
            {
              this->LocalPlacementX_.set (LocalPlacementX_traits::create (i, f, this));
              continue;
            }
          }

          // LocalPlacementY
          //
          if (n.name () == "LocalPlacementY" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->LocalPlacementY_)
            {
              this->LocalPlacementY_.set (LocalPlacementY_traits::create (i, f, this));
              continue;
            }
          }

          // LocalPlacementZ
          //
          if (n.name () == "LocalPlacementZ" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->LocalPlacementZ_)
            {
              this->LocalPlacementZ_.set (LocalPlacementZ_traits::create (i, f, this));
              continue;
            }
          }

          // LocalPlacementCoordinates
          //
          if (n.name () == "LocalPlacementCoordinates" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< LocalPlacementCoordinates_type > r (
              LocalPlacementCoordinates_traits::create (i, f, this));

            if (!this->LocalPlacementCoordinates_)
            {
              this->LocalPlacementCoordinates_.set (r);
              continue;
            }
          }

          // LocalPlacementRotation
          //
          if (n.name () == "LocalPlacementRotation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->LocalPlacementRotation_)
            {
              this->LocalPlacementRotation_.set (LocalPlacementRotation_traits::create (i, f, this));
              continue;
            }
          }

          // XDirectionX
          //
          if (n.name () == "XDirectionX" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->XDirectionX_)
            {
              this->XDirectionX_.set (XDirectionX_traits::create (i, f, this));
              continue;
            }
          }

          // XDirectionY
          //
          if (n.name () == "XDirectionY" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->XDirectionY_)
            {
              this->XDirectionY_.set (XDirectionY_traits::create (i, f, this));
              continue;
            }
          }

          // XDirectionZ
          //
          if (n.name () == "XDirectionZ" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            if (!this->XDirectionZ_)
            {
              this->XDirectionZ_.set (XDirectionZ_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimBldgModelParams* SimBldgModelParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBldgModelParams (*this, f, c);
      }

      SimBldgModelParams& SimBldgModelParams::
      operator= (const SimBldgModelParams& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->ObjectIndex_ = x.ObjectIndex_;
          this->ObjectName_ = x.ObjectName_;
          this->IsAutoGenerated_ = x.IsAutoGenerated_;
          this->LocalPlacementX_ = x.LocalPlacementX_;
          this->LocalPlacementY_ = x.LocalPlacementY_;
          this->LocalPlacementZ_ = x.LocalPlacementZ_;
          this->LocalPlacementCoordinates_ = x.LocalPlacementCoordinates_;
          this->LocalPlacementRotation_ = x.LocalPlacementRotation_;
          this->XDirectionX_ = x.XDirectionX_;
          this->XDirectionY_ = x.XDirectionY_;
          this->XDirectionZ_ = x.XDirectionZ_;
        }

        return *this;
      }

      SimBldgModelParams::
      ~SimBldgModelParams ()
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
    namespace SimModelCore
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

