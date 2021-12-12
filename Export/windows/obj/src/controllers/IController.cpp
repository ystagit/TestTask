#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

namespace controllers{


static ::String IController_obj_sMemberFields[] = {
	HX_("onUpdate",88,7c,b2,66),
	HX_("onShow",bc,dd,dc,ee),
	HX_("onHide",81,3d,98,e7),
	HX_("onHover",1d,84,a2,c1),
	HX_("onResize",73,50,28,e8),
	HX_("onSyncResize",ae,e0,5b,d3),
	::String(null()) };

::hx::Class IController_obj::__mClass;

void IController_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controllers.IController",ae,7b,5b,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa721dcce >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace controllers
