// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_audio_AudioSource
#define INCLUDED_lime_audio_AudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(lime,app,Event_Void_Void)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,audio,AudioSource)

namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES AudioSource_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioSource_obj OBJ_;
		AudioSource_obj();

	public:
		void __construct( ::lime::audio::AudioBuffer buffer,hx::Null< Int >  __o_offset, ::Dynamic length,hx::Null< Int >  __o_loops);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.audio.AudioSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.audio.AudioSource"); }
		static hx::ObjectPtr< AudioSource_obj > __new( ::lime::audio::AudioBuffer buffer,hx::Null< Int >  __o_offset, ::Dynamic length,hx::Null< Int >  __o_loops);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioSource","\x31","\x7a","\x14","\xe5"); }

		 ::lime::app::Event_Void_Void onComplete;
		 ::lime::audio::AudioBuffer buffer;
		Int offset;
		Int id;
		Bool playing;
		Int pauseTime;
		 ::Dynamic __length;
		Int _hx___loops;
		 ::haxe::Timer timer;
		void dispose();
		::Dynamic dispose_dyn();

		void init();
		::Dynamic init_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		void timer_onRun();
		::Dynamic timer_onRun_dyn();

		Int get_currentTime();
		::Dynamic get_currentTime_dyn();

		Int set_currentTime(Int value);
		::Dynamic set_currentTime_dyn();

		Float get_gain();
		::Dynamic get_gain_dyn();

		Float set_gain(Float value);
		::Dynamic set_gain_dyn();

		Int get_length();
		::Dynamic get_length_dyn();

		Int set_length(Int value);
		::Dynamic set_length_dyn();

		Int get_loops();
		::Dynamic get_loops_dyn();

		Int set_loops(Int loops);
		::Dynamic set_loops_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioSource */ 
