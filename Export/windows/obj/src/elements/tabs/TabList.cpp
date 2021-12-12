#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListEvent
#include <elements/tabs/TabListEvent.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ac8f5371252518a2_6_new,"elements.tabs.TabList","new",0xc3ef0fcc,"elements.tabs.TabList.new","elements/tabs/TabList.hx",6,0x5c738184)
HX_LOCAL_STACK_FRAME(_hx_pos_ac8f5371252518a2_12_get_count,"elements.tabs.TabList","get_count",0xcb2f3992,"elements.tabs.TabList.get_count","elements/tabs/TabList.hx",12,0x5c738184)
HX_LOCAL_STACK_FRAME(_hx_pos_ac8f5371252518a2_16_set_count,"elements.tabs.TabList","set_count",0xae80259e,"elements.tabs.TabList.set_count","elements/tabs/TabList.hx",16,0x5c738184)
HX_LOCAL_STACK_FRAME(_hx_pos_ac8f5371252518a2_20_get_selected,"elements.tabs.TabList","get_selected",0x4a765178,"elements.tabs.TabList.get_selected","elements/tabs/TabList.hx",20,0x5c738184)
HX_LOCAL_STACK_FRAME(_hx_pos_ac8f5371252518a2_24_set_selected,"elements.tabs.TabList","set_selected",0x5f6f74ec,"elements.tabs.TabList.set_selected","elements/tabs/TabList.hx",24,0x5c738184)
HX_LOCAL_STACK_FRAME(_hx_pos_ac8f5371252518a2_29_changeTabContext,"elements.tabs.TabList","changeTabContext",0x0829d6be,"elements.tabs.TabList.changeTabContext","elements/tabs/TabList.hx",29,0x5c738184)
namespace elements{
namespace tabs{

void TabList_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ac8f5371252518a2_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic TabList_obj::__CreateEmpty() { return new TabList_obj; }

void *TabList_obj::_hx_vtable = 0;

Dynamic TabList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabList_obj > _hx_result = new TabList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x436aa85e;
	}
}

int TabList_obj::get_count(){
            	HX_STACKFRAME(&_hx_pos_ac8f5371252518a2_12_get_count)
HXDLIN(  12)		return this->count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabList_obj,get_count,return )

int TabList_obj::set_count(int count){
            	HX_STACKFRAME(&_hx_pos_ac8f5371252518a2_16_set_count)
HXDLIN(  16)		return (this->count = count);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabList_obj,set_count,return )

::String TabList_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_ac8f5371252518a2_20_get_selected)
HXDLIN(  20)		return this->selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabList_obj,get_selected,return )

::String TabList_obj::set_selected(::String selected){
            	HX_STACKFRAME(&_hx_pos_ac8f5371252518a2_24_set_selected)
HXDLIN(  24)		return (this->selected = selected);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabList_obj,set_selected,return )

void TabList_obj::changeTabContext(){
            	HX_GC_STACKFRAME(&_hx_pos_ac8f5371252518a2_29_changeTabContext)
HXDLIN(  29)		if (::Std_obj::isOfType(this->parentModel,::hx::ClassOf< ::elements::tabs::context::TabContext >())) {
HXLINE(  30)			 ::elements::tabs::context::TabContext tabContext = ::hx::TCast<  ::elements::tabs::context::TabContext >::cast(this->parentModel);
HXLINE(  31)			tabContext->set_value(this->get_selected());
HXLINE(  32)			this->dispatchEvent( ::elements::tabs::TabListEvent_obj::__alloc( HX_CTX ,HX_("changeTabContext",aa,49,01,68),this->get_selected(),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabList_obj,changeTabContext,(void))


::hx::ObjectPtr< TabList_obj > TabList_obj::__new() {
	::hx::ObjectPtr< TabList_obj > __this = new TabList_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabList_obj > TabList_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabList_obj *__this = (TabList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabList_obj), true, "elements.tabs.TabList"));
	*(void **)__this = TabList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabList_obj::TabList_obj()
{
}

void TabList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabList);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(selected,"selected");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_count() : count ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selected() : selected ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_count") ) { return ::hx::Val( get_count_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_count") ) { return ::hx::Val( set_count_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeTabContext") ) { return ::hx::Val( changeTabContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_count(inValue.Cast< int >()) );count=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< ::String >()) );selected=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("count",cf,44,63,4a));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabList_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TabList_obj,count),HX_("count",cf,44,63,4a)},
	{::hx::fsString,(int)offsetof(TabList_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabList_obj_sStaticStorageInfo = 0;
#endif

static ::String TabList_obj_sMemberFields[] = {
	HX_("count",cf,44,63,4a),
	HX_("selected",5b,2a,6d,b1),
	HX_("get_count",26,a1,0c,8e),
	HX_("set_count",32,8d,5d,71),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("changeTabContext",aa,49,01,68),
	::String(null()) };

::hx::Class TabList_obj::__mClass;

void TabList_obj::__register()
{
	TabList_obj _hx_dummy;
	TabList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.TabList",da,79,a8,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
