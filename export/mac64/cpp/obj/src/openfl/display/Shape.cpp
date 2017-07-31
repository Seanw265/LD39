// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace display{

void Shape_obj::__construct(){
            	HX_STACK_FRAME("openfl.display.Shape","new",0x7b6756e9,"openfl.display.Shape.new","openfl/display/Shape.hx",15,0xe963f3a9)
            	HX_STACK_THIS(this)
HXLINE(  15)		super::__construct();
            	}

Dynamic Shape_obj::__CreateEmpty() { return new Shape_obj; }

hx::ObjectPtr< Shape_obj > Shape_obj::__new()
{
	hx::ObjectPtr< Shape_obj > _hx_result = new Shape_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shape_obj > _hx_result = new Shape_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::display::Graphics Shape_obj::get_graphics(){
            	HX_STACK_FRAME("openfl.display.Shape","get_graphics",0xb4a78d2b,"openfl.display.Shape.get_graphics","openfl/display/Shape.hx",27,0xe963f3a9)
            	HX_STACK_THIS(this)
HXLINE(  29)		Bool _hx_tmp = hx::IsNull( this->_hx___graphics );
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			this->_hx___graphics =  ::openfl::display::Graphics_obj::__new();
HXLINE(  32)			this->_hx___graphics->_hx___owner = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  36)		return this->_hx___graphics;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_graphics,return )


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return hx::Val( inCallProp == hx::paccAlways ? get_graphics() : graphics); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return hx::Val( get_graphics_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Shape_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast<  ::openfl::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Shape_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(Shape_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Shape_obj_sStaticStorageInfo = 0;
#endif

static ::String Shape_obj_sMemberFields[] = {
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	::String(null()) };

static void Shape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#endif

hx::Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shape","\x77","\xae","\x8d","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Shape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Shape_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
