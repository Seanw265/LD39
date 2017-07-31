// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

namespace flixel{
namespace util{

void FlxCollision_obj::__construct() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return new FlxCollision_obj; }

hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{
	hx::ObjectPtr< FlxCollision_obj > _hx_result = new FlxCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxCollision_obj > _hx_result = new FlxCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::flixel::math::FlxVector FlxCollision_obj::pointA;

 ::flixel::math::FlxVector FlxCollision_obj::pointB;

 ::flixel::math::FlxVector FlxCollision_obj::centerA;

 ::flixel::math::FlxVector FlxCollision_obj::centerB;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixA;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixB;

 ::flixel::math::FlxMatrix FlxCollision_obj::testMatrix;

 ::flixel::math::FlxRect FlxCollision_obj::boundsA;

 ::flixel::math::FlxRect FlxCollision_obj::boundsB;

 ::flixel::math::FlxRect FlxCollision_obj::intersect;

 ::openfl::geom::Rectangle FlxCollision_obj::flashRect;

Bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact, ::flixel::FlxSprite Target,hx::Null< Int >  __o_AlphaTolerance, ::flixel::FlxCamera Camera){
Int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",48,0x8c8a7b84)
            	HX_STACK_ARG(Contact,"Contact")
            	HX_STACK_ARG(Target,"Target")
            	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE(  50)		HX_VAR( Bool,considerRotation);
HXDLIN(  50)		if ((Contact->angle == (int)0)) {
HXLINE(  50)			considerRotation = (Target->angle != (int)0);
            		}
            		else {
HXLINE(  50)			considerRotation = true;
            		}
HXLINE(  52)		Bool _hx_tmp = hx::IsNotNull( Camera );
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  52)			Camera = Camera;
            		}
            		else {
HXLINE(  52)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  54)		Float _hx_tmp1 = Contact->x;
HXDLIN(  54)		Float _hx_tmp2 = (Camera->scroll->x * Contact->scrollFactor->x);
HXDLIN(  54)		Int _hx_tmp3 = ::Std_obj::_hx_int(_hx_tmp2);
HXDLIN(  54)		Float _hx_tmp4 = ((_hx_tmp1 - _hx_tmp3) - Contact->offset->x);
HXDLIN(  54)		::flixel::util::FlxCollision_obj::pointA->set_x(_hx_tmp4);
HXLINE(  55)		Float _hx_tmp5 = Contact->y;
HXDLIN(  55)		Float _hx_tmp6 = (Camera->scroll->y * Contact->scrollFactor->y);
HXDLIN(  55)		Int _hx_tmp7 = ::Std_obj::_hx_int(_hx_tmp6);
HXDLIN(  55)		Float _hx_tmp8 = ((_hx_tmp5 - _hx_tmp7) - Contact->offset->y);
HXDLIN(  55)		::flixel::util::FlxCollision_obj::pointA->set_y(_hx_tmp8);
HXLINE(  57)		Float _hx_tmp9 = Target->x;
HXDLIN(  57)		Float _hx_tmp10 = (Camera->scroll->x * Target->scrollFactor->x);
HXDLIN(  57)		Int _hx_tmp11 = ::Std_obj::_hx_int(_hx_tmp10);
HXDLIN(  57)		Float _hx_tmp12 = ((_hx_tmp9 - _hx_tmp11) - Target->offset->x);
HXDLIN(  57)		::flixel::util::FlxCollision_obj::pointB->set_x(_hx_tmp12);
HXLINE(  58)		Float _hx_tmp13 = Target->y;
HXDLIN(  58)		Float _hx_tmp14 = (Camera->scroll->y * Target->scrollFactor->y);
HXDLIN(  58)		Int _hx_tmp15 = ::Std_obj::_hx_int(_hx_tmp14);
HXDLIN(  58)		Float _hx_tmp16 = ((_hx_tmp13 - _hx_tmp15) - Target->offset->y);
HXDLIN(  58)		::flixel::util::FlxCollision_obj::pointB->set_y(_hx_tmp16);
HXLINE(  60)		if (considerRotation) {
HXLINE(  63)			Contact->origin->copyTo(::flixel::util::FlxCollision_obj::centerA);
HXLINE(  64)			Target->origin->copyTo(::flixel::util::FlxCollision_obj::centerB);
HXLINE(  67)			HX_VARI(  ::flixel::math::FlxVector,_this) = ::flixel::util::FlxCollision_obj::centerA;
HXDLIN(  67)			Float _hx_tmp17 = ((_this->x * _this->x) + (_this->y * _this->y));
HXDLIN(  67)			HX_VARI( Float,lengthA) = ::Math_obj::sqrt(_hx_tmp17);
HXLINE(  68)			Float _hx_tmp18 = (::flixel::util::FlxCollision_obj::pointA->x + ::flixel::util::FlxCollision_obj::centerA->x);
HXDLIN(  68)			::flixel::util::FlxCollision_obj::boundsA->x = (_hx_tmp18 - lengthA);
HXLINE(  69)			Float _hx_tmp19 = (::flixel::util::FlxCollision_obj::pointA->y + ::flixel::util::FlxCollision_obj::centerA->y);
HXDLIN(  69)			::flixel::util::FlxCollision_obj::boundsA->y = (_hx_tmp19 - lengthA);
HXLINE(  70)			::flixel::util::FlxCollision_obj::boundsA->width = (lengthA * (int)2);
HXLINE(  71)			::flixel::util::FlxCollision_obj::boundsA->height = ::flixel::util::FlxCollision_obj::boundsA->width;
HXLINE(  73)			HX_VARI_NAME(  ::flixel::math::FlxVector,_this1,"_this") = ::flixel::util::FlxCollision_obj::centerB;
HXDLIN(  73)			Float _hx_tmp20 = ((_this1->x * _this1->x) + (_this1->y * _this1->y));
HXDLIN(  73)			HX_VARI( Float,lengthB) = ::Math_obj::sqrt(_hx_tmp20);
HXLINE(  74)			Float _hx_tmp21 = (::flixel::util::FlxCollision_obj::pointB->x + ::flixel::util::FlxCollision_obj::centerB->x);
HXDLIN(  74)			::flixel::util::FlxCollision_obj::boundsB->x = (_hx_tmp21 - lengthB);
HXLINE(  75)			Float _hx_tmp22 = (::flixel::util::FlxCollision_obj::pointB->y + ::flixel::util::FlxCollision_obj::centerB->y);
HXDLIN(  75)			::flixel::util::FlxCollision_obj::boundsB->y = (_hx_tmp22 - lengthB);
HXLINE(  76)			::flixel::util::FlxCollision_obj::boundsB->width = (lengthB * (int)2);
HXLINE(  77)			::flixel::util::FlxCollision_obj::boundsB->height = ::flixel::util::FlxCollision_obj::boundsB->width;
            		}
            		else {
HXLINE(  81)			::flixel::util::FlxCollision_obj::boundsA->x = ::flixel::util::FlxCollision_obj::pointA->x;
HXLINE(  82)			::flixel::util::FlxCollision_obj::boundsA->y = ::flixel::util::FlxCollision_obj::pointA->y;
HXLINE(  83)			::flixel::util::FlxCollision_obj::boundsA->width = Contact->frameWidth;
HXLINE(  84)			::flixel::util::FlxCollision_obj::boundsA->height = Contact->frameHeight;
HXLINE(  86)			::flixel::util::FlxCollision_obj::boundsB->x = ::flixel::util::FlxCollision_obj::pointB->x;
HXLINE(  87)			::flixel::util::FlxCollision_obj::boundsB->y = ::flixel::util::FlxCollision_obj::pointB->y;
HXLINE(  88)			::flixel::util::FlxCollision_obj::boundsB->width = Target->frameWidth;
HXLINE(  89)			::flixel::util::FlxCollision_obj::boundsB->height = Target->frameHeight;
            		}
