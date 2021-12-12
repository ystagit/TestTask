#ifndef INCLUDED_controllers_IController
#define INCLUDED_controllers_IController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace controllers{


class HXCPP_CLASS_ATTRIBUTES IController_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_onUpdate)( ::models::ModelEvent e); 
		static inline void onUpdate( ::Dynamic _hx_, ::models::ModelEvent e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onUpdate)(e);
		}
		void (::hx::Object :: *_hx_onShow)( ::models::ModelEvent e); 
		static inline void onShow( ::Dynamic _hx_, ::models::ModelEvent e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onShow)(e);
		}
		void (::hx::Object :: *_hx_onHide)( ::openfl::events::Event e); 
		static inline void onHide( ::Dynamic _hx_, ::openfl::events::Event e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onHide)(e);
		}
		void (::hx::Object :: *_hx_onHover)( ::openfl::events::MouseEvent e); 
		static inline void onHover( ::Dynamic _hx_, ::openfl::events::MouseEvent e) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onHover)(e);
		}
		void (::hx::Object :: *_hx_onResize)(int w,int h); 
		static inline void onResize( ::Dynamic _hx_,int w,int h) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onResize)(w,h);
		}
		void (::hx::Object :: *_hx_onSyncResize)(); 
		static inline void onSyncResize( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::controllers::IController_obj *>(_hx_.mPtr->_hx_getInterface(0xa721dcce)))->_hx_onSyncResize)();
		}
};

} // end namespace controllers

#endif /* INCLUDED_controllers_IController */ 
