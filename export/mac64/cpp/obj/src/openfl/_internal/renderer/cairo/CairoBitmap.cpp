// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoBitmap_obj::__construct() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return new CairoBitmap_obj; }

hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{
	hx::ObjectPtr< CairoBitmap_obj > _hx_result = new CairoBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoBitmap_obj > _hx_result = new CairoBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",20,0x03302068)
            	HX_STACK_ARG(bitmap,"bitmap")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  22)		Bool _hx_tmp;
HXDLIN(  22)		if (!(!(bitmap->_hx___renderable))) {
HXLINE(  22)			_hx_tmp = (bitmap->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  22)			_hx_tmp = true;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  22)			return;
            		}
HXLINE(  25)		HX_VARI(  ::lime::graphics::cairo::Cairo,cairo) = renderSession->cairo;
HXLINE(  27)		Bool _hx_tmp1;
HXDLIN(  27)		Bool _hx_tmp2 = hx::IsNotNull( bitmap->bitmapData );
HXDLIN(  27)		if (_hx_tmp2) {
HXLINE(  27)			_hx_tmp1 = bitmap->bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  27)			_hx_tmp1 = false;
            		}
HXDLIN(  27)		if (_hx_tmp1) {
HXLINE(  29)			Bool _hx_tmp3 = hx::IsNotNull( bitmap->_hx___mask );
HXDLIN(  29)			if (_hx_tmp3) {
HXLINE(  31)				renderSession->maskManager->pushMask(bitmap->_hx___mask);
            			}
HXLINE(  38)			HX_VARI(  ::openfl::geom::Matrix,transform) = bitmap->_hx___renderTransform;
HXLINE(  39)			HX_VARI(  ::openfl::geom::Rectangle,scrollRect) = bitmap->get_scrollRect();
HXLINE(  41)			Bool _hx_tmp4 = renderSession->roundPixels;
HXDLIN(  41)			if (_hx_tmp4) {
HXLINE(  43)				HX_VARI(  ::lime::math::Matrix3,matrix) = transform->_hx___toMatrix3();
HXLINE(  44)				matrix->tx = ::Math_obj::round(matrix->tx);
HXLINE(  45)				matrix->ty = ::Math_obj::round(matrix->ty);
HXLINE(  46)				cairo->set_matrix(matrix);
            			}
            			else {
HXLINE(  51)				 ::lime::math::Matrix3 _hx_tmp5 = transform->_hx___toMatrix3();
HXDLIN(  51)				cairo->set_matrix(_hx_tmp5);
            			}
HXLINE(  56)			HX_VARI(  ::Dynamic,surface) = bitmap->bitmapData->getSurface();
HXLINE(  58)			Bool _hx_tmp6 = hx::IsNotNull( surface );
HXDLIN(  58)			if (_hx_tmp6) {
HXLINE(  60)				HX_VARI(  ::Dynamic,pattern) = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE(  61)				Int _hx_tmp7;
HXDLIN(  61)				if (bitmap->smoothing) {
HXLINE(  61)					_hx_tmp7 = (int)1;
            				}
            				else {
HXLINE(  61)					_hx_tmp7 = (int)3;
            				}
HXDLIN(  61)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp7);
HXLINE(  63)				Bool _hx_tmp8 = hx::IsNotNull( scrollRect );
HXDLIN(  63)				if (_hx_tmp8) {
HXLINE(  65)					cairo->pushGroup();
HXLINE(  66)					cairo->set_source(pattern);
HXLINE(  67)					cairo->newPath();
HXLINE(  68)					cairo->rectangle(scrollRect->x,scrollRect->y,scrollRect->width,scrollRect->height);
HXLINE(  69)					cairo->fill();
HXLINE(  70)					cairo->popGroupToSource();
            				}
            				else {
HXLINE(  74)					cairo->set_source(pattern);
            				}
HXLINE(  78)				Bool _hx_tmp9 = (bitmap->_hx___worldAlpha == (int)1);
HXDLIN(  78)				if (_hx_tmp9) {
HXLINE(  80)					cairo->paint();
            				}
            				else {
HXLINE(  84)					cairo->paintWithAlpha(bitmap->_hx___worldAlpha);
            				}
            			}
HXLINE(  90)			Bool _hx_tmp10 = hx::IsNotNull( bitmap->_hx___mask );
HXDLIN(  90)			if (_hx_tmp10) {
HXLINE(  92)				renderSession->maskManager->popMask();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoBitmap_obj_sStaticStorageInfo = 0;
#endif

static void CairoBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String CairoBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