HXLINE(  92)		HX_VARI_NAME(  ::flixel::math::FlxRect,_this2,"_this") = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  92)		Float X = (int)0;
HXDLIN(  92)		Float Y = (int)0;
HXDLIN(  92)		Float Width = (int)0;
HXDLIN(  92)		Float Height = (int)0;
HXDLIN(  92)		_this2->x = X;
HXDLIN(  92)		_this2->y = Y;
HXDLIN(  92)		_this2->width = Width;
HXDLIN(  92)		_this2->height = Height;
HXDLIN(  92)		::flixel::util::FlxCollision_obj::boundsA->intersection(::flixel::util::FlxCollision_obj::boundsB,_this2);
HXLINE(  94)		Bool _hx_tmp23;
HXDLIN(  94)		Bool _hx_tmp24;
HXDLIN(  94)		HX_VARI_NAME(  ::flixel::math::FlxRect,_this3,"_this") = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  94)		Bool _hx_tmp25;
HXDLIN(  94)		if ((_this3->width != (int)0)) {
HXLINE(  94)			_hx_tmp25 = (_this3->height == (int)0);
            		}
            		else {
HXLINE(  94)			_hx_tmp25 = true;
            		}
HXDLIN(  94)		if (!(_hx_tmp25)) {
HXLINE(  94)			_hx_tmp24 = (::flixel::util::FlxCollision_obj::intersect->width < (int)1);
            		}
            		else {
HXLINE(  94)			_hx_tmp24 = true;
            		}
HXDLIN(  94)		if (!(_hx_tmp24)) {
HXLINE(  94)			_hx_tmp23 = (::flixel::util::FlxCollision_obj::intersect->height < (int)1);
            		}
            		else {
HXLINE(  94)			_hx_tmp23 = true;
            		}
HXDLIN(  94)		if (_hx_tmp23) {
HXLINE(  96)			return false;
            		}
HXLINE( 100)		::flixel::util::FlxCollision_obj::matrixA->identity();
HXLINE( 101)		::flixel::util::FlxCollision_obj::matrixA->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y)));
HXLINE( 103)		::flixel::util::FlxCollision_obj::matrixB->identity();
HXLINE( 104)		::flixel::util::FlxCollision_obj::matrixB->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y)));
HXLINE( 106)		Contact->drawFrame(null());
HXLINE( 107)		Target->drawFrame(null());
HXLINE( 109)		HX_VARI(  ::openfl::display::BitmapData,testA) = Contact->framePixels;
HXLINE( 110)		HX_VARI(  ::openfl::display::BitmapData,testB) = Target->framePixels;
HXLINE( 112)		HX_VARI( Int,overlapWidth) = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->width);
HXLINE( 113)		HX_VARI( Int,overlapHeight) = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->height);
HXLINE( 116)		if (considerRotation) {
HXLINE( 118)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE( 121)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
HXLINE( 124)			Float _hx_tmp26 = (Contact->angle * ((Float)::Math_obj::PI / (Float)(int)180));
HXDLIN( 124)			::flixel::util::FlxCollision_obj::testMatrix->rotate(_hx_tmp26);
HXLINE( 127)			Float _hx_tmp27 = ((Float)::flixel::util::FlxCollision_obj::boundsA->width / (Float)(int)2);
HXDLIN( 127)			Float _hx_tmp28 = ((Float)::flixel::util::FlxCollision_obj::boundsA->height / (Float)(int)2);
HXDLIN( 127)			::flixel::util::FlxCollision_obj::testMatrix->translate(_hx_tmp27,_hx_tmp28);
HXLINE( 130)			Int _hx_tmp29 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width);
HXDLIN( 130)			Int _hx_tmp30 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height);
HXDLIN( 130)			HX_VARI(  ::openfl::display::BitmapData,testA2) = ::flixel::util::FlxBitmapDataPool_obj::get(_hx_tmp29,_hx_tmp30,true,(int)0,false);
HXLINE( 133)			testA2->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 134)			testA = testA2;
HXLINE( 137)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE( 138)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
HXLINE( 139)			Float _hx_tmp31 = (Target->angle * ((Float)::Math_obj::PI / (Float)(int)180));
HXDLIN( 139)			::flixel::util::FlxCollision_obj::testMatrix->rotate(_hx_tmp31);
HXLINE( 140)			Float _hx_tmp32 = ((Float)::flixel::util::FlxCollision_obj::boundsB->width / (Float)(int)2);
HXDLIN( 140)			Float _hx_tmp33 = ((Float)::flixel::util::FlxCollision_obj::boundsB->height / (Float)(int)2);
HXDLIN( 140)			::flixel::util::FlxCollision_obj::testMatrix->translate(_hx_tmp32,_hx_tmp33);
HXLINE( 142)			Int _hx_tmp34 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width);
HXDLIN( 142)			Int _hx_tmp35 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height);
HXDLIN( 142)			HX_VARI(  ::openfl::display::BitmapData,testB2) = ::flixel::util::FlxBitmapDataPool_obj::get(_hx_tmp34,_hx_tmp35,true,(int)0,false);
HXLINE( 143)			testB2->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 144)			testB = testB2;
            		}
HXLINE( 147)		::flixel::util::FlxCollision_obj::boundsA->x = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->tx));
HXLINE( 148)		::flixel::util::FlxCollision_obj::boundsA->y = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->ty));
HXLINE( 149)		::flixel::util::FlxCollision_obj::boundsA->width = overlapWidth;
HXLINE( 150)		::flixel::util::FlxCollision_obj::boundsA->height = overlapHeight;
HXLINE( 152)		::flixel::util::FlxCollision_obj::boundsB->x = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->tx));
HXLINE( 153)		::flixel::util::FlxCollision_obj::boundsB->y = ::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->ty));
HXLINE( 154)		::flixel::util::FlxCollision_obj::boundsB->width = overlapWidth;
HXLINE( 155)		::flixel::util::FlxCollision_obj::boundsB->height = overlapHeight;
HXLINE( 157)		{
HXLINE( 157)			HX_VARI_NAME(  ::flixel::math::FlxRect,_this4,"_this") = ::flixel::util::FlxCollision_obj::boundsA;
HXDLIN( 157)			HX_VARI(  ::openfl::geom::Rectangle,FlashRect) = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 157)			Bool _hx_tmp36 = hx::IsNull( FlashRect );
HXDLIN( 157)			if (_hx_tmp36) {
HXLINE( 157)				FlashRect =  ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
            			}
HXDLIN( 157)			FlashRect->x = _this4->x;
HXDLIN( 157)			FlashRect->y = _this4->y;
HXDLIN( 157)			FlashRect->width = _this4->width;
HXDLIN( 157)			FlashRect->height = _this4->height;
            		}
HXLINE( 158)		HX_VARI(  ::openfl::utils::ByteArrayData,pixelsA) = testA->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 160)		{
HXLINE( 160)			HX_VARI_NAME(  ::flixel::math::FlxRect,_this5,"_this") = ::flixel::util::FlxCollision_obj::boundsB;
HXDLIN( 160)			HX_VARI_NAME(  ::openfl::geom::Rectangle,FlashRect1,"FlashRect") = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 160)			Bool _hx_tmp37 = hx::IsNull( FlashRect1 );
HXDLIN( 160)			if (_hx_tmp37) {
HXLINE( 160)				FlashRect1 =  ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
            			}
HXDLIN( 160)			FlashRect1->x = _this5->x;
HXDLIN( 160)			FlashRect1->y = _this5->y;
HXDLIN( 160)			FlashRect1->width = _this5->width;
HXDLIN( 160)			FlashRect1->height = _this5->height;
            		}
HXLINE( 161)		HX_VARI(  ::openfl::utils::ByteArrayData,pixelsB) = testB->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 163)		HX_VARI( Bool,hit) = false;
HXLINE( 166)		HX_VARI( Int,alphaA) = (int)0;
HXLINE( 167)		HX_VARI( Int,alphaB) = (int)0;
HXLINE( 168)		HX_VARI( Int,overlapPixels) = (overlapWidth * overlapHeight);
HXLINE( 169)		HX_VARI( Int,alphaIdx) = (int)0;
HXLINE( 172)		{
HXLINE( 172)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 172)			HX_VARI( Int,_g) = ::Math_obj::ceil(((Float)overlapPixels / (Float)(int)2));
HXDLIN( 172)			while((_g1 < _g)){
HXLINE( 172)				HX_VARI( Int,i) = _g1++;
HXLINE( 174)				alphaIdx = ((int)i << (int)(int)3);
HXLINE( 175)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 176)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 177)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 179)				Bool _hx_tmp38;
HXDLIN( 179)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 179)					_hx_tmp38 = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 179)					_hx_tmp38 = false;
            				}
HXDLIN( 179)				if (_hx_tmp38) {
HXLINE( 181)					hit = true;
HXLINE( 182)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE( 186)		if (!(hit)) {
HXLINE( 189)			HX_VARI_NAME( Int,_g11,"_g1") = (int)0;
HXDLIN( 189)			HX_VARI_NAME( Int,_g2,"_g") = ((int)overlapPixels >> (int)(int)1);
HXDLIN( 189)			while((_g11 < _g2)){
HXLINE( 189)				HX_VARI_NAME( Int,i1,"i") = _g11++;
HXLINE( 191)				alphaIdx = (((int)i1 << (int)(int)3) + (int)4);
HXLINE( 192)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 193)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 194)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 196)				Bool _hx_tmp39;
HXDLIN( 196)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 196)					_hx_tmp39 = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 196)					_hx_tmp39 = false;
            				}
HXDLIN( 196)				if (_hx_tmp39) {
HXLINE( 198)					hit = true;
HXLINE( 199)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 204)		if (considerRotation) {
HXLINE( 206)			::flixel::util::FlxBitmapDataPool_obj::put(testA);
HXLINE( 207)			::flixel::util::FlxBitmapDataPool_obj::put(testB);
            		}
HXLINE( 210)		return hit;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

Bool FlxCollision_obj::pixelPerfectPointCheck(Int PointX,Int PointY, ::flixel::FlxSprite Target,hx::Null< Int >  __o_AlphaTolerance){
Int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",223,0x8c8a7b84)
            	HX_STACK_ARG(PointX,"PointX")
            	HX_STACK_ARG(PointY,"PointY")
            	HX_STACK_ARG(Target,"Target")
            	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
HXLINE( 225)		Int _hx_tmp = ::Math_obj::floor(Target->x);
HXLINE( 226)		Int _hx_tmp1 = ::Math_obj::floor(Target->y);
HXDLIN( 226)		Float _hx_tmp2 = Target->get_width();
HXDLIN( 226)		Int _hx_tmp3 = ::Std_obj::_hx_int(_hx_tmp2);
HXDLIN( 226)		Float _hx_tmp4 = Target->get_height();
HXDLIN( 226)		Int _hx_tmp5 = ::Std_obj::_hx_int(_hx_tmp4);
HXLINE( 225)		if (!(::flixel::math::FlxMath_obj::pointInCoordinates(PointX,PointY,_hx_tmp,_hx_tmp1,_hx_tmp3,_hx_tmp5))) {
HXLINE( 228)			return false;
            		}
HXLINE( 231)		Bool _hx_tmp6 = ::flixel::FlxG_obj::renderTile;
HXDLIN( 231)		if (_hx_tmp6) {
HXLINE( 233)			Target->drawFrame(null());
            		}
HXLINE( 237)		HX_VARI(  ::openfl::display::BitmapData,test) = Target->framePixels;
HXLINE( 239)		Float _hx_tmp7 = (PointX - Target->x);
HXDLIN( 239)		Int _hx_tmp8 = ::Math_obj::floor(_hx_tmp7);
HXDLIN( 239)		Float _hx_tmp9 = (PointY - Target->y);
HXDLIN( 239)		Int _hx_tmp10 = ::Math_obj::floor(_hx_tmp9);
HXDLIN( 239)		Int Value = test->getPixel32(_hx_tmp8,_hx_tmp10);
HXDLIN( 239)		HX_VARI( Int,pixelAlpha) = ((int)((int)::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(Value) >> (int)(int)24) & (int)(int)255);
HXLINE( 241)		Bool _hx_tmp11 = ::flixel::FlxG_obj::renderTile;
HXDLIN( 241)		if (_hx_tmp11) {
HXLINE( 243)			Float _hx_tmp12 = (pixelAlpha * Target->alpha);
HXDLIN( 243)			pixelAlpha = ::Std_obj::_hx_int(_hx_tmp12);
            		}
HXLINE( 247)		return (pixelAlpha >= AlphaTolerance);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

 ::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,hx::Null< Bool >  __o_PlaceOutside,Int Thickness,hx::Null< Bool >  __o_AdjustWorldBounds){
Bool PlaceOutside = __o_PlaceOutside.Default(true);
Bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
            	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",260,0x8c8a7b84)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(PlaceOutside,"PlaceOutside")
            	HX_STACK_ARG(Thickness,"Thickness")
            	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
HXLINE( 261)		HX_VARI(  ::flixel::tile::FlxTileblock,left) = null();
HXLINE( 262)		HX_VARI(  ::flixel::tile::FlxTileblock,right) = null();
HXLINE( 263)		HX_VARI(  ::flixel::tile::FlxTileblock,top) = null();
HXLINE( 264)		HX_VARI(  ::flixel::tile::FlxTileblock,bottom) = null();
HXLINE( 266)		if (PlaceOutside) {
HXLINE( 268)			Float _hx_tmp = (Camera->x - Thickness);
HXDLIN( 268)			Int _hx_tmp1 = ::Math_obj::floor(_hx_tmp);
HXDLIN( 268)			Float _hx_tmp2 = (Camera->y + Thickness);
HXDLIN( 268)			Int _hx_tmp3 = ::Math_obj::floor(_hx_tmp2);
HXDLIN( 268)			Int _hx_tmp4 = (Camera->height - (Thickness * (int)2));
HXDLIN( 268)			left =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp1,_hx_tmp3,Thickness,_hx_tmp4);
HXLINE( 269)			Float _hx_tmp5 = (Camera->x + Camera->width);
HXDLIN( 269)			Int _hx_tmp6 = ::Math_obj::floor(_hx_tmp5);
HXDLIN( 269)			Float _hx_tmp7 = (Camera->y + Thickness);
HXDLIN( 269)			Int _hx_tmp8 = ::Math_obj::floor(_hx_tmp7);
HXDLIN( 269)			Int _hx_tmp9 = (Camera->height - (Thickness * (int)2));
HXDLIN( 269)			right =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp6,_hx_tmp8,Thickness,_hx_tmp9);
HXLINE( 270)			Float _hx_tmp10 = (Camera->x - Thickness);
HXDLIN( 270)			Int _hx_tmp11 = ::Math_obj::floor(_hx_tmp10);
HXDLIN( 270)			Float _hx_tmp12 = (Camera->y - Thickness);
HXDLIN( 270)			Int _hx_tmp13 = ::Math_obj::floor(_hx_tmp12);
HXDLIN( 270)			Int _hx_tmp14 = (Camera->width + (Thickness * (int)2));
HXDLIN( 270)			top =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp11,_hx_tmp13,_hx_tmp14,Thickness);
HXLINE( 271)			Float _hx_tmp15 = (Camera->x - Thickness);
HXDLIN( 271)			Int _hx_tmp16 = ::Math_obj::floor(_hx_tmp15);
HXDLIN( 271)			Int _hx_tmp17 = Camera->height;
HXDLIN( 271)			Int _hx_tmp18 = (Camera->width + (Thickness * (int)2));
HXDLIN( 271)			bottom =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp16,_hx_tmp17,_hx_tmp18,Thickness);
HXLINE( 273)			if (AdjustWorldBounds) {
HXLINE( 275)				HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 275)				Float X = (Camera->x - Thickness);
HXDLIN( 275)				Float Y = (Camera->y - Thickness);
HXDLIN( 275)				Float Width = (Camera->width + (Thickness * (int)2));
HXDLIN( 275)				Float Height = (Camera->height + (Thickness * (int)2));
HXDLIN( 275)				_this->x = X;
HXDLIN( 275)				_this->y = Y;
HXDLIN( 275)				_this->width = Width;
HXDLIN( 275)				_this->height = Height;
            			}
            		}
            		else {
HXLINE( 280)			Int _hx_tmp19 = ::Math_obj::floor(Camera->x);
HXDLIN( 280)			Float _hx_tmp20 = (Camera->y + Thickness);
HXDLIN( 280)			Int _hx_tmp21 = ::Math_obj::floor(_hx_tmp20);
HXDLIN( 280)			Int _hx_tmp22 = (Camera->height - (Thickness * (int)2));
HXDLIN( 280)			left =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp19,_hx_tmp21,Thickness,_hx_tmp22);
HXLINE( 281)			Float _hx_tmp23 = ((Camera->x + Camera->width) - Thickness);
HXDLIN( 281)			Int _hx_tmp24 = ::Math_obj::floor(_hx_tmp23);
HXDLIN( 281)			Float _hx_tmp25 = (Camera->y + Thickness);
HXDLIN( 281)			Int _hx_tmp26 = ::Math_obj::floor(_hx_tmp25);
HXDLIN( 281)			Int _hx_tmp27 = (Camera->height - (Thickness * (int)2));
HXDLIN( 281)			right =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp24,_hx_tmp26,Thickness,_hx_tmp27);
HXLINE( 282)			Int _hx_tmp28 = ::Math_obj::floor(Camera->x);
HXDLIN( 282)			Int _hx_tmp29 = ::Math_obj::floor(Camera->y);
HXDLIN( 282)			top =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp28,_hx_tmp29,Camera->width,Thickness);
HXLINE( 283)			Int _hx_tmp30 = ::Math_obj::floor(Camera->x);
HXDLIN( 283)			Int _hx_tmp31 = (Camera->height - Thickness);
HXDLIN( 283)			bottom =  ::flixel::tile::FlxTileblock_obj::__new(_hx_tmp30,_hx_tmp31,Camera->width,Thickness);
HXLINE( 285)			if (AdjustWorldBounds) {
HXLINE( 287)				HX_VARI_NAME(  ::flixel::math::FlxRect,_this1,"_this") = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 287)				Float X1 = Camera->x;
HXDLIN( 287)				Float Y1 = Camera->y;
HXDLIN( 287)				Float Width1 = Camera->width;
HXDLIN( 287)				Float Height1 = Camera->height;
HXDLIN( 287)				_this1->x = X1;
HXDLIN( 287)				_this1->y = Y1;
HXDLIN( 287)				_this1->width = Width1;
HXDLIN( 287)				_this1->height = Height1;
            			}
            		}
