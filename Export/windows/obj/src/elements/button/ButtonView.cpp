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
#ifndef INCLUDED_shared_align_Align
#include <shared/align/Align.h>
#endif
#ifndef INCLUDED_shared_align_AlignType
#include <shared/align/AlignType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8b668bfa49591fa9_15_new,"elements.button.ButtonView","new",0x2073e58e,"elements.button.ButtonView.new","elements/button/ButtonView.hx",15,0x2cbe3f82)
HX_LOCAL_STACK_FRAME(_hx_pos_8b668bfa49591fa9_20_initAfterSettingPartner,"elements.button.ButtonView","initAfterSettingPartner",0x909e98d2,"elements.button.ButtonView.initAfterSettingPartner","elements/button/ButtonView.hx",20,0x2cbe3f82)
HX_LOCAL_STACK_FRAME(_hx_pos_8b668bfa49591fa9_33_draw,"elements.button.ButtonView","draw",0x3e629f16,"elements.button.ButtonView.draw","elements/button/ButtonView.hx",33,0x2cbe3f82)
HX_LOCAL_STACK_FRAME(_hx_pos_8b668bfa49591fa9_56_addText,"elements.button.ButtonView","addText",0x1ff4539c,"elements.button.ButtonView.addText","elements/button/ButtonView.hx",56,0x2cbe3f82)
namespace elements{
namespace button{

void ButtonView_obj::__construct( ::elements::button::Button button){
            	HX_STACKFRAME(&_hx_pos_8b668bfa49591fa9_15_new)
HXLINE(  16)		super::__construct(button,null());
HXLINE(  17)		this->isButton = true;
            	}

Dynamic ButtonView_obj::__CreateEmpty() { return new ButtonView_obj; }

void *ButtonView_obj::_hx_vtable = 0;

Dynamic ButtonView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonView_obj > _hx_result = new ButtonView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x441b3e80) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x441b3e80;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ButtonView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_8b668bfa49591fa9_20_initAfterSettingPartner)
HXLINE(  21)		 ::elements::button::Button button = ::hx::TCast<  ::elements::button::Button >::cast(this->model);
HXLINE(  22)		button->setSize(HX_("98%",66,71,2b,00),HX_("98%",66,71,2b,00));
HXLINE(  23)		button->setBGColor(::shared::Color_obj::LIGHT);
HXLINE(  24)		button->get_align()->set_alignTypeByHor(::shared::align::AlignType_obj::CENTER_dyn());
HXLINE(  25)		button->get_align()->set_alignTypeByVer(::shared::align::AlignType_obj::CENTER_dyn());
HXLINE(  26)		if (::hx::IsNotNull( button->get_title() )) {
HXLINE(  27)			this->addText(button->get_title());
            		}
HXLINE(  29)		this->super::initAfterSettingPartner();
            	}


void ButtonView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_8b668bfa49591fa9_33_draw)
HXDLIN(  33)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  34)			 ::shared::Position pos = ::models::IModel_obj::getPosition(this->model);
HXLINE(  35)			 ::shared::size::Size size = ::models::IModel_obj::getSize(this->model);
HXLINE(  37)			 ::shared::Color backgroundColor = ::models::IModel_obj::getBGColor(this->model);
HXLINE(  39)			 ::shared::Color borderColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  40)			bool _hx_tmp;
HXDLIN(  40)			if (this->isButton) {
HXLINE(  40)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  40)				_hx_tmp = false;
            			}
HXDLIN(  40)			if (_hx_tmp) {
HXLINE(  41)				borderColor = ::models::IModel_obj::get_highlight(this->model);
            			}
            			else {
HXLINE(  43)				borderColor = ::models::IModel_obj::get_borderColor(this->model);
            			}
HXLINE(  46)			this->get_graphics()->clear();
HXLINE(  47)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  47)			int _hx_tmp2 = backgroundColor->getColor();
HXDLIN(  47)			_hx_tmp1->beginFill(_hx_tmp2,backgroundColor->getAlpha());
HXLINE(  48)			 ::openfl::display::Graphics _hx_tmp3 = this->get_graphics();
HXDLIN(  48)			_hx_tmp3->lineStyle(1,borderColor->getColor(),1,null(),null(),null(),null(),null());
HXLINE(  49)			 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN(  49)			Float _hx_tmp5 = pos->get_x();
HXDLIN(  49)			Float _hx_tmp6 = pos->get_y();
HXDLIN(  49)			Float _hx_tmp7 = size->get_width();
HXDLIN(  49)			_hx_tmp4->drawRect(_hx_tmp5,_hx_tmp6,_hx_tmp7,size->get_height());
HXLINE(  50)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  52)			this->get_graphics()->clear();
            		}
            	}


void ButtonView_obj::addText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_8b668bfa49591fa9_56_addText)
HXLINE(  57)		 ::elements::text::Text model =  ::elements::text::Text_obj::__alloc( HX_CTX );
HXLINE(  58)		model->set_value(text);
HXLINE(  59)		 ::elements::text::TextView modelView =  ::elements::text::TextView_obj::__alloc( HX_CTX ,model);
HXLINE(  60)		this->add(::elements::ElementType_obj::TEXT,modelView);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonView_obj,addText,(void))


::hx::ObjectPtr< ButtonView_obj > ButtonView_obj::__new( ::elements::button::Button button) {
	::hx::ObjectPtr< ButtonView_obj > __this = new ButtonView_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonView_obj > ButtonView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::button::Button button) {
	ButtonView_obj *__this = (ButtonView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonView_obj), true, "elements.button.ButtonView"));
	*(void **)__this = ButtonView_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonView_obj::ButtonView_obj()
{
}

::hx::Val ButtonView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ButtonView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ButtonView_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("draw",04,2c,70,42),
	HX_("addText",6e,0f,37,89),
	::String(null()) };

::hx::Class ButtonView_obj::__mClass;

void ButtonView_obj::__register()
{
	ButtonView_obj _hx_dummy;
	ButtonView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.button.ButtonView",9c,c6,5a,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace button
