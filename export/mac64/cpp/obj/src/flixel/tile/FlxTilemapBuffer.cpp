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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
namespace tile{

void FlxTilemapBuffer_obj::__construct(Int TileWidth,Int TileHeight,Int WidthInTiles,Int HeightInTiles, ::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",19,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE(  62)		this->antialiasing = false;
HXLINE(  48)		this->columns = (int)0;
HXLINE(  44)		this->rows = (int)0;
HXLINE(  40)		this->dirty = false;
HXLINE(  36)		this->height = ((Float)0);
HXLINE(  32)		this->width = ((Float)0);
HXLINE(  28)		this->y = ((Float)0);
HXLINE(  24)		this->x = ((Float)0);
HXLINE(  95)		this->resize(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,ScaleX,ScaleY);
            	}

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return new FlxTilemapBuffer_obj; }

hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(Int TileWidth,Int TileHeight,Int WidthInTiles,Int HeightInTiles, ::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
	hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return _hx_result;
}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::tile::FlxTilemapBuffer_obj::destroy,
};

void *FlxTilemapBuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTilemapBuffer_obj::resize(Int TileWidth,Int TileHeight,Int WidthInTiles,Int HeightInTiles, ::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","resize",0xccfe9c18,"flixel.tile.FlxTilemapBuffer.resize","flixel/tile/FlxTilemapBuffer.hx",100,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE( 101)		this->updateColumns(TileWidth,WidthInTiles,ScaleX,Camera);
HXLINE( 102)		this->updateRows(TileHeight,HeightInTiles,ScaleY,Camera);
HXLINE( 104)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 106)			Int _hx_tmp1 = (this->columns * TileWidth);
HXDLIN( 106)			HX_VARI( Int,newWidth) = ::Std_obj::_hx_int(_hx_tmp1);
HXLINE( 107)			Int _hx_tmp2 = (this->rows * TileHeight);
HXDLIN( 107)			HX_VARI( Int,newHeight) = ::Std_obj::_hx_int(_hx_tmp2);
HXLINE( 109)			Bool _hx_tmp3 = hx::IsNull( this->pixels );
HXDLIN( 109)			if (_hx_tmp3) {
HXLINE( 111)				this->pixels =  ::openfl::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0);
HXLINE( 112)				this->_flashRect =  ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,newWidth,newHeight);
HXLINE( 113)				this->_matrix =  ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE( 114)				this->dirty = true;
            			}
            			else {
HXLINE( 116)				Bool _hx_tmp4;
HXDLIN( 116)				if ((this->pixels->width == newWidth)) {
HXLINE( 116)					_hx_tmp4 = (this->pixels->height != newHeight);
            				}
            				else {
HXLINE( 116)					_hx_tmp4 = true;
            				}
HXDLIN( 116)				if (_hx_tmp4) {
HXLINE( 118)					::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 119)					this->pixels =  ::openfl::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0);
HXLINE( 120)					this->_flashRect->setTo((int)0,(int)0,newWidth,newHeight);
HXLINE( 121)					this->dirty = true;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxTilemapBuffer_obj,resize,(void))

void FlxTilemapBuffer_obj::destroy(){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",131,0x56d29ad4)
            	HX_STACK_THIS(this)
HXLINE( 131)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 133)			this->pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 134)			this->blend = null();
HXLINE( 135)			this->_matrix = null();
HXLINE( 136)			this->_flashRect = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

void FlxTilemapBuffer_obj::fill(hx::Null< Int >  __o_Color){
Int Color = __o_Color.Default(0);
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","fill",0x99957fa7,"flixel.tile.FlxTilemapBuffer.fill","flixel/tile/FlxTilemapBuffer.hx",148,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
HXLINE( 148)		Bool _hx_tmp = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 148)		if (_hx_tmp) {
HXLINE( 150)			this->pixels->fillRect(this->_flashRect,Color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,fill,(void))

void FlxTilemapBuffer_obj::draw( ::flixel::FlxCamera Camera, ::openfl::geom::Point FlashPoint,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","draw",0x9849dd28,"flixel.tile.FlxTilemapBuffer.draw","flixel/tile/FlxTilemapBuffer.hx",161,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(FlashPoint,"FlashPoint")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE( 162)		Bool _hx_tmp = this->isPixelPerfectRender(Camera);
HXDLIN( 162)		if (_hx_tmp) {
HXLINE( 164)			FlashPoint->x = ::Math_obj::floor(FlashPoint->x);
HXLINE( 165)			FlashPoint->y = ::Math_obj::floor(FlashPoint->y);
            		}
HXLINE( 168)		Bool _hx_tmp1;
HXDLIN( 168)		Bool _hx_tmp2;
HXDLIN( 168)		Bool _hx_tmp3 = this->isPixelPerfectRender(Camera);
HXDLIN( 168)		if (_hx_tmp3) {
HXLINE( 168)			if ((ScaleX == ((Float)1.0))) {
HXLINE( 168)				_hx_tmp2 = (ScaleY == ((Float)1.0));
            			}
            			else {
HXLINE( 168)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 168)			_hx_tmp2 = false;
            		}
HXDLIN( 168)		if (_hx_tmp2) {
HXLINE( 168)			_hx_tmp1 = hx::IsNull( this->blend );
            		}
            		else {
HXLINE( 168)			_hx_tmp1 = false;
            		}
HXDLIN( 168)		if (_hx_tmp1) {
HXLINE( 170)			Camera->copyPixels(null(),this->pixels,this->_flashRect,FlashPoint,null(),null(),true,null());
            		}
            		else {
HXLINE( 174)			this->_matrix->identity();
HXLINE( 175)			this->_matrix->scale(ScaleX,ScaleY);
HXLINE( 176)			this->_matrix->translate(FlashPoint->x,FlashPoint->y);
HXLINE( 177)			Camera->drawPixels(null(),this->pixels,this->_matrix,null(),this->blend,this->antialiasing,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,draw,(void))

void FlxTilemapBuffer_obj::colorTransform( ::openfl::geom::ColorTransform Transform){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","colorTransform",0x13c7ddad,"flixel.tile.FlxTilemapBuffer.colorTransform","flixel/tile/FlxTilemapBuffer.hx",183,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Transform,"Transform")
HXLINE( 183)		this->pixels->colorTransform(this->_flashRect,Transform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,colorTransform,(void))

void FlxTilemapBuffer_obj::updateColumns(Int TileWidth,Int WidthInTiles,hx::Null< Float >  __o_ScaleX, ::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",188,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 189)		Bool _hx_tmp = (WidthInTiles < (int)0);
HXDLIN( 189)		if (_hx_tmp) {
HXLINE( 190)			WidthInTiles = (int)0;
            		}
HXLINE( 192)		Bool _hx_tmp1 = hx::IsNull( Camera );
HXDLIN( 192)		if (_hx_tmp1) {
HXLINE( 193)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 195)		Float _hx_tmp2 = ((Float)Camera->viewWidth / (Float)(TileWidth * ScaleX));
HXDLIN( 195)		Int _hx_tmp3 = ::Math_obj::ceil(_hx_tmp2);
HXDLIN( 195)		this->columns = (_hx_tmp3 + (int)1);
HXLINE( 197)		Bool _hx_tmp4 = (this->columns > WidthInTiles);
HXDLIN( 197)		if (_hx_tmp4) {
HXLINE( 198)			this->columns = WidthInTiles;
            		}
HXLINE( 200)		Float _hx_tmp5 = ((this->columns * TileWidth) * ScaleX);
HXDLIN( 200)		this->width = ::Std_obj::_hx_int(_hx_tmp5);
HXLINE( 202)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

void FlxTilemapBuffer_obj::updateRows(Int TileHeight,Int HeightInTiles,hx::Null< Float >  __o_ScaleY, ::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",207,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(ScaleY,"ScaleY")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 208)		Bool _hx_tmp = (HeightInTiles < (int)0);
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			HeightInTiles = (int)0;
            		}
HXLINE( 211)		Bool _hx_tmp1 = hx::IsNull( Camera );
HXDLIN( 211)		if (_hx_tmp1) {
HXLINE( 212)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 214)		Float _hx_tmp2 = ((Float)Camera->viewHeight / (Float)(TileHeight * ScaleY));
HXDLIN( 214)		Int _hx_tmp3 = ::Math_obj::ceil(_hx_tmp2);
HXDLIN( 214)		this->rows = (_hx_tmp3 + (int)1);
HXLINE( 216)		Bool _hx_tmp4 = (this->rows > HeightInTiles);
HXDLIN( 216)		if (_hx_tmp4) {
HXLINE( 217)			this->rows = HeightInTiles;
            		}
HXLINE( 219)		Float _hx_tmp5 = ((this->rows * TileHeight) * ScaleY);
HXDLIN( 219)		this->height = ::Std_obj::_hx_int(_hx_tmp5);
HXLINE( 221)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

Bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",228,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 229)		Bool _hx_tmp = hx::IsNull( Camera );
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 230)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 232)		Bool _hx_tmp1 = hx::IsNull( this->pixelPerfectRender );
HXDLIN( 232)		if (_hx_tmp1) {
HXLINE( 232)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE( 232)			return this->pixelPerfectRender;
            		}
HXDLIN( 232)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )

Bool FlxTilemapBuffer_obj::isDirty( ::flixel::tile::FlxTilemap Tilemap, ::flixel::FlxCamera Camera){
            	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","isDirty",0xa4ac9124,"flixel.tile.FlxTilemapBuffer.isDirty","flixel/tile/FlxTilemapBuffer.hx",243,0x56d29ad4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tilemap,"Tilemap")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 244)		Bool _hx_tmp;
HXDLIN( 244)		Bool _hx_tmp1;
HXDLIN( 244)		Bool _hx_tmp2;
HXDLIN( 244)		Bool _hx_tmp3;
HXDLIN( 244)		Bool _hx_tmp4;
HXDLIN( 244)		Bool _hx_tmp5;
HXDLIN( 244)		Bool _hx_tmp6;
HXDLIN( 244)		Bool _hx_tmp7;
HXDLIN( 244)		Bool _hx_tmp8;
HXDLIN( 244)		Bool _hx_tmp9;
HXDLIN( 244)		Bool _hx_tmp10;
HXDLIN( 244)		Bool _hx_tmp11;
HXDLIN( 244)		if (!(this->dirty)) {
HXLINE( 244)			_hx_tmp11 = (Tilemap->x != this->_prevTilemapX);
            		}
            		else {
HXLINE( 244)			_hx_tmp11 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp11)) {
HXLINE( 244)			_hx_tmp10 = (Tilemap->y != this->_prevTilemapY);
            		}
            		else {
HXLINE( 244)			_hx_tmp10 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp10)) {
HXLINE( 244)			_hx_tmp9 = (Tilemap->scale->x != this->_prevTilemapScaleX);
            		}
            		else {
HXLINE( 244)			_hx_tmp9 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp9)) {
HXLINE( 244)			_hx_tmp8 = (Tilemap->scale->y != this->_prevTilemapScaleY);
            		}
            		else {
HXLINE( 244)			_hx_tmp8 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp8)) {
HXLINE( 244)			_hx_tmp7 = (Tilemap->scrollFactor->x != this->_prevTilemapScrollX);
            		}
            		else {
HXLINE( 244)			_hx_tmp7 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp7)) {
HXLINE( 244)			_hx_tmp6 = (Tilemap->scrollFactor->y != this->_prevTilemapScrollY);
            		}
            		else {
HXLINE( 244)			_hx_tmp6 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp6)) {
HXLINE( 244)			_hx_tmp5 = (Camera->scroll->x != this->_prevCameraScrollX);
            		}
            		else {
HXLINE( 244)			_hx_tmp5 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp5)) {
HXLINE( 244)			_hx_tmp4 = (Camera->scroll->y != this->_prevCameraScrollY);
            		}
            		else {
HXLINE( 244)			_hx_tmp4 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp4)) {
HXLINE( 244)			_hx_tmp3 = (Camera->scaleX != this->_prevCameraScaleX);
            		}
            		else {
HXLINE( 244)			_hx_tmp3 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp3)) {
HXLINE( 244)			_hx_tmp2 = (Camera->scaleY != this->_prevCameraScaleY);
            		}
            		else {
HXLINE( 244)			_hx_tmp2 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp2)) {
HXLINE( 244)			_hx_tmp1 = (Camera->width != this->_prevCameraWidth);
            		}
            		else {
HXLINE( 244)			_hx_tmp1 = true;
            		}
HXDLIN( 244)		if (!(_hx_tmp1)) {
HXLINE( 244)			_hx_tmp = (Camera->height != this->_prevCameraHeight);
            		}
            		else {
HXLINE( 244)			_hx_tmp = true;
            		}
HXDLIN( 244)		this->dirty = _hx_tmp;
HXLINE( 251)		Bool _hx_tmp12 = this->dirty;
HXDLIN( 251)		if (_hx_tmp12) {
HXLINE( 253)			this->_prevTilemapX = Tilemap->x;
HXLINE( 254)			this->_prevTilemapY = Tilemap->y;
HXLINE( 255)			this->_prevTilemapScaleX = Tilemap->scale->x;
HXLINE( 256)			this->_prevTilemapScaleY = Tilemap->scale->y;
HXLINE( 257)			this->_prevTilemapScrollX = Tilemap->scrollFactor->x;
HXLINE( 258)			this->_prevTilemapScrollY = Tilemap->scrollFactor->y;
HXLINE( 259)			this->_prevCameraScrollX = Camera->scroll->x;
HXLINE( 260)			this->_prevCameraScrollY = Camera->scroll->y;
HXLINE( 261)			this->_prevCameraScaleX = Camera->scaleX;
HXLINE( 262)			this->_prevCameraScaleY = Camera->scaleY;
HXLINE( 263)			this->_prevCameraWidth = Camera->width;
HXLINE( 264)			this->_prevCameraHeight = Camera->height;
            		}
HXLINE( 267)		return this->dirty;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapBuffer_obj,isDirty,return )


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_MARK_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_MARK_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_MARK_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_MARK_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_MARK_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_VISIT_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_VISIT_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_VISIT_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
}

hx::Val FlxTilemapBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return hx::Val( rows); }
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill_dyn()); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return hx::Val( dirty); }
		if (HX_FIELD_EQ(inName,"blend") ) { return hx::Val( blend); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return hx::Val( pixels); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return hx::Val( columns); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return hx::Val( _matrix); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return hx::Val( isDirty_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return hx::Val( _flashRect); }
		if (HX_FIELD_EQ(inName,"updateRows") ) { return hx::Val( updateRows_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return hx::Val( antialiasing); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { return hx::Val( _prevTilemapX); }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { return hx::Val( _prevTilemapY); }
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return hx::Val( updateColumns_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return hx::Val( colorTransform_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { return hx::Val( _prevCameraWidth); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { return hx::Val( _prevCameraScaleX); }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { return hx::Val( _prevCameraScaleY); }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { return hx::Val( _prevCameraHeight); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return hx::Val( pixelPerfectRender); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { return hx::Val( _prevTilemapScaleX); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { return hx::Val( _prevTilemapScaleY); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { return hx::Val( _prevCameraScrollX); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { return hx::Val( _prevCameraScrollY); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { return hx::Val( _prevTilemapScrollX); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { return hx::Val( _prevTilemapScrollY); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return hx::Val( isPixelPerfectRender_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTilemapBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< Bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { _prevTilemapX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { _prevTilemapY=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { _prevCameraWidth=inValue.Cast< Int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { _prevCameraScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { _prevCameraScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { _prevCameraHeight=inValue.Cast< Int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { _prevTilemapScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { _prevTilemapScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { _prevCameraScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { _prevCameraScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { _prevTilemapScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { _prevTilemapScrollY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_prevTilemapX","\x5c","\xf1","\x16","\x93"));
	outFields->push(HX_HCSTRING("_prevTilemapY","\x5d","\xf1","\x16","\x93"));
	outFields->push(HX_HCSTRING("_prevTilemapScaleX","\x2a","\x3f","\x47","\x89"));
	outFields->push(HX_HCSTRING("_prevTilemapScaleY","\x2b","\x3f","\x47","\x89"));
	outFields->push(HX_HCSTRING("_prevTilemapScrollX","\x8f","\xe7","\xe0","\x60"));
	outFields->push(HX_HCSTRING("_prevTilemapScrollY","\x90","\xe7","\xe0","\x60"));
	outFields->push(HX_HCSTRING("_prevCameraScrollX","\x54","\xfd","\x23","\xd5"));
	outFields->push(HX_HCSTRING("_prevCameraScrollY","\x55","\xfd","\x23","\xd5"));
	outFields->push(HX_HCSTRING("_prevCameraScaleX","\x05","\xc9","\xdc","\xd7"));
	outFields->push(HX_HCSTRING("_prevCameraScaleY","\x06","\xc9","\xdc","\xd7"));
	outFields->push(HX_HCSTRING("_prevCameraWidth","\x6f","\x93","\x2d","\x40"));
	outFields->push(HX_HCSTRING("_prevCameraHeight","\x5e","\xe6","\x02","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTilemapBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemapBuffer_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(FlxTilemapBuffer_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxTilemapBuffer_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapX),HX_HCSTRING("_prevTilemapX","\x5c","\xf1","\x16","\x93")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapY),HX_HCSTRING("_prevTilemapY","\x5d","\xf1","\x16","\x93")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleX),HX_HCSTRING("_prevTilemapScaleX","\x2a","\x3f","\x47","\x89")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleY),HX_HCSTRING("_prevTilemapScaleY","\x2b","\x3f","\x47","\x89")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollX),HX_HCSTRING("_prevTilemapScrollX","\x8f","\xe7","\xe0","\x60")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollY),HX_HCSTRING("_prevTilemapScrollY","\x90","\xe7","\xe0","\x60")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollX),HX_HCSTRING("_prevCameraScrollX","\x54","\xfd","\x23","\xd5")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollY),HX_HCSTRING("_prevCameraScrollY","\x55","\xfd","\x23","\xd5")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleX),HX_HCSTRING("_prevCameraScaleX","\x05","\xc9","\xdc","\xd7")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleY),HX_HCSTRING("_prevCameraScaleY","\x06","\xc9","\xdc","\xd7")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraWidth),HX_HCSTRING("_prevCameraWidth","\x6f","\x93","\x2d","\x40")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraHeight),HX_HCSTRING("_prevCameraHeight","\x5e","\xe6","\x02","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTilemapBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_prevTilemapX","\x5c","\xf1","\x16","\x93"),
	HX_HCSTRING("_prevTilemapY","\x5d","\xf1","\x16","\x93"),
	HX_HCSTRING("_prevTilemapScaleX","\x2a","\x3f","\x47","\x89"),
	HX_HCSTRING("_prevTilemapScaleY","\x2b","\x3f","\x47","\x89"),
	HX_HCSTRING("_prevTilemapScrollX","\x8f","\xe7","\xe0","\x60"),
	HX_HCSTRING("_prevTilemapScrollY","\x90","\xe7","\xe0","\x60"),
	HX_HCSTRING("_prevCameraScrollX","\x54","\xfd","\x23","\xd5"),
	HX_HCSTRING("_prevCameraScrollY","\x55","\xfd","\x23","\xd5"),
	HX_HCSTRING("_prevCameraScaleX","\x05","\xc9","\xdc","\xd7"),
	HX_HCSTRING("_prevCameraScaleY","\x06","\xc9","\xdc","\xd7"),
	HX_HCSTRING("_prevCameraWidth","\x6f","\x93","\x2d","\x40"),
	HX_HCSTRING("_prevCameraHeight","\x5e","\xe6","\x02","\x9e"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("updateColumns","\xd4","\x11","\xc8","\xbe"),
	HX_HCSTRING("updateRows","\xc2","\xdf","\x63","\x04"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"),
	::String(null()) };

static void FlxTilemapBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTilemapBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemapBuffer","\xca","\x41","\x20","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTilemapBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTilemapBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemapBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTilemapBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile