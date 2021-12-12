#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_button_Button
#include <elements/button/Button.h>
#endif
#ifndef INCLUDED_elements_button_ButtonView
#include <elements/button/ButtonView.h>
#endif
#ifndef INCLUDED_elements_modal_Modal
#include <elements/modal/Modal.h>
#endif
#ifndef INCLUDED_elements_modal_ModalEvent
#include <elements/modal/ModalEvent.h>
#endif
#ifndef INCLUDED_elements_modal_ModalView
#include <elements/modal/ModalView.h>
#endif
#ifndef INCLUDED_elements_row_Row
#include <elements/row/Row.h>
#endif
#ifndef INCLUDED_elements_row_RowView
#include <elements/row/RowView.h>
#endif
#ifndef INCLUDED_elements_text_Text
#include <elements/text/Text.h>
#endif
#ifndef INCLUDED_elements_text_TextView
#include <elements/text/TextView.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0a3a65c542119dc6_16_new,"elements.modal.ModalView","new",0x458a0b4c,"elements.modal.ModalView.new","elements/modal/ModalView.hx",16,0x992d7366)
HX_LOCAL_STACK_FRAME(_hx_pos_0a3a65c542119dc6_38_initAfterSettingPartner,"elements.modal.ModalView","initAfterSettingPartner",0xa7bb5190,"elements.modal.ModalView.initAfterSettingPartner","elements/modal/ModalView.hx",38,0x992d7366)
HX_LOCAL_STACK_FRAME(_hx_pos_0a3a65c542119dc6_21_initAfterSettingPartner,"elements.modal.ModalView","initAfterSettingPartner",0xa7bb5190,"elements.modal.ModalView.initAfterSettingPartner","elements/modal/ModalView.hx",21,0x992d7366)
HX_LOCAL_STACK_FRAME(_hx_pos_0a3a65c542119dc6_42_addRow,"elements.modal.ModalView","addRow",0xf1f0530d,"elements.modal.ModalView.addRow","elements/modal/ModalView.hx",42,0x992d7366)
namespace elements{
namespace modal{

void ModalView_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_STACKFRAME(&_hx_pos_0a3a65c542119dc6_16_new)
HXLINE(  17)		super::__construct(model,controller);
HXLINE(  18)		::openfl::events::IEventDispatcher_obj::addEventListener(model,HX_("showModal",f0,85,bc,3a),this->show_dyn(),null(),null(),null());
            	}

Dynamic ModalView_obj::__CreateEmpty() { return new ModalView_obj; }

void *ModalView_obj::_hx_vtable = 0;

Dynamic ModalView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModalView_obj > _hx_result = new ModalView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ModalView_obj::_hx_isInstanceOf(int inClassId) {
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
				return inClassId==(int)0x2a7078bc || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ModalView_obj::initAfterSettingPartner(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::elements::modal::ModalView,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_0a3a65c542119dc6_38_initAfterSettingPartner)
HXLINE(  38)			_gthis->hide(null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_0a3a65c542119dc6_21_initAfterSettingPartner)
HXDLIN(  21)		 ::elements::modal::ModalView _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  22)		this->super::initAfterSettingPartner();
HXLINE(  23)		 ::elements::modal::Modal modal = ::hx::TCast<  ::elements::modal::Modal >::cast(this->model);
HXLINE(  24)		modal->set_visible(false);
HXLINE(  27)		 ::elements::row::RowView titleRow = this->addRow(HX_("100%",94,0a,88,20),HX_("10%",66,58,25,00));
HXLINE(  28)		 ::elements::row::RowView bodyRow = this->addRow(HX_("100%",94,0a,88,20),HX_("80%",2d,a8,2a,00));
HXLINE(  29)		 ::elements::row::RowView bottomRow = this->addRow(HX_("100%",94,0a,88,20),HX_("10%",66,58,25,00));
HXLINE(  31)		modal->get_title()->set_value(HX_("It's my title",ed,1f,eb,ed));
HXLINE(  32)		 ::elements::text::TextView modelView =  ::elements::text::TextView_obj::__alloc( HX_CTX ,modal->get_title());
HXLINE(  33)		titleRow->add(::elements::ElementType_obj::TEXT,modelView);
HXLINE(  35)		 ::elements::button::Button button =  ::elements::button::Button_obj::__alloc( HX_CTX );
HXLINE(  36)		button->set_title(HX_("OK",1c,45,00,00));
HXLINE(  37)		 ::elements::button::ButtonView buttonView =  ::elements::button::ButtonView_obj::__alloc( HX_CTX ,button);
HXLINE(  38)		buttonView->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  39)		bottomRow->add(::elements::ElementType_obj::BUTTON,buttonView);
            	}


 ::elements::row::RowView ModalView_obj::addRow( ::Dynamic w, ::Dynamic h){
            	HX_GC_STACKFRAME(&_hx_pos_0a3a65c542119dc6_42_addRow)
HXLINE(  43)		 ::elements::row::Row row =  ::elements::row::Row_obj::__alloc( HX_CTX );
HXLINE(  44)		row->setSize(w,h);
HXLINE(  45)		 ::elements::row::RowView rowView =  ::elements::row::RowView_obj::__alloc( HX_CTX ,row,null());
HXLINE(  46)		this->add(::elements::ElementType_obj::ROW,rowView);
HXLINE(  47)		return rowView;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ModalView_obj,addRow,return )


::hx::ObjectPtr< ModalView_obj > ModalView_obj::__new(::Dynamic model,::Dynamic controller) {
	::hx::ObjectPtr< ModalView_obj > __this = new ModalView_obj();
	__this->__construct(model,controller);
	return __this;
}

::hx::ObjectPtr< ModalView_obj > ModalView_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller) {
	ModalView_obj *__this = (ModalView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModalView_obj), true, "elements.modal.ModalView"));
	*(void **)__this = ModalView_obj::_hx_vtable;
	__this->__construct(model,controller);
	return __this;
}

ModalView_obj::ModalView_obj()
{
}

::hx::Val ModalView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"addRow") ) { return ::hx::Val( addRow_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ModalView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ModalView_obj_sStaticStorageInfo = 0;
#endif

static ::String ModalView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("addRow",79,f2,07,9f),
	::String(null()) };

::hx::Class ModalView_obj::__mClass;

void ModalView_obj::__register()
{
	ModalView_obj _hx_dummy;
	ModalView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.modal.ModalView",5a,b5,3f,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModalView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModalView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModalView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModalView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace modal
