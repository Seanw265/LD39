// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif

namespace lime{
namespace utils{

void GLUtils_obj::__construct() { }

Dynamic GLUtils_obj::__CreateEmpty() { return new GLUtils_obj; }

hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::graphics::opengl::GLShader GLUtils_obj::compileShader(::String source,Int type){
            	HX_STACK_FRAME("lime.utils.GLUtils","compileShader",0x55bd7600,"lime.utils.GLUtils.compileShader","lime/utils/GLUtils.hx",12,0xaa32e64a)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(type,"type")
HXLINE(  14)		Int _hx_tmp = ::lime::graphics::opengl::GL_obj::get_version();
HXDLIN(  14)		Int _hx_tmp1 = ( (Int)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader(type)) );
HXDLIN(  14)		HX_VARI(  ::lime::graphics::opengl::GLShader,shader) =  ::lime::graphics::opengl::GLShader_obj::__new(_hx_tmp,_hx_tmp1);
HXLINE(  15)		{
HXLINE(  15)			Int shader1 = ( (Int)(shader->id) );
HXDLIN(  15)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source(shader1,source);
            		}
HXLINE(  16)		{
HXLINE(  16)			Int shader2 = ( (Int)(shader->id) );
HXDLIN(  16)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader(shader2);
            		}
HXLINE(  18)		Int shader3 = ( (Int)(shader->id) );
HXDLIN(  18)		Int _hx_tmp2 = ( (Int)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter(shader3,(int)35713)) );
HXDLIN(  18)		if ((_hx_tmp2 == (int)0)) {
HXLINE(  20)			switch((int)(type)){
            				case (int)35632: {
HXLINE(  23)					HX_STACK_DO_THROW(HX_("Error compiling fragment shader",4d,d0,be,e3));
            				}
            				break;
            				case (int)35633: {
HXLINE(  22)					HX_STACK_DO_THROW(HX_("Error compiling vertex shader",39,c9,c1,b2));
            				}
            				break;
            				default:{
HXLINE(  24)					HX_STACK_DO_THROW(HX_("Error compiling unknown shader type",d7,06,f2,00));
            				}
            			}
            		}
HXLINE(  30)		return shader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

 ::lime::graphics::opengl::GLProgram GLUtils_obj::createProgram(::String vertexSource,::String fragmentSource){
            	HX_STACK_FRAME("lime.utils.GLUtils","createProgram",0x574727f0,"lime.utils.GLUtils.createProgram","lime/utils/GLUtils.hx",35,0xaa32e64a)
            	HX_STACK_ARG(vertexSource,"vertexSource")
            	HX_STACK_ARG(fragmentSource,"fragmentSource")
HXLINE(  37)		HX_VARI(  ::lime::graphics::opengl::GLShader,vertexShader) = ::lime::utils::GLUtils_obj::compileShader(vertexSource,(int)35633);
HXLINE(  38)		HX_VARI(  ::lime::graphics::opengl::GLShader,fragmentShader) = ::lime::utils::GLUtils_obj::compileShader(fragmentSource,(int)35632);
HXLINE(  40)		Int _hx_tmp = ::lime::graphics::opengl::GL_obj::get_version();
HXDLIN(  40)		Int _hx_tmp1 = ( (Int)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program()) );
HXDLIN(  40)		HX_VARI(  ::lime::graphics::opengl::GLProgram,program) =  ::lime::graphics::opengl::GLProgram_obj::__new(_hx_tmp,_hx_tmp1);
HXLINE(  41)		{
HXLINE(  41)			program->attach(vertexShader);
HXDLIN(  41)			{
HXLINE(  41)				Int program1 = ( (Int)(program->id) );
HXDLIN(  41)				Int shader = ( (Int)(vertexShader->id) );
HXDLIN(  41)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader(program1,shader);
            			}
            		}
HXLINE(  42)		{
HXLINE(  42)			program->attach(fragmentShader);
HXDLIN(  42)			{
HXLINE(  42)				Int program2 = ( (Int)(program->id) );
HXDLIN(  42)				Int shader1 = ( (Int)(fragmentShader->id) );
HXDLIN(  42)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader(program2,shader1);
            			}
            		}
HXLINE(  43)		{
HXLINE(  43)			Int program3 = ( (Int)(program->id) );
HXDLIN(  43)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_link_program(program3);
            		}
HXLINE(  45)		Int program4 = ( (Int)(program->id) );
HXDLIN(  45)		Int _hx_tmp2 = ( (Int)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_parameter(program4,(int)35714)) );
HXDLIN(  45)		if ((_hx_tmp2 == (int)0)) {
HXLINE(  47)			HX_STACK_DO_THROW(HX_("Unable to initialize the shader program.",3e,8b,8a,20));
            		}
HXLINE(  51)		return program;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLUtils_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLUtils_obj_sStaticStorageInfo = 0;
#endif

static void GLUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String GLUtils_obj_sStaticFields[] = {
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	::String(null())
};

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLUtils_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLUtils_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLUtils_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils