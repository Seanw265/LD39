// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#include <flixel/system/debug/stats/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{

void StatsGraph_obj::__construct(Int X,Int Y,Int Width,Int Height,Int GraphColor,::String Unit,hx::Null< Int >  __o_LabelWidth,::String Label){
Int LabelWidth = __o_LabelWidth.Default(45);
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","new",0x328f8738,"flixel.system.debug.stats.StatsGraph.new","flixel/system/debug/stats/StatsGraph.hx",16,0xbadd4916)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
            	HX_STACK_ARG(GraphColor,"GraphColor")
            	HX_STACK_ARG(Unit,"Unit")
            	HX_STACK_ARG(LabelWidth,"LabelWidth")
            	HX_STACK_ARG(Label,"Label")
HXLINE(  32)		this->history = ::Array_obj< Float >::__new(0);
HXLINE(  28)		this->maxValue = ((Float)5e-324);
HXLINE(  27)		this->minValue = ((Float)1.79e+308);
HXLINE(  43)		super::__construct();
HXLINE(  44)		this->set_x(X);
HXLINE(  45)		this->set_y(Y);
HXLINE(  46)		this->_width = (Width - LabelWidth);
HXLINE(  47)		this->_height = Height;
HXLINE(  48)		this->graphColor = GraphColor;
HXLINE(  49)		this->_unit = Unit;
HXLINE(  50)		this->_labelWidth = LabelWidth;
HXLINE(  51)		::String _hx_tmp;
HXDLIN(  51)		Bool _hx_tmp1 = hx::IsNull( Label );
HXDLIN(  51)		if (_hx_tmp1) {
HXLINE(  51)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  51)			_hx_tmp = Label;
            		}
HXDLIN(  51)		this->_label = _hx_tmp;
HXLINE(  53)		this->_axis =  ::openfl::display::Shape_obj::__new();
HXLINE(  54)		Int _hx_tmp2 = (this->_labelWidth + (int)10);
HXDLIN(  54)		this->_axis->set_x(_hx_tmp2);
HXLINE(  56)		this->maxLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((int)0,(int)0,(int)-1426063361,(int)11);
HXLINE(  57)		Float _hx_tmp3 = (((Float)this->_height / (Float)(int)2) - ((Float)5.5));
HXDLIN(  57)		this->curLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((int)0,_hx_tmp3,this->graphColor,(int)11);
HXLINE(  58)		Int _hx_tmp4 = (this->_height - (int)11);
HXDLIN(  58)		this->minLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((int)0,_hx_tmp4,(int)-1426063361,(int)11);
HXLINE(  60)		Int _hx_tmp5 = (this->_labelWidth + (int)20);
HXDLIN(  60)		Float _hx_tmp6 = (((Float)this->_height / (Float)(int)2) - ((Float)5.5));
HXDLIN(  60)		this->avgLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(_hx_tmp5,(_hx_tmp6 - (int)10),(int)-1426063361,(int)11);
HXLINE(  61)		this->avgLabel->set_width(this->_width);
HXLINE(  62)		this->avgLabel->get_defaultTextFormat()->align = (int)0;
HXLINE(  63)		this->avgLabel->set_alpha(((Float)0.5));
HXLINE(  65)		this->addChild(this->_axis);
HXLINE(  66)		this->addChild(this->maxLabel);
HXLINE(  67)		this->addChild(this->curLabel);
HXLINE(  68)		this->addChild(this->minLabel);
HXLINE(  69)		this->addChild(this->avgLabel);
HXLINE(  71)		this->drawAxes();
            	}

Dynamic StatsGraph_obj::__CreateEmpty() { return new StatsGraph_obj; }

hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__new(Int X,Int Y,Int Width,Int Height,Int GraphColor,::String Unit,hx::Null< Int >  __o_LabelWidth,::String Label)
{
	hx::ObjectPtr< StatsGraph_obj > _hx_result = new StatsGraph_obj();
	_hx_result->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return _hx_result;
}

Dynamic StatsGraph_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StatsGraph_obj > _hx_result = new StatsGraph_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

void StatsGraph_obj::drawAxes(){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","drawAxes",0x7d893d71,"flixel.system.debug.stats.StatsGraph.drawAxes","flixel/system/debug/stats/StatsGraph.hx",78,0xbadd4916)
            	HX_STACK_THIS(this)
HXLINE(  79)		HX_VARI(  ::openfl::display::Graphics,gfx) = this->_axis->get_graphics();
HXLINE(  80)		gfx->clear();
HXLINE(  81)		gfx->lineStyle((int)1,(int)16777215,((Float)0.5),null(),null(),null(),null(),null());
HXLINE(  84)		gfx->moveTo((int)0,(int)0);
HXLINE(  85)		gfx->lineTo((int)0,this->_height);
HXLINE(  88)		gfx->moveTo((int)0,this->_height);
HXLINE(  89)		gfx->lineTo(this->_width,this->_height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawAxes,(void))

void StatsGraph_obj::drawGraph(){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","drawGraph",0xcaf9ad82,"flixel.system.debug.stats.StatsGraph.drawGraph","flixel/system/debug/stats/StatsGraph.hx",96,0xbadd4916)
            	HX_STACK_THIS(this)
HXLINE(  97)		HX_VARI(  ::openfl::display::Graphics,gfx) = this->get_graphics();
HXLINE(  98)		gfx->clear();
HXLINE(  99)		gfx->lineStyle((int)1,this->graphColor,(int)1,null(),null(),null(),null(),null());
HXLINE( 101)		HX_VARI( Float,inc) = ((Float)this->_width / (Float)(int)29);
HXLINE( 102)		Float _hx_tmp = (this->maxValue - this->minValue);
HXDLIN( 102)		Float _hx_tmp1 = (this->maxValue * ((Float)0.1));
HXDLIN( 102)		HX_VARI( Float,range) = ::Math_obj::max(_hx_tmp,_hx_tmp1);
HXLINE( 103)		Float _hx_tmp2 = this->_axis->get_x();
HXDLIN( 103)		HX_VARI( Float,graphX) = (_hx_tmp2 + (int)1);
HXLINE( 105)		{
HXLINE( 105)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 105)			HX_VARI( Int,_g) = this->history->length;
HXDLIN( 105)			while((_g1 < _g)){
HXLINE( 105)				HX_VARI( Int,i) = _g1++;
HXLINE( 109)				HX_VARI( Float,pointY) = (((-(((Float)(this->history->__get(i) - this->minValue) / (Float)range)) * this->_height) - (int)1) + this->_height);
HXLINE( 110)				if ((i == (int)0)) {
HXLINE( 111)					Float _hx_tmp3 = this->_axis->get_y();
HXDLIN( 111)					gfx->moveTo(graphX,(_hx_tmp3 + pointY));
            				}
HXLINE( 112)				gfx->lineTo((graphX + (i * inc)),pointY);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawGraph,(void))

void StatsGraph_obj::update(Float Value){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","update",0x0745a631,"flixel.system.debug.stats.StatsGraph.update","flixel/system/debug/stats/StatsGraph.hx",117,0xbadd4916)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE( 118)		this->history->unshift(Value);
HXLINE( 119)		Bool _hx_tmp = (this->history->length > (int)30);
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 120)			this->history->pop();
            		}
HXLINE( 123)		this->maxValue = ::Math_obj::max(this->maxValue,Value);
HXLINE( 124)		this->minValue = ::Math_obj::min(this->minValue,Value);
HXLINE( 126)		::String _hx_tmp1 = this->formatValue(this->minValue);
HXDLIN( 126)		this->minLabel->set_text(_hx_tmp1);
HXLINE( 127)		::String _hx_tmp2 = this->formatValue(Value);
HXDLIN( 127)		this->curLabel->set_text(_hx_tmp2);
HXLINE( 128)		::String _hx_tmp3 = this->formatValue(this->maxValue);
HXDLIN( 128)		this->maxLabel->set_text(_hx_tmp3);
HXLINE( 130)		::String _hx_tmp4 = (this->_label + HX_("\nAvg: ",8e,d8,ea,ba));
HXDLIN( 130)		Float _hx_tmp5 = this->average();
HXDLIN( 130)		::String _hx_tmp6 = this->formatValue(_hx_tmp5);
HXDLIN( 130)		this->avgLabel->set_text((_hx_tmp4 + _hx_tmp6));
HXLINE( 132)		this->drawGraph();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,update,(void))

::String StatsGraph_obj::formatValue(Float value){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","formatValue",0xec642792,"flixel.system.debug.stats.StatsGraph.formatValue","flixel/system/debug/stats/StatsGraph.hx",137,0xbadd4916)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 137)		Float _hx_tmp = ::flixel::math::FlxMath_obj::roundDecimal(value,(int)1);
HXDLIN( 137)		return ((_hx_tmp + HX_(" ",20,00,00,00)) + this->_unit);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,formatValue,return )

Float StatsGraph_obj::average(){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","average",0x1ab77435,"flixel.system.debug.stats.StatsGraph.average","flixel/system/debug/stats/StatsGraph.hx",141,0xbadd4916)
            	HX_STACK_THIS(this)
HXLINE( 142)		HX_VARI( Float,sum) = (int)0;
HXLINE( 143)		{
HXLINE( 143)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 143)			HX_VARI( ::Array< Float >,_g1) = this->history;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				HX_VARI( Float,value) = _g1->__get(_g);
HXDLIN( 143)				++_g;
HXLINE( 144)				hx::AddEq(sum,value);
            			}
            		}
HXLINE( 145)		return ((Float)sum / (Float)this->history->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,average,return )

void StatsGraph_obj::destroy(){
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","destroy",0xdc622fd2,"flixel.system.debug.stats.StatsGraph.destroy","flixel/system/debug/stats/StatsGraph.hx",149,0xbadd4916)
            	HX_STACK_THIS(this)
HXLINE( 150)		this->_axis = ( ( ::openfl::display::Shape)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_axis)) );
HXLINE( 151)		this->minLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->minLabel)) );
HXLINE( 152)		this->curLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->curLabel)) );
HXLINE( 153)		this->maxLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->maxLabel)) );
HXLINE( 154)		this->avgLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->avgLabel)) );
HXLINE( 155)		this->history = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,destroy,(void))

Int StatsGraph_obj::AXIS_COLOR;

Float StatsGraph_obj::AXIS_ALPHA;

Int StatsGraph_obj::HISTORY_MAX;


StatsGraph_obj::StatsGraph_obj()
{
}

void StatsGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StatsGraph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return hx::Val( _axis); }
		if (HX_FIELD_EQ(inName,"_unit") ) { return hx::Val( _unit); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width); }
		if (HX_FIELD_EQ(inName,"_label") ) { return hx::Val( _label); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return hx::Val( history); }
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height); }
		if (HX_FIELD_EQ(inName,"average") ) { return hx::Val( average_dyn()); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return hx::Val( minLabel); }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return hx::Val( curLabel); }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return hx::Val( maxLabel); }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return hx::Val( avgLabel); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return hx::Val( minValue); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return hx::Val( maxValue); }
		if (HX_FIELD_EQ(inName,"drawAxes") ) { return hx::Val( drawAxes_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return hx::Val( drawGraph_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return hx::Val( graphColor); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return hx::Val( _labelWidth); }
		if (HX_FIELD_EQ(inName,"formatValue") ) { return hx::Val( formatValue_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StatsGraph_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"));
	outFields->push(HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"));
	outFields->push(HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"));
	outFields->push(HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"));
	outFields->push(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"));
	outFields->push(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"));
	outFields->push(HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"));
	outFields->push(HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StatsGraph_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,minLabel),HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,curLabel),HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,maxLabel),HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(StatsGraph_obj,avgLabel),HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,minValue),HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,maxValue),HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,graphColor),HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(StatsGraph_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(StatsGraph_obj,_axis),HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_unit),HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_labelWidth),HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo StatsGraph_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &StatsGraph_obj::AXIS_COLOR,HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4")},
	{hx::fsFloat,(void *) &StatsGraph_obj::AXIS_ALPHA,HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc")},
	{hx::fsInt,(void *) &StatsGraph_obj::HISTORY_MAX,HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String StatsGraph_obj_sMemberFields[] = {
	HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"),
	HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"),
	HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"),
	HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"),
	HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"),
	HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"),
	HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"),
	HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("drawAxes","\x49","\xc3","\xe2","\x54"),
	HX_HCSTRING("drawGraph","\xaa","\x44","\xf5","\x61"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("formatValue","\xba","\xd8","\xd1","\xea"),
	HX_HCSTRING("average","\x5d","\x71","\xdb","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void StatsGraph_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StatsGraph_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

hx::Class StatsGraph_obj::__mClass;

static ::String StatsGraph_obj_sStaticFields[] = {
	HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4"),
	HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc"),
	HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58"),
	::String(null())
};

void StatsGraph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.stats.StatsGraph","\x46","\xcb","\x85","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StatsGraph_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StatsGraph_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StatsGraph_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatsGraph_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StatsGraph_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StatsGraph_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StatsGraph_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StatsGraph_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",18,0xbadd4916)
HXLINE(  18)		AXIS_COLOR = (int)16777215;
            	}
{
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",19,0xbadd4916)
HXLINE(  19)		AXIS_ALPHA = ((Float)0.5);
            	}
{
            	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",20,0xbadd4916)
HXLINE(  20)		HISTORY_MAX = (int)30;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats