// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_LotManager
#include <LotManager.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_SellPowerSubState
#include <SellPowerSubState.h>
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
static const Int _hx_array_data_3[] = {
	(Int)0,
};
static const Int _hx_array_data_4[] = {
	(Int)1,
};
static const Int _hx_array_data_5[] = {
	(Int)2,
};
static const Int _hx_array_data_6[] = {
	(Int)0,
};
static const Int _hx_array_data_7[] = {
	(Int)1,
};
static const Int _hx_array_data_8[] = {
	(Int)2,
};
static const Int _hx_array_data_9[] = {
	(Int)0,
};
static const Int _hx_array_data_10[] = {
	(Int)1,
};
static const Int _hx_array_data_11[] = {
	(Int)2,
};

void SellPowerSubState_obj::__construct( ::PlayState playState){
            	HX_STACK_FRAME("SellPowerSubState","new",0x58af4576,"SellPowerSubState.new","SellPowerSubState.hx",21,0xf85c9aba)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(playState,"playState")
HXLINE(  22)		super::__construct(null());
HXLINE(  24)		this->playState = playState;
HXLINE(  26)		this->exchangeRate = playState->lots->exchangeRate;
HXLINE(  28)		HX_VARI(  ::flixel::FlxSprite,backgroundSprite) =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  29)		Float _hx_tmp = (::flixel::FlxG_obj::camera->width * ((Float)0.9));
HXDLIN(  29)		Int _hx_tmp1 = ::Math_obj::round(_hx_tmp);
HXDLIN(  29)		Float _hx_tmp2 = (::flixel::FlxG_obj::camera->height * ((Float)0.9));
HXDLIN(  29)		Int _hx_tmp3 = ::Math_obj::round(_hx_tmp2);
HXDLIN(  29)		backgroundSprite->makeGraphic(_hx_tmp1,_hx_tmp3,(int)-14077892,null(),null());
HXLINE(  30)		Float _hx_tmp4 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  30)		Float _hx_tmp5 = backgroundSprite->get_width();
HXDLIN(  30)		backgroundSprite->set_x((_hx_tmp4 - ((Float)_hx_tmp5 / (Float)(int)2)));
HXLINE(  31)		Float _hx_tmp6 = ((Float)::flixel::FlxG_obj::height / (Float)(int)2);
HXDLIN(  31)		Float _hx_tmp7 = backgroundSprite->get_height();
HXDLIN(  31)		backgroundSprite->set_y((_hx_tmp6 - ((Float)_hx_tmp7 / (Float)(int)2)));
HXLINE(  32)		this->add(backgroundSprite);
HXLINE(  34)		Float _hx_tmp8 = (backgroundSprite->x + (int)2);
HXDLIN(  34)		Float _hx_tmp9 = (backgroundSprite->y + (int)2);
HXDLIN(  34)		HX_VARI(  ::flixel::text::FlxText,titleDisplay) =  ::flixel::text::FlxText_obj::__new(_hx_tmp8,_hx_tmp9,(int)160,HX_("Sell Some Power Units!",6b,cb,6a,72),(int)13,null());
HXLINE(  35)		titleDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  36)		titleDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  37)		this->add(titleDisplay);
HXLINE(  39)		Float _hx_tmp10 = (backgroundSprite->x + (int)2);
HXDLIN(  39)		Float _hx_tmp11 = backgroundSprite->get_width();
HXDLIN(  39)		Float _hx_tmp12 = (_hx_tmp10 - ((Float)(_hx_tmp11 - (int)4) / (Float)(int)2));
HXDLIN(  39)		Float _hx_tmp13 = titleDisplay->get_height();
HXDLIN(  39)		Float _hx_tmp14 = (_hx_tmp13 + titleDisplay->y);
HXDLIN(  39)		Float _hx_tmp15 = backgroundSprite->get_width();
HXDLIN(  39)		Float _hx_tmp16 = ((_hx_tmp15 - (int)4) * (int)2);
HXDLIN(  39)		Float _hx_tmp17 = (((int)5 * this->exchangeRate) * (int)100);
HXDLIN(  39)		Int _hx_tmp18 = ::Math_obj::floor(_hx_tmp17);
HXDLIN(  39)		HX_VARI(  ::flixel::text::FlxText,instructionsDisplay) =  ::flixel::text::FlxText_obj::__new(_hx_tmp12,_hx_tmp14,_hx_tmp16,(HX_("Click on a button to sell that many power units!\n5 U = $ ",7b,e4,da,db) + ((Float)_hx_tmp18 / (Float)((Float)100.0))),(int)13,null());
HXLINE(  40)		instructionsDisplay->scale->set_x(((Float)0.5));
HXLINE(  41)		instructionsDisplay->scale->set_y(((Float)0.5));
HXLINE(  42)		Float _hx_tmp19 = titleDisplay->get_height();
HXDLIN(  42)		Float _hx_tmp20 = (_hx_tmp19 + titleDisplay->y);
HXDLIN(  42)		Float _hx_tmp21 = titleDisplay->get_height();
HXDLIN(  42)		instructionsDisplay->set_y((_hx_tmp20 - ((Float)_hx_tmp21 / (Float)(int)2)));
HXLINE(  43)		instructionsDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  44)		instructionsDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  45)		this->add(instructionsDisplay);
HXLINE(  47)		Float _hx_tmp22 = backgroundSprite->x;
HXDLIN(  47)		Float _hx_tmp23 = backgroundSprite->get_width();
HXDLIN(  47)		Float _hx_tmp24 = (((_hx_tmp22 + _hx_tmp23) - (int)8) - (int)2);
HXDLIN(  47)		Float _hx_tmp25 = (backgroundSprite->y + (int)2);
HXDLIN(  47)		HX_VARI(  ::flixel::ui::FlxButton,cancelButton) =  ::flixel::ui::FlxButton_obj::__new(_hx_tmp24,_hx_tmp25,HX_("",00,00,00,00),this->close_dyn());
HXLINE(  48)		cancelButton->loadGraphic(HX_("assets/images/CloseButton.png",9a,7a,e2,97),true,(int)8,(int)8,null(),null());
HXLINE(  49)		cancelButton->animation->add(HX_("normal",27,72,69,30),::Array_obj< Int >::fromData( _hx_array_data_0,1),null(),null(),null(),null());
HXLINE(  50)		cancelButton->animation->add(HX_("highlight",34,56,00,ed),::Array_obj< Int >::fromData( _hx_array_data_1,1),null(),null(),null(),null());
HXLINE(  51)		cancelButton->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< Int >::fromData( _hx_array_data_2,1),null(),null(),null(),null());
HXLINE(  52)		this->add(cancelButton);
HXLINE(  56)		Float _hx_tmp26 = backgroundSprite->x;
HXDLIN(  56)		Float _hx_tmp27 = backgroundSprite->get_width();
HXDLIN(  56)		Float _hx_tmp28 = ((_hx_tmp26 + ((Float)_hx_tmp27 / (Float)(int)2)) - (int)14);
HXDLIN(  56)		Float _hx_tmp29 = backgroundSprite->y;
HXDLIN(  56)		Float _hx_tmp30 = backgroundSprite->get_height();
HXDLIN(  56)		HX_VARI(  ::flixel::ui::FlxButton,sell50) =  ::flixel::ui::FlxButton_obj::__new(_hx_tmp28,((_hx_tmp29 + ((Float)_hx_tmp30 / (Float)(int)2)) - (int)9),HX_("",00,00,00,00),this->sell50_dyn());
HXLINE(  57)		sell50->loadGraphic(HX_("assets/images/Sell50.png",b3,59,78,60),true,(int)28,(int)35,null(),null());
HXLINE(  58)		sell50->animation->add(HX_("normal",27,72,69,30),::Array_obj< Int >::fromData( _hx_array_data_3,1),null(),null(),null(),null());
HXLINE(  59)		sell50->animation->add(HX_("highlight",34,56,00,ed),::Array_obj< Int >::fromData( _hx_array_data_4,1),null(),null(),null(),null());
HXLINE(  60)		sell50->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< Int >::fromData( _hx_array_data_5,1),null(),null(),null(),null());
HXLINE(  61)		this->add(sell50);
HXLINE(  63)		Float _hx_tmp31 = sell50->x;
HXDLIN(  63)		Float _hx_tmp32 = sell50->get_width();
HXDLIN(  63)		HX_VARI(  ::flixel::ui::FlxButton,sell5) =  ::flixel::ui::FlxButton_obj::__new(((_hx_tmp31 - _hx_tmp32) - (int)2),sell50->y,HX_("",00,00,00,00),this->sell5_dyn());
HXLINE(  64)		sell5->loadGraphic(HX_("assets/images/Sell5.png",f3,f9,90,f9),true,(int)28,(int)35,null(),null());
HXLINE(  65)		sell5->animation->add(HX_("normal",27,72,69,30),::Array_obj< Int >::fromData( _hx_array_data_6,1),null(),null(),null(),null());
HXLINE(  66)		sell5->animation->add(HX_("highlight",34,56,00,ed),::Array_obj< Int >::fromData( _hx_array_data_7,1),null(),null(),null(),null());
HXLINE(  67)		sell5->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< Int >::fromData( _hx_array_data_8,1),null(),null(),null(),null());
HXLINE(  68)		this->add(sell5);
HXLINE(  70)		Float _hx_tmp33 = sell50->x;
HXDLIN(  70)		Float _hx_tmp34 = sell50->get_width();
HXDLIN(  70)		HX_VARI(  ::flixel::ui::FlxButton,sell500) =  ::flixel::ui::FlxButton_obj::__new(((_hx_tmp33 + _hx_tmp34) + (int)2),sell50->y,HX_("",00,00,00,00),this->sell500_dyn());
HXLINE(  71)		sell500->loadGraphic(HX_("assets/images/Sell500.png",f3,c1,04,04),true,(int)28,(int)35,null(),null());
HXLINE(  72)		sell500->animation->add(HX_("normal",27,72,69,30),::Array_obj< Int >::fromData( _hx_array_data_9,1),null(),null(),null(),null());
HXLINE(  73)		sell500->animation->add(HX_("highlight",34,56,00,ed),::Array_obj< Int >::fromData( _hx_array_data_10,1),null(),null(),null(),null());
HXLINE(  74)		sell500->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< Int >::fromData( _hx_array_data_11,1),null(),null(),null(),null());
HXLINE(  75)		this->add(sell500);
HXLINE(  77)		Int _hx_tmp35 = ::Math_obj::round(playState->lots->totalUnits);
HXDLIN(  77)		this->unitsDisplay =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)100,(_hx_tmp35 + HX_(" U",35,1c,00,00)),(int)13,null());
HXLINE(  78)		this->unitsDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  79)		this->unitsDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  80)		Float _hx_tmp36 = (backgroundSprite->x + (int)2);
HXDLIN(  80)		Float _hx_tmp37 = this->unitsDisplay->get_width();
HXDLIN(  80)		this->unitsDisplay->set_x((_hx_tmp36 - ((Float)_hx_tmp37 / (Float)(int)4)));
HXLINE(  81)		Float _hx_tmp38 = backgroundSprite->get_height();
HXDLIN(  81)		Float _hx_tmp39 = (_hx_tmp38 + backgroundSprite->y);
HXDLIN(  81)		Float _hx_tmp40 = this->unitsDisplay->get_height();
HXDLIN(  81)		this->unitsDisplay->set_y((_hx_tmp39 - _hx_tmp40));
HXLINE(  83)		this->unitsDisplay->scale->set_x(((Float)0.5));
HXLINE(  84)		this->unitsDisplay->scale->set_y(((Float)0.5));
HXLINE(  85)		this->add(this->unitsDisplay);
HXLINE(  87)		Int _hx_tmp41 = ::Math_obj::round(playState->lots->money);
HXDLIN(  87)		this->cashDisplay =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)100,(_hx_tmp41 + HX_(" $",04,1c,00,00)),(int)13,null());
HXLINE(  88)		this->cashDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  89)		this->cashDisplay->set_alignment(HX_("left",07,08,b0,47));
HXLINE(  90)		this->cashDisplay->set_x(this->unitsDisplay->x);
HXLINE(  91)		Float _hx_tmp42 = this->unitsDisplay->y;
HXDLIN(  91)		Float _hx_tmp43 = this->unitsDisplay->get_height();
HXDLIN(  91)		Float _hx_tmp44 = (_hx_tmp42 + (_hx_tmp43 * this->unitsDisplay->scale->y));
HXDLIN(  91)		Float _hx_tmp45 = this->cashDisplay->get_height();
HXDLIN(  91)		this->cashDisplay->set_y(((_hx_tmp44 - ((Float)_hx_tmp45 / (Float)(int)4)) + (int)1));
HXLINE(  92)		this->cashDisplay->scale->set_x(((Float)0.5));
HXLINE(  93)		this->cashDisplay->scale->set_y(((Float)0.5));
HXLINE(  94)		this->add(this->cashDisplay);
            	}

