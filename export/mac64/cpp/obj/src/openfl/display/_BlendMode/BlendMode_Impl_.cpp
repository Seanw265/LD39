// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__BlendMode_BlendMode_Impl_
#include <openfl/display/_BlendMode/BlendMode_Impl_.h>
#endif

namespace openfl{
namespace display{
namespace _BlendMode{

void BlendMode_Impl__obj::__construct() { }

Dynamic BlendMode_Impl__obj::__CreateEmpty() { return new BlendMode_Impl__obj; }

hx::ObjectPtr< BlendMode_Impl__obj > BlendMode_Impl__obj::__new()
{
	hx::ObjectPtr< BlendMode_Impl__obj > _hx_result = new BlendMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic BlendMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlendMode_Impl__obj > _hx_result = new BlendMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic BlendMode_Impl__obj::ADD;

 ::Dynamic BlendMode_Impl__obj::ALPHA;

 ::Dynamic BlendMode_Impl__obj::DARKEN;

 ::Dynamic BlendMode_Impl__obj::DIFFERENCE;

 ::Dynamic BlendMode_Impl__obj::ERASE;

 ::Dynamic BlendMode_Impl__obj::HARDLIGHT;

 ::Dynamic BlendMode_Impl__obj::INVERT;

 ::Dynamic BlendMode_Impl__obj::LAYER;

 ::Dynamic BlendMode_Impl__obj::LIGHTEN;

 ::Dynamic BlendMode_Impl__obj::MULTIPLY;

 ::Dynamic BlendMode_Impl__obj::NORMAL;

 ::Dynamic BlendMode_Impl__obj::OVERLAY;

 ::Dynamic BlendMode_Impl__obj::SCREEN;

 ::Dynamic BlendMode_Impl__obj::SHADER;

 ::Dynamic BlendMode_Impl__obj::SUBTRACT;

 ::Dynamic BlendMode_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","fromString",0x5c7dc184,"openfl.display._BlendMode.BlendMode_Impl_.fromString","openfl/display/BlendMode.hx",24,0xe0e49a56)
            	HX_STACK_ARG(value,"value")
HXLINE(  24)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("add",21,f2,49,00)) ){
HXLINE(  24)			return (int)0;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("alpha",5e,a7,96,21)) ){
HXLINE(  24)			return (int)1;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("darken",5f,36,3a,21)) ){
HXLINE(  24)			return (int)2;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("difference",fd,9b,91,46)) ){
HXLINE(  24)			return (int)3;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("erase",e6,e8,1c,73)) ){
HXLINE(  24)			return (int)4;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("hardlight",0b,6e,6b,53)) ){
HXLINE(  24)			return (int)5;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE(  24)			return (int)6;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("layer",d1,81,c0,6f)) ){
HXLINE(  24)			return (int)7;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lighten",bf,4a,e3,19)) ){
HXLINE(  24)			return (int)8;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("multiply",24,e2,8c,9a)) ){
HXLINE(  24)			return (int)9;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  24)			return (int)10;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("overlay",90,43,10,a9)) ){
HXLINE(  24)			return (int)11;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("screen",6c,3b,5d,47)) ){
HXLINE(  24)			return (int)12;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("shader",25,bf,20,1d)) ){
HXLINE(  24)			return (int)13;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("subtract",14,75,11,f8)) ){
HXLINE(  24)			return (int)14;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  24)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendMode_Impl__obj,fromString,return )

::String BlendMode_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","toString",0xf610f815,"openfl.display._BlendMode.BlendMode_Impl_.toString","openfl/display/BlendMode.hx",49,0xe0e49a56)
            	HX_STACK_ARG(value,"value")
HXLINE(  49)		switch((int)(value)){
            			case (int)0: {
HXLINE(  49)				return HX_("add",21,f2,49,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  49)				return HX_("alpha",5e,a7,96,21);
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				return HX_("darken",5f,36,3a,21);
            			}
            			break;
            			case (int)3: {
HXLINE(  49)				return HX_("difference",fd,9b,91,46);
            			}
            			break;
            			case (int)4: {
HXLINE(  49)				return HX_("erase",e6,e8,1c,73);
            			}
            			break;
            			case (int)5: {
HXLINE(  49)				return HX_("hardlight",0b,6e,6b,53);
            			}
            			break;
            			case (int)6: {
HXLINE(  49)				return HX_("invert",16,e7,d8,9f);
            			}
            			break;
            			case (int)7: {
HXLINE(  49)				return HX_("layer",d1,81,c0,6f);
            			}
            			break;
            			case (int)8: {
HXLINE(  49)				return HX_("lighten",bf,4a,e3,19);
            			}
            			break;
            			case (int)9: {
HXLINE(  49)				return HX_("multiply",24,e2,8c,9a);
            			}
            			break;
            			case (int)10: {
HXLINE(  49)				return HX_("normal",27,72,69,30);
            			}
            			break;
            			case (int)11: {
HXLINE(  49)				return HX_("overlay",90,43,10,a9);
            			}
            			break;
            			case (int)12: {
HXLINE(  49)				return HX_("screen",6c,3b,5d,47);
            			}
            			break;
            			case (int)13: {
HXLINE(  49)				return HX_("shader",25,bf,20,1d);
            			}
            			break;
            			case (int)14: {
HXLINE(  49)				return HX_("subtract",14,75,11,f8);
            			}
            			break;
            			default:{
HXLINE(  49)				return null();
            			}
            		}
HXDLIN(  49)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendMode_Impl__obj,toString,return )


BlendMode_Impl__obj::BlendMode_Impl__obj()
{
}

bool BlendMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *BlendMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo BlendMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ADD,HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::DARKEN,HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::DIFFERENCE,HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ERASE,HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::HARDLIGHT,HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::LAYER,HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::LIGHTEN,HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::MULTIPLY,HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::OVERLAY,HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SCREEN,HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SHADER,HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SUBTRACT,HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BlendMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::HARDLIGHT,"HARDLIGHT");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::LAYER,"LAYER");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SHADER,"SHADER");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SUBTRACT,"SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlendMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::HARDLIGHT,"HARDLIGHT");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::LAYER,"LAYER");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SHADER,"SHADER");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SUBTRACT,"SUBTRACT");
};

#endif

hx::Class BlendMode_Impl__obj::__mClass;

static ::String BlendMode_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3"),
	HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38"),
	HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),
	HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed"),
	HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99"),
	HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28"),
	HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),
	HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf"),
	HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void BlendMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._BlendMode.BlendMode_Impl_","\x25","\xca","\x18","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlendMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BlendMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BlendMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BlendMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlendMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlendMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlendMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BlendMode_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",6,0xe0e49a56)
HXLINE(   6)		ADD = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",7,0xe0e49a56)
HXLINE(   7)		ALPHA = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",8,0xe0e49a56)
HXLINE(   8)		DARKEN = (int)2;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",9,0xe0e49a56)
HXLINE(   9)		DIFFERENCE = (int)3;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",10,0xe0e49a56)
HXLINE(  10)		ERASE = (int)4;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",11,0xe0e49a56)
HXLINE(  11)		HARDLIGHT = (int)5;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",12,0xe0e49a56)
HXLINE(  12)		INVERT = (int)6;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",13,0xe0e49a56)
HXLINE(  13)		LAYER = (int)7;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",14,0xe0e49a56)
HXLINE(  14)		LIGHTEN = (int)8;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",15,0xe0e49a56)
HXLINE(  15)		MULTIPLY = (int)9;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",16,0xe0e49a56)
HXLINE(  16)		NORMAL = (int)10;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",17,0xe0e49a56)
HXLINE(  17)		OVERLAY = (int)11;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",18,0xe0e49a56)
HXLINE(  18)		SCREEN = (int)12;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",19,0xe0e49a56)
HXLINE(  19)		SHADER = (int)13;
            	}
{
            	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","boot",0x5489831b,"openfl.display._BlendMode.BlendMode_Impl_.boot","openfl/display/BlendMode.hx",20,0xe0e49a56)
HXLINE(  20)		SUBTRACT = (int)14;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _BlendMode
