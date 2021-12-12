#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_button_ButtonView
#include <elements/button/ButtonView.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_TabView
#include <elements/tabs/tab/TabView.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d062945e9da82bdc_20_new,"elements.text.TextView","new",0xd9eec82e,"elements.text.TextView.new","elements/text/TextView.hx",20,0x666516a2)
HX_LOCAL_STACK_FRAME(_hx_pos_d062945e9da82bdc_27_initAfterSettingPartner,"elements.text.TextView","initAfterSettingPartner",0xfeb68b72,"elements.text.TextView.initAfterSettingPartner","elements/text/TextView.hx",27,0x666516a2)
HX_LOCAL_STACK_FRAME(_hx_pos_d062945e9da82bdc_45_draw,"elements.text.TextView","draw",0xd06e0876,"elements.text.TextView.draw","elements/text/TextView.hx",45,0x666516a2)
HX_LOCAL_STACK_FRAME(_hx_pos_d062945e9da82bdc_76_onScroll,"elements.text.TextView","onScroll",0xc2dbcbfe,"elements.text.TextView.onScroll","elements/text/TextView.hx",76,0x666516a2)
namespace elements{
namespace text{

void TextView_obj::__construct( ::elements::text::Text text){
            	HX_GC_STACKFRAME(&_hx_pos_d062945e9da82bdc_20_new)
HXLINE(  21)		super::__construct(text,null());
HXLINE(  22)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  23)		this->format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  24)		this->textField->addEventListener(HX_("mouseWheel",36,28,87,e7),this->onScroll_dyn(),null(),null(),null());
            	}

Dynamic TextView_obj::__CreateEmpty() { return new TextView_obj; }

void *TextView_obj::_hx_vtable = 0;

Dynamic TextView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextView_obj > _hx_result = new TextView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextView_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x65dcc536) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x65dcc536;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void TextView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_d062945e9da82bdc_27_initAfterSettingPartner)
HXLINE(  28)		this->super::initAfterSettingPartner();
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if (!(::Std_obj::isOfType(this->getParent(),::hx::ClassOf< ::elements::tabs::tab::TabView >()))) {
HXLINE(  30)			_hx_tmp = ::Std_obj::isOfType(this->getParent(),::hx::ClassOf< ::elements::button::ButtonView >());
            		}
            		else {
HXLINE(  30)			_hx_tmp = true;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  33)			 ::elements::text::Text text = ::hx::TCast<  ::elements::text::Text >::cast(this->model);
HXLINE(  34)			text->set_alignByVer(0);
HXLINE(  35)			text->set_alignByHor(0);
HXLINE(  36)			text->set_fontSize(20);
HXLINE(  37)			text->get_textColor()->setColor(::shared::Color_obj::PRIMARY);
HXLINE(  38)			text->get_highlight()->setColor(::shared::Color_obj::HIGHLIGHT_PRIMARY);
            		}
HXLINE(  41)		this->addChild(this->textField);
            	}


void TextView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_d062945e9da82bdc_45_draw)
HXDLIN(  45)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  46)			 ::elements::text::Text textElement = ::hx::TCast<  ::elements::text::Text >::cast(this->model);
HXLINE(  47)			 ::shared::Position pos = textElement->getPosition();
HXLINE(  48)			 ::shared::size::Size size = textElement->getSize();
HXLINE(  50)			this->textField->set_visible(true);
HXLINE(  51)			this->textField->set_selectable(false);
HXLINE(  52)			this->format->font = textElement->get_font();
HXLINE(  53)			this->format->size = textElement->get_fontSize();
HXLINE(  54)			this->format->align = textElement->get_alignByHor();
HXLINE(  55)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  55)			_hx_tmp->set_width(size->get_width());
HXLINE(  56)			 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN(  56)			_hx_tmp1->set_height(size->get_height());
HXLINE(  57)			 ::openfl::text::TextField _hx_tmp2 = this->textField;
HXDLIN(  57)			int _hx_tmp3;
HXDLIN(  57)			if (textElement->hasHover()) {
HXLINE(  57)				_hx_tmp3 = textElement->get_highlight()->getColor();
            			}
            			else {
HXLINE(  57)				_hx_tmp3 = textElement->get_textColor()->getColor();
            			}
HXDLIN(  57)			_hx_tmp2->set_textColor(_hx_tmp3);
HXLINE(  60)			 ::openfl::text::TextField _hx_tmp4 = this->textField;
HXDLIN(  60)			_hx_tmp4->set_text(textElement->get_value());
HXLINE(  61)			this->textField->setTextFormat(this->format,null(),null());
HXLINE(  63)			 ::openfl::text::TextField _hx_tmp5 = this->textField;
HXDLIN(  63)			_hx_tmp5->set_x(pos->get_x());
HXLINE(  64)			if (::hx::IsEq( 0,textElement->get_alignByVer() )) {
HXLINE(  65)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  65)				Float _hx_tmp1 = pos->get_y();
HXDLIN(  65)				Float _hx_tmp2 = this->textField->get_height();
HXDLIN(  65)				_hx_tmp->set_y(((_hx_tmp1 + ((_hx_tmp2 - this->textField->get_textHeight()) * ((Float)0.5))) - ( (Float)(2) )));
            			}
            			else {
HXLINE(  66)				if (::hx::IsEq( 5,textElement->get_alignByVer() )) {
HXLINE(  67)					 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  67)					_hx_tmp->set_y(pos->get_y());
            				}
            			}
            		}
            		else {
HXLINE(  70)			this->get_graphics()->clear();
HXLINE(  71)			this->textField->set_visible(false);
            		}
            	}


void TextView_obj::onScroll( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_d062945e9da82bdc_76_onScroll)
HXDLIN(  76)		if ((e->delta > 0)) {
HXLINE(  77)			 ::openfl::text::TextField fh = this->textField;
HXDLIN(  77)			fh->set_scrollH((fh->get_scrollH() + 30));
            		}
            		else {
HXLINE(  78)			if ((e->delta < 0)) {
HXLINE(  79)				 ::openfl::text::TextField fh = this->textField;
HXDLIN(  79)				fh->set_scrollH((fh->get_scrollH() - 30));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextView_obj,onScroll,(void))


::hx::ObjectPtr< TextView_obj > TextView_obj::__new( ::elements::text::Text text) {
	::hx::ObjectPtr< TextView_obj > __this = new TextView_obj();
	__this->__construct(text);
	return __this;
}

::hx::ObjectPtr< TextView_obj > TextView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::text::Text text) {
	TextView_obj *__this = (TextView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextView_obj), true, "elements.text.TextView"));
	*(void **)__this = TextView_obj::_hx_vtable;
	__this->__construct(text);
	return __this;
}

TextView_obj::TextView_obj()
{
}

void TextView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextView);
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(format,"format");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(format,"format");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScroll") ) { return ::hx::Val( onScroll_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextView_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextView_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextView_obj_sStaticStorageInfo = 0;
#endif

static ::String TextView_obj_sMemberFields[] = {
	HX_("textField",cd,24,81,99),
	HX_("format",37,8f,8e,fd),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("draw",04,2c,70,42),
	HX_("onScroll",8c,ce,11,27),
	::String(null()) };

::hx::Class TextView_obj::__mClass;

void TextView_obj::__register()
{
	TextView_obj _hx_dummy;
	TextView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.text.TextView",3c,d9,c7,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace text
