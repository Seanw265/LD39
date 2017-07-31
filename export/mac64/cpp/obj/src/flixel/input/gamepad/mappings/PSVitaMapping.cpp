// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PSVitaID
#include <flixel/input/gamepad/id/PSVitaID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PSVitaMapping
#include <flixel/input/gamepad/mappings/PSVitaMapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void PSVitaMapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PSVitaMapping","new",0x4af00697,"flixel.input.gamepad.mappings.PSVitaMapping.new","flixel/input/gamepad/mappings/PSVitaMapping.hx",6,0xe1b17b97)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   6)		super::__construct(attachment);
            	}

Dynamic PSVitaMapping_obj::__CreateEmpty() { return new PSVitaMapping_obj; }

hx::ObjectPtr< PSVitaMapping_obj > PSVitaMapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< PSVitaMapping_obj > _hx_result = new PSVitaMapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic PSVitaMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PSVitaMapping_obj > _hx_result = new PSVitaMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void PSVitaMapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PSVitaMapping","initValues",0xc2c96dbb,"flixel.input.gamepad.mappings.PSVitaMapping.initValues","flixel/input/gamepad/mappings/PSVitaMapping.hx",9,0xe1b17b97)
            	HX_STACK_THIS(this)
HXLINE(  10)		this->leftStick = ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK;
HXLINE(  11)		this->rightStick = ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK;
            	}


Int PSVitaMapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PSVitaMapping","getID",0xe42003e8,"flixel.input.gamepad.mappings.PSVitaMapping.getID","flixel/input/gamepad/mappings/PSVitaMapping.hx",16,0xe1b17b97)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  16)		switch((int)(rawID)){
            			case (int)6: {
HXLINE(  16)				return (int)0;
            			}
            			break;
            			case (int)7: {
HXLINE(  16)				return (int)1;
            			}
            			break;
            			case (int)8: {
HXLINE(  16)				return (int)2;
            			}
            			break;
            			case (int)9: {
HXLINE(  16)				return (int)3;
            			}
            			break;
            			case (int)10: {
HXLINE(  16)				return (int)6;
            			}
            			break;
            			case (int)12: {
HXLINE(  16)				return (int)7;
            			}
            			break;
            			case (int)15: {
HXLINE(  16)				return (int)4;
            			}
            			break;
            			case (int)16: {
HXLINE(  16)				return (int)5;
            			}
            			break;
            			case (int)17: {
HXLINE(  16)				return (int)11;
            			}
            			break;
            			case (int)18: {
HXLINE(  16)				return (int)12;
            			}
            			break;
            			case (int)19: {
HXLINE(  16)				return (int)13;
            			}
            			break;
            			case (int)20: {
HXLINE(  16)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  30)				if ((rawID == this->leftStick->rawUp)) {
HXLINE(  16)					return (int)34;
            				}
            				else {
HXLINE(  31)					if ((rawID == this->leftStick->rawDown)) {
HXLINE(  16)						return (int)34;
            					}
            					else {
HXLINE(  32)						if ((rawID == this->leftStick->rawLeft)) {
HXLINE(  16)							return (int)37;
            						}
            						else {
HXLINE(  33)							if ((rawID == this->leftStick->rawRight)) {
HXLINE(  16)								return (int)35;
            							}
            							else {
HXLINE(  34)								if ((rawID == this->rightStick->rawUp)) {
HXLINE(  16)									return (int)38;
            								}
            								else {
HXLINE(  35)									if ((rawID == this->rightStick->rawDown)) {
HXLINE(  16)										return (int)40;
            									}
            									else {
HXLINE(  36)										if ((rawID == this->rightStick->rawLeft)) {
HXLINE(  16)											return (int)41;
            										}
            										else {
HXLINE(  37)											if ((rawID == this->rightStick->rawRight)) {
HXLINE(  16)												return (int)39;
            											}
            											else {
HXLINE(  16)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN(  16)		return null();
            	}


Int PSVitaMapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PSVitaMapping","getRawID",0x46fe51b6,"flixel.input.gamepad.mappings.PSVitaMapping.getRawID","flixel/input/gamepad/mappings/PSVitaMapping.hx",44,0xe1b17b97)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  44)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  44)				return (int)6;
            			}
            			break;
            			case (int)1: {
HXLINE(  44)				return (int)7;
            			}
            			break;
            			case (int)2: {
HXLINE(  44)				return (int)8;
            			}
            			break;
            			case (int)3: {
HXLINE(  44)				return (int)9;
            			}
            			break;
            			case (int)4: {
HXLINE(  44)				return (int)15;
            			}
            			break;
            			case (int)5: {
HXLINE(  44)				return (int)16;
            			}
            			break;
            			case (int)6: {
HXLINE(  44)				return (int)10;
            			}
            			break;
            			case (int)7: {
HXLINE(  44)				return (int)12;
            			}
            			break;
            			case (int)11: {
HXLINE(  44)				return (int)17;
            			}
            			break;
            			case (int)12: {
HXLINE(  44)				return (int)18;
            			}
            			break;
            			case (int)13: {
HXLINE(  44)				return (int)19;
            			}
            			break;
            			case (int)14: {
HXLINE(  44)				return (int)20;
            			}
            			break;
            			case (int)34: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  44)				return ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  44)				return (int)-1;
            			}
            		}
HXDLIN(  44)		return (int)0;
            	}


Bool PSVitaMapping_obj::isAxisFlipped(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PSVitaMapping","isAxisFlipped",0x43decece,"flixel.input.gamepad.mappings.PSVitaMapping.isAxisFlipped","flixel/input/gamepad/mappings/PSVitaMapping.hx",72,0xe1b17b97)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE(  72)		if ((axisID != ::flixel::input::gamepad::id::PSVitaID_obj::LEFT_ANALOG_STICK->y)) {
HXLINE(  72)			return (axisID == ::flixel::input::gamepad::id::PSVitaID_obj::RIGHT_ANALOG_STICK->y);
            		}
            		else {
HXLINE(  72)			return true;
            		}
HXDLIN(  72)		return false;
            	}



PSVitaMapping_obj::PSVitaMapping_obj()
{
}

hx::Val PSVitaMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return hx::Val( isAxisFlipped_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PSVitaMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PSVitaMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String PSVitaMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	::String(null()) };

static void PSVitaMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PSVitaMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PSVitaMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PSVitaMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class PSVitaMapping_obj::__mClass;

void PSVitaMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.PSVitaMapping","\x25","\x6f","\x7d","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PSVitaMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PSVitaMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PSVitaMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PSVitaMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PSVitaMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PSVitaMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
