#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContextView
#include <elements/tabs/context/TabContextView.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanel
#include <elements/tabs/panel/TabPanel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_44b447b0953112bb_12_new,"elements.tabs.panel.TabPanelView","new",0x8dab9569,"elements.tabs.panel.TabPanelView.new","elements/tabs/panel/TabPanelView.hx",12,0x4ff4fae6)
HX_LOCAL_STACK_FRAME(_hx_pos_44b447b0953112bb_15_initAfterSettingPartner,"elements.tabs.panel.TabPanelView","initAfterSettingPartner",0x2c08782d,"elements.tabs.panel.TabPanelView.initAfterSettingPartner","elements/tabs/panel/TabPanelView.hx",15,0x4ff4fae6)
HX_LOCAL_STACK_FRAME(_hx_pos_44b447b0953112bb_21_show,"elements.tabs.panel.TabPanelView","show",0x6bc777d4,"elements.tabs.panel.TabPanelView.show","elements/tabs/panel/TabPanelView.hx",21,0x4ff4fae6)
HX_LOCAL_STACK_FRAME(_hx_pos_44b447b0953112bb_25_hide,"elements.tabs.panel.TabPanelView","hide",0x6482d799,"elements.tabs.panel.TabPanelView.hide","elements/tabs/panel/TabPanelView.hx",25,0x4ff4fae6)
HX_LOCAL_STACK_FRAME(_hx_pos_44b447b0953112bb_29_change,"elements.tabs.panel.TabPanelView","change",0x1776d807,"elements.tabs.panel.TabPanelView.change","elements/tabs/panel/TabPanelView.hx",29,0x4ff4fae6)
HX_LOCAL_STACK_FRAME(_hx_pos_44b447b0953112bb_33_checkVisibility,"elements.tabs.panel.TabPanelView","checkVisibility",0x9496c343,"elements.tabs.panel.TabPanelView.checkVisibility","elements/tabs/panel/TabPanelView.hx",33,0x4ff4fae6)
namespace elements{
namespace tabs{
namespace panel{

void TabPanelView_obj::__construct( ::elements::tabs::panel::TabPanel tabPanel){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_12_new)
HXDLIN(  12)		super::__construct(tabPanel,null());
            	}

Dynamic TabPanelView_obj::__CreateEmpty() { return new TabPanelView_obj; }

void *TabPanelView_obj::_hx_vtable = 0;

Dynamic TabPanelView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabPanelView_obj > _hx_result = new TabPanelView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabPanelView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x4787c01f) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x4787c01f;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void TabPanelView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_15_initAfterSettingPartner)
HXLINE(  16)		this->super::initAfterSettingPartner();
HXLINE(  17)		this->checkVisibility();
            	}


void TabPanelView_obj::show( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_21_show)
HXDLIN(  21)		this->checkVisibility();
            	}


void TabPanelView_obj::hide( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_25_hide)
HXDLIN(  25)		this->checkVisibility();
            	}


void TabPanelView_obj::change( ::models::ModelEvent _tmp_e){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_29_change)
HXDLIN(  29)		 ::openfl::events::Event e = ( ( ::openfl::events::Event)(_tmp_e) );
HXDLIN(  29)		this->checkVisibility();
            	}


void TabPanelView_obj::checkVisibility(){
            	HX_STACKFRAME(&_hx_pos_44b447b0953112bb_33_checkVisibility)
HXDLIN(  33)		if (::Std_obj::isOfType(this->getParent(),::hx::ClassOf< ::elements::tabs::context::TabContextView >())) {
HXLINE(  34)			 ::elements::tabs::context::TabContextView view = ::hx::TCast<  ::elements::tabs::context::TabContextView >::cast(this->getParent());
HXLINE(  35)			 ::elements::tabs::context::TabContext tabContext = ::hx::TCast<  ::elements::tabs::context::TabContext >::cast(view->getModel());
HXLINE(  36)			 ::elements::tabs::panel::TabPanel tabPanel = ::hx::TCast<  ::elements::tabs::panel::TabPanel >::cast(this->model);
HXLINE(  38)			bool _hx_tmp;
HXDLIN(  38)			if (tabContext->get_visible()) {
HXLINE(  38)				::String _hx_tmp1 = tabContext->get_value();
HXDLIN(  38)				_hx_tmp = (_hx_tmp1 == tabPanel->get_value());
            			}
            			else {
HXLINE(  38)				_hx_tmp = false;
            			}
HXDLIN(  38)			if (_hx_tmp) {
HXLINE(  39)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  39)				::String _hx_tmp1 = ((HX_("Show <TabPanel value='",e3,76,13,ec) + tabPanel->get_value()) + HX_("' >",05,b4,1d,00));
HXDLIN(  39)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("Source/elements/tabs/panel/TabPanelView.hx",92,f0,c7,2d),39,HX_("elements.tabs.panel.TabPanelView",f7,ac,30,f3),HX_("checkVisibility",ba,14,67,4c)));
HXLINE(  40)				this->super::show(null());
            			}
            			else {
HXLINE(  41)				if (tabPanel->get_visible()) {
HXLINE(  42)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  42)					::String _hx_tmp1 = ((HX_("Hide <TabPanel value='",e8,2b,23,6d) + tabPanel->get_value()) + HX_("' >",05,b4,1d,00));
HXDLIN(  42)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("Source/elements/tabs/panel/TabPanelView.hx",92,f0,c7,2d),42,HX_("elements.tabs.panel.TabPanelView",f7,ac,30,f3),HX_("checkVisibility",ba,14,67,4c)));
HXLINE(  43)					this->super::hide(null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabPanelView_obj,checkVisibility,(void))


::hx::ObjectPtr< TabPanelView_obj > TabPanelView_obj::__new( ::elements::tabs::panel::TabPanel tabPanel) {
	::hx::ObjectPtr< TabPanelView_obj > __this = new TabPanelView_obj();
	__this->__construct(tabPanel);
	return __this;
}

::hx::ObjectPtr< TabPanelView_obj > TabPanelView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::panel::TabPanel tabPanel) {
	TabPanelView_obj *__this = (TabPanelView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabPanelView_obj), true, "elements.tabs.panel.TabPanelView"));
	*(void **)__this = TabPanelView_obj::_hx_vtable;
	__this->__construct(tabPanel);
	return __this;
}

TabPanelView_obj::TabPanelView_obj()
{
}

::hx::Val TabPanelView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkVisibility") ) { return ::hx::Val( checkVisibility_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabPanelView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabPanelView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabPanelView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("change",70,91,72,b7),
	HX_("checkVisibility",ba,14,67,4c),
	::String(null()) };

::hx::Class TabPanelView_obj::__mClass;

void TabPanelView_obj::__register()
{
	TabPanelView_obj _hx_dummy;
	TabPanelView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.panel.TabPanelView",f7,ac,30,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabPanelView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabPanelView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabPanelView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabPanelView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace panel
