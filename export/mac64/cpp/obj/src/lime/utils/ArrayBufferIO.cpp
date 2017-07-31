// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif

namespace lime{
namespace utils{

void ArrayBufferIO_obj::__construct() { }

Dynamic ArrayBufferIO_obj::__CreateEmpty() { return new ArrayBufferIO_obj; }

hx::ObjectPtr< ArrayBufferIO_obj > ArrayBufferIO_obj::__new()
{
	hx::ObjectPtr< ArrayBufferIO_obj > _hx_result = new ArrayBufferIO_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ArrayBufferIO_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayBufferIO_obj > _hx_result = new ArrayBufferIO_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int ArrayBufferIO_obj::getInt8( ::haxe::io::Bytes buffer,Int byteOffset){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt8",0x658d8b5a,"lime.utils.ArrayBufferIO.getInt8","lime/utils/ArrayBufferView.hx",382,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
HXLINE( 382)		return ::__hxcpp_memory_get_byte(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt8,return )

Int ArrayBufferIO_obj::setInt8( ::haxe::io::Bytes buffer,Int byteOffset,Int value){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt8",0x588f1c66,"lime.utils.ArrayBufferIO.setInt8","lime/utils/ArrayBufferView.hx",391,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
HXLINE( 394)		::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
HXLINE( 401)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt8,return )

 ::Dynamic ArrayBufferIO_obj::getUint8( ::haxe::io::Bytes buffer,Int byteOffset){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint8",0x5bc8ef4d,"lime.utils.ArrayBufferIO.getUint8","lime/utils/ArrayBufferView.hx",409,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
HXLINE( 409)		Int _hx_tmp = ::__hxcpp_memory_get_byte(buffer->b,byteOffset);
HXDLIN( 409)		return ((int)_hx_tmp & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getUint8,return )

Int ArrayBufferIO_obj::setUint8Clamped( ::haxe::io::Bytes buffer,Int byteOffset,Int value){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint8Clamped",0xa8a3a959,"lime.utils.ArrayBufferIO.setUint8Clamped","lime/utils/ArrayBufferView.hx",419,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
HXLINE( 419)		HX_VARI_NAME( Int,_hx_int,"int") = value;
HXDLIN( 419)		Float _hx_tmp;
HXDLIN( 419)		if ((_hx_int < (int)0)) {
HXLINE( 419)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 419)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 419)		HX_VARI( Int,_out) = ::Std_obj::_hx_int(_hx_tmp);
HXDLIN( 419)		Bool _hx_tmp1 = (_out > (int)255);
HXDLIN( 419)		if (_hx_tmp1) {
HXLINE( 419)			_out = (int)255;
            		}
            		else {
HXLINE( 419)			_out = _out;
            		}
HXDLIN( 419)		HX_VAR_NAME( Int,value1,"value");
HXDLIN( 419)		if ((_out < (int)0)) {
HXLINE( 419)			value1 = (int)0;
            		}
            		else {
HXLINE( 419)			value1 = _out;
            		}
HXDLIN( 419)		::__hxcpp_memory_set_byte(buffer->b,byteOffset,value1);
HXDLIN( 419)		return value1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8Clamped,return )

Int ArrayBufferIO_obj::setUint8( ::haxe::io::Bytes buffer,Int byteOffset,Int value){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint8",0x0a2648c1,"lime.utils.ArrayBufferIO.setUint8","lime/utils/ArrayBufferView.hx",424,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
HXLINE( 427)		::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
HXLINE( 432)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8,return )

Int ArrayBufferIO_obj::getInt16( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt16",0x764c5d83,"lime.utils.ArrayBufferIO.getInt16","lime/utils/ArrayBufferView.hx",439,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 439)		return ::__hxcpp_memory_get_i16(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt16,return )

Int ArrayBufferIO_obj::setInt16( ::haxe::io::Bytes buffer,Int byteOffset,Int value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt16",0x24a9b6f7,"lime.utils.ArrayBufferIO.setInt16","lime/utils/ArrayBufferView.hx",456,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 459)		::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
HXLINE( 480)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt16,return )

 ::Dynamic ArrayBufferIO_obj::getUint16( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint16",0xf4086e30,"lime.utils.ArrayBufferIO.getUint16","lime/utils/ArrayBufferView.hx",488,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 488)		Int _hx_tmp = ::__hxcpp_memory_get_ui16(buffer->b,byteOffset);
HXDLIN( 488)		return ((int)_hx_tmp & (int)(int)65535);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint16,return )

Int ArrayBufferIO_obj::setUint16( ::haxe::io::Bytes buffer,Int byteOffset,Int value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint16",0xd7595a3c,"lime.utils.ArrayBufferIO.setUint16","lime/utils/ArrayBufferView.hx",504,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 507)		::__hxcpp_memory_set_ui16(buffer->b,byteOffset,value);
HXLINE( 512)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint16,return )

Int ArrayBufferIO_obj::getInt32( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt32",0x764c5f3d,"lime.utils.ArrayBufferIO.getInt32","lime/utils/ArrayBufferView.hx",520,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 520)		return ::__hxcpp_memory_get_i32(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt32,return )

Int ArrayBufferIO_obj::setInt32( ::haxe::io::Bytes buffer,Int byteOffset,Int value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt32",0x24a9b8b1,"lime.utils.ArrayBufferIO.setInt32","lime/utils/ArrayBufferView.hx",542,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 545)		::__hxcpp_memory_set_i32(buffer->b,byteOffset,value);
HXLINE( 564)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt32,return )

 ::Dynamic ArrayBufferIO_obj::getUint32( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint32",0xf4086fea,"lime.utils.ArrayBufferIO.getUint32","lime/utils/ArrayBufferView.hx",572,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 572)		return ::__hxcpp_memory_get_ui32(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint32,return )

Int ArrayBufferIO_obj::setUint32( ::haxe::io::Bytes buffer,Int byteOffset,Int value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint32",0xd7595bf6,"lime.utils.ArrayBufferIO.setUint32","lime/utils/ArrayBufferView.hx",580,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 583)		::__hxcpp_memory_set_ui32(buffer->b,byteOffset,value);
HXLINE( 588)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint32,return )

Float ArrayBufferIO_obj::getFloat32( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getFloat32",0xddb276ea,"lime.utils.ArrayBufferIO.getFloat32","lime/utils/ArrayBufferView.hx",596,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 596)		return ::__hxcpp_memory_get_float(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat32,return )

Float ArrayBufferIO_obj::setFloat32( ::haxe::io::Bytes buffer,Int byteOffset,Float value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setFloat32",0xe130155e,"lime.utils.ArrayBufferIO.setFloat32","lime/utils/ArrayBufferView.hx",604,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 607)		::__hxcpp_memory_set_float(buffer->b,byteOffset,value);
HXLINE( 612)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat32,return )

Float ArrayBufferIO_obj::getFloat64( ::haxe::io::Bytes buffer,Int byteOffset,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getFloat64",0xddb27989,"lime.utils.ArrayBufferIO.getFloat64","lime/utils/ArrayBufferView.hx",620,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 620)		return ::__hxcpp_memory_get_double(buffer->b,byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat64,return )

Float ArrayBufferIO_obj::setFloat64( ::haxe::io::Bytes buffer,Int byteOffset,Float value,hx::Null< Bool >  __o_littleEndian){
Bool littleEndian = __o_littleEndian.Default(true);
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setFloat64",0xe13017fd,"lime.utils.ArrayBufferIO.setFloat64","lime/utils/ArrayBufferView.hx",628,0xb543acf8)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(littleEndian,"littleEndian")
HXLINE( 631)		::__hxcpp_memory_set_double(buffer->b,byteOffset,value);
HXLINE( 636)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat64,return )

Int ArrayBufferIO_obj::_clamp(Float _in){
            	HX_STACK_FRAME("lime.utils.ArrayBufferIO","_clamp",0xd1cc2361,"lime.utils.ArrayBufferIO._clamp","lime/utils/ArrayBufferView.hx",644,0xb543acf8)
            	HX_STACK_ARG(_in,"_in")
HXLINE( 646)		HX_VARI( Int,_out) = ::Std_obj::_hx_int(_in);
HXLINE( 647)		Bool _hx_tmp = (_out > (int)255);
HXDLIN( 647)		if (_hx_tmp) {
HXLINE( 647)			_out = (int)255;
            		}
            		else {
HXLINE( 647)			_out = _out;
            		}
HXLINE( 648)		if ((_out < (int)0)) {
HXLINE( 648)			return (int)0;
            		}
            		else {
HXLINE( 648)			return _out;
            		}
HXDLIN( 648)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferIO_obj,_clamp,return )


ArrayBufferIO_obj::ArrayBufferIO_obj()
{
}

bool ArrayBufferIO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_clamp") ) { outValue = _clamp_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { outValue = getInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setInt8") ) { outValue = setInt8_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getUint8") ) { outValue = getUint8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setUint8") ) { outValue = setUint8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInt16") ) { outValue = getInt16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setInt16") ) { outValue = setInt16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInt32") ) { outValue = getInt32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setInt32") ) { outValue = setInt32_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getUint16") ) { outValue = getUint16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setUint16") ) { outValue = setUint16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getUint32") ) { outValue = getUint32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setUint32") ) { outValue = setUint32_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFloat32") ) { outValue = getFloat32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { outValue = setFloat32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFloat64") ) { outValue = getFloat64_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setFloat64") ) { outValue = setFloat64_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setUint8Clamped") ) { outValue = setUint8Clamped_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArrayBufferIO_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArrayBufferIO_obj_sStaticStorageInfo = 0;
#endif

static void ArrayBufferIO_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayBufferIO_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferIO_obj::__mClass;

static ::String ArrayBufferIO_obj_sStaticFields[] = {
	HX_HCSTRING("getInt8","\x1f","\xf4","\x3d","\x18"),
	HX_HCSTRING("setInt8","\x2b","\x85","\x3f","\x0b"),
	HX_HCSTRING("getUint8","\xe8","\x32","\x74","\x03"),
	HX_HCSTRING("setUint8Clamped","\x1e","\xdf","\xc1","\xf1"),
	HX_HCSTRING("setUint8","\x5c","\x8c","\xd1","\xb1"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("getUint16","\x35","\x52","\x38","\x02"),
	HX_HCSTRING("setUint16","\x41","\x3e","\x89","\xe5"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("getUint32","\xef","\x53","\x38","\x02"),
	HX_HCSTRING("setUint32","\xfb","\x3f","\x89","\xe5"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("getFloat64","\xe4","\x19","\x6a","\x39"),
	HX_HCSTRING("setFloat64","\x58","\xb8","\xe7","\x3c"),
	HX_HCSTRING("_clamp","\x3c","\xba","\x3f","\x44"),
	::String(null())
};

void ArrayBufferIO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferIO","\xa9","\xc4","\x7c","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferIO_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayBufferIO_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArrayBufferIO_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferIO_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayBufferIO_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferIO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferIO_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
