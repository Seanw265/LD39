// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace flixel{
namespace util{

void FlxGradient_obj::__construct() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return new FlxGradient_obj; }

hx::ObjectPtr< FlxGradient_obj > FlxGradient_obj::__new()
{
	hx::ObjectPtr< FlxGradient_obj > _hx_result = new FlxGradient_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGradient_obj > _hx_result = new FlxGradient_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic FlxGradient_obj::createGradientMatrix(Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation){
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
            	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",26,0x5a5037d6)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
HXLINE(  27)		HX_VARI(  ::openfl::geom::Matrix,gradientMatrix) =  ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE(  30)		HX_VARI( Float,rot) = (rotation * ((Float)::Math_obj::PI / (Float)(int)180));
HXLINE(  33)		Float _hx_tmp;
HXDLIN(  33)		if ((height < (int)0)) {
HXLINE(  33)			_hx_tmp = (((Float)4294967296.0) + height);
            		}
            		else {
HXLINE(  33)			_hx_tmp = (height + ((Float)0.0));
            		}
HXDLIN(  33)		HX_VARI_NAME( Int,_hx_int,"int") = chunkSize;
HXDLIN(  33)		Float _hx_tmp1;
HXDLIN(  33)		if ((_hx_int < (int)0)) {
HXLINE(  33)			_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  33)			_hx_tmp1 = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  33)		gradientMatrix->createGradientBox(width,((Float)_hx_tmp / (Float)_hx_tmp1),rot,(int)0,(int)0);
HXLINE(  36)		HX_VARI( ::Array< Float >,alpha) = ::Array_obj< Float >::__new();
HXLINE(  38)		{
HXLINE(  38)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  38)			HX_VARI( Int,_g) = colors->length;
HXDLIN(  38)			while((_g1 < _g)){
HXLINE(  38)				HX_VARI( Int,ai) = _g1++;
HXLINE(  40)				Int _hx_tmp2 = ((int)((int)colors->__get(ai) >> (int)(int)24) & (int)(int)255);
HXDLIN(  40)				alpha->push(((Float)_hx_tmp2 / (Float)(int)255));
            			}
            		}
HXLINE(  43)		HX_VARI( ::Array< Int >,ratio) = ::Array_obj< Int >::__new();
HXLINE(  45)		Bool _hx_tmp3 = (colors->length == (int)2);
HXDLIN(  45)		if (_hx_tmp3) {
HXLINE(  47)			ratio[(int)0] = (int)0;
HXLINE(  48)			ratio[(int)1] = (int)255;
            		}
            		else {
HXLINE(  53)			Float _hx_tmp4 = ((Float)(int)255 / (Float)(colors->length - (int)1));
HXDLIN(  53)			HX_VARI( Int,spread) = ::Std_obj::_hx_int(_hx_tmp4);
HXLINE(  55)			ratio->push((int)0);
HXLINE(  57)			{
HXLINE(  57)				HX_VARI_NAME( Int,_g11,"_g1") = (int)1;
HXDLIN(  57)				HX_VARI_NAME( Int,_g2,"_g") = (colors->length - (int)1);
HXDLIN(  57)				while((_g11 < _g2)){
HXLINE(  57)					HX_VARI( Int,ri) = _g11++;
HXLINE(  59)					ratio->push((ri * spread));
            				}
            			}
HXLINE(  62)			ratio->push((int)255);
            		}
HXLINE(  65)		return  ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("matrix",41,36,c8,bb),gradientMatrix)
            			->setFixed(1,HX_("ratio",0b,35,24,e4),ratio)
            			->setFixed(2,HX_("alpha",5e,a7,96,21),alpha));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

::Array< Int > FlxGradient_obj::createGradientArray(Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation,hx::Null< Bool >  __o_interpolate){
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
Bool interpolate = __o_interpolate.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",70,0x5a5037d6)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE(  71)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  72)		HX_VARI( ::Array< Int >,result) = ::Array_obj< Int >::__new();
HXLINE(  74)		{
HXLINE(  74)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  74)			HX_VARI( Int,_g) = data->height;
HXDLIN(  74)			while((_g1 < _g)){
HXLINE(  74)				HX_VARI( Int,y) = _g1++;
HXLINE(  76)				Int _hx_tmp = data->getPixel32((int)0,y);
HXDLIN(  76)				result->push(_hx_tmp);
            			}
            		}
HXLINE(  79)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

 ::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite(Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation,hx::Null< Bool >  __o_interpolate){
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
Bool interpolate = __o_interpolate.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",95,0x5a5037d6)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE(  96)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  97)		HX_VARI(  ::flixel::FlxSprite,dest) =  ::flixel::FlxSprite_obj::__new(null(),null(),null());
HXLINE(  98)		dest->set_pixels(data);
HXLINE(  99)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

 ::openfl::display::BitmapData FlxGradient_obj::createGradientBitmapData(Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation,hx::Null< Bool >  __o_interpolate){
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
Bool interpolate = __o_interpolate.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",104,0x5a5037d6)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 106)		HX_VARI( Bool,bNeg) = (width < (int)0);
HXDLIN( 106)		Bool _hx_tmp;
HXDLIN( 106)		if ((false != bNeg)) {
HXLINE( 106)			_hx_tmp = false;
            		}
            		else {
HXLINE( 106)			_hx_tmp = ((int)1 > width);
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			width = (int)1;
            		}
HXLINE( 111)		HX_VARI_NAME( Bool,bNeg1,"bNeg") = (height < (int)0);
HXDLIN( 111)		Bool _hx_tmp1;
HXDLIN( 111)		if ((false != bNeg1)) {
HXLINE( 111)			_hx_tmp1 = false;
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = ((int)1 > height);
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 113)			height = (int)1;
            		}
HXLINE( 116)		HX_VARI(  ::Dynamic,gradient) = ::flixel::util::FlxGradient_obj::createGradientMatrix(width,height,colors,chunkSize,rotation);
HXLINE( 117)		HX_VARI(  ::openfl::display::Shape,shape) =  ::openfl::display::Shape_obj::__new();
HXLINE( 118)		HX_VAR(  ::Dynamic,interpolationMethod);
HXDLIN( 118)		if (interpolate) {
HXLINE( 118)			interpolationMethod = (int)1;
            		}
            		else {
HXLINE( 118)			interpolationMethod = (int)0;
            		}
HXLINE( 120)		shape->get_graphics()->beginGradientFill((int)0,colors, ::Dynamic(gradient->__Field(HX_("alpha",5e,a7,96,21),hx::paccDynamic)), ::Dynamic(gradient->__Field(HX_("ratio",0b,35,24,e4),hx::paccDynamic)), ::Dynamic(gradient->__Field(HX_("matrix",41,36,c8,bb),hx::paccDynamic)),(int)0,interpolationMethod,(int)0);
HXLINE( 123)		 ::openfl::display::Graphics _hx_tmp2 = shape->get_graphics();
HXDLIN( 123)		HX_VARI_NAME( Int,_hx_int,"int") = width;
HXDLIN( 123)		Float _hx_tmp3;
HXDLIN( 123)		if ((_hx_int < (int)0)) {
HXLINE( 123)			_hx_tmp3 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 123)			_hx_tmp3 = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 123)		HX_VARI_NAME( Int,int1,"int") = height;
HXDLIN( 123)		Float _hx_tmp4;
HXDLIN( 123)		if ((int1 < (int)0)) {
HXLINE( 123)			_hx_tmp4 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 123)			_hx_tmp4 = (int1 + ((Float)0.0));
            		}
HXDLIN( 123)		HX_VARI_NAME( Int,int2,"int") = chunkSize;
HXDLIN( 123)		Float _hx_tmp5;
HXDLIN( 123)		if ((int2 < (int)0)) {
HXLINE( 123)			_hx_tmp5 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 123)			_hx_tmp5 = (int2 + ((Float)0.0));
            		}
HXDLIN( 123)		_hx_tmp2->drawRect((int)0,(int)0,_hx_tmp3,((Float)_hx_tmp4 / (Float)_hx_tmp5));
HXLINE( 125)		HX_VARI(  ::openfl::display::BitmapData,data) =  ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);
HXLINE( 127)		if ((chunkSize == (int)1)) {
HXLINE( 129)			data->draw(shape,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 133)			HX_VARI_NAME( Int,int3,"int") = height;
HXDLIN( 133)			Float _hx_tmp6;
HXDLIN( 133)			if ((int3 < (int)0)) {
HXLINE( 133)				_hx_tmp6 = (((Float)4294967296.0) + int3);
            			}
            			else {
HXLINE( 133)				_hx_tmp6 = (int3 + ((Float)0.0));
            			}
HXDLIN( 133)			HX_VARI_NAME( Int,int4,"int") = chunkSize;
HXDLIN( 133)			Float _hx_tmp7;
HXDLIN( 133)			if ((int4 < (int)0)) {
HXLINE( 133)				_hx_tmp7 = (((Float)4294967296.0) + int4);
            			}
            			else {
HXLINE( 133)				_hx_tmp7 = (int4 + ((Float)0.0));
            			}
HXDLIN( 133)			Int _hx_tmp8 = ::Std_obj::_hx_int(((Float)_hx_tmp6 / (Float)_hx_tmp7));
HXDLIN( 133)			HX_VARI(  ::openfl::display::Bitmap,tempBitmap) =  ::openfl::display::Bitmap_obj::__new( ::openfl::display::BitmapData_obj::__new(width,_hx_tmp8,true,(int)0),null(),null());
HXLINE( 134)			tempBitmap->bitmapData->draw(shape,null(),null(),null(),null(),null());
HXLINE( 135)			HX_VARI_NAME( Int,int5,"int") = chunkSize;
HXDLIN( 135)			Float _hx_tmp9;
HXDLIN( 135)			if ((int5 < (int)0)) {
HXLINE( 135)				_hx_tmp9 = (((Float)4294967296.0) + int5);
            			}
            			else {
HXLINE( 135)				_hx_tmp9 = (int5 + ((Float)0.0));
            			}
HXDLIN( 135)			tempBitmap->set_scaleY(_hx_tmp9);
HXLINE( 137)			HX_VARI(  ::openfl::geom::Matrix,sM) =  ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE( 138)			Float _hx_tmp10 = tempBitmap->get_scaleX();
HXDLIN( 138)			Float _hx_tmp11 = tempBitmap->get_scaleY();
HXDLIN( 138)			sM->scale(_hx_tmp10,_hx_tmp11);
HXLINE( 140)			data->draw(tempBitmap,sM,null(),null(),null(),null());
            		}