HXLINE( 291)		HX_VARI(  ::flixel::group::FlxTypedGroup,result) =  ::flixel::group::FlxTypedGroup_obj::__new(null());
HXLINE( 293)		result->add(left).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 294)		result->add(right).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 295)		result->add(top).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 296)		result->add(bottom).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 298)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = pointA; return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = pointB; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = centerA; return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = centerB; return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = matrixA; return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = matrixB; return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = boundsA; return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = boundsB; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = intersect; return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = flashRect; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = testMatrix; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true; }
	}
	return false;
}

bool FlxCollision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=ioValue.Cast<  ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=ioValue.Cast<  ::flixel::math::FlxVector >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=ioValue.Cast<  ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=ioValue.Cast<  ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { intersect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxCollision_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxCollision_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::pointA,HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::pointB,HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::centerA,HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::centerB,HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixA,HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixB,HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::testMatrix,HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsA,HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsB,HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::intersect,HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &FlxCollision_obj::flashRect,HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxCollision_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxCollision_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#endif

hx::Class FlxCollision_obj::__mClass;

static ::String FlxCollision_obj_sStaticFields[] = {
	HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7"),
	HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7"),
	HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19"),
	HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93"),
	HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93"),
	HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4"),
	HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3"),
	HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3"),
	HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42"),
	HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02"),
	HX_HCSTRING("pixelPerfectCheck","\x21","\x18","\xe0","\xff"),
	HX_HCSTRING("pixelPerfectPointCheck","\x5f","\xf0","\x41","\xdf"),
	HX_HCSTRING("createCameraWall","\x6b","\x04","\x3e","\xea"),
	::String(null())
};

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCollision","\x1a","\xc3","\x9f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCollision_obj::__SetStatic;
	__mClass->mMarkFunc = FlxCollision_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxCollision_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxCollision_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxCollision_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCollision_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxCollision_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",25,0x8c8a7b84)
HXLINE(  25)		pointA =  ::flixel::math::FlxVector_obj::__new(null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",26,0x8c8a7b84)
HXLINE(  26)		pointB =  ::flixel::math::FlxVector_obj::__new(null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",27,0x8c8a7b84)
HXLINE(  27)		centerA =  ::flixel::math::FlxVector_obj::__new(null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",28,0x8c8a7b84)
HXLINE(  28)		centerB =  ::flixel::math::FlxVector_obj::__new(null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",29,0x8c8a7b84)
HXLINE(  29)		matrixA =  ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",30,0x8c8a7b84)
HXLINE(  30)		matrixB =  ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",31,0x8c8a7b84)
HXLINE(  31)		testMatrix =  ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",32,0x8c8a7b84)
HXLINE(  32)		boundsA =  ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",33,0x8c8a7b84)
HXLINE(  33)		boundsB =  ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",34,0x8c8a7b84)
HXLINE(  34)		intersect =  ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
            	}
{
            	HX_STACK_FRAME("flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",35,0x8c8a7b84)
HXLINE(  35)		flashRect =  ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace util