Dynamic SellPowerSubState_obj::__CreateEmpty() { return new SellPowerSubState_obj; }

hx::ObjectPtr< SellPowerSubState_obj > SellPowerSubState_obj::__new( ::PlayState playState)
{
	hx::ObjectPtr< SellPowerSubState_obj > _hx_result = new SellPowerSubState_obj();
	_hx_result->__construct(playState);
	return _hx_result;
}

Dynamic SellPowerSubState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SellPowerSubState_obj > _hx_result = new SellPowerSubState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void SellPowerSubState_obj::sell5(){
            	HX_STACK_FRAME("SellPowerSubState","sell5",0x381cfaf9,"SellPowerSubState.sell5","SellPowerSubState.hx",98,0xf85c9aba)
            	HX_STACK_THIS(this)
HXLINE(  98)		this->sell((int)5);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SellPowerSubState_obj,sell5,(void))

void SellPowerSubState_obj::sell50(){
            	HX_STACK_FRAME("SellPowerSubState","sell50",0xe13e9f17,"SellPowerSubState.sell50","SellPowerSubState.hx",101,0xf85c9aba)
            	HX_STACK_THIS(this)
HXLINE( 101)		this->sell((int)50);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SellPowerSubState_obj,sell50,(void))

void SellPowerSubState_obj::sell500(){
            	HX_STACK_FRAME("SellPowerSubState","sell500",0x358c9539,"SellPowerSubState.sell500","SellPowerSubState.hx",104,0xf85c9aba)
            	HX_STACK_THIS(this)
HXLINE( 104)		this->sell((int)500);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SellPowerSubState_obj,sell500,(void))

void SellPowerSubState_obj::sell(Int amount){
            	HX_STACK_FRAME("SellPowerSubState","sell",0x43fb89bc,"SellPowerSubState.sell","SellPowerSubState.hx",107,0xf85c9aba)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(amount,"amount")
HXLINE( 108)		Bool _hx_tmp = (this->playState->lots->totalUnits >= amount);
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 109)			hx::AddEq(this->playState->lots->money,(amount * this->exchangeRate));
HXLINE( 110)			hx::SubEq(this->playState->lots->totalUnits,amount);
            		}
HXLINE( 113)		Int _hx_tmp1 = ::Math_obj::round(this->playState->lots->totalUnits);
HXDLIN( 113)		this->unitsDisplay->set_text((_hx_tmp1 + HX_(" U",35,1c,00,00)));
HXLINE( 114)		Int _hx_tmp2 = ::Math_obj::round(this->playState->lots->money);
HXDLIN( 114)		this->cashDisplay->set_text((_hx_tmp2 + HX_(" $",04,1c,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SellPowerSubState_obj,sell,(void))

 ::Dynamic SellPowerSubState_obj::add( ::Dynamic _tmp_b){
            	HX_STACK_FRAME("SellPowerSubState","add",0x58a56737,"SellPowerSubState.add","SellPowerSubState.hx",117,0xf85c9aba)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_tmp_b,"_tmp_b")
HXLINE( 118)		HX_VARI(  ::flixel::FlxBasic,b) = ( ( ::flixel::FlxBasic)(_tmp_b) );
HXDLIN( 118)		Bool _hx_tmp = ::Std_obj::is(b,hx::ClassOf< ::flixel::FlxObject >());
HXDLIN( 118)		if (_hx_tmp) {
HXLINE( 119)			HX_VARI(  ::flixel::FlxObject,o) = hx::TCast<  ::flixel::FlxObject >::cast(b);
HXLINE( 120)			o->scrollFactor->set_x((int)0);
HXLINE( 121)			o->scrollFactor->set_y((int)0);
            		}
HXLINE( 123)		return ( ( ::flixel::FlxBasic)(this->super::add(b)) );
            	}



SellPowerSubState_obj::SellPowerSubState_obj()
{
}

void SellPowerSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SellPowerSubState);
	HX_MARK_MEMBER_NAME(playState,"playState");
	HX_MARK_MEMBER_NAME(exchangeRate,"exchangeRate");
	HX_MARK_MEMBER_NAME(unitsDisplay,"unitsDisplay");
	HX_MARK_MEMBER_NAME(cashDisplay,"cashDisplay");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SellPowerSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playState,"playState");
	HX_VISIT_MEMBER_NAME(exchangeRate,"exchangeRate");
	HX_VISIT_MEMBER_NAME(unitsDisplay,"unitsDisplay");
	HX_VISIT_MEMBER_NAME(cashDisplay,"cashDisplay");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SellPowerSubState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sell") ) { return hx::Val( sell_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sell5") ) { return hx::Val( sell5_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sell50") ) { return hx::Val( sell50_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sell500") ) { return hx::Val( sell500_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { return hx::Val( playState); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cashDisplay") ) { return hx::Val( cashDisplay); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"exchangeRate") ) { return hx::Val( exchangeRate); }
		if (HX_FIELD_EQ(inName,"unitsDisplay") ) { return hx::Val( unitsDisplay); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SellPowerSubState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { playState=inValue.Cast<  ::PlayState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cashDisplay") ) { cashDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"exchangeRate") ) { exchangeRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitsDisplay") ) { unitsDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SellPowerSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4"));
	outFields->push(HX_HCSTRING("exchangeRate","\xa3","\x0e","\xb6","\x7e"));
	outFields->push(HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a"));
	outFields->push(HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SellPowerSubState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(SellPowerSubState_obj,playState),HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4")},
	{hx::fsFloat,(int)offsetof(SellPowerSubState_obj,exchangeRate),HX_HCSTRING("exchangeRate","\xa3","\x0e","\xb6","\x7e")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(SellPowerSubState_obj,unitsDisplay),HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(SellPowerSubState_obj,cashDisplay),HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SellPowerSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String SellPowerSubState_obj_sMemberFields[] = {
	HX_HCSTRING("playState","\x7d","\xa3","\xef","\xa4"),
	HX_HCSTRING("exchangeRate","\xa3","\x0e","\xb6","\x7e"),
	HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a"),
	HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39"),
	HX_HCSTRING("sell5","\x63","\x94","\x29","\x7a"),
	HX_HCSTRING("sell50","\x6d","\x42","\x38","\x6a"),
	HX_HCSTRING("sell500","\x23","\xdd","\x01","\x87"),
	HX_HCSTRING("sell","\x92","\x8b","\x50","\x4c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	::String(null()) };

static void SellPowerSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SellPowerSubState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SellPowerSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SellPowerSubState_obj::__mClass,"__mClass");
};

#endif

hx::Class SellPowerSubState_obj::__mClass;

void SellPowerSubState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SellPowerSubState","\x84","\x12","\x9e","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SellPowerSubState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SellPowerSubState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SellPowerSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SellPowerSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SellPowerSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SellPowerSubState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
