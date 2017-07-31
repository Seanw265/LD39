// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#include <openfl/net/_URLRequestMethod/URLRequestMethod_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

namespace openfl{
namespace net{

void URLLoader_obj::__construct( ::openfl::net::URLRequest request){
            	HX_STACK_FRAME("openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",51,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(request,"request")
HXLINE(  53)		super::__construct(null());
HXLINE(  55)		this->bytesLoaded = (int)0;
HXLINE(  56)		this->bytesTotal = (int)0;
HXLINE(  57)		this->set_dataFormat((int)1);
HXLINE(  60)		HX_VARI_NAME(  ::openfl::utils::ByteArrayData,this1,"this") =  ::openfl::utils::ByteArrayData_obj::__new((int)0);
HXDLIN(  60)		this->_hx___data = this1;
HXLINE(  61)		this->_hx___curl = ::lime::net::curl::CURLEasy_obj::init();
HXLINE(  64)		Bool _hx_tmp = hx::IsNotNull( request );
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  66)			this->load(request);
            		}
            	}

Dynamic URLLoader_obj::__CreateEmpty() { return new URLLoader_obj; }

hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new( ::openfl::net::URLRequest request)
{
	hx::ObjectPtr< URLLoader_obj > _hx_result = new URLLoader_obj();
	_hx_result->__construct(request);
	return _hx_result;
}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLLoader_obj > _hx_result = new URLLoader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void URLLoader_obj::close(){
            	HX_STACK_FRAME("openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",76,0x11daec0d)
            	HX_STACK_THIS(this)
HXLINE(  76)		::lime::net::curl::CURLEasy_obj::cleanup(this->_hx___curl);
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getData,URLLoader_obj)
 ::Dynamic _hx_run(){
            	HX_STACK_FRAME("openfl.net.URLLoader","__default_getData",0x018332e7,"openfl.net.URLLoader.__default_getData","openfl/net/URLLoader.hx",84,0x11daec0d)
            	HX_STACK_THIS(this)
HXLINE(  84)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

void URLLoader_obj::load( ::openfl::net::URLRequest request){
            	HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",89,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(request,"request")
HXLINE(  89)		HX_VARI(  ::openfl::net::URLLoader,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		Bool _hx_tmp;
HXDLIN(  94)		Bool _hx_tmp1;
HXDLIN(  94)		Bool _hx_tmp2 = hx::IsNotNull( request->url );
HXDLIN(  94)		if (_hx_tmp2) {
HXLINE(  94)			Int _hx_tmp3 = request->url.indexOf(HX_("http://",52,75,cd,5a),null());
HXDLIN(  94)			_hx_tmp1 = (_hx_tmp3 == (int)-1);
            		}
            		else {
HXLINE(  94)			_hx_tmp1 = false;
            		}
HXDLIN(  94)		if (_hx_tmp1) {
HXLINE(  94)			Int _hx_tmp4 = request->url.indexOf(HX_("https://",cf,b4,ae,3e),null());
HXDLIN(  94)			_hx_tmp = (_hx_tmp4 == (int)-1);
            		}
            		else {
HXLINE(  94)			_hx_tmp = false;
            		}
HXDLIN(  94)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::openfl::net::URLRequest,request, ::lime::_hx_system::BackgroundWorker,worker) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",97,0x11daec0d)
            				HX_STACK_ARG(_,"_")
HXLINE(  99)				HX_VARI( ::String,path) = request->url;
HXLINE( 100)				HX_VARI( Int,index) = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 102)				if ((index > (int)-1)) {
HXLINE( 104)					path = path.substring((int)0,index);
            				}
HXLINE( 108)				 ::lime::utils::Bytes _hx_tmp5 = ::lime::utils::Bytes_obj::readFile(path);
HXDLIN( 108)				HX_VARI(  ::openfl::utils::ByteArrayData,bytes) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(_hx_tmp5);
HXLINE( 109)				worker->sendComplete(bytes);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            			void _hx_run( ::openfl::utils::ByteArrayData bytes1){
            				HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",114,0x11daec0d)
            				HX_STACK_ARG(bytes1,"bytes1")
HXLINE( 114)				Bool _hx_tmp6 = hx::IsNotNull( bytes1 );
HXDLIN( 114)				if (_hx_tmp6) {
HXLINE( 116)					{
HXLINE( 116)						Bool _hx_tmp7 = hx::IsEq( _gthis->dataFormat,(int)0 );
HXDLIN( 116)						if (_hx_tmp7) {
HXLINE( 118)							_gthis->data = bytes1;
            						}
            						else {
HXLINE( 119)							_gthis->data = bytes1->readUTFBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes1));
            						}
            					}
HXLINE( 123)					HX_VARI(  ::openfl::events::Event,evt) =  ::openfl::events::Event_obj::__new(HX_("complete",b9,00,c8,7f),null(),null());
HXLINE( 124)					evt->currentTarget = _gthis;
HXLINE( 125)					_gthis->dispatchEvent(evt);
            				}
            				else {
HXLINE( 129)					HX_VARI_NAME(  ::openfl::events::IOErrorEvent,evt1,"evt") =  ::openfl::events::IOErrorEvent_obj::__new(HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 130)					evt1->currentTarget = _gthis;
HXLINE( 131)					_gthis->dispatchEvent(evt1);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  96)			HX_VARI(  ::lime::_hx_system::BackgroundWorker,worker) =  ::lime::_hx_system::BackgroundWorker_obj::__new();
HXLINE(  97)			worker->doWork->add( ::Dynamic(new _hx_Closure_0(request,worker)),null(),null());
HXLINE( 112)			worker->onComplete->add( ::Dynamic(new _hx_Closure_1(_gthis)),null(),null());
HXLINE( 136)			worker->run(null());
            		}
            		else {
HXLINE( 142)			 ::Dynamic _hx_tmp8 = request->data;
HXDLIN( 142)			::Array< ::Dynamic> _hx_tmp9 = request->formatRequestHeaders();
HXDLIN( 142)			this->requestUrl(request->url,::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::fromString(request->method),_hx_tmp8,_hx_tmp9);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

 ::openfl::utils::ByteArrayData URLLoader_obj::prepareData( ::Dynamic data){
            	HX_STACK_FRAME("openfl.net.URLLoader","prepareData",0x9b201a76,"openfl.net.URLLoader.prepareData","openfl/net/URLLoader.hx",317,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE( 319)		HX_VARI_NAME(  ::openfl::utils::ByteArrayData,this1,"this") =  ::openfl::utils::ByteArrayData_obj::__new((int)0);
HXDLIN( 319)		HX_VARI(  ::openfl::utils::ByteArrayData,uri) = this1;
HXLINE( 321)		Bool _hx_tmp = ::Std_obj::is(data,hx::ClassOf< ::openfl::utils::ByteArrayData >());
HXDLIN( 321)		if (_hx_tmp) {
HXLINE( 324)			uri = ( ( ::openfl::utils::ByteArrayData)(data) );
            		}
            		else {
HXLINE( 326)			Bool _hx_tmp1 = ::Std_obj::is(data,hx::ClassOf< ::openfl::net::URLVariables >());
HXDLIN( 326)			if (_hx_tmp1) {
HXLINE( 328)				HX_VARI_NAME(  ::openfl::net::URLVariables,data1,"data") = ( ( ::openfl::net::URLVariables)(data) );
HXLINE( 329)				HX_VARI( ::String,tmp) = HX_("",00,00,00,00);
HXLINE( 331)				{
HXLINE( 331)					HX_VARI( Int,_g) = (int)0;
HXDLIN( 331)					HX_VARI( ::Array< ::String >,_g1) = ::Reflect_obj::fields(data1);
HXDLIN( 331)					while((_g < _g1->length)){
HXLINE( 331)						HX_VARI( ::String,p) = _g1->__get(_g);
HXDLIN( 331)						++_g;
HXLINE( 333)						Bool _hx_tmp2 = (tmp.length != (int)0);
HXDLIN( 333)						if (_hx_tmp2) {
HXLINE( 333)							hx::AddEq(tmp,HX_("&",26,00,00,00));
            						}
HXLINE( 334)						::String _hx_tmp3 = ::StringTools_obj::urlEncode(p);
HXDLIN( 334)						::String _hx_tmp4 = (_hx_tmp3 + HX_("=",3d,00,00,00));
HXDLIN( 334)						 ::Dynamic _hx_tmp5 = ::Reflect_obj::field(data1,p);
HXDLIN( 334)						::String _hx_tmp6 = ::Std_obj::string(_hx_tmp5);
HXDLIN( 334)						::String _hx_tmp7 = ::StringTools_obj::urlEncode(_hx_tmp6);
HXDLIN( 334)						hx::AddEq(tmp,(_hx_tmp4 + _hx_tmp7));
            					}
            				}
HXLINE( 338)				uri->writeUTFBytes(tmp);
            			}
            			else {
HXLINE( 342)				Bool _hx_tmp8 = hx::IsNotNull( data );
HXDLIN( 342)				if (_hx_tmp8) {
HXLINE( 344)					::String _hx_tmp9 = ::Std_obj::string(data);
HXDLIN( 344)					uri->writeUTFBytes(_hx_tmp9);
            				}
            			}
            		}
HXLINE( 350)		return uri;
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,prepareData,return )

void URLLoader_obj::requestUrl(::String url, ::Dynamic method, ::Dynamic data,::Array< ::Dynamic> requestHeaders){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_3, ::openfl::net::URLLoader,_gthis, ::lime::_hx_system::BackgroundWorker,worker) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",428,0x11daec0d)
            			HX_STACK_ARG(_,"_")
HXLINE( 430)			HX_VARI( Int,result) = ::lime::net::curl::CURLEasy_obj::perform(_gthis->_hx___curl);
HXLINE( 431)			worker->sendComplete(result);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_4, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            		void _hx_run(Int result1){
            			HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",434,0x11daec0d)
            			HX_STACK_ARG(result1,"result1")
HXLINE( 436)			HX_VARI( ::String,responseCode) = ( (::String)(::lime::net::curl::CURLEasy_obj::getinfo(_gthis->_hx___curl,(int)2097154)) );
HXLINE( 438)			if ((result1 == (int)0)) {
HXLINE( 440)				{
HXLINE( 440)					Bool _hx_tmp11 = hx::IsEq( _gthis->dataFormat,(int)0 );
HXDLIN( 440)					if (_hx_tmp11) {
HXLINE( 444)						_gthis->data = _gthis->_hx___data;
            					}
            					else {
HXLINE( 448)						_gthis->_hx___data->position = (int)0;
HXLINE( 449)						_gthis->data = _gthis->_hx___data->readUTFBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(_gthis->_hx___data));
            					}
            				}
HXLINE( 453)				 ::Dynamic _hx_tmp12 = ::Std_obj::parseInt(responseCode);
HXDLIN( 453)				_gthis->onStatus(_hx_tmp12);
HXLINE( 455)				HX_VARI(  ::openfl::events::Event,evt) =  ::openfl::events::Event_obj::__new(HX_("complete",b9,00,c8,7f),null(),null());
HXLINE( 456)				evt->currentTarget = _gthis;
HXLINE( 457)				_gthis->dispatchEvent(evt);
            			}
            			else {
HXLINE( 461)				_gthis->onError((HX_("Problem with curl: ",0b,cd,8d,69) + result1));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",355,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(method,"method")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(requestHeaders,"requestHeaders")
HXLINE( 355)		HX_VARI(  ::openfl::net::URLLoader,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE( 357)		HX_VARI(  ::openfl::utils::ByteArrayData,uri) = this->prepareData(data);
HXLINE( 358)		uri->position = (int)0;
HXLINE( 360)		HX_VARI_NAME(  ::openfl::utils::ByteArrayData,this1,"this") =  ::openfl::utils::ByteArrayData_obj::__new((int)0);
HXDLIN( 360)		this->_hx___data = this1;
HXLINE( 361)		this->bytesLoaded = (int)0;
HXLINE( 362)		this->bytesTotal = (int)0;
HXLINE( 364)		::lime::net::curl::CURLEasy_obj::reset(this->_hx___curl);
HXLINE( 365)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)10002,url);
HXLINE( 367)		 ::Dynamic _hx_switch_0 = method;
            		if (  (_hx_switch_0==(int)1) ){
HXLINE( 375)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)80,true);
HXLINE( 377)			if ((::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri) > (int)0)) {
HXLINE( 379)				Float _hx_tmp = this->_hx___curl;
HXDLIN( 379)				::String _hx_tmp1 = (url + HX_("?",3f,00,00,00));
HXDLIN( 379)				::String _hx_tmp2 = uri->readUTFBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri));
HXDLIN( 379)				::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp,(int)10002,(_hx_tmp1 + _hx_tmp2));
            			}
HXLINE( 373)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)2) ){
HXLINE( 371)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)44,true);
HXDLIN( 371)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)4) ){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::openfl::utils::ByteArrayData,a2, ::Dynamic,f) HXARGC(1)
            			 ::lime::utils::Bytes _hx_run(Int a1){
            				HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",386,0x11daec0d)
            				HX_STACK_ARG(a1,"a1")
HXLINE( 386)				return ( ( ::lime::utils::Bytes)(f(a1,a2)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 385)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)47,true);
HXLINE( 386)			 ::Dynamic f = this->readFunction_dyn();
HXDLIN( 386)			 ::openfl::utils::ByteArrayData a2 = uri;
HXDLIN( 386)			 ::Dynamic _hx_tmp3 =  ::Dynamic(new _hx_Closure_1(a2,f));
HXDLIN( 386)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20012,_hx_tmp3);
HXLINE( 387)			Float _hx_tmp4 = this->_hx___curl;
HXDLIN( 387)			::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp4,(int)60,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri));
HXLINE( 388)			Float _hx_tmp5 = this->_hx___curl;
HXDLIN( 388)			::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp5,(int)14,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri));
HXLINE( 383)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)5) ){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::openfl::utils::ByteArrayData,a21, ::Dynamic,f1) HXARGC(1)
            			 ::lime::utils::Bytes _hx_run(Int a11){
            				HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",393,0x11daec0d)
            				HX_STACK_ARG(a11,"a11")
HXLINE( 393)				return ( ( ::lime::utils::Bytes)(f1(a11,a21)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 392)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)46,true);
HXLINE( 393)			 ::Dynamic f1 = this->readFunction_dyn();
HXDLIN( 393)			 ::openfl::utils::ByteArrayData a21 = uri;
HXDLIN( 393)			 ::Dynamic _hx_tmp6 =  ::Dynamic(new _hx_Closure_2(a21,f1));
HXDLIN( 393)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20012,_hx_tmp6);
HXLINE( 394)			Float _hx_tmp7 = this->_hx___curl;
HXDLIN( 394)			::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp7,(int)14,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri));
HXLINE( 390)			goto _hx_goto_1;
            		}
            		/* default */{
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f2, ::openfl::utils::ByteArrayData,a22) HXARGC(1)
            			 ::lime::utils::Bytes _hx_run(Int a12){
            				HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",399,0x11daec0d)
            				HX_STACK_ARG(a12,"a12")
HXLINE( 399)				return ( ( ::lime::utils::Bytes)(f2(a12,a22)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 398)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)10036,method);
HXLINE( 399)			 ::Dynamic f2 = this->readFunction_dyn();
HXDLIN( 399)			 ::openfl::utils::ByteArrayData a22 = uri;
HXDLIN( 399)			 ::Dynamic _hx_tmp8 =  ::Dynamic(new _hx_Closure_0(f2,a22));
HXDLIN( 399)			::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20012,_hx_tmp8);
HXLINE( 400)			Float _hx_tmp9 = this->_hx___curl;
HXDLIN( 400)			::lime::net::curl::CURLEasy_obj::setopt(_hx_tmp9,(int)14,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(uri));
            		}
            		_hx_goto_1:;
HXLINE( 404)		HX_VARI( ::Array< ::String >,headers) = ::Array_obj< ::String >::__new(0);
HXLINE( 405)		headers->push(HX_("Expect: ",df,c4,e1,19));
HXLINE( 407)		{
HXLINE( 407)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 407)			while((_g < requestHeaders->length)){
HXLINE( 407)				HX_VARI(  ::openfl::net::URLRequestHeader,requestHeader) = requestHeaders->__get(_g).StaticCast<  ::openfl::net::URLRequestHeader >();
HXDLIN( 407)				++_g;
HXLINE( 409)				headers->push((((HX_("",00,00,00,00) + requestHeader->name) + HX_(": ",a6,32,00,00)) + requestHeader->value));
            			}
            		}
HXLINE( 413)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)52,true);
HXLINE( 414)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)58,true);
HXLINE( 415)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)10023,headers);
HXLINE( 417)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20056,this->progressFunction_dyn());
HXLINE( 418)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20011,this->writeFunction_dyn());
HXLINE( 419)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)20079,this->headerFunction_dyn());
HXLINE( 421)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)64,false);
HXLINE( 422)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)81,(int)0);
HXLINE( 423)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)10018,HX_("libcurl-agent/1.0",4d,41,cc,d3));
HXLINE( 424)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)78,(int)30);
HXLINE( 425)		 ::Dynamic _hx_tmp10;
HXDLIN( 425)		if (hx::IsEq( this->dataFormat,(int)0 )) {
HXLINE( 425)			_hx_tmp10 = (int)0;
            		}
            		else {
HXLINE( 425)			_hx_tmp10 = (int)1;
            		}
HXDLIN( 425)		::lime::net::curl::CURLEasy_obj::setopt(this->_hx___curl,(int)53,_hx_tmp10);
HXLINE( 427)		HX_VARI(  ::lime::_hx_system::BackgroundWorker,worker) =  ::lime::_hx_system::BackgroundWorker_obj::__new();
HXLINE( 428)		worker->doWork->add( ::Dynamic(new _hx_Closure_3(_gthis,worker)),null(),null());
HXLINE( 434)		worker->onComplete->add( ::Dynamic(new _hx_Closure_4(_gthis)),null(),null());
HXLINE( 466)		worker->run(null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,requestUrl,(void))

Int URLLoader_obj::writeFunction( ::haxe::io::Bytes output,Int size,Int nmemb){
            	HX_STACK_FRAME("openfl.net.URLLoader","writeFunction",0xa65d557c,"openfl.net.URLLoader.writeFunction","openfl/net/URLLoader.hx",471,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(output,"output")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(nmemb,"nmemb")
HXLINE( 473)		 ::openfl::utils::ByteArrayData _hx_tmp = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(output);
HXDLIN( 473)		this->_hx___data->writeBytes(_hx_tmp,null(),null());
HXLINE( 474)		return (size * nmemb);
            	}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,writeFunction,return )

Int URLLoader_obj::headerFunction( ::haxe::io::Bytes output,Int size,Int nmemb){
            	HX_STACK_FRAME("openfl.net.URLLoader","headerFunction",0x642c53c0,"openfl.net.URLLoader.headerFunction","openfl/net/URLLoader.hx",482,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(output,"output")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(nmemb,"nmemb")
HXLINE( 482)		return (size * nmemb);
            	}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,headerFunction,return )

Int URLLoader_obj::progressFunction(Float dltotal,Float dlnow,Float uptotal,Float upnow){
            	HX_STACK_FRAME("openfl.net.URLLoader","progressFunction",0x5fbe16a0,"openfl.net.URLLoader.progressFunction","openfl/net/URLLoader.hx",487,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dltotal,"dltotal")
            	HX_STACK_ARG(dlnow,"dlnow")
            	HX_STACK_ARG(uptotal,"uptotal")
            	HX_STACK_ARG(upnow,"upnow")
HXLINE( 489)		Bool _hx_tmp;
HXDLIN( 489)		Bool _hx_tmp1;
HXDLIN( 489)		Bool _hx_tmp2;
HXDLIN( 489)		if (!((upnow > this->bytesLoaded))) {
HXLINE( 489)			_hx_tmp2 = (dlnow > this->bytesLoaded);
            		}
            		else {
HXLINE( 489)			_hx_tmp2 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp2)) {
HXLINE( 489)			_hx_tmp1 = (uptotal > this->bytesTotal);
            		}
            		else {
HXLINE( 489)			_hx_tmp1 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp1)) {
HXLINE( 489)			_hx_tmp = (dltotal > this->bytesTotal);
            		}
            		else {
HXLINE( 489)			_hx_tmp = true;
            		}
HXDLIN( 489)		if (_hx_tmp) {
HXLINE( 491)			Bool _hx_tmp3 = (upnow > this->bytesLoaded);
HXDLIN( 491)			if (_hx_tmp3) {
HXLINE( 491)				this->bytesLoaded = ::Std_obj::_hx_int(upnow);
            			}
HXLINE( 492)			Bool _hx_tmp4 = (dlnow > this->bytesLoaded);
HXDLIN( 492)			if (_hx_tmp4) {
HXLINE( 492)				this->bytesLoaded = ::Std_obj::_hx_int(dlnow);
            			}
HXLINE( 493)			Bool _hx_tmp5 = (uptotal > this->bytesTotal);
HXDLIN( 493)			if (_hx_tmp5) {
HXLINE( 493)				this->bytesTotal = ::Std_obj::_hx_int(uptotal);
            			}
HXLINE( 494)			Bool _hx_tmp6 = (dltotal > this->bytesTotal);
HXDLIN( 494)			if (_hx_tmp6) {
HXLINE( 494)				this->bytesTotal = ::Std_obj::_hx_int(dltotal);
            			}
HXLINE( 496)			HX_VARI(  ::openfl::events::ProgressEvent,evt) =  ::openfl::events::ProgressEvent_obj::__new(HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 497)			evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 498)			evt->bytesLoaded = this->bytesLoaded;
HXLINE( 499)			evt->bytesTotal = this->bytesTotal;
HXLINE( 500)			this->dispatchEvent(evt);
            		}
HXLINE( 504)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,progressFunction,return )

 ::lime::utils::Bytes URLLoader_obj::readFunction(Int max, ::openfl::utils::ByteArrayData input){
            	HX_STACK_FRAME("openfl.net.URLLoader","readFunction",0x284701c9,"openfl.net.URLLoader.readFunction","openfl/net/URLLoader.hx",511,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(max,"max")
            	HX_STACK_ARG(input,"input")
HXLINE( 511)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toLimeBytes(input);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,readFunction,return )

void URLLoader_obj::onData( ::Dynamic _){
            	HX_STACK_FRAME("openfl.net.URLLoader","onData",0x971179e4,"openfl.net.URLLoader.onData","openfl/net/URLLoader.hx",526,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_,"_")
HXLINE( 539)		HX_VARI(  ::openfl::events::Event,evt) =  ::openfl::events::Event_obj::__new(HX_("complete",b9,00,c8,7f),null(),null());
HXLINE( 540)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 541)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onData,(void))

void URLLoader_obj::onError(::String msg){
            	HX_STACK_FRAME("openfl.net.URLLoader","onError",0x36daeace,"openfl.net.URLLoader.onError","openfl/net/URLLoader.hx",546,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE( 548)		HX_VARI(  ::openfl::events::IOErrorEvent,evt) =  ::openfl::events::IOErrorEvent_obj::__new(HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 549)		evt->text = msg;
HXLINE( 550)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 551)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

void URLLoader_obj::onOpen(){
            	HX_STACK_FRAME("openfl.net.URLLoader","onOpen",0x9e622784,"openfl.net.URLLoader.onOpen","openfl/net/URLLoader.hx",556,0x11daec0d)
            	HX_STACK_THIS(this)
HXLINE( 558)		HX_VARI(  ::openfl::events::Event,evt) =  ::openfl::events::Event_obj::__new(HX_("open",ca,03,b4,49),null(),null());
HXLINE( 559)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 560)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,onOpen,(void))

void URLLoader_obj::onProgress( ::Dynamic event){
            	HX_STACK_FRAME("openfl.net.URLLoader","onProgress",0xe8ae8067,"openfl.net.URLLoader.onProgress","openfl/net/URLLoader.hx",565,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 567)		HX_VARI(  ::openfl::events::ProgressEvent,evt) =  ::openfl::events::ProgressEvent_obj::__new(HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 568)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 569)		evt->bytesLoaded =  ::Dynamic(event->__Field(HX_("loaded",05,48,6f,58),hx::paccDynamic));
HXLINE( 570)		evt->bytesTotal =  ::Dynamic(event->__Field(HX_("total",c4,53,32,14),hx::paccDynamic));
HXLINE( 571)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onProgress,(void))

void URLLoader_obj::onSecurityError(::String msg){
            	HX_STACK_FRAME("openfl.net.URLLoader","onSecurityError",0x2c8cbdee,"openfl.net.URLLoader.onSecurityError","openfl/net/URLLoader.hx",576,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE( 578)		HX_VARI(  ::openfl::events::SecurityErrorEvent,evt) =  ::openfl::events::SecurityErrorEvent_obj::__new(HX_("securityError",e8,28,7c,a2),null(),null(),null(),null());
HXLINE( 579)		evt->text = msg;
HXLINE( 580)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 581)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onSecurityError,(void))

void URLLoader_obj::onStatus(Int status){
            	HX_STACK_FRAME("openfl.net.URLLoader","onStatus",0x7d45ed6c,"openfl.net.URLLoader.onStatus","openfl/net/URLLoader.hx",586,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(status,"status")
HXLINE( 588)		HX_VARI(  ::openfl::events::HTTPStatusEvent,evt) =  ::openfl::events::HTTPStatusEvent_obj::__new(HX_("httpStatus",da,4c,74,0a),false,false,status,null());
HXLINE( 589)		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 590)		this->dispatchEvent(evt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onStatus,(void))

 ::Dynamic URLLoader_obj::set_dataFormat( ::Dynamic inputVal){
            	HX_STACK_FRAME("openfl.net.URLLoader","set_dataFormat",0x4cc5d3b9,"openfl.net.URLLoader.set_dataFormat","openfl/net/URLLoader.hx",620,0x11daec0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(inputVal,"inputVal")
HXLINE( 620)		return (this->dataFormat = inputVal);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,set_dataFormat,return )


URLLoader_obj::URLLoader_obj()
{
	getData = new __default_getData(this);
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(_hx___curl,"__curl");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(getData,"getData");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(_hx___curl,"__curl");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(getData,"getData");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__curl") ) { return hx::Val( _hx___curl); }
		if (HX_FIELD_EQ(inName,"__data") ) { return hx::Val( _hx___data); }
		if (HX_FIELD_EQ(inName,"onData") ) { return hx::Val( onData_dyn()); }
		if (HX_FIELD_EQ(inName,"onOpen") ) { return hx::Val( onOpen_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return hx::Val( getData); }
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onStatus") ) { return hx::Val( onStatus_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal); }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return hx::Val( dataFormat); }
		if (HX_FIELD_EQ(inName,"requestUrl") ) { return hx::Val( requestUrl_dyn()); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded); }
		if (HX_FIELD_EQ(inName,"prepareData") ) { return hx::Val( prepareData_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readFunction") ) { return hx::Val( readFunction_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeFunction") ) { return hx::Val( writeFunction_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headerFunction") ) { return hx::Val( headerFunction_dyn()); }
		if (HX_FIELD_EQ(inName,"set_dataFormat") ) { return hx::Val( set_dataFormat_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { return hx::Val( onSecurityError_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressFunction") ) { return hx::Val( progressFunction_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val URLLoader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__curl") ) { _hx___curl=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { getData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_dataFormat(inValue) );dataFormat=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo URLLoader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsFloat,(int)offsetof(URLLoader_obj,_hx___curl),HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(URLLoader_obj,_hx___data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,getData),HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *URLLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String URLLoader_obj_sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("prepareData","\x51","\xe3","\xce","\xec"),
	HX_HCSTRING("requestUrl","\x60","\x3f","\x09","\x01"),
	HX_HCSTRING("writeFunction","\x17","\x4b","\xf4","\xd7"),
	HX_HCSTRING("headerFunction","\xc5","\x45","\xac","\x96"),
	HX_HCSTRING("progressFunction","\xe5","\x53","\xa2","\x27"),
	HX_HCSTRING("readFunction","\x8e","\xf8","\x87","\x4f"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a"),
	HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5"),
	HX_HCSTRING("set_dataFormat","\xbe","\xc5","\x45","\x7f"),
	::String(null()) };

static void URLLoader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLLoader","\x13","\x34","\x24","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLLoader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLLoader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
