// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#define INCLUDED_openfl_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES VertexBuffer3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();

	public:
		void __construct( ::openfl::display3D::Context3D context, ::lime::graphics::opengl::GLBuffer glBuffer,Int numVertices,Int data32PerVertex,Int bufferUsage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.VertexBuffer3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.VertexBuffer3D"); }
		static hx::ObjectPtr< VertexBuffer3D_obj > __new( ::openfl::display3D::Context3D context, ::lime::graphics::opengl::GLBuffer glBuffer,Int numVertices,Int data32PerVertex,Int bufferUsage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexBuffer3D","\x55","\x59","\x6d","\xdc"); }

		 ::openfl::display3D::Context3D context;
		Int data32PerVertex;
		 ::lime::graphics::opengl::GLBuffer glBuffer;
		Int numVertices;
		Int bufferUsage;
		void dispose();
		::Dynamic dispose_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData byteArray,Int byteArrayOffset,Int startOffset,Int count);
		::Dynamic uploadFromByteArray_dyn();

		void uploadFromFloat32Array( ::lime::utils::ArrayBufferView data);
		::Dynamic uploadFromFloat32Array_dyn();

		void uploadFromVector(::Array< Float > data,Int startVertex,Int numVertices);
		::Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_VertexBuffer3D */ 