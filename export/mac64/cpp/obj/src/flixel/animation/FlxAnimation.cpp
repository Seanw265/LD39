// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace animation{

void FlxAnimation_obj::__construct( ::flixel::animation::FlxAnimationController Parent,::String Name,::Array< Int > Frames,hx::Null< Int >  __o_FrameRate,hx::Null< Bool >  __o_Looped,hx::Null< Bool >  __o_FlipX,hx::Null< Bool >  __o_FlipY){
Int FrameRate = __o_FrameRate.Default(0);
Bool Looped = __o_Looped.Default(true);
Bool FlipX = __o_FlipX.Default(false);
Bool FlipY = __o_FlipY.Default(false);
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",8,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Parent,"Parent")
            	HX_STACK_ARG(Name,"Name")
            	HX_STACK_ARG(Frames,"Frames")
            	HX_STACK_ARG(FrameRate,"FrameRate")
            	HX_STACK_ARG(Looped,"Looped")
            	HX_STACK_ARG(FlipX,"FlipX")
            	HX_STACK_ARG(FlipY,"FlipY")
HXLINE(  70)		this->_frameTimer = ((Float)0);
HXLINE(  59)		this->flipY = false;
HXLINE(  54)		this->flipX = false;
HXLINE(  49)		this->reversed = false;
HXLINE(  44)		this->looped = true;
HXLINE(  39)		this->paused = true;
HXLINE(  34)		this->finished = true;
HXLINE(  29)		this->delay = ((Float)0);
HXLINE(  19)		this->curFrame = (int)0;
HXLINE(  83)		super::__construct(Parent,Name);
HXLINE(  85)		this->set_frameRate(FrameRate);
HXLINE(  86)		this->frames = Frames;
HXLINE(  87)		this->looped = Looped;
HXLINE(  88)		this->flipX = FlipX;
HXLINE(  89)		this->flipY = FlipY;
            	}

Dynamic FlxAnimation_obj::__CreateEmpty() { return new FlxAnimation_obj; }

hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new( ::flixel::animation::FlxAnimationController Parent,::String Name,::Array< Int > Frames,hx::Null< Int >  __o_FrameRate,hx::Null< Bool >  __o_Looped,hx::Null< Bool >  __o_FlipX,hx::Null< Bool >  __o_FlipY)
{
	hx::ObjectPtr< FlxAnimation_obj > _hx_result = new FlxAnimation_obj();
	_hx_result->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped,__o_FlipX,__o_FlipY);
	return _hx_result;
}

Dynamic FlxAnimation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxAnimation_obj > _hx_result = new FlxAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

void FlxAnimation_obj::destroy(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",96,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE(  97)		this->frames = null();
HXLINE(  98)		this->name = null();
HXLINE(  99)		this->super::destroy();
            	}


void FlxAnimation_obj::play(hx::Null< Bool >  __o_Force,hx::Null< Bool >  __o_Reversed,hx::Null< Int >  __o_Frame){
Bool Force = __o_Force.Default(false);
Bool Reversed = __o_Reversed.Default(false);
Int Frame = __o_Frame.Default(0);
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",114,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Force,"Force")
            	HX_STACK_ARG(Reversed,"Reversed")
            	HX_STACK_ARG(Frame,"Frame")
HXLINE( 115)		Bool _hx_tmp;
HXDLIN( 115)		Bool _hx_tmp1;
HXDLIN( 115)		if (!(Force)) {
HXLINE( 115)			_hx_tmp1 = !(this->finished);
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = false;
            		}
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 115)			_hx_tmp = (this->reversed == Reversed);
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 117)			this->paused = false;
HXLINE( 118)			this->finished = false;
HXLINE( 119)			return;
            		}
HXLINE( 122)		this->reversed = Reversed;
HXLINE( 123)		this->paused = false;
HXLINE( 124)		this->_frameTimer = (int)0;
HXLINE( 125)		this->finished = (this->delay == (int)0);
HXLINE( 127)		HX_VARI( Int,maxFrameIndex) = (this->frames->length - (int)1);
HXLINE( 128)		if ((Frame < (int)0)) {
HXLINE( 129)			Int _hx_tmp2 = ::flixel::FlxG_obj::random->_hx_int((int)0,maxFrameIndex,null());
HXDLIN( 129)			this->set_curFrame(_hx_tmp2);
            		}
            		else {
HXLINE( 132)			Bool _hx_tmp3 = (Frame > maxFrameIndex);
HXDLIN( 132)			if (_hx_tmp3) {
HXLINE( 133)				Frame = maxFrameIndex;
            			}
HXLINE( 134)			if (this->reversed) {
HXLINE( 135)				Frame = (maxFrameIndex - Frame);
            			}
HXLINE( 136)			this->set_curFrame(Frame);
            		}
HXLINE( 139)		Bool _hx_tmp4 = this->finished;
HXDLIN( 139)		if (_hx_tmp4) {
HXLINE( 140)			HX_VARI(  ::flixel::animation::FlxAnimationController,_this) = this->parent;
HXDLIN( 140)			Bool _hx_tmp5 = hx::IsNotNull( _this->finishCallback );
HXDLIN( 140)			if (_hx_tmp5) {
HXLINE( 140)				_this->finishCallback(this->name);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimation_obj,play,(void))

void FlxAnimation_obj::restart(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",145,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 145)		this->play(true,this->reversed,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

void FlxAnimation_obj::stop(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",149,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 150)		this->finished = true;
HXLINE( 151)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

void FlxAnimation_obj::reset(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","reset",0xe6ad112f,"flixel.animation.FlxAnimation.reset","flixel/animation/FlxAnimation.hx",155,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 156)		this->stop();
HXLINE( 157)		Int _hx_tmp;
HXDLIN( 157)		if (this->reversed) {
HXLINE( 157)			_hx_tmp = (this->frames->length - (int)1);
            		}
            		else {
HXLINE( 157)			_hx_tmp = (int)0;
            		}
HXDLIN( 157)		this->set_curFrame(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reset,(void))

void FlxAnimation_obj::finish(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","finish",0x6ec8ecf3,"flixel.animation.FlxAnimation.finish","flixel/animation/FlxAnimation.hx",161,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 162)		this->stop();
HXLINE( 163)		Int _hx_tmp;
HXDLIN( 163)		if (this->reversed) {
HXLINE( 163)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 163)			_hx_tmp = (this->frames->length - (int)1);
            		}
HXDLIN( 163)		this->set_curFrame(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,finish,(void))

void FlxAnimation_obj::pause(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","pause",0xbd3c9e56,"flixel.animation.FlxAnimation.pause","flixel/animation/FlxAnimation.hx",168,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 168)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,pause,(void))

void FlxAnimation_obj::resume(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","resume",0xf0ce164d,"flixel.animation.FlxAnimation.resume","flixel/animation/FlxAnimation.hx",173,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 173)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,resume,(void))

void FlxAnimation_obj::reverse(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","reverse",0x73299882,"flixel.animation.FlxAnimation.reverse","flixel/animation/FlxAnimation.hx",177,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 178)		this->reversed = !(this->reversed);
HXLINE( 179)		Bool _hx_tmp = this->finished;
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 180)			this->play(false,this->reversed,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reverse,(void))

void FlxAnimation_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",184,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 185)		Bool _hx_tmp;
HXDLIN( 185)		Bool _hx_tmp1;
HXDLIN( 185)		if ((this->delay != (int)0)) {
HXLINE( 185)			_hx_tmp1 = this->finished;
            		}
            		else {
HXLINE( 185)			_hx_tmp1 = true;
            		}
HXDLIN( 185)		if (!(_hx_tmp1)) {
HXLINE( 185)			_hx_tmp = this->paused;
            		}
            		else {
HXLINE( 185)			_hx_tmp = true;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 186)			return;
            		}
HXLINE( 188)		hx::AddEq(this->_frameTimer,elapsed);
HXLINE( 189)		while(true){
HXLINE( 189)			Bool _hx_tmp2;
HXDLIN( 189)			if ((this->_frameTimer > this->delay)) {
HXLINE( 189)				_hx_tmp2 = !(this->finished);
            			}
            			else {
HXLINE( 189)				_hx_tmp2 = false;
            			}
HXDLIN( 189)			if (!(_hx_tmp2)) {
HXLINE( 189)				goto _hx_goto_0;
            			}
HXLINE( 191)			hx::SubEq(this->_frameTimer,this->delay);
HXLINE( 192)			Bool _hx_tmp3 = this->reversed;
HXDLIN( 192)			if (_hx_tmp3) {
HXLINE( 194)				Bool _hx_tmp4;
HXDLIN( 194)				if (this->looped) {
HXLINE( 194)					_hx_tmp4 = (this->curFrame == (int)0);
            				}
            				else {
HXLINE( 194)					_hx_tmp4 = false;
            				}
HXDLIN( 194)				if (_hx_tmp4) {
HXLINE( 195)					Int _hx_tmp5 = (this->frames->length - (int)1);
HXDLIN( 195)					this->set_curFrame(_hx_tmp5);
            				}
            				else {
HXLINE( 197)					HX_VARI(  ::flixel::animation::FlxAnimation,_g) = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)					Int _hx_tmp6 = (_g->curFrame - (int)1);
HXDLIN( 197)					_g->set_curFrame(_hx_tmp6);
            				}
            			}
            			else {
HXLINE( 201)				Bool _hx_tmp7;
HXDLIN( 201)				if (this->looped) {
HXLINE( 201)					_hx_tmp7 = (this->curFrame == (this->frames->length - (int)1));
            				}
            				else {
HXLINE( 201)					_hx_tmp7 = false;
            				}
HXDLIN( 201)				if (_hx_tmp7) {
HXLINE( 202)					this->set_curFrame((int)0);
            				}
            				else {
HXLINE( 204)					HX_VARI_NAME(  ::flixel::animation::FlxAnimation,_g1,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)					Int _hx_tmp8 = (_g1->curFrame + (int)1);
HXDLIN( 204)					_g1->set_curFrame(_hx_tmp8);
            				}
            			}
            		}
            		_hx_goto_0:;
            	}


 ::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",211,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Parent,"Parent")
HXLINE( 211)		return  ::flixel::animation::FlxAnimation_obj::__new(Parent,this->name,this->frames,this->frameRate,this->looped,this->flipX,this->flipY);
            	}


Int FlxAnimation_obj::set_frameRate(Int value){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",215,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 216)		this->delay = (int)0;
HXLINE( 217)		this->frameRate = value;
HXLINE( 218)		if ((value > (int)0)) {
HXLINE( 219)			this->delay = ((Float)((Float)1.0) / (Float)value);
            		}
HXLINE( 220)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

Int FlxAnimation_obj::set_curFrame(Int Frame){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",224,0x660bc6ae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Frame,"Frame")
HXLINE( 225)		HX_VARI( Int,maxFrameIndex) = (this->frames->length - (int)1);
HXLINE( 226)		HX_VAR( Int,tempFrame);
HXDLIN( 226)		if (this->reversed) {
HXLINE( 226)			tempFrame = (maxFrameIndex - Frame);
            		}
            		else {
HXLINE( 226)			tempFrame = Frame;
            		}
HXLINE( 228)		if ((tempFrame >= (int)0)) {
HXLINE( 230)			Bool _hx_tmp;
HXDLIN( 230)			if (!(this->looped)) {
HXLINE( 230)				_hx_tmp = (Frame > maxFrameIndex);
            			}
            			else {
HXLINE( 230)				_hx_tmp = false;
            			}
HXDLIN( 230)			if (_hx_tmp) {
HXLINE( 232)				this->finished = true;
HXLINE( 233)				Int _hx_tmp1;
HXDLIN( 233)				if (this->reversed) {
HXLINE( 233)					_hx_tmp1 = (int)0;
            				}
            				else {
HXLINE( 233)					_hx_tmp1 = maxFrameIndex;
            				}
HXDLIN( 233)				this->curFrame = _hx_tmp1;
            			}
            			else {
HXLINE( 237)				this->curFrame = Frame;
            			}
            		}
            		else {
HXLINE( 241)			this->curFrame = ::flixel::FlxG_obj::random->_hx_int((int)0,maxFrameIndex,null());
            		}
HXLINE( 243)		Int _hx_tmp2 = this->frames->__get(this->curFrame);
HXDLIN( 243)		this->set_curIndex(_hx_tmp2);
HXLINE( 245)		Bool _hx_tmp3;
HXDLIN( 245)		if (this->finished) {
HXLINE( 245)			_hx_tmp3 = hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE( 245)			_hx_tmp3 = false;
            		}
HXDLIN( 245)		if (_hx_tmp3) {
HXLINE( 246)			HX_VARI(  ::flixel::animation::FlxAnimationController,_this) = this->parent;
HXDLIN( 246)			Bool _hx_tmp4 = hx::IsNotNull( _this->finishCallback );
HXDLIN( 246)			if (_hx_tmp4) {
HXLINE( 246)				_this->finishCallback(this->name);
            			}
            		}
HXLINE( 248)		return Frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

Int FlxAnimation_obj::get_numFrames(){
            	HX_STACK_FRAME("flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",253,0x660bc6ae)
            	HX_STACK_THIS(this)
HXLINE( 253)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(reversed,"reversed");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	 ::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(reversed,"reversed");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	 ::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return hx::Val( delay); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return hx::Val( flipX); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return hx::Val( flipY); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn()); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused); }
		if (HX_FIELD_EQ(inName,"looped") ) { return hx::Val( looped); }
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames); }
		if (HX_FIELD_EQ(inName,"finish") ) { return hx::Val( finish_dyn()); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"restart") ) { return hx::Val( restart_dyn()); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return hx::Val( curFrame); }
		if (HX_FIELD_EQ(inName,"finished") ) { return hx::Val( finished); }
		if (HX_FIELD_EQ(inName,"reversed") ) { return hx::Val( reversed); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return hx::Val( frameRate); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return hx::Val( inCallProp == hx::paccAlways ? get_numFrames() : numFrames); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return hx::Val( _frameTimer); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return hx::Val( set_curFrame_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return hx::Val( set_frameRate_dyn()); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return hx::Val( get_numFrames_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxAnimation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< Bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< Int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_curFrame(inValue) );curFrame=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reversed") ) { reversed=inValue.Cast< Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_frameRate(inValue) );frameRate=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"));
	outFields->push(HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxAnimation_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,numFrames),HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,reversed),HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxAnimation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAnimation_obj_sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"),
	HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"),
	HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("set_curFrame","\x0a","\x4a","\x44","\x18"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void FlxAnimation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAnimation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimation","\xce","\x5f","\xe3","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAnimation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxAnimation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAnimation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace animation