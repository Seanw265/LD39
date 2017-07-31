// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_console_IndexBuffer
#include <lime/graphics/console/IndexBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_console_Shader
#include <lime/graphics/console/Shader.h>
#endif
#ifndef INCLUDED_lime_graphics_console_VertexBuffer
#include <lime/graphics/console/VertexBuffer.h>
#endif

namespace lime{
namespace graphics{

void ConsoleRenderContext_obj::__construct(){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","new",0x37aa2dde,"lime.graphics.ConsoleRenderContext.new","lime/graphics/ConsoleRenderContext.hx",333,0x16233b72)
            	HX_STACK_THIS(this)
            	}

Dynamic ConsoleRenderContext_obj::__CreateEmpty() { return new ConsoleRenderContext_obj; }

hx::ObjectPtr< ConsoleRenderContext_obj > ConsoleRenderContext_obj::__new()
{
	hx::ObjectPtr< ConsoleRenderContext_obj > _hx_result = new ConsoleRenderContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ConsoleRenderContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleRenderContext_obj > _hx_result = new ConsoleRenderContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::graphics::console::IndexBuffer ConsoleRenderContext_obj::createIndexBuffer( ::Dynamic indices,Int count){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","createIndexBuffer",0x26fefe14,"lime.graphics.ConsoleRenderContext.createIndexBuffer","lime/graphics/ConsoleRenderContext.hx",343,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(indices,"indices")
            	HX_STACK_ARG(count,"count")
HXLINE( 343)		return  ::lime::graphics::console::IndexBuffer_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleRenderContext_obj,createIndexBuffer,return )

 ::lime::graphics::console::VertexBuffer ConsoleRenderContext_obj::createVertexBuffer( ::Dynamic decl,Int count){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","createVertexBuffer",0x6cd66ce2,"lime.graphics.ConsoleRenderContext.createVertexBuffer","lime/graphics/ConsoleRenderContext.hx",344,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(decl,"decl")
            	HX_STACK_ARG(count,"count")
HXLINE( 344)		return  ::lime::graphics::console::VertexBuffer_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleRenderContext_obj,createVertexBuffer,return )

 ::lime::graphics::console::Shader ConsoleRenderContext_obj::lookupShader(::String name){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","lookupShader",0xafa7f001,"lime.graphics.ConsoleRenderContext.lookupShader","lime/graphics/ConsoleRenderContext.hx",345,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 345)		return  ::lime::graphics::console::Shader_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,lookupShader,return )

void ConsoleRenderContext_obj::clear(Int r,Int g,Int b,Int a,hx::Null< Float >  __o_depth,hx::Null< Int >  __o_stencil){
Float depth = __o_depth.Default(((Float)1.0));
Int stencil = __o_stencil.Default(0);
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clear",0xc822aa8b,"lime.graphics.ConsoleRenderContext.clear","lime/graphics/ConsoleRenderContext.hx",347,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(depth,"depth")
            	HX_STACK_ARG(stencil,"stencil")
            	}


HX_DEFINE_DYNAMIC_FUNC6(ConsoleRenderContext_obj,clear,(void))

void ConsoleRenderContext_obj::bindShader( ::lime::graphics::console::Shader shader){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","bindShader",0xbefe0304,"lime.graphics.ConsoleRenderContext.bindShader","lime/graphics/ConsoleRenderContext.hx",349,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(shader,"shader")
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,bindShader,(void))

void ConsoleRenderContext_obj::setViewport( ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height,hx::Null< Float >  __o_nearPlane,hx::Null< Float >  __o_farPlane){
Float nearPlane = __o_nearPlane.Default(((Float)0.0));
Float farPlane = __o_farPlane.Default(((Float)1.0));
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","setViewport",0xd05321a6,"lime.graphics.ConsoleRenderContext.setViewport","lime/graphics/ConsoleRenderContext.hx",351,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(nearPlane,"nearPlane")
            	HX_STACK_ARG(farPlane,"farPlane")
            	}


HX_DEFINE_DYNAMIC_FUNC6(ConsoleRenderContext_obj,setViewport,(void))

void ConsoleRenderContext_obj::setVertexShaderConstantF( ::Dynamic startRegister, ::Dynamic vec4, ::Dynamic vec4count){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","setVertexShaderConstantF",0xee598a39,"lime.graphics.ConsoleRenderContext.setVertexShaderConstantF","lime/graphics/ConsoleRenderContext.hx",353,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(startRegister,"startRegister")
            	HX_STACK_ARG(vec4,"vec4")
            	HX_STACK_ARG(vec4count,"vec4count")
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleRenderContext_obj,setVertexShaderConstantF,(void))

void ConsoleRenderContext_obj::setVertexSource( ::lime::graphics::console::VertexBuffer vb){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","setVertexSource",0x13a8189f,"lime.graphics.ConsoleRenderContext.setVertexSource","lime/graphics/ConsoleRenderContext.hx",355,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vb,"vb")
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,setVertexSource,(void))

void ConsoleRenderContext_obj::setIndexSource( ::lime::graphics::console::IndexBuffer ib){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","setIndexSource",0xe2764c4d,"lime.graphics.ConsoleRenderContext.setIndexSource","lime/graphics/ConsoleRenderContext.hx",356,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ib,"ib")
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,setIndexSource,(void))

void ConsoleRenderContext_obj::draw( ::Dynamic primitive, ::Dynamic startVertex, ::Dynamic primitiveCount){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","draw",0x76ab9cc6,"lime.graphics.ConsoleRenderContext.draw","lime/graphics/ConsoleRenderContext.hx",358,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(primitive,"primitive")
            	HX_STACK_ARG(startVertex,"startVertex")
            	HX_STACK_ARG(primitiveCount,"primitiveCount")
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleRenderContext_obj,draw,(void))

void ConsoleRenderContext_obj::drawIndexed( ::Dynamic primitive, ::Dynamic vertexCount, ::Dynamic startIndex, ::Dynamic primitiveCount){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","drawIndexed",0x2d54abcb,"lime.graphics.ConsoleRenderContext.drawIndexed","lime/graphics/ConsoleRenderContext.hx",359,0x16233b72)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(primitive,"primitive")
            	HX_STACK_ARG(vertexCount,"vertexCount")
            	HX_STACK_ARG(startIndex,"startIndex")
            	HX_STACK_ARG(primitiveCount,"primitiveCount")
            	}


HX_DEFINE_DYNAMIC_FUNC4(ConsoleRenderContext_obj,drawIndexed,(void))

Int ConsoleRenderContext_obj::get_width(){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","get_width",0x2d96a25b,"lime.graphics.ConsoleRenderContext.get_width","lime/graphics/ConsoleRenderContext.hx",361,0x16233b72)
            	HX_STACK_THIS(this)
HXLINE( 361)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleRenderContext_obj,get_width,return )

Int ConsoleRenderContext_obj::get_height(){
            	HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","get_height",0x6c86e5f2,"lime.graphics.ConsoleRenderContext.get_height","lime/graphics/ConsoleRenderContext.hx",362,0x16233b72)
            	HX_STACK_THIS(this)
HXLINE( 362)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleRenderContext_obj,get_height,return )


ConsoleRenderContext_obj::ConsoleRenderContext_obj()
{
}

hx::Val ConsoleRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_width()); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_height()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindShader") ) { return hx::Val( bindShader_dyn()); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setViewport") ) { return hx::Val( setViewport_dyn()); }
		if (HX_FIELD_EQ(inName,"drawIndexed") ) { return hx::Val( drawIndexed_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lookupShader") ) { return hx::Val( lookupShader_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setIndexSource") ) { return hx::Val( setIndexSource_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setVertexSource") ) { return hx::Val( setVertexSource_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return hx::Val( createIndexBuffer_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return hx::Val( createVertexBuffer_dyn()); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setVertexShaderConstantF") ) { return hx::Val( setVertexShaderConstantF_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

void ConsoleRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConsoleRenderContext_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ConsoleRenderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleRenderContext_obj_sMemberFields[] = {
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("lookupShader","\x3f","\xed","\x8a","\xcf"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("bindShader","\xc2","\x94","\x4a","\x45"),
	HX_HCSTRING("setViewport","\x28","\x16","\x06","\xcd"),
	HX_HCSTRING("setVertexShaderConstantF","\x77","\x6c","\xe2","\x79"),
	HX_HCSTRING("setVertexSource","\x21","\x76","\xfc","\xf0"),
	HX_HCSTRING("setIndexSource","\x0b","\x95","\x01","\xff"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawIndexed","\x4d","\xa0","\x07","\x2a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void ConsoleRenderContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleRenderContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleRenderContext_obj::__mClass;

void ConsoleRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ConsoleRenderContext","\xec","\xa6","\x12","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConsoleRenderContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConsoleRenderContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleRenderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleRenderContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleRenderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleRenderContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
