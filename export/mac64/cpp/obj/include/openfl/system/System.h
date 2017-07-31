// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_system_System
#define INCLUDED_openfl_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_hx_system,System)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES System_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system.System")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.system.System"); }
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"); }

		static void __boot();
		static Int totalMemory;
		static Bool useCodePage;
		static ::String vmVersion;
		static void exit(Int code);
		static ::Dynamic exit_dyn();

		static void gc();
		static ::Dynamic gc_dyn();

		static void pause();
		static ::Dynamic pause_dyn();

		static void resume();
		static ::Dynamic resume_dyn();

		static void setClipboard(::String string);
		static ::Dynamic setClipboard_dyn();

		static Int get_totalMemory();
		static ::Dynamic get_totalMemory_dyn();

		static ::String get_vmVersion();
		static ::Dynamic get_vmVersion_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_System */ 
