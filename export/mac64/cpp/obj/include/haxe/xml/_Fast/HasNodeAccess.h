// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#define INCLUDED_haxe_xml__Fast_HasNodeAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Fast,HasNodeAccess)

namespace haxe{
namespace xml{
namespace _Fast{


class HXCPP_CLASS_ATTRIBUTES HasNodeAccess_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HasNodeAccess_obj OBJ_;
		HasNodeAccess_obj();

	public:
		void __construct( ::Xml x);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.xml._Fast.HasNodeAccess")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.xml._Fast.HasNodeAccess"); }
		static hx::ObjectPtr< HasNodeAccess_obj > __new( ::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HasNodeAccess_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HasNodeAccess","\x20","\x89","\x3a","\x78"); }

		 ::Xml _hx___x;
		Bool resolve(::String name);
		::Dynamic resolve_dyn();

};

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast

#endif /* INCLUDED_haxe_xml__Fast_HasNodeAccess */ 
