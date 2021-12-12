#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarController
#include <elements/snackbar/SnackbarController.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_45ecf39c16f3d846_6_new,"elements.snackbar.SnackbarController","new",0xac0f4ba5,"elements.snackbar.SnackbarController.new","elements/snackbar/SnackbarController.hx",6,0xf157eb8b)
HX_LOCAL_STACK_FRAME(_hx_pos_45ecf39c16f3d846_8_onShow,"elements.snackbar.SnackbarController","onShow",0x84dbfb97,"elements.snackbar.SnackbarController.onShow","elements/snackbar/SnackbarController.hx",8,0xf157eb8b)
namespace elements{
namespace snackbar{

void SnackbarController_obj::__construct( ::Dynamic model){
            	HX_STACKFRAME(&_hx_pos_45ecf39c16f3d846_6_new)
HXDLIN(   6)		super::__construct(model);
            	}

Dynamic SnackbarController_obj::__CreateEmpty() { return new SnackbarController_obj; }

void *SnackbarController_obj::_hx_vtable = 0;

Dynamic SnackbarController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SnackbarController_obj > _hx_result = new SnackbarController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SnackbarController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e05ce84) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e05ce84;
	} else {
		return inClassId==(int)0x0e0bcac1;
	}
}

void SnackbarController_obj::onShow( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_45ecf39c16f3d846_8_onShow)
HXLINE(   9)		 ::elements::snackbar::Snackbar snackbar = ::hx::TCast<  ::elements::snackbar::Snackbar >::cast(this->model);
HXLINE(  10)		snackbar->setMessage(( (::String)(e->get_data()->get(HX_("message",c7,35,11,9a))) ));
HXLINE(  11)		::String _hx_tmp;
HXDLIN(  11)		if (::hx::IsNotNull( e->get_data()->get(HX_("type",ba,f2,08,4d)) )) {
HXLINE(  11)			_hx_tmp = e->get_data()->get_string(HX_("type",ba,f2,08,4d));
            		}
            		else {
HXLINE(  11)			_hx_tmp = ::elements::snackbar::Snackbar_obj::DEFAULT;
            		}
HXDLIN(  11)		snackbar->setSnackbarType(_hx_tmp);
HXLINE(  12)		this->super::onShow(e);
            	}



::hx::ObjectPtr< SnackbarController_obj > SnackbarController_obj::__new( ::Dynamic model) {
	::hx::ObjectPtr< SnackbarController_obj > __this = new SnackbarController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< SnackbarController_obj > SnackbarController_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic model) {
	SnackbarController_obj *__this = (SnackbarController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SnackbarController_obj), true, "elements.snackbar.SnackbarController"));
	*(void **)__this = SnackbarController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

SnackbarController_obj::SnackbarController_obj()
{
}

::hx::Val SnackbarController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onShow") ) { return ::hx::Val( onShow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SnackbarController_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SnackbarController_obj_sStaticStorageInfo = 0;
#endif

static ::String SnackbarController_obj_sMemberFields[] = {
	HX_("onShow",bc,dd,dc,ee),
	::String(null()) };

::hx::Class SnackbarController_obj::__mClass;

void SnackbarController_obj::__register()
{
	SnackbarController_obj _hx_dummy;
	SnackbarController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.snackbar.SnackbarController",33,95,f5,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SnackbarController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SnackbarController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SnackbarController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SnackbarController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace snackbar
