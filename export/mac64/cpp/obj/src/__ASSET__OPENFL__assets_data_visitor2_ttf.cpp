// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__OPENFL__assets_data_visitor2_ttf
#include <__ASSET__OPENFL__assets_data_visitor2_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif


void __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__construct(){
            	HX_STACK_FRAME("__ASSET__OPENFL__assets_data_visitor2_ttf","new",0x14b2be96,"__ASSET__OPENFL__assets_data_visitor2_ttf.new","DefaultAssetLibrary.hx",1115,0x0fc48912)
            	HX_STACK_THIS(this)
HXLINE(1115)		this->_hx___fontPath = HX_("assets/data/visitor2.ttf",b5,24,16,61);
HXDLIN(1115)		this->name = HX_("Visitor TT2 BRK",7b,45,e4,27);
HXDLIN(1115)		super::__construct(null());
            	}

Dynamic __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__CreateEmpty() { return new __ASSET__OPENFL__assets_data_visitor2_ttf_obj; }

hx::ObjectPtr< __ASSET__OPENFL__assets_data_visitor2_ttf_obj > __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__new()
{
	hx::ObjectPtr< __ASSET__OPENFL__assets_data_visitor2_ttf_obj > _hx_result = new __ASSET__OPENFL__assets_data_visitor2_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__OPENFL__assets_data_visitor2_ttf_obj > _hx_result = new __ASSET__OPENFL__assets_data_visitor2_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}


__ASSET__OPENFL__assets_data_visitor2_ttf_obj::__ASSET__OPENFL__assets_data_visitor2_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__OPENFL__assets_data_visitor2_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *__ASSET__OPENFL__assets_data_visitor2_ttf_obj_sStaticStorageInfo = 0;
#endif

static void __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__OPENFL__assets_data_visitor2_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__OPENFL__assets_data_visitor2_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__mClass;

void __ASSET__OPENFL__assets_data_visitor2_ttf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__OPENFL__assets_data_visitor2_ttf","\xa4","\x7b","\xe6","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__OPENFL__assets_data_visitor2_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__OPENFL__assets_data_visitor2_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
