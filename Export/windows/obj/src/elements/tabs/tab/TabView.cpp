#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_Tab
#include <elements/tabs/tab/Tab.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_TabView
#include <elements/tabs/tab/TabView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a18bddc038a2e2cb_12_new,"elements.tabs.tab.TabView","new",0x9d238d3a,"elements.tabs.tab.TabView.new","elements/tabs/tab/TabView.hx",12,0x23682717)
HX_LOCAL_STACK_FRAME(_hx_pos_a18bddc038a2e2cb_17_draw,"elements.tabs.tab.TabView","draw",0xdb65adea,"elements.tabs.tab.TabView.draw","elements/tabs/tab/TabView.hx",17,0x23682717)
namespace elements{
namespace tabs{
namespace tab{

void TabView_obj::__construct( ::elements::tabs::tab::Tab tab){
            	HX_STACKFRAME(&_hx_pos_a18bddc038a2e2cb_12_new)
HXLINE(  13)		super::__construct(tab,null());
HXLINE(  14)		this->isButton = true;
            	}

Dynamic TabView_obj::__CreateEmpty() { return new TabView_obj; }

void *TabView_obj::_hx_vtable = 0;

Dynamic TabView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabView_obj > _hx_result = new TabView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x02d0eaa6) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x02d0eaa6;
				} else {
					return inClassId==(int)0x0330636f;
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

void TabView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_a18bddc038a2e2cb_17_draw)
HXLINE(  18)		 ::elements::tabs::tab::Tab tab = ::hx::TCast<  ::elements::tabs::tab::Tab >::cast(this->model);
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (tab->get_visible()) {
HXLINE(  20)			_hx_tmp = tab->get_active();
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			 ::shared::Position pos = ::models::IModel_obj::getPosition(this->model);
HXLINE(  22)			 ::shared::size::Size size = ::models::IModel_obj::getSize(this->model);
HXLINE(  24)			 ::shared::Color borderColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  25)			bool _hx_tmp;
HXDLIN(  25)			if (this->isButton) {
HXLINE(  25)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  25)				_hx_tmp = false;
            			}
HXDLIN(  25)			if (_hx_tmp) {
HXLINE(  26)				borderColor = ::models::IModel_obj::get_highlight(this->model);
            			}
            			else {
HXLINE(  28)				borderColor = ::models::IModel_obj::get_borderColor(this->model);
            			}
HXLINE(  31)			this->get_graphics()->clear();
HXLINE(  32)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  32)			int _hx_tmp2 = borderColor->getColor();
HXDLIN(  32)			_hx_tmp1->beginFill(_hx_tmp2,borderColor->getAlpha());
HXLINE(  33)			 ::openfl::display::Graphics _hx_tmp3 = this->get_graphics();
HXDLIN(  33)			Float _hx_tmp4 = pos->get_x();
HXDLIN(  33)			Float _hx_tmp5 = pos->get_y();
HXDLIN(  33)			Float _hx_tmp6 = ((_hx_tmp5 + size->get_height()) - ( (Float)(3) ));
HXDLIN(  33)			_hx_tmp3->drawRect(_hx_tmp4,_hx_tmp6,size->get_width(),( (Float)(3) ));
HXLINE(  34)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  36)			this->get_graphics()->clear();
            		}
            	}



::hx::ObjectPtr< TabView_obj > TabView_obj::__new( ::elements::tabs::tab::Tab tab) {
	::hx::ObjectPtr< TabView_obj > __this = new TabView_obj();
	__this->__construct(tab);
	return __this;
}

::hx::ObjectPtr< TabView_obj > TabView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::tab::Tab tab) {
	TabView_obj *__this = (TabView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabView_obj), true, "elements.tabs.tab.TabView"));
	*(void **)__this = TabView_obj::_hx_vtable;
	__this->__construct(tab);
	return __this;
}

TabView_obj::TabView_obj()
{
}

::hx::Val TabView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabView_obj_sMemberFields[] = {
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class TabView_obj::__mClass;

void TabView_obj::__register()
{
	TabView_obj _hx_dummy;
	TabView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.tabs.tab.TabView",48,28,5a,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace tabs
} // end namespace tab
