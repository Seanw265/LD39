// Generated by Haxe 3.3.0
#ifndef INCLUDED_UIGroup
#define INCLUDED_UIGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(ProgressBar)
HX_DECLARE_CLASS0(UIGroup)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES UIGroup_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef UIGroup_obj OBJ_;
		UIGroup_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="UIGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"UIGroup"); }
		static hx::ObjectPtr< UIGroup_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIGroup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UIGroup","\x4b","\xe8","\xcf","\x2b"); }

		 ::flixel::text::FlxText unitsDisplay;
		 ::flixel::text::FlxText cashDisplay;
		Int units;
		Int cash;
		Int day;
		 ::ProgressBar dayProgressBar;
		 ::flixel::text::FlxText placingText;
		 ::flixel::FlxSprite placingTextBackground;
		 ::flixel::text::FlxText dayDisplay;
		 ::Dynamic add( ::Dynamic _tmp_b);

		void setTotalUnits(Int val);
		::Dynamic setTotalUnits_dyn();

		void setTotalCash(Int val);
		::Dynamic setTotalCash_dyn();

		void setTime(Float val);
		::Dynamic setTime_dyn();

		void setDay(Int val);
		::Dynamic setDay_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_UIGroup */ 
