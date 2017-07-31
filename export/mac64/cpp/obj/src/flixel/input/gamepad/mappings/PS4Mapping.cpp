// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#include <flixel/input/gamepad/id/PS4ID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#include <flixel/input/gamepad/mappings/PS4Mapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void PS4Mapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","new",0x2b618f95,"flixel.input.gamepad.mappings.PS4Mapping.new","flixel/input/gamepad/mappings/PS4Mapping.hx",6,0x24847fdd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   6)		super::__construct(attachment);
            	}

Dynamic PS4Mapping_obj::__CreateEmpty() { return new PS4Mapping_obj; }

hx::ObjectPtr< PS4Mapping_obj > PS4Mapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< PS4Mapping_obj > _hx_result = new PS4Mapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic PS4Mapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PS4Mapping_obj > _hx_result = new PS4Mapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void PS4Mapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","initValues",0xcf26207d,"flixel.input.gamepad.mappings.PS4Mapping.initValues","flixel/input/gamepad/mappings/PS4Mapping.hx",20,0x24847fdd)
            	HX_STACK_THIS(this)
HXLINE(  21)		this->leftStick = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;
HXLINE(  22)		this->rightStick = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;
            	}


Int PS4Mapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","getID",0xeac44866,"flixel.input.gamepad.mappings.PS4Mapping.getID","flixel/input/gamepad/mappings/PS4Mapping.hx",27,0x24847fdd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  27)		switch((int)(rawID)){
            			case (int)6: {
HXLINE(  27)				return (int)0;
            			}
            			break;
            			case (int)7: {
HXLINE(  27)				return (int)1;
            			}
            			break;
            			case (int)8: {
HXLINE(  27)				return (int)2;
            			}
            			break;
            			case (int)9: {
HXLINE(  27)				return (int)3;
            			}
            			break;
            			case (int)10: {
HXLINE(  27)				return (int)6;
            			}
            			break;
            			case (int)11: {
HXLINE(  27)				return (int)10;
            			}
            			break;
            			case (int)12: {
HXLINE(  27)				return (int)7;
            			}
            			break;
            			case (int)13: {
HXLINE(  27)				return (int)8;
            			}
            			break;
            			case (int)14: {
HXLINE(  27)				return (int)9;
            			}
            			break;
            			case (int)15: {
HXLINE(  27)				return (int)4;
            			}
            			break;
            			case (int)16: {
HXLINE(  27)				return (int)5;
            			}
            			break;
            			case (int)17: {
HXLINE(  27)				return (int)11;
            			}
            			break;
            			case (int)18: {
HXLINE(  27)				return (int)12;
            			}
            			break;
            			case (int)19: {
HXLINE(  27)				return (int)13;
            			}
            			break;
            			case (int)20: {
HXLINE(  27)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  44)				if ((rawID == this->leftStick->rawUp)) {
HXLINE(  27)					return (int)34;
            				}
            				else {
HXLINE(  45)					if ((rawID == this->leftStick->rawDown)) {
HXLINE(  27)						return (int)36;
            					}
            					else {
HXLINE(  46)						if ((rawID == this->leftStick->rawLeft)) {
HXLINE(  27)							return (int)37;
            						}
            						else {
HXLINE(  47)							if ((rawID == this->leftStick->rawRight)) {
HXLINE(  27)								return (int)35;
            							}
            							else {
HXLINE(  48)								if ((rawID == this->rightStick->rawUp)) {
HXLINE(  27)									return (int)38;
            								}
            								else {
HXLINE(  49)									if ((rawID == this->rightStick->rawDown)) {
HXLINE(  27)										return (int)40;
            									}
            									else {
HXLINE(  50)										if ((rawID == this->rightStick->rawLeft)) {
HXLINE(  27)											return (int)41;
            										}
            										else {
HXLINE(  51)											if ((rawID == this->rightStick->rawRight)) {
HXLINE(  27)												return (int)39;
            											}
            											else {
HXLINE(  27)												return (int)-1;
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
HXDLIN(  27)		return null();
            	}


Int PS4Mapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","getRawID",0x44a56ff8,"flixel.input.gamepad.mappings.PS4Mapping.getRawID","flixel/input/gamepad/mappings/PS4Mapping.hx",58,0x24847fdd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  58)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  58)				return (int)6;
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				return (int)7;
            			}
            			break;
            			case (int)2: {
HXLINE(  58)				return (int)8;
            			}
            			break;
            			case (int)3: {
HXLINE(  58)				return (int)9;
            			}
            			break;
            			case (int)4: {
HXLINE(  58)				return (int)15;
            			}
            			break;
            			case (int)5: {
HXLINE(  58)				return (int)16;
            			}
            			break;
            			case (int)6: {
HXLINE(  58)				return (int)10;
            			}
            			break;
            			case (int)7: {
HXLINE(  58)				return (int)12;
            			}
            			break;
            			case (int)8: {
HXLINE(  58)				return (int)13;
            			}
            			break;
            			case (int)9: {
HXLINE(  58)				return (int)14;
            			}
            			break;
            			case (int)10: {
HXLINE(  58)				return (int)11;
            			}
            			break;
            			case (int)11: {
HXLINE(  58)				return (int)17;
            			}
            			break;
            			case (int)12: {
HXLINE(  58)				return (int)18;
            			}
            			break;
            			case (int)13: {
HXLINE(  58)				return (int)19;
            			}
            			break;
            			case (int)14: {
HXLINE(  58)				return (int)20;
            			}
            			break;
            			case (int)17: {
HXLINE(  58)				return (int)4;
            			}
            			break;
            			case (int)18: {
HXLINE(  58)				return (int)5;
            			}
            			break;
            			case (int)34: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  58)				return ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  58)				return (int)-1;
            			}
            		}
HXDLIN(  58)		return (int)0;
            	}



PS4Mapping_obj::PS4Mapping_obj()
{
}

hx::Val PS4Mapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PS4Mapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PS4Mapping_obj_sStaticStorageInfo = 0;
#endif

static ::String PS4Mapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	::String(null()) };

static void PS4Mapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PS4Mapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::__mClass,"__mClass");
};

#endif

hx::Class PS4Mapping_obj::__mClass;

void PS4Mapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.PS4Mapping","\x23","\x21","\xfb","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PS4Mapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PS4Mapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PS4Mapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PS4Mapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PS4Mapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PS4Mapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
