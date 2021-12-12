#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_Tabs
#include <elements/tabs/Tabs.h>
#endif
#ifndef INCLUDED_elements_tabs_TabsView
#include <elements/tabs/TabsView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f9c5ab739252adbe_8_new,"elements.tabs.TabsView","new",0xd00fb28e,"elements.tabs.TabsView.new","elements/tabs/TabsView.hx",8,0xb6b59842)
namespace elements{
namespace tabs{

void TabsView_obj::__construct( ::elements::tabs::Tabs tab){
            	HX_STACKFRAME(&_hx_pos_f9c5ab739252adbe_8_new)
HXDLIN(   8)		super::__construct(tab,null());
            	}

Dynamic TabsView_obj::__CreateEmpty() { return new TabsView_obj; }

void *TabsView_obj::_hx_vtable = 0;

Dynamic TabsView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabsView_obj > _hx_result = new TabsView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabsView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x1b9649d0) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x1b9649d0;
			}
		} else {
			return inClassId==(int)0x1ee7691a || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x31b17232) {
				return inClassId==(int)0x21f29898 || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< TabsView_obj > TabsView_obj::__new( ::elements::tabs::Tabs tab) {
	::hx::ObjectPtr< TabsView_obj > __this = new TabsView_obj();
	__this->__construct(tab);
	return __this;
}

::hx::ObjectPtr< TabsView_obj > TabsView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::Tabs tab) {
	TabsView_obj *__this = (TabsView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabsView_obj), true, "elements.tabs.TabsView"));
	*(void **)__this = TabsView_obj::_hx_vtable;
	__this->__construct(tab);
	return __this;
}

TabsView_obj::TabsView_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabsView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabsView_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TabsView_obj::__mClass;

void TabsView_obj::__register()
{
	TabsView_obj _hx_dummy;
	TabsView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.TabsView",9c,13,cc,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TabsView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabsView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabsView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
