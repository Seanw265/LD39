// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

void PingPongTexture_obj::__construct( ::lime::graphics::GLRenderContext gl,Int width,Int height,hx::Null< Bool >  __o_smoothing,hx::Null< Bool >  __o_powerOfTwo){
Bool smoothing = __o_smoothing.Default(true);
Bool powerOfTwo = __o_powerOfTwo.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","new",0xbdeddfa2,"openfl._internal.renderer.opengl.utils.PingPongTexture.new","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",10,0x36d315b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(gl,"gl")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(smoothing,"smoothing")
            	HX_STACK_ARG(powerOfTwo,"powerOfTwo")
HXLINE(  24)		this->_hx___swapped = false;
HXLINE(  22)		this->powerOfTwo = true;
HXLINE(  21)		this->useOldTexture = false;
HXLINE(  30)		this->gl = gl;
HXLINE(  31)		this->width = width;
HXLINE(  32)		this->height = height;
HXLINE(  33)		this->smoothing = smoothing;
HXLINE(  34)		this->powerOfTwo = powerOfTwo;
HXLINE(  36)		{
HXLINE(  36)			HX_VARI(  ::openfl::_internal::renderer::opengl::utils::RenderTexture,v) =  ::openfl::_internal::renderer::opengl::utils::RenderTexture_obj::__new(gl,width,height,smoothing,powerOfTwo);
HXDLIN(  36)			Bool _hx_tmp = this->_hx___swapped;
HXDLIN(  36)			if (_hx_tmp) {
HXLINE(  36)				this->_hx___texture1 = v;
            			}
            			else {
HXLINE(  36)				this->_hx___texture0 = v;
            			}
            		}
            	}

Dynamic PingPongTexture_obj::__CreateEmpty() { return new PingPongTexture_obj; }

hx::ObjectPtr< PingPongTexture_obj > PingPongTexture_obj::__new( ::lime::graphics::GLRenderContext gl,Int width,Int height,hx::Null< Bool >  __o_smoothing,hx::Null< Bool >  __o_powerOfTwo)
{
	hx::ObjectPtr< PingPongTexture_obj > _hx_result = new PingPongTexture_obj();
	_hx_result->__construct(gl,width,height,__o_smoothing,__o_powerOfTwo);
	return _hx_result;
}

Dynamic PingPongTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PingPongTexture_obj > _hx_result = new PingPongTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

void PingPongTexture_obj::swap(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","swap",0x75917511,"openfl._internal.renderer.opengl.utils.PingPongTexture.swap","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",39,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE(  40)		this->_hx___swapped = !(this->_hx___swapped);
HXLINE(  41)		 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp;
HXDLIN(  41)		if (this->_hx___swapped) {
HXLINE(  41)			_hx_tmp = this->_hx___texture1;
            		}
            		else {
HXLINE(  41)			_hx_tmp = this->_hx___texture0;
            		}
HXDLIN(  41)		Bool _hx_tmp1 = hx::IsNull( _hx_tmp );
HXDLIN(  41)		if (_hx_tmp1) {
HXLINE(  42)			HX_VARI(  ::openfl::_internal::renderer::opengl::utils::RenderTexture,v) =  ::openfl::_internal::renderer::opengl::utils::RenderTexture_obj::__new(this->gl,this->width,this->height,this->smoothing,this->powerOfTwo);
HXDLIN(  42)			Bool _hx_tmp2 = this->_hx___swapped;
HXDLIN(  42)			if (_hx_tmp2) {
HXLINE(  42)				this->_hx___texture1 = v;
            			}
            			else {
HXLINE(  42)				this->_hx___texture0 = v;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,swap,(void))

void PingPongTexture_obj::clear( ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b, ::Dynamic __o_a, ::Dynamic mask){
 ::Dynamic r = __o_r.Default(0);
 ::Dynamic g = __o_g.Default(0);
 ::Dynamic b = __o_b.Default(0);
 ::Dynamic a = __o_a.Default(0);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","clear",0x2c09554f,"openfl._internal.renderer.opengl.utils.PingPongTexture.clear","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",48,0x36d315b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(mask,"mask")
HXLINE(  48)		 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp;
HXDLIN(  48)		if (this->_hx___swapped) {
HXLINE(  48)			_hx_tmp = this->_hx___texture1;
            		}
            		else {
HXLINE(  48)			_hx_tmp = this->_hx___texture0;
            		}
HXDLIN(  48)		_hx_tmp->clear(r,g,b,a,mask);
            	}


HX_DEFINE_DYNAMIC_FUNC5(PingPongTexture_obj,clear,(void))

void PingPongTexture_obj::resize(Int width,Int height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","resize",0x5cf4bff2,"openfl._internal.renderer.opengl.utils.PingPongTexture.resize","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",52,0x36d315b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  53)		this->width = width;
HXLINE(  54)		this->height = height;
HXLINE(  55)		 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp;
HXDLIN(  55)		if (this->_hx___swapped) {
HXLINE(  55)			_hx_tmp = this->_hx___texture1;
            		}
            		else {
HXLINE(  55)			_hx_tmp = this->_hx___texture0;
            		}
HXDLIN(  55)		_hx_tmp->resize(width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(PingPongTexture_obj,resize,(void))

void PingPongTexture_obj::destroy(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","destroy",0xba46053c,"openfl._internal.renderer.opengl.utils.PingPongTexture.destroy","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",58,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE(  59)		Bool _hx_tmp = hx::IsNotNull( this->_hx___texture0 );
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			this->_hx___texture0->destroy();
HXLINE(  61)			this->_hx___texture0 = null();
            		}
HXLINE(  63)		Bool _hx_tmp1 = hx::IsNotNull( this->_hx___texture1 );
HXDLIN(  63)		if (_hx_tmp1) {
HXLINE(  64)			this->_hx___texture1->destroy();
HXLINE(  65)			this->_hx___texture1 = null();
            		}
HXLINE(  67)		this->_hx___swapped = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,destroy,(void))

 ::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get_renderTexture(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_renderTexture",0x5f93c63e,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_renderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",71,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE(  71)		if (this->_hx___swapped) {
HXLINE(  71)			return this->_hx___texture1;
            		}
            		else {
HXLINE(  71)			return this->_hx___texture0;
            		}
HXDLIN(  71)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_renderTexture,return )

 ::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::set_renderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","set_renderTexture",0x83019e4a,"openfl._internal.renderer.opengl.utils.PingPongTexture.set_renderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",75,0x36d315b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  76)		Bool _hx_tmp = this->_hx___swapped;
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  75)			return (this->_hx___texture1 = v);
            		}
            		else {
HXLINE(  75)			return (this->_hx___texture0 = v);
            		}
HXLINE(  76)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PingPongTexture_obj,set_renderTexture,return )

 ::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get_oldRenderTexture(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_oldRenderTexture",0x32cf6285,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_oldRenderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",84,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE(  84)		if (this->_hx___swapped) {
HXLINE(  84)			return this->_hx___texture0;
            		}
            		else {
HXLINE(  84)			return this->_hx___texture1;
            		}
HXDLIN(  84)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_oldRenderTexture,return )

 ::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::set_oldRenderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","set_oldRenderTexture",0xff8719f9,"openfl._internal.renderer.opengl.utils.PingPongTexture.set_oldRenderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",88,0x36d315b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  89)		Bool _hx_tmp = this->_hx___swapped;
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  88)			return (this->_hx___texture0 = v);
            		}
            		else {
HXLINE(  88)			return (this->_hx___texture1 = v);
            		}
HXLINE(  89)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PingPongTexture_obj,set_oldRenderTexture,return )

 ::lime::graphics::opengl::GLFramebuffer PingPongTexture_obj::get_framebuffer(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_framebuffer",0x3abeb6c6,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_framebuffer","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",97,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE(  97)		 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp;
HXDLIN(  97)		if (this->_hx___swapped) {
HXLINE(  97)			_hx_tmp = this->_hx___texture1;
            		}
            		else {
HXLINE(  97)			_hx_tmp = this->_hx___texture0;
            		}
HXDLIN(  97)		return _hx_tmp->frameBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_framebuffer,return )

 ::lime::graphics::opengl::GLTexture PingPongTexture_obj::get_texture(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_texture",0x93d94a34,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_texture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",101,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE( 101)		if (this->useOldTexture) {
HXLINE( 101)			 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp;
HXDLIN( 101)			if (this->_hx___swapped) {
HXLINE( 101)				_hx_tmp = this->_hx___texture0;
            			}
            			else {
HXLINE( 101)				_hx_tmp = this->_hx___texture1;
            			}
HXDLIN( 101)			return _hx_tmp->texture;
            		}
            		else {
HXLINE( 101)			 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp1;
HXDLIN( 101)			if (this->_hx___swapped) {
HXLINE( 101)				_hx_tmp1 = this->_hx___texture1;
            			}
            			else {
HXLINE( 101)				_hx_tmp1 = this->_hx___texture0;
            			}
HXDLIN( 101)			return _hx_tmp1->texture;
            		}
HXDLIN( 101)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_texture,return )

 ::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get___otherTexture(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get___otherTexture",0xabc4d2d2,"openfl._internal.renderer.opengl.utils.PingPongTexture.get___otherTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",105,0x36d315b1)
            	HX_STACK_THIS(this)
HXLINE( 105)		if (this->_hx___swapped) {
HXLINE( 105)			return this->_hx___texture0;
            		}
            		else {
HXLINE( 105)			return this->_hx___texture1;
            		}
HXDLIN( 105)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get___otherTexture,return )


PingPongTexture_obj::PingPongTexture_obj()
{
}

void PingPongTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PingPongTexture);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(useOldTexture,"useOldTexture");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(_hx___swapped,"__swapped");
	HX_MARK_MEMBER_NAME(_hx___texture0,"__texture0");
	HX_MARK_MEMBER_NAME(_hx___texture1,"__texture1");
	HX_MARK_END_CLASS();
}

void PingPongTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(useOldTexture,"useOldTexture");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(_hx___swapped,"__swapped");
	HX_VISIT_MEMBER_NAME(_hx___texture0,"__texture0");
	HX_VISIT_MEMBER_NAME(_hx___texture1,"__texture1");
}

hx::Val PingPongTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { return hx::Val( swap_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_texture()); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing); }
		if (HX_FIELD_EQ(inName,"__swapped") ) { return hx::Val( _hx___swapped); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return hx::Val( powerOfTwo); }
		if (HX_FIELD_EQ(inName,"__texture0") ) { return hx::Val( _hx___texture0); }
		if (HX_FIELD_EQ(inName,"__texture1") ) { return hx::Val( _hx___texture1); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_framebuffer()); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return hx::Val( get_texture_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderTexture") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_renderTexture()); }
		if (HX_FIELD_EQ(inName,"useOldTexture") ) { return hx::Val( useOldTexture); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__otherTexture") ) { if (inCallProp == hx::paccAlways) return hx::Val(get___otherTexture()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_framebuffer") ) { return hx::Val( get_framebuffer_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oldRenderTexture") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_oldRenderTexture()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_renderTexture") ) { return hx::Val( get_renderTexture_dyn()); }
		if (HX_FIELD_EQ(inName,"set_renderTexture") ) { return hx::Val( set_renderTexture_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get___otherTexture") ) { return hx::Val( get___otherTexture_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_oldRenderTexture") ) { return hx::Val( get_oldRenderTexture_dyn()); }
		if (HX_FIELD_EQ(inName,"set_oldRenderTexture") ) { return hx::Val( set_oldRenderTexture_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PingPongTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__swapped") ) { _hx___swapped=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { powerOfTwo=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture0") ) { _hx___texture0=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture1") ) { _hx___texture1=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderTexture") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_renderTexture(inValue) ); }
		if (HX_FIELD_EQ(inName,"useOldTexture") ) { useOldTexture=inValue.Cast< Bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oldRenderTexture") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_oldRenderTexture(inValue) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PingPongTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderTexture","\x25","\x3c","\xce","\x9a"));
	outFields->push(HX_HCSTRING("oldRenderTexture","\xfe","\x56","\x7c","\x26"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8"));
	outFields->push(HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09"));
	outFields->push(HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09"));
	outFields->push(HX_HCSTRING("__otherTexture","\x0b","\x87","\xb1","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PingPongTexture_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(PingPongTexture_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(PingPongTexture_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(PingPongTexture_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,useOldTexture),HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,powerOfTwo),HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,_hx___swapped),HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(int)offsetof(PingPongTexture_obj,_hx___texture0),HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(int)offsetof(PingPongTexture_obj,_hx___texture1),HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PingPongTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String PingPongTexture_obj_sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a"),
	HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"),
	HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8"),
	HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09"),
	HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_renderTexture","\x7c","\x47","\x3e","\xa1"),
	HX_HCSTRING("set_renderTexture","\x88","\x1f","\xac","\xc4"),
	HX_HCSTRING("get_oldRenderTexture","\x07","\xbc","\xe6","\x44"),
	HX_HCSTRING("set_oldRenderTexture","\x7b","\x73","\x9e","\x11"),
	HX_HCSTRING("get_framebuffer","\x84","\xcc","\x29","\x3b"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("get___otherTexture","\xd4","\x67","\x4b","\xdf"),
	::String(null()) };

static void PingPongTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PingPongTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PingPongTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PingPongTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class PingPongTexture_obj::__mClass;

void PingPongTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PingPongTexture","\xb0","\x26","\x21","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PingPongTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PingPongTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PingPongTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PingPongTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PingPongTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PingPongTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils