// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display_BitmapData
#define INCLUDED_openfl_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,PingPongTexture)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,TextureUvs)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES BitmapData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();

	public:
		void __construct(Int width,Int height,hx::Null< Bool >  __o_transparent,hx::Null< Int >  __o_fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.BitmapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.BitmapData"); }
		static hx::ObjectPtr< BitmapData_obj > __new(Int width,Int height,hx::Null< Bool >  __o_transparent,hx::Null< Int >  __o_fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"); }

		static void __boot();
		static  ::Dynamic _hx___isGLES;
		static  ::openfl::display::BitmapData fromBase64(::String base64,::String type, ::Dynamic onload);
		static ::Dynamic fromBase64_dyn();

		static  ::openfl::display::BitmapData fromBytes( ::openfl::utils::ByteArrayData bytes, ::openfl::utils::ByteArrayData rawAlpha, ::Dynamic onload);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::display::BitmapData fromFile(::String path, ::Dynamic onload, ::Dynamic onerror);
		static ::Dynamic fromFile_dyn();

		static  ::openfl::display::BitmapData fromImage( ::lime::graphics::Image image,hx::Null< Bool >  transparent);
		static ::Dynamic fromImage_dyn();

		static  ::openfl::display::BitmapData _hx___asRenderTexture(hx::Null< Int >  width,hx::Null< Int >  height);
		static ::Dynamic _hx___asRenderTexture_dyn();

		Int height;
		 ::lime::graphics::Image image;
		 ::openfl::geom::Rectangle rect;
		Bool transparent;
		Int width;
		 ::openfl::geom::Matrix _hx___worldTransform;
		 ::openfl::geom::ColorTransform _hx___worldColorTransform;
		Bool _hx___cacheAsBitmap;
		 ::Dynamic _hx___blendMode;
		 ::openfl::display::Shader _hx___shader;
		 ::lime::graphics::opengl::GLBuffer _hx___buffer;
		Bool _hx___isValid;
		 ::Dynamic _hx___surface;
		 ::lime::graphics::opengl::GLTexture _hx___texture;
		 ::lime::graphics::Image _hx___textureImage;
		 ::openfl::_internal::renderer::opengl::utils::PingPongTexture _hx___pingPongTexture;
		Bool _hx___usingPingPongTexture;
		 ::openfl::display::TextureUvs _hx___uvData;
		void applyFilter( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint, ::openfl::filters::BitmapFilter filter);
		::Dynamic applyFilter_dyn();

		 ::openfl::display::BitmapData clone();
		::Dynamic clone_dyn();

		void colorTransform( ::openfl::geom::Rectangle rect, ::openfl::geom::ColorTransform colorTransform);
		::Dynamic colorTransform_dyn();

		 ::Dynamic compare( ::openfl::display::BitmapData otherBitmapData);
		::Dynamic compare_dyn();

		void copyChannel( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint,Int sourceChannel,Int destChannel);
		::Dynamic copyChannel_dyn();

		void copyPixels( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint, ::openfl::display::BitmapData alphaBitmapData, ::openfl::geom::Point alphaPoint,hx::Null< Bool >  mergeAlpha);
		::Dynamic copyPixels_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void draw(::Dynamic source, ::openfl::geom::Matrix matrix, ::openfl::geom::ColorTransform colorTransform, ::Dynamic blendMode, ::openfl::geom::Rectangle clipRect,hx::Null< Bool >  smoothing);
		::Dynamic draw_dyn();

		 ::openfl::utils::ByteArrayData encode( ::openfl::geom::Rectangle rect, ::Dynamic compressor, ::openfl::utils::ByteArrayData byteArray);
		::Dynamic encode_dyn();

		void fillRect( ::openfl::geom::Rectangle rect,Int color);
		::Dynamic fillRect_dyn();

		void floodFill(Int x,Int y,Int color);
		::Dynamic floodFill_dyn();

		 ::openfl::geom::Rectangle generateFilterRect( ::openfl::geom::Rectangle sourceRect, ::openfl::filters::BitmapFilter filter);
		::Dynamic generateFilterRect_dyn();

		 ::lime::graphics::opengl::GLBuffer getBuffer( ::lime::graphics::GLRenderContext gl);
		::Dynamic getBuffer_dyn();

		 ::openfl::geom::Rectangle getColorBoundsRect(Int mask,Int color,hx::Null< Bool >  findColor);
		::Dynamic getColorBoundsRect_dyn();

		Int getPixel(Int x,Int y);
		::Dynamic getPixel_dyn();

		Int getPixel32(Int x,Int y);
		::Dynamic getPixel32_dyn();

		 ::openfl::utils::ByteArrayData getPixels( ::openfl::geom::Rectangle rect);
		::Dynamic getPixels_dyn();

		 ::Dynamic getSurface();
		::Dynamic getSurface_dyn();

		 ::lime::graphics::opengl::GLTexture getTexture( ::lime::graphics::GLRenderContext gl);
		::Dynamic getTexture_dyn();

		::Array< Int > getVector( ::openfl::geom::Rectangle rect);
		::Dynamic getVector_dyn();

		::Array< ::Dynamic> histogram( ::openfl::geom::Rectangle hRect);
		::Dynamic histogram_dyn();

		Bool hitTest( ::openfl::geom::Point firstPoint,Int firstAlphaThreshold, ::Dynamic secondObject, ::openfl::geom::Point secondBitmapDataPoint,hx::Null< Int >  secondAlphaThreshold);
		::Dynamic hitTest_dyn();

		void lock();
		::Dynamic lock_dyn();

		void merge( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint,Int redMultiplier,Int greenMultiplier,Int blueMultiplier,Int alphaMultiplier);
		::Dynamic merge_dyn();

		void noise(Int randomSeed,hx::Null< Int >  low,hx::Null< Int >  high,hx::Null< Int >  channelOptions,hx::Null< Bool >  grayScale);
		::Dynamic noise_dyn();

		void paletteMap( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint,::Array< Int > redArray,::Array< Int > greenArray,::Array< Int > blueArray,::Array< Int > alphaArray);
		::Dynamic paletteMap_dyn();

		void perlinNoise(Float baseX,Float baseY,Int numOctaves,Int randomSeed,Bool stitch,Bool fractalNoise,hx::Null< Int >  channelOptions,hx::Null< Bool >  grayScale,::Array< ::Dynamic> offsets);
		::Dynamic perlinNoise_dyn();

		void scroll(Int x,Int y);
		::Dynamic scroll_dyn();

		void setPixel(Int x,Int y,Int color);
		::Dynamic setPixel_dyn();

		void setPixel32(Int x,Int y,Int color);
		::Dynamic setPixel32_dyn();

		void setPixels( ::openfl::geom::Rectangle rect, ::openfl::utils::ByteArrayData byteArray);
		::Dynamic setPixels_dyn();

		void setVector( ::openfl::geom::Rectangle rect,::Array< Int > inputVector);
		::Dynamic setVector_dyn();

		Int threshold( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint,::String operation,Int threshold,hx::Null< Int >  color,hx::Null< Int >  mask,hx::Null< Bool >  copySource);
		::Dynamic threshold_dyn();

		void unlock( ::openfl::geom::Rectangle changeRect);
		::Dynamic unlock_dyn();

		void _hx___createUVs(hx::Null< Float >  x0,hx::Null< Float >  y0,hx::Null< Float >  x1,hx::Null< Float >  y1,hx::Null< Float >  x2,hx::Null< Float >  y2,hx::Null< Float >  x3,hx::Null< Float >  y3);
		::Dynamic _hx___createUVs_dyn();

		void _hx___drawGL( ::openfl::_internal::renderer::RenderSession renderSession,::Dynamic source, ::openfl::geom::Matrix matrix, ::openfl::geom::ColorTransform colorTransform, ::Dynamic blendMode, ::openfl::geom::Rectangle clipRect, ::Dynamic smoothing, ::Dynamic drawSelf, ::Dynamic clearBuffer, ::Dynamic readPixels, ::Dynamic powerOfTwo);
		::Dynamic _hx___drawGL_dyn();

		void _hx___fromBase64(::String base64,::String type, ::Dynamic onload);
		::Dynamic _hx___fromBase64_dyn();

		void _hx___fromBytes( ::openfl::utils::ByteArrayData bytes, ::openfl::utils::ByteArrayData rawAlpha, ::Dynamic onload);
		::Dynamic _hx___fromBytes_dyn();

		void _hx___fromFile(::String path, ::Dynamic onload, ::Dynamic onerror);
		::Dynamic _hx___fromFile_dyn();

		void _hx___fromImage( ::lime::graphics::Image image);
		::Dynamic _hx___fromImage_dyn();

		void _hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCairo_dyn();

		void _hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCairoMask_dyn();

		void _hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCanvas_dyn();

		void _hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCanvasMask_dyn();

		void _hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderGL_dyn();

		void _hx___resize(Int width,Int height);
		::Dynamic _hx___resize_dyn();

		void _hx___sync();
		::Dynamic _hx___sync_dyn();

		void _hx___updateChildren(Bool transformOnly);
		::Dynamic _hx___updateChildren_dyn();

		void _hx___updateMask( ::openfl::display::Graphics maskGraphics);
		::Dynamic _hx___updateMask_dyn();

		void _hx___updateTransforms( ::openfl::geom::Matrix overrideTransform);
		::Dynamic _hx___updateTransforms_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_BitmapData */ 
