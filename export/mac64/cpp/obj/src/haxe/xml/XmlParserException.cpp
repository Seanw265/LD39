// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_xml_XmlParserException
#include <haxe/xml/XmlParserException.h>
#endif

namespace haxe{
namespace xml{

void XmlParserException_obj::__construct(::String message,::String xml,Int position){
            	HX_STACK_FRAME("haxe.xml.XmlParserException","new",0xcd6fdfea,"haxe.xml.XmlParserException.new","/usr/local/lib/haxe/std/haxe/xml/Parser.hx",77,0x9bd139bb)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(xml,"xml")
            	HX_STACK_ARG(position,"position")
HXLINE(  78)		this->xml = xml;
HXLINE(  79)		this->message = message;
HXLINE(  80)		this->position = position;
HXLINE(  81)		this->lineNumber = (int)1;
HXLINE(  82)		this->positionAtLine = (int)0;
HXLINE(  84)		{
HXLINE(  84)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  84)			while((_g1 < position)){
HXLINE(  84)				HX_VARI( Int,i) = _g1++;
HXLINE(  86)				HX_VARI( Int,c) = xml.cca(i);
HXLINE(  87)				if ((c == (int)10)) {
HXLINE(  88)					this->lineNumber++;
HXLINE(  89)					this->positionAtLine = (int)0;
            				}
            				else {
HXLINE(  91)					if ((c != (int)13)) {
HXLINE(  91)						this->positionAtLine++;
            					}
            				}
            			}
            		}
            	}

Dynamic XmlParserException_obj::__CreateEmpty() { return new XmlParserException_obj; }

hx::ObjectPtr< XmlParserException_obj > XmlParserException_obj::__new(::String message,::String xml,Int position)
{
	hx::ObjectPtr< XmlParserException_obj > _hx_result = new XmlParserException_obj();
	_hx_result->__construct(message,xml,position);
	return _hx_result;
}

Dynamic XmlParserException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XmlParserException_obj > _hx_result = new XmlParserException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

::String XmlParserException_obj::toString(){
            	HX_STACK_FRAME("haxe.xml.XmlParserException","toString",0xed7c2ce2,"haxe.xml.XmlParserException.toString","/usr/local/lib/haxe/std/haxe/xml/Parser.hx",98,0x9bd139bb)
            	HX_STACK_THIS(this)
HXLINE(  98)		hx::Class _hx_tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
HXDLIN(  98)		return ((((((::Type_obj::getClassName(_hx_tmp) + HX_(": ",a6,32,00,00)) + this->message) + HX_(" at line ",df,96,71,22)) + this->lineNumber) + HX_(" char ",6a,28,1f,11)) + this->positionAtLine);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XmlParserException_obj,toString,return )


XmlParserException_obj::XmlParserException_obj()
{
}

void XmlParserException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XmlParserException);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(lineNumber,"lineNumber");
	HX_MARK_MEMBER_NAME(positionAtLine,"positionAtLine");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_END_CLASS();
}

void XmlParserException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(lineNumber,"lineNumber");
	HX_VISIT_MEMBER_NAME(positionAtLine,"positionAtLine");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(xml,"xml");
}

hx::Val XmlParserException_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return hx::Val( xml); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return hx::Val( message); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { return hx::Val( lineNumber); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionAtLine") ) { return hx::Val( positionAtLine); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val XmlParserException_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { lineNumber=inValue.Cast< Int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionAtLine") ) { positionAtLine=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XmlParserException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"));
	outFields->push(HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo XmlParserException_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(XmlParserException_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,lineNumber),HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,positionAtLine),HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a")},
	{hx::fsInt,(int)offsetof(XmlParserException_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsString,(int)offsetof(XmlParserException_obj,xml),HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *XmlParserException_obj_sStaticStorageInfo = 0;
#endif

static ::String XmlParserException_obj_sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"),
	HX_HCSTRING("positionAtLine","\x10","\x08","\x98","\x1a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void XmlParserException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlParserException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XmlParserException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlParserException_obj::__mClass,"__mClass");
};

#endif

hx::Class XmlParserException_obj::__mClass;

void XmlParserException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.XmlParserException","\xf8","\x62","\xfb","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XmlParserException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XmlParserException_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XmlParserException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XmlParserException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XmlParserException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XmlParserException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml