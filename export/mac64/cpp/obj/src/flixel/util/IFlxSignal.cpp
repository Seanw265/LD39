// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxSignal_obj_sMemberFields[] = {
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addOnce","\x42","\xc0","\xef","\x85"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	::String(null()) };

static void IFlxSignal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxSignal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSignal_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxSignal_obj::__mClass;

void IFlxSignal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.IFlxSignal","\xcb","\x3d","\xc3","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxSignal_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxSignal_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x540588cf >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxSignal_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
