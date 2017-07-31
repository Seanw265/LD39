// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif

namespace openfl{
namespace display{

void GraphicsSolidFill_obj::__construct(hx::Null< Int >  __o_color,hx::Null< Float >  __o_alpha){
Int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
            	HX_STACK_FRAME("openfl.display.GraphicsSolidFill","new",0x800a4bcb,"openfl.display.GraphicsSolidFill.new","openfl/display/GraphicsSolidFill.hx",18,0x9b142c07)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(color,"color")
            	HX_STACK_ARG(alpha,"alpha")
HXLINE(  20)		this->alpha = alpha;
HXLINE(  21)		this->color = color;
HXLINE(  22)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::SOLID_dyn();
HXLINE(  23)		this->_hx___graphicsFillType = ::openfl::display::GraphicsFillType_obj::SOLID_FILL_dyn();
            	}

Dynamic GraphicsSolidFill_obj::__CreateEmpty() { return new GraphicsSolidFill_obj; }

hx::ObjectPtr< GraphicsSolidFill_obj > GraphicsSolidFill_obj::__new(hx::Null< Int >  __o_color,hx::Null< Float >  __o_alpha)
{
	hx::ObjectPtr< GraphicsSolidFill_obj > _hx_result = new GraphicsSolidFill_obj();
	_hx_result->__construct(__o_color,__o_alpha);
	return _hx_result;
}

Dynamic GraphicsSolidFill_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsSolidFill_obj > _hx_result = new GraphicsSolidFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsSolidFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsSolidFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


GraphicsSolidFill_obj::GraphicsSolidFill_obj()
{
}

void GraphicsSolidFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsSolidFill);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsSolidFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
}

hx::Val GraphicsSolidFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return hx::Val( _hx___graphicsFillType); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GraphicsSolidFill_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast< ::hx::EnumBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsSolidFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsSolidFill_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GraphicsSolidFill_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsInt,(int)offsetof(GraphicsSolidFill_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsSolidFill_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsSolidFill_obj,_hx___graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GraphicsSolidFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsSolidFill_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void GraphicsSolidFill_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsSolidFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsSolidFill_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsSolidFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsSolidFill_obj::__mClass;

void GraphicsSolidFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsSolidFill","\x59","\x0a","\xd8","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsSolidFill_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsSolidFill_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsSolidFill_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsSolidFill_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsSolidFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsSolidFill_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display