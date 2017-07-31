// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#define INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch

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
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexArray)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_SpriteBatch,State)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,TextureUvs)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES SpriteBatch_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SpriteBatch_obj OBJ_;
		SpriteBatch_obj();

	public:
		void __construct( ::lime::graphics::GLRenderContext gl,hx::Null< Int >  __o_maxSprites);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.SpriteBatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.utils.SpriteBatch"); }
		static hx::ObjectPtr< SpriteBatch_obj > __new( ::lime::graphics::GLRenderContext gl,hx::Null< Int >  __o_maxSprites);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteBatch_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpriteBatch","\x55","\x61","\x90","\xc8"); }

		static void __boot();
		static Int VERTS_PER_SPRITE;
		 ::lime::graphics::GLRenderContext gl;
		 ::openfl::_internal::renderer::RenderSession renderSession;
		::Array< ::Dynamic> states;
		 ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State currentState;
		 ::openfl::_internal::renderer::opengl::utils::VertexArray vertexArray;
		 ::lime::utils::ArrayBufferView positions;
		 ::lime::utils::ArrayBufferView colors;
		 ::lime::graphics::opengl::GLBuffer indexBuffer;
		 ::lime::utils::ArrayBufferView indices;
		Bool dirty;
		Bool drawing;
		 ::openfl::geom::Rectangle clipRect;
		Int maxSprites;
		Int batchedSprites;
		Int vertexArraySize;
		Int indexArraySize;
		Int maxElementsPerVertex;
		Int elementsPerVertex;
		Int writtenVertexBytes;
		 ::openfl::_internal::renderer::opengl::shaders2::Shader shader;
		::Array< ::Dynamic> attributes;
		Bool enableColor;
		Bool lastEnableColor;
		 ::openfl::geom::Matrix matrix;
		 ::openfl::display::TextureUvs uvs;
		 ::openfl::geom::ColorTransform colorTransform;
		void destroy();
		::Dynamic destroy_dyn();

		void begin( ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::geom::Rectangle clipRect);
		::Dynamic begin_dyn();

		void finish();
		::Dynamic finish_dyn();

		void start( ::openfl::geom::Rectangle clipRect);
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

		void renderBitmapData( ::openfl::display::BitmapData bitmapData,Bool smoothing, ::openfl::geom::Matrix matrix, ::openfl::geom::ColorTransform ct, ::Dynamic alpha, ::Dynamic blendMode, ::openfl::display::Shader flashShader, ::Dynamic pixelSnapping,hx::Null< Bool >  bgra);
		::Dynamic renderBitmapData_dyn();

		void renderTiles( ::openfl::display::DisplayObject object, ::openfl::display::Tilesheet sheet,::Array< Float > tileData,hx::Null< Bool >  smooth,hx::Null< Int >  flags, ::openfl::display::Shader flashShader,hx::Null< Int >  count);
		::Dynamic renderTiles_dyn();

		void fillVertices(Int index,Float width,Float height, ::openfl::geom::Matrix matrix, ::openfl::display::TextureUvs uvs,hx::Null< Int >  color, ::Dynamic pixelSnapping);
		::Dynamic fillVertices_dyn();

		void enableAttributes( ::Dynamic color);
		::Dynamic enableAttributes_dyn();

		void flush();
		::Dynamic flush_dyn();

		void renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,Int size,Int start);
		::Dynamic renderBatch_dyn();

		void setState(Int index, ::lime::graphics::opengl::GLTexture texture, ::Dynamic smooth, ::Dynamic blendMode, ::openfl::geom::ColorTransform colorTransform, ::openfl::display::Shader shader, ::Dynamic skipAlpha);
		::Dynamic setState_dyn();

		void setContext( ::lime::graphics::GLRenderContext gl);
		::Dynamic setContext_dyn();

		void prepareShader( ::openfl::display::Shader flashShader, ::openfl::display::BitmapData bd);
		::Dynamic prepareShader_dyn();

		Int getElementsPerVertex();
		::Dynamic getElementsPerVertex_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch */ 