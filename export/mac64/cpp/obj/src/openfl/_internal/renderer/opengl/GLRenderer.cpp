// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLRenderer_obj::__construct(hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::lime::graphics::GLRenderContext gl,hx::Null< Bool >  __o_transparent,hx::Null< Bool >  __o_antialias,hx::Null< Bool >  __o_preserveDrawingBuffer){
Int width = __o_width.Default(800);
Int height = __o_height.Default(600);
Bool transparent = __o_transparent.Default(false);
Bool antialias = __o_antialias.Default(false);
Bool preserveDrawingBuffer = __o_preserveDrawingBuffer.Default(false);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",43,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(gl,"gl")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(antialias,"antialias")
            	HX_STACK_ARG(preserveDrawingBuffer,"preserveDrawingBuffer")
HXLINE(  71)		this->vpHeight = (int)0;
HXLINE(  70)		this->vpWidth = (int)0;
HXLINE(  69)		this->vpY = (int)0;
HXLINE(  68)		this->vpX = (int)0;
HXLINE(  76)		super::__construct(width,height);
HXLINE(  78)		this->transparent = transparent;
HXLINE(  79)		this->preserveDrawingBuffer = preserveDrawingBuffer;
HXLINE(  80)		this->width = width;
HXLINE(  81)		this->height = height;
HXLINE(  82)		this->viewport =  ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
HXLINE(  84)		this->options =  ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("stencil",fc,bd,03,80),true)
            			->setFixed(1,HX_("premultipliedAlpha",28,8e,5c,1a),transparent)
            			->setFixed(2,HX_("alpha",5e,a7,96,21),transparent)
            			->setFixed(3,HX_("preserveDrawingBuffer",92,bb,1e,4b),preserveDrawingBuffer)
            			->setFixed(4,HX_("antialias",ae,d6,e9,75),antialias));
HXLINE(  92)		this->_glContextId = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId++;
HXLINE(  93)		this->gl = gl;
HXLINE(  98)		this->defaultFramebuffer = null();
HXLINE( 101)		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = gl;
HXLINE( 103)		this->projectionMatrix =  ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE( 105)		this->projection =  ::openfl::geom::Point_obj::__new(null(),null());
HXLINE( 106)		this->projection->x = ((Float)this->width / (Float)(int)2);
HXLINE( 107)		this->projection->y = ((Float)-(this->height) / (Float)(int)2);
HXLINE( 109)		this->offset =  ::openfl::geom::Point_obj::__new((int)0,(int)0);
HXLINE( 111)		this->resize(this->width,this->height);
HXLINE( 112)		this->contextLost = false;
HXLINE( 114)		this->shaderManager =  ::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__new(gl);
HXLINE( 115)		this->spriteBatch =  ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__new(gl,null());
HXLINE( 116)		this->filterManager =  ::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__new(gl,this->transparent);
HXLINE( 117)		this->stencilManager =  ::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__new(gl);
HXLINE( 118)		this->blendModeManager =  ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__new(gl);
HXLINE( 120)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__new();
HXLINE( 121)		this->renderSession->gl = this->gl;
HXLINE( 122)		this->renderSession->drawCount = (int)0;
HXLINE( 123)		this->renderSession->shaderManager = this->shaderManager;
HXLINE( 124)		this->renderSession->filterManager = this->filterManager;
HXLINE( 125)		this->renderSession->blendModeManager = this->blendModeManager;
HXLINE( 126)		this->renderSession->spriteBatch = this->spriteBatch;
HXLINE( 127)		this->renderSession->stencilManager = this->stencilManager;
HXLINE( 128)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE( 129)		this->renderSession->defaultFramebuffer = this->defaultFramebuffer;
HXLINE( 130)		this->renderSession->projectionMatrix = this->projectionMatrix;
HXLINE( 132)		this->maskManager =  ::openfl::_internal::renderer::opengl::utils::GLMaskManager_obj::__new(this->renderSession);
HXLINE( 133)		this->renderSession->maskManager = this->maskManager;
HXLINE( 135)		this->shaderManager->setShader(this->shaderManager->defaultShader,null());
HXLINE( 137)		{
HXLINE( 137)			Int cap = gl->DEPTH_TEST;
HXDLIN( 137)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable(cap);
            		}
HXLINE( 138)		{
HXLINE( 138)			Int cap1 = gl->CULL_FACE;
HXDLIN( 138)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable(cap1);
            		}
HXLINE( 140)		{
HXLINE( 140)			Int cap2 = gl->BLEND;
HXDLIN( 140)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable(cap2);
            		}
HXLINE( 141)		{
HXLINE( 141)			Bool alpha = this->transparent;
HXDLIN( 141)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask(true,true,true,alpha);
            		}
            	}

Dynamic GLRenderer_obj::__CreateEmpty() { return new GLRenderer_obj; }

hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::lime::graphics::GLRenderContext gl,hx::Null< Bool >  __o_transparent,hx::Null< Bool >  __o_antialias,hx::Null< Bool >  __o_preserveDrawingBuffer)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(__o_width,__o_height,gl,__o_transparent,__o_antialias,__o_preserveDrawingBuffer);
	return _hx_result;
}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

void GLRenderer_obj::destroy(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","destroy",0xb1ffe0f8,"openfl._internal.renderer.opengl.GLRenderer.destroy","openfl/_internal/renderer/opengl/GLRenderer.hx",146,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE( 151)		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = null();
HXLINE( 153)		this->projection = null();
HXLINE( 154)		this->offset = null();
HXLINE( 156)		this->shaderManager->destroy();
HXLINE( 157)		this->spriteBatch->destroy();
HXLINE( 158)		this->maskManager->destroy();
HXLINE( 159)		this->filterManager->destroy();
HXLINE( 161)		this->shaderManager = null();
HXLINE( 162)		this->spriteBatch = null();
HXLINE( 163)		this->maskManager = null();
HXLINE( 164)		this->filterManager = null();
HXLINE( 166)		this->gl = null();
HXLINE( 168)		this->renderSession = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,destroy,(void))

void GLRenderer_obj::setViewport(Int x,Int y,Int width,Int height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setViewport",0x049ca126,"openfl._internal.renderer.opengl.GLRenderer.setViewport","openfl/_internal/renderer/opengl/GLRenderer.hx",173,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 173)		Bool _hx_tmp;
HXDLIN( 173)		Bool _hx_tmp1;
HXDLIN( 173)		Bool _hx_tmp2;
HXDLIN( 173)		if ((this->vpX == x)) {
HXLINE( 173)			_hx_tmp2 = (this->vpY == y);
            		}
            		else {
HXLINE( 173)			_hx_tmp2 = false;
            		}
HXDLIN( 173)		if (_hx_tmp2) {
HXLINE( 173)			_hx_tmp1 = (this->vpWidth == width);
            		}
            		else {
HXLINE( 173)			_hx_tmp1 = false;
            		}
HXDLIN( 173)		if (_hx_tmp1) {
HXLINE( 173)			_hx_tmp = (this->vpHeight == height);
            		}
            		else {
HXLINE( 173)			_hx_tmp = false;
            		}
HXDLIN( 173)		if (!(_hx_tmp)) {
HXLINE( 174)			this->vpX = x;
HXLINE( 175)			this->vpY = y;
HXLINE( 176)			this->vpWidth = width;
HXLINE( 177)			this->vpHeight = height;
HXLINE( 178)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport(x,y,width,height);
HXLINE( 179)			this->setOrtho(x,y,width,height);
HXLINE( 180)			this->viewport->setTo(x,y,width,height);
            		}
            	}


