#include <hxcpp.h>

#ifndef INCLUDED_elements_tabs_TabListEvent
#include <elements/tabs/TabListEvent.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eaec8eb2f1899fb1_13_new,"elements.tabs.TabListEvent","new",0x922cd8d2,"elements.tabs.TabListEvent.new","elements/tabs/TabListEvent.hx",13,0xe725367e)
HX_LOCAL_STACK_FRAME(_hx_pos_eaec8eb2f1899fb1_19_get_selected,"elements.tabs.TabListEvent","get_selected",0x467637b2,"elements.tabs.TabListEvent.get_selected","elements/tabs/TabListEvent.hx",19,0xe725367e)
HX_LOCAL_STACK_FRAME(_hx_pos_eaec8eb2f1899fb1_24_clone,"elements.tabs.TabListEvent","clone",0xc8e49c4f,"elements.tabs.TabListEvent.clone","elements/tabs/TabListEvent.hx",24,0xe725367e)
HX_LOCAL_STACK_FRAME(_hx_pos_eaec8eb2f1899fb1_9_boot,"elements.tabs.TabListEvent","boot",0x4d29df80,"elements.tabs.TabListEvent.boot","elements/tabs/TabListEvent.hx",9,0xe725367e)
namespace elements{
namespace tabs{

void TabListEvent_obj::__construct(::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_eaec8eb2f1899fb1_13_new)
HXLINE(  14)		super::__construct(type,null(),bubbles,cancelable);
HXLINE(  15)		this->selected = selected;
            	}

Dynamic TabListEvent_obj::__CreateEmpty() { return new TabListEvent_obj; }

void *TabListEvent_obj::_hx_vtable = 0;

Dynamic TabListEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabListEvent_obj > _hx_result = new TabListEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TabListEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2485c908) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x2485c908;
		}
	} else {
		return inClassId==(int)0x5cb5a0fb;
	}
}

::String TabListEvent_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_eaec8eb2f1899fb1_19_get_selected)
HXDLIN(  19)		return this->selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabListEvent_obj,get_selected,return )

 ::openfl::events::Event TabListEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_eaec8eb2f1899fb1_24_clone)
HXDLIN(  24)		::String _hx_tmp = this->type;
HXDLIN(  24)		::String _hx_tmp1 = this->get_selected();
HXDLIN(  24)		return  ::elements::tabs::TabListEvent_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->bubbles,this->cancelable);
            	}


::String TabListEvent_obj::CHANGE_TAB_CONTEXT;


::hx::ObjectPtr< TabListEvent_obj > TabListEvent_obj::__new(::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< TabListEvent_obj > __this = new TabListEvent_obj();
	__this->__construct(type,selected,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< TabListEvent_obj > TabListEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	TabListEvent_obj *__this = (TabListEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabListEvent_obj), true, "elements.tabs.TabListEvent"));
	*(void **)__this = TabListEvent_obj::_hx_vtable;
	__this->__construct(type,selected,__o_bubbles,__o_cancelable);
	return __this;
}

TabListEvent_obj::TabListEvent_obj()
{
}

void TabListEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabListEvent);
	HX_MARK_MEMBER_NAME(selected,"selected");
	 ::models::ModelEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabListEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selected,"selected");
	 ::models::ModelEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabListEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selected() : selected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabListEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabListEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabListEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabListEvent_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TabListEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TabListEvent_obj::CHANGE_TAB_CONTEXT,HX_("CHANGE_TAB_CONTEXT",f6,c9,c1,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TabListEvent_obj_sMemberFields[] = {
	HX_("selected",5b,2a,6d,b1),
	HX_("get_selected",64,de,86,66),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void TabListEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabListEvent_obj::CHANGE_TAB_CONTEXT,"CHANGE_TAB_CONTEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabListEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabListEvent_obj::CHANGE_TAB_CONTEXT,"CHANGE_TAB_CONTEXT");
};

#endif

::hx::Class TabListEvent_obj::__mClass;

static ::String TabListEvent_obj_sStaticFields[] = {
	HX_("CHANGE_TAB_CONTEXT",f6,c9,c1,1e),
	::String(null())
};

void TabListEvent_obj::__register()
{
	TabListEvent_obj _hx_dummy;
	TabListEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.TabListEvent",e0,c7,bf,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TabListEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabListEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabListEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabListEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabListEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabListEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabListEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabListEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eaec8eb2f1899fb1_9_boot)
HXDLIN(   9)		CHANGE_TAB_CONTEXT = HX_("changeTabContext",aa,49,01,68);
            	}
}

} // end namespace elements
} // end namespace tabs
