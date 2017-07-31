// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Circle;

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::DrawTiles( ::openfl::display::Tilesheet sheet,::Array< Float > tileData,Bool smooth,Int flags, ::openfl::display::Shader shader,Int count)
{
	return hx::CreateEnum< GraphicType_obj >(HX_("DrawTiles",c1,12,13,7a),5,6)->_hx_init(0,sheet)->_hx_init(1,tileData)->_hx_init(2,smooth)->_hx_init(3,flags)->_hx_init(4,shader)->_hx_init(5,count);
}

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::DrawTriangles(::Array< Float > vertices,::Array< Int > indices,::Array< Float > uvtData, ::Dynamic culling,::Array< Int > colors,Int blendMode)
{
	return hx::CreateEnum< GraphicType_obj >(HX_("DrawTriangles",e7,93,58,26),4,6)->_hx_init(0,vertices)->_hx_init(1,indices)->_hx_init(2,uvtData)->_hx_init(3,culling)->_hx_init(4,colors)->_hx_init(5,blendMode);
}

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Ellipse;

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::OverrideMatrix( ::openfl::geom::Matrix matrix)
{
	return hx::CreateEnum< GraphicType_obj >(HX_("OverrideMatrix",cd,21,ff,63),6,1)->_hx_init(0,matrix);
}

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Polygon;

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Rectangle(Bool rounded)
{
	return hx::CreateEnum< GraphicType_obj >(HX_("Rectangle",0f,b4,4f,bb),1,1)->_hx_init(0,rounded);
}

bool GraphicType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) { outValue = GraphicType_obj::Circle; return true; }
	if (inName==HX_("DrawTiles",c1,12,13,7a)) { outValue = GraphicType_obj::DrawTiles_dyn(); return true; }
	if (inName==HX_("DrawTriangles",e7,93,58,26)) { outValue = GraphicType_obj::DrawTriangles_dyn(); return true; }
	if (inName==HX_("Ellipse",be,68,d7,d8)) { outValue = GraphicType_obj::Ellipse; return true; }
	if (inName==HX_("OverrideMatrix",cd,21,ff,63)) { outValue = GraphicType_obj::OverrideMatrix_dyn(); return true; }
	if (inName==HX_("Polygon",5a,2a,e2,df)) { outValue = GraphicType_obj::Polygon; return true; }
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) { outValue = GraphicType_obj::Rectangle_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GraphicType_obj)

int GraphicType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return 2;
	if (inName==HX_("DrawTiles",c1,12,13,7a)) return 5;
	if (inName==HX_("DrawTriangles",e7,93,58,26)) return 4;
	if (inName==HX_("Ellipse",be,68,d7,d8)) return 3;
	if (inName==HX_("OverrideMatrix",cd,21,ff,63)) return 6;
	if (inName==HX_("Polygon",5a,2a,e2,df)) return 0;
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicType_obj,DrawTiles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicType_obj,DrawTriangles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,OverrideMatrix,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,Rectangle,return)

int GraphicType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return 0;
	if (inName==HX_("DrawTiles",c1,12,13,7a)) return 6;
	if (inName==HX_("DrawTriangles",e7,93,58,26)) return 6;
	if (inName==HX_("Ellipse",be,68,d7,d8)) return 0;
	if (inName==HX_("OverrideMatrix",cd,21,ff,63)) return 1;
	if (inName==HX_("Polygon",5a,2a,e2,df)) return 0;
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val GraphicType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Circle",30,e6,a1,8a)) return Circle;
	if (inName==HX_("DrawTiles",c1,12,13,7a)) return DrawTiles_dyn();
	if (inName==HX_("DrawTriangles",e7,93,58,26)) return DrawTriangles_dyn();
	if (inName==HX_("Ellipse",be,68,d7,d8)) return Ellipse;
	if (inName==HX_("OverrideMatrix",cd,21,ff,63)) return OverrideMatrix_dyn();
	if (inName==HX_("Polygon",5a,2a,e2,df)) return Polygon;
	if (inName==HX_("Rectangle",0f,b4,4f,bb)) return Rectangle_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String GraphicType_obj_sStaticFields[] = {
	HX_("Polygon",5a,2a,e2,df),
	HX_("Rectangle",0f,b4,4f,bb),
	HX_("Circle",30,e6,a1,8a),
	HX_("Ellipse",be,68,d7,d8),
	HX_("DrawTriangles",e7,93,58,26),
	HX_("DrawTiles",c1,12,13,7a),
	HX_("OverrideMatrix",cd,21,ff,63),
	::String(null())
};

static void GraphicType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};
#endif

hx::Class GraphicType_obj::__mClass;

Dynamic __Create_GraphicType_obj() { return new GraphicType_obj; }

void GraphicType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicType","\x41","\xb2","\x69","\x10"), hx::TCanCast< GraphicType_obj >,GraphicType_obj_sStaticFields,0,
	&__Create_GraphicType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicType_obj, GraphicType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , GraphicType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GraphicType_obj::__GetStatic;
}

void GraphicType_obj::__boot()
{
Circle = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"),2,0);
Ellipse = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8"),3,0);
Polygon = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf"),0,0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
