#include <hxcpp.h>

#ifndef INCLUDED_elements_tabs_Tabs
#include <elements/tabs/Tabs.h>
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
#ifndef INCLUDED_shared_size_SizeType
#include <shared/size/SizeType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3fe466c1052a8d32_5_new,"elements.tabs.Tabs","new",0x515f5609,"elements.tabs.Tabs.new","elements/tabs/Tabs.hx",5,0x4835ed27)
namespace elements{
namespace tabs{

void Tabs_obj::__construct( ::shared::size::SizeType sizeType){
            	HX_STACKFRAME(&_hx_pos_3fe466c1052a8d32_5_new)
HXDLIN(   5)		super::__construct(sizeType);
            	}

Dynamic Tabs_obj::__CreateEmpty() { return new Tabs_obj; }

void *Tabs_obj::_hx_vtable = 0;

Dynamic Tabs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tabs_obj > _hx_result = new Tabs_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Tabs_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x072f5ff7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x072f5ff7;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}


::hx::ObjectPtr< Tabs_obj > Tabs_obj::__new( ::shared::size::SizeType sizeType) {
	::hx::ObjectPtr< Tabs_obj > __this = new Tabs_obj();
	__this->__construct(sizeType);
	return __this;
}

::hx::ObjectPtr< Tabs_obj > Tabs_obj::__alloc(::hx::Ctx *_hx_ctx, ::shared::size::SizeType sizeType) {
	Tabs_obj *__this = (Tabs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tabs_obj), true, "elements.tabs.Tabs"));
	*(void **)__this = Tabs_obj::_hx_vtable;
	__this->__construct(sizeType);
	return __this;
}

Tabs_obj::Tabs_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tabs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tabs_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tabs_obj::__mClass;

void Tabs_obj::__register()
{
	Tabs_obj _hx_dummy;
	Tabs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.Tabs",97,9d,8f,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tabs_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tabs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tabs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
