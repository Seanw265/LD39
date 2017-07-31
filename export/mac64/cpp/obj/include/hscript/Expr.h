// Generated by Haxe 3.3.0
#ifndef INCLUDED_hscript_Expr
#define INCLUDED_hscript_Expr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Expr)
namespace hscript{


class Expr_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Expr_obj OBJ_;

	public:
		Expr_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.Expr","\x30","\x4b","\xdc","\x98"); }
		::String __ToString() const { return HX_HCSTRING("Expr.","\x39","\x01","\x4d","\x0a") + _hx_tag; }

		static ::hscript::Expr EArray(::hx::EnumBase e,::hx::EnumBase index);
		static ::Dynamic EArray_dyn();
		static ::hscript::Expr EArrayDecl(::Array< ::Dynamic> e);
		static ::Dynamic EArrayDecl_dyn();
		static ::hscript::Expr EBinop(::String op,::hx::EnumBase e1,::hx::EnumBase e2);
		static ::Dynamic EBinop_dyn();
		static ::hscript::Expr EBlock(::Array< ::Dynamic> e);
		static ::Dynamic EBlock_dyn();
		static ::hscript::Expr EBreak;
		static inline ::hscript::Expr EBreak_dyn() { return EBreak; }
		static ::hscript::Expr ECall(::hx::EnumBase e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::hscript::Expr EConst(::hx::EnumBase c);
		static ::Dynamic EConst_dyn();
		static ::hscript::Expr EContinue;
		static inline ::hscript::Expr EContinue_dyn() { return EContinue; }
		static ::hscript::Expr EDoWhile(::hx::EnumBase cond,::hx::EnumBase e);
		static ::Dynamic EDoWhile_dyn();
		static ::hscript::Expr EField(::hx::EnumBase e,::String f);
		static ::Dynamic EField_dyn();
		static ::hscript::Expr EFor(::String v,::hx::EnumBase it,::hx::EnumBase e);
		static ::Dynamic EFor_dyn();
		static ::hscript::Expr EFunction(::Array< ::Dynamic> args,::hx::EnumBase e,::String name,::hx::EnumBase ret);
		static ::Dynamic EFunction_dyn();
		static ::hscript::Expr EIdent(::String v);
		static ::Dynamic EIdent_dyn();
		static ::hscript::Expr EIf(::hx::EnumBase cond,::hx::EnumBase e1,::hx::EnumBase e2);
		static ::Dynamic EIf_dyn();
		static ::hscript::Expr EMeta(::String name,::Array< ::Dynamic> args,::hx::EnumBase e);
		static ::Dynamic EMeta_dyn();
		static ::hscript::Expr ENew(::String cl,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::hscript::Expr EObject(::Array< ::Dynamic> fl);
		static ::Dynamic EObject_dyn();
		static ::hscript::Expr EParent(::hx::EnumBase e);
		static ::Dynamic EParent_dyn();
		static ::hscript::Expr EReturn(::hx::EnumBase e);
		static ::Dynamic EReturn_dyn();
		static ::hscript::Expr ESwitch(::hx::EnumBase e,::Array< ::Dynamic> cases,::hx::EnumBase defaultExpr);
		static ::Dynamic ESwitch_dyn();
		static ::hscript::Expr ETernary(::hx::EnumBase cond,::hx::EnumBase e1,::hx::EnumBase e2);
		static ::Dynamic ETernary_dyn();
		static ::hscript::Expr EThrow(::hx::EnumBase e);
		static ::Dynamic EThrow_dyn();
		static ::hscript::Expr ETry(::hx::EnumBase e,::String v,::hx::EnumBase t,::hx::EnumBase ecatch);
		static ::Dynamic ETry_dyn();
		static ::hscript::Expr EUnop(::String op,Bool prefix,::hx::EnumBase e);
		static ::Dynamic EUnop_dyn();
		static ::hscript::Expr EVar(::String n,::hx::EnumBase t,::hx::EnumBase e);
		static ::Dynamic EVar_dyn();
		static ::hscript::Expr EWhile(::hx::EnumBase cond,::hx::EnumBase e);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Expr */ 
