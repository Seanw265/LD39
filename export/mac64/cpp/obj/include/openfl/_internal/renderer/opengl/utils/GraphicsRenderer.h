// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#define INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketMode)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,DrawPath)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucket)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLGraphicsData)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLStack)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GraphicsRenderer)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES GraphicsRenderer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GraphicsRenderer_obj OBJ_;
		GraphicsRenderer_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.opengl.utils.GraphicsRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.opengl.utils.GraphicsRenderer"); }
		static hx::ObjectPtr< GraphicsRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsRenderer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsRenderer","\x4e","\x99","\x16","\x1b"); }

		static void __boot();
		static ::Array< ::Dynamic> fillVertexAttributes;
		static ::Array< ::Dynamic> drawTrianglesVertexAttributes;
		static ::Array< ::Dynamic> primitiveVertexAttributes;
		static ::Array< ::Dynamic> graphicsDataPool;
		static ::Array< ::Dynamic> bucketPool;
		static Float SIN45;
		static Float TAN22;
		static  ::openfl::geom::Point objectPosition;
		static  ::openfl::geom::Rectangle objectBounds;
		static  ::lime::graphics::opengl::GLBuffer lastVertsBuffer;
		static ::hx::EnumBase lastBucketMode;
		static  ::lime::graphics::opengl::GLTexture lastTexture;
		static Bool lastTextureRepeat;
		static Bool lastTextureSmooth;
		static  ::openfl::geom::Matrix overrideMatrix;
		static void buildCircle( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< Bool >  localCoords);
		static ::Dynamic buildCircle_dyn();

		static void buildComplexPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< Bool >  localCoords);
		static ::Dynamic buildComplexPoly_dyn();

		static void buildLine( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,hx::Null< Bool >  localCoords);
		static ::Dynamic buildLine_dyn();

		static void buildPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack);
		static ::Dynamic buildPoly_dyn();

		static void buildRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< Bool >  localCoords);
		static ::Dynamic buildRectangle_dyn();

		static void buildRoundedRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< Bool >  localCoords);
		static ::Dynamic buildRoundedRectangle_dyn();

		static void buildDrawTriangles( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::display::DisplayObject object, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< Bool >  localCoords);
		static ::Dynamic buildDrawTriangles_dyn();

		static void buildDrawTiles( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack);
		static ::Dynamic buildDrawTiles_dyn();

		static ::Array< Float > quadraticBezierCurve(Float fromX,Float fromY,Float cpX,Float cpY,Float toX,Float toY);
		static ::Dynamic quadraticBezierCurve_dyn();

		static void render( ::openfl::display::DisplayObject object, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic render_dyn();

		static void renderGraphics( ::openfl::display::DisplayObject object, ::openfl::_internal::renderer::RenderSession renderSession, ::Dynamic localCoords);
		static ::Dynamic renderGraphics_dyn();

		static void updateGraphics( ::openfl::display::DisplayObject object, ::openfl::display::Graphics graphics, ::lime::graphics::GLRenderContext gl, ::Dynamic localCoords);
		static ::Dynamic updateGraphics_dyn();

		static  ::openfl::_internal::renderer::opengl::utils::GLBucket prepareBucket( ::openfl::_internal::renderer::opengl::utils::DrawPath path, ::openfl::_internal::renderer::opengl::utils::GLStack glStack);
		static ::Dynamic prepareBucket_dyn();

		static  ::openfl::_internal::renderer::opengl::utils::GLBucket getBucket( ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::hx::EnumBase mode);
		static ::Dynamic getBucket_dyn();

		static  ::openfl::_internal::renderer::opengl::utils::GLBucket switchBucket(Int fillIndex, ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::hx::EnumBase mode);
		static ::Dynamic switchBucket_dyn();

		static  ::openfl::_internal::renderer::opengl::shaders2::Shader prepareShader( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::display::DisplayObject object, ::lime::utils::ArrayBufferView translationMatrix);
		static ::Dynamic prepareShader_dyn();

		static void renderFill( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket, ::openfl::_internal::renderer::opengl::shaders2::Shader shader, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic renderFill_dyn();

		static void renderDrawTriangles( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket, ::openfl::_internal::renderer::opengl::shaders2::Shader shader, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic renderDrawTriangles_dyn();

		static void bindTexture( ::lime::graphics::GLRenderContext gl, ::openfl::_internal::renderer::opengl::utils::GLBucket bucket);
		static ::Dynamic bindTexture_dyn();

		static Bool isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static ::Dynamic isCCW_dyn();

		static ::Array< Float > hex2rgb( ::Dynamic hex);
		static ::Dynamic hex2rgb_dyn();

		static ::Array< Float > hex2rgba( ::Dynamic hex);
		static ::Dynamic hex2rgba_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer */ 