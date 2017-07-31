// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_FlxSprite
#define INCLUDED_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxSprite_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();

	public:
		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.FlxSprite"); }
		static hx::ObjectPtr< FlxSprite_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSprite_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSprite","\xf7","\xd5","\x84","\x45"); }

		 ::flixel::animation::FlxAnimationController animation;
		 ::openfl::display::BitmapData framePixels;
		Bool useFramePixels;
		Bool antialiasing;
		Bool dirty;
		 ::flixel::graphics::frames::FlxFrame frame;
		Int frameWidth;
		Int frameHeight;
		Int numFrames;
		 ::flixel::graphics::frames::FlxFramesCollection frames;
		 ::flixel::graphics::FlxGraphic graphic;
		Float bakedRotationAngle;
		Float alpha;
		Int facing;
		Bool flipX;
		Bool flipY;
		 ::flixel::math::FlxPoint origin;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::math::FlxPoint scale;
		 ::Dynamic blend;
		Int color;
		 ::openfl::geom::ColorTransform colorTransform;
		Bool useColorTransform;
		 ::flixel::math::FlxRect clipRect;
		 ::openfl::display::Shader shader;
		 ::flixel::graphics::frames::FlxFrame _frame;
		 ::flixel::graphics::FlxGraphic _frameGraphic;
		Int _facingHorizontalMult;
		Int _facingVerticalMult;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		 ::openfl::geom::Rectangle _flashRect2;
		 ::openfl::geom::Point _flashPointZero;
		 ::flixel::math::FlxMatrix _matrix;
		 ::flixel::math::FlxPoint _halfSize;
		Float _sinAngle;
		Float _cosAngle;
		Bool _angleChanged;
		 ::haxe::ds::IntMap _facingFlip;
		virtual void initVars();

		virtual void destroy();

		virtual  ::flixel::FlxSprite clone();
		::Dynamic clone_dyn();

		virtual  ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);
		::Dynamic loadGraphicFromSprite_dyn();

		virtual  ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,hx::Null< Bool >  Animated,hx::Null< Int >  Width,hx::Null< Int >  Height,hx::Null< Bool >  Unique,::String Key);
		::Dynamic loadGraphic_dyn();

		virtual  ::flixel::FlxSprite loadRotatedGraphic( ::Dynamic Graphic,hx::Null< Int >  Rotations,hx::Null< Int >  Frame,hx::Null< Bool >  AntiAliasing,hx::Null< Bool >  AutoBuffer,::String Key);
		::Dynamic loadRotatedGraphic_dyn();

		 ::flixel::FlxSprite loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,hx::Null< Int >  Rotations,hx::Null< Bool >  AntiAliasing,hx::Null< Bool >  AutoBuffer);
		::Dynamic loadRotatedFrame_dyn();

		virtual  ::flixel::FlxSprite makeGraphic(Int Width,Int Height,hx::Null< Int >  Color,hx::Null< Bool >  Unique,::String Key);
		::Dynamic makeGraphic_dyn();

		virtual void graphicLoaded();
		::Dynamic graphicLoaded_dyn();

		void resetSize();
		::Dynamic resetSize_dyn();

		void resetFrameSize();
		::Dynamic resetFrameSize_dyn();

		void resetSizeFromFrame();
		::Dynamic resetSizeFromFrame_dyn();

		void resetFrame();
		::Dynamic resetFrame_dyn();

		void setGraphicSize(hx::Null< Int >  Width,hx::Null< Int >  Height);
		::Dynamic setGraphicSize_dyn();

		void updateHitbox();
		::Dynamic updateHitbox_dyn();

		virtual void resetHelpers();
		::Dynamic resetHelpers_dyn();

		virtual void update(Float elapsed);

		void updateAnimation(Float elapsed);
		::Dynamic updateAnimation_dyn();

		void checkEmptyFrame();
		::Dynamic checkEmptyFrame_dyn();

		virtual void draw();

		void drawSimple( ::flixel::FlxCamera camera);
		::Dynamic drawSimple_dyn();

		void drawComplex( ::flixel::FlxCamera camera);
		::Dynamic drawComplex_dyn();

		virtual void stamp( ::flixel::FlxSprite Brush,hx::Null< Int >  X,hx::Null< Int >  Y);
		::Dynamic stamp_dyn();

		virtual void drawFrame(hx::Null< Bool >  Force);
		::Dynamic drawFrame_dyn();

		void centerOffsets(hx::Null< Bool >  AdjustPosition);
		::Dynamic centerOffsets_dyn();

		void centerOrigin();
		::Dynamic centerOrigin_dyn();

		virtual ::Array< ::Dynamic> replaceColor(Int Color,Int NewColor,hx::Null< Bool >  FetchPositions);
		::Dynamic replaceColor_dyn();

		void setColorTransform(hx::Null< Float >  redMultiplier,hx::Null< Float >  greenMultiplier,hx::Null< Float >  blueMultiplier,hx::Null< Float >  alphaMultiplier,hx::Null< Int >  redOffset,hx::Null< Int >  greenOffset,hx::Null< Int >  blueOffset,hx::Null< Int >  alphaOffset);
		::Dynamic setColorTransform_dyn();

		virtual void updateColorTransform();
		::Dynamic updateColorTransform_dyn();

		virtual Bool pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< Int >  Mask, ::flixel::FlxCamera Camera);
		::Dynamic pixelsOverlapPoint_dyn();

		virtual void calcFrame(hx::Null< Bool >  RunOnCpp);
		::Dynamic calcFrame_dyn();

		 ::openfl::display::BitmapData updateFramePixels();
		::Dynamic updateFramePixels_dyn();

		 ::flixel::math::FlxPoint getGraphicMidpoint( ::flixel::math::FlxPoint point);
		::Dynamic getGraphicMidpoint_dyn();

		virtual Bool isOnScreen( ::flixel::FlxCamera Camera);

		Bool isSimpleRender( ::flixel::FlxCamera camera);
		::Dynamic isSimpleRender_dyn();

		Bool isSimpleRenderBlit( ::flixel::FlxCamera camera);
		::Dynamic isSimpleRenderBlit_dyn();

		void setFacingFlip(Int Direction,Bool FlipX,Bool FlipY);
		::Dynamic setFacingFlip_dyn();

		 ::flixel::FlxSprite setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,hx::Null< Bool >  saveAnimations);
		::Dynamic setFrames_dyn();

		virtual  ::openfl::display::BitmapData get_pixels();
		::Dynamic get_pixels_dyn();

		virtual  ::openfl::display::BitmapData set_pixels( ::openfl::display::BitmapData Pixels);
		::Dynamic set_pixels_dyn();

		virtual  ::flixel::graphics::frames::FlxFrame set_frame( ::flixel::graphics::frames::FlxFrame Value);
		::Dynamic set_frame_dyn();

		virtual Int set_facing(Int Direction);
		::Dynamic set_facing_dyn();

		virtual Float set_alpha(Float Alpha);
		::Dynamic set_alpha_dyn();

		virtual Int set_color(Int Color);
		::Dynamic set_color_dyn();

		virtual Float set_angle(Float Value);

		void updateTrig();
		::Dynamic updateTrig_dyn();

		virtual  ::Dynamic set_blend( ::Dynamic Value);
		::Dynamic set_blend_dyn();

		virtual  ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);
		::Dynamic set_graphic_dyn();

		virtual  ::flixel::math::FlxRect set_clipRect( ::flixel::math::FlxRect rect);
		::Dynamic set_clipRect_dyn();

		virtual  ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames);
		::Dynamic set_frames_dyn();

		virtual Bool set_flipX(Bool Value);
		::Dynamic set_flipX_dyn();

		virtual Bool set_flipY(Bool Value);
		::Dynamic set_flipY_dyn();

		Bool set_antialiasing(Bool value);
		::Dynamic set_antialiasing_dyn();

		Bool set_useFramePixels(Bool value);
		::Dynamic set_useFramePixels_dyn();

		Bool checkFlipX();
		::Dynamic checkFlipX_dyn();

		Bool checkFlipY();
		::Dynamic checkFlipY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxSprite */ 