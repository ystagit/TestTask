#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_container_Container
#include <elements/container/Container.h>
#endif
#ifndef INCLUDED_elements_container_ContainerView
#include <elements/container/ContainerView.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23b0fc908f5def5f_11_new,"elements.container.ContainerView","new",0xaa268af4,"elements.container.ContainerView.new","elements/container/ContainerView.hx",11,0x380b9e3e)
namespace elements{
namespace container{

void ContainerView_obj::__construct( ::elements::container::Container container){
            	HX_STACKFRAME(&_hx_pos_23b0fc908f5def5f_11_new)
HXDLIN(  11)		super::__construct(container,null());
            	}

Dynamic ContainerView_obj::__CreateEmpty() { return new ContainerView_obj; }

void *ContainerView_obj::_hx_vtable = 0;

Dynamic ContainerView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContainerView_obj > _hx_result = new ContainerView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ContainerView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0e143dbc) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0e143dbc;
			}
		} else {
			return inClassId==(int)0x1b9649d0 || inClassId==(int)0x1ee7691a;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x31b17232) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< ContainerView_obj > ContainerView_obj::__new( ::elements::container::Container container) {
	::hx::ObjectPtr< ContainerView_obj > __this = new ContainerView_obj();
	__this->__construct(container);
	return __this;
}

::hx::ObjectPtr< ContainerView_obj > ContainerView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::container::Container container) {
	ContainerView_obj *__this = (ContainerView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContainerView_obj), true, "elements.container.ContainerView"));
	*(void **)__this = ContainerView_obj::_hx_vtable;
	__this->__construct(container);
	return __this;
}

ContainerView_obj::ContainerView_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ContainerView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ContainerView_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ContainerView_obj::__mClass;

void ContainerView_obj::__register()
{
	ContainerView_obj _hx_dummy;
	ContainerView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.container.ContainerView",02,41,69,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ContainerView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContainerView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContainerView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace container
