#include <hxcpp.h>

#ifndef INCLUDED_elements_container_Container
#include <elements/container/Container.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aaea7d2edd5ce40b_8_new,"elements.container.Container","new",0x55fc836f,"elements.container.Container.new","elements/container/Container.hx",8,0x121a4523)
namespace elements{
namespace container{

void Container_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aaea7d2edd5ce40b_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic Container_obj::__CreateEmpty() { return new Container_obj; }

void *Container_obj::_hx_vtable = 0;

Dynamic Container_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Container_obj > _hx_result = new Container_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Container_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x54b037b7;
	}
}


::hx::ObjectPtr< Container_obj > Container_obj::__new() {
	::hx::ObjectPtr< Container_obj > __this = new Container_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Container_obj > Container_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Container_obj *__this = (Container_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Container_obj), true, "elements.container.Container"));
	*(void **)__this = Container_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Container_obj::Container_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Container_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Container_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Container_obj::__mClass;

void Container_obj::__register()
{
	Container_obj _hx_dummy;
	Container_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.container.Container",fd,9f,a4,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Container_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Container_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Container_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace container
