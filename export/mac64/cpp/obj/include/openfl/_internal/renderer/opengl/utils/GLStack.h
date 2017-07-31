// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#define INCLUDED_openfl__internal_renderer_opengl_utils_GLStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucket)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLStack)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES GLStack_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLStack_obj OBJ_;
		GLStack_obj();

	public:
		void __construct( ::lime::graphics::GLRenderContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.GLStack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.utils.GLStack"); }
		static hx::ObjectPtr< GLStack_obj > __new( ::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLStack_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLStack","\xe3","\x32","\xcc","\x02"); }

		Int lastIndex;
		::Array< ::Dynamic> buckets;
		 ::lime::graphics::GLRenderContext gl;
		void reset();
		::Dynamic reset_dyn();

		void upload();
		::Dynamic upload_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GLStack */ 