// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{

void FlxDebugger_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",63,0xd9fc0a74)
            	HX_STACK_THIS(this)
HXLINE(  63)		super::__construct();
            	}

Dynamic FlxDebugger_obj::__CreateEmpty() { return new FlxDebugger_obj; }

hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new()
{
	hx::ObjectPtr< FlxDebugger_obj > _hx_result = new FlxDebugger_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDebugger_obj > _hx_result = new FlxDebugger_obj();
	_hx_result->__construct();
	return _hx_result;
}


FlxDebugger_obj::FlxDebugger_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxDebugger_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxDebugger_obj_sStaticStorageInfo = 0;
#endif

static void FlxDebugger_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDebugger_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.FlxDebugger","\x0b","\x53","\xa2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDebugger_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxDebugger_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDebugger_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDebugger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDebugger_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
