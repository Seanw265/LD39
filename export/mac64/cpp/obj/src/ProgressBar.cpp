// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_ProgressBar
#include <ProgressBar.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif


void ProgressBar_obj::__construct(){
            	HX_STACK_FRAME("ProgressBar","new",0xea656ff8,"ProgressBar.new","ProgressBar.hx",14,0x047eb678)
            	HX_STACK_THIS(this)
HXLINE(  15)		super::__construct(null(),null(),null());
HXLINE(  17)		this->outline =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  18)		this->outline->makeGraphic((int)20,(int)3,(int)-14077892,null(),null());
HXLINE(  19)		this->add(this->outline);
HXLINE(  21)		this->progressSprite =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  23)		Float _hx_tmp = (this->outline->x + (int)1);
HXDLIN(  23)		this->progressSprite->set_x(_hx_tmp);
HXLINE(  24)		Float _hx_tmp1 = (this->outline->y + (int)1);
HXDLIN(  24)		this->progressSprite->set_y(_hx_tmp1);
HXLINE(  25)		this->progressSprite->makeGraphic((int)1,(int)1,(int)-13282841,null(),null());
HXLINE(  28)		this->add(this->progressSprite);
HXLINE(  31)		this->setValue(((Float)0.0));
            	}

Dynamic ProgressBar_obj::__CreateEmpty() { return new ProgressBar_obj; }

hx::ObjectPtr< ProgressBar_obj > ProgressBar_obj::__new()
{
	hx::ObjectPtr< ProgressBar_obj > _hx_result = new ProgressBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ProgressBar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressBar_obj > _hx_result = new ProgressBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

void ProgressBar_obj::setValue(Float val){
            	HX_STACK_FRAME("ProgressBar","setValue",0xbcd9c1d7,"ProgressBar.setValue","ProgressBar.hx",34,0x047eb678)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(val,"val")
HXLINE(  35)		this->value = val;
HXLINE(  36)		Float _hx_tmp = this->outline->get_width();
HXDLIN(  36)		Int _hx_tmp1 = ::Math_obj::round(((_hx_tmp - (int)2) * val));
HXDLIN(  36)		Float _hx_tmp2 = this->outline->get_height();
HXDLIN(  36)		Int _hx_tmp3 = ::Math_obj::round((_hx_tmp2 - (int)2));
HXDLIN(  36)		this->progressSprite->setGraphicSize(_hx_tmp1,_hx_tmp3);
HXLINE(  37)		this->progressSprite->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressBar_obj,setValue,(void))

void ProgressBar_obj::setWidth(Float w){
            	HX_STACK_FRAME("ProgressBar","setWidth",0x5583f86c,"ProgressBar.setWidth","ProgressBar.hx",42,0x047eb678)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(w,"w")
HXLINE(  43)		this->outline->set_width(w);
HXLINE(  44)		this->setValue(this->value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressBar_obj,setWidth,(void))

void ProgressBar_obj::setColor(Int c){
            	HX_STACK_FRAME("ProgressBar","setColor",0xd57db3c9,"ProgressBar.setColor","ProgressBar.hx",48,0x047eb678)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  48)		this->progressSprite->makeGraphic((int)1,(int)1,this->color,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressBar_obj,setColor,(void))


ProgressBar_obj::ProgressBar_obj()
{
}

void ProgressBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressBar);
	HX_MARK_MEMBER_NAME(progressSprite,"progressSprite");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(value,"value");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProgressBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(progressSprite,"progressSprite");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ProgressBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return hx::Val( outline); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return hx::Val( setValue_dyn()); }
		if (HX_FIELD_EQ(inName,"setWidth") ) { return hx::Val( setWidth_dyn()); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return hx::Val( setColor_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"progressSprite") ) { return hx::Val( progressSprite); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProgressBar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"progressSprite") ) { progressSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("progressSprite","\x92","\xc7","\x69","\xc9"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressBar_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ProgressBar_obj,progressSprite),HX_HCSTRING("progressSprite","\x92","\xc7","\x69","\xc9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ProgressBar_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsFloat,(int)offsetof(ProgressBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressBar_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressBar_obj_sMemberFields[] = {
	HX_HCSTRING("progressSprite","\x92","\xc7","\x69","\xc9"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("setValue","\x6f","\xe8","\xec","\x3f"),
	HX_HCSTRING("setWidth","\x04","\x1f","\x97","\xd8"),
	HX_HCSTRING("setColor","\x61","\xda","\x90","\x58"),
	::String(null()) };

static void ProgressBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressBar_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressBar_obj::__mClass;

void ProgressBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ProgressBar","\x06","\x54","\x88","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressBar_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressBar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressBar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

