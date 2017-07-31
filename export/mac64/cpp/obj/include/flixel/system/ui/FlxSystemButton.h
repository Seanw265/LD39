// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#define INCLUDED_flixel_system_ui_FlxSystemButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxSystemButton_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef FlxSystemButton_obj OBJ_;
		FlxSystemButton_obj();

	public:
		void __construct( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< Bool >  __o_ToggleMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxSystemButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.ui.FlxSystemButton"); }
		static hx::ObjectPtr< FlxSystemButton_obj > __new( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< Bool >  __o_ToggleMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSystemButton_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxSystemButton","\xb3","\xc5","\x2f","\x15"); }

		 ::Dynamic upHandler;
		 ::Dynamic &upHandler_dyn() { return upHandler;}
		Bool enabled;
		Bool toggleMode;
		Bool toggled;
		 ::openfl::display::Bitmap _icon;
		Bool _mouseDown;
		void changeIcon( ::openfl::display::BitmapData Icon);
		::Dynamic changeIcon_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void onMouseUp( ::Dynamic _);
		::Dynamic onMouseUp_dyn();

		void onMouseDown( ::Dynamic _);
		::Dynamic onMouseDown_dyn();

		void onMouseOver( ::Dynamic _);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::Dynamic _);
		::Dynamic onMouseOut_dyn();

		Bool set_toggled(Bool Value);
		::Dynamic set_toggled_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSystemButton */ 
