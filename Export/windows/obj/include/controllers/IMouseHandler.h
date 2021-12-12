#ifndef INCLUDED_controllers_IMouseHandler
#define INCLUDED_controllers_IMouseHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(controllers,IMouseHandler)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace controllers{


class HXCPP_CLASS_ATTRIBUTES IMouseHandler_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_onClickMouse)( ::openfl::events::MouseEvent e); 
		static inline void onClickMouse( ::Dynamic _hx_, ::openfl::events::MouseEvent e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IMouseHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x9c5d34d7)))->_hx_onClickMouse)(e);
		}
		void (::hx::Object :: *_hx_onMoveMouse)( ::openfl::events::MouseEvent e); 
		static inline void onMoveMouse( ::Dynamic _hx_, ::openfl::events::MouseEvent e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IMouseHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x9c5d34d7)))->_hx_onMoveMouse)(e);
		}
};

} // end namespace controllers

#endif /* INCLUDED_controllers_IMouseHandler */ 
