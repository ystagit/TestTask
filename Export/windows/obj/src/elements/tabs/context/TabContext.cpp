#include <hxcpp.h>

#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
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
#ifndef INCLUDED_shared_Padding
#include <shared/Padding.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88fd909b3c60006d_9_new,"elements.tabs.context.TabContext","new",0x581d6904,"elements.tabs.context.TabContext.new","elements/tabs/context/TabContext.hx",9,0xef5dfdeb)
HX_LOCAL_STACK_FRAME(_hx_pos_88fd909b3c60006d_18_get_value,"elements.tabs.context.TabContext","get_value",0xac2d876c,"elements.tabs.context.TabContext.get_value","elements/tabs/context/TabContext.hx",18,0xef5dfdeb)
HX_LOCAL_STACK_FRAME(_hx_pos_88fd909b3c60006d_22_set_value,"elements.tabs.context.TabContext","set_value",0x8f7e7378,"elements.tabs.context.TabContext.set_value","elements/tabs/context/TabContext.hx",22,0xef5dfdeb)
namespace elements{
namespace tabs{
namespace context{

void TabContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_88fd909b3c60006d_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		this->padding->set_left(( (Float)(20) ));
HXLINE(  12)		this->padding->set_top(( (Float)(20) ));
HXLINE(  13)		this->padding->set_right(( (Float)(20) ));
HXLINE(  14)		this->padding->set_bottom(( (Float)(20) ));
            	}

Dynamic TabContext_obj::__CreateEmpty() { return new TabContext_obj; }

void *TabContext_obj::_hx_vtable = 0;

Dynamic TabContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabContext_obj > _hx_result = new TabContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x39c61830;
	}
}

::String TabContext_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_88fd909b3c60006d_18_get_value)
HXDLIN(  18)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabContext_obj,get_value,return )

::String TabContext_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_88fd909b3c60006d_22_set_value)
HXDLIN(  22)		return (this->value = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabContext_obj,set_value,return )


::hx::ObjectPtr< TabContext_obj > TabContext_obj::__new() {
	::hx::ObjectPtr< TabContext_obj > __this = new TabContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabContext_obj > TabContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabContext_obj *__this = (TabContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabContext_obj), true, "elements.tabs.context.TabContext"));
	*(void **)__this = TabContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabContext_obj::TabContext_obj()
{
}

void TabContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabContext);
	HX_MARK_MEMBER_NAME(value,"value");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val TabContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< ::String >()) );value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabContext_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabContext_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabContext_obj_sStaticStorageInfo = 0;
#endif

static ::String TabContext_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	::String(null()) };

::hx::Class TabContext_obj::__mClass;

void TabContext_obj::__register()
{
	TabContext_obj _hx_dummy;
	TabContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.context.TabContext",12,d7,f3,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace context
