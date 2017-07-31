// Generated by Haxe 3.3.0
#include <hxcpp.h>

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
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

namespace sys{
namespace io{

void FileInput_obj::__construct( ::Dynamic f){
            	HX_STACK_FRAME("sys.io.FileInput","new",0x565591b9,"sys.io.FileInput.new","/usr/local/lib/haxe/std/cpp/_std/sys/io/FileInput.hx",32,0x0a6b0235)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE(  32)		this->_hx___f = f;
            	}

Dynamic FileInput_obj::__CreateEmpty() { return new FileInput_obj; }

hx::ObjectPtr< FileInput_obj > FileInput_obj::__new( ::Dynamic f)
{
	hx::ObjectPtr< FileInput_obj > _hx_result = new FileInput_obj();
	_hx_result->__construct(f);
	return _hx_result;
}

Dynamic FileInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileInput_obj > _hx_result = new FileInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

Int FileInput_obj::readByte(){
            	HX_STACK_FRAME("sys.io.FileInput","readByte",0x25e0b585,"sys.io.FileInput.readByte","/usr/local/lib/haxe/std/cpp/_std/sys/io/FileInput.hx",36,0x0a6b0235)
            	HX_STACK_THIS(this)
HXLINE(  36)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  36)			return _hx_std_file_read_char(this->_hx___f);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  39)				Bool _hx_tmp = ( (Bool)(e->__IsArray()) );
HXDLIN(  39)				if (_hx_tmp) {
HXLINE(  40)					HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__new());
            				}
            				else {
HXLINE(  42)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  36)		return (int)0;
            	}


Int FileInput_obj::readBytes( ::haxe::io::Bytes s,Int p,Int l){
            	HX_STACK_FRAME("sys.io.FileInput","readBytes",0xfebe1f4e,"sys.io.FileInput.readBytes","/usr/local/lib/haxe/std/cpp/_std/sys/io/FileInput.hx",47,0x0a6b0235)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(p,"p")
            	HX_STACK_ARG(l,"l")
HXLINE(  47)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  47)			return _hx_std_file_read(this->_hx___f,s->b,p,l);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  50)				Bool _hx_tmp = ( (Bool)(e->__IsArray()) );
HXDLIN(  50)				if (_hx_tmp) {
HXLINE(  51)					HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__new());
            				}
            				else {
HXLINE(  53)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  47)		return (int)0;
            	}


void FileInput_obj::close(){
            	HX_STACK_FRAME("sys.io.FileInput","close",0x735aa151,"sys.io.FileInput.close","/usr/local/lib/haxe/std/cpp/_std/sys/io/FileInput.hx",57,0x0a6b0235)
            	HX_STACK_THIS(this)
HXLINE(  58)		this->super::close();
HXLINE(  59)		_hx_std_file_close(this->_hx___f);
            	}



FileInput_obj::FileInput_obj()
{
}

void FileInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileInput);
	HX_MARK_MEMBER_NAME(_hx___f,"__f");
	HX_MARK_END_CLASS();
}

void FileInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___f,"__f");
}

hx::Val FileInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return hx::Val( _hx___f); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FileInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { _hx___f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__f","\x46","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileInput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FileInput_obj,_hx___f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileInput_obj_sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void FileInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
};

#endif

hx::Class FileInput_obj::__mClass;

void FileInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.FileInput","\x47","\x41","\x72","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io