// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_audio_ALCAudioContext
#define INCLUDED_lime_audio_ALCAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,ALCAudioContext)

namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES ALCAudioContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALCAudioContext_obj OBJ_;
		ALCAudioContext_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.audio.ALCAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.audio.ALCAudioContext"); }
		static hx::ObjectPtr< ALCAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALCAudioContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALCAudioContext","\xd1","\x20","\xbe","\xcd"); }

		Int FALSE;
		Int TRUE;
		Int FREQUENCY;
		Int REFRESH;
		Int SYNC;
		Int MONO_SOURCES;
		Int STEREO_SOURCES;
		Int NO_ERROR;
		Int INVALID_DEVICE;
		Int INVALID_CONTEXT;
		Int INVALID_ENUM;
		Int INVALID_VALUE;
		Int OUT_OF_MEMORY;
		Int ATTRIBUTES_SIZE;
		Int ALL_ATTRIBUTES;
		Int DEFAULT_DEVICE_SPECIFIER;
		Int DEVICE_SPECIFIER;
		Int EXTENSIONS;
		Int ENUMERATE_ALL_EXT;
		Int DEFAULT_ALL_DEVICES_SPECIFIER;
		Int ALL_DEVICES_SPECIFIER;
		Bool closeDevice( ::Dynamic device);
		::Dynamic closeDevice_dyn();

		 ::Dynamic createContext( ::Dynamic device,::Array< Int > attrlist);
		::Dynamic createContext_dyn();

		void destroyContext( ::Dynamic context);
		::Dynamic destroyContext_dyn();

		 ::Dynamic getContextsDevice( ::Dynamic context);
		::Dynamic getContextsDevice_dyn();

		 ::Dynamic getCurrentContext();
		::Dynamic getCurrentContext_dyn();

		Int getError( ::Dynamic device);
		::Dynamic getError_dyn();

		::String getErrorString( ::Dynamic device);
		::Dynamic getErrorString_dyn();

		::Array< Int > getIntegerv( ::Dynamic device,Int param,hx::Null< Int >  count);
		::Dynamic getIntegerv_dyn();

		::String getString( ::Dynamic device,Int param);
		::Dynamic getString_dyn();

		Bool makeContextCurrent( ::Dynamic context);
		::Dynamic makeContextCurrent_dyn();

		 ::Dynamic openDevice(::String deviceName);
		::Dynamic openDevice_dyn();

		void processContext( ::Dynamic context);
		::Dynamic processContext_dyn();

		void suspendContext( ::Dynamic context);
		::Dynamic suspendContext_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_ALCAudioContext */ 
