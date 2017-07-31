// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context, ::lime::graphics::opengl::GLTexture glTexture,Bool optimize,Int width,Int height){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",24,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(glTexture,"glTexture")
            	HX_STACK_ARG(optimize,"optimize")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  26)		this->optimizeForRenderToTexture = optimize;
HXLINE(  28)		this->mipmapsGenerated = false;
HXLINE(  30)		Bool _hx_tmp = (::openfl::display3D::textures::Texture_obj::internalFormat == (int)-1);
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  32)			::openfl::display3D::textures::Texture_obj::internalFormat = (int)32993;
            		}
HXLINE(  42)		super::__construct(context,glTexture,width,height);
HXLINE(  45)		Bool _hx_tmp1 = this->optimizeForRenderToTexture;
HXDLIN(  45)		if (_hx_tmp1) {
HXLINE(  47)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei((int)37440,(int)1);
HXLINE(  48)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE(  49)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE(  50)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE(  51)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context, ::lime::graphics::opengl::GLTexture glTexture,Bool optimize,Int width,Int height)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(context,glTexture,optimize,width,height);
	return _hx_result;
}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,hx::Null< Bool >  __o_async){
Bool async = __o_async.Default(false);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",58,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(async,"async")
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",65,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE(  78)		HX_VARI(  ::lime::graphics::Image,image) = bitmapData->image;
HXLINE(  80)		Bool _hx_tmp;
HXDLIN(  80)		Bool _hx_tmp1 = !(image->get_premultiplied());
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  80)			_hx_tmp = image->get_transparent();
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			image = image->clone();
HXLINE(  83)			image->set_premultiplied(true);
            		}
HXLINE(  87)		this->width = image->width;
HXLINE(  88)		this->height = image->height;
HXLINE(  90)		 ::lime::utils::ArrayBufferView _hx_tmp2 = image->get_data();
HXDLIN(  90)		this->uploadFromUInt8Array(_hx_tmp2,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",97,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 112)		HX_VARI( ::cpp::VirtualArray,array) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytesData(data);
HXDLIN( 112)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN( 112)		Bool _hx_tmp = hx::IsNotNull( array );
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN( 112)			_this->byteOffset = (int)0;
HXDLIN( 112)			_this->length = array->get_length();
HXDLIN( 112)			Int _hx_tmp1 = (_this->length * _this->bytesPerElement);
HXDLIN( 112)			_this->byteLength = _hx_tmp1;
HXDLIN( 112)			Int byteLength = _this->byteLength;
HXDLIN( 112)			HX_VARI_NAME(  ::haxe::io::Bytes,this2,"this") = ::haxe::io::Bytes_obj::alloc(byteLength);
HXDLIN( 112)			_this->buffer = this2;
HXDLIN( 112)			_this->copyFromArray(array,null());
HXDLIN( 112)			this1 = _this;
            		}
            		else {
HXLINE( 112)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Uint8Array",8b,64,02,e4));
            		}
HXLINE( 115)		this->uploadFromUInt8Array(this1,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromUInt8Array( ::lime::utils::ArrayBufferView data,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromUInt8Array",0xb98d8296,"openfl.display3D.textures.Texture.uploadFromUInt8Array","openfl/display3D/textures/Texture.hx",120,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 122)		{
HXLINE( 122)			HX_VARI(  ::lime::graphics::opengl::GLTexture,texture) = this->glTexture;
HXDLIN( 122)			{
HXLINE( 122)				Int texture1;
HXDLIN( 122)				Bool _hx_tmp = hx::IsNull( texture );
HXDLIN( 122)				if (_hx_tmp) {
HXLINE( 122)					texture1 = (int)0;
            				}
            				else {
HXLINE( 122)					texture1 = texture->id;
            				}
HXDLIN( 122)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture((int)3553,texture1);
            			}
            		}
HXLINE( 124)		Bool _hx_tmp1 = this->optimizeForRenderToTexture;
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 126)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei((int)37440,(int)1);
HXLINE( 127)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE( 128)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE( 129)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE( 130)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            		}
HXLINE( 134)		{
HXLINE( 134)			Int internalformat = ::openfl::display3D::textures::Texture_obj::internalFormat;
HXDLIN( 134)			Int width = this->width;
HXDLIN( 134)			Int height = this->height;
HXDLIN( 134)			Int format = ::openfl::display3D::textures::Texture_obj::internalFormat;
HXDLIN( 134)			HX_VAR(  ::haxe::io::Bytes,buffer);
HXDLIN( 134)			Bool _hx_tmp2 = hx::IsNull( data );
HXDLIN( 134)			if (_hx_tmp2) {
HXLINE( 134)				buffer = null();
            			}
            			else {
HXLINE( 134)				buffer = data->buffer;
            			}
HXDLIN( 134)			{
HXLINE( 134)				Int byteOffset;
HXDLIN( 134)				Bool _hx_tmp3 = hx::IsNull( data );
HXDLIN( 134)				if (_hx_tmp3) {
HXLINE( 134)					byteOffset = (int)0;
            				}
            				else {
HXLINE( 134)					byteOffset = data->byteOffset;
            				}
HXDLIN( 134)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d((int)3553,miplevel,internalformat,width,height,(int)0,format,(int)5121,hx::DynamicPtr(buffer),byteOffset);
            			}
            		}
HXLINE( 135)		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture((int)3553,(int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromUInt8Array,(void))

Int Texture_obj::internalFormat;


Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return hx::Val( mipmapsGenerated); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"uploadFromUInt8Array") ) { return hx::Val( uploadFromUInt8Array_dyn()); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return hx::Val( optimizeForRenderToTexture); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { outValue = internalFormat; return true; }
	}
	return false;
}

hx::Val Texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< Bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { internalFormat=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Texture_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Texture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{hx::fsBool,(int)offsetof(Texture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Texture_obj::internalFormat,HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromUInt8Array","\x26","\x75","\xa4","\x6a"),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22"),
	::String(null())
};

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",18,0x3ee19dbf)
HXLINE(  18)		internalFormat = (int)-1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
