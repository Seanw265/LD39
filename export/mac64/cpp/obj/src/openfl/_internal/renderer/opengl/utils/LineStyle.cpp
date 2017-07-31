// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

void LineStyle_obj::__construct(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.LineStyle","new",0x3c350e8e,"openfl._internal.renderer.opengl.utils.LineStyle.new","openfl/_internal/renderer/opengl/utils/DrawPath.hx",515,0xf0fd7951)
            	HX_STACK_THIS(this)
HXLINE( 516)		this->width = (int)0;
HXLINE( 517)		this->color = (int)0;
HXLINE( 518)		this->alpha = (int)1;
HXLINE( 519)		this->scaleMode = (int)2;
HXLINE( 520)		this->caps = (int)1;
HXLINE( 521)		this->joints = (int)2;
HXLINE( 522)		this->miterLimit = (int)3;
            	}

Dynamic LineStyle_obj::__CreateEmpty() { return new LineStyle_obj; }

hx::ObjectPtr< LineStyle_obj > LineStyle_obj::__new()
{
	hx::ObjectPtr< LineStyle_obj > _hx_result = new LineStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic LineStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineStyle_obj > _hx_result = new LineStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}


LineStyle_obj::LineStyle_obj()
{
}

void LineStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineStyle);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(caps,"caps");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_END_CLASS();
}

void LineStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(caps,"caps");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
}

hx::Val LineStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { return hx::Val( caps); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return hx::Val( joints); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return hx::Val( scaleMode); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return hx::Val( miterLimit); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LineStyle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { caps=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"));
	outFields->push(HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LineStyle_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LineStyle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(LineStyle_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LineStyle_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LineStyle_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LineStyle_obj,caps),HX_HCSTRING("caps","\x21","\x1c","\xba","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LineStyle_obj,joints),HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91")},
	{hx::fsFloat,(int)offsetof(LineStyle_obj,miterLimit),HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LineStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String LineStyle_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"),
	HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"),
	HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"),
	::String(null()) };

static void LineStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#endif

hx::Class LineStyle_obj::__mClass;

void LineStyle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.LineStyle","\x9c","\x6f","\x13","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LineStyle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
