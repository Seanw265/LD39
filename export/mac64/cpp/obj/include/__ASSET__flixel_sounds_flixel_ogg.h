// Generated by Haxe 3.3.0
#ifndef INCLUDED___ASSET__flixel_sounds_flixel_ogg
#define INCLUDED___ASSET__flixel_sounds_flixel_ogg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
HX_DECLARE_CLASS0(__ASSET__flixel_sounds_flixel_ogg)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,Bytes)



class HXCPP_CLASS_ATTRIBUTES __ASSET__flixel_sounds_flixel_ogg_obj : public  ::lime::utils::Bytes_obj
{
	public:
		typedef  ::lime::utils::Bytes_obj super;
		typedef __ASSET__flixel_sounds_flixel_ogg_obj OBJ_;
		__ASSET__flixel_sounds_flixel_ogg_obj();

	public:
		void __construct(Int length,::Array< unsigned char > bytesData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="__ASSET__flixel_sounds_flixel_ogg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"__ASSET__flixel_sounds_flixel_ogg"); }
		static hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > __new(Int length,::Array< unsigned char > bytesData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__flixel_sounds_flixel_ogg_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__flixel_sounds_flixel_ogg","\x74","\x84","\x25","\xe1"); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__flixel_sounds_flixel_ogg */ 