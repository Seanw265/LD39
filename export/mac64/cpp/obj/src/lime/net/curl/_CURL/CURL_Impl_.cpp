// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif

namespace lime{
namespace net{
namespace curl{
namespace _CURL{

void CURL_Impl__obj::__construct() { }

Dynamic CURL_Impl__obj::__CreateEmpty() { return new CURL_Impl__obj; }

hx::ObjectPtr< CURL_Impl__obj > CURL_Impl__obj::__new()
{
	hx::ObjectPtr< CURL_Impl__obj > _hx_result = new CURL_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CURL_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CURL_Impl__obj > _hx_result = new CURL_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Int CURL_Impl__obj::GLOBAL_SSL;

Int CURL_Impl__obj::GLOBAL_WIN32;

Int CURL_Impl__obj::GLOBAL_ALL;

Int CURL_Impl__obj::GLOBAL_NOTHING;

Int CURL_Impl__obj::GLOBAL_DEFAULT;

Int CURL_Impl__obj::GLOBAL_ACK_EINTR;

Int CURL_Impl__obj::getDate(::String date,Int now){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","getDate",0xf817421d,"lime.net.curl._CURL.CURL_Impl_.getDate","lime/net/curl/CURL.hx",23,0x82d3899b)
            	HX_STACK_ARG(date,"date")
            	HX_STACK_ARG(now,"now")
HXLINE(  23)		return ( (Int)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_getdate(date,now)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,getDate,return )

void CURL_Impl__obj::globalCleanup(){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalCleanup",0xf988f1fa,"lime.net.curl._CURL.CURL_Impl_.globalCleanup","lime/net/curl/CURL.hx",34,0x82d3899b)
HXLINE(  34)		::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_cleanup();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,globalCleanup,(void))

Int CURL_Impl__obj::globalInit(Int flags){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalInit",0x7c47f37a,"lime.net.curl._CURL.CURL_Impl_.globalInit","lime/net/curl/CURL.hx",43,0x82d3899b)
            	HX_STACK_ARG(flags,"flags")
HXLINE(  43)		return ( (Int)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_init(flags)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,globalInit,return )

::String CURL_Impl__obj::version(){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","version",0x60232351,"lime.net.curl._CURL.CURL_Impl_.version","lime/net/curl/CURL.hx",54,0x82d3899b)
HXLINE(  54)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version()) );
HXDLIN(  54)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,version,return )

 ::Dynamic CURL_Impl__obj::versionInfo(Int type){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","versionInfo",0x87fa045f,"lime.net.curl._CURL.CURL_Impl_.versionInfo","lime/net/curl/CURL.hx",65,0x82d3899b)
            	HX_STACK_ARG(type,"type")
HXLINE(  65)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version_info(type)) );
HXDLIN(  65)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,versionInfo,return )

Bool CURL_Impl__obj::intGt(Float a,Float b){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","intGt",0x725c30f5,"lime.net.curl._CURL.CURL_Impl_.intGt","lime/net/curl/CURL.hx",75,0x82d3899b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  75)		return (a > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,intGt,return )

Float CURL_Impl__obj::lime_curl_getdate(::String date,Float now){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_getdate",0x64205a54,"lime.net.curl._CURL.CURL_Impl_.lime_curl_getdate","lime/net/curl/CURL.hx",81,0x82d3899b)
            	HX_STACK_ARG(date,"date")
            	HX_STACK_ARG(now,"now")
HXLINE(  81)		return ( (Float)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_getdate(date,now)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,lime_curl_getdate,return )

void CURL_Impl__obj::lime_curl_global_cleanup(){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_global_cleanup",0x3adde378,"lime.net.curl._CURL.CURL_Impl_.lime_curl_global_cleanup","lime/net/curl/CURL.hx",82,0x82d3899b)
HXLINE(  82)		::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_cleanup();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,lime_curl_global_cleanup,(void))

Int CURL_Impl__obj::lime_curl_global_init(Int flags){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_global_init",0xb164473c,"lime.net.curl._CURL.CURL_Impl_.lime_curl_global_init","lime/net/curl/CURL.hx",83,0x82d3899b)
            	HX_STACK_ARG(flags,"flags")
HXLINE(  83)		return ( (Int)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_init(flags)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,lime_curl_global_init,return )

 ::Dynamic CURL_Impl__obj::lime_curl_version(){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_version",0xb70567a8,"lime.net.curl._CURL.CURL_Impl_.lime_curl_version","lime/net/curl/CURL.hx",84,0x82d3899b)
HXLINE(  84)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version()) );
HXDLIN(  84)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,lime_curl_version,return )

 ::Dynamic CURL_Impl__obj::lime_curl_version_info(Int type){
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_version_info",0x9dc62ba5,"lime.net.curl._CURL.CURL_Impl_.lime_curl_version_info","lime/net/curl/CURL.hx",85,0x82d3899b)
            	HX_STACK_ARG(type,"type")
HXLINE(  85)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version_info(type)) );
HXDLIN(  85)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,lime_curl_version_info,return )

::cpp::Function<  Float(::String,Float) > CURL_Impl__obj::cffi_lime_curl_getdate;

::cpp::Function<  void() > CURL_Impl__obj::cffi_lime_curl_global_cleanup;

::cpp::Function<  Int(Int) > CURL_Impl__obj::cffi_lime_curl_global_init;

::cpp::Function<   ::hx::Object *() > CURL_Impl__obj::cffi_lime_curl_version;

::cpp::Function<   ::hx::Object *(Int) > CURL_Impl__obj::cffi_lime_curl_version_info;


CURL_Impl__obj::CURL_Impl__obj()
{
}

bool CURL_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"intGt") ) { outValue = intGt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_curl_getdate") ) { outValue = lime_curl_getdate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_version") ) { outValue = lime_curl_version_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_global_init") ) { outValue = lime_curl_global_init_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_curl_version_info") ) { outValue = lime_curl_version_info_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_curl_global_cleanup") ) { outValue = lime_curl_global_cleanup_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CURL_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CURL_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_SSL,HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_WIN32,HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ALL,HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_NOTHING,HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_DEFAULT,HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ACK_EINTR,HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_getdate,HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_global_cleanup,HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_global_init,HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_version,HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_version_info,HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CURL_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CURL_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
};

