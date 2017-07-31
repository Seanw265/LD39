// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#define INCLUDED_lime_math_color__RGBA_RGBA_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <hxMath.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,math,color,_RGBA,RGBA_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace math{
namespace color{
namespace _RGBA{


class HXCPP_CLASS_ATTRIBUTES RGBA_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RGBA_Impl__obj OBJ_;
		RGBA_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.color._RGBA.RGBA_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.math.color._RGBA.RGBA_Impl_"); }
		static hx::ObjectPtr< RGBA_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RGBA_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("RGBA_Impl_","\x54","\x54","\x4c","\xb3"); }

		static void __boot();
		static  ::lime::utils::ArrayBufferView _hx___alpha16;
		static  ::lime::utils::ArrayBufferView _hx___clamp;
		static Int a16;
		static Float unmult;
		static Int _new(hx::Null< Int >  rgba);
		static ::Dynamic _new_dyn();

		static Int create(Int r,Int g,Int b,Int a);
		static ::Dynamic create_dyn();

		static void multiplyAlpha(Int this1);
		static ::Dynamic multiplyAlpha_dyn();

		static void readUInt8(Int this1, ::lime::utils::ArrayBufferView data,Int offset,hx::Null< Int >  format,hx::Null< Bool >  premultiplied);
		static ::Dynamic readUInt8_dyn();

		static void set(Int this1,Int r,Int g,Int b,Int a);
		static ::Dynamic set_dyn();

		static void unmultiplyAlpha(Int this1);
		static ::Dynamic unmultiplyAlpha_dyn();

		static void writeUInt8(Int this1, ::lime::utils::ArrayBufferView data,Int offset,hx::Null< Int >  format,hx::Null< Bool >  premultiplied);
		static ::Dynamic writeUInt8_dyn();

		static Int _hx___fromARGB(Int argb);
		static ::Dynamic _hx___fromARGB_dyn();

		static Int _hx___fromBGRA(Int bgra);
		static ::Dynamic _hx___fromBGRA_dyn();

		static Int get_a(Int this1);
		static ::Dynamic get_a_dyn();

		static Int set_a(Int this1,Int value);
		static ::Dynamic set_a_dyn();

		static Int get_b(Int this1);
		static ::Dynamic get_b_dyn();

		static Int set_b(Int this1,Int value);
		static ::Dynamic set_b_dyn();

		static Int get_g(Int this1);
		static ::Dynamic get_g_dyn();

		static Int set_g(Int this1,Int value);
		static ::Dynamic set_g_dyn();

		static Int get_r(Int this1);
		static ::Dynamic get_r_dyn();

		static Int set_r(Int this1,Int value);
		static ::Dynamic set_r_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _RGBA

#endif /* INCLUDED_lime_math_color__RGBA_RGBA_Impl_ */ 