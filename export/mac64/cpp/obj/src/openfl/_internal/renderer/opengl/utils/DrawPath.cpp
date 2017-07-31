// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

void DrawPath_obj::__construct(hx::Null< Bool >  __o_makeArray){
Bool makeArray = __o_makeArray.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","new",0xc087ab9c,"openfl._internal.renderer.opengl.utils.DrawPath.new","openfl/_internal/renderer/opengl/utils/DrawPath.hx",27,0xf0fd7951)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(makeArray,"makeArray")
HXLINE(  38)		this->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon_dyn();
HXLINE(  36)		this->points = null();
HXLINE(  34)		this->winding = (int)0;
HXLINE(  33)		this->isRemovable = true;
HXLINE(  32)		this->fillIndex = (int)0;
HXLINE(  41)		this->line =  ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();
HXLINE(  42)		this->fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None_dyn();
HXLINE(  43)		if (makeArray) {
HXLINE(  45)			this->points = ::Array_obj< Float >::__new(0);
            		}
            	}

Dynamic DrawPath_obj::__CreateEmpty() { return new DrawPath_obj; }

hx::ObjectPtr< DrawPath_obj > DrawPath_obj::__new(hx::Null< Bool >  __o_makeArray)
{
	hx::ObjectPtr< DrawPath_obj > _hx_result = new DrawPath_obj();
	_hx_result->__construct(__o_makeArray);
	return _hx_result;
}

Dynamic DrawPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawPath_obj > _hx_result = new DrawPath_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void DrawPath_obj::update( ::openfl::_internal::renderer::opengl::utils::LineStyle line,::hx::EnumBase fill,Int fillIndex,Int winding){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","update",0x9215584d,"openfl._internal.renderer.opengl.utils.DrawPath.update","openfl/_internal/renderer/opengl/utils/DrawPath.hx",49,0xf0fd7951)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(line,"line")
            	HX_STACK_ARG(fill,"fill")
            	HX_STACK_ARG(fillIndex,"fillIndex")
            	HX_STACK_ARG(winding,"winding")
HXLINE(  50)		this->updateLine(line);
HXLINE(  51)		this->fill = fill;
HXLINE(  52)		this->fillIndex = fillIndex;
HXLINE(  53)		this->winding = winding;
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawPath_obj,update,(void))

void DrawPath_obj::updateLine( ::openfl::_internal::renderer::opengl::utils::LineStyle line){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","updateLine",0x8c0846e1,"openfl._internal.renderer.opengl.utils.DrawPath.updateLine","openfl/_internal/renderer/opengl/utils/DrawPath.hx",56,0xf0fd7951)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(line,"line")
HXLINE(  57)		this->line->width = line->width;
HXLINE(  58)		this->line->color = line->color;
HXLINE(  59)		 ::Dynamic _hx_tmp;
HXDLIN(  59)		Bool _hx_tmp1 = hx::IsNull( line->alpha );
HXDLIN(  59)		if (_hx_tmp1) {
HXLINE(  59)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE(  59)			_hx_tmp = line->alpha;
            		}
HXDLIN(  59)		this->line->alpha = _hx_tmp;
HXLINE(  60)		 ::Dynamic _hx_tmp2;
HXDLIN(  60)		Bool _hx_tmp3 = hx::IsNull( line->scaleMode );
HXDLIN(  60)		if (_hx_tmp3) {
HXLINE(  60)			_hx_tmp2 = (int)2;
            		}
            		else {
HXLINE(  60)			_hx_tmp2 = line->scaleMode;
            		}
HXDLIN(  60)		this->line->scaleMode = _hx_tmp2;
HXLINE(  61)		 ::Dynamic _hx_tmp4;
HXDLIN(  61)		Bool _hx_tmp5 = hx::IsNull( line->caps );
HXDLIN(  61)		if (_hx_tmp5) {
HXLINE(  61)			_hx_tmp4 = (int)1;
            		}
            		else {
HXLINE(  61)			_hx_tmp4 = line->caps;
            		}
HXDLIN(  61)		this->line->caps = _hx_tmp4;
HXLINE(  62)		 ::Dynamic _hx_tmp6;
HXDLIN(  62)		Bool _hx_tmp7 = hx::IsNull( line->joints );
HXDLIN(  62)		if (_hx_tmp7) {
HXLINE(  62)			_hx_tmp6 = (int)2;
            		}
            		else {
HXLINE(  62)			_hx_tmp6 = line->joints;
            		}
HXDLIN(  62)		this->line->joints = _hx_tmp6;
HXLINE(  63)		this->line->miterLimit = line->miterLimit;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawPath_obj,updateLine,(void))

 ::openfl::_internal::renderer::opengl::utils::GLStack DrawPath_obj::getStack( ::openfl::display::Graphics graphics, ::lime::graphics::GLRenderContext gl){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","getStack",0xb03e6216,"openfl._internal.renderer.opengl.utils.DrawPath.getStack","openfl/_internal/renderer/opengl/utils/DrawPath.hx",67,0xf0fd7951)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(gl,"gl")
HXLINE(  67)		return ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::build(graphics,gl);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPath_obj,getStack,return )


DrawPath_obj::DrawPath_obj()
{
}

void DrawPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawPath);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(fillIndex,"fillIndex");
	HX_MARK_MEMBER_NAME(isRemovable,"isRemovable");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DrawPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(fillIndex,"fillIndex");
	HX_VISIT_MEMBER_NAME(isRemovable,"isRemovable");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val DrawPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return hx::Val( line); }
		if (HX_FIELD_EQ(inName,"fill") ) { return hx::Val( fill); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return hx::Val( points); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return hx::Val( winding); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { return hx::Val( fillIndex); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateLine") ) { return hx::Val( updateLine_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { return hx::Val( isRemovable); }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getStack") ) { outValue = getStack_dyn(); return true; }
	}
	return false;
}

hx::Val DrawPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast<  ::openfl::_internal::renderer::opengl::utils::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { fillIndex=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { isRemovable=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"));
	outFields->push(HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DrawPath_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(int)offsetof(DrawPath_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(int)offsetof(DrawPath_obj,fill),HX_HCSTRING("fill","\x83","\xce","\xbb","\x43")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,fillIndex),HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c")},
	{hx::fsBool,(int)offsetof(DrawPath_obj,isRemovable),HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawPath_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GraphicType*/ ,(int)offsetof(DrawPath_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DrawPath_obj_sStaticStorageInfo = 0;
#endif

static ::String DrawPath_obj_sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"),
	HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateLine","\x9d","\x02","\x68","\x00"),
	::String(null()) };

static void DrawPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawPath_obj::__mClass;

static ::String DrawPath_obj_sStaticFields[] = {
	HX_HCSTRING("getStack","\xd2","\x76","\xe2","\xe3"),
	::String(null())
};

void DrawPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.DrawPath","\xaa","\xed","\x32","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawPath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawPath_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DrawPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
