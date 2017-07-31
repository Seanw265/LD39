// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace display{

void MovieClip_obj::__construct(){
            	HX_STACK_FRAME("openfl.display.MovieClip","new",0xe16984e8,"openfl.display.MovieClip.new","openfl/display/MovieClip.hx",23,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE(  25)		super::__construct();
HXLINE(  27)		this->_hx___currentFrame = (int)0;
HXLINE(  28)		this->_hx___currentLabels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  29)		this->_hx___totalFrames = (int)0;
HXLINE(  30)		this->enabled = true;
            	}

Dynamic MovieClip_obj::__CreateEmpty() { return new MovieClip_obj; }

hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{
	hx::ObjectPtr< MovieClip_obj > _hx_result = new MovieClip_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MovieClip_obj > _hx_result = new MovieClip_obj();
	_hx_result->__construct();
	return _hx_result;
}

void MovieClip_obj::addFrameScript(Int index, ::Dynamic method){
            	HX_STACK_FRAME("openfl.display.MovieClip","addFrameScript",0xff5029ef,"openfl.display.MovieClip.addFrameScript","openfl/display/MovieClip.hx",37,0x2b84738a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(method,"method")
HXLINE(  37)		Bool _hx_tmp = hx::IsNotNull( method );
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  39)			Bool _hx_tmp1 = hx::IsNull( this->_hx___frameScripts );
HXDLIN(  39)			if (_hx_tmp1) {
HXLINE(  41)				this->_hx___frameScripts =  ::haxe::ds::IntMap_obj::__new();
            			}
HXLINE(  45)			this->_hx___frameScripts->set(index,method);
            		}
            		else {
HXLINE(  47)			Bool _hx_tmp2 = hx::IsNotNull( this->_hx___frameScripts );
HXDLIN(  47)			if (_hx_tmp2) {
HXLINE(  49)				this->_hx___frameScripts->remove(index);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,addFrameScript,(void))

void MovieClip_obj::gotoAndPlay( ::Dynamic frame,::String scene){
            	HX_STACK_FRAME("openfl.display.MovieClip","gotoAndPlay",0x3bade190,"openfl.display.MovieClip.gotoAndPlay","openfl/display/MovieClip.hx",56,0x2b84738a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frame,"frame")
            	HX_STACK_ARG(scene,"scene")
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

void MovieClip_obj::gotoAndStop( ::Dynamic frame,::String scene){
            	HX_STACK_FRAME("openfl.display.MovieClip","gotoAndStop",0x3dafa39e,"openfl.display.MovieClip.gotoAndStop","openfl/display/MovieClip.hx",63,0x2b84738a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frame,"frame")
            	HX_STACK_ARG(scene,"scene")
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

void MovieClip_obj::nextFrame(){
            	HX_STACK_FRAME("openfl.display.MovieClip","nextFrame",0x3b845cc2,"openfl.display.MovieClip.nextFrame","openfl/display/MovieClip.hx",70,0x2b84738a)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

void MovieClip_obj::play(){
            	HX_STACK_FRAME("openfl.display.MovieClip","play",0x5c42706c,"openfl.display.MovieClip.play","openfl/display/MovieClip.hx",77,0x2b84738a)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

void MovieClip_obj::prevFrame(){
            	HX_STACK_FRAME("openfl.display.MovieClip","prevFrame",0x7f95e2c2,"openfl.display.MovieClip.prevFrame","openfl/display/MovieClip.hx",84,0x2b84738a)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

void MovieClip_obj::stop(){
            	HX_STACK_FRAME("openfl.display.MovieClip","stop",0x5e44327a,"openfl.display.MovieClip.stop","openfl/display/MovieClip.hx",91,0x2b84738a)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Int MovieClip_obj::get_currentFrame(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrame",0xf2ac6035,"openfl.display.MovieClip.get_currentFrame","openfl/display/MovieClip.hx",105,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 105)		return this->_hx___currentFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrameLabel",0x543e3d7f,"openfl.display.MovieClip.get_currentFrameLabel","openfl/display/MovieClip.hx",106,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 106)		return this->_hx___currentFrameLabel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabel",0x5bd7f5fc,"openfl.display.MovieClip.get_currentLabel","openfl/display/MovieClip.hx",107,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 107)		return this->_hx___currentLabel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

::Array< ::Dynamic> MovieClip_obj::get_currentLabels(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabels",0x011f46f7,"openfl.display.MovieClip.get_currentLabels","openfl/display/MovieClip.hx",108,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 108)		return this->_hx___currentLabels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

Int MovieClip_obj::get_framesLoaded(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_framesLoaded",0xb37eaf4c,"openfl.display.MovieClip.get_framesLoaded","openfl/display/MovieClip.hx",109,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 109)		return this->_hx___totalFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

Int MovieClip_obj::get_totalFrames(){
            	HX_STACK_FRAME("openfl.display.MovieClip","get_totalFrames",0x46b3baa9,"openfl.display.MovieClip.get_totalFrames","openfl/display/MovieClip.hx",110,0x2b84738a)
            	HX_STACK_THIS(this)
HXLINE( 110)		return this->_hx___totalFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_MARK_MEMBER_NAME(currentLabel,"currentLabel");
	HX_MARK_MEMBER_NAME(currentLabels,"currentLabels");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(_hx___currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(_hx___currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(_hx___currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(_hx___currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(_hx___frameScripts,"__frameScripts");
	HX_MARK_MEMBER_NAME(_hx___totalFrames,"__totalFrames");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_VISIT_MEMBER_NAME(currentLabel,"currentLabel");
	HX_VISIT_MEMBER_NAME(currentLabels,"currentLabels");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(_hx___currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(_hx___currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(_hx___currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(_hx___currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(_hx___frameScripts,"__frameScripts");
	HX_VISIT_MEMBER_NAME(_hx___totalFrames,"__totalFrames");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MovieClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return hx::Val( nextFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return hx::Val( prevFrame_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return hx::Val( inCallProp == hx::paccAlways ? get_totalFrames() : totalFrames); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return hx::Val( gotoAndPlay_dyn()); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return hx::Val( gotoAndStop_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return hx::Val( inCallProp == hx::paccAlways ? get_currentFrame() : currentFrame); }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { return hx::Val( inCallProp == hx::paccAlways ? get_currentLabel() : currentLabel); }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return hx::Val( inCallProp == hx::paccAlways ? get_framesLoaded() : framesLoaded); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { return hx::Val( inCallProp == hx::paccAlways ? get_currentLabels() : currentLabels); }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return hx::Val( _hx___totalFrames); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return hx::Val( _hx___currentFrame); }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return hx::Val( _hx___currentLabel); }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { return hx::Val( _hx___frameScripts); }
		if (HX_FIELD_EQ(inName,"addFrameScript") ) { return hx::Val( addFrameScript_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return hx::Val( _hx___currentLabels); }
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return hx::Val( get_totalFrames_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return hx::Val( get_currentFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return hx::Val( get_currentLabel_dyn()); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return hx::Val( get_framesLoaded_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { return hx::Val( inCallProp == hx::paccAlways ? get_currentFrameLabel() : currentFrameLabel); }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return hx::Val( get_currentLabels_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return hx::Val( _hx___currentFrameLabel); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return hx::Val( get_currentFrameLabel_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MovieClip_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< Int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { currentLabels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { _hx___totalFrames=inValue.Cast< Int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { _hx___currentFrame=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { _hx___currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { _hx___frameScripts=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { _hx___currentLabels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { _hx___currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"));
	outFields->push(HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"));
	outFields->push(HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"));
	outFields->push(HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"));
	outFields->push(HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"));
	outFields->push(HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"));
	outFields->push(HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"));
	outFields->push(HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MovieClip_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MovieClip_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentFrameLabel),HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentLabel),HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,currentLabels),HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c")},
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,framesLoaded),HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,totalFrames),HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,_hx___currentFrame),HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e")},
	{hx::fsString,(int)offsetof(MovieClip_obj,_hx___currentFrameLabel),HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc")},
	{hx::fsString,(int)offsetof(MovieClip_obj,_hx___currentLabel),HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,_hx___currentLabels),HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MovieClip_obj,_hx___frameScripts),HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,_hx___totalFrames),HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MovieClip_obj_sStaticStorageInfo = 0;
#endif

static ::String MovieClip_obj_sMemberFields[] = {
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"),
	HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"),
	HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"),
	HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"),
	HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"),
	HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"),
	HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"),
	HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"),
	HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"),
	HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"),
	HX_HCSTRING("addFrameScript","\x77","\x21","\x7f","\xbb"),
	HX_HCSTRING("gotoAndPlay","\x08","\x65","\x84","\xef"),
	HX_HCSTRING("gotoAndStop","\x16","\x27","\x86","\xf1"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("prevFrame","\x3a","\x18","\xda","\xf1"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentFrame","\xbd","\x49","\x2e","\x52"),
	HX_HCSTRING("get_currentFrameLabel","\xf7","\xc6","\xb8","\xa8"),
	HX_HCSTRING("get_currentLabel","\x84","\xdf","\x59","\xbb"),
	HX_HCSTRING("get_currentLabels","\x6f","\xb4","\x49","\x33"),
	HX_HCSTRING("get_framesLoaded","\xd4","\x98","\x00","\x13"),
	HX_HCSTRING("get_totalFrames","\x21","\x5a","\x9d","\x33"),
	::String(null()) };

static void MovieClip_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MovieClip_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#endif

hx::Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.MovieClip","\xf6","\x30","\xc3","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MovieClip_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MovieClip_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MovieClip_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MovieClip_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MovieClip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MovieClip_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
