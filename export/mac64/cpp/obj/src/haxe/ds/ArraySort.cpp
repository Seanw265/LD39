// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif

namespace haxe{
namespace ds{

void ArraySort_obj::__construct() { }

Dynamic ArraySort_obj::__CreateEmpty() { return new ArraySort_obj; }

hx::ObjectPtr< ArraySort_obj > ArraySort_obj::__new()
{
	hx::ObjectPtr< ArraySort_obj > _hx_result = new ArraySort_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ArraySort_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArraySort_obj > _hx_result = new ArraySort_obj();
	_hx_result->__construct();
	return _hx_result;
}

void ArraySort_obj::sort(::cpp::VirtualArray a, ::Dynamic cmp){
            	HX_STACK_FRAME("haxe.ds.ArraySort","sort",0xa0749d6c,"haxe.ds.ArraySort.sort","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",44,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
HXLINE(  44)		::haxe::ds::ArraySort_obj::rec(a,cmp,(int)0,a->get_length());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,sort,(void))

void ArraySort_obj::rec(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to){
            	HX_STACK_FRAME("haxe.ds.ArraySort","rec",0xd9af5f02,"haxe.ds.ArraySort.rec","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",47,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
            	HX_STACK_ARG(from,"from")
            	HX_STACK_ARG(to,"to")
HXLINE(  48)		HX_VARI( Int,middle) = ((int)(from + to) >> (int)(int)1);
HXLINE(  49)		if (((to - from) < (int)12)) {
HXLINE(  50)			if ((to <= from)) {
HXLINE(  50)				return;
            			}
HXLINE(  51)			{
HXLINE(  51)				HX_VARI( Int,_g1) = (from + (int)1);
HXDLIN(  51)				while((_g1 < to)){
HXLINE(  51)					HX_VARI( Int,i) = _g1++;
HXLINE(  52)					HX_VARI( Int,j) = i;
HXLINE(  53)					while((j > from)){
HXLINE(  54)						 ::Dynamic _hx_tmp = a->__get(j);
HXDLIN(  54)						 ::Dynamic _hx_tmp1 = a->__get((j - (int)1));
HXDLIN(  54)						Bool _hx_tmp2 = (( (Int)(cmp(_hx_tmp,_hx_tmp1)) ) < (int)0);
HXDLIN(  54)						if (_hx_tmp2) {
HXLINE(  55)							::haxe::ds::ArraySort_obj::swap(a,(j - (int)1),j);
            						}
            						else {
HXLINE(  57)							goto _hx_goto_1;
            						}
HXLINE(  58)						--j;
            					}
            					_hx_goto_1:;
            				}
            			}
HXLINE(  61)			return;
            		}
HXLINE(  63)		::haxe::ds::ArraySort_obj::rec(a,cmp,from,middle);
HXLINE(  64)		::haxe::ds::ArraySort_obj::rec(a,cmp,middle,to);
HXLINE(  65)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,from,middle,to,(middle - from),(to - middle));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArraySort_obj,rec,(void))

void ArraySort_obj::doMerge(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int pivot,Int to,Int len1,Int len2){
            	HX_STACK_FRAME("haxe.ds.ArraySort","doMerge",0x66c5c9df,"haxe.ds.ArraySort.doMerge","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",68,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
            	HX_STACK_ARG(from,"from")
            	HX_STACK_ARG(pivot,"pivot")
            	HX_STACK_ARG(to,"to")
            	HX_STACK_ARG(len1,"len1")
            	HX_STACK_ARG(len2,"len2")
HXLINE(  69)		HX_VAR( Int,first_cut);
HXDLIN(  69)		HX_VAR( Int,second_cut);
HXDLIN(  69)		HX_VAR( Int,len11);
HXDLIN(  69)		HX_VAR( Int,len22);
HXDLIN(  69)		HX_VAR( Int,new_mid);
HXLINE(  70)		Bool _hx_tmp;
HXDLIN(  70)		if ((len1 != (int)0)) {
HXLINE(  70)			_hx_tmp = (len2 == (int)0);
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return;
            		}
HXLINE(  72)		if (((len1 + len2) == (int)2)) {
HXLINE(  73)			 ::Dynamic _hx_tmp1 = a->__get(pivot);
HXDLIN(  73)			 ::Dynamic _hx_tmp2 = a->__get(from);
HXDLIN(  73)			Int _hx_tmp3 = ( (Int)(cmp(_hx_tmp1,_hx_tmp2)) );
HXDLIN(  73)			if ((_hx_tmp3 < (int)0)) {
HXLINE(  74)				::haxe::ds::ArraySort_obj::swap(a,pivot,from);
            			}
HXLINE(  75)			return;
            		}
HXLINE(  77)		if ((len1 > len2)) {
HXLINE(  78)			len11 = ((int)len1 >> (int)(int)1);
HXLINE(  79)			first_cut = (from + len11);
HXLINE(  80)			second_cut = ::haxe::ds::ArraySort_obj::lower(a,cmp,pivot,to,first_cut);
HXLINE(  81)			len22 = (second_cut - pivot);
            		}
            		else {
HXLINE(  83)			len22 = ((int)len2 >> (int)(int)1);
HXLINE(  84)			second_cut = (pivot + len22);
HXLINE(  85)			first_cut = ::haxe::ds::ArraySort_obj::upper(a,cmp,from,pivot,second_cut);
HXLINE(  86)			len11 = (first_cut - from);
            		}
HXLINE(  88)		::haxe::ds::ArraySort_obj::rotate(a,cmp,first_cut,pivot,second_cut);
HXLINE(  89)		new_mid = (first_cut + len22);
HXLINE(  90)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,from,first_cut,new_mid,len11,len22);
HXLINE(  91)		::haxe::ds::ArraySort_obj::doMerge(a,cmp,new_mid,second_cut,to,(len1 - len11),(len2 - len22));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ArraySort_obj,doMerge,(void))

void ArraySort_obj::rotate(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int mid,Int to){
            	HX_STACK_FRAME("haxe.ds.ArraySort","rotate",0xb7d0dbe9,"haxe.ds.ArraySort.rotate","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",94,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
            	HX_STACK_ARG(from,"from")
            	HX_STACK_ARG(mid,"mid")
            	HX_STACK_ARG(to,"to")
HXLINE(  95)		HX_VAR( Int,n);
HXLINE(  96)		Bool _hx_tmp;
HXDLIN(  96)		if ((from != mid)) {
HXLINE(  96)			_hx_tmp = (mid == to);
            		}
            		else {
HXLINE(  96)			_hx_tmp = true;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  96)			return;
            		}
HXLINE(  97)		n = ::haxe::ds::ArraySort_obj::gcd((to - from),(mid - from));
HXLINE(  98)		while(true){
HXLINE(  98)			Int _hx_tmp1 = n--;
HXDLIN(  98)			if (!((_hx_tmp1 != (int)0))) {
HXLINE(  98)				goto _hx_goto_2;
            			}
HXLINE(  99)			HX_VARI(  ::Dynamic,val) = a->__get((from + n));
HXLINE( 100)			HX_VARI( Int,shift) = (mid - from);
HXLINE( 101)			HX_VARI( Int,p1) = (from + n);
HXDLIN( 101)			HX_VARI( Int,p2) = ((from + n) + shift);
HXLINE( 102)			while((p2 != (from + n))){
HXLINE( 103)				 ::Dynamic _hx_tmp2 = a->__get(p2);
HXDLIN( 103)				a->set(p1,_hx_tmp2);
HXLINE( 104)				p1 = p2;
HXLINE( 105)				Bool _hx_tmp3 = ((to - p2) > shift);
HXDLIN( 105)				if (_hx_tmp3) {
HXLINE( 105)					hx::AddEq(p2,shift);
            				}
            				else {
HXLINE( 106)					Int _hx_tmp4 = (shift - (to - p2));
HXDLIN( 106)					p2 = (from + _hx_tmp4);
            				}
            			}
HXLINE( 108)			a->set(p1,val);
            		}
            		_hx_goto_2:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,rotate,(void))

Int ArraySort_obj::gcd(Int m,Int n){
            	HX_STACK_FRAME("haxe.ds.ArraySort","gcd",0xd9a7047a,"haxe.ds.ArraySort.gcd","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",112,0x51e3547b)
            	HX_STACK_ARG(m,"m")
            	HX_STACK_ARG(n,"n")
HXLINE( 113)		while((n != (int)0)){
HXLINE( 114)			HX_VARI( Int,t) = hx::Mod(m,n);
HXLINE( 115)			m = n;
HXLINE( 116)			n = t;
            		}
HXLINE( 118)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArraySort_obj,gcd,return )

Int ArraySort_obj::upper(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to,Int val){
            	HX_STACK_FRAME("haxe.ds.ArraySort","upper",0xed09ef94,"haxe.ds.ArraySort.upper","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",121,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
            	HX_STACK_ARG(from,"from")
            	HX_STACK_ARG(to,"to")
            	HX_STACK_ARG(val,"val")
HXLINE( 122)		HX_VARI( Int,len) = (to - from);
HXDLIN( 122)		HX_VAR( Int,half);
HXDLIN( 122)		HX_VAR( Int,mid);
HXLINE( 123)		while((len > (int)0)){
HXLINE( 124)			half = ((int)len >> (int)(int)1);
HXLINE( 125)			mid = (from + half);
HXLINE( 126)			 ::Dynamic _hx_tmp = a->__get(val);
HXDLIN( 126)			 ::Dynamic _hx_tmp1 = a->__get(mid);
HXDLIN( 126)			Int _hx_tmp2 = ( (Int)(cmp(_hx_tmp,_hx_tmp1)) );
HXDLIN( 126)			if ((_hx_tmp2 < (int)0)) {
HXLINE( 127)				len = half;
            			}
            			else {
HXLINE( 129)				from = (mid + (int)1);
HXLINE( 130)				Int _hx_tmp3 = (len - half);
HXDLIN( 130)				len = (_hx_tmp3 - (int)1);
            			}
            		}
HXLINE( 133)		return from;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,upper,return )

Int ArraySort_obj::lower(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to,Int val){
            	HX_STACK_FRAME("haxe.ds.ArraySort","lower",0xbdcad033,"haxe.ds.ArraySort.lower","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",136,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(cmp,"cmp")
            	HX_STACK_ARG(from,"from")
            	HX_STACK_ARG(to,"to")
            	HX_STACK_ARG(val,"val")
HXLINE( 137)		HX_VARI( Int,len) = (to - from);
HXDLIN( 137)		HX_VAR( Int,half);
HXDLIN( 137)		HX_VAR( Int,mid);
HXLINE( 138)		while((len > (int)0)){
HXLINE( 139)			half = ((int)len >> (int)(int)1);
HXLINE( 140)			mid = (from + half);
HXLINE( 141)			 ::Dynamic _hx_tmp = a->__get(mid);
HXDLIN( 141)			 ::Dynamic _hx_tmp1 = a->__get(val);
HXDLIN( 141)			Int _hx_tmp2 = ( (Int)(cmp(_hx_tmp,_hx_tmp1)) );
HXDLIN( 141)			if ((_hx_tmp2 < (int)0)) {
HXLINE( 142)				from = (mid + (int)1);
HXLINE( 143)				Int _hx_tmp3 = (len - half);
HXDLIN( 143)				len = (_hx_tmp3 - (int)1);
            			}
            			else {
HXLINE( 145)				len = half;
            			}
            		}
HXLINE( 147)		return from;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArraySort_obj,lower,return )

void ArraySort_obj::swap(::cpp::VirtualArray a,Int i,Int j){
            	HX_STACK_FRAME("haxe.ds.ArraySort","swap",0xa07aa0a1,"haxe.ds.ArraySort.swap","/usr/local/lib/haxe/std/haxe/ds/ArraySort.hx",150,0x51e3547b)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(i,"i")
            	HX_STACK_ARG(j,"j")
HXLINE( 151)		HX_VARI(  ::Dynamic,tmp) = a->__get(i);
HXLINE( 152)		 ::Dynamic _hx_tmp = a->__get(j);
HXDLIN( 152)		a->set(i,_hx_tmp);
HXLINE( 153)		a->set(j,tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArraySort_obj,swap,(void))


ArraySort_obj::ArraySort_obj()
{
}

bool ArraySort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rec") ) { outValue = rec_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gcd") ) { outValue = gcd_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upper") ) { outValue = upper_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lower") ) { outValue = lower_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doMerge") ) { outValue = doMerge_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArraySort_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArraySort_obj_sStaticStorageInfo = 0;
#endif

static void ArraySort_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArraySort_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArraySort_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArraySort_obj::__mClass,"__mClass");
};

#endif

hx::Class ArraySort_obj::__mClass;

static ::String ArraySort_obj_sStaticFields[] = {
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("rec","\x50","\xd9","\x56","\x00"),
	HX_HCSTRING("doMerge","\x2d","\x83","\xf3","\x38"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("gcd","\xc8","\x7e","\x4e","\x00"),
	HX_HCSTRING("upper","\x62","\x19","\x3f","\xa8"),
	HX_HCSTRING("lower","\x01","\xfa","\xff","\x78"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	::String(null())
};

void ArraySort_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.ArraySort","\x20","\xa5","\xe7","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArraySort_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArraySort_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArraySort_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArraySort_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArraySort_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArraySort_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArraySort_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