void GLRenderer_obj::setOrtho(Float x,Float y,Float width,Float height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setOrtho",0x80654a78,"openfl._internal.renderer.opengl.GLRenderer.setOrtho","openfl/_internal/renderer/opengl/GLRenderer.hx",184,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 185)		HX_VARI(  ::openfl::geom::Matrix,o) = this->projectionMatrix;
HXLINE( 186)		o->identity();
HXLINE( 187)		o->a = (((Float)(int)1 / (Float)width) * (int)2);
HXLINE( 188)		o->d = (((Float)(int)-1 / (Float)height) * (int)2);
HXLINE( 189)		Float _hx_tmp = (x * o->a);
HXDLIN( 189)		o->tx = ((int)-1 - _hx_tmp);
HXLINE( 190)		Float _hx_tmp1 = (y * o->d);
HXDLIN( 190)		o->ty = ((int)1 - _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderer_obj,setOrtho,(void))

void GLRenderer_obj::handleContextLost( ::Dynamic event){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextLost",0x032f5229,"openfl._internal.renderer.opengl.GLRenderer.handleContextLost","openfl/_internal/renderer/opengl/GLRenderer.hx",217,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 219)		 ::Dynamic(event->__Field(HX_("preventDefault",c9,2c,a5,67),hx::paccDynamic))();
HXLINE( 220)		this->contextLost = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,handleContextLost,(void))

void GLRenderer_obj::handleContextRestored(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextRestored",0x3ebbac1b,"openfl._internal.renderer.opengl.GLRenderer.handleContextRestored","openfl/_internal/renderer/opengl/GLRenderer.hx",225,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE( 245)		HX_VARI(  ::lime::graphics::GLRenderContext,gl) = this->gl;
HXLINE( 246)		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId++;
HXLINE( 248)		this->shaderManager->setContext(gl);
HXLINE( 249)		this->spriteBatch->setContext(gl);
HXLINE( 250)		this->maskManager->setContext(gl);
HXLINE( 251)		this->filterManager->setContext(gl);
HXLINE( 253)		this->renderSession->gl = gl;
HXLINE( 258)		this->defaultFramebuffer = null();
HXLINE( 261)		{
HXLINE( 261)			Int cap = gl->DEPTH_TEST;
HXDLIN( 261)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable(cap);
            		}
HXLINE( 262)		{
HXLINE( 262)			Int cap1 = gl->CULL_FACE;
HXDLIN( 262)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable(cap1);
            		}
HXLINE( 264)		{
HXLINE( 264)			Int cap2 = gl->BLEND;
HXDLIN( 264)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable(cap2);
            		}
HXLINE( 265)		{
HXLINE( 265)			Bool alpha = this->transparent;
HXDLIN( 265)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask(true,true,true,alpha);
            		}
HXLINE( 267)		this->setViewport((int)0,(int)0,this->width,this->height);
HXLINE( 276)		this->contextLost = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,handleContextRestored,(void))

void GLRenderer_obj::render( ::openfl::display::Stage stage){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",281,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
HXLINE( 283)		if (this->contextLost) {
HXLINE( 283)			return;
            		}
HXLINE( 287)		HX_VARI(  ::lime::graphics::GLRenderContext,gl) = this->gl;
HXLINE( 288)		this->setViewport((int)0,(int)0,this->width,this->height);
HXLINE( 290)		{
HXLINE( 290)			Int target = gl->FRAMEBUFFER;
HXDLIN( 290)			HX_VARI(  ::lime::graphics::opengl::GLFramebuffer,framebuffer) = this->defaultFramebuffer;
HXDLIN( 290)			{
HXLINE( 290)				Int framebuffer1;
HXDLIN( 290)				Bool _hx_tmp = hx::IsNull( framebuffer );
HXDLIN( 290)				if (_hx_tmp) {
HXLINE( 290)					framebuffer1 = (int)0;
            				}
            				else {
HXLINE( 290)					framebuffer1 = framebuffer->id;
            				}
HXDLIN( 290)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer(target,framebuffer1);
            			}
            		}
HXLINE( 292)		Bool _hx_tmp1 = this->transparent;
HXDLIN( 292)		if (_hx_tmp1) {
HXLINE( 294)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
            		}
            		else {
HXLINE( 298)			Float _hx_tmp2 = stage->_hx___colorSplit->__get((int)0);
HXDLIN( 298)			Float _hx_tmp3 = stage->_hx___colorSplit->__get((int)1);
HXDLIN( 298)			Float _hx_tmp4 = stage->_hx___colorSplit->__get((int)2);
HXDLIN( 298)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color(_hx_tmp2,_hx_tmp3,_hx_tmp4,(int)1);
            		}
HXLINE( 302)		{
HXLINE( 302)			Int mask = gl->COLOR_BUFFER_BIT;
HXDLIN( 302)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask);
            		}
HXLINE( 303)		this->renderDisplayObject(stage,this->projection,null());
            	}


void GLRenderer_obj::renderDisplayObject( ::openfl::display::DisplayObject displayObject, ::openfl::geom::Point projection, ::lime::graphics::opengl::GLFramebuffer buffer){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderDisplayObject",0x5792fa69,"openfl._internal.renderer.opengl.GLRenderer.renderDisplayObject","openfl/_internal/renderer/opengl/GLRenderer.hx",331,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayObject,"displayObject")
            	HX_STACK_ARG(projection,"projection")
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 333)		this->renderSession->blendModeManager->setBlendMode((int)10,null());
HXLINE( 335)		this->renderSession->drawCount = (int)0;
HXLINE( 336)		this->renderSession->currentBlendMode = null();
HXLINE( 338)		this->spriteBatch->begin(this->renderSession,null());
HXLINE( 339)		this->filterManager->begin(this->renderSession,buffer);
HXLINE( 340)		displayObject->_hx___renderGL(this->renderSession);
HXLINE( 342)		this->spriteBatch->finish();
            	}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderDisplayObject,(void))

void GLRenderer_obj::resize(Int width,Int height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",347,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 349)		this->width = width;
HXLINE( 350)		this->height = height;
HXLINE( 352)		this->super::resize(width,height);
HXLINE( 354)		this->setViewport((int)0,(int)0,width,height);
HXLINE( 356)		this->projection->x = ((Float)width / (Float)(int)2);
HXLINE( 357)		this->projection->y = ((Float)-(height) / (Float)(int)2);
            	}


Int GLRenderer_obj::glContextId;

::Array< ::Dynamic> GLRenderer_obj::glContexts;

void GLRenderer_obj::renderBitmap( ::openfl::display::DisplayObject shape, ::openfl::_internal::renderer::RenderSession renderSession,hx::Null< Bool >  __o_smooth){
Bool smooth = __o_smooth.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderBitmap",0xcc852727,"openfl._internal.renderer.opengl.GLRenderer.renderBitmap","openfl/_internal/renderer/opengl/GLRenderer.hx",308,0xb2b97130)
            	HX_STACK_ARG(shape,"shape")
            	HX_STACK_ARG(renderSession,"renderSession")
            	HX_STACK_ARG(smooth,"smooth")
HXLINE( 310)		Bool _hx_tmp;
HXDLIN( 310)		if (!(!(shape->_hx___renderable))) {
HXLINE( 310)			_hx_tmp = (shape->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 310)			_hx_tmp = true;
            		}
HXDLIN( 310)		if (_hx_tmp) {
HXLINE( 310)			return;
            		}
HXLINE( 311)		Bool _hx_tmp1;
HXDLIN( 311)		Bool _hx_tmp2 = hx::IsNotNull( shape->_hx___graphics );
HXDLIN( 311)		if (_hx_tmp2) {
HXLINE( 311)			_hx_tmp1 = hx::IsNull( shape->_hx___graphics->_hx___bitmap );
            		}
            		else {
HXLINE( 311)			_hx_tmp1 = true;
            		}
HXDLIN( 311)		if (_hx_tmp1) {
HXLINE( 311)			return;
            		}
HXLINE( 313)		HX_VARI(  ::openfl::geom::Rectangle,rect) = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE( 314)		HX_VARI(  ::openfl::geom::Matrix,matrix) = ::openfl::geom::Matrix_obj::_hx___temp;
HXLINE( 316)		rect->setEmpty();
HXLINE( 317)		matrix->identity();
HXLINE( 319)		shape->_hx___getBounds(rect,matrix);
HXLINE( 321)		HX_VARI(  ::openfl::display::BitmapData,bitmap) = shape->_hx___graphics->_hx___bitmap;
HXLINE( 323)		matrix->translate(shape->_hx___graphics->_hx___bounds->x,shape->_hx___graphics->_hx___bounds->y);
HXLINE( 324)		matrix->concat(shape->_hx___renderTransform);
HXLINE( 326)		renderSession->spriteBatch->renderBitmapData(bitmap,smooth,matrix,shape->_hx___worldColorTransform,shape->_hx___worldAlpha,shape->_hx___blendMode,null(),(int)0,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderBitmap,(void))


GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(contextLost,"contextLost");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(_glContextId,"_glContextId");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(vpX,"vpX");
	HX_MARK_MEMBER_NAME(vpY,"vpY");
	HX_MARK_MEMBER_NAME(vpWidth,"vpWidth");
	HX_MARK_MEMBER_NAME(vpHeight,"vpHeight");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(contextLost,"contextLost");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(_glContextId,"_glContextId");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(vpX,"vpX");
	HX_VISIT_MEMBER_NAME(vpY,"vpY");
	HX_VISIT_MEMBER_NAME(vpWidth,"vpWidth");
	HX_VISIT_MEMBER_NAME(vpHeight,"vpHeight");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { return hx::Val( vpX); }
		if (HX_FIELD_EQ(inName,"vpY") ) { return hx::Val( vpY); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return hx::Val( view); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return hx::Val( options); }
		if (HX_FIELD_EQ(inName,"__stage") ) { return hx::Val( _hx___stage); }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { return hx::Val( vpWidth); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { return hx::Val( vpHeight); }
		if (HX_FIELD_EQ(inName,"setOrtho") ) { return hx::Val( setOrtho_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return hx::Val( projection); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contextLost") ) { return hx::Val( contextLost); }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return hx::Val( maskManager); }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return hx::Val( spriteBatch); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return hx::Val( setViewport_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { return hx::Val( _glContextId); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { return hx::Val( filterManager); }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return hx::Val( shaderManager); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return hx::Val( stencilManager); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return hx::Val( blendModeManager); }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return hx::Val( projectionMatrix); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleContextLost") ) { return hx::Val( handleContextLost_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return hx::Val( defaultFramebuffer); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDisplayObject") ) { return hx::Val( renderDisplayObject_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { return hx::Val( preserveDrawingBuffer); }
		if (HX_FIELD_EQ(inName,"handleContextRestored") ) { return hx::Val( handleContextRestored_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool GLRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { outValue = glContexts; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { outValue = glContextId; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBitmap") ) { outValue = renderBitmap_dyn(); return true; }
	}
	return false;
}

hx::Val GLRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { vpX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpY") ) { vpY=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { vpWidth=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { vpHeight=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contextLost") ) { contextLost=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::GLMaskManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { _glContextId=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { preserveDrawingBuffer=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { glContexts=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { glContextId=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"));
	outFields->push(HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24"));
	outFields->push(HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"));
	outFields->push(HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17"));
	outFields->push(HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b"));
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"));
	outFields->push(HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"));
	outFields->push(HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"));
	outFields->push(HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00"));
	outFields->push(HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00"));
	outFields->push(HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50"));
	outFields->push(HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(GLRenderer_obj,blendModeManager),HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,contextLost),HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(GLRenderer_obj,defaultFramebuffer),HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(GLRenderer_obj,filterManager),HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,_glContextId),HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLMaskManager*/ ,(int)offsetof(GLRenderer_obj,maskManager),HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,preserveDrawingBuffer),HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(GLRenderer_obj,shaderManager),HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(GLRenderer_obj,spriteBatch),HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(GLRenderer_obj,stencilManager),HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,_hx___stage),HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpX),HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpY),HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpWidth),HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpHeight),HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GLRenderer_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GLRenderer_obj::glContextId,HX_HCSTRING("glContextId","\xc5","\x08","\xb7","\xb1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GLRenderer_obj::glContexts,HX_HCSTRING("glContexts","\xe9","\xde","\xab","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GLRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"),
	HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17"),
	HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b"),
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"),
	HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"),
	HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00"),
	HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00"),
	HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50"),
	HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setViewport","\x28","\x16","\x06","\xcd"),
	HX_HCSTRING("setOrtho","\x36","\x80","\x61","\x43"),
	HX_HCSTRING("handleContextLost","\xab","\x74","\xc9","\x22"),
	HX_HCSTRING("handleContextRestored","\x9d","\x37","\x26","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderDisplayObject","\x6b","\x41","\xdc","\x2b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void GLRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#endif

hx::Class GLRenderer_obj::__mClass;

static ::String GLRenderer_obj_sStaticFields[] = {
	HX_HCSTRING("glContextId","\xc5","\x08","\xb7","\xb1"),
	HX_HCSTRING("glContexts","\xe9","\xde","\xab","\x64"),
	HX_HCSTRING("renderBitmap","\xe5","\x13","\x62","\x60"),
	::String(null())
};

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &GLRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = GLRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLRenderer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLRenderer_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","boot",0x14988574,"openfl._internal.renderer.opengl.GLRenderer.boot","openfl/_internal/renderer/opengl/GLRenderer.hx",46,0xb2b97130)
HXLINE(  46)		glContextId = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","boot",0x14988574,"openfl._internal.renderer.opengl.GLRenderer.boot","openfl/_internal/renderer/opengl/GLRenderer.hx",47,0xb2b97130)
HXLINE(  47)		glContexts = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl