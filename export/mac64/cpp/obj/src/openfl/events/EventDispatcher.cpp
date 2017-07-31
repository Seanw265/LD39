// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

namespace openfl{
namespace events{

void EventDispatcher_obj::__construct(::Dynamic target){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",21,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
HXLINE(  21)		Bool _hx_tmp = hx::IsNotNull( target );
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  23)			this->_hx___targetDispatcher = target;
            		}
            	}

Dynamic EventDispatcher_obj::__CreateEmpty() { return new EventDispatcher_obj; }

hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::Dynamic target)
{
	hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(target);
	return _hx_result;
}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

static ::openfl::events::IEventDispatcher_obj _hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher= {
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< Bool > ,hx::Null< Int > ,hx::Null< Bool > ))&::openfl::events::EventDispatcher_obj::addEventListener,
	( Bool (hx::Object::*)( ::openfl::events::Event))&::openfl::events::EventDispatcher_obj::dispatchEvent,
	( Bool (hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::hasEventListener,
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< Bool > ))&::openfl::events::EventDispatcher_obj::removeEventListener,
	( Bool (hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::willTrigger,
};

void *EventDispatcher_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void EventDispatcher_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  __o_useCapture,hx::Null< Int >  __o_priority,hx::Null< Bool >  __o_useWeakReference){
Bool useCapture = __o_useCapture.Default(false);
Int priority = __o_priority.Default(0);
Bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACK_FRAME("openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",30,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  32)		Bool _hx_tmp = hx::IsNull( this->_hx___eventMap );
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			this->_hx___dispatching =  ::haxe::ds::StringMap_obj::__new();
HXLINE(  35)			this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__new();
HXLINE(  36)			this->_hx___newEventMap =  ::haxe::ds::StringMap_obj::__new();
            		}
HXLINE(  40)		Bool _hx_tmp1 = !(this->_hx___eventMap->exists(type));
HXDLIN(  40)		if (_hx_tmp1) {
HXLINE(  42)			HX_VARI( ::Array< ::Dynamic>,list) = ::Array_obj< ::Dynamic>::__new();
HXLINE(  43)			list->push( ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority));
HXLINE(  44)			this->_hx___eventMap->set(type,list);
            		}
            		else {
HXLINE(  48)			HX_VAR_NAME( ::Array< ::Dynamic>,list1,"list");
HXLINE(  50)			Bool _hx_tmp2 = hx::IsEq( this->_hx___dispatching->get(type),true );
HXDLIN(  50)			if (_hx_tmp2) {
HXLINE(  52)				Bool _hx_tmp3 = !(this->_hx___newEventMap->exists(type));
HXDLIN(  52)				if (_hx_tmp3) {
HXLINE(  54)					list1 = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) )->copy();
HXLINE(  55)					this->_hx___newEventMap->set(type,list1);
            				}
            				else {
HXLINE(  59)					list1 = ( (::Array< ::Dynamic>)(this->_hx___newEventMap->get(type)) );
            				}
            			}
            			else {
HXLINE(  65)				list1 = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
            			}
HXLINE(  69)			{
HXLINE(  69)				HX_VARI( Int,_g1) = (int)0;
HXDLIN(  69)				HX_VARI( Int,_g) = list1->length;
HXDLIN(  69)				while((_g1 < _g)){
HXLINE(  69)					HX_VARI( Int,i) = _g1++;
HXLINE(  71)					Bool _hx_tmp4 = ::Reflect_obj::compareMethods(list1->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->callback,listener);
HXDLIN(  71)					if (_hx_tmp4) {
HXLINE(  71)						return;
            					}
            				}
            			}
HXLINE(  75)			list1->push( ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority));
HXLINE(  76)			list1->sort(::openfl::events::EventDispatcher_obj::_hx___sortByPriority_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

Bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",83,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(  85)		Bool _hx_tmp = hx::IsNotNull( this->_hx___targetDispatcher );
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  87)			event->target = this->_hx___targetDispatcher;
            		}
            		else {
HXLINE(  91)			event->target = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  95)		return this->_hx___dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

Bool EventDispatcher_obj::hasEventListener(::String type){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",100,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 102)		Bool _hx_tmp = hx::IsNull( this->_hx___eventMap );
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 102)			return false;
            		}
HXLINE( 104)		Bool _hx_tmp1;
HXDLIN( 104)		Bool _hx_tmp2 = hx::IsEq( this->_hx___dispatching->get(type),true );
HXDLIN( 104)		if (_hx_tmp2) {
HXLINE( 104)			_hx_tmp1 = this->_hx___newEventMap->exists(type);
            		}
            		else {
HXLINE( 104)			_hx_tmp1 = false;
            		}
HXDLIN( 104)		if (_hx_tmp1) {
HXLINE( 106)			return (( (::Array< ::Dynamic>)(this->_hx___newEventMap->get(type)) )->length > (int)0);
            		}
            		else {
HXLINE( 110)			return this->_hx___eventMap->exists(type);
            		}
HXLINE( 104)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

void EventDispatcher_obj::removeEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  __o_useCapture){
Bool useCapture = __o_useCapture.Default(false);
            	HX_STACK_FRAME("openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",117,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE( 119)		Bool _hx_tmp = hx::IsNull( this->_hx___eventMap );
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 119)			return;
            		}
HXLINE( 121)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 122)		Bool _hx_tmp1 = hx::IsNull( list );
HXDLIN( 122)		if (_hx_tmp1) {
HXLINE( 122)			return;
            		}
HXLINE( 124)		HX_VARI( Bool,dispatching) = hx::IsEq( this->_hx___dispatching->get(type),true );
HXLINE( 126)		if (dispatching) {
HXLINE( 128)			Bool _hx_tmp2 = !(this->_hx___newEventMap->exists(type));
HXDLIN( 128)			if (_hx_tmp2) {
HXLINE( 130)				list = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) )->copy();
HXLINE( 131)				this->_hx___newEventMap->set(type,list);
            			}
            			else {
HXLINE( 135)				list = ( (::Array< ::Dynamic>)(this->_hx___newEventMap->get(type)) );
            			}
            		}
HXLINE( 141)		{
HXLINE( 141)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 141)			HX_VARI( Int,_g) = list->length;
HXDLIN( 141)			while((_g1 < _g)){
HXLINE( 141)				HX_VARI( Int,i) = _g1++;
HXLINE( 143)				Bool _hx_tmp3 = list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture);
HXDLIN( 143)				if (_hx_tmp3) {
HXLINE( 145)					list->removeRange(i,(int)1);
HXLINE( 146)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 152)		if (!(dispatching)) {
HXLINE( 154)			Bool _hx_tmp4 = (list->length == (int)0);
HXDLIN( 154)			if (_hx_tmp4) {
HXLINE( 156)				this->_hx___eventMap->remove(type);
            			}
HXLINE( 160)			Bool _hx_tmp5 = !(( (Bool)( ::Dynamic(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 160)			if (_hx_tmp5) {
HXLINE( 162)				this->_hx___eventMap = null();
HXLINE( 163)				this->_hx___newEventMap = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString(){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",172,0xe2270714)
            	HX_STACK_THIS(this)
HXLINE( 174)		hx::Class _hx_tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 174)		HX_VARI( ::String,full) = ::Type_obj::getClassName(_hx_tmp);
HXLINE( 175)		HX_VARI_NAME( ::String,_hx_short,"short") = ( (::String)(full.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 177)		return ((HX_("[object ",86,f9,3d,d7) + _hx_short) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

Bool EventDispatcher_obj::willTrigger(::String type){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",184,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 184)		return this->hasEventListener(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

Bool EventDispatcher_obj::_hx___dispatchEvent( ::openfl::events::Event event){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","__dispatchEvent",0x417d6f7c,"openfl.events.EventDispatcher.__dispatchEvent","openfl/events/EventDispatcher.hx",189,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 191)		Bool _hx_tmp;
HXDLIN( 191)		Bool _hx_tmp1 = hx::IsNotNull( this->_hx___eventMap );
HXDLIN( 191)		if (_hx_tmp1) {
HXLINE( 191)			_hx_tmp = hx::IsNull( event );
            		}
            		else {
HXLINE( 191)			_hx_tmp = true;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 191)			return false;
            		}
HXLINE( 193)		HX_VARI( ::String,type) = event->type;
HXLINE( 194)		HX_VAR( ::Array< ::Dynamic>,list);
HXLINE( 196)		Bool _hx_tmp2 = hx::IsEq( this->_hx___dispatching->get(type),true );
HXDLIN( 196)		if (_hx_tmp2) {
HXLINE( 198)			list = ( (::Array< ::Dynamic>)(this->_hx___newEventMap->get(type)) );
HXLINE( 199)			Bool _hx_tmp3 = hx::IsNull( list );
HXDLIN( 199)			if (_hx_tmp3) {
HXLINE( 199)				return false;
            			}
HXLINE( 200)			list = list->copy();
            		}
            		else {
HXLINE( 204)			list = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 205)			Bool _hx_tmp4 = hx::IsNull( list );
HXDLIN( 205)			if (_hx_tmp4) {
HXLINE( 205)				return false;
            			}
HXLINE( 206)			this->_hx___dispatching->set(type,true);
            		}
HXLINE( 210)		Bool _hx_tmp5 = hx::IsNull( event->target );
HXDLIN( 210)		if (_hx_tmp5) {
HXLINE( 212)			Bool _hx_tmp6 = hx::IsNotNull( this->_hx___targetDispatcher );
HXDLIN( 212)			if (_hx_tmp6) {
HXLINE( 214)				event->target = this->_hx___targetDispatcher;
            			}
            			else {
HXLINE( 218)				event->target = hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 224)		event->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 226)		HX_VARI( Bool,capture) = (event->eventPhase == (int)1);
HXLINE( 227)		HX_VARI( Int,index) = (int)0;
HXLINE( 228)		HX_VAR(  ::openfl::events::_EventDispatcher::Listener,listener);
HXLINE( 230)		while((index < list->length)){
HXLINE( 232)			listener = list->__get(index).StaticCast<  ::openfl::events::_EventDispatcher::Listener >();
HXLINE( 234)			Bool _hx_tmp7 = (listener->useCapture == capture);
HXDLIN( 234)			if (_hx_tmp7) {
HXLINE( 237)				listener->callback(event);
HXLINE( 239)				if (event->_hx___isCanceledNow) {
HXLINE( 241)					goto _hx_goto_2;
            				}
            			}
HXLINE( 247)			Bool _hx_tmp8 = hx::IsEq( listener,list->__get(index).StaticCast<  ::openfl::events::_EventDispatcher::Listener >() );
HXDLIN( 247)			if (_hx_tmp8) {
HXLINE( 249)				++index;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 255)		Bool _hx_tmp9;
HXDLIN( 255)		Bool _hx_tmp10 = hx::IsNotNull( this->_hx___newEventMap );
HXDLIN( 255)		if (_hx_tmp10) {
HXLINE( 255)			_hx_tmp9 = this->_hx___newEventMap->exists(type);
            		}
            		else {
HXLINE( 255)			_hx_tmp9 = false;
            		}
HXDLIN( 255)		if (_hx_tmp9) {
HXLINE( 257)			HX_VARI_NAME( ::Array< ::Dynamic>,list1,"list") = ( (::Array< ::Dynamic>)(this->_hx___newEventMap->get(type)) );
HXLINE( 259)			Bool _hx_tmp11 = (list1->length > (int)0);
HXDLIN( 259)			if (_hx_tmp11) {
HXLINE( 261)				this->_hx___eventMap->set(type,list1);
            			}
            			else {
HXLINE( 265)				this->_hx___eventMap->remove(type);
            			}
HXLINE( 269)			Bool _hx_tmp12 = !(( (Bool)( ::Dynamic(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 269)			if (_hx_tmp12) {
HXLINE( 271)				this->_hx___eventMap = null();
HXLINE( 272)				this->_hx___newEventMap = null();
            			}
            			else {
HXLINE( 276)				this->_hx___newEventMap->remove(type);
            			}
            		}
HXLINE( 282)		this->_hx___dispatching->set(event->type,false);
HXLINE( 284)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,_hx___dispatchEvent,return )

Int EventDispatcher_obj::_hx___sortByPriority( ::openfl::events::_EventDispatcher::Listener l1, ::openfl::events::_EventDispatcher::Listener l2){
            	HX_STACK_FRAME("openfl.events.EventDispatcher","__sortByPriority",0x7512cd5d,"openfl.events.EventDispatcher.__sortByPriority","openfl/events/EventDispatcher.hx",291,0xe2270714)
            	HX_STACK_ARG(l1,"l1")
            	HX_STACK_ARG(l2,"l2")
HXLINE( 291)		if ((l1->priority == l2->priority)) {
HXLINE( 291)			return (int)0;
            		}
            		else {
HXLINE( 291)			if ((l1->priority > l2->priority)) {
HXLINE( 291)				return (int)-1;
            			}
            			else {
HXLINE( 291)				return (int)1;
            			}
            		}
HXDLIN( 291)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,_hx___sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(_hx___dispatching,"__dispatching");
	HX_MARK_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(_hx___newEventMap,"__newEventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___dispatching,"__dispatching");
	HX_VISIT_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(_hx___newEventMap,"__newEventMap");
}

hx::Val EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return hx::Val( _hx___eventMap); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return hx::Val( willTrigger_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { return hx::Val( _hx___dispatching); }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { return hx::Val( _hx___newEventMap); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return hx::Val( dispatchEvent_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return hx::Val( _hx___dispatchEvent_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn()); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hx::Val( hasEventListener_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return hx::Val( _hx___targetDispatcher); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return hx::Val( removeEventListener_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = _hx___sortByPriority_dyn(); return true; }
	}
	return false;
}

hx::Val EventDispatcher_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { _hx___dispatching=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { _hx___newEventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { _hx___targetDispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf"));
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	outFields->push(HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EventDispatcher_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___dispatching),HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf")},
	{hx::fsObject /*::openfl::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,_hx___targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___newEventMap),HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EventDispatcher_obj_sStaticStorageInfo = 0;
#endif

static ::String EventDispatcher_obj_sMemberFields[] = {
	HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf"),
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	::String(null()) };

static void EventDispatcher_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventDispatcher_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String EventDispatcher_obj_sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null())
};

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.EventDispatcher","\x0a","\xd8","\x08","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EventDispatcher_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EventDispatcher_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventDispatcher_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventDispatcher_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventDispatcher_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
