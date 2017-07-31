// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

namespace lime{
namespace audio{

void AudioSource_obj::__construct( ::lime::audio::AudioBuffer buffer,hx::Null< Int >  __o_offset, ::Dynamic length,hx::Null< Int >  __o_loops){
Int offset = __o_offset.Default(0);
Int loops = __o_loops.Default(0);
            	HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",27,0x17352e00)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(offset,"offset")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(loops,"loops")
HXLINE(  30)		this->onComplete =  ::lime::app::Event_Void_Void_obj::__new();
HXLINE(  58)		this->buffer = buffer;
HXLINE(  59)		this->offset = offset;
HXLINE(  61)		Bool _hx_tmp;
HXDLIN(  61)		Bool _hx_tmp1 = hx::IsNotNull( length );
HXDLIN(  61)		if (_hx_tmp1) {
HXLINE(  61)			_hx_tmp = hx::IsNotEq( length,(int)0 );
            		}
            		else {
HXLINE(  61)			_hx_tmp = false;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  63)			this->set_length(length);
            		}
HXLINE(  67)		this->set_loops(loops);
HXLINE(  68)		this->id = (int)0;
HXLINE(  70)		Bool _hx_tmp2 = hx::IsNotNull( buffer );
HXDLIN(  70)		if (_hx_tmp2) {
HXLINE(  72)			this->init();
            		}
            	}

Dynamic AudioSource_obj::__CreateEmpty() { return new AudioSource_obj; }

hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new( ::lime::audio::AudioBuffer buffer,hx::Null< Int >  __o_offset, ::Dynamic length,hx::Null< Int >  __o_loops)
{
	hx::ObjectPtr< AudioSource_obj > _hx_result = new AudioSource_obj();
	_hx_result->__construct(buffer,__o_offset,length,__o_loops);
	return _hx_result;
}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioSource_obj > _hx_result = new AudioSource_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

void AudioSource_obj::dispose(){
            	HX_STACK_FRAME("lime.audio.AudioSource","dispose",0xab53fd31,"lime.audio.AudioSource.dispose","lime/audio/AudioSource.hx",81,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE(  81)		HX_VARI( ::hx::EnumBase,_g) = ::lime::audio::AudioManager_obj::context;
HXDLIN(  81)		Int _hx_tmp = ( ( ::hx::EnumBase)(_g) )->_hx_getIndex();
HXDLIN(  81)		if ((_hx_tmp == (int)0)) {
HXLINE(  83)			HX_VARI(  ::lime::audio::ALAudioContext,al) = _g->_hx_getObject(1).StaticCast<  ::lime::audio::ALAudioContext >();
HXLINE(  85)			Bool _hx_tmp1 = (this->id != (int)0);
HXDLIN(  85)			if (_hx_tmp1) {
HXLINE(  87)				al->deleteSource(this->id);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

void AudioSource_obj::init(){
            	HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",100,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 100)		HX_VARI( ::hx::EnumBase,_g) = ::lime::audio::AudioManager_obj::context;
HXDLIN( 100)		Int _hx_tmp = ( ( ::hx::EnumBase)(_g) )->_hx_getIndex();
HXDLIN( 100)		if ((_hx_tmp == (int)0)) {
HXLINE( 102)			HX_VARI(  ::lime::audio::ALAudioContext,al) = _g->_hx_getObject(1).StaticCast<  ::lime::audio::ALAudioContext >();
HXDLIN( 102)			{
HXLINE( 104)				Bool _hx_tmp1 = (this->buffer->id == (int)0);
HXDLIN( 104)				if (_hx_tmp1) {
HXLINE( 106)					this->buffer->id = al->genBuffer();
HXLINE( 108)					HX_VARI( Int,format) = (int)0;
HXLINE( 110)					if ((this->buffer->channels == (int)1)) {
HXLINE( 112)						if ((this->buffer->bitsPerSample == (int)8)) {
HXLINE( 114)							format = al->FORMAT_MONO8;
            						}
            						else {
HXLINE( 116)							if ((this->buffer->bitsPerSample == (int)16)) {
HXLINE( 118)								format = al->FORMAT_MONO16;
            							}
            						}
            					}
            					else {
HXLINE( 122)						if ((this->buffer->channels == (int)2)) {
HXLINE( 124)							if ((this->buffer->bitsPerSample == (int)8)) {
HXLINE( 126)								format = al->FORMAT_STEREO8;
            							}
            							else {
HXLINE( 128)								if ((this->buffer->bitsPerSample == (int)16)) {
HXLINE( 130)									format = al->FORMAT_STEREO16;
            								}
            							}
            						}
            					}
HXLINE( 136)					al->bufferData(this->buffer->id,format,this->buffer->data,this->buffer->data->length,this->buffer->sampleRate);
            				}
HXLINE( 140)				this->id = al->genSource();
HXLINE( 141)				al->sourcei(this->id,al->BUFFER,this->buffer->id);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

void AudioSource_obj::play(){
            	HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",150,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 181)		Bool _hx_tmp;
HXDLIN( 181)		if (!(this->playing)) {
HXLINE( 181)			_hx_tmp = (this->id == (int)0);
            		}
            		else {
HXLINE( 181)			_hx_tmp = true;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 183)			return;
            		}
HXLINE( 187)		this->playing = true;
HXLINE( 189)		HX_VARI( Int,time) = this->get_currentTime();
HXLINE( 191)		::lime::audio::openal::AL_obj::sourcePlay(this->id);
HXLINE( 193)		this->set_currentTime(time);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

void AudioSource_obj::pause(){
            	HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",200,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 222)		this->playing = false;
HXLINE( 223)		::lime::audio::openal::AL_obj::sourcePause(this->id);
HXLINE( 225)		Bool _hx_tmp = hx::IsNotNull( this->timer );
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 227)			this->timer->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

void AudioSource_obj::stop(){
            	HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",236,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 259)		this->playing = false;
HXLINE( 260)		::lime::audio::openal::AL_obj::sourceStop(this->id);
HXLINE( 262)		Bool _hx_tmp = hx::IsNotNull( this->timer );
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 264)			this->timer->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

void AudioSource_obj::timer_onRun(){
            	HX_STACK_FRAME("lime.audio.AudioSource","timer_onRun",0x17df51c4,"lime.audio.AudioSource.timer_onRun","lime/audio/AudioSource.hx",362,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 366)		this->playing = false;
HXLINE( 368)		Int _hx_tmp = this->get_loops();
HXDLIN( 368)		if ((_hx_tmp > (int)0)) {
HXLINE( 370)			{
HXLINE( 370)				HX_VARI(  ::lime::audio::AudioSource,_g) = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 370)				HX_VARI( Int,_g1) = _g->get_loops();
HXDLIN( 370)				_g->set_loops((_g1 - (int)1));
            			}
HXLINE( 371)			this->set_currentTime((int)0);
HXLINE( 372)			this->play();
HXLINE( 373)			return;
            		}
            		else {
HXLINE( 377)			::lime::audio::openal::AL_obj::sourceStop(this->id);
HXLINE( 378)			this->timer->stop();
            		}
HXLINE( 382)		this->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,timer_onRun,(void))

Int AudioSource_obj::get_currentTime(){
            	HX_STACK_FRAME("lime.audio.AudioSource","get_currentTime",0x5201bb0f,"lime.audio.AudioSource.get_currentTime","lime/audio/AudioSource.hx",396,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 413)		Float _hx_tmp = ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4132);
HXDLIN( 413)		Int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp * (int)1000));
HXDLIN( 413)		HX_VARI( Int,time) = (_hx_tmp1 - this->offset);
HXLINE( 414)		if ((time < (int)0)) {
HXLINE( 414)			return (int)0;
            		}
HXLINE( 415)		return time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

Int AudioSource_obj::set_currentTime(Int value){
            	HX_STACK_FRAME("lime.audio.AudioSource","set_currentTime",0x4dcd381b,"lime.audio.AudioSource.set_currentTime","lime/audio/AudioSource.hx",422,0x17352e00)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 441)		Bool _hx_tmp = hx::IsNotNull( this->buffer );
HXDLIN( 441)		if (_hx_tmp) {
HXLINE( 443)			::lime::audio::openal::AL_obj::sourceRewind(this->id);
HXLINE( 444)			Bool _hx_tmp1 = this->playing;
HXDLIN( 444)			if (_hx_tmp1) {
HXLINE( 444)				::lime::audio::openal::AL_obj::sourcePlay(this->id);
            			}
HXLINE( 445)			Int _hx_tmp2 = this->id;
HXDLIN( 445)			Float _hx_tmp3 = ((Float)(value + this->offset) / (Float)(int)1000);
HXDLIN( 445)			::lime::audio::openal::AL_obj::sourcef(_hx_tmp2,(int)4132,_hx_tmp3);
            		}
HXLINE( 449)		Bool _hx_tmp4 = this->playing;
HXDLIN( 449)		if (_hx_tmp4) {
HXLINE( 451)			Bool _hx_tmp5 = hx::IsNotNull( this->timer );
HXDLIN( 451)			if (_hx_tmp5) {
HXLINE( 453)				this->timer->stop();
            			}
HXLINE( 457)			Int _hx_tmp6 = this->get_length();
HXDLIN( 457)			HX_VARI( Int,timeRemaining) = (_hx_tmp6 - (value + this->offset));
HXLINE( 459)			if ((timeRemaining > (int)0)) {
HXLINE( 461)				this->timer =  ::haxe::Timer_obj::__new(timeRemaining);
HXLINE( 462)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 468)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain(){
            	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",492,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 492)		return ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4106);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain(Float value){
            	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",499,0x17352e00)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 519)		::lime::audio::openal::AL_obj::sourcef(this->id,(int)4106,value);
HXLINE( 520)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

Int AudioSource_obj::get_length(){
            	HX_STACK_FRAME("lime.audio.AudioSource","get_length",0x74de2f5d,"lime.audio.AudioSource.get_length","lime/audio/AudioSource.hx",527,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 529)		Bool _hx_tmp = hx::IsNotNull( this->__length );
HXDLIN( 529)		if (_hx_tmp) {
HXLINE( 531)			return this->__length;
            		}
HXLINE( 551)		Float _hx_tmp1 = (((Float)((Float)(this->buffer->data->length * (int)8) / (Float)(this->buffer->channels * this->buffer->bitsPerSample)) / (Float)this->buffer->sampleRate) * (int)1000);
HXDLIN( 551)		Int _hx_tmp2 = ::Std_obj::_hx_int(_hx_tmp1);
HXDLIN( 551)		return (_hx_tmp2 - this->offset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

Int AudioSource_obj::set_length(Int value){
            	HX_STACK_FRAME("lime.audio.AudioSource","set_length",0x785bcdd1,"lime.audio.AudioSource.set_length","lime/audio/AudioSource.hx",558,0x17352e00)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 567)		Bool _hx_tmp;
HXDLIN( 567)		if (this->playing) {
HXLINE( 567)			_hx_tmp = hx::IsNotEq( this->__length,value );
            		}
            		else {
HXLINE( 567)			_hx_tmp = false;
            		}
HXDLIN( 567)		if (_hx_tmp) {
HXLINE( 569)			Bool _hx_tmp1 = hx::IsNotNull( this->timer );
HXDLIN( 569)			if (_hx_tmp1) {
HXLINE( 571)				this->timer->stop();
            			}
HXLINE( 575)			Int _hx_tmp2 = this->get_currentTime();
HXLINE( 577)			if (((value - _hx_tmp2) > (int)0)) {
HXLINE( 579)				Int _hx_tmp3 = this->get_currentTime();
HXDLIN( 579)				this->timer =  ::haxe::Timer_obj::__new((value - _hx_tmp3));
HXLINE( 580)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 588)		return (this->__length = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

Int AudioSource_obj::get_loops(){
            	HX_STACK_FRAME("lime.audio.AudioSource","get_loops",0x5af092f8,"lime.audio.AudioSource.get_loops","lime/audio/AudioSource.hx",605,0x17352e00)
            	HX_STACK_THIS(this)
HXLINE( 605)		return this->_hx___loops;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

Int AudioSource_obj::set_loops(Int loops){
            	HX_STACK_FRAME("lime.audio.AudioSource","set_loops",0x3e417f04,"lime.audio.AudioSource.set_loops","lime/audio/AudioSource.hx",622,0x17352e00)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(loops,"loops")
HXLINE( 622)		return (this->_hx___loops = loops);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(_hx___loops,"__loops");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(_hx___loops,"__loops");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

hx::Val AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_gain()); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_loops()); }
		if (HX_FIELD_EQ(inName,"timer") ) { return hx::Val( timer); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return hx::Val( buffer); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return hx::Val( playing); }
		if (HX_FIELD_EQ(inName,"__loops") ) { return hx::Val( _hx___loops); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { return hx::Val( __length); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return hx::Val( get_gain_dyn()); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return hx::Val( set_gain_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return hx::Val( pauseTime); }
		if (HX_FIELD_EQ(inName,"get_loops") ) { return hx::Val( get_loops_dyn()); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return hx::Val( set_loops_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_currentTime()); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return hx::Val( timer_onRun_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return hx::Val( get_currentTime_dyn()); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return hx::Val( set_currentTime_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioSource_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_gain(inValue) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_loops(inValue) ); }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::audio::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue) ); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__loops") ) { _hx___loops=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentTime(inValue) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	outFields->push(HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioSource_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(AudioSource_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,pauseTime),HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSource_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,_hx___loops),HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(AudioSource_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioSource_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioSource_obj_sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer_onRun","\x32","\x24","\xe9","\x57"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	::String(null()) };

static void AudioSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioSource","\x00","\xfb","\x03","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace audio
