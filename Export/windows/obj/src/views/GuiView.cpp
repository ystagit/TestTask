#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_db82b270f8a64937_10_new,"views.GuiView","new",0xea4c4552,"views.GuiView.new","views/GuiView.hx",10,0xf4b7b59f)
HX_LOCAL_STACK_FRAME(_hx_pos_db82b270f8a64937_21_onSyncResize,"views.GuiView","onSyncResize",0x6f1a3d7c,"views.GuiView.onSyncResize","views/GuiView.hx",21,0xf4b7b59f)
HX_LOCAL_STACK_FRAME(_hx_pos_db82b270f8a64937_25_draw,"views.GuiView","draw",0x11de0ad2,"views.GuiView.draw","views/GuiView.hx",25,0xf4b7b59f)
namespace views{

void GuiView_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_STACKFRAME(&_hx_pos_db82b270f8a64937_10_new)
HXLINE(  12)		this->isButton = false;
HXLINE(  15)		super::__construct(model,controller);
HXLINE(  16)		::openfl::events::IEventDispatcher_obj::addEventListener(model,HX_("draw",04,2c,70,42),this->draw_dyn(),null(),null(),null());
HXLINE(  17)		::openfl::events::IEventDispatcher_obj::addEventListener(model,HX_("syncResize",af,3e,18,fb),this->onSyncResize_dyn(),null(),null(),null());
            	}

bool GuiView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
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

void GuiView_obj::onSyncResize( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_db82b270f8a64937_21_onSyncResize)
HXDLIN(  21)		this->super::resize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiView_obj,onSyncResize,(void))

void GuiView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_db82b270f8a64937_25_draw)
HXDLIN(  25)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  26)			 ::shared::Position pos = ::models::IModel_obj::getPosition(this->model);
HXLINE(  27)			 ::shared::size::Size size = ::models::IModel_obj::getSize(this->model);
HXLINE(  29)			 ::shared::Color color = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (this->isButton) {
HXLINE(  30)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  31)				color = ::models::IModel_obj::get_highlight(this->model);
            			}
            			else {
HXLINE(  33)				color = ::models::IModel_obj::getBGColor(this->model);
            			}
HXLINE(  36)			this->get_graphics()->clear();
HXLINE(  37)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  37)			int _hx_tmp2 = color->getColor();
HXDLIN(  37)			_hx_tmp1->beginFill(_hx_tmp2,color->getAlpha());
HXLINE(  38)			 ::openfl::display::Graphics _hx_tmp3 = this->get_graphics();
HXDLIN(  38)			Float _hx_tmp4 = pos->get_x();
HXDLIN(  38)			Float _hx_tmp5 = pos->get_y();
HXDLIN(  38)			Float _hx_tmp6 = size->get_width();
HXDLIN(  38)			_hx_tmp3->drawRect(_hx_tmp4,_hx_tmp5,_hx_tmp6,size->get_height());
HXLINE(  39)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  41)			this->get_graphics()->clear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiView_obj,draw,(void))


GuiView_obj::GuiView_obj()
{
}

::hx::Val GuiView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isButton") ) { return ::hx::Val( isButton ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onSyncResize") ) { return ::hx::Val( onSyncResize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GuiView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isButton") ) { isButton=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GuiView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isButton",7c,fd,49,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GuiView_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(GuiView_obj,isButton),HX_("isButton",7c,fd,49,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GuiView_obj_sStaticStorageInfo = 0;
#endif

static ::String GuiView_obj_sMemberFields[] = {
	HX_("isButton",7c,fd,49,32),
	HX_("onSyncResize",ae,e0,5b,d3),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class GuiView_obj::__mClass;

void GuiView_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("views.GuiView",60,f4,8e,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GuiView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x4fc5ef72 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace views
