// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#define INCLUDED_flixel_system_debug_completion_CompletionList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListEntry)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListScrollBar)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES CompletionList_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef CompletionList_obj OBJ_;
		CompletionList_obj();

	public:
		void __construct(Int capacity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.completion.CompletionList"); }
		static hx::ObjectPtr< CompletionList_obj > __new(Int capacity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompletionList","\xba","\x65","\xb3","\xcd"); }

		 ::Dynamic completed;
		 ::Dynamic &completed_dyn() { return completed;}
		 ::Dynamic selectionChanged;
		 ::Dynamic &selectionChanged_dyn() { return selectionChanged;}
		 ::Dynamic closed;
		 ::Dynamic &closed_dyn() { return closed;}
		::String filter;
		::Array< ::String > items;
		::Array< ::Dynamic> entries;
		::Array< ::String > originalItems;
		Int selectedIndex;
		Int lowerVisibleIndex;
		Int upperVisibleIndex;
		 ::flixel::_hx_system::debug::completion::CompletionListScrollBar scrollBar;
		Int actualHeight;
		void show(Float x,::Array< ::String > items);
		::Dynamic show_dyn();

		void setY(Float y);
		::Dynamic setY_dyn();

		void close();
		::Dynamic close_dyn();

		void createPopupEntries(Int amount);
		::Dynamic createPopupEntries_dyn();

		void createScrollBar();
		::Dynamic createScrollBar_dyn();

		void onKeyDown( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void updateIndices(Int modifier);
		::Dynamic updateIndices_dyn();

		Int bound(Int index);
		::Dynamic bound_dyn();

		void updateEntries();
		::Dynamic updateEntries_dyn();

		void updateLabels();
		::Dynamic updateLabels_dyn();

		void updateSelectedItem();
		::Dynamic updateSelectedItem_dyn();

		void setItems(::Array< ::String > items);
		::Dynamic setItems_dyn();

		::Array< ::String > filterItems(::String filter);
		::Dynamic filterItems_dyn();

		::Array< ::String > sortItems(::String filter,::Array< ::String > items);
		::Dynamic sortItems_dyn();

		Int startsWithExt(::String s,::String start);
		::Dynamic startsWithExt_dyn();

		::String set_filter(::String filter);
		::Dynamic set_filter_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionList */ 