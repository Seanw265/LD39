// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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

namespace openfl{
namespace filters{

void BitmapFilter_obj::__construct(){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","new",0x22686a4a,"openfl.filters.BitmapFilter.new","openfl/filters/BitmapFilter.hx",20,0x1697f5a4)
            	HX_STACK_THIS(this)
HXLINE(  24)		this->_hx___saveLastFilter = false;
HXLINE(  23)		this->_hx___passes = (int)0;
HXLINE(  22)		this->_hx___dirty = true;
            	}

Dynamic BitmapFilter_obj::__CreateEmpty() { return new BitmapFilter_obj; }

hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new()
{
	hx::ObjectPtr< BitmapFilter_obj > _hx_result = new BitmapFilter_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapFilter_obj > _hx_result = new BitmapFilter_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::filters::BitmapFilter BitmapFilter_obj::clone(){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","clone",0x8c417bc7,"openfl.filters.BitmapFilter.clone","openfl/filters/BitmapFilter.hx",37,0x1697f5a4)
            	HX_STACK_THIS(this)
HXLINE(  37)		return  ::openfl::filters::BitmapFilter_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )

void BitmapFilter_obj::_hx___growBounds( ::openfl::geom::Rectangle rect){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","__growBounds",0x8337fade,"openfl.filters.BitmapFilter.__growBounds","openfl/filters/BitmapFilter.hx",115,0x1697f5a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,_hx___growBounds,(void))

 ::openfl::display::Shader BitmapFilter_obj::_hx___preparePass(Int pass){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","__preparePass",0xf9b19542,"openfl.filters.BitmapFilter.__preparePass","openfl/filters/BitmapFilter.hx",124,0x1697f5a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pass,"pass")
HXLINE( 124)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,_hx___preparePass,return )

Bool BitmapFilter_obj::_hx___useLastFilter(Int pass){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","__useLastFilter",0xcd33fb9f,"openfl.filters.BitmapFilter.__useLastFilter","openfl/filters/BitmapFilter.hx",131,0x1697f5a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pass,"pass")
HXLINE( 131)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,_hx___useLastFilter,return )

 ::openfl::_internal::renderer::opengl::utils::RenderTexture BitmapFilter_obj::_hx___tmpRenderTexture;

void BitmapFilter_obj::_hx___applyFilters(::Array< ::Dynamic> filters, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::display::BitmapData source, ::openfl::display::BitmapData target, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","__applyFilters",0x995eab63,"openfl.filters.BitmapFilter.__applyFilters","openfl/filters/BitmapFilter.hx",51,0x1697f5a4)
            	HX_STACK_ARG(filters,"filters")
            	HX_STACK_ARG(renderSession,"renderSession")
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(target,"target")
            	HX_STACK_ARG(sourceRect,"sourceRect")
            	HX_STACK_ARG(destPoint,"destPoint")
HXLINE(  53)		HX_VAR( Bool,same);
HXDLIN(  53)		if (hx::IsEq( target,source )) {
HXLINE(  53)			same = target->_hx___usingPingPongTexture;
            		}
            		else {
HXLINE(  53)			same = false;
            		}
HXLINE(  54)		if (same) {
HXLINE(  54)			target->_hx___pingPongTexture->useOldTexture = true;
            		}
HXLINE(  56)		Bool _hx_tmp = hx::IsNull( sourceRect );
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  56)			sourceRect = source->rect;
            		}
HXLINE(  58)		HX_VARI(  ::openfl::_internal::renderer::opengl::utils::RenderTexture,lastFilterOutput) = null();
HXLINE(  59)		HX_VARI( Bool,useLastFilter) = false;
HXLINE(  61)		HX_VARI(  ::openfl::display::Shader,srcShader) = source->_hx___shader;
HXLINE(  63)		{
HXLINE(  63)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  63)			while((_g < filters->length)){
HXLINE(  63)				HX_VARI(  ::openfl::filters::BitmapFilter,filter) = filters->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN(  63)				++_g;
HXLINE(  64)				useLastFilter = false;
HXLINE(  67)				Bool _hx_tmp1 = filter->_hx___saveLastFilter;
HXDLIN(  67)				if (_hx_tmp1) {
HXLINE(  68)					target->_hx___pingPongTexture->swap();
HXLINE(  69)					target->_hx___drawGL(renderSession,source,null(),null(),null(),sourceRect,true,!(target->_hx___usingPingPongTexture),true,null(),null());
HXLINE(  70)					HX_VARI(  ::openfl::_internal::renderer::opengl::utils::PingPongTexture,_this) = target->_hx___pingPongTexture;
HXDLIN(  70)					if (_this->_hx___swapped) {
HXLINE(  70)						lastFilterOutput = _this->_hx___texture0;
            					}
            					else {
HXLINE(  70)						lastFilterOutput = _this->_hx___texture1;
            					}
HXLINE(  71)					{
HXLINE(  71)						HX_VARI_NAME(  ::openfl::_internal::renderer::opengl::utils::PingPongTexture,_this1,"_this") = target->_hx___pingPongTexture;
HXDLIN(  71)						HX_VARI(  ::openfl::_internal::renderer::opengl::utils::RenderTexture,v) = ::openfl::filters::BitmapFilter_obj::_hx___tmpRenderTexture;
HXDLIN(  71)						Bool _hx_tmp2 = _this1->_hx___swapped;
HXDLIN(  71)						if (_hx_tmp2) {
HXLINE(  71)							_this1->_hx___texture0 = v;
            						}
            						else {
HXLINE(  71)							_this1->_hx___texture1 = v;
            						}
            					}
            				}
HXLINE(  74)				{
HXLINE(  74)					HX_VARI( Int,_g2) = (int)0;
HXDLIN(  74)					HX_VARI( Int,_g1) = filter->_hx___passes;
HXDLIN(  74)					while((_g2 < _g1)){
HXLINE(  74)						HX_VARI( Int,pass) = _g2++;
HXLINE(  76)						Bool _hx_tmp3 = filter->_hx___saveLastFilter;
HXDLIN(  76)						if (_hx_tmp3) {
HXLINE(  76)							useLastFilter = filter->_hx___useLastFilter(pass);
            						}
            						else {
HXLINE(  76)							useLastFilter = false;
            						}
HXLINE(  78)						Bool _hx_tmp4;
HXDLIN(  78)						if (same) {
HXLINE(  78)							_hx_tmp4 = !(useLastFilter);
            						}
            						else {
HXLINE(  78)							_hx_tmp4 = false;
            						}
HXDLIN(  78)						if (_hx_tmp4) {
HXLINE(  78)							target->_hx___pingPongTexture->swap();
            						}
HXLINE(  80)						if (useLastFilter) {
HXLINE(  81)							HX_VARI_NAME(  ::openfl::_internal::renderer::opengl::utils::PingPongTexture,_this2,"_this") = target->_hx___pingPongTexture;
HXDLIN(  81)							 ::openfl::_internal::renderer::opengl::utils::RenderTexture _hx_tmp5;
HXDLIN(  81)							if (_this2->_hx___swapped) {
HXLINE(  81)								_hx_tmp5 = _this2->_hx___texture0;
            							}
            							else {
HXLINE(  81)								_hx_tmp5 = _this2->_hx___texture1;
            							}
HXDLIN(  81)							::openfl::filters::BitmapFilter_obj::_hx___tmpRenderTexture = _hx_tmp5;
HXLINE(  82)							{
HXLINE(  82)								HX_VARI_NAME(  ::openfl::_internal::renderer::opengl::utils::PingPongTexture,_this3,"_this") = target->_hx___pingPongTexture;
HXDLIN(  82)								Bool _hx_tmp6 = _this3->_hx___swapped;
HXDLIN(  82)								if (_hx_tmp6) {
HXLINE(  82)									_this3->_hx___texture0 = lastFilterOutput;
            								}
            								else {
HXLINE(  82)									_this3->_hx___texture1 = lastFilterOutput;
            								}
            							}
            						}
HXLINE(  85)						source->_hx___shader = filter->_hx___preparePass(pass);
HXLINE(  86)						target->_hx___drawGL(renderSession,source,null(),null(),null(),sourceRect,true,!(target->_hx___usingPingPongTexture),!(useLastFilter),null(),null());
            					}
            				}
            			}
            		}
HXLINE(  91)		source->_hx___shader = srcShader;
HXLINE(  93)		if (same) {
HXLINE(  93)			target->_hx___pingPongTexture->useOldTexture = false;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(BitmapFilter_obj,_hx___applyFilters,(void))

void BitmapFilter_obj::_hx___expandBounds(::Array< ::Dynamic> filters, ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACK_FRAME("openfl.filters.BitmapFilter","__expandBounds",0x2441e5e5,"openfl.filters.BitmapFilter.__expandBounds","openfl/filters/BitmapFilter.hx",98,0x1697f5a4)
            	HX_STACK_ARG(filters,"filters")
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(matrix,"matrix")
HXLINE( 100)		HX_VARI(  ::openfl::geom::Rectangle,r) = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE( 101)		r->setEmpty();
HXLINE( 103)		{
HXLINE( 103)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 103)			while((_g < filters->length)){
HXLINE( 103)				HX_VARI(  ::openfl::filters::BitmapFilter,filter) = filters->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 103)				++_g;
HXLINE( 105)				filter->_hx___growBounds(r);
            			}
            		}
HXLINE( 109)		r->_hx___transform(r,matrix);
HXLINE( 110)		rect->_hx___expand(r->x,r->y,r->width,r->height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapFilter_obj,_hx___expandBounds,(void))


BitmapFilter_obj::BitmapFilter_obj()
{
}

hx::Val BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return hx::Val( _hx___dirty); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__passes") ) { return hx::Val( _hx___passes); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__growBounds") ) { return hx::Val( _hx___growBounds_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__preparePass") ) { return hx::Val( _hx___preparePass_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__useLastFilter") ) { return hx::Val( _hx___useLastFilter_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__saveLastFilter") ) { return hx::Val( _hx___saveLastFilter); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__applyFilters") ) { outValue = _hx___applyFilters_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__expandBounds") ) { outValue = _hx___expandBounds_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tmpRenderTexture") ) { outValue = _hx___tmpRenderTexture; return true; }
	}
	return false;
}

hx::Val BitmapFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< Bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__passes") ) { _hx___passes=inValue.Cast< Int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__saveLastFilter") ) { _hx___saveLastFilter=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__tmpRenderTexture") ) { _hx___tmpRenderTexture=ioValue.Cast<  ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return true; }
	}
	return false;
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96"));
	outFields->push(HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapFilter_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___passes),HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___saveLastFilter),HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo BitmapFilter_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(void *) &BitmapFilter_obj::_hx___tmpRenderTexture,HX_HCSTRING("__tmpRenderTexture","\xee","\x3f","\x19","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String BitmapFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96"),
	HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__growBounds","\x08","\x22","\x16","\x42"),
	HX_HCSTRING("__preparePass","\xd8","\xb2","\x35","\x3d"),
	HX_HCSTRING("__useLastFilter","\xb5","\x2a","\x2b","\x10"),
	::String(null()) };

static void BitmapFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::_hx___tmpRenderTexture,"__tmpRenderTexture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::_hx___tmpRenderTexture,"__tmpRenderTexture");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

static ::String BitmapFilter_obj_sStaticFields[] = {
	HX_HCSTRING("__tmpRenderTexture","\xee","\x3f","\x19","\x2b"),
	HX_HCSTRING("__applyFilters","\x0d","\x71","\x74","\x69"),
	HX_HCSTRING("__expandBounds","\x8f","\xab","\x57","\xf4"),
	::String(null())
};

void BitmapFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilter","\x58","\x3d","\x87","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapFilter_obj::__SetStatic;
	__mClass->mMarkFunc = BitmapFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BitmapFilter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
