// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#define INCLUDED_openfl__internal_renderer_AbstractRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES AbstractRenderer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AbstractRenderer_obj OBJ_;
		AbstractRenderer_obj();

	public:
		void __construct(Int width,Int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.AbstractRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.AbstractRenderer"); }
		static hx::ObjectPtr< AbstractRenderer_obj > __new(Int width,Int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AbstractRenderer","\x65","\xd0","\xe5","\x44"); }

		Int height;
		Int width;
		Bool transparent;
		 ::openfl::geom::Rectangle viewport;
		 ::openfl::_internal::renderer::RenderSession renderSession;
		virtual void render( ::openfl::display::Stage stage);
		::Dynamic render_dyn();

		void renderShape( ::openfl::display::Shape shape);
		::Dynamic renderShape_dyn();

		virtual void setViewport(Int x,Int y,Int width,Int height);
		::Dynamic setViewport_dyn();

		virtual void resize(Int width,Int height);
		::Dynamic resize_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_AbstractRenderer */ 
