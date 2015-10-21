//#define BOOST_PYTHON_STATIC_LIB
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/class.hpp>
#include <boost/python/scope.hpp>

#include ".\framework\SimRoot.hxx"

char const* greet()
{
   return "hello, world";
}

BOOST_PYTHON_MODULE(test_py)
{
    using namespace boost::python;
    def("greet", greet);
}

class DummySchema{};
class DummySimxml{};
class DummySimModelCore{};
class DummyXml_schema {};

BOOST_PYTHON_MODULE(test_dll)
{
	using namespace boost::python;
	using namespace schema::simxml::SimModelCore;
	//using namespace xml_schema;
	//scope xml_schema = class_<DummyXml_schema>("xml_schema")
	//	;

	scope schema
        = class_<DummySchema>("schema")
        ;
	
	scope simxml
        = class_<DummySimxml>("simxml")
        ;

	scope SimModelCore
        = class_<DummySimModelCore>("SimModelCore")
        ;

	/*class_<schema::simxml::SimModelCore::SimRoot>("SimRoot", init<const SimRoot::RefId_type&>())
       .def("TestFun", &SimRoot::TestFun)
    ;*/

	class_<schema::simxml::SimModelCore::SimRoot>("SimRoot")
       .def("setId", &SimRoot::setId)
	   .def("refId", &SimRoot::refId)
    ;

	class_<schema::simxml::SimModelCore::World>("World")
       .def("greet", &World::greet)
	   .def("set", &World::set)
	;
}

namespace a
{
    class A{};

    namespace b
    {
         class B{};
    }
}

class DummyA{};
class DummyB{};

BOOST_PYTHON_MODULE(mymodule)
{
	using namespace boost::python;
    // Change the current scope 
    scope a
        = class_<DummyA>("a")
        ;

    // Define a class A in the current scope, a
    class_<a::A>("A")
        //.def("somemethod", &a::A::method)
        ;

    // Change the scope again, a.b:
    scope b
        = class_<DummyB>("b")
        ;

    class_<a::b::B>("B")
        //.def("somemethod", &a::b::B::method)
        ;
}