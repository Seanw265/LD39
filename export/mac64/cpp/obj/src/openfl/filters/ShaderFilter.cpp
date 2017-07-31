// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace filters{

void ShaderFilter_obj::__construct( ::openfl::display::Shader shader){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","new",0xe9b87900,"openfl.filters.ShaderFilter.new","openfl/filters/ShaderFilter.hx",13,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(shader,"shader")
HXLINE(  18)		this->topExtension = (int)0;
HXLINE(  17)		this->rightExtension = (int)0;
HXLINE(  16)		this->leftExtension = (int)0;
HXLINE(  15)		this->bottomExtension = (int)0;
HXLINE(  22)		super::__construct();
HXLINE(  23)		{
HXLINE(  23)			this->_hx___dirty = true;
HXDLIN(  23)			this->shader = shader;
            		}
HXLINE(  24)		this->_hx___passes = (int)1;
            	}

Dynamic ShaderFilter_obj::__CreateEmpty() { return new ShaderFilter_obj; }

hx::ObjectPtr< ShaderFilter_obj > ShaderFilter_obj::__new( ::openfl::display::Shader shader)
{
	hx::ObjectPtr< ShaderFilter_obj > _hx_result = new ShaderFilter_obj();
	_hx_result->__construct(shader);
	return _hx_result;
}

Dynamic ShaderFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderFilter_obj > _hx_result = new ShaderFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

 ::openfl::filters::BitmapFilter ShaderFilter_obj::clone(){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","clone",0xd2bb23fd,"openfl.filters.ShaderFilter.clone","openfl/filters/ShaderFilter.hx",27,0x3faaafae)
            	HX_STACK_THIS(this)
HXLINE(  28)		HX_VARI(  ::openfl::filters::ShaderFilter,f) =  ::openfl::filters::ShaderFilter_obj::__new(this->shader);
HXLINE(  29)		{
HXLINE(  29)			Int v = this->bottomExtension;
HXDLIN(  29)			f->_hx___dirty = true;
HXDLIN(  29)			f->bottomExtension = v;
            		}
HXLINE(  30)		{
HXLINE(  30)			Int v1 = this->leftExtension;
HXDLIN(  30)			f->_hx___dirty = true;
HXDLIN(  30)			f->leftExtension = v1;
            		}
HXLINE(  31)		{
HXLINE(  31)			Int v2 = this->rightExtension;
HXDLIN(  31)			f->_hx___dirty = true;
HXDLIN(  31)			f->rightExtension = v2;
            		}
HXLINE(  32)		{
HXLINE(  32)			Int v3 = this->topExtension;
HXDLIN(  32)			f->_hx___dirty = true;
HXDLIN(  32)			f->topExtension = v3;
            		}
HXLINE(  33)		return f;
            	}


void ShaderFilter_obj::_hx___growBounds( ::openfl::geom::Rectangle rect){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","__growBounds",0x19676568,"openfl.filters.ShaderFilter.__growBounds","openfl/filters/ShaderFilter.hx",36,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
HXLINE(  38)		hx::AddEq(rect->x,-(this->leftExtension));
HXLINE(  39)		hx::AddEq(rect->y,-(this->topExtension));
HXLINE(  40)		hx::AddEq(rect->width,this->rightExtension);
HXLINE(  41)		hx::AddEq(rect->height,this->bottomExtension);
            	}


 ::openfl::display::Shader ShaderFilter_obj::_hx___preparePass(Int pass){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","__preparePass",0xccff6378,"openfl.filters.ShaderFilter.__preparePass","openfl/filters/ShaderFilter.hx",46,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pass,"pass")
HXLINE(  46)		return this->shader;
            	}


