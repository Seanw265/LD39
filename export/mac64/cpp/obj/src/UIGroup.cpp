// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_ProgressBar
#include <ProgressBar.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIGroup
#include <UIGroup.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif


void UIGroup_obj::__construct(){
            	HX_STACK_FRAME("UIGroup","new",0x03ad0abd,"UIGroup.new","UIGroup.hx",27,0x6ac75b53)
            	HX_STACK_THIS(this)
HXLINE(  28)		super::__construct(null());
HXLINE(  36)		Float _hx_tmp = (::flixel::FlxG_obj::width * ((Float).8));
HXDLIN(  36)		HX_VARI(  ::flixel::FlxSprite,topRightBackgroundSprite) =  ::flixel::FlxSprite_obj::__new(_hx_tmp,(int)0,null());
HXLINE(  37)		Float _hx_tmp1 = (::flixel::FlxG_obj::width * ((Float)0.2));
HXDLIN(  37)		Int _hx_tmp2 = ::Math_obj::round(_hx_tmp1);
HXDLIN(  37)		Float _hx_tmp3 = (::flixel::FlxG_obj::height * ((Float).2));
HXDLIN(  37)		Int _hx_tmp4 = ::Math_obj::round(_hx_tmp3);
HXDLIN(  37)		topRightBackgroundSprite->makeGraphic(_hx_tmp2,_hx_tmp4,(int)-14077892,null(),null());
HXLINE(  38)		this->add(topRightBackgroundSprite);
HXLINE(  42)		this->unitsDisplay =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)100,HX_("0 U",65,88,24,00),(int)13,null());
HXLINE(  43)		this->unitsDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  44)		this->unitsDisplay->set_alignment(HX_("right",dc,0b,64,e9));
HXLINE(  45)		Int _hx_tmp5 = ::flixel::FlxG_obj::camera->width;
HXDLIN(  45)		Float _hx_tmp6 = this->unitsDisplay->get_width();
HXDLIN(  45)		Float _hx_tmp7 = (_hx_tmp5 - _hx_tmp6);
HXDLIN(  45)		Float _hx_tmp8 = this->unitsDisplay->get_width();
HXDLIN(  45)		this->unitsDisplay->set_x((_hx_tmp7 + ((Float)_hx_tmp8 / (Float)(int)4)));
HXLINE(  47)		this->unitsDisplay->scale->set_x(((Float)0.5));
HXLINE(  48)		this->unitsDisplay->scale->set_y(((Float)0.5));
HXLINE(  49)		this->add(this->unitsDisplay);
HXLINE(  51)		this->cashDisplay =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)100,HX_("0 $",34,88,24,00),(int)13,null());
HXLINE(  52)		this->cashDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  53)		this->cashDisplay->set_alignment(HX_("right",dc,0b,64,e9));
HXLINE(  54)		Int _hx_tmp9 = ::flixel::FlxG_obj::camera->width;
HXDLIN(  54)		Float _hx_tmp10 = this->cashDisplay->get_width();
HXDLIN(  54)		Float _hx_tmp11 = (_hx_tmp9 - _hx_tmp10);
HXDLIN(  54)		Float _hx_tmp12 = this->cashDisplay->get_width();
HXDLIN(  54)		this->cashDisplay->set_x((_hx_tmp11 + ((Float)_hx_tmp12 / (Float)(int)4)));
HXLINE(  55)		Float _hx_tmp13 = this->unitsDisplay->y;
HXDLIN(  55)		Float _hx_tmp14 = this->unitsDisplay->get_height();
HXDLIN(  55)		Float _hx_tmp15 = (_hx_tmp13 + (_hx_tmp14 * this->unitsDisplay->scale->y));
HXDLIN(  55)		Float _hx_tmp16 = this->cashDisplay->get_height();
HXDLIN(  55)		this->cashDisplay->set_y(((_hx_tmp15 - ((Float)_hx_tmp16 / (Float)(int)4)) + (int)1));
HXLINE(  56)		this->cashDisplay->scale->set_x(((Float)0.5));
HXLINE(  57)		this->cashDisplay->scale->set_y(((Float)0.5));
HXLINE(  58)		this->add(this->cashDisplay);
HXLINE(  62)		this->dayProgressBar =  ::ProgressBar_obj::__new();
HXLINE(  63)		Int _hx_tmp17 = ::flixel::FlxG_obj::width;
HXDLIN(  63)		Float _hx_tmp18 = topRightBackgroundSprite->get_width();
HXDLIN(  63)		this->dayProgressBar->set_x((_hx_tmp17 - _hx_tmp18));
HXLINE(  64)		Float _hx_tmp19 = topRightBackgroundSprite->get_width();
HXDLIN(  64)		this->dayProgressBar->setWidth(_hx_tmp19);
HXLINE(  65)		this->add(this->dayProgressBar);
HXLINE(  70)		this->dayDisplay =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)100,HX_("Day 0",4c,11,b9,67),(int)13,null());
HXLINE(  71)		this->dayDisplay->scale->set_x(((Float)0.5));
HXLINE(  72)		this->dayDisplay->scale->set_y(((Float)0.5));
HXLINE(  73)		this->dayDisplay->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  74)		this->dayDisplay->set_alignment(HX_("right",dc,0b,64,e9));
HXLINE(  76)		Int _hx_tmp20 = ::flixel::FlxG_obj::camera->width;
HXDLIN(  76)		Float _hx_tmp21 = this->dayDisplay->get_width();
HXDLIN(  76)		this->dayDisplay->set_x((_hx_tmp20 - _hx_tmp21));
HXLINE(  77)		Int _hx_tmp22 = ::flixel::FlxG_obj::camera->width;
HXDLIN(  77)		Float _hx_tmp23 = this->cashDisplay->get_width();
HXDLIN(  77)		Float _hx_tmp24 = (_hx_tmp22 - _hx_tmp23);
HXDLIN(  77)		Float _hx_tmp25 = this->cashDisplay->get_width();
HXDLIN(  77)		this->dayDisplay->set_x((_hx_tmp24 + ((Float)_hx_tmp25 / (Float)(int)4)));
HXLINE(  78)		Float _hx_tmp26 = this->cashDisplay->y;
HXDLIN(  78)		Float _hx_tmp27 = this->unitsDisplay->get_height();
HXDLIN(  78)		Float _hx_tmp28 = (_hx_tmp26 + (_hx_tmp27 * this->unitsDisplay->scale->y));
HXDLIN(  78)		Float _hx_tmp29 = this->cashDisplay->get_height();
HXDLIN(  78)		this->dayDisplay->set_y(((_hx_tmp28 - ((Float)_hx_tmp29 / (Float)(int)4)) + (int)1));
HXLINE(  84)		this->add(this->dayDisplay);
HXLINE(  86)		this->placingTextBackground =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  87)		this->add(this->placingTextBackground);
HXLINE(  89)		this->placingText =  ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,HX_("Click a lot to build",4f,0c,93,0f),(int)13,null());
HXLINE(  90)		this->placingText->set_font(HX_("assets/data/visitor2.ttf",b5,24,16,61));
HXLINE(  91)		this->placingText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  92)		this->placingText->set_exists(false);
HXLINE(  93)		this->add(this->placingText);
HXLINE(  95)		Int _hx_tmp30 = ::flixel::FlxG_obj::width;
HXDLIN(  95)		Float _hx_tmp31 = this->placingText->get_height();
HXDLIN(  95)		Int _hx_tmp32 = ::Math_obj::round(_hx_tmp31);
HXDLIN(  95)		this->placingTextBackground->makeGraphic(_hx_tmp30,_hx_tmp32,(int)-14077892,null(),null());
            	}

Dynamic UIGroup_obj::__CreateEmpty() { return new UIGroup_obj; }

hx::ObjectPtr< UIGroup_obj > UIGroup_obj::__new()
{
	hx::ObjectPtr< UIGroup_obj > _hx_result = new UIGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic UIGroup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UIGroup_obj > _hx_result = new UIGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic UIGroup_obj::add( ::Dynamic _tmp_b){
            	HX_STACK_FRAME("UIGroup","add",0x03a32c7e,"UIGroup.add","UIGroup.hx",99,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_tmp_b,"_tmp_b")
HXLINE( 100)		HX_VARI(  ::flixel::FlxBasic,b) = ( ( ::flixel::FlxBasic)(_tmp_b) );
HXDLIN( 100)		HX_VARI(  ::flixel::FlxObject,o) = hx::TCast<  ::flixel::FlxObject >::cast(b);
HXLINE( 101)		o->scrollFactor->set_x((int)0);
HXLINE( 102)		o->scrollFactor->set_y((int)0);
HXLINE( 103)		return ( ( ::flixel::FlxBasic)(this->super::add(o)) );
            	}


void UIGroup_obj::setTotalUnits(Int val){
            	HX_STACK_FRAME("UIGroup","setTotalUnits",0x90b34dea,"UIGroup.setTotalUnits","UIGroup.hx",110,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(val,"val")
HXLINE( 111)		Bool _hx_tmp = (val != this->units);
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 111)			Int _hx_tmp1 = ::Math_obj::floor(val);
HXDLIN( 111)			::String _hx_tmp2 = ::Std_obj::string(_hx_tmp1);
HXDLIN( 111)			this->unitsDisplay->set_text((_hx_tmp2 + HX_(" U",35,1c,00,00)));
            		}
HXLINE( 112)		this->units = val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIGroup_obj,setTotalUnits,(void))

void UIGroup_obj::setTotalCash(Int val){
            	HX_STACK_FRAME("UIGroup","setTotalCash",0x8681a298,"UIGroup.setTotalCash","UIGroup.hx",115,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(val,"val")
HXLINE( 116)		Bool _hx_tmp = (val != this->cash);
HXDLIN( 116)		if (_hx_tmp) {
HXLINE( 116)			Int _hx_tmp1 = ::Math_obj::floor(val);
HXDLIN( 116)			::String _hx_tmp2 = ::Std_obj::string(_hx_tmp1);
HXDLIN( 116)			this->cashDisplay->set_text((_hx_tmp2 + HX_(" $",04,1c,00,00)));
            		}
HXLINE( 117)		this->cash = val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIGroup_obj,setTotalCash,(void))

void UIGroup_obj::setTime(Float val){
            	HX_STACK_FRAME("UIGroup","setTime",0x004339ac,"UIGroup.setTime","UIGroup.hx",121,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(val,"val")
HXLINE( 121)		this->dayProgressBar->setValue(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIGroup_obj,setTime,(void))

void UIGroup_obj::setDay(Int val){
            	HX_STACK_FRAME("UIGroup","setDay",0xdd83a19d,"UIGroup.setDay","UIGroup.hx",124,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(val,"val")
HXLINE( 125)		Bool _hx_tmp = (val != this->day);
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 125)			this->dayDisplay->set_text((HX_("Day ",64,86,3c,2d) + val));
            		}
HXLINE( 126)		this->day = val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIGroup_obj,setDay,(void))

void UIGroup_obj::update(Float elapsed){
            	HX_STACK_FRAME("UIGroup","update",0xf52563cc,"UIGroup.update","UIGroup.hx",130,0x6ac75b53)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 131)		this->super::update(elapsed);
HXLINE( 133)		this->placingTextBackground->set_exists(this->placingText->exists);
            	}



UIGroup_obj::UIGroup_obj()
{
}

void UIGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIGroup);
	HX_MARK_MEMBER_NAME(unitsDisplay,"unitsDisplay");
	HX_MARK_MEMBER_NAME(cashDisplay,"cashDisplay");
	HX_MARK_MEMBER_NAME(units,"units");
	HX_MARK_MEMBER_NAME(cash,"cash");
	HX_MARK_MEMBER_NAME(day,"day");
	HX_MARK_MEMBER_NAME(dayProgressBar,"dayProgressBar");
	HX_MARK_MEMBER_NAME(placingText,"placingText");
	HX_MARK_MEMBER_NAME(placingTextBackground,"placingTextBackground");
	HX_MARK_MEMBER_NAME(dayDisplay,"dayDisplay");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(unitsDisplay,"unitsDisplay");
	HX_VISIT_MEMBER_NAME(cashDisplay,"cashDisplay");
	HX_VISIT_MEMBER_NAME(units,"units");
	HX_VISIT_MEMBER_NAME(cash,"cash");
	HX_VISIT_MEMBER_NAME(day,"day");
	HX_VISIT_MEMBER_NAME(dayProgressBar,"dayProgressBar");
	HX_VISIT_MEMBER_NAME(placingText,"placingText");
	HX_VISIT_MEMBER_NAME(placingTextBackground,"placingTextBackground");
	HX_VISIT_MEMBER_NAME(dayDisplay,"dayDisplay");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val UIGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"day") ) { return hx::Val( day); }
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cash") ) { return hx::Val( cash); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"units") ) { return hx::Val( units); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setDay") ) { return hx::Val( setDay_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTime") ) { return hx::Val( setTime_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dayDisplay") ) { return hx::Val( dayDisplay); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cashDisplay") ) { return hx::Val( cashDisplay); }
		if (HX_FIELD_EQ(inName,"placingText") ) { return hx::Val( placingText); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unitsDisplay") ) { return hx::Val( unitsDisplay); }
		if (HX_FIELD_EQ(inName,"setTotalCash") ) { return hx::Val( setTotalCash_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setTotalUnits") ) { return hx::Val( setTotalUnits_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dayProgressBar") ) { return hx::Val( dayProgressBar); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"placingTextBackground") ) { return hx::Val( placingTextBackground); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UIGroup_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"day") ) { day=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cash") ) { cash=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"units") ) { units=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dayDisplay") ) { dayDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cashDisplay") ) { cashDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"placingText") ) { placingText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unitsDisplay") ) { unitsDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dayProgressBar") ) { dayProgressBar=inValue.Cast<  ::ProgressBar >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"placingTextBackground") ) { placingTextBackground=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a"));
	outFields->push(HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39"));
	outFields->push(HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6"));
	outFields->push(HX_HCSTRING("cash","\xb3","\x1e","\xba","\x41"));
	outFields->push(HX_HCSTRING("day","\x5c","\x36","\x4c","\x00"));
	outFields->push(HX_HCSTRING("dayProgressBar","\x2a","\x43","\xa7","\x57"));
	outFields->push(HX_HCSTRING("placingText","\x91","\x88","\x5c","\x1c"));
	outFields->push(HX_HCSTRING("placingTextBackground","\xdf","\xdf","\x1f","\xeb"));
	outFields->push(HX_HCSTRING("dayDisplay","\x46","\xdf","\x02","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UIGroup_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UIGroup_obj,unitsDisplay),HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UIGroup_obj,cashDisplay),HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39")},
	{hx::fsInt,(int)offsetof(UIGroup_obj,units),HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6")},
	{hx::fsInt,(int)offsetof(UIGroup_obj,cash),HX_HCSTRING("cash","\xb3","\x1e","\xba","\x41")},
	{hx::fsInt,(int)offsetof(UIGroup_obj,day),HX_HCSTRING("day","\x5c","\x36","\x4c","\x00")},
	{hx::fsObject /*::ProgressBar*/ ,(int)offsetof(UIGroup_obj,dayProgressBar),HX_HCSTRING("dayProgressBar","\x2a","\x43","\xa7","\x57")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UIGroup_obj,placingText),HX_HCSTRING("placingText","\x91","\x88","\x5c","\x1c")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UIGroup_obj,placingTextBackground),HX_HCSTRING("placingTextBackground","\xdf","\xdf","\x1f","\xeb")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UIGroup_obj,dayDisplay),HX_HCSTRING("dayDisplay","\x46","\xdf","\x02","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *UIGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String UIGroup_obj_sMemberFields[] = {
	HX_HCSTRING("unitsDisplay","\x93","\x84","\x42","\x1a"),
	HX_HCSTRING("cashDisplay","\xcf","\xbf","\xc6","\x39"),
	HX_HCSTRING("units","\x6f","\x69","\xe7","\xa6"),
	HX_HCSTRING("cash","\xb3","\x1e","\xba","\x41"),
	HX_HCSTRING("day","\x5c","\x36","\x4c","\x00"),
	HX_HCSTRING("dayProgressBar","\x2a","\x43","\xa7","\x57"),
	HX_HCSTRING("placingText","\x91","\x88","\x5c","\x1c"),
	HX_HCSTRING("placingTextBackground","\xdf","\xdf","\x1f","\xeb"),
	HX_HCSTRING("dayDisplay","\x46","\xdf","\x02","\x9c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("setTotalUnits","\x4d","\x9d","\x00","\x4f"),
	HX_HCSTRING("setTotalCash","\x95","\x90","\xc4","\x82"),
	HX_HCSTRING("setTime","\xcf","\x0c","\x81","\x12"),
	HX_HCSTRING("setDay","\xda","\xc3","\x63","\x6f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void UIGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UIGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class UIGroup_obj::__mClass;

void UIGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIGroup","\x4b","\xe8","\xcf","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UIGroup_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UIGroup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UIGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIGroup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
