// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace util{

void FlxPool_flixel_math_FlxVector_obj::__construct(hx::Class classObj){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","new",0xff321b68,"flixel.util.FlxPool_flixel_math_FlxVector.new","flixel/util/FlxPool.hx",12,0xdd4de86a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(classObj,"classObj")
HXLINE(  23)		this->_count = (int)0;
HXLINE(  16)		this->_pool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->_class = classObj;
            	}

Dynamic FlxPool_flixel_math_FlxVector_obj::__CreateEmpty() { return new FlxPool_flixel_math_FlxVector_obj; }

hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > FlxPool_flixel_math_FlxVector_obj::__new(hx::Class classObj)
{
	hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > _hx_result = new FlxPool_flixel_math_FlxVector_obj();
	_hx_result->__construct(classObj);
	return _hx_result;
}

Dynamic FlxPool_flixel_math_FlxVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > _hx_result = new FlxPool_flixel_math_FlxVector_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

static ::flixel::util::IFlxPool_obj _hx_flixel_util_FlxPool_flixel_math_FlxVector__hx_flixel_util_IFlxPool= {
	( void (hx::Object::*)(Int))&::flixel::util::FlxPool_flixel_math_FlxVector_obj::preAllocate,
	( ::cpp::VirtualArray (hx::Object::*)())&::flixel::util::FlxPool_flixel_math_FlxVector_obj::clear_615cc599,
};

::cpp::VirtualArray FlxPool_flixel_math_FlxVector_obj::clear_615cc599() {
			return clear();
}
void *FlxPool_flixel_math_FlxVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x5a90a383: return &_hx_flixel_util_FlxPool_flixel_math_FlxVector__hx_flixel_util_IFlxPool;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::math::FlxVector FlxPool_flixel_math_FlxVector_obj::get(){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get",0xff2ccb9e,"flixel.util.FlxPool_flixel_math_FlxVector.get","flixel/util/FlxPool.hx",31,0xdd4de86a)
            	HX_STACK_THIS(this)
HXLINE(  32)		Bool _hx_tmp = (this->_count == (int)0);
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			return ( ( ::flixel::math::FlxVector)(::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0))) );
            		}
HXLINE(  36)		return this->_pool->__get(--this->_count).StaticCast<  ::flixel::math::FlxVector >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get,return )

void FlxPool_flixel_math_FlxVector_obj::put( ::flixel::math::FlxVector obj){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","put",0xff33add7,"flixel.util.FlxPool_flixel_math_FlxVector.put","flixel/util/FlxPool.hx",42,0xdd4de86a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(obj,"obj")
HXLINE(  42)		Bool _hx_tmp = hx::IsNotNull( obj );
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  44)			HX_VARI( Int,i) = this->_pool->indexOf(obj,null());
HXLINE(  46)			Bool _hx_tmp1;
HXDLIN(  46)			if ((i != (int)-1)) {
HXLINE(  46)				_hx_tmp1 = (i >= this->_count);
            			}
            			else {
HXLINE(  46)				_hx_tmp1 = true;
            			}
HXDLIN(  46)			if (_hx_tmp1) {
HXLINE(  48)				obj->destroy();
HXLINE(  49)				this->_pool[this->_count++] = obj;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,put,(void))

void FlxPool_flixel_math_FlxVector_obj::putUnsafe( ::flixel::math::FlxVector obj){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","putUnsafe",0x73f1215d,"flixel.util.FlxPool_flixel_math_FlxVector.putUnsafe","flixel/util/FlxPool.hx",56,0xdd4de86a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(obj,"obj")
HXLINE(  56)		Bool _hx_tmp = hx::IsNotNull( obj );
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  58)			obj->destroy();
HXLINE(  59)			this->_pool[this->_count++] = obj;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,putUnsafe,(void))

void FlxPool_flixel_math_FlxVector_obj::preAllocate(Int numObjects){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","preAllocate",0x047fdd08,"flixel.util.FlxPool_flixel_math_FlxVector.preAllocate","flixel/util/FlxPool.hx",65,0xdd4de86a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(numObjects,"numObjects")
HXLINE(  65)		while(true){
HXLINE(  65)			Int _hx_tmp = numObjects--;
HXDLIN(  65)			if (!((_hx_tmp > (int)0))) {
HXLINE(  65)				goto _hx_goto_0;
            			}
HXLINE(  67)			Int _hx_tmp1 = this->_count++;
HXDLIN(  67)			 ::flixel::math::FlxVector _hx_tmp2 = ( ( ::flixel::math::FlxVector)(::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0))) );
HXDLIN(  67)			this->_pool[_hx_tmp1] = _hx_tmp2;
            		}
            		_hx_goto_0:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,preAllocate,(void))

::Array< ::Dynamic> FlxPool_flixel_math_FlxVector_obj::clear(){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","clear",0x73a88e95,"flixel.util.FlxPool_flixel_math_FlxVector.clear","flixel/util/FlxPool.hx",72,0xdd4de86a)
            	HX_STACK_THIS(this)
HXLINE(  73)		this->_count = (int)0;
HXLINE(  74)		HX_VARI( ::Array< ::Dynamic>,oldPool) = this->_pool;
HXLINE(  75)		this->_pool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  76)		return oldPool;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,clear,return )

Int FlxPool_flixel_math_FlxVector_obj::get_length(){
            	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get_length",0xd973aaa7,"flixel.util.FlxPool_flixel_math_FlxVector.get_length","flixel/util/FlxPool.hx",81,0xdd4de86a)
            	HX_STACK_THIS(this)
HXLINE(  81)		return this->_count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get_length,return )


FlxPool_flixel_math_FlxVector_obj::FlxPool_flixel_math_FlxVector_obj()
{
}

void FlxPool_flixel_math_FlxVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_math_FlxVector);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_math_FlxVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

hx::Val FlxPool_flixel_math_FlxVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		if (HX_FIELD_EQ(inName,"put") ) { return hx::Val( put_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return hx::Val( _pool); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"_class") ) { return hx::Val( _class); }
		if (HX_FIELD_EQ(inName,"_count") ) { return hx::Val( _count); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return hx::Val( putUnsafe_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return hx::Val( preAllocate_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxPool_flixel_math_FlxVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_math_FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxPool_flixel_math_FlxVector_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_pool),HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{hx::fsInt,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxPool_flixel_math_FlxVector_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPool_flixel_math_FlxVector_obj_sMemberFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"),
	HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putUnsafe","\x55","\xe0","\x1c","\xe4"),
	HX_HCSTRING("preAllocate","\x00","\x4a","\x53","\xa6"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void FlxPool_flixel_math_FlxVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPool_flixel_math_FlxVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPool_flixel_math_FlxVector_obj::__mClass;

void FlxPool_flixel_math_FlxVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPool_flixel_math_FlxVector","\x76","\x87","\xde","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxPool_flixel_math_FlxVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxPool_flixel_math_FlxVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPool_flixel_math_FlxVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPool_flixel_math_FlxVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPool_flixel_math_FlxVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPool_flixel_math_FlxVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
