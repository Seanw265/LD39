// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

namespace flixel{
namespace graphics{
namespace frames{

void FlxImageFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","new",0xda56055f,"flixel.graphics.frames.FlxImageFrame.new","flixel/graphics/frames/FlxImageFrame.hx",27,0x94146112)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
            	HX_STACK_ARG(border,"border")
HXLINE(  27)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),border);
            	}

Dynamic FlxImageFrame_obj::__CreateEmpty() { return new FlxImageFrame_obj; }

hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border)
{
	hx::ObjectPtr< FlxImageFrame_obj > _hx_result = new FlxImageFrame_obj();
	_hx_result->__construct(parent,border);
	return _hx_result;
}

Dynamic FlxImageFrame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxImageFrame_obj > _hx_result = new FlxImageFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

Bool FlxImageFrame_obj::equals( ::flixel::math::FlxRect rect, ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","equals",0x9ad6a2a0,"flixel.graphics.frames.FlxImageFrame.equals","flixel/graphics/frames/FlxImageFrame.hx",211,0x94146112)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(border,"border")
HXLINE( 211)		HX_VARI_NAME(  ::flixel::math::FlxRect,rect1,"rect") = this->get_frame()->frame;
HXDLIN( 211)		HX_VAR( Bool,result);
HXDLIN( 211)		Bool _hx_tmp;
HXDLIN( 211)		Bool _hx_tmp1;
HXDLIN( 211)		Float aValueA = rect->x;
HXDLIN( 211)		Float aValueB = rect1->x;
HXDLIN( 211)		Float _hx_tmp2 = ::Math_obj::abs((aValueA - aValueB));
HXDLIN( 211)		if ((_hx_tmp2 <= ((Float)0.0000001))) {
HXLINE( 211)			Float aValueA1 = rect->y;
HXDLIN( 211)			Float aValueB1 = rect1->y;
HXDLIN( 211)			Float _hx_tmp3 = ::Math_obj::abs((aValueA1 - aValueB1));
HXDLIN( 211)			_hx_tmp1 = (_hx_tmp3 <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 211)			_hx_tmp1 = false;
            		}
HXDLIN( 211)		if (_hx_tmp1) {
HXLINE( 211)			Float aValueA2 = rect->width;
HXDLIN( 211)			Float aValueB2 = rect1->width;
HXDLIN( 211)			Float _hx_tmp4 = ::Math_obj::abs((aValueA2 - aValueB2));
HXDLIN( 211)			_hx_tmp = (_hx_tmp4 <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 211)			_hx_tmp = false;
            		}
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 211)			Float aValueA3 = rect->height;
HXDLIN( 211)			Float aValueB3 = rect1->height;
HXDLIN( 211)			Float _hx_tmp5 = ::Math_obj::abs((aValueA3 - aValueB3));
HXDLIN( 211)			result = (_hx_tmp5 <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 211)			result = false;
            		}
HXDLIN( 211)		Bool _hx_tmp6 = rect1->_weak;
HXDLIN( 211)		if (_hx_tmp6) {
HXLINE( 211)			Bool _hx_tmp7 = !(rect1->_inPool);
HXDLIN( 211)			if (_hx_tmp7) {
HXLINE( 211)				rect1->_inPool = true;
HXDLIN( 211)				rect1->_weak = false;
HXDLIN( 211)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect1);
            			}
            		}
HXDLIN( 211)		if (result) {
HXLINE( 211)			HX_VARI(  ::flixel::math::FlxPoint,point) = this->border;
HXDLIN( 211)			HX_VAR_NAME( Bool,result1,"result");
HXDLIN( 211)			Float aValueA4 = border->x;
HXDLIN( 211)			Float aValueB4 = point->x;
HXDLIN( 211)			Float _hx_tmp8 = ::Math_obj::abs((aValueA4 - aValueB4));
HXDLIN( 211)			if ((_hx_tmp8 <= ((Float)0.0000001))) {
HXLINE( 211)				Float aValueA5 = border->y;
HXDLIN( 211)				Float aValueB5 = point->y;
HXDLIN( 211)				Float _hx_tmp9 = ::Math_obj::abs((aValueA5 - aValueB5));
HXDLIN( 211)				result1 = (_hx_tmp9 <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 211)				result1 = false;
            			}
HXDLIN( 211)			Bool _hx_tmp10 = point->_weak;
HXDLIN( 211)			if (_hx_tmp10) {
HXLINE( 211)				point->put();
            			}
HXDLIN( 211)			return result1;
            		}
            		else {
HXLINE( 211)			return false;
            		}
HXDLIN( 211)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,equals,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxImageFrame_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","addBorder",0x2bc1002c,"flixel.graphics.frames.FlxImageFrame.addBorder","flixel/graphics/frames/FlxImageFrame.hx",237,0x94146112)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(border,"border")
HXLINE( 238)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 238)		point->_inPool = false;
HXDLIN( 238)		point->_weak = true;
HXDLIN( 238)		HX_VARI(  ::flixel::math::FlxPoint,resultBorder) = point->addPoint(this->border)->addPoint(border);
HXLINE( 240)		HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(this->parent,this->get_frame()->frame,resultBorder);
HXLINE( 241)		Bool _hx_tmp = hx::IsNotNull( imageFrame );
HXDLIN( 241)		if (_hx_tmp) {
HXLINE( 242)			return imageFrame;
            		}
HXLINE( 244)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__new(this->parent,resultBorder);
HXLINE( 245)		 ::flixel::graphics::frames::FlxFrame _hx_tmp1 = this->get_frame()->setBorderTo(border,null());
HXDLIN( 245)		imageFrame->pushFrame(_hx_tmp1);
HXLINE( 246)		return imageFrame;
            	}


void FlxImageFrame_obj::destroy(){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","destroy",0xd0e04d79,"flixel.graphics.frames.FlxImageFrame.destroy","flixel/graphics/frames/FlxImageFrame.hx",250,0x94146112)
            	HX_STACK_THIS(this)
HXLINE( 251)		this->super::destroy();
HXLINE( 252)		 ::flixel::graphics::frames::FlxFrame _hx_tmp = this->get_frame();
HXDLIN( 252)		this->frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::util::FlxDestroyUtil_obj::destroy(_hx_tmp)) );
            	}


 ::flixel::graphics::frames::FlxFrame FlxImageFrame_obj::get_frame(){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","get_frame",0x59af52c3,"flixel.graphics.frames.FlxImageFrame.get_frame","flixel/graphics/frames/FlxImageFrame.hx",257,0x94146112)
            	HX_STACK_THIS(this)
HXLINE( 257)		return this->frames->__get((int)0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxImageFrame_obj,get_frame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromEmptyFrame",0x20331dcb,"flixel.graphics.frames.FlxImageFrame.fromEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",39,0x94146112)
            	HX_STACK_ARG(graphic,"graphic")
            	HX_STACK_ARG(frameRect,"frameRect")
HXLINE(  40)		Bool _hx_tmp;
HXDLIN(  40)		Bool _hx_tmp1 = hx::IsNotNull( graphic );
HXDLIN(  40)		if (_hx_tmp1) {
HXLINE(  40)			_hx_tmp = hx::IsNull( frameRect );
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return null();
            		}
HXLINE(  44)		HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = ::flixel::graphics::frames::FlxImageFrame_obj::findEmptyFrame(graphic,frameRect);
HXLINE(  45)		Bool _hx_tmp2 = hx::IsNotNull( imageFrame );
HXDLIN(  45)		if (_hx_tmp2) {
HXLINE(  46)			return imageFrame;
            		}
HXLINE(  49)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());
HXLINE(  50)		imageFrame->addEmptyFrame(frameRect);
HXLINE(  51)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromEmptyFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrame( ::flixel::graphics::frames::FlxFrame source){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromFrame",0xca8ee0a2,"flixel.graphics.frames.FlxImageFrame.fromFrame","flixel/graphics/frames/FlxImageFrame.hx",61,0x94146112)
            	HX_STACK_ARG(source,"source")
HXLINE(  62)		HX_VARI(  ::flixel::graphics::FlxGraphic,graphic) = source->parent;
HXLINE(  63)		HX_VARI(  ::flixel::math::FlxRect,rect) = source->frame;
HXLINE(  65)		HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,rect,null());
HXLINE(  66)		Bool _hx_tmp = hx::IsNotNull( imageFrame );
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			return imageFrame;
            		}
HXLINE(  69)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());
HXLINE(  70)		Float X = (int)0;
HXDLIN(  70)		Float Y = (int)0;
HXDLIN(  70)		Float Width = (int)0;
HXDLIN(  70)		Float Height = (int)0;
HXDLIN(  70)		HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  70)		_this->x = X;
HXDLIN(  70)		_this->y = Y;
HXDLIN(  70)		_this->width = Width;
HXDLIN(  70)		_this->height = Height;
HXDLIN(  70)		_this->_inPool = false;
HXDLIN(  70)		_this->x = rect->x;
HXDLIN(  70)		_this->y = rect->y;
HXDLIN(  70)		_this->width = rect->width;
HXDLIN(  70)		_this->height = rect->height;
HXDLIN(  70)		Bool _hx_tmp1 = _this->_weak;
HXDLIN(  70)		if (_hx_tmp1) {
HXLINE(  70)			Bool _hx_tmp2 = !(_this->_inPool);
HXDLIN(  70)			if (_hx_tmp2) {
HXLINE(  70)				_this->_inPool = true;
HXDLIN(  70)				_this->_weak = false;
HXDLIN(  70)				::flixel::math::FlxRect_obj::_pool->putUnsafe(_this);
            			}
            		}
HXDLIN(  70)		imageFrame->addSpriteSheetFrame(_this);
HXLINE(  71)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromImage( ::Dynamic source){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromImage",0x817487d0,"flixel.graphics.frames.FlxImageFrame.fromImage","flixel/graphics/frames/FlxImageFrame.hx",82,0x94146112)
            	HX_STACK_ARG(source,"source")
HXLINE(  82)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(source,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromImage,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect region){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromGraphic",0xe0158a5d,"flixel.graphics.frames.FlxImageFrame.fromGraphic","flixel/graphics/frames/FlxImageFrame.hx",93,0x94146112)
            	HX_STACK_ARG(graphic,"graphic")
            	HX_STACK_ARG(region,"region")
HXLINE(  94)		Bool _hx_tmp = hx::IsNull( graphic );
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  95)			return null();
            		}
HXLINE(  98)		HX_VARI(  ::flixel::math::FlxRect,checkRegion) = region;
HXLINE( 100)		Bool _hx_tmp1 = hx::IsNull( checkRegion );
HXDLIN( 100)		if (_hx_tmp1) {
HXLINE( 101)			Float Width = graphic->width;
HXDLIN( 101)			Float Height = graphic->height;
HXDLIN( 101)			HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 101)			_this->x = (int)0;
HXDLIN( 101)			_this->y = (int)0;
HXDLIN( 101)			_this->width = Width;
HXDLIN( 101)			_this->height = Height;
HXDLIN( 101)			_this->_inPool = false;
HXDLIN( 101)			_this->_weak = true;
HXDLIN( 101)			checkRegion = _this;
            		}
HXLINE( 103)		HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,checkRegion,null());
HXLINE( 104)		Bool _hx_tmp2 = hx::IsNotNull( imageFrame );
HXDLIN( 104)		if (_hx_tmp2) {
HXLINE( 105)			return imageFrame;
            		}
