// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicLog_obj::__construct(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACK_FRAME("flixel.system.debug.GraphicLog","new",0x6b03d456,"flixel.system.debug.GraphicLog.new","openfl/Assets.hx",1176,0x989d477c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(1208)		super::__construct(width,height,transparent,fillRGBA);
HXLINE(1213)		 ::haxe::io::Bytes _hx_tmp = ::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::GraphicLog_obj::resourceName);
HXDLIN(1213)		HX_VARI(  ::openfl::utils::ByteArrayData,byteArray) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(_hx_tmp);
HXLINE(1214)		{
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display::BitmapData,_gthis) HXARGC(1)
            			void _hx_run( ::lime::graphics::Image image){
            				HX_STACK_FRAME("flixel.system.debug.GraphicLog","new",0x6b03d456,"flixel.system.debug.GraphicLog.new","openfl/Assets.hx",1214,0x989d477c)
            				HX_STACK_ARG(image,"image")
HXLINE(1214)				_gthis->_hx___fromImage(image);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(1214)			HX_VARI(  ::openfl::display::BitmapData,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXDLIN(1214)			::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray), ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            	}

Dynamic GraphicLog_obj::__CreateEmpty() { return new GraphicLog_obj; }

hx::ObjectPtr< GraphicLog_obj > GraphicLog_obj::__new(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA)
{
	hx::ObjectPtr< GraphicLog_obj > _hx_result = new GraphicLog_obj();
	_hx_result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return _hx_result;
}

Dynamic GraphicLog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicLog_obj > _hx_result = new GraphicLog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

::String GraphicLog_obj::resourceName;


GraphicLog_obj::GraphicLog_obj()
{
}

bool GraphicLog_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true; }
	}
	return false;
}

bool GraphicLog_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicLog_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicLog_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicLog_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicLog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicLog_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicLog_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicLog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicLog_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicLog_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicLog_obj::__mClass;

static ::String GraphicLog_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicLog_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.GraphicLog","\x64","\xb1","\x09","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicLog_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicLog_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicLog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicLog_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicLog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicLog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicLog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicLog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicLog_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.system.debug.GraphicLog","boot",0x306ef77c,"flixel.system.debug.GraphicLog.boot","openfl/display/BitmapData.hx",59,0xdd12d5b9)
HXLINE(  59)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_GraphicLog",db,89,51,9b);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
