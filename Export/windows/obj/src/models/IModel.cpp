#include <hxcpp.h>

#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
#endif
#ifndef INCLUDED_shared_Padding
#include <shared/Padding.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

namespace models{


static ::String IModel_obj_sMemberFields[] = {
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("get_highlight",0b,2a,64,ae),
	HX_("visible",72,78,24,a3),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("highlight",34,56,00,ed),
	HX_("getPadding",db,df,de,1f),
	HX_("setPadding",4f,7e,5c,23),
	HX_("getPosition",5f,63,ee,f0),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("getSize",77,50,d6,1e),
	HX_("setSize",83,e1,d7,11),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("hasHover",02,30,bd,b7),
	HX_("getBGColor",88,7b,79,7b),
	HX_("setParentModel",9d,d1,d0,44),
	::String(null()) };

::hx::Class IModel_obj::__mClass;

void IModel_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("models.IModel",e4,f9,28,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xbb84780a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace models