HXLINE( 108)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());
HXLINE( 110)		Bool _hx_tmp3 = hx::IsNull( region );
HXDLIN( 110)		if (_hx_tmp3) {
HXLINE( 112)			Float Width1 = graphic->width;
HXDLIN( 112)			Float Height1 = graphic->height;
HXDLIN( 112)			HX_VARI_NAME(  ::flixel::math::FlxRect,_this1,"_this") = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 112)			_this1->x = (int)0;
HXDLIN( 112)			_this1->y = (int)0;
HXDLIN( 112)			_this1->width = Width1;
HXDLIN( 112)			_this1->height = Height1;
HXDLIN( 112)			_this1->_inPool = false;
HXDLIN( 112)			region = _this1;
            		}
            		else {
HXLINE( 116)			Bool _hx_tmp4 = (region->width == (int)0);
HXDLIN( 116)			if (_hx_tmp4) {
HXLINE( 117)				region->width = (graphic->width - region->x);
            			}
HXLINE( 119)			Bool _hx_tmp5 = (region->height == (int)0);
HXDLIN( 119)			if (_hx_tmp5) {
HXLINE( 120)				region->height = (graphic->height - region->y);
            			}
            		}
HXLINE( 123)		imageFrame->addSpriteSheetFrame(region);
HXLINE( 124)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromGraphic,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromRectangle( ::Dynamic source, ::flixel::math::FlxRect region){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromRectangle",0x493e1b24,"flixel.graphics.frames.FlxImageFrame.fromRectangle","flixel/graphics/frames/FlxImageFrame.hx",135,0x94146112)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(region,"region")
HXLINE( 136)		HX_VARI(  ::flixel::graphics::FlxGraphic,graphic) = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 137)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,region);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromRectangle,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxPoint border, ::flixel::math::FlxRect region){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromBitmapAddSpacesAndBorders",0x2600d1c4,"flixel.graphics.frames.FlxImageFrame.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",152,0x94146112)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(border,"border")
            	HX_STACK_ARG(region,"region")
HXLINE( 153)		HX_VARI(  ::flixel::graphics::FlxGraphic,graphic) = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 154)		Bool _hx_tmp = hx::IsNull( graphic );
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 154)			return null();
            		}
HXLINE( 156)		HX_VARI( ::String,key) = ::flixel::FlxG_obj::bitmap->getKeyWithSpacesAndBorders(graphic->key,null(),null(),border,region);
HXLINE( 157)		HX_VARI(  ::flixel::graphics::FlxGraphic,result) = ::flixel::FlxG_obj::bitmap->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE( 158)		Bool _hx_tmp1 = hx::IsNull( result );
HXDLIN( 158)		if (_hx_tmp1) {
HXLINE( 160)			HX_VARI(  ::openfl::display::BitmapData,bitmap) = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(graphic->bitmap,null(),null(),border,region);
HXLINE( 161)			result = ::flixel::FlxG_obj::bitmap->add(bitmap,false,key);
            		}
HXLINE( 164)		HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());
HXLINE( 165)		return Dynamic( imageFrame->addBorder(border)).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,fromBitmapAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromFrameAddSpacesAndBorders",0x6359dbfc,"flixel.graphics.frames.FlxImageFrame.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",177,0x94146112)
            	HX_STACK_ARG(frame,"frame")
            	HX_STACK_ARG(border,"border")
HXLINE( 178)		HX_VARI(  ::openfl::display::BitmapData,bitmap) = frame->paint(null(),null(),null(),null());
HXLINE( 179)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromBitmapAddSpacesAndBorders(bitmap,border,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromFrameAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect, ::flixel::math::FlxPoint frameBorder){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findFrame",0x04fd2773,"flixel.graphics.frames.FlxImageFrame.findFrame","flixel/graphics/frames/FlxImageFrame.hx",192,0x94146112)
            	HX_STACK_ARG(graphic,"graphic")
            	HX_STACK_ARG(frameRect,"frameRect")
            	HX_STACK_ARG(frameBorder,"frameBorder")
HXLINE( 193)		Bool _hx_tmp = hx::IsNull( frameBorder );
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 194)			HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 194)			point->_inPool = false;
HXDLIN( 194)			point->_weak = true;
HXDLIN( 194)			frameBorder = point;
            		}
