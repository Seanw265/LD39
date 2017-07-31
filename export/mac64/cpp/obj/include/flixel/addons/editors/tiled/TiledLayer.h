// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayerType)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledLayer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TiledLayer_obj OBJ_;
		TiledLayer_obj();

	public:
		void __construct( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledLayer"); }
		static hx::ObjectPtr< TiledLayer_obj > __new( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLayer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledLayer","\x9b","\x6c","\x51","\x25"); }

		::hx::EnumBase type;
		 ::flixel::addons::editors::tiled::TiledMap map;
		::String name;
		Float opacity;
		Bool visible;
		 ::flixel::addons::editors::tiled::TiledPropertySet properties;
		Float offsetX;
		Float offsetY;
		void loadProperties( ::haxe::xml::Fast source);
		::Dynamic loadProperties_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayer */ 