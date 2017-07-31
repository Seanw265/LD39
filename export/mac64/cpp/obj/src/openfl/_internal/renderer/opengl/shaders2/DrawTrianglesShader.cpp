// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

void DrawTrianglesShader_obj::__construct( ::lime::graphics::GLRenderContext gl){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader","new",0x507c6298,"openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader.new","openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.hx",10,0x86c1b977)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(gl,"gl")
HXLINE(  11)		super::__construct(gl);
HXLINE(  13)		this->vertexSrc = ::Array_obj< ::String >::__new(11)->init(0,((HX_("attribute vec2 ",fe,43,ff,be) + HX_("openfl_aPosition",7b,19,f2,d0)) + HX_(";",3b,00,00,00)))->init(1,((HX_("attribute vec2 ",fe,43,ff,be) + HX_("openfl_aTexCoord0",10,9c,05,d4)) + HX_(";",3b,00,00,00)))->init(2,((HX_("attribute vec4 ",bc,45,ff,be) + HX_("openfl_aColor",51,21,0d,bc)) + HX_(";",3b,00,00,00)))->init(3,((HX_("uniform mat3 ",41,cb,75,0c) + HX_("openfl_uProjectionMatrix",16,8b,ff,93)) + HX_(";",3b,00,00,00)))->init(4,HX_("varying vec2 vTexCoord;",a9,1f,fd,58))->init(5,HX_("varying vec4 vColor;",7e,af,e3,9c))->init(6,HX_("void main(void) {",4d,18,fb,21))->init(7,((((HX_("   gl_Position = vec4((",60,ee,15,d9) + HX_("openfl_uProjectionMatrix",16,8b,ff,93)) + HX_(" * vec3(",53,97,95,f8)) + HX_("openfl_aPosition",7b,19,f2,d0)) + HX_(", 1.0)).xy, 0.0, 1.0);",63,9b,3b,23)))->init(8,((HX_("   vTexCoord = ",1f,ae,6f,4a) + HX_("openfl_aTexCoord0",10,9c,05,d4)) + HX_(";",3b,00,00,00)))->init(9,((HX_("   vColor = ",56,06,cb,fb) + HX_("openfl_aColor",51,21,0d,bc)) + HX_(".bgra;",19,42,1b,16)))->init(10,HX_("}",7d,00,00,00));
HXLINE(  31)		this->fragmentSrc = ::Array_obj< ::String >::__new(28)->init(0,HX_("#ifdef GL_ES",2d,5e,36,de))->init(1,HX_("precision lowp float;",81,5f,ad,9a))->init(2,HX_("#endif",75,ed,f7,6e))->init(3,((HX_("uniform sampler2D ",72,47,f0,ca) + HX_("openfl_uSampler0",0e,4f,96,4d)) + HX_(";",3b,00,00,00)))->init(4,((HX_("uniform vec3 ",f5,f7,a8,3d) + HX_("openfl_uColor",bd,58,30,bb)) + HX_(";",3b,00,00,00)))->init(5,((HX_("uniform bool ",ca,cc,4a,c0) + HX_("openfl_uUseTexture",ba,1d,59,c0)) + HX_(";",3b,00,00,00)))->init(6,((HX_("uniform float ",70,08,5a,60) + HX_("openfl_uAlpha",b8,8e,6a,92)) + HX_(";",3b,00,00,00)))->init(7,((HX_("uniform vec4 ",d4,f8,a8,3d) + HX_("openfl_uColorMultiplier",9e,72,0d,28)) + HX_(";",3b,00,00,00)))->init(8,((HX_("uniform vec4 ",d4,f8,a8,3d) + HX_("openfl_uColorOffset",30,10,2f,e8)) + HX_(";",3b,00,00,00)))->init(9,HX_("varying vec2 vTexCoord;",a9,1f,fd,58))->init(10,HX_("varying vec4 vColor;",7e,af,e3,9c))->init(11,HX_("vec4 tmp;",44,84,5b,65))->init(12,HX_("vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {",a7,0a,a9,f9))->init(13,HX_("   vec4 unmultiply = vec4(color.rgb / color.a, color.a);",0f,f7,2c,dd))->init(14,HX_("   vec4 result = unmultiply * tint * multiplier;",32,67,2e,56))->init(15,HX_("   result = result + offset;",d6,2b,93,f8))->init(16,HX_("   result = clamp(result, 0., 1.);",65,22,a3,fc))->init(17,HX_("   result = vec4(result.rgb * result.a, result.a);",1e,90,43,04))->init(18,HX_("   return result;",6e,cd,02,a1))->init(19,HX_("}",7d,00,00,00))->init(20,HX_("void main(void) {",4d,18,fb,21))->init(21,((HX_("   if(",8b,f5,b4,4d) + HX_("openfl_uUseTexture",ba,1d,59,c0)) + HX_(") {",c4,38,1f,00)))->init(22,((HX_("       tmp = texture2D(",27,e2,b6,ea) + HX_("openfl_uSampler0",0e,4f,96,4d)) + HX_(", vTexCoord);",e2,d4,b7,35)))->init(23,HX_("   } else {",b7,76,3c,81))->init(24,((HX_("       tmp = vec4(",3c,04,e2,12) + HX_("openfl_uColor",bd,58,30,bb)) + HX_(", 1.);",83,f0,0c,25)))->init(25,HX_("   }",5d,38,3f,15))->init(26,((((HX_("   gl_FragColor = colorTransform(tmp, vColor, ",b9,15,5b,44) + HX_("openfl_uColorMultiplier",9e,72,0d,28)) + HX_(", ",74,26,00,00)) + HX_("openfl_uColorOffset",30,10,2f,e8)) + HX_(");",f2,23,00,00)))->init(27,HX_("}",7d,00,00,00));
HXLINE(  67)		this->init(null());
            	}

Dynamic DrawTrianglesShader_obj::__CreateEmpty() { return new DrawTrianglesShader_obj; }

hx::ObjectPtr< DrawTrianglesShader_obj > DrawTrianglesShader_obj::__new( ::lime::graphics::GLRenderContext gl)
{
	hx::ObjectPtr< DrawTrianglesShader_obj > _hx_result = new DrawTrianglesShader_obj();
	_hx_result->__construct(gl);
	return _hx_result;
}

Dynamic DrawTrianglesShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawTrianglesShader_obj > _hx_result = new DrawTrianglesShader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void DrawTrianglesShader_obj::init(hx::Null< Bool >  __o_force){
Bool force = __o_force.Default(false);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader","init",0x191299d8,"openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader.init","openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.hx",70,0x86c1b977)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(force,"force")
HXLINE(  71)		this->super::init(force);
HXLINE(  73)		this->getAttribLocation(HX_("openfl_aPosition",7b,19,f2,d0));
HXLINE(  74)		this->getAttribLocation(HX_("openfl_aTexCoord0",10,9c,05,d4));
HXLINE(  75)		this->getAttribLocation(HX_("openfl_aColor",51,21,0d,bc));
HXLINE(  77)		this->getUniformLocation(HX_("openfl_uSampler0",0e,4f,96,4d));
HXLINE(  78)		this->getUniformLocation(HX_("openfl_uProjectionMatrix",16,8b,ff,93));
HXLINE(  79)		this->getUniformLocation(HX_("openfl_uColor",bd,58,30,bb));
HXLINE(  80)		this->getUniformLocation(HX_("openfl_uAlpha",b8,8e,6a,92));
HXLINE(  81)		this->getUniformLocation(HX_("openfl_uUseTexture",ba,1d,59,c0));
HXLINE(  82)		this->getUniformLocation(HX_("openfl_uColorMultiplier",9e,72,0d,28));
HXLINE(  83)		this->getUniformLocation(HX_("openfl_uColorOffset",30,10,2f,e8));
            	}



DrawTrianglesShader_obj::DrawTrianglesShader_obj()
{
}

hx::Val DrawTrianglesShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawTrianglesShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawTrianglesShader_obj_sStaticStorageInfo = 0;
#endif

static ::String DrawTrianglesShader_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void DrawTrianglesShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawTrianglesShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawTrianglesShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawTrianglesShader_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawTrianglesShader_obj::__mClass;

void DrawTrianglesShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader","\xa6","\x76","\x49","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawTrianglesShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DrawTrianglesShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawTrianglesShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawTrianglesShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawTrianglesShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawTrianglesShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
