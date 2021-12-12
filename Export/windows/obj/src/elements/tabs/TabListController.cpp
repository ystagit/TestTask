#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListController
#include <elements/tabs/TabListController.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_58f29644791630cd_9_new,"elements.tabs.TabListController","new",0x51ee8f08,"elements.tabs.TabListController.new","elements/tabs/TabListController.hx",9,0x97f1f5c8)
HX_LOCAL_STACK_FRAME(_hx_pos_58f29644791630cd_12_onSelect,"elements.tabs.TabListController","onSelect",0xe48931d3,"elements.tabs.TabListController.onSelect","elements/tabs/TabListController.hx",12,0x97f1f5c8)
namespace elements{
namespace tabs{

void TabListController_obj::__construct( ::elements::tabs::TabList model){
            	HX_STACKFRAME(&_hx_pos_58f29644791630cd_9_new)
HXDLIN(   9)		super::__construct(model);
            	}

Dynamic TabListController_obj::__CreateEmpty() { return new TabListController_obj; }

void *TabListController_obj::_hx_vtable = 0;

Dynamic TabListController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabListController_obj > _hx_result = new TabListController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabListController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e05ce84) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e05ce84;
	} else {
		return inClassId==(int)0x275632d2;
	}
}

void TabListController_obj::onSelect(::String value){
            	HX_STACKFRAME(&_hx_pos_58f29644791630cd_12_onSelect)
HXLINE(  13)		 ::elements::tabs::TabList tabList = ::hx::TCast<  ::elements::tabs::TabList >::cast(this->model);
HXLINE(  14)		if ((tabList->get_selected() != value)) {
HXLINE(  15)			tabList->set_selected(value);
HXLINE(  16)			tabList->changeTabContext();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabListController_obj,onSelect,(void))


::hx::ObjectPtr< TabListController_obj > TabListController_obj::__new( ::elements::tabs::TabList model) {
	::hx::ObjectPtr< TabListController_obj > __this = new TabListController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< TabListController_obj > TabListController_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::TabList model) {
	TabListController_obj *__this = (TabListController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabListController_obj), true, "elements.tabs.TabListController"));
	*(void **)__this = TabListController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

TabListController_obj::TabListController_obj()
{
}

::hx::Val TabListController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onSelect") ) { return ::hx::Val( onSelect_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabListController_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabListController_obj_sStaticStorageInfo = 0;
#endif

static ::String TabListController_obj_sMemberFields[] = {
	HX_("onSelect",7b,11,e0,49),
	::String(null()) };

::hx::Class TabListController_obj::__mClass;

void TabListController_obj::__register()
{
	TabListController_obj _hx_dummy;
	TabListController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.TabListController",16,ab,30,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabListController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabListController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabListController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabListController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
