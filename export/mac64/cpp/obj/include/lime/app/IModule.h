// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES IModule_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_onGamepadAxisMove)( ::lime::ui::Gamepad gamepad,Int axis,Float value); 
		static inline void onGamepadAxisMove( ::Dynamic _hx_, ::lime::ui::Gamepad gamepad,Int axis,Float value) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onGamepadAxisMove)(gamepad,axis,value);
		}
		void (hx::Object :: *_hx_onGamepadButtonDown)( ::lime::ui::Gamepad gamepad,Int button); 
		static inline void onGamepadButtonDown( ::Dynamic _hx_, ::lime::ui::Gamepad gamepad,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onGamepadButtonDown)(gamepad,button);
		}
		void (hx::Object :: *_hx_onGamepadButtonUp)( ::lime::ui::Gamepad gamepad,Int button); 
		static inline void onGamepadButtonUp( ::Dynamic _hx_, ::lime::ui::Gamepad gamepad,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onGamepadButtonUp)(gamepad,button);
		}
		void (hx::Object :: *_hx_onGamepadConnect)( ::lime::ui::Gamepad gamepad); 
		static inline void onGamepadConnect( ::Dynamic _hx_, ::lime::ui::Gamepad gamepad) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onGamepadConnect)(gamepad);
		}
		void (hx::Object :: *_hx_onGamepadDisconnect)( ::lime::ui::Gamepad gamepad); 
		static inline void onGamepadDisconnect( ::Dynamic _hx_, ::lime::ui::Gamepad gamepad) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onGamepadDisconnect)(gamepad);
		}
		void (hx::Object :: *_hx_onJoystickAxisMove)( ::lime::ui::Joystick joystick,Int axis,Float value); 
		static inline void onJoystickAxisMove( ::Dynamic _hx_, ::lime::ui::Joystick joystick,Int axis,Float value) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickAxisMove)(joystick,axis,value);
		}
		void (hx::Object :: *_hx_onJoystickButtonDown)( ::lime::ui::Joystick joystick,Int button); 
		static inline void onJoystickButtonDown( ::Dynamic _hx_, ::lime::ui::Joystick joystick,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickButtonDown)(joystick,button);
		}
		void (hx::Object :: *_hx_onJoystickButtonUp)( ::lime::ui::Joystick joystick,Int button); 
		static inline void onJoystickButtonUp( ::Dynamic _hx_, ::lime::ui::Joystick joystick,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickButtonUp)(joystick,button);
		}
		void (hx::Object :: *_hx_onJoystickConnect)( ::lime::ui::Joystick joystick); 
		static inline void onJoystickConnect( ::Dynamic _hx_, ::lime::ui::Joystick joystick) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickConnect)(joystick);
		}
		void (hx::Object :: *_hx_onJoystickDisconnect)( ::lime::ui::Joystick joystick); 
		static inline void onJoystickDisconnect( ::Dynamic _hx_, ::lime::ui::Joystick joystick) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickDisconnect)(joystick);
		}
		void (hx::Object :: *_hx_onJoystickHatMove)( ::lime::ui::Joystick joystick,Int hat,Int position); 
		static inline void onJoystickHatMove( ::Dynamic _hx_, ::lime::ui::Joystick joystick,Int hat,Int position) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickHatMove)(joystick,hat,position);
		}
		void (hx::Object :: *_hx_onJoystickTrackballMove)( ::lime::ui::Joystick joystick,Int trackball,Float value); 
		static inline void onJoystickTrackballMove( ::Dynamic _hx_, ::lime::ui::Joystick joystick,Int trackball,Float value) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onJoystickTrackballMove)(joystick,trackball,value);
		}
		void (hx::Object :: *_hx_onKeyDown)( ::lime::ui::Window window,Int keyCode,Int modifier); 
		static inline void onKeyDown( ::Dynamic _hx_, ::lime::ui::Window window,Int keyCode,Int modifier) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onKeyDown)(window,keyCode,modifier);
		}
		void (hx::Object :: *_hx_onKeyUp)( ::lime::ui::Window window,Int keyCode,Int modifier); 
		static inline void onKeyUp( ::Dynamic _hx_, ::lime::ui::Window window,Int keyCode,Int modifier) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onKeyUp)(window,keyCode,modifier);
		}
		void (hx::Object :: *_hx_onModuleExit)(Int code); 
		static inline void onModuleExit( ::Dynamic _hx_,Int code) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onModuleExit)(code);
		}
		void (hx::Object :: *_hx_onMouseDown)( ::lime::ui::Window window,Float x,Float y,Int button); 
		static inline void onMouseDown( ::Dynamic _hx_, ::lime::ui::Window window,Float x,Float y,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onMouseDown)(window,x,y,button);
		}
		void (hx::Object :: *_hx_onMouseMove)( ::lime::ui::Window window,Float x,Float y); 
		static inline void onMouseMove( ::Dynamic _hx_, ::lime::ui::Window window,Float x,Float y) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onMouseMove)(window,x,y);
		}
		void (hx::Object :: *_hx_onMouseMoveRelative)( ::lime::ui::Window window,Float x,Float y); 
		static inline void onMouseMoveRelative( ::Dynamic _hx_, ::lime::ui::Window window,Float x,Float y) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onMouseMoveRelative)(window,x,y);
		}
		void (hx::Object :: *_hx_onMouseUp)( ::lime::ui::Window window,Float x,Float y,Int button); 
		static inline void onMouseUp( ::Dynamic _hx_, ::lime::ui::Window window,Float x,Float y,Int button) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onMouseUp)(window,x,y,button);
		}
		void (hx::Object :: *_hx_onMouseWheel)( ::lime::ui::Window window,Float deltaX,Float deltaY); 
		static inline void onMouseWheel( ::Dynamic _hx_, ::lime::ui::Window window,Float deltaX,Float deltaY) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onMouseWheel)(window,deltaX,deltaY);
		}
		void (hx::Object :: *_hx_onPreloadComplete)(); 
		static inline void onPreloadComplete( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onPreloadComplete)();
		}
		void (hx::Object :: *_hx_onPreloadProgress)(Int loaded,Int total); 
		static inline void onPreloadProgress( ::Dynamic _hx_,Int loaded,Int total) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onPreloadProgress)(loaded,total);
		}
		void (hx::Object :: *_hx_onRenderContextLost)( ::lime::graphics::Renderer renderer); 
		static inline void onRenderContextLost( ::Dynamic _hx_, ::lime::graphics::Renderer renderer) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onRenderContextLost)(renderer);
		}
		void (hx::Object :: *_hx_onRenderContextRestored)( ::lime::graphics::Renderer renderer,::hx::EnumBase context); 
		static inline void onRenderContextRestored( ::Dynamic _hx_, ::lime::graphics::Renderer renderer,::hx::EnumBase context) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onRenderContextRestored)(renderer,context);
		}
		void (hx::Object :: *_hx_onTextEdit)( ::lime::ui::Window window,::String text,Int start,Int length); 
		static inline void onTextEdit( ::Dynamic _hx_, ::lime::ui::Window window,::String text,Int start,Int length) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onTextEdit)(window,text,start,length);
		}
		void (hx::Object :: *_hx_onTextInput)( ::lime::ui::Window window,::String text); 
		static inline void onTextInput( ::Dynamic _hx_, ::lime::ui::Window window,::String text) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onTextInput)(window,text);
		}
		void (hx::Object :: *_hx_onTouchEnd)( ::lime::ui::Touch touch); 
		static inline void onTouchEnd( ::Dynamic _hx_, ::lime::ui::Touch touch) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onTouchEnd)(touch);
		}
		void (hx::Object :: *_hx_onTouchMove)( ::lime::ui::Touch touch); 
		static inline void onTouchMove( ::Dynamic _hx_, ::lime::ui::Touch touch) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onTouchMove)(touch);
		}
		void (hx::Object :: *_hx_onTouchStart)( ::lime::ui::Touch touch); 
		static inline void onTouchStart( ::Dynamic _hx_, ::lime::ui::Touch touch) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onTouchStart)(touch);
		}
		void (hx::Object :: *_hx_onWindowActivate)( ::lime::ui::Window window); 
		static inline void onWindowActivate( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowActivate)(window);
		}
		void (hx::Object :: *_hx_onWindowClose)( ::lime::ui::Window window); 
		static inline void onWindowClose( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowClose)(window);
		}
		void (hx::Object :: *_hx_onWindowCreate)( ::lime::ui::Window window); 
		static inline void onWindowCreate( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowCreate)(window);
		}
		void (hx::Object :: *_hx_onWindowDeactivate)( ::lime::ui::Window window); 
		static inline void onWindowDeactivate( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowDeactivate)(window);
		}
		void (hx::Object :: *_hx_onWindowDropFile)( ::lime::ui::Window window,::String file); 
		static inline void onWindowDropFile( ::Dynamic _hx_, ::lime::ui::Window window,::String file) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowDropFile)(window,file);
		}
		void (hx::Object :: *_hx_onWindowEnter)( ::lime::ui::Window window); 
		static inline void onWindowEnter( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowEnter)(window);
		}
		void (hx::Object :: *_hx_onWindowFocusIn)( ::lime::ui::Window window); 
		static inline void onWindowFocusIn( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowFocusIn)(window);
		}
		void (hx::Object :: *_hx_onWindowFocusOut)( ::lime::ui::Window window); 
		static inline void onWindowFocusOut( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowFocusOut)(window);
		}
		void (hx::Object :: *_hx_onWindowFullscreen)( ::lime::ui::Window window); 
		static inline void onWindowFullscreen( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowFullscreen)(window);
		}
		void (hx::Object :: *_hx_onWindowLeave)( ::lime::ui::Window window); 
		static inline void onWindowLeave( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowLeave)(window);
		}
		void (hx::Object :: *_hx_onWindowMove)( ::lime::ui::Window window,Float x,Float y); 
		static inline void onWindowMove( ::Dynamic _hx_, ::lime::ui::Window window,Float x,Float y) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowMove)(window,x,y);
		}
		void (hx::Object :: *_hx_onWindowMinimize)( ::lime::ui::Window window); 
		static inline void onWindowMinimize( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowMinimize)(window);
		}
		void (hx::Object :: *_hx_onWindowResize)( ::lime::ui::Window window,Int width,Int height); 
		static inline void onWindowResize( ::Dynamic _hx_, ::lime::ui::Window window,Int width,Int height) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowResize)(window,width,height);
		}
		void (hx::Object :: *_hx_onWindowRestore)( ::lime::ui::Window window); 
		static inline void onWindowRestore( ::Dynamic _hx_, ::lime::ui::Window window) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_onWindowRestore)(window);
		}
		void (hx::Object :: *_hx_render)( ::lime::graphics::Renderer renderer); 
		static inline void render( ::Dynamic _hx_, ::lime::graphics::Renderer renderer) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_render)(renderer);
		}
		void (hx::Object :: *_hx_update)(Int deltaTime); 
		static inline void update( ::Dynamic _hx_,Int deltaTime) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx_update)(deltaTime);
		}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 