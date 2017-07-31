// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EndOfDaySubState
#include <EndOfDaySubState.h>
#endif
#ifndef INCLUDED_LotManager
#include <LotManager.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

static const Int _hx_array_data_0[] = {
	(Int)0,
};
static const Int _hx_array_data_1[] = {
	(Int)1,
};
static const Int _hx_array_data_2[] = {
	(Int)2,
};

void EndOfDaySubState_obj::__construct( ::PlayState playState,Int take,Int give,Int tomorrow){
            	HX_STACK_FRAME("EndOfDaySubState","new",0x944b30cd,"EndOfDaySubState.new","EndOfDaySubState.hx",16,0x19eba743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(playState,"playState")
            	HX_STACK_ARG(take,"take")
            	HX_STACK_ARG(give,"give")
            	HX_STACK_ARG(tomorrow,"tomorrow")
HXLINE(  17)		super::__construct(null());
HXLINE(  19)		this->playState = playState;
HXLINE(  21)		HX_VARI(  ::flixel::FlxSprite,backgroundSprite) =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  22)		Float _hx_tmp = (::flixel::FlxG_obj::camera->width * ((Float)0.9));
HXDLIN(  22)		Int _hx_tmp1 = ::Math_obj::round(_hx_tmp);
HXDLIN(  22)		Float _hx_tmp2 = (::flixel::FlxG_obj::camera->height * ((Float)0.9));
HXDLIN(  22)		Int _hx_tmp3 = ::Math_obj::round(_hx_tmp2);
HXDLIN(  22)		backgroundSprite->makeGraphic(_hx_tmp1,_hx_tmp3,(int)-14077892,null(),null());
HXLINE(  23)		Float _hx_tmp4 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  23)		Float _hx_tmp5 = backgroundSprite->get_width();
HXDLIN(  23)		backgroundSprite->set_x((_hx_tmp4 - ((Float)_hx_tmp5 / (Float)(int)2)));
HXLINE(  24)		Float _hx_tmp6 = ((Float)::flixel::FlxG_obj::height / (Float)(int)2);
HXDLIN(  24)		Float _hx_tmp7 = backgroundSprite->get_height();
HXDLIN(  24)		backgroundSprite->set_y((_hx_tmp6 - ((Float)_hx_tmp7 / (Float)(int)2)));
HXLINE(  25)		this->add(backgroundSprite);
HXLINE(  27)		Float _hx_tmp8 = backgroundSprite->x;
HXDLIN(  27)		Float _hx_tmp9 = backgroundSprite->get_width();
HXDLIN(  27)		Float _hx_tmp10 = (((_hx_tmp8 + _hx_tmp9) - (int)8) - (int)2);
HXDLIN(  27)		Float _hx_tmp11 = (backgroundSprite->y + (int)2);
HXDLIN(  27)		HX_VARI(  ::flixel::ui::FlxButton,cancelButton) =  ::flixel::ui::FlxButton_obj::__new(_hx_tmp10,_hx_tmp11,HX_("",00,00,00,00),this->close_dyn());
HXLINE(  28)		cancelButton->loadGraphic(HX_("assets/images/CloseButton.png",9a,7a,e2,97),true,(int)8,(int)8,null(),null());
HXLINE(  29)		cancelButton->animation->add(HX_("normal",27,72,69,30),::Array_obj< Int >::fromData( _hx_array_data_0,1),null(),null(),null(),null());
HXLINE(  30)		cancelButton->animation->add(HX_("highlight",34,56,00,ed),::Array_obj< Int >::fromData( _hx_array_data_1,1),null(),null(),null(),null());
HXLINE(  31)		cancelButton->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< Int >::fromData( _hx_array_data_2,1),null(),null(),null(),null());
HXLINE(  32)		this->add(cancelButton);
HXLINE(  34)		Float _hx_tmp12 = (backgroundSprite->x + (int)2);
HXDLIN(  34)		Float _hx_tmp13 = (backgroundSprite->y + (int)2);
HXDLIN(  34)		::String _hx_tmp14 = ((HX_("Day ",64,86,3c,2d) + playState->lots->day) + HX_(" Over",94,4d,64,a1));
HXDLIN(  34)		HX_VARI(  ::flixel::text::FlxText,titleDisplay) =  ::flixel::text::FlxText_obj::__new(_hx_tmp12,_hx_tmp13,(int)160,_hx_tmp14,(int)13,null());
HXLINE(  35)		titleDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  36)		titleDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  37)		this->add(titleDisplay);
HXLINE(  39)		Float _hx_tmp15 = (backgroundSprite->x + (int)2);
HXDLIN(  39)		Float _hx_tmp16 = backgroundSprite->get_width();
HXDLIN(  39)		Float _hx_tmp17 = (_hx_tmp15 - ((Float)(_hx_tmp16 - (int)4) / (Float)(int)2));
HXDLIN(  39)		Float _hx_tmp18 = titleDisplay->get_height();
HXDLIN(  39)		Float _hx_tmp19 = (_hx_tmp18 + titleDisplay->y);
HXDLIN(  39)		Float _hx_tmp20 = backgroundSprite->get_width();
HXDLIN(  39)		Float _hx_tmp21 = ((_hx_tmp20 - (int)4) * (int)2);
HXDLIN(  39)		::String _hx_tmp22 = ::Std_obj::string(give);
HXDLIN(  39)		::String _hx_tmp23 = ((HX_("Well that's the end of the day.\n\nThe city gave you $",37,85,5b,00) + _hx_tmp22) + HX_(" and took ",c0,4e,71,a8));
HXDLIN(  39)		::String _hx_tmp24 = ::Std_obj::string(take);
HXDLIN(  39)		::String _hx_tmp25 = ((_hx_tmp23 + _hx_tmp24) + HX_(" U.\n(PSST that's less than you'd get by selling it! But you still have to have enough for the city at the end of the day!)\n\nBe careful! Tomorrow the city will need ",c5,40,93,17));
HXDLIN(  39)		::String _hx_tmp26 = ::Std_obj::string(tomorrow);
HXDLIN(  39)		HX_VARI(  ::flixel::text::FlxText,instructionsDisplay) =  ::flixel::text::FlxText_obj::__new(_hx_tmp17,_hx_tmp19,_hx_tmp21,((_hx_tmp25 + _hx_tmp26) + HX_(" U",35,1c,00,00)),(int)13,null());
HXLINE(  40)		instructionsDisplay->scale->set_x(((Float)0.5));
HXLINE(  41)		instructionsDisplay->scale->set_y(((Float)0.5));
HXLINE(  42)		Float _hx_tmp27 = titleDisplay->get_height();
HXDLIN(  42)		Float _hx_tmp28 = (_hx_tmp27 + titleDisplay->y);
HXDLIN(  42)		Float _hx_tmp29 = titleDisplay->get_height();
HXDLIN(  42)		instructionsDisplay->set_y((_hx_tmp28 - ((Float)_hx_tmp29 / (Float)(int)2)));
HXLINE(  43)		instructionsDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  44)		instructionsDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  45)		this->add(instructionsDisplay);
            	}

Dynamic EndOfDaySubState_obj::__CreateEmpty() { return new EndOfDaySubState_obj; }

hx::ObjectPtr< EndOfDaySubState_obj > EndOfDaySubState_obj::__new( ::PlayState playState,Int take,Int give,Int tomorrow)
{
	hx::ObjectPtr< EndOfDaySubState_obj > _hx_result = new EndOfDaySubState_obj();
	_hx_result->__construct(playState,take,give,tomorrow);
	return _hx_result;
}

Dynamic EndOfDaySubState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EndOfDaySubState_obj > _hx_result = new EndOfDaySubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

 ::Dynamic EndOfDaySubState_obj::add( ::Dynamic _tmp_b){
            	HX_STACK_FRAME("EndOfDaySubState","add",0x9441528e,"EndOfDaySubState.add","EndOfDaySubState.hx",48,0x19eba743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_tmp_b,"_tmp_b")
HXLINE(  49)		HX_VARI(  ::flixel::FlxBasic,b) = ( ( ::flixel::FlxBasic)(_tmp_b) );
HXDLIN(  49)		Bool _hx_tmp = ::Std_obj::is(b,hx::ClassOf< ::flixel::FlxObject >());
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			HX_VARI(  ::flixel::FlxObject,o) = hx::TCast<  ::flixel::FlxObject >::cast(b);
HXLINE(  51)			o->scrollFactor->set_x((int)0);
HXLINE(  52)			o->scrollFactor->set_y((int)0);
            		}
HXLINE(  54)		return ( ( ::flixel::FlxBasic)(this->super::add(b)) );
            	}



EndOfDaySubState_obj::EndOfDaySubState_obj()
{
}

void EndOfDaySubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EndOfDaySubState);
	HX_MARK_MEMBER_NAME(playState,"playState");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EndOfDaySubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playState,"playState");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val EndOfDaySubState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { return hx::Val( playState); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EndOfDaySubState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { playState=inValue.Cast<  ::PlayState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EndOfDaySubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EndOfDaySubState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(EndOfDaySubState_obj,playState),HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EndOfDaySubState_obj_sStaticStorageInfo = 0;
#endif

static ::String EndOfDaySubState_obj_sMemberFields[] = {
	HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	::String(null()) };

static void EndOfDaySubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndOfDaySubState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EndOfDaySubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndOfDaySubState_obj::__mClass,"__mClass");
};

#endif

hx::Class EndOfDaySubState_obj::__mClass;

void EndOfDaySubState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EndOfDaySubState","\x5b","\xc6","\xbd","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EndOfDaySubState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EndOfDaySubState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EndOfDaySubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EndOfDaySubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EndOfDaySubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EndOfDaySubState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