#endif

hx::Class CURL_Impl__obj::__mClass;

static ::String CURL_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52"),
	HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59"),
	HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52"),
	HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2"),
	HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe"),
	HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74"),
	HX_HCSTRING("getDate","\xe4","\x05","\xe6","\x14"),
	HX_HCSTRING("globalCleanup","\x01","\x45","\x7b","\xd1"),
	HX_HCSTRING("globalInit","\x13","\x86","\x5e","\x3c"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	HX_HCSTRING("intGt","\xfc","\xa4","\x20","\xbe"),
	HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),
	HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),
	HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),
	HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),
	HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),
	HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d"),
	HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f"),
	HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90"),
	HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0"),
	HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01"),
	::String(null())
};

void CURL_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl._CURL.CURL_Impl_","\xa7","\x3b","\x72","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CURL_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CURL_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURL_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CURL_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURL_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURL_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CURL_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",12,0x82d3899b)
HXLINE(  12)		GLOBAL_SSL = (int)1;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",13,0x82d3899b)
HXLINE(  13)		GLOBAL_WIN32 = (int)2;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",14,0x82d3899b)
HXLINE(  14)		GLOBAL_ALL = (int)3;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",15,0x82d3899b)
HXLINE(  15)		GLOBAL_NOTHING = (int)0;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",16,0x82d3899b)
HXLINE(  16)		GLOBAL_DEFAULT = (int)3;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",17,0x82d3899b)
HXLINE(  17)		GLOBAL_ACK_EINTR = (int)4;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",81,0x82d3899b)
HXLINE(  81)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_curl_getdate",db,3c,06,67),HX_("sdd",b3,9a,57,00),false);
HXDLIN(  81)		cffi_lime_curl_getdate = inValue;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",82,0x82d3899b)
HXLINE(  82)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_curl_global_cleanup",d1,6f,f2,40),HX_("v",76,00,00,00),false);
HXDLIN(  82)		cffi_lime_curl_global_cleanup = inValue;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",83,0x82d3899b)
HXLINE(  83)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_curl_global_init",43,79,fb,d4),HX_("ii",e0,5b,00,00),false);
HXDLIN(  83)		cffi_lime_curl_global_init = inValue;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",84,0x82d3899b)
HXLINE(  84)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_curl_version",2f,4a,eb,b9),HX_("o",6f,00,00,00),false);
HXDLIN(  84)		cffi_lime_curl_version = inValue;
            	}
{
            	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","boot",0x38bb5a59,"lime.net.curl._CURL.CURL_Impl_.boot","lime/net/curl/CURL.hx",85,0x82d3899b)
HXLINE(  85)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_curl_version_info",be,bf,7a,9e),HX_("io",e6,5b,00,00),false);
HXDLIN(  85)		cffi_lime_curl_version_info = inValue;
            	}
}

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL
