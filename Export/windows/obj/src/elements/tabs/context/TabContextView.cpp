#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListView
#include <elements/tabs/TabListView.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContextView
#include <elements/tabs/context/TabContextView.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanelView
#include <elements/tabs/panel/TabPanelView.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b30beddc0805b604_10_new,"elements.tabs.context.TabContextView","new",0xc9d25f09,"elements.tabs.context.TabContextView.new","elements/tabs/context/TabContextView.hx",10,0x55af5b06)
HX_LOCAL_STACK_FRAME(_hx_pos_b30beddc0805b604_14_add,"elements.tabs.context.TabContextView","add",0xc9c880ca,"elements.tabs.context.TabContextView.add","elements/tabs/context/TabContextView.hx",14,0x55af5b06)
namespace elements{
namespace tabs{
namespace context{

void TabContextView_obj::__construct( ::elements::tabs::context::TabContext tabContext){
            	HX_STACKFRAME(&_hx_pos_b30beddc0805b604_10_new)
HXDLIN(  10)		super::__construct(tabContext,null());
            	}

Dynamic TabContextView_obj::__CreateEmpty() { return new TabContextView_obj; }

void *TabContextView_obj::_hx_vtable = 0;

Dynamic TabContextView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabContextView_obj > _hx_result = new TabContextView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabContextView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0f164eb5) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f164eb5;
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

void TabContextView_obj::add(::String k, ::views::GuiComponent _tmp_c){
            	HX_STACKFRAME(&_hx_pos_b30beddc0805b604_14_add)
HXDLIN(  14)		 ::Dynamic c = _tmp_c;
HXDLIN(  14)		if (::Std_obj::isOfType(c,::hx::ClassOf< ::elements::tabs::TabListView >())) {
HXLINE(  15)			 ::elements::tabs::TabListView tabListView = ::hx::TCast<  ::elements::tabs::TabListView >::cast(c);
HXLINE(  16)			::openfl::events::IEventDispatcher_obj::addEventListener(tabListView->getModel(),HX_("changeTabContext",aa,49,01,68),this->change_dyn(),null(),null(),null());
HXLINE(  17)			this->super::add(k,tabListView);
            		}
            		else {
HXLINE(  18)			if (::Std_obj::isOfType(c,::hx::ClassOf< ::elements::tabs::panel::TabPanelView >())) {
HXLINE(  19)				 ::elements::tabs::panel::TabPanelView tabPanelView = ::hx::TCast<  ::elements::tabs::panel::TabPanelView >::cast(c);
HXLINE(  20)				this->super::add(k,tabPanelView);
            			}
            			else {
HXLINE(  22)				::haxe::Log_obj::trace(HX_("Unable to add a view because it supports tags: <TabList>, <TabPanel>",e9,18,cb,75),::hx::SourceInfo(HX_("Source/elements/tabs/context/TabContextView.hx",b2,96,8c,b9),22,HX_("elements.tabs.context.TabContextView",97,26,8a,72),HX_("add",21,f2,49,00)));
            			}
            		}
            	}



::hx::ObjectPtr< TabContextView_obj > TabContextView_obj::__new( ::elements::tabs::context::TabContext tabContext) {
	::hx::ObjectPtr< TabContextView_obj > __this = new TabContextView_obj();
	__this->__construct(tabContext);
	return __this;
}

::hx::ObjectPtr< TabContextView_obj > TabContextView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::context::TabContext tabContext) {
	TabContextView_obj *__this = (TabContextView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabContextView_obj), true, "elements.tabs.context.TabContextView"));
	*(void **)__this = TabContextView_obj::_hx_vtable;
	__this->__construct(tabContext);
	return __this;
}

TabContextView_obj::TabContextView_obj()
{
}

::hx::Val TabContextView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabContextView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabContextView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabContextView_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	::String(null()) };

::hx::Class TabContextView_obj::__mClass;

void TabContextView_obj::__register()
{
	TabContextView_obj _hx_dummy;
	TabContextView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.context.TabContextView",97,26,8a,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabContextView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabContextView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabContextView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabContextView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace context