HXLINE( 143)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

 ::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_destX,hx::Null< Int >  __o_destY,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation,hx::Null< Bool >  __o_interpolate){
Int destX = __o_destX.Default(0);
Int destY = __o_destY.Default(0);
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
Bool interpolate = __o_interpolate.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",163,0x5a5037d6)
            	HX_STACK_ARG(dest,"dest")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(destX,"destX")
            	HX_STACK_ARG(destY,"destY")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 164)		Float _hx_tmp = dest->get_width();
HXDLIN( 164)		if ((width > _hx_tmp)) {
HXLINE( 166)			Float _hx_tmp1 = dest->get_width();
HXDLIN( 166)			width = ::Std_obj::_hx_int(_hx_tmp1);
            		}
HXLINE( 169)		Float _hx_tmp2 = dest->get_height();
HXDLIN( 169)		if ((height > _hx_tmp2)) {
HXLINE( 171)			Float _hx_tmp3 = dest->get_height();
HXDLIN( 171)			height = ::Std_obj::_hx_int(_hx_tmp3);
            		}
HXLINE( 174)		HX_VARI(  ::flixel::FlxSprite,source) = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 175)		dest->stamp(source,destX,destY);
HXLINE( 176)		source->destroy();
HXLINE( 177)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

 ::openfl::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::display::BitmapData dest,Int width,Int height,::Array< Int > colors,hx::Null< Int >  __o_destX,hx::Null< Int >  __o_destY,hx::Null< Int >  __o_chunkSize,hx::Null< Int >  __o_rotation,hx::Null< Bool >  __o_interpolate){
Int destX = __o_destX.Default(0);
Int destY = __o_destY.Default(0);
Int chunkSize = __o_chunkSize.Default(1);
Int rotation = __o_rotation.Default(90);
Bool interpolate = __o_interpolate.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",197,0x5a5037d6)
            	HX_STACK_ARG(dest,"dest")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(destX,"destX")
            	HX_STACK_ARG(destY,"destY")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 198)		Bool _hx_tmp = (width > dest->width);
HXDLIN( 198)		if (_hx_tmp) {
HXLINE( 200)			width = dest->width;
            		}
HXLINE( 203)		Bool _hx_tmp1 = (height > dest->height);
HXDLIN( 203)		if (_hx_tmp1) {
HXLINE( 205)			height = dest->height;
            		}
HXLINE( 208)		HX_VARI(  ::openfl::display::BitmapData,source) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 209)		 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,source->width,source->height);
HXDLIN( 209)		dest->copyPixels(source,_hx_tmp2, ::openfl::geom::Point_obj::__new(destX,destY),null(),null(),true);
HXLINE( 210)		source->dispose();
HXLINE( 211)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

bool FlxGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { outValue = createGradientArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { outValue = createGradientMatrix_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { outValue = createGradientFlxSprite_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { outValue = createGradientBitmapData_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { outValue = overlayGradientOnFlxSprite_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { outValue = overlayGradientOnBitmapData_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxGradient_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxGradient_obj_sStaticStorageInfo = 0;
#endif

static void FlxGradient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGradient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGradient_obj::__mClass;

static ::String FlxGradient_obj_sStaticFields[] = {
	HX_HCSTRING("createGradientMatrix","\x6d","\xb4","\x68","\x83"),
	HX_HCSTRING("createGradientArray","\xed","\xd8","\xac","\x37"),
	HX_HCSTRING("createGradientFlxSprite","\x6b","\x9b","\x09","\xc6"),
	HX_HCSTRING("createGradientBitmapData","\xe5","\xb9","\x19","\x1e"),
	HX_HCSTRING("overlayGradientOnFlxSprite","\x38","\x4b","\x27","\x8c"),
	HX_HCSTRING("overlayGradientOnBitmapData","\x78","\xdd","\xf5","\xb1"),
	::String(null())
};

void FlxGradient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxGradient","\x48","\x2c","\xee","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGradient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxGradient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGradient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGradient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGradient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
