// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif

namespace haxe{
namespace xml{

void Fast_obj::__construct( ::Xml x){
            	HX_STACK_FRAME("haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","/usr/local/lib/haxe/std/haxe/xml/Fast.hx",122,0x1680b11e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 123)		Bool _hx_tmp;
HXDLIN( 123)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 123)			_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 123)			_hx_tmp = false;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 124)			HX_STACK_DO_THROW((HX_("Invalid nodeType ",3b,e0,cb,e1) + x->nodeType));
            		}
HXLINE( 125)		this->x = x;
HXLINE( 126)		this->node =  ::haxe::xml::_Fast::NodeAccess_obj::__new(x);
HXLINE( 127)		this->nodes =  ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);
HXLINE( 128)		this->att =  ::haxe::xml::_Fast::AttribAccess_obj::__new(x);
HXLINE( 129)		this->has =  ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);
HXLINE( 130)		this->hasNode =  ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);
            	}

Dynamic Fast_obj::__CreateEmpty() { return new Fast_obj; }

hx::ObjectPtr< Fast_obj > Fast_obj::__new( ::Xml x)
{
	hx::ObjectPtr< Fast_obj > _hx_result = new Fast_obj();
	_hx_result->__construct(x);
	return _hx_result;
}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Fast_obj > _hx_result = new Fast_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

::String Fast_obj::get_name(){
            	HX_STACK_FRAME("haxe.xml.Fast","get_name",0x9611daa7,"haxe.xml.Fast.get_name","/usr/local/lib/haxe/std/haxe/xml/Fast.hx",134,0x1680b11e)
            	HX_STACK_THIS(this)
HXLINE( 134)		if ((this->x->nodeType == ::Xml_obj::Document)) {
HXLINE( 134)			return HX_("Document",3b,ab,c4,74);
            		}
            		else {
HXLINE( 134)			HX_VARI(  ::Xml,_this) = this->x;
HXDLIN( 134)			if ((_this->nodeType != ::Xml_obj::Element)) {
HXLINE( 134)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + _this->nodeType));
            			}
HXDLIN( 134)			return _this->nodeName;
            		}
HXDLIN( 134)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_name,return )

::String Fast_obj::get_innerData(){
            	HX_STACK_FRAME("haxe.xml.Fast","get_innerData",0x21ea0104,"haxe.xml.Fast.get_innerData","/usr/local/lib/haxe/std/haxe/xml/Fast.hx",137,0x1680b11e)
            	HX_STACK_THIS(this)
HXLINE( 138)		HX_VARI(  ::Xml,_this) = this->x;
HXDLIN( 138)		Bool _hx_tmp;
HXDLIN( 138)		if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE( 138)			_hx_tmp = (_this->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 138)			_hx_tmp = false;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 138)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + _this->nodeType));
            		}
HXDLIN( 138)		HX_VARI(  ::Dynamic,it) = _this->children->iterator();
HXLINE( 139)		Bool _hx_tmp1 = !(( (Bool)( ::Dynamic(it->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 139)		if (_hx_tmp1) {
HXLINE( 140)			::String _hx_tmp2 = this->get_name();
HXDLIN( 140)			HX_STACK_DO_THROW((_hx_tmp2 + HX_(" does not have data",0e,54,3b,f4)));
            		}
HXLINE( 141)		HX_VARI(  ::Xml,v) = ( ( ::Xml)( ::Dynamic(it->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 142)		HX_VARI(  ::Xml,n) = ( ( ::Xml)( ::Dynamic(it->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 143)		Bool _hx_tmp3 = hx::IsNotNull( n );
HXDLIN( 143)		if (_hx_tmp3) {
HXLINE( 145)			Bool _hx_tmp4;
HXDLIN( 145)			Bool _hx_tmp5;
HXDLIN( 145)			if ((v->nodeType == ::Xml_obj::PCData)) {
HXLINE( 145)				_hx_tmp5 = (n->nodeType == ::Xml_obj::CData);
            			}
            			else {
HXLINE( 145)				_hx_tmp5 = false;
            			}
HXDLIN( 145)			if (_hx_tmp5) {
HXLINE( 145)				Bool _hx_tmp6;
HXDLIN( 145)				if ((v->nodeType != ::Xml_obj::Document)) {
HXLINE( 145)					_hx_tmp6 = (v->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE( 145)					_hx_tmp6 = true;
            				}
HXDLIN( 145)				if (_hx_tmp6) {
HXLINE( 145)					HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + v->nodeType));
            				}
HXDLIN( 145)				::String _hx_tmp7 = ::StringTools_obj::trim(v->nodeValue);
HXDLIN( 145)				_hx_tmp4 = (_hx_tmp7 == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 145)				_hx_tmp4 = false;
            			}
HXDLIN( 145)			if (_hx_tmp4) {
HXLINE( 146)				HX_VARI(  ::Xml,n2) = ( ( ::Xml)( ::Dynamic(it->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 147)				Bool _hx_tmp8;
HXDLIN( 147)				Bool _hx_tmp9 = hx::IsNotNull( n2 );
HXDLIN( 147)				if (_hx_tmp9) {
HXLINE( 147)					Bool _hx_tmp10;
HXDLIN( 147)					Bool _hx_tmp11 = (n2->nodeType == ::Xml_obj::PCData);
HXDLIN( 147)					if (_hx_tmp11) {
HXLINE( 147)						Bool _hx_tmp12;
HXDLIN( 147)						if ((n2->nodeType != ::Xml_obj::Document)) {
HXLINE( 147)							_hx_tmp12 = (n2->nodeType == ::Xml_obj::Element);
            						}
            						else {
HXLINE( 147)							_hx_tmp12 = true;
            						}
HXDLIN( 147)						if (_hx_tmp12) {
HXLINE( 147)							HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + n2->nodeType));
            						}
HXDLIN( 147)						::String _hx_tmp13 = ::StringTools_obj::trim(n2->nodeValue);
HXDLIN( 147)						_hx_tmp10 = (_hx_tmp13 == HX_("",00,00,00,00));
            					}
            					else {
HXLINE( 147)						_hx_tmp10 = false;
            					}
HXDLIN( 147)					if (_hx_tmp10) {
HXLINE( 147)						 ::Xml _hx_tmp14 = ( ( ::Xml)( ::Dynamic(it->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXDLIN( 147)						_hx_tmp8 = hx::IsNull( _hx_tmp14 );
            					}
            					else {
HXLINE( 147)						_hx_tmp8 = false;
            					}
            				}
            				else {
HXLINE( 147)					_hx_tmp8 = true;
            				}
HXDLIN( 147)				if (_hx_tmp8) {
HXLINE( 148)					Bool _hx_tmp15;
HXDLIN( 148)					if ((n->nodeType != ::Xml_obj::Document)) {
HXLINE( 148)						_hx_tmp15 = (n->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 148)						_hx_tmp15 = true;
            					}
HXDLIN( 148)					if (_hx_tmp15) {
HXLINE( 148)						HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + n->nodeType));
            					}
HXDLIN( 148)					return n->nodeValue;
            				}
            			}
HXLINE( 150)			::String _hx_tmp16 = this->get_name();
HXDLIN( 150)			HX_STACK_DO_THROW((_hx_tmp16 + HX_(" does not only have data",82,e2,30,ae)));
            		}
HXLINE( 152)		Bool _hx_tmp17;
HXDLIN( 152)		if ((v->nodeType != ::Xml_obj::PCData)) {
HXLINE( 152)			_hx_tmp17 = (v->nodeType != ::Xml_obj::CData);
            		}
            		else {
HXLINE( 152)			_hx_tmp17 = false;
            		}
HXDLIN( 152)		if (_hx_tmp17) {
HXLINE( 153)			::String _hx_tmp18 = this->get_name();
HXDLIN( 153)			HX_STACK_DO_THROW((_hx_tmp18 + HX_(" does not have data",0e,54,3b,f4)));
            		}
HXLINE( 154)		Bool _hx_tmp19;
HXDLIN( 154)		if ((v->nodeType != ::Xml_obj::Document)) {
HXLINE( 154)			_hx_tmp19 = (v->nodeType == ::Xml_obj::Element);
            		}
            		else {
HXLINE( 154)			_hx_tmp19 = true;
            		}
HXDLIN( 154)		if (_hx_tmp19) {
HXLINE( 154)			HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + v->nodeType));
            		}
HXDLIN( 154)		return v->nodeValue;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_innerData,return )

 ::Dynamic Fast_obj::get_elements(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,it) HXARGC(0)
            		 ::haxe::xml::Fast _hx_run(){
            			HX_STACK_FRAME("haxe.xml.Fast","get_elements",0x6707fc93,"haxe.xml.Fast.get_elements","/usr/local/lib/haxe/std/haxe/xml/Fast.hx",168,0x1680b11e)
HXLINE( 169)			HX_VARI(  ::Xml,x) = ( ( ::Xml)( ::Dynamic(it->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 170)			Bool _hx_tmp = hx::IsNull( x );
HXDLIN( 170)			if (_hx_tmp) {
HXLINE( 171)				return null();
            			}
HXLINE( 172)			return  ::haxe::xml::Fast_obj::__new(x);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACK_FRAME("haxe.xml.Fast","get_elements",0x6707fc93,"haxe.xml.Fast.get_elements","/usr/local/lib/haxe/std/haxe/xml/Fast.hx",164,0x1680b11e)
            	HX_STACK_THIS(this)
HXLINE( 165)		HX_VARI(  ::Dynamic,it) = this->x->elements();
HXLINE( 166)		return  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("hasNext",6d,a5,46,18), ::Dynamic(it->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)))
            			->setFixed(1,HX_("next",f3,84,02,49), ::Dynamic(new _hx_Closure_0(it))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_elements,return )


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

hx::Val Fast_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return hx::Val( att); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return hx::Val( node); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return hx::Val( nodes); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hx::Val( hasNode); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_elements") ) { return hx::Val( get_elements_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_innerData") ) { return hx::Val( get_innerData_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Fast_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast<  ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast<  ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast<  ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast<  ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("att","\x21","\x00","\x4a","\x00"));
	outFields->push(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Fast_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_HCSTRING("att","\x21","\x00","\x4a","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Fast_obj_sStaticStorageInfo = 0;
#endif

static ::String Fast_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("att","\x21","\x00","\x4a","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_innerData","\xb7","\x0a","\x44","\xeb"),
	HX_HCSTRING("get_elements","\x40","\xea","\xdd","\x38"),
	::String(null()) };

static void Fast_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Fast_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

hx::Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Fast","\xfb","\x99","\x91","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Fast_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Fast_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fast_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Fast_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Fast_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Fast_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
