// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime__backend_native_NativeWindow
#define INCLUDED_lime__backend_native_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeWindow_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();

	public:
		void __construct( ::lime::ui::Window parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native.NativeWindow"); }
		static hx::ObjectPtr< NativeWindow_obj > __new( ::lime::ui::Window parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeWindow_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeWindow","\x07","\xe9","\xb5","\xcf"); }

		static void __boot();
		static void lime_window_alert( ::Dynamic handle,::String message,::String title);
		static ::Dynamic lime_window_alert_dyn();

		static void lime_window_close( ::Dynamic handle);
		static ::Dynamic lime_window_close_dyn();

		static  ::Dynamic lime_window_create( ::Dynamic application,Int width,Int height,Int flags,::String title);
		static ::Dynamic lime_window_create_dyn();

		static void lime_window_focus( ::Dynamic handle);
		static ::Dynamic lime_window_focus_dyn();

		static Int lime_window_get_display( ::Dynamic handle);
		static ::Dynamic lime_window_get_display_dyn();

		static Bool lime_window_get_enable_text_events( ::Dynamic handle);
		static ::Dynamic lime_window_get_enable_text_events_dyn();

		static Int lime_window_get_height( ::Dynamic handle);
		static ::Dynamic lime_window_get_height_dyn();

		static Int lime_window_get_id( ::Dynamic handle);
		static ::Dynamic lime_window_get_id_dyn();

		static Int lime_window_get_width( ::Dynamic handle);
		static ::Dynamic lime_window_get_width_dyn();

		static Int lime_window_get_x( ::Dynamic handle);
		static ::Dynamic lime_window_get_x_dyn();

		static Int lime_window_get_y( ::Dynamic handle);
		static ::Dynamic lime_window_get_y_dyn();

		static void lime_window_move( ::Dynamic handle,Int x,Int y);
		static ::Dynamic lime_window_move_dyn();

		static void lime_window_resize( ::Dynamic handle,Int width,Int height);
		static ::Dynamic lime_window_resize_dyn();

		static Bool lime_window_set_borderless( ::Dynamic handle,Bool borderless);
		static ::Dynamic lime_window_set_borderless_dyn();

		static void lime_window_set_enable_text_events( ::Dynamic handle,Bool enabled);
		static ::Dynamic lime_window_set_enable_text_events_dyn();

		static Bool lime_window_set_fullscreen( ::Dynamic handle,Bool fullscreen);
		static ::Dynamic lime_window_set_fullscreen_dyn();

		static void lime_window_set_icon( ::Dynamic handle, ::Dynamic buffer);
		static ::Dynamic lime_window_set_icon_dyn();

		static Bool lime_window_set_maximized( ::Dynamic handle,Bool maximized);
		static ::Dynamic lime_window_set_maximized_dyn();

		static Bool lime_window_set_minimized( ::Dynamic handle,Bool minimized);
		static ::Dynamic lime_window_set_minimized_dyn();

		static Bool lime_window_set_resizable( ::Dynamic handle,Bool resizable);
		static ::Dynamic lime_window_set_resizable_dyn();

		static  ::Dynamic lime_window_set_title( ::Dynamic handle,::String title);
		static ::Dynamic lime_window_set_title_dyn();

		static ::cpp::Function<  void( ::hx::Object *,::String,::String) > cffi_lime_window_alert;
		static ::cpp::Function<  void( ::hx::Object *,::String,::String) > &cffi_lime_window_alert_dyn() { return cffi_lime_window_alert;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_window_close;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_window_close_dyn() { return cffi_lime_window_close;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int,Int,::String) > cffi_lime_window_create;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int,Int,::String) > &cffi_lime_window_create_dyn() { return cffi_lime_window_create;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_window_focus;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_window_focus_dyn() { return cffi_lime_window_focus;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_display;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_display_dyn() { return cffi_lime_window_get_display;}
		static ::cpp::Function<  Bool( ::hx::Object *) > cffi_lime_window_get_enable_text_events;
		static ::cpp::Function<  Bool( ::hx::Object *) > &cffi_lime_window_get_enable_text_events_dyn() { return cffi_lime_window_get_enable_text_events;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_height;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_height_dyn() { return cffi_lime_window_get_height;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_id;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_id_dyn() { return cffi_lime_window_get_id;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_width;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_width_dyn() { return cffi_lime_window_get_width;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_x;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_x_dyn() { return cffi_lime_window_get_x;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_window_get_y;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_window_get_y_dyn() { return cffi_lime_window_get_y;}
		static ::cpp::Function<  void( ::hx::Object *,Int,Int) > cffi_lime_window_move;
		static ::cpp::Function<  void( ::hx::Object *,Int,Int) > &cffi_lime_window_move_dyn() { return cffi_lime_window_move;}
		static ::cpp::Function<  void( ::hx::Object *,Int,Int) > cffi_lime_window_resize;
		static ::cpp::Function<  void( ::hx::Object *,Int,Int) > &cffi_lime_window_resize_dyn() { return cffi_lime_window_resize;}
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > cffi_lime_window_set_borderless;
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > &cffi_lime_window_set_borderless_dyn() { return cffi_lime_window_set_borderless;}
		static ::cpp::Function<  void( ::hx::Object *,Bool) > cffi_lime_window_set_enable_text_events;
		static ::cpp::Function<  void( ::hx::Object *,Bool) > &cffi_lime_window_set_enable_text_events_dyn() { return cffi_lime_window_set_enable_text_events;}
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > cffi_lime_window_set_fullscreen;
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > &cffi_lime_window_set_fullscreen_dyn() { return cffi_lime_window_set_fullscreen;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_window_set_icon;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_window_set_icon_dyn() { return cffi_lime_window_set_icon;}
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > cffi_lime_window_set_maximized;
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > &cffi_lime_window_set_maximized_dyn() { return cffi_lime_window_set_maximized;}
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > cffi_lime_window_set_minimized;
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > &cffi_lime_window_set_minimized_dyn() { return cffi_lime_window_set_minimized;}
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > cffi_lime_window_set_resizable;
		static ::cpp::Function<  Bool( ::hx::Object *,Bool) > &cffi_lime_window_set_resizable_dyn() { return cffi_lime_window_set_resizable;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,::String) > cffi_lime_window_set_title;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,::String) > &cffi_lime_window_set_title_dyn() { return cffi_lime_window_set_title;}
		 ::Dynamic handle;
		 ::lime::ui::Window parent;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		void close();
		::Dynamic close_dyn();

		void create( ::lime::app::Application application);
		::Dynamic create_dyn();

		void focus();
		::Dynamic focus_dyn();

		 ::lime::_hx_system::Display getDisplay();
		::Dynamic getDisplay_dyn();

		Bool getEnableTextEvents();
		::Dynamic getEnableTextEvents_dyn();

		void move(Int x,Int y);
		::Dynamic move_dyn();

		void resize(Int width,Int height);
		::Dynamic resize_dyn();

		Bool setBorderless(Bool value);
		::Dynamic setBorderless_dyn();

		Bool setEnableTextEvents(Bool value);
		::Dynamic setEnableTextEvents_dyn();

		Bool setFullscreen(Bool value);
		::Dynamic setFullscreen_dyn();

		void setIcon( ::lime::graphics::Image image);
		::Dynamic setIcon_dyn();

		Bool setMaximized(Bool value);
		::Dynamic setMaximized_dyn();

		Bool setMinimized(Bool value);
		::Dynamic setMinimized_dyn();

		Bool setResizable(Bool value);
		::Dynamic setResizable_dyn();

		::String setTitle(::String value);
		::Dynamic setTitle_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeWindow */ 
