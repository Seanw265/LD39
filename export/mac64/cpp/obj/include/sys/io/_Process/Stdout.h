// Generated by Haxe 3.3.0
#ifndef INCLUDED_sys_io__Process_Stdout
#define INCLUDED_sys_io__Process_Stdout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS3(sys,io,_Process,Stdout)

namespace sys{
namespace io{
namespace _Process{


class HXCPP_CLASS_ATTRIBUTES Stdout_obj : public  ::haxe::io::Input_obj
{
	public:
		typedef  ::haxe::io::Input_obj super;
		typedef Stdout_obj OBJ_;
		Stdout_obj();

	public:
		void __construct( ::Dynamic p,Bool out);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.io._Process.Stdout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.io._Process.Stdout"); }
		static hx::ObjectPtr< Stdout_obj > __new( ::Dynamic p,Bool out);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stdout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stdout","\xeb","\x33","\x88","\x3c"); }

		 ::Dynamic p;
		Bool out;
		 ::haxe::io::Bytes buf;
		Int readByte();

		Int readBytes( ::haxe::io::Bytes str,Int pos,Int len);

};

} // end namespace sys
} // end namespace io
} // end namespace _Process

#endif /* INCLUDED_sys_io__Process_Stdout */ 
