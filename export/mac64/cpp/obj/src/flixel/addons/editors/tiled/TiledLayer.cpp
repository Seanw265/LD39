// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledLayer_obj::__construct( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","new",0x018fcf96,"flixel.addons.editors.tiled.TiledLayer.new","flixel/addons/editors/tiled/TiledLayer.hx",27,0x30daee78)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(parent,"parent")
HXLINE(  28)		this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
HXLINE(  29)		this->map = parent;
HXLINE(  30)		this->name = source->att->resolve(HX_("name",4b,72,ff,48));
HXLINE(  31)		Bool _hx_tmp;
HXDLIN(  31)		Bool _hx_tmp1;
HXDLIN(  31)		Bool _hx_tmp2 = source->has->resolve(HX_("visible",72,78,24,a3));
HXDLIN(  31)		if (_hx_tmp2) {
HXLINE(  31)			::String _hx_tmp3 = source->att->resolve(HX_("visible",72,78,24,a3));
HXDLIN(  31)			_hx_tmp1 = (_hx_tmp3 == HX_("0",30,00,00,00));
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXLINE(  31)			_hx_tmp = false;
            		}
            		else {
HXLINE(  31)			_hx_tmp = true;
            		}
HXDLIN(  31)		this->visible = _hx_tmp;
HXLINE(  32)		Float _hx_tmp4;
HXDLIN(  32)		Bool _hx_tmp5 = source->has->resolve(HX_("opacity",cb,5d,65,eb));
HXDLIN(  32)		if (_hx_tmp5) {
HXLINE(  32)			::String _hx_tmp6 = source->att->resolve(HX_("opacity",cb,5d,65,eb));
HXDLIN(  32)			_hx_tmp4 = ::Std_obj::parseFloat(_hx_tmp6);
            		}
            		else {
HXLINE(  32)			_hx_tmp4 = ((Float)1.0);
            		}
HXDLIN(  32)		this->opacity = _hx_tmp4;
HXLINE(  33)		Float _hx_tmp7;
HXDLIN(  33)		Bool _hx_tmp8 = source->has->resolve(HX_("offsetx",85,09,65,d7));
HXDLIN(  33)		if (_hx_tmp8) {
HXLINE(  33)			::String _hx_tmp9 = source->att->resolve(HX_("offsetx",85,09,65,d7));
HXDLIN(  33)			_hx_tmp7 = ::Std_obj::parseFloat(_hx_tmp9);
            		}
            		else {
HXLINE(  33)			_hx_tmp7 = ((Float)0.0);
            		}
HXDLIN(  33)		this->offsetX = _hx_tmp7;
HXLINE(  34)		Float _hx_tmp10;
HXDLIN(  34)		Bool _hx_tmp11 = source->has->resolve(HX_("offsety",86,09,65,d7));
HXDLIN(  34)		if (_hx_tmp11) {
HXLINE(  34)			::String _hx_tmp12 = source->att->resolve(HX_("offsety",86,09,65,d7));
HXDLIN(  34)			_hx_tmp10 = ::Std_obj::parseFloat(_hx_tmp12);
            		}
            		else {
HXLINE(  34)			_hx_tmp10 = ((Float)0.0);
            		}
HXDLIN(  34)		this->offsetY = _hx_tmp10;
HXLINE(  36)		this->loadProperties(source);
            	}

Dynamic TiledLayer_obj::__CreateEmpty() { return new TiledLayer_obj; }

hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new( ::haxe::xml::Fast source, ::flixel::addons::editors::tiled::TiledMap parent)
{
	hx::ObjectPtr< TiledLayer_obj > _hx_result = new TiledLayer_obj();
	_hx_result->__construct(source,parent);
	return _hx_result;
}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TiledLayer_obj > _hx_result = new TiledLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void TiledLayer_obj::loadProperties( ::haxe::xml::Fast source){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","loadProperties",0x66f78643,"flixel.addons.editors.tiled.TiledLayer.loadProperties","flixel/addons/editors/tiled/TiledLayer.hx",41,0x30daee78)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE(  41)		HX_VAR(  ::_List::ListNode,_g_head);
HXDLIN(  41)		 ::List _this = source->nodes->resolve(HX_("properties",f3,fb,0e,61));
HXLINE(  39)		_g_head = _this->h;
HXLINE(  41)		while(true){
HXLINE(  41)			Bool _hx_tmp = !(hx::IsNotNull( _g_head ));
HXDLIN(  41)			if (_hx_tmp) {
HXLINE(  41)				goto _hx_goto_0;
            			}
HXDLIN(  41)			HX_VARI(  ::haxe::xml::Fast,val) = ( ( ::haxe::xml::Fast)(_g_head->item) );
HXLINE(  39)			_g_head = _g_head->next;
HXLINE(  43)			this->properties->extend(val);
            		}
            		_hx_goto_0:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,loadProperties,(void))


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
}

hx::Val TiledLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return hx::Val( opacity); }
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadProperties") ) { return hx::Val( loadProperties_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TiledLayer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TiledLayer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledLayerType*/ ,(int)offsetof(TiledLayer_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TiledLayer_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledLayer_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("loadProperties","\xb9","\x05","\xc0","\xf7"),
	::String(null()) };

static void TiledLayer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledLayer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledLayer_obj::__mClass;

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledLayer","\xa4","\x0c","\xa7","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledLayer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TiledLayer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledLayer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledLayer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled