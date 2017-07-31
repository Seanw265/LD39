// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif

namespace lime{
namespace utils{

void LZMA_obj::__construct() { }

Dynamic LZMA_obj::__CreateEmpty() { return new LZMA_obj; }

hx::ObjectPtr< LZMA_obj > LZMA_obj::__new()
{
	hx::ObjectPtr< LZMA_obj > _hx_result = new LZMA_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LZMA_obj > _hx_result = new LZMA_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::haxe::io::Bytes LZMA_obj::decode( ::haxe::io::Bytes bytes){
            	HX_STACK_FRAME("lime.utils.LZMA","decode",0x452a0d64,"lime.utils.LZMA.decode","lime/utils/LZMA.hx",14,0x8b46fdc4)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  17)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::LZMA_obj::cffi_lime_lzma_decode(hx::DynamicPtr(bytes))) );
HXDLIN(  17)		HX_VARI(  ::Dynamic,data) = Dynamic(hx::DynamicPtr(inVal));
HXLINE(  18)		return  ::haxe::io::Bytes_obj::__new( ::Dynamic(data->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decode,return )

 ::haxe::io::Bytes LZMA_obj::encode( ::haxe::io::Bytes bytes){
            	HX_STACK_FRAME("lime.utils.LZMA","encode",0xda20a24c,"lime.utils.LZMA.encode","lime/utils/LZMA.hx",26,0x8b46fdc4)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  29)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::LZMA_obj::cffi_lime_lzma_encode(hx::DynamicPtr(bytes))) );
HXDLIN(  29)		HX_VARI(  ::Dynamic,data) = Dynamic(hx::DynamicPtr(inVal));
HXLINE(  30)		return  ::haxe::io::Bytes_obj::__new( ::Dynamic(data->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,encode,return )

 ::Dynamic LZMA_obj::lime_lzma_decode( ::Dynamic data){
            	HX_STACK_FRAME("lime.utils.LZMA","lime_lzma_decode",0x5fcea1f7,"lime.utils.LZMA.lime_lzma_decode","lime/utils/LZMA.hx",46,0x8b46fdc4)
            	HX_STACK_ARG(data,"data")
HXLINE(  46)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::LZMA_obj::cffi_lime_lzma_decode(hx::DynamicPtr(data))) );
HXDLIN(  46)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_decode,return )

 ::Dynamic LZMA_obj::lime_lzma_encode( ::Dynamic data){
            	HX_STACK_FRAME("lime.utils.LZMA","lime_lzma_encode",0xf4c536df,"lime.utils.LZMA.lime_lzma_encode","lime/utils/LZMA.hx",47,0x8b46fdc4)
            	HX_STACK_ARG(data,"data")
HXLINE(  47)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::LZMA_obj::cffi_lime_lzma_encode(hx::DynamicPtr(data))) );
HXDLIN(  47)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_encode,return )

::cpp::Function<   ::hx::Object *( ::hx::Object *) > LZMA_obj::cffi_lime_lzma_decode;

::cpp::Function<   ::hx::Object *( ::hx::Object *) > LZMA_obj::cffi_lime_lzma_encode;


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decode") ) { outValue = cffi_lime_lzma_decode; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_encode") ) { outValue = cffi_lime_lzma_encode; return true; }
	}
	return false;
}

bool LZMA_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decode") ) { cffi_lime_lzma_decode=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_encode") ) { cffi_lime_lzma_encode=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LZMA_obj_sMemberStorageInfo = 0;
static hx::StaticInfo LZMA_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &LZMA_obj::cffi_lime_lzma_decode,HX_HCSTRING("cffi_lime_lzma_decode","\x3a","\x87","\xfb","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LZMA_obj::cffi_lime_lzma_encode,HX_HCSTRING("cffi_lime_lzma_encode","\x22","\x1c","\xf2","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LZMA_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decode,"cffi_lime_lzma_decode");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_encode,"cffi_lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LZMA_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decode,"cffi_lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_encode,"cffi_lime_lzma_encode");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String LZMA_obj_sStaticFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	HX_HCSTRING("cffi_lime_lzma_decode","\x3a","\x87","\xfb","\x6b"),
	HX_HCSTRING("cffi_lime_lzma_encode","\x22","\x1c","\xf2","\x00"),
	::String(null())
};

void LZMA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.LZMA","\x78","\xc5","\xd6","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &LZMA_obj::__SetStatic;
	__mClass->mMarkFunc = LZMA_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LZMA_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LZMA_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LZMA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LZMA_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LZMA_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.utils.LZMA","boot",0x9ddc9ae8,"lime.utils.LZMA.boot","lime/utils/LZMA.hx",46,0x8b46fdc4)
HXLINE(  46)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_lzma_decode",41,52,eb,43),HX_("oo",20,61,00,00),false);
HXDLIN(  46)		cffi_lime_lzma_decode = inValue;
            	}
{
            	HX_STACK_FRAME("lime.utils.LZMA","boot",0x9ddc9ae8,"lime.utils.LZMA.boot","lime/utils/LZMA.hx",47,0x8b46fdc4)
HXLINE(  47)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_lzma_encode",29,e7,e1,d8),HX_("oo",20,61,00,00),false);
HXDLIN(  47)		cffi_lime_lzma_encode = inValue;
            	}
}

} // end namespace lime
} // end namespace utils