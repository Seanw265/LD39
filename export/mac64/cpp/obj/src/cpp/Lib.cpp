// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

namespace cpp{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic Lib_obj::load(::String lib,::String prim,Int nargs){
            	HX_STACK_FRAME("cpp.Lib","load",0xd2b2dcba,"cpp.Lib.load","/usr/local/lib/haxe/std/cpp/Lib.hx",38,0x8e9e6562)
            	HX_STACK_ARG(lib,"lib")
            	HX_STACK_ARG(prim,"prim")
            	HX_STACK_ARG(nargs,"nargs")
HXLINE(  38)		return ::__loadprim(lib,prim,nargs);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

 ::Dynamic Lib_obj::loadLazy(::String lib,::String prim,Int nargs){
            	HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",69,0x8e9e6562)
            	HX_STACK_ARG(lib,"lib")
            	HX_STACK_ARG(prim,"prim")
            	HX_STACK_ARG(nargs,"nargs")
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  70)			return ::__loadprim(lib,prim,nargs);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  72)				switch((int)(nargs)){
            					case (int)0: {
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::Dynamic,e) HXARGC(0)
            						void _hx_run(){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",73,0x8e9e6562)
HXLINE(  73)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE(  73)						return  ::Dynamic(new _hx_Closure_1(e));
            					}
            					break;
            					case (int)2: {
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::Dynamic,e) HXARGC(2)
            						void _hx_run( ::Dynamic _1, ::Dynamic _2){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",74,0x8e9e6562)
            							HX_STACK_ARG(_1,"_1")
            							HX_STACK_ARG(_2,"_2")
HXLINE(  74)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC2((void))

HXLINE(  74)						return  ::Dynamic(new _hx_Closure_2(e));
            					}
            					break;
            					case (int)3: {
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3, ::Dynamic,e) HXARGC(3)
            						void _hx_run( ::Dynamic _11, ::Dynamic _21, ::Dynamic _3){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",75,0x8e9e6562)
            							HX_STACK_ARG(_11,"_11")
            							HX_STACK_ARG(_21,"_21")
            							HX_STACK_ARG(_3,"_3")
HXLINE(  75)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC3((void))

HXLINE(  75)						return  ::Dynamic(new _hx_Closure_3(e));
            					}
            					break;
            					case (int)4: {
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_4, ::Dynamic,e) HXARGC(4)
            						void _hx_run( ::Dynamic _12, ::Dynamic _22, ::Dynamic _31, ::Dynamic _4){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",76,0x8e9e6562)
            							HX_STACK_ARG(_12,"_12")
            							HX_STACK_ARG(_22,"_22")
            							HX_STACK_ARG(_31,"_31")
            							HX_STACK_ARG(_4,"_4")
HXLINE(  76)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC4((void))

HXLINE(  76)						return  ::Dynamic(new _hx_Closure_4(e));
            					}
            					break;
            					case (int)5: {
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_5, ::Dynamic,e) HXARGC(5)
            						void _hx_run( ::Dynamic _13, ::Dynamic _23, ::Dynamic _32, ::Dynamic _41, ::Dynamic _5){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",77,0x8e9e6562)
            							HX_STACK_ARG(_13,"_13")
            							HX_STACK_ARG(_23,"_23")
            							HX_STACK_ARG(_32,"_32")
            							HX_STACK_ARG(_41,"_41")
            							HX_STACK_ARG(_5,"_5")
HXLINE(  77)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC5((void))

HXLINE(  77)						return  ::Dynamic(new _hx_Closure_5(e));
            					}
            					break;
            					default:{
            						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,e) HXARGC(1)
            						void _hx_run( ::Dynamic _14){
            							HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","/usr/local/lib/haxe/std/cpp/Lib.hx",78,0x8e9e6562)
            							HX_STACK_ARG(_14,"_14")
HXLINE(  78)							HX_STACK_DO_THROW(e);
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  78)						return  ::Dynamic(new _hx_Closure_0(e));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  69)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,loadLazy,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadLazy") ) { outValue = loadLazy_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Lib_obj_sStaticStorageInfo = 0;
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadLazy","\xba","\xe1","\x4c","\xb8"),
	::String(null())
};

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Lib","\x5a","\x26","\x48","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
