// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_
#include <openfl/text/_TextFieldAutoSize/TextFieldAutoSize_Impl_.h>
#endif

namespace openfl{
namespace text{
namespace _TextFieldAutoSize{

void TextFieldAutoSize_Impl__obj::__construct() { }

Dynamic TextFieldAutoSize_Impl__obj::__CreateEmpty() { return new TextFieldAutoSize_Impl__obj; }

hx::ObjectPtr< TextFieldAutoSize_Impl__obj > TextFieldAutoSize_Impl__obj::__new()
{
	hx::ObjectPtr< TextFieldAutoSize_Impl__obj > _hx_result = new TextFieldAutoSize_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic TextFieldAutoSize_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldAutoSize_Impl__obj > _hx_result = new TextFieldAutoSize_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic TextFieldAutoSize_Impl__obj::CENTER;

 ::Dynamic TextFieldAutoSize_Impl__obj::LEFT;

 ::Dynamic TextFieldAutoSize_Impl__obj::NONE;

 ::Dynamic TextFieldAutoSize_Impl__obj::RIGHT;

 ::Dynamic TextFieldAutoSize_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","fromString",0xeb62d059,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.fromString","openfl/text/TextFieldAutoSize.hx",13,0x2bbbb0a4)
            	HX_STACK_ARG(value,"value")
HXLINE(  13)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  13)			return (int)0;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  13)			return (int)1;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  13)			return (int)2;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  13)			return (int)3;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  13)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldAutoSize_Impl__obj,fromString,return )

::String TextFieldAutoSize_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","toString",0x3f3737aa,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.toString","openfl/text/TextFieldAutoSize.hx",27,0x2bbbb0a4)
            	HX_STACK_ARG(value,"value")
HXLINE(  27)		switch((int)(value)){
            			case (int)0: {
HXLINE(  27)				return HX_("center",d5,25,db,05);
            			}
            			break;
            			case (int)1: {
HXLINE(  27)				return HX_("left",07,08,b0,47);
            			}
            			break;
            			case (int)2: {
HXLINE(  27)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			case (int)3: {
HXLINE(  27)				return HX_("right",dc,0b,64,e9);
            			}
            			break;
            			default:{
HXLINE(  27)				return null();
            			}
            		}
HXDLIN(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldAutoSize_Impl__obj,toString,return )


TextFieldAutoSize_Impl__obj::TextFieldAutoSize_Impl__obj()
{
}

bool TextFieldAutoSize_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextFieldAutoSize_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo TextFieldAutoSize_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TextFieldAutoSize_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldAutoSize_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::RIGHT,"RIGHT");
};

#endif

hx::Class TextFieldAutoSize_Impl__obj::__mClass;

static ::String TextFieldAutoSize_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void TextFieldAutoSize_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","\x30","\xd1","\xec","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldAutoSize_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldAutoSize_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextFieldAutoSize_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFieldAutoSize_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldAutoSize_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldAutoSize_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldAutoSize_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextFieldAutoSize_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","boot",0x70a91430,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.boot","openfl/text/TextFieldAutoSize.hx",6,0x2bbbb0a4)
HXLINE(   6)		CENTER = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","boot",0x70a91430,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.boot","openfl/text/TextFieldAutoSize.hx",7,0x2bbbb0a4)
HXLINE(   7)		LEFT = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","boot",0x70a91430,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.boot","openfl/text/TextFieldAutoSize.hx",8,0x2bbbb0a4)
HXLINE(   8)		NONE = (int)2;
            	}
{
            	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","boot",0x70a91430,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.boot","openfl/text/TextFieldAutoSize.hx",9,0x2bbbb0a4)
HXLINE(   9)		RIGHT = (int)3;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldAutoSize
