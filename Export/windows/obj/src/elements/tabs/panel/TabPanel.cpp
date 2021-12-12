#include <hxcpp.h>

#ifndef INCLUDED_elements_tabs_panel_TabPanel
#include <elements/tabs/panel/TabPanel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a3fbd3113443ee07_5_new,"elements.tabs.panel.TabPanel","new",0xd8c3ef64,"elements.tabs.panel.TabPanel.new","elements/tabs/panel/TabPanel.hx",5,0x7a9e2dcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a3fbd3113443ee07_10_get_value,"elements.tabs.panel.TabPanel","get_value",0x018915cc,"elements.tabs.panel.TabPanel.get_value","elements/tabs/panel/TabPanel.hx",10,0x7a9e2dcb)
HX_LOCAL_STACK_FRAME(_hx_pos_a3fbd3113443ee07_14_set_value,"elements.tabs.panel.TabPanel","set_value",0xe4da01d8,"elements.tabs.panel.TabPanel.set_value","elements/tabs/panel/TabPanel.hx",14,0x7a9e2dcb)
namespace elements{
namespace tabs{
namespace panel{

void TabPanel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a3fbd3113443ee07_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic TabPanel_obj::__CreateEmpty() { return new TabPanel_obj; }

void *TabPanel_obj::_hx_vtable = 0;

Dynamic TabPanel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabPanel_obj > _hx_result = new TabPanel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabPanel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e3ae1ee) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x0e3ae1ee;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}

::String TabPanel_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_a3fbd3113443ee07_10_get_value)
HXDLIN(  10)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabPanel_obj,get_value,return )

::String TabPanel_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_a3fbd3113443ee07_14_set_value)
HXDLIN(  14)		return (this->value = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabPanel_obj,set_value,return )


::hx::ObjectPtr< TabPanel_obj > TabPanel_obj::__new() {
	::hx::ObjectPtr< TabPanel_obj > __this = new TabPanel_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabPanel_obj > TabPanel_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabPanel_obj *__this = (TabPanel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabPanel_obj), true, "elements.tabs.panel.TabPanel"));
	*(void **)__this = TabPanel_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabPanel_obj::TabPanel_obj()
{
}

void TabPanel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabPanel);
	HX_MARK_MEMBER_NAME(value,"value");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabPanel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabPanel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_value() : value ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabPanel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< ::String >()) );value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabPanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabPanel_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabPanel_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabPanel_obj_sStaticStorageInfo = 0;
#endif

static ::String TabPanel_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	::String(null()) };

::hx::Class TabPanel_obj::__mClass;

void TabPanel_obj::__register()
{
	TabPanel_obj _hx_dummy;
	TabPanel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.panel.TabPanel",72,ad,7f,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabPanel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabPanel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabPanel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabPanel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace panel
