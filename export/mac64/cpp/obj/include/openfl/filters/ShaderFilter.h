// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_filters_ShaderFilter
#define INCLUDED_openfl_filters_ShaderFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ShaderFilter)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES ShaderFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef ShaderFilter_obj OBJ_;
		ShaderFilter_obj();

	public:
		void __construct( ::openfl::display::Shader shader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ShaderFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters.ShaderFilter"); }
		static hx::ObjectPtr< ShaderFilter_obj > __new( ::openfl::display::Shader shader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderFilter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderFilter","\xdd","\x08","\x30","\xbd"); }

		Int bottomExtension;
		Int leftExtension;
		Int rightExtension;
		Int topExtension;
		 ::openfl::display::Shader shader;
		 ::openfl::filters::BitmapFilter clone();

		void _hx___growBounds( ::openfl::geom::Rectangle rect);

		 ::openfl::display::Shader _hx___preparePass(Int pass);

		Int set_bottomExtension(Int v);
		::Dynamic set_bottomExtension_dyn();

		Int set_topExtension(Int v);
		::Dynamic set_topExtension_dyn();

		Int set_rightExtension(Int v);
		::Dynamic set_rightExtension_dyn();

		Int set_leftExtension(Int v);
		::Dynamic set_leftExtension_dyn();

		 ::openfl::display::Shader set_shader( ::openfl::display::Shader v);
		::Dynamic set_shader_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ShaderFilter */ 