HXLINE( 196)		HX_VARI( ::hx::EnumBase,type) = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 196)		HX_VARI( ::cpp::VirtualArray,collections) = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 196)		Bool _hx_tmp1 = hx::IsNull( collections );
HXDLIN( 196)		if (_hx_tmp1) {
HXLINE( 196)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 196)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 196)		HX_VARI( ::Array< ::Dynamic>,imageFrames) = collections;
HXLINE( 197)		{
HXLINE( 197)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 197)			while((_g < imageFrames->length)){
HXLINE( 197)				HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 197)				++_g;
HXLINE( 199)				Bool _hx_tmp2;
HXDLIN( 199)				Bool _hx_tmp3;
HXDLIN( 199)				HX_VARI(  ::flixel::math::FlxRect,rect) = imageFrame->get_frame()->frame;
HXDLIN( 199)				HX_VAR( Bool,result);
HXDLIN( 199)				Bool _hx_tmp4;
HXDLIN( 199)				Bool _hx_tmp5;
HXDLIN( 199)				Float aValueA = frameRect->x;
HXDLIN( 199)				Float aValueB = rect->x;
HXDLIN( 199)				Float _hx_tmp6 = ::Math_obj::abs((aValueA - aValueB));
HXDLIN( 199)				if ((_hx_tmp6 <= ((Float)0.0000001))) {
HXLINE( 199)					Float aValueA1 = frameRect->y;
HXDLIN( 199)					Float aValueB1 = rect->y;
HXDLIN( 199)					Float _hx_tmp7 = ::Math_obj::abs((aValueA1 - aValueB1));
HXDLIN( 199)					_hx_tmp5 = (_hx_tmp7 <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					_hx_tmp5 = false;
            				}
HXDLIN( 199)				if (_hx_tmp5) {
HXLINE( 199)					Float aValueA2 = frameRect->width;
HXDLIN( 199)					Float aValueB2 = rect->width;
HXDLIN( 199)					Float _hx_tmp8 = ::Math_obj::abs((aValueA2 - aValueB2));
HXDLIN( 199)					_hx_tmp4 = (_hx_tmp8 <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					_hx_tmp4 = false;
            				}
HXDLIN( 199)				if (_hx_tmp4) {
HXLINE( 199)					Float aValueA3 = frameRect->height;
HXDLIN( 199)					Float aValueB3 = rect->height;
HXDLIN( 199)					Float _hx_tmp9 = ::Math_obj::abs((aValueA3 - aValueB3));
HXDLIN( 199)					result = (_hx_tmp9 <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					result = false;
            				}
HXDLIN( 199)				Bool _hx_tmp10 = rect->_weak;
HXDLIN( 199)				if (_hx_tmp10) {
HXLINE( 199)					Bool _hx_tmp11 = !(rect->_inPool);
HXDLIN( 199)					if (_hx_tmp11) {
HXLINE( 199)						rect->_inPool = true;
HXDLIN( 199)						rect->_weak = false;
HXDLIN( 199)						::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            					}
            				}
HXDLIN( 199)				if (result) {
HXLINE( 199)					HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = imageFrame->border;
HXDLIN( 199)					HX_VAR_NAME( Bool,result1,"result");
HXDLIN( 199)					Float aValueA4 = frameBorder->x;
HXDLIN( 199)					Float aValueB4 = point1->x;
HXDLIN( 199)					Float _hx_tmp12 = ::Math_obj::abs((aValueA4 - aValueB4));
HXDLIN( 199)					if ((_hx_tmp12 <= ((Float)0.0000001))) {
HXLINE( 199)						Float aValueA5 = frameBorder->y;
HXDLIN( 199)						Float aValueB5 = point1->y;
HXDLIN( 199)						Float _hx_tmp13 = ::Math_obj::abs((aValueA5 - aValueB5));
HXDLIN( 199)						result1 = (_hx_tmp13 <= ((Float)0.0000001));
            					}
            					else {
HXLINE( 199)						result1 = false;
            					}
HXDLIN( 199)					Bool _hx_tmp14 = point1->_weak;
HXDLIN( 199)					if (_hx_tmp14) {
HXLINE( 199)						point1->put();
            					}
HXDLIN( 199)					_hx_tmp3 = result1;
            				}
            				else {
HXLINE( 199)					_hx_tmp3 = false;
            				}
HXDLIN( 199)				if (_hx_tmp3) {
HXLINE( 199)					_hx_tmp2 = (imageFrame->get_frame()->type != (int)2);
            				}
            				else {
HXLINE( 199)					_hx_tmp2 = false;
            				}
HXDLIN( 199)				if (_hx_tmp2) {
HXLINE( 200)					return imageFrame;
            				}
            			}
            		}
HXLINE( 203)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,findFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findEmptyFrame",0xe2dd815a,"flixel.graphics.frames.FlxImageFrame.findEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",222,0x94146112)
            	HX_STACK_ARG(graphic,"graphic")
            	HX_STACK_ARG(frameRect,"frameRect")
HXLINE( 223)		HX_VARI( ::hx::EnumBase,type) = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 223)		HX_VARI( ::cpp::VirtualArray,collections) = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 223)		Bool _hx_tmp = hx::IsNull( collections );
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 223)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 223)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 223)		HX_VARI( ::Array< ::Dynamic>,imageFrames) = collections;
HXLINE( 225)		{
HXLINE( 225)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 225)			while((_g < imageFrames->length)){
HXLINE( 225)				HX_VARI(  ::flixel::graphics::frames::FlxImageFrame,imageFrame) = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 225)				++_g;
HXLINE( 227)				HX_VARI(  ::flixel::graphics::frames::FlxFrame,frame) = imageFrame->get_frame();
HXLINE( 228)				Bool _hx_tmp1;
HXDLIN( 228)				Bool _hx_tmp2;
HXDLIN( 228)				if ((frame->sourceSize->x == frameRect->width)) {
HXLINE( 228)					_hx_tmp2 = (frame->sourceSize->y == frameRect->height);
            				}
            				else {
HXLINE( 228)					_hx_tmp2 = false;
            				}
HXDLIN( 228)				if (_hx_tmp2) {
HXLINE( 228)					_hx_tmp1 = (frame->type == (int)2);
            				}
            				else {
HXLINE( 228)					_hx_tmp1 = false;
            				}
HXDLIN( 228)				if (_hx_tmp1) {
HXLINE( 230)					return imageFrame;
            				}
            			}
            		}
HXLINE( 233)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findEmptyFrame,return )


FlxImageFrame_obj::FlxImageFrame_obj()
{
}

void FlxImageFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxImageFrame);
	HX_MARK_MEMBER_NAME(frame,"frame");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxImageFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxImageFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return hx::Val( inCallProp == hx::paccAlways ? get_frame() : frame); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return hx::Val( addBorder_dyn()); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return hx::Val( get_frame_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxImageFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromEmptyFrame") ) { outValue = fromEmptyFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findEmptyFrame") ) { outValue = findEmptyFrame_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true; }
	}
	return false;
}

hx::Val FlxImageFrame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxImageFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxImageFrame_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxImageFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxImageFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxImageFrame_obj_sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	::String(null()) };

static void FlxImageFrame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxImageFrame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxImageFrame_obj::__mClass;

static ::String FlxImageFrame_obj_sStaticFields[] = {
	HX_HCSTRING("fromEmptyFrame","\x6a","\xa0","\x02","\x7f"),
	HX_HCSTRING("fromFrame","\x63","\x62","\x0c","\xbb"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("fromGraphic","\x5e","\xbe","\x47","\x0c"),
	HX_HCSTRING("fromRectangle","\x65","\x11","\x66","\x8d"),
	HX_HCSTRING("fromBitmapAddSpacesAndBorders","\x05","\x1a","\xdd","\xf3"),
	HX_HCSTRING("fromFrameAddSpacesAndBorders","\xdb","\x16","\xd1","\xbd"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	HX_HCSTRING("findEmptyFrame","\xf9","\x03","\xad","\x41"),
	::String(null())
};

void FlxImageFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxImageFrame","\xed","\x69","\xba","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxImageFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxImageFrame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxImageFrame_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxImageFrame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxImageFrame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxImageFrame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxImageFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxImageFrame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames