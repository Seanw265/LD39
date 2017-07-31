// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif

namespace lime{
namespace _hx_system{

void Clipboard_obj::__construct() { }

Dynamic Clipboard_obj::__CreateEmpty() { return new Clipboard_obj; }

hx::ObjectPtr< Clipboard_obj > Clipboard_obj::__new()
{
	hx::ObjectPtr< Clipboard_obj > _hx_result = new Clipboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Clipboard_obj > _hx_result = new Clipboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String Clipboard_obj::get_text(){
            	HX_STACK_FRAME("lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",26,0x9490b5ee)
HXLINE(  29)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_hx_system::Clipboard_obj::cffi_lime_clipboard_get_text()) );
HXDLIN(  29)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text(::String value){
            	HX_STACK_FRAME("lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",43,0x9490b5ee)
            	HX_STACK_ARG(value,"value")
HXLINE(  46)		::lime::_hx_system::Clipboard_obj::cffi_lime_clipboard_set_text(value);
HXLINE(  47)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )

 ::Dynamic Clipboard_obj::lime_clipboard_get_text(){
            	HX_STACK_FRAME("lime.system.Clipboard","lime_clipboard_get_text",0x0446f7ab,"lime.system.Clipboard.lime_clipboard_get_text","lime/system/Clipboard.hx",66,0x9490b5ee)
HXLINE(  66)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_hx_system::Clipboard_obj::cffi_lime_clipboard_get_text()) );
HXDLIN(  66)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,lime_clipboard_get_text,return )

void Clipboard_obj::lime_clipboard_set_text(::String text){
            	HX_STACK_FRAME("lime.system.Clipboard","lime_clipboard_set_text",0xb2a4511f,"lime.system.Clipboard.lime_clipboard_set_text","lime/system/Clipboard.hx",67,0x9490b5ee)
            	HX_STACK_ARG(text,"text")
HXLINE(  67)		::lime::_hx_system::Clipboard_obj::cffi_lime_clipboard_set_text(text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,lime_clipboard_set_text,(void))

::cpp::Function<   ::hx::Object *() > Clipboard_obj::cffi_lime_clipboard_get_text;

::cpp::Function<  void(::String) > Clipboard_obj::cffi_lime_clipboard_set_text;


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = get_text(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_clipboard_get_text") ) { outValue = lime_clipboard_get_text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_clipboard_set_text") ) { outValue = lime_clipboard_set_text_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { outValue = cffi_lime_clipboard_get_text; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { outValue = cffi_lime_clipboard_set_text; return true; }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways)  ioValue = set_text(ioValue); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { cffi_lime_clipboard_get_text=ioValue.Cast< ::cpp::Function<   ::hx::Object *() > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { cffi_lime_clipboard_set_text=ioValue.Cast< ::cpp::Function<  void(::String) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Clipboard_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Clipboard_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Clipboard_obj::cffi_lime_clipboard_get_text,HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Clipboard_obj::cffi_lime_clipboard_set_text,HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Clipboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_MARK_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Clipboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String Clipboard_obj_sStaticFields[] = {
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),
	HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),
	HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf"),
	HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d"),
	::String(null())
};

void Clipboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = Clipboard_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Clipboard_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Clipboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clipboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clipboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Clipboard_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.system.Clipboard","boot",0x8554e870,"lime.system.Clipboard.boot","lime/system/Clipboard.hx",66,0x9490b5ee)
HXLINE(  66)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_clipboard_get_text",29,fd,31,04),HX_("o",6f,00,00,00),false);
HXDLIN(  66)		cffi_lime_clipboard_get_text = inValue;
            	}
{
            	HX_STACK_FRAME("lime.system.Clipboard","boot",0x8554e870,"lime.system.Clipboard.boot","lime/system/Clipboard.hx",67,0x9490b5ee)
HXLINE(  67)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_clipboard_set_text",9d,56,8f,b2),HX_("sv",a3,64,00,00),false);
HXDLIN(  67)		cffi_lime_clipboard_set_text = inValue;
            	}
}

} // end namespace lime
} // end namespace system