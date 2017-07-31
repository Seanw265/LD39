// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif

namespace lime{
namespace utils{

void Bytes_obj::__construct(Int length,::Array< unsigned char > bytesData){
            	HX_STACK_FRAME("lime.utils.Bytes","new",0xa06e8ae7,"lime.utils.Bytes.new","lime/utils/Bytes.hx",22,0x9fbf972b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(bytesData,"bytesData")
HXLINE(  22)		super::__construct(length,bytesData);
            	}

Dynamic Bytes_obj::__CreateEmpty() { return new Bytes_obj; }

hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(Int length,::Array< unsigned char > bytesData)
{
	hx::ObjectPtr< Bytes_obj > _hx_result = new Bytes_obj();
	_hx_result->__construct(length,bytesData);
	return _hx_result;
}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bytes_obj > _hx_result = new Bytes_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

 ::lime::utils::Bytes Bytes_obj::alloc(Int length){
            	HX_STACK_FRAME("lime.utils.Bytes","alloc",0x09b74ebc,"lime.utils.Bytes.alloc","lime/utils/Bytes.hx",28,0x9fbf972b)
            	HX_STACK_ARG(length,"length")
HXLINE(  30)		HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::alloc(length);
HXLINE(  31)		return  ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

Int Bytes_obj::fastGet(::Array< unsigned char > b,Int pos){
            	HX_STACK_FRAME("lime.utils.Bytes","fastGet",0xd63b0961,"lime.utils.Bytes.fastGet","lime/utils/Bytes.hx",38,0x9fbf972b)
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(pos,"pos")
HXLINE(  38)		return ( (Int)(_hx_array_unsafe_get(b,pos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,fastGet,return )

 ::lime::utils::Bytes Bytes_obj::ofData(::Array< unsigned char > b){
            	HX_STACK_FRAME("lime.utils.Bytes","ofData",0x80ca0eba,"lime.utils.Bytes.ofData","lime/utils/Bytes.hx",43,0x9fbf972b)
            	HX_STACK_ARG(b,"b")
HXLINE(  45)		HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::ofData(b);
HXLINE(  46)		return  ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )

 ::lime::utils::Bytes Bytes_obj::ofString(::String s){
            	HX_STACK_FRAME("lime.utils.Bytes","ofString",0xc1222561,"lime.utils.Bytes.ofString","lime/utils/Bytes.hx",51,0x9fbf972b)
            	HX_STACK_ARG(s,"s")
HXLINE(  53)		HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::ofString(s);
HXLINE(  54)		return  ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

 ::lime::utils::Bytes Bytes_obj::readFile(::String path){
            	HX_STACK_FRAME("lime.utils.Bytes","readFile",0x88a4650b,"lime.utils.Bytes.readFile","lime/utils/Bytes.hx",59,0x9fbf972b)
            	HX_STACK_ARG(path,"path")
HXLINE(  62)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::Bytes_obj::cffi_lime_bytes_read_file(path)) );
HXDLIN(  62)		HX_VARI(  ::Dynamic,data) = Dynamic(hx::DynamicPtr(inVal));
HXLINE(  63)		Bool _hx_tmp = hx::IsNotNull( data );
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  63)			return  ::lime::utils::Bytes_obj::__new( ::Dynamic(data->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            		}
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,readFile,return )

 ::lime::utils::Bytes Bytes_obj::_hx___fromNativePointer( ::Dynamic data,Int length){
            	HX_STACK_FRAME("lime.utils.Bytes","__fromNativePointer",0x91d44183,"lime.utils.Bytes.__fromNativePointer","lime/utils/Bytes.hx",71,0x9fbf972b)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(length,"length")
HXLINE(  73)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::Bytes_obj::cffi_lime_bytes_from_data_pointer(( (Float)(data) ),length)) );
HXDLIN(  73)		HX_VARI(  ::Dynamic,bytes) = Dynamic(hx::DynamicPtr(inVal));
HXLINE(  74)		return  ::lime::utils::Bytes_obj::__new( ::Dynamic(bytes->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(bytes->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,_hx___fromNativePointer,return )

 ::Dynamic Bytes_obj::lime_bytes_from_data_pointer(Float data,Int length){
            	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_from_data_pointer",0x7df5f9b8,"lime.utils.Bytes.lime_bytes_from_data_pointer","lime/utils/Bytes.hx",88,0x9fbf972b)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(length,"length")
HXLINE(  88)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::Bytes_obj::cffi_lime_bytes_from_data_pointer(data,length)) );
HXDLIN(  88)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,lime_bytes_from_data_pointer,return )

Float Bytes_obj::lime_bytes_get_data_pointer( ::Dynamic data){
            	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_get_data_pointer",0x1d4bd736,"lime.utils.Bytes.lime_bytes_get_data_pointer","lime/utils/Bytes.hx",89,0x9fbf972b)
            	HX_STACK_ARG(data,"data")
HXLINE(  89)		return ( (Float)(::lime::utils::Bytes_obj::cffi_lime_bytes_get_data_pointer(hx::DynamicPtr(data))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,lime_bytes_get_data_pointer,return )

 ::Dynamic Bytes_obj::lime_bytes_read_file(::String path){
            	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_read_file",0xab69b060,"lime.utils.Bytes.lime_bytes_read_file","lime/utils/Bytes.hx",90,0x9fbf972b)
            	HX_STACK_ARG(path,"path")
HXLINE(  90)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::Bytes_obj::cffi_lime_bytes_read_file(path)) );
HXDLIN(  90)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,lime_bytes_read_file,return )

::cpp::Function<   ::hx::Object *(Float,Int) > Bytes_obj::cffi_lime_bytes_from_data_pointer;

::cpp::Function<  Float( ::hx::Object *) > Bytes_obj::cffi_lime_bytes_get_data_pointer;

::cpp::Function<   ::hx::Object *(::String) > Bytes_obj::cffi_lime_bytes_read_file;


Bytes_obj::Bytes_obj()
{
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = _hx___fromNativePointer_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { outValue = lime_bytes_read_file_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { outValue = cffi_lime_bytes_read_file; return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { outValue = lime_bytes_from_data_pointer_dyn(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { outValue = cffi_lime_bytes_get_data_pointer; return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { outValue = cffi_lime_bytes_from_data_pointer; return true; }
	}
	return false;
}

bool Bytes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { cffi_lime_bytes_read_file=ioValue.Cast< ::cpp::Function<   ::hx::Object *(::String) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { cffi_lime_bytes_get_data_pointer=ioValue.Cast< ::cpp::Function<  Float( ::hx::Object *) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { cffi_lime_bytes_from_data_pointer=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Float,Int) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Bytes_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Bytes_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Bytes_obj::cffi_lime_bytes_from_data_pointer,HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Bytes_obj::cffi_lime_bytes_get_data_pointer,HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Bytes_obj::cffi_lime_bytes_read_file,HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Bytes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bytes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String Bytes_obj_sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("fastGet","\x5a","\xff","\x22","\xde"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("__fromNativePointer","\xfc","\xc8","\x91","\x68"),
	HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),
	HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02"),
	HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f"),
	::String(null())
};

void Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Bytes","\x75","\x8b","\xaf","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &Bytes_obj::__SetStatic;
	__mClass->mMarkFunc = Bytes_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Bytes_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bytes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bytes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Bytes_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.utils.Bytes","boot",0xb863ffcb,"lime.utils.Bytes.boot","lime/utils/Bytes.hx",88,0x9fbf972b)
HXLINE(  88)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_bytes_from_data_pointer",1f,3b,02,90),HX_("dio",4a,3d,4c,00),false);
HXDLIN(  88)		cffi_lime_bytes_from_data_pointer = inValue;
            	}
{
            	HX_STACK_FRAME("lime.utils.Bytes","boot",0xb863ffcb,"lime.utils.Bytes.boot","lime/utils/Bytes.hx",89,0x9fbf972b)
HXLINE(  89)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_bytes_get_data_pointer",af,ff,82,7b),HX_("od",15,61,00,00),false);
HXDLIN(  89)		cffi_lime_bytes_get_data_pointer = inValue;
            	}
{
            	HX_STACK_FRAME("lime.utils.Bytes","boot",0xb863ffcb,"lime.utils.Bytes.boot","lime/utils/Bytes.hx",90,0x9fbf972b)
HXLINE(  90)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_bytes_read_file",c7,b2,82,ba),HX_("so",9c,64,00,00),false);
HXDLIN(  90)		cffi_lime_bytes_read_file = inValue;
            	}
}

} // end namespace lime
} // end namespace utils