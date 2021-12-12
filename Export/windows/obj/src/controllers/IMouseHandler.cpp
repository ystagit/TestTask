#include <hxcpp.h>

#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

namespace controllers{


static ::String IMouseHandler_obj_sMemberFields[] = {
	HX_("onClickMouse",bc,26,28,25),
	HX_("onMoveMouse",35,c8,6e,ec),
	::String(null()) };

::hx::Class IMouseHandler_obj::__mClass;

void IMouseHandler_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controllers.IMouseHandler",b7,4b,64,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMouseHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9c5d34d7 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace controllers
