#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_Tab
#include <elements/tabs/tab/Tab.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4c34271e5516abfb_5_new,"elements.tabs.tab.Tab","new",0x32ed6ab5,"elements.tabs.tab.Tab.new","elements/tabs/tab/Tab.hx",5,0xe1392d7c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c34271e5516abfb_11_get_value,"elements.tabs.tab.Tab","get_value",0xd8cb63dd,"elements.tabs.tab.Tab.get_value","elements/tabs/tab/Tab.hx",11,0xe1392d7c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c34271e5516abfb_15_set_value,"elements.tabs.tab.Tab","set_value",0xbc1c4fe9,"elements.tabs.tab.Tab.set_value","elements/tabs/tab/Tab.hx",15,0xe1392d7c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c34271e5516abfb_18_get_active,"elements.tabs.tab.Tab","get_active",0x9fbb3bda,"elements.tabs.tab.Tab.get_active","elements/tabs/tab/Tab.hx",18,0xe1392d7c)
namespace elements{
namespace tabs{
namespace tab{

void Tab_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4c34271e5516abfb_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Tab_obj::__CreateEmpty() { return new Tab_obj; }

void *Tab_obj::_hx_vtable = 0;

Dynamic Tab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tab_obj > _hx_result = new Tab_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x63d7df75;
	}
}

::String Tab_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_4c34271e5516abfb_11_get_value)
HXDLIN(  11)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,get_value,return )

::String Tab_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_4c34271e5516abfb_15_set_value)
HXDLIN(  15)		return (this->value = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tab_obj,set_value,return )

bool Tab_obj::get_active(){
            	HX_STACKFRAME(&_hx_pos_4c34271e5516abfb_18_get_active)
HXLINE(  19)		if (::Std_obj::isOfType(this->parentModel,::hx::ClassOf< ::elements::tabs::TabList >())) {
HXLINE(  20)			 ::elements::tabs::TabList tabList = ::hx::TCast<  ::elements::tabs::TabList >::cast(this->parentModel);
HXLINE(  21)			::String _hx_tmp = tabList->get_selected();
HXDLIN(  21)			return (_hx_tmp == this->get_value());
            		}
HXLINE(  24)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,get_active,return )


::hx::ObjectPtr< Tab_obj > Tab_obj::__new() {
	::hx::ObjectPtr< Tab_obj > __this = new Tab_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Tab_obj > Tab_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Tab_obj *__this = (Tab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tab_obj), true, "elements.tabs.tab.Tab"));
	*(void **)__this = Tab_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tab_obj::Tab_obj()
{
}

void Tab_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tab);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(active,"active");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tab_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(active,"active");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_value() : value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_active() : active ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_active") ) { return ::hx::Val( get_active_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tab_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< ::String >()) );value=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tab_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("active",c6,41,46,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tab_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Tab_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsBool,(int)offsetof(Tab_obj,active),HX_("active",c6,41,46,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tab_obj_sStaticStorageInfo = 0;
#endif

static ::String Tab_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("active",c6,41,46,16),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_active",8f,b1,cd,06),
	::String(null()) };

::hx::Class Tab_obj::__mClass;

void Tab_obj::__register()
{
	Tab_obj _hx_dummy;
	Tab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.tab.Tab",43,ec,72,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace tab
