// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

void GLStack_obj::__construct( ::lime::graphics::GLRenderContext gl){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","new",0xd9c5ae34,"openfl._internal.renderer.opengl.utils.GLStack.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1184,0xd295150c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(gl,"gl")
HXLINE(1186)		this->lastIndex = (int)0;
HXLINE(1191)		this->gl = gl;
HXLINE(1192)		this->buckets = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1193)		this->lastIndex = (int)0;
            	}

Dynamic GLStack_obj::__CreateEmpty() { return new GLStack_obj; }

hx::ObjectPtr< GLStack_obj > GLStack_obj::__new( ::lime::graphics::GLRenderContext gl)
{
	hx::ObjectPtr< GLStack_obj > _hx_result = new GLStack_obj();
	_hx_result->__construct(gl);
	return _hx_result;
}

Dynamic GLStack_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLStack_obj > _hx_result = new GLStack_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void GLStack_obj::reset(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","reset",0x66cc44a3,"openfl._internal.renderer.opengl.utils.GLStack.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1196,0xd295150c)
            	HX_STACK_THIS(this)
HXLINE(1197)		this->buckets = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1198)		this->lastIndex = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,reset,(void))

void GLStack_obj::upload(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","upload",0x0fd148ad,"openfl._internal.renderer.opengl.utils.GLStack.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1202,0xd295150c)
            	HX_STACK_THIS(this)
HXLINE(1202)		HX_VARI( Int,_g) = (int)0;
HXDLIN(1202)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->buckets;
HXDLIN(1202)		while((_g < _g1->length)){
HXLINE(1202)			HX_VARI(  ::openfl::_internal::renderer::opengl::utils::GLBucket,bucket) = _g1->__get(_g).StaticCast<  ::openfl::_internal::renderer::opengl::utils::GLBucket >();
HXDLIN(1202)			++_g;
HXLINE(1204)			Bool _hx_tmp = bucket->dirty;
HXDLIN(1204)			if (_hx_tmp) {
HXLINE(1205)				bucket->upload();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,upload,(void))


GLStack_obj::GLStack_obj()
{
}

void GLStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLStack);
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(buckets,"buckets");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(buckets,"buckets");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

hx::Val GLStack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return hx::Val( upload_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { return hx::Val( buckets); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return hx::Val( lastIndex); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLStack_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { buckets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"));
	outFields->push(HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLStack_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLStack_obj,lastIndex),HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLStack_obj,buckets),HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLStack_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLStack_obj_sStaticStorageInfo = 0;
#endif

static ::String GLStack_obj_sMemberFields[] = {
	HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"),
	HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void GLStack_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLStack_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#endif

hx::Class GLStack_obj::__mClass;

void GLStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLStack","\x42","\xc4","\x65","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLStack_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLStack_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLStack_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLStack_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLStack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLStack_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