Int ShaderFilter_obj::set_bottomExtension(Int v){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","set_bottomExtension",0xb1b981d7,"openfl.filters.ShaderFilter.set_bottomExtension","openfl/filters/ShaderFilter.hx",49,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  49)		this->_hx___dirty = true;
HXDLIN(  49)		return (this->bottomExtension = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderFilter_obj,set_bottomExtension,return )

Int ShaderFilter_obj::set_topExtension(Int v){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","set_topExtension",0x20ad5f87,"openfl.filters.ShaderFilter.set_topExtension","openfl/filters/ShaderFilter.hx",50,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  50)		this->_hx___dirty = true;
HXDLIN(  50)		return (this->topExtension = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderFilter_obj,set_topExtension,return )

Int ShaderFilter_obj::set_rightExtension(Int v){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","set_rightExtension",0x9ca02aa0,"openfl.filters.ShaderFilter.set_rightExtension","openfl/filters/ShaderFilter.hx",51,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  51)		this->_hx___dirty = true;
HXDLIN(  51)		return (this->rightExtension = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderFilter_obj,set_rightExtension,return )

Int ShaderFilter_obj::set_leftExtension(Int v){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","set_leftExtension",0xd758167b,"openfl.filters.ShaderFilter.set_leftExtension","openfl/filters/ShaderFilter.hx",52,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  52)		this->_hx___dirty = true;
HXDLIN(  52)		return (this->leftExtension = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderFilter_obj,set_leftExtension,return )

 ::openfl::display::Shader ShaderFilter_obj::set_shader( ::openfl::display::Shader v){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","set_shader",0xb6ad78c2,"openfl.filters.ShaderFilter.set_shader","openfl/filters/ShaderFilter.hx",53,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE(  53)		this->_hx___dirty = true;
HXDLIN(  53)		return (this->shader = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderFilter_obj,set_shader,return )


ShaderFilter_obj::ShaderFilter_obj()
{
}

void ShaderFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderFilter);
	HX_MARK_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_MARK_MEMBER_NAME(leftExtension,"leftExtension");
	HX_MARK_MEMBER_NAME(rightExtension,"rightExtension");
	HX_MARK_MEMBER_NAME(topExtension,"topExtension");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ShaderFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_VISIT_MEMBER_NAME(leftExtension,"leftExtension");
	HX_VISIT_MEMBER_NAME(rightExtension,"rightExtension");
	HX_VISIT_MEMBER_NAME(topExtension,"topExtension");
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

hx::Val ShaderFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_shader") ) { return hx::Val( set_shader_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { return hx::Val( topExtension); }
		if (HX_FIELD_EQ(inName,"__growBounds") ) { return hx::Val( _hx___growBounds_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { return hx::Val( leftExtension); }
		if (HX_FIELD_EQ(inName,"__preparePass") ) { return hx::Val( _hx___preparePass_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { return hx::Val( rightExtension); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { return hx::Val( bottomExtension); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_topExtension") ) { return hx::Val( set_topExtension_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_leftExtension") ) { return hx::Val( set_leftExtension_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_rightExtension") ) { return hx::Val( set_rightExtension_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_bottomExtension") ) { return hx::Val( set_bottomExtension_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shader(inValue) );shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_topExtension(inValue) );topExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_leftExtension(inValue) );leftExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rightExtension(inValue) );rightExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bottomExtension(inValue) );bottomExtension=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"));
	outFields->push(HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"));
	outFields->push(HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"));
	outFields->push(HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderFilter_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,bottomExtension),HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,leftExtension),HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,rightExtension),HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,topExtension),HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(ShaderFilter_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderFilter_obj_sMemberFields[] = {
	HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"),
	HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"),
	HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"),
	HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__growBounds","\x08","\x22","\x16","\x42"),
	HX_HCSTRING("__preparePass","\xd8","\xb2","\x35","\x3d"),
	HX_HCSTRING("set_bottomExtension","\x37","\x99","\x21","\xe6"),
	HX_HCSTRING("set_topExtension","\x27","\xec","\x86","\xad"),
	HX_HCSTRING("set_rightExtension","\x40","\x1f","\x6e","\x3c"),
	HX_HCSTRING("set_leftExtension","\xdb","\x95","\xd9","\x88"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	::String(null()) };

static void ShaderFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderFilter_obj::__mClass;

void ShaderFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.ShaderFilter","\x0e","\x39","\x50","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters