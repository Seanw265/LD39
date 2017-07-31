// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

namespace haxe{
namespace io{

void BytesOutput_obj::__construct(){
            	HX_STACK_FRAME("haxe.io.BytesOutput","new",0x130b775e,"haxe.io.BytesOutput.new","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",40,0xe13b11ef)
            	HX_STACK_THIS(this)
HXLINE(  40)		this->b =  ::haxe::io::BytesBuffer_obj::__new();
            	}

Dynamic BytesOutput_obj::__CreateEmpty() { return new BytesOutput_obj; }

hx::ObjectPtr< BytesOutput_obj > BytesOutput_obj::__new()
{
	hx::ObjectPtr< BytesOutput_obj > _hx_result = new BytesOutput_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic BytesOutput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytesOutput_obj > _hx_result = new BytesOutput_obj();
	_hx_result->__construct();
	return _hx_result;
}

void BytesOutput_obj::writeByte(Int c){
            	HX_STACK_FRAME("haxe.io.BytesOutput","writeByte",0xed1b0d05,"haxe.io.BytesOutput.writeByte","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",55,0xe13b11ef)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  55)		this->b->b->push(c);
            	}


Int BytesOutput_obj::writeBytes( ::haxe::io::Bytes buf,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.BytesOutput","writeBytes",0x8a9057ce,"haxe.io.BytesOutput.writeBytes","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",59,0xe13b11ef)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buf,"buf")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  64)		{
HXLINE(  64)			HX_VARI(  ::haxe::io::BytesBuffer,_this) = this->b;
HXDLIN(  64)			Bool _hx_tmp;
HXDLIN(  64)			Bool _hx_tmp1;
HXDLIN(  64)			if ((pos >= (int)0)) {
HXLINE(  64)				_hx_tmp1 = (len < (int)0);
            			}
            			else {
HXLINE(  64)				_hx_tmp1 = true;
            			}
HXDLIN(  64)			if (!(_hx_tmp1)) {
HXLINE(  64)				_hx_tmp = ((pos + len) > buf->length);
            			}
            			else {
HXLINE(  64)				_hx_tmp = true;
            			}
HXDLIN(  64)			if (_hx_tmp) {
HXLINE(  64)				HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            			}
HXDLIN(  64)			HX_VARI( ::Array< unsigned char >,b2) = buf->b;
HXDLIN(  64)			{
HXLINE(  64)				HX_VARI( Int,_g1) = pos;
HXDLIN(  64)				HX_VARI( Int,_g) = (pos + len);
HXDLIN(  64)				while((_g1 < _g)){
HXLINE(  64)					HX_VARI( Int,i) = _g1++;
HXDLIN(  64)					unsigned char _hx_tmp2 = b2->__get(i);
HXDLIN(  64)					_this->b->push(_hx_tmp2);
            				}
            			}
            		}
HXLINE(  66)		return len;
            	}


 ::haxe::io::Bytes BytesOutput_obj::getBytes(){
            	HX_STACK_FRAME("haxe.io.BytesOutput","getBytes",0x9fe35837,"haxe.io.BytesOutput.getBytes","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",137,0xe13b11ef)
            	HX_STACK_THIS(this)
HXLINE( 137)		return this->b->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesOutput_obj,getBytes,return )


BytesOutput_obj::BytesOutput_obj()
{
}

void BytesOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesOutput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

hx::Val BytesOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return hx::Val( getBytes_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BytesOutput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::haxe::io::BytesBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BytesOutput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::BytesBuffer*/ ,(int)offsetof(BytesOutput_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BytesOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesOutput_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

static void BytesOutput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytesOutput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesOutput_obj::__mClass;

void BytesOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesOutput","\x6c","\x30","\xb1","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BytesOutput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BytesOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesOutput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytesOutput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesOutput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
