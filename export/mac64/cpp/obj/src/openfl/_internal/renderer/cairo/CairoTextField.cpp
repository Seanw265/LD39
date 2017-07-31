// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{
	hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",27,0xfadfb778)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  30)		if (!(textField->_hx___dirty)) {
HXLINE(  30)			return;
            		}
HXLINE(  32)		textField->_hx___updateLayout();
HXLINE(  34)		HX_VARI(  ::openfl::_internal::text::TextEngine,textEngine) = textField->_hx___textEngine;
HXLINE(  35)		HX_VARI(  ::openfl::geom::Rectangle,bounds) = textEngine->bounds;
HXLINE(  37)		HX_VARI(  ::openfl::display::Graphics,graphics) = textField->_hx___graphics;
HXLINE(  38)		HX_VARI(  ::lime::graphics::cairo::Cairo,cairo) = graphics->_hx___cairo;
HXLINE(  40)		Bool _hx_tmp = hx::IsNotNull( cairo );
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  42)			HX_VARI(  ::Dynamic,surface) = cairo->get_target();
HXLINE(  44)			Bool _hx_tmp1;
HXDLIN(  44)			Int _hx_tmp2 = ::Math_obj::ceil(bounds->width);
HXDLIN(  44)			Int _hx_tmp3 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface);
HXDLIN(  44)			if ((_hx_tmp2 == _hx_tmp3)) {
HXLINE(  44)				Int _hx_tmp4 = ::Math_obj::ceil(bounds->height);
HXDLIN(  44)				Int _hx_tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface);
HXDLIN(  44)				_hx_tmp1 = (_hx_tmp4 != _hx_tmp5);
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = true;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  46)				graphics->_hx___cairo = null();
HXLINE(  47)				graphics->_hx___visible = false;
HXLINE(  48)				cairo = null();
            			}
            		}
HXLINE(  54)		Bool _hx_tmp6;
HXDLIN(  54)		if (!((bounds->width <= (int)0))) {
HXLINE(  54)			_hx_tmp6 = (bounds->height <= (int)0);
            		}
            		else {
HXLINE(  54)			_hx_tmp6 = true;
            		}
HXDLIN(  54)		if (_hx_tmp6) {
HXLINE(  54)			return;
            		}
HXLINE(  56)		Bool _hx_tmp7 = hx::IsNull( cairo );
HXDLIN(  56)		if (_hx_tmp7) {
HXLINE(  58)			Int _hx_tmp8 = ::Math_obj::ceil(bounds->width);
HXDLIN(  58)			Int _hx_tmp9 = ::Math_obj::ceil(bounds->height);
HXDLIN(  58)			HX_VARI(  ::openfl::display::BitmapData,bitmap) =  ::openfl::display::BitmapData_obj::__new(_hx_tmp8,_hx_tmp9,true,(int)0);
HXLINE(  59)			HX_VARI_NAME(  ::Dynamic,surface1,"surface") = bitmap->getSurface();
HXLINE(  60)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__new(surface1);
HXLINE(  61)			graphics->_hx___visible = true;
HXLINE(  63)			graphics->_hx___bitmap = bitmap;
HXLINE(  64)			graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__new(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(  66)			cairo = graphics->_hx___cairo;
HXLINE(  68)			HX_VARI(  ::Dynamic,options) = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE(  70)			Bool _hx_tmp10;
HXDLIN(  70)			if (hx::IsEq( textEngine->antiAliasType,(int)0 )) {
HXLINE(  70)				_hx_tmp10 = hx::IsEq( textEngine->gridFitType,(int)1 );
            			}
            			else {
HXLINE(  70)				_hx_tmp10 = false;
            			}
HXDLIN(  70)			if (_hx_tmp10) {
HXLINE(  72)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,(int)1);
HXLINE(  73)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,(int)1);
HXLINE(  74)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,(int)1);
            			}
            			else {
HXLINE(  78)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,(int)0);
HXLINE(  79)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,(int)1);
HXLINE(  80)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,(int)5);
            			}
HXLINE(  84)			cairo->set_fontOptions(options);
            		}
HXLINE(  88)		Bool _hx_tmp11 = textEngine->border;
HXDLIN(  88)		if (_hx_tmp11) {
HXLINE(  90)			Float _hx_tmp12 = (bounds->width - (int)1);
HXDLIN(  90)			Int _hx_tmp13 = ::Std_obj::_hx_int(_hx_tmp12);
HXDLIN(  90)			Float _hx_tmp14 = (bounds->height - (int)1);
HXDLIN(  90)			Int _hx_tmp15 = ::Std_obj::_hx_int(_hx_tmp14);
HXDLIN(  90)			cairo->rectangle(((Float)0.5),((Float)0.5),_hx_tmp13,_hx_tmp15);
            		}
            		else {
HXLINE(  94)			cairo->rectangle((int)0,(int)0,bounds->width,bounds->height);
            		}
HXLINE(  98)		Bool _hx_tmp16 = !(textEngine->background);
HXDLIN(  98)		if (_hx_tmp16) {
HXLINE( 100)			cairo->set_operator((int)0);
HXLINE( 101)			cairo->paint();
HXLINE( 102)			cairo->set_operator((int)2);
            		}
            		else {
HXLINE( 106)			HX_VARI( Int,color) = textEngine->backgroundColor;
HXLINE( 111)			cairo->setSourceRGB(((Float)hx::UShr(((int)color & (int)(int)16711680),(int)16) / (Float)(int)255),((Float)hx::UShr(((int)color & (int)(int)65280),(int)8) / (Float)(int)255),((Float)((int)color & (int)(int)255) / (Float)(int)255));
HXLINE( 112)			cairo->fillPreserve();
            		}
HXLINE( 116)		Bool _hx_tmp17 = textEngine->border;
HXDLIN( 116)		if (_hx_tmp17) {
HXLINE( 118)			HX_VARI_NAME( Int,color1,"color") = textEngine->borderColor;
HXLINE( 123)			cairo->setSourceRGB(((Float)hx::UShr(((int)color1 & (int)(int)16711680),(int)16) / (Float)(int)255),((Float)hx::UShr(((int)color1 & (int)(int)65280),(int)8) / (Float)(int)255),((Float)((int)color1 & (int)(int)255) / (Float)(int)255));
HXLINE( 124)			cairo->set_lineWidth((int)1);
HXLINE( 125)			cairo->stroke();
            		}
HXLINE( 129)		Bool _hx_tmp18;
HXDLIN( 129)		Bool _hx_tmp19 = hx::IsNotNull( textEngine->text );
HXDLIN( 129)		if (_hx_tmp19) {
HXLINE( 129)			_hx_tmp18 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 129)			_hx_tmp18 = false;
            		}
HXDLIN( 129)		if (_hx_tmp18) {
HXLINE( 131)			Int _hx_tmp20;
HXDLIN( 131)			Bool _hx_tmp21 = textField->get_border();
HXDLIN( 131)			if (_hx_tmp21) {
HXLINE( 131)				_hx_tmp20 = (int)1;
            			}
            			else {
HXLINE( 131)				_hx_tmp20 = (int)0;
            			}
HXDLIN( 131)			Float _hx_tmp22 = (bounds->width - _hx_tmp20);
HXDLIN( 131)			Int _hx_tmp23;
HXDLIN( 131)			Bool _hx_tmp24 = textField->get_border();
HXDLIN( 131)			if (_hx_tmp24) {
HXLINE( 131)				_hx_tmp23 = (int)1;
            			}
            			else {
HXLINE( 131)				_hx_tmp23 = (int)0;
            			}
HXDLIN( 131)			Float _hx_tmp25 = (bounds->height - _hx_tmp23);
HXDLIN( 131)			cairo->rectangle((int)0,(int)0,_hx_tmp22,_hx_tmp25);
HXLINE( 132)			cairo->clip();
HXLINE( 134)			HX_VARI( ::String,text) = textEngine->text;
HXLINE( 151)			HX_VARI( Int,scrollX) = -(textField->get_scrollH());
HXLINE( 152)			HX_VARI( Float,scrollY) = ((Float)0.0);
HXLINE( 154)			{
HXLINE( 154)				HX_VARI( Int,_g1) = (int)0;
HXDLIN( 154)				Int _hx_tmp26 = textField->get_scrollV();
HXDLIN( 154)				HX_VARI( Int,_g) = (_hx_tmp26 - (int)1);
HXDLIN( 154)				while((_g1 < _g)){
HXLINE( 154)					HX_VARI( Int,i) = _g1++;
HXLINE( 156)					hx::SubEq(scrollY,textEngine->lineHeights->__get(i));
            				}
            			}
HXLINE( 160)			HX_VAR_NAME(  ::Dynamic,color2,"color");
HXDLIN( 160)			HX_VAR( Float,r);
HXDLIN( 160)			HX_VAR( Float,g);
HXDLIN( 160)			HX_VAR( Float,b);
HXDLIN( 160)			HX_VAR(  ::openfl::text::Font,font);
HXDLIN( 160)			HX_VAR( Int,size);
HXDLIN( 160)			HX_VAR( Float,advance);
HXLINE( 162)			{
HXLINE( 162)				HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 162)				HX_VARI_NAME( ::Array< ::Dynamic>,_g11,"_g1") = textEngine->layoutGroups;
HXDLIN( 162)				while((_g2 < _g11->length)){
HXLINE( 162)					HX_VARI(  ::openfl::_internal::text::TextLayoutGroup,group) = _g11->__get(_g2).StaticCast<  ::openfl::_internal::text::TextLayoutGroup >();
HXDLIN( 162)					++_g2;
HXLINE( 164)					Int _hx_tmp27 = group->lineIndex;
HXDLIN( 164)					Int _hx_tmp28 = textField->get_scrollV();
HXDLIN( 164)					if ((_hx_tmp27 < (_hx_tmp28 - (int)1))) {
HXLINE( 164)						continue;
            					}
HXLINE( 165)					Int _hx_tmp29 = group->lineIndex;
HXDLIN( 165)					Int _hx_tmp30 = textField->get_scrollV();
HXDLIN( 165)					if ((_hx_tmp29 > ((_hx_tmp30 + textEngine->bottomScrollV) - (int)2))) {
HXLINE( 165)						goto _hx_goto_1;
            					}
HXLINE( 167)					color2 = group->format->color;
HXLINE( 168)					r = ((Float)hx::UShr(((int)color2 & (int)(int)16711680),(int)16) / (Float)(int)255);
HXLINE( 169)					g = ((Float)hx::UShr(((int)color2 & (int)(int)65280),(int)8) / (Float)(int)255);
HXLINE( 170)					b = ((Float)((int)color2 & (int)(int)255) / (Float)(int)255);
HXLINE( 172)					cairo->setSourceRGB(r,g,b);
HXLINE( 174)					font = ::openfl::_internal::text::TextEngine_obj::getFontInstance(group->format);
HXLINE( 176)					Bool _hx_tmp31;
HXDLIN( 176)					Bool _hx_tmp32 = hx::IsNotNull( font );
HXDLIN( 176)					if (_hx_tmp32) {
HXLINE( 176)						_hx_tmp31 = hx::IsNotNull( group->format->size );
            					}
            					else {
HXLINE( 176)						_hx_tmp31 = false;
            					}
HXDLIN( 176)					if (_hx_tmp31) {
HXLINE( 178)						Bool _hx_tmp33 = hx::IsNotNull( textEngine->_hx___cairoFont );
HXDLIN( 178)						if (_hx_tmp33) {
HXLINE( 180)							if (hx::IsNotEq( textEngine->_hx___font,font )) {
HXLINE( 182)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 188)						Bool _hx_tmp34 = hx::IsNull( textEngine->_hx___cairoFont );
HXDLIN( 188)						if (_hx_tmp34) {
HXLINE( 190)							textEngine->_hx___font = font;
HXLINE( 191)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,(int)0);
            						}
HXLINE( 195)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 197)						size = ::Std_obj::_hx_int(group->format->size);
HXLINE( 198)						cairo->setFontSize(size);
HXLINE( 200)						Float _hx_tmp35 = (group->offsetX + scrollX);
HXDLIN( 200)						Float _hx_tmp36 = ((group->offsetY + group->ascent) + scrollY);
HXDLIN( 200)						cairo->moveTo(_hx_tmp35,_hx_tmp36);
HXLINE( 201)						::String _hx_tmp37 = text.substring(group->startIndex,group->endIndex);
HXDLIN( 201)						cairo->showText(_hx_tmp37);
HXLINE( 203)						Bool _hx_tmp38;
HXDLIN( 203)						if ((textField->_hx___caretIndex > (int)-1)) {
HXLINE( 203)							_hx_tmp38 = textEngine->selectable;
            						}
            						else {
HXLINE( 203)							_hx_tmp38 = false;
            						}
HXDLIN( 203)						if (_hx_tmp38) {
HXLINE( 205)							Bool _hx_tmp39 = (textField->_hx___selectionIndex == textField->_hx___caretIndex);
HXDLIN( 205)							if (_hx_tmp39) {
HXLINE( 207)								Bool _hx_tmp40;
HXDLIN( 207)								Bool _hx_tmp41;
HXDLIN( 207)								if (textField->_hx___showCursor) {
HXLINE( 207)									_hx_tmp41 = (group->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 207)									_hx_tmp41 = false;
            								}
HXDLIN( 207)								if (_hx_tmp41) {
HXLINE( 207)									_hx_tmp40 = (group->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 207)									_hx_tmp40 = false;
            								}
HXDLIN( 207)								if (_hx_tmp40) {
HXLINE( 209)									advance = ((Float)0.0);
HXLINE( 211)									{
HXLINE( 211)										HX_VARI( Int,_g3) = (int)0;
HXDLIN( 211)										HX_VARI_NAME( Int,_g21,"_g2") = (textField->_hx___caretIndex - group->startIndex);
HXDLIN( 211)										while((_g3 < _g21)){
HXLINE( 211)											HX_VARI_NAME( Int,i1,"i") = _g3++;
HXLINE( 213)											if ((group->advances->length <= i1)) {
HXLINE( 213)												goto _hx_goto_2;
            											}
HXLINE( 214)											hx::AddEq(advance,group->advances->__get(i1));
            										}
            										_hx_goto_2:;
            									}
HXLINE( 218)									Float _hx_tmp42 = (group->offsetX + advance);
HXDLIN( 218)									Int _hx_tmp43 = ::Math_obj::floor(_hx_tmp42);
HXDLIN( 218)									Float _hx_tmp44 = (_hx_tmp43 + ((Float)0.5));
HXDLIN( 218)									Float _hx_tmp45 = (group->offsetY + ((Float)0.5));
HXDLIN( 218)									cairo->moveTo(_hx_tmp44,_hx_tmp45);
HXLINE( 219)									cairo->set_lineWidth((int)1);
HXLINE( 220)									Float _hx_tmp46 = (group->offsetX + advance);
HXDLIN( 220)									Int _hx_tmp47 = ::Math_obj::floor(_hx_tmp46);
HXDLIN( 220)									Float _hx_tmp48 = (_hx_tmp47 + ((Float)0.5));
HXDLIN( 220)									Float _hx_tmp49 = ((group->offsetY + group->height) - (int)1);
HXDLIN( 220)									cairo->lineTo(_hx_tmp48,_hx_tmp49);
HXLINE( 221)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 225)								Bool _hx_tmp50;
HXDLIN( 225)								Bool _hx_tmp51;
HXDLIN( 225)								if ((group->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 225)									_hx_tmp51 = (group->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 225)									_hx_tmp51 = false;
            								}
HXDLIN( 225)								if (!(_hx_tmp51)) {
HXLINE( 225)									if ((group->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 225)										_hx_tmp50 = (group->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 225)										_hx_tmp50 = false;
            									}
            								}
            								else {
HXLINE( 225)									_hx_tmp50 = true;
            								}
HXDLIN( 225)								if (_hx_tmp50) {
HXLINE( 227)									Float _hx_tmp52 = ::Math_obj::min(textField->_hx___selectionIndex,textField->_hx___caretIndex);
HXDLIN( 227)									HX_VARI( Int,selectionStart) = ::Std_obj::_hx_int(_hx_tmp52);
HXLINE( 228)									Float _hx_tmp53 = ::Math_obj::max(textField->_hx___selectionIndex,textField->_hx___caretIndex);
HXDLIN( 228)									HX_VARI( Int,selectionEnd) = ::Std_obj::_hx_int(_hx_tmp53);
HXLINE( 230)									Bool _hx_tmp54 = (group->startIndex > selectionStart);
HXDLIN( 230)									if (_hx_tmp54) {
HXLINE( 232)										selectionStart = group->startIndex;
            									}
HXLINE( 236)									Bool _hx_tmp55 = (group->endIndex < selectionEnd);
HXDLIN( 236)									if (_hx_tmp55) {
HXLINE( 238)										selectionEnd = group->endIndex;
            									}
HXLINE( 242)									HX_VAR(  ::openfl::geom::Rectangle,start);
HXDLIN( 242)									HX_VAR(  ::openfl::geom::Rectangle,end);
HXLINE( 244)									start = textField->getCharBoundaries(selectionStart);
HXLINE( 246)									Bool _hx_tmp56 = (selectionEnd >= textEngine->text.length);
HXDLIN( 246)									if (_hx_tmp56) {
HXLINE( 248)										Int _hx_tmp57 = (textEngine->text.length - (int)1);
HXDLIN( 248)										end = textField->getCharBoundaries(_hx_tmp57);
HXLINE( 249)										hx::AddEq(end->x,(end->width + (int)2));
            									}
            									else {
HXLINE( 253)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 257)									Bool _hx_tmp58;
HXDLIN( 257)									Bool _hx_tmp59 = hx::IsNotNull( start );
HXDLIN( 257)									if (_hx_tmp59) {
HXLINE( 257)										_hx_tmp58 = hx::IsNotNull( end );
            									}
            									else {
HXLINE( 257)										_hx_tmp58 = false;
            									}
HXDLIN( 257)									if (_hx_tmp58) {
HXLINE( 259)										cairo->setSourceRGB((int)0,(int)0,(int)0);
HXLINE( 260)										Float _hx_tmp60 = start->x;
HXDLIN( 260)										Float _hx_tmp61 = start->y;
HXDLIN( 260)										Float _hx_tmp62 = (end->x - start->x);
HXDLIN( 260)										cairo->rectangle(_hx_tmp60,_hx_tmp61,_hx_tmp62,group->height);
HXLINE( 261)										cairo->fill();
HXLINE( 262)										cairo->setSourceRGB((int)1,(int)1,(int)1);
HXLINE( 266)										Float _hx_tmp63 = (scrollX + start->x);
HXDLIN( 266)										Float _hx_tmp64 = ((group->offsetY + group->ascent) + scrollY);
HXDLIN( 266)										cairo->moveTo(_hx_tmp63,_hx_tmp64);
HXLINE( 267)										::String _hx_tmp65 = text.substring(selectionStart,selectionEnd);
HXDLIN( 267)										cairo->showText(_hx_tmp65);
            									}
            								}
            							}
            						}
            					}
            				}
            				_hx_goto_1:;
            			}
            		}
HXLINE( 281)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 282)		textField->_hx___dirty = false;
HXLINE( 283)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

static void CairoTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoTextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
