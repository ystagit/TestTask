#include <hxcpp.h>

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
#ifndef INCLUDED_scenes_root_RootScene
#include <scenes/root/RootScene.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db672c52c647bbde_8_new,"scenes.root.RootScene","new",0xf2f67cb7,"scenes.root.RootScene.new","scenes/root/RootScene.hx",8,0x158032f9)
namespace scenes{
namespace root{

void RootScene_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_db672c52c647bbde_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic RootScene_obj::__CreateEmpty() { return new RootScene_obj; }

void *RootScene_obj::_hx_vtable = 0;

Dynamic RootScene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RootScene_obj > _hx_result = new RootScene_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RootScene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18aa0b01) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x18aa0b01;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}


::hx::ObjectPtr< RootScene_obj > RootScene_obj::__new() {
	::hx::ObjectPtr< RootScene_obj > __this = new RootScene_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RootScene_obj > RootScene_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RootScene_obj *__this = (RootScene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RootScene_obj), true, "scenes.root.RootScene"));
	*(void **)__this = RootScene_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RootScene_obj::RootScene_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RootScene_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RootScene_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RootScene_obj::__mClass;

void RootScene_obj::__register()
{
	RootScene_obj _hx_dummy;
	RootScene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.RootScene",45,55,46,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RootScene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RootScene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RootScene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scenes
} // end namespace root
