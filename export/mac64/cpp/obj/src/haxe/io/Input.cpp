// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

hx::ObjectPtr< Input_obj > Input_obj::__new()
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Input_obj::readByte(){
            	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/local/lib/haxe/std/haxe/io/Input.hx",48,0x3b290ab1)
            	HX_STACK_THIS(this)
HXLINE(  48)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  48)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

Int Input_obj::readBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/usr/local/lib/haxe/std/haxe/io/Input.hx",61,0x3b290ab1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  62)		HX_VARI( Int,k) = len;
HXLINE(  63)		HX_VARI( ::Array< unsigned char >,b) = s->b;
HXLINE(  64)		Bool _hx_tmp;
HXDLIN(  64)		Bool _hx_tmp1;
HXDLIN(  64)		if ((pos >= (int)0)) {
HXLINE(  64)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  64)			_hx_tmp1 = true;
            		}
HXDLIN(  64)		if (!(_hx_tmp1)) {
HXLINE(  64)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  66)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE(  67)			while((k > (int)0)){
HXLINE(  73)				unsigned char _hx_tmp2 = this->readByte();
HXDLIN(  73)				b[pos] = _hx_tmp2;
HXLINE(  77)				++pos;
HXLINE(  78)				--k;
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof eof = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  81)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

void Input_obj::close(){
            	HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","/usr/local/lib/haxe/std/haxe/io/Input.hx",89,0x3b290ab1)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

void Input_obj::readFullBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","/usr/local/lib/haxe/std/haxe/io/Input.hx",132,0x3b290ab1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE( 132)		while((len > (int)0)){
HXLINE( 133)			HX_VARI( Int,k) = this->readBytes(s,pos,len);
HXLINE( 134)			if ((k == (int)0)) {
HXLINE( 135)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 136)			hx::AddEq(pos,k);
HXLINE( 137)			hx::SubEq(len,k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::String Input_obj::readLine(){
            	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","/usr/local/lib/haxe/std/haxe/io/Input.hx",174,0x3b290ab1)
            	HX_STACK_THIS(this)
HXLINE( 175)		HX_VARI(  ::StringBuf,buf) =  ::StringBuf_obj::__new();
HXLINE( 176)		HX_VAR( Int,last);
HXLINE( 177)		HX_VAR( ::String,s);
HXLINE( 178)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE( 179)			while(true){
HXLINE( 179)				last = this->readByte();
HXDLIN( 179)				if (!((last != (int)10))) {
HXLINE( 179)					goto _hx_goto_2;
            				}
HXLINE( 180)				Bool _hx_tmp = hx::IsNull( buf->charBuf );
HXDLIN( 180)				if (_hx_tmp) {
HXLINE( 180)					buf->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 180)				buf->charBuf->push(last);
            			}
            			_hx_goto_2:;
HXLINE( 181)			Bool _hx_tmp1 = hx::IsNotNull( buf->charBuf );
HXDLIN( 181)			if (_hx_tmp1) {
HXLINE( 181)				buf->flush();
            			}
HXDLIN( 181)			s = buf->b->join(HX_("",00,00,00,00));
HXLINE( 182)			Int _hx_tmp2 = (s.length - (int)1);
HXDLIN( 182)			 ::Dynamic _hx_tmp3 = s.charCodeAt(_hx_tmp2);
HXDLIN( 182)			if (hx::IsEq( _hx_tmp3,(int)13 )) {
HXLINE( 182)				s = s.substr((int)0,(int)-1);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof e = _hx_e;
HXLINE( 184)				Bool _hx_tmp4 = hx::IsNotNull( buf->charBuf );
HXDLIN( 184)				if (_hx_tmp4) {
HXLINE( 184)					buf->flush();
            				}
HXDLIN( 184)				s = buf->b->join(HX_("",00,00,00,00));
HXLINE( 185)				if ((s.length == (int)0)) {
HXLINE( 186)					HX_STACK_DO_THROW(e);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 188)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

::String Input_obj::readString(Int len){
            	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","/usr/local/lib/haxe/std/haxe/io/Input.hx",302,0x3b290ab1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(len,"len")
HXLINE( 303)		HX_VARI(  ::haxe::io::Bytes,b) = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 304)		this->readFullBytes(b,(int)0,len);
HXLINE( 308)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn()); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return hx::Val( readLine_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return hx::Val( readFullBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("readLine","\x6a","\xf2","\xaa","\x6f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
