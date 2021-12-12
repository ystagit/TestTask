#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListController
#include <elements/tabs/TabListController.h>
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
#ifndef INCLUDED_elements_tabs_tab_Tab
#include <elements/tabs/tab/Tab.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_TabView
#include <elements/tabs/tab/TabView.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_27a141443e738e65_17_new,"elements.tabs.TabListView","new",0x9e9309d1,"elements.tabs.TabListView.new","elements/tabs/TabListView.hx",17,0x07911f1f)
HX_LOCAL_STACK_FRAME(_hx_pos_27a141443e738e65_21_initAfterSettingPartner,"elements.tabs.TabListView","initAfterSettingPartner",0x92839095,"elements.tabs.TabListView.initAfterSettingPartner","elements/tabs/TabListView.hx",21,0x07911f1f)
HX_LOCAL_STACK_FRAME(_hx_pos_27a141443e738e65_32_onPress,"elements.tabs.TabListView","onPress",0x6fdd37d5,"elements.tabs.TabListView.onPress","elements/tabs/TabListView.hx",32,0x07911f1f)
HX_LOCAL_STACK_FRAME(_hx_pos_27a141443e738e65_37_add,"elements.tabs.TabListView","add",0x9e892b92,"elements.tabs.TabListView.add","elements/tabs/TabListView.hx",37,0x07911f1f)
HX_LOCAL_STACK_FRAME(_hx_pos_27a141443e738e65_41_add,"elements.tabs.TabListView","add",0x9e892b92,"elements.tabs.TabListView.add","elements/tabs/TabListView.hx",41,0x07911f1f)
HX_LOCAL_STACK_FRAME(_hx_pos_27a141443e738e65_48_draw,"elements.tabs.TabListView","draw",0x1b833573,"elements.tabs.TabListView.draw","elements/tabs/TabListView.hx",48,0x07911f1f)
namespace elements{
namespace tabs{

void TabListView_obj::__construct( ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller){
            	HX_STACKFRAME(&_hx_pos_27a141443e738e65_17_new)
HXDLIN(  17)		super::__construct(tabList,controller);
            	}

Dynamic TabListView_obj::__CreateEmpty() { return new TabListView_obj; }

void *TabListView_obj::_hx_vtable = 0;

Dynamic TabListView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabListView_obj > _hx_result = new TabListView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TabListView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0b0316ff) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0b0316ff;
				}
			} else {
				return inClassId==(int)0x0c89e854;
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

void TabListView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_27a141443e738e65_21_initAfterSettingPartner)
HXDLIN(  21)		if (::Std_obj::isOfType(this->getParent(),::hx::ClassOf< ::elements::tabs::context::TabContextView >())) {
HXLINE(  22)			 ::elements::tabs::context::TabContextView view = ::hx::TCast<  ::elements::tabs::context::TabContextView >::cast(this->getParent());
HXLINE(  23)			 ::elements::tabs::context::TabContext tabContext = ::hx::TCast<  ::elements::tabs::context::TabContext >::cast(view->getModel());
HXLINE(  24)			 ::elements::tabs::TabList tabList = ::hx::TCast<  ::elements::tabs::TabList >::cast(this->model);
HXLINE(  25)			tabList->set_selected(tabContext->get_value());
HXLINE(  26)			tabList->get_borderColor()->setColor(::shared::Color_obj::GREY);
HXLINE(  27)			this->super::initAfterSettingPartner();
            		}
            	}


void TabListView_obj::onPress( ::elements::tabs::tab::Tab tab){
            	HX_STACKFRAME(&_hx_pos_27a141443e738e65_32_onPress)
HXDLIN(  32)		if (tab->hasHover()) {
HXLINE(  33)			 ::elements::tabs::TabListController _hx_tmp = ::hx::TCast<  ::elements::tabs::TabListController >::cast(this->controller);
HXDLIN(  33)			_hx_tmp->onSelect(tab->get_value());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabListView_obj,onPress,(void))

void TabListView_obj::add(::String k, ::views::GuiComponent _tmp_c){
            	HX_STACKFRAME(&_hx_pos_27a141443e738e65_37_add)
HXDLIN(  37)		 ::Dynamic c = _tmp_c;
HXDLIN(  37)		 ::elements::tabs::TabListView _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)		if (::Std_obj::isOfType(c,::hx::ClassOf< ::elements::tabs::tab::TabView >())) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::elements::tabs::TabListView,_gthis, ::elements::tabs::tab::Tab,tab) HXARGC(1)
            			void _hx_run( ::Dynamic event){
            				HX_STACKFRAME(&_hx_pos_27a141443e738e65_41_add)
HXLINE(  41)				_gthis->onPress(tab);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  39)			 ::elements::tabs::tab::TabView tabView = ::hx::TCast<  ::elements::tabs::tab::TabView >::cast(c);
HXLINE(  40)			 ::elements::tabs::tab::Tab tab = ::hx::TCast<  ::elements::tabs::tab::Tab >::cast(tabView->getModel());
HXLINE(  41)			c->__Field(HX_("addEventListener",cd,0b,64,f1),::hx::paccDynamic)(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis,tab)));
HXLINE(  42)			this->super::add(k,tabView);
            		}
            		else {
HXLINE(  44)			::haxe::Log_obj::trace(HX_("Unable to add a view because it supports tags: <Tab>",a0,72,7b,d7),::hx::SourceInfo(HX_("Source/elements/tabs/TabListView.hx",f3,2b,7e,0c),44,HX_("elements.tabs.TabListView",5f,cd,5b,de),HX_("add",21,f2,49,00)));
            		}
            	}


void TabListView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_27a141443e738e65_48_draw)
HXLINE(  49)		 ::elements::tabs::TabList tabList = ::hx::TCast<  ::elements::tabs::TabList >::cast(this->model);
HXLINE(  51)		if (tabList->get_visible()) {
HXLINE(  52)			 ::shared::Position pos = tabList->getPosition();
HXLINE(  53)			 ::shared::size::Size size = tabList->getSize();
HXLINE(  54)			 ::shared::Color borderColor = ::models::IModel_obj::get_borderColor(this->model);
HXLINE(  56)			 ::shared::Color backgroundColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  57)			bool _hx_tmp;
HXDLIN(  57)			if (this->isButton) {
HXLINE(  57)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  57)				_hx_tmp = false;
            			}
HXDLIN(  57)			if (_hx_tmp) {
HXLINE(  58)				backgroundColor = ::models::IModel_obj::get_highlight(this->model);
            			}
            			else {
HXLINE(  60)				backgroundColor = ::models::IModel_obj::getBGColor(this->model);
            			}
HXLINE(  63)			this->get_graphics()->clear();
HXLINE(  65)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  65)			int _hx_tmp2 = backgroundColor->getColor();
HXDLIN(  65)			_hx_tmp1->beginFill(_hx_tmp2,backgroundColor->getAlpha());
HXLINE(  66)			 ::openfl::display::Graphics _hx_tmp3 = this->get_graphics();
HXDLIN(  66)			Float _hx_tmp4 = pos->get_x();
HXDLIN(  66)			Float _hx_tmp5 = pos->get_y();
HXDLIN(  66)			Float _hx_tmp6 = size->get_width();
HXDLIN(  66)			_hx_tmp3->drawRect(_hx_tmp4,_hx_tmp5,_hx_tmp6,size->get_height());
HXLINE(  68)			 ::openfl::display::Graphics _hx_tmp7 = this->get_graphics();
HXDLIN(  68)			int _hx_tmp8 = borderColor->getColor();
HXDLIN(  68)			_hx_tmp7->beginFill(_hx_tmp8,borderColor->getAlpha());
HXLINE(  69)			 ::openfl::display::Graphics _hx_tmp9 = this->get_graphics();
HXDLIN(  69)			Float _hx_tmp10 = pos->get_x();
HXDLIN(  69)			Float _hx_tmp11 = pos->get_y();
HXDLIN(  69)			Float _hx_tmp12 = ((_hx_tmp11 + size->get_height()) - ( (Float)(1) ));
HXDLIN(  69)			_hx_tmp9->drawRect(_hx_tmp10,_hx_tmp12,size->get_width(),( (Float)(1) ));
HXLINE(  70)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  72)			this->get_graphics()->clear();
            		}
            	}



::hx::ObjectPtr< TabListView_obj > TabListView_obj::__new( ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller) {
	::hx::ObjectPtr< TabListView_obj > __this = new TabListView_obj();
	__this->__construct(tabList,controller);
	return __this;
}

::hx::ObjectPtr< TabListView_obj > TabListView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller) {
	TabListView_obj *__this = (TabListView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabListView_obj), true, "elements.tabs.TabListView"));
	*(void **)__this = TabListView_obj::_hx_vtable;
	__this->__construct(tabList,controller);
	return __this;
}

TabListView_obj::TabListView_obj()
{
}

::hx::Val TabListView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPress") ) { return ::hx::Val( onPress_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabListView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabListView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabListView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("onPress",e4,f1,c5,5e),
	HX_("add",21,f2,49,00),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class TabListView_obj::__mClass;

void TabListView_obj::__register()
{
	TabListView_obj _hx_dummy;
	TabListView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.TabListView",5f,cd,5b,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabListView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabListView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabListView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabListView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
