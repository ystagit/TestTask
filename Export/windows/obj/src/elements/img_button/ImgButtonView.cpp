#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
#endif
#ifndef INCLUDED_elements_image_ImageView
#include <elements/image/ImageView.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButton
#include <elements/img_button/ImgButton.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButtonView
#include <elements/img_button/ImgButtonView.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a5281e900586e653_16_new,"elements.img_button.ImgButtonView","new",0xbd0fa543,"elements.img_button.ImgButtonView.new","elements/img_button/ImgButtonView.hx",16,0x9036a12d)
HX_LOCAL_STACK_FRAME(_hx_pos_a5281e900586e653_22_initAfterSettingPartner,"elements.img_button.ImgButtonView","initAfterSettingPartner",0x3c635107,"elements.img_button.ImgButtonView.initAfterSettingPartner","elements/img_button/ImgButtonView.hx",22,0x9036a12d)
HX_LOCAL_STACK_FRAME(_hx_pos_a5281e900586e653_35_draw,"elements.img_button.ImgButtonView","draw",0xaa0e9dc1,"elements.img_button.ImgButtonView.draw","elements/img_button/ImgButtonView.hx",35,0x9036a12d)
namespace elements{
namespace img_button{

void ImgButtonView_obj::__construct( ::elements::img_button::ImgButton imgButton, ::Xml node){
            	HX_STACKFRAME(&_hx_pos_a5281e900586e653_16_new)
HXLINE(  17)		super::__construct(imgButton,null());
HXLINE(  18)		this->node = node;
HXLINE(  19)		this->isButton = true;
            	}

Dynamic ImgButtonView_obj::__CreateEmpty() { return new ImgButtonView_obj; }

void *ImgButtonView_obj::_hx_vtable = 0;

Dynamic ImgButtonView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImgButtonView_obj > _hx_result = new ImgButtonView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ImgButtonView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x1684a9f5) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x1684a9f5;
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

void ImgButtonView_obj::initAfterSettingPartner(){
            	HX_GC_STACKFRAME(&_hx_pos_a5281e900586e653_22_initAfterSettingPartner)
HXLINE(  23)		this->super::initAfterSettingPartner();
HXLINE(  25)		 ::elements::img_button::ImgButton imgButton = ::hx::TCast<  ::elements::img_button::ImgButton >::cast(this->model);
HXLINE(  26)		 ::elements::image::Image _hx_tmp = imgButton->get_image();
HXDLIN(  26)		_hx_tmp->set_src(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->node,HX_("src",e4,a6,57,00)));
HXLINE(  27)		imgButton->setSize(HX_("100%",94,0a,88,20),HX_("100%",94,0a,88,20));
HXLINE(  28)		imgButton->setBGColor(::shared::Color_obj::TRANSPERNCY);
HXLINE(  30)		 ::elements::image::ImageView imageView =  ::elements::image::ImageView_obj::__alloc( HX_CTX ,imgButton->get_image());
HXLINE(  31)		this->add(::elements::ElementType_obj::IMAGE,imageView);
            	}


void ImgButtonView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_a5281e900586e653_35_draw)
HXDLIN(  35)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  36)			 ::shared::Position pos = ::models::IModel_obj::getPosition(this->model);
HXLINE(  37)			 ::shared::size::Size size = ::models::IModel_obj::getSize(this->model);
HXLINE(  39)			 ::shared::Color backgroundColor = ::models::IModel_obj::getBGColor(this->model);
HXLINE(  41)			int shift = 0;
HXLINE(  42)			 ::shared::Color borderColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  43)			bool _hx_tmp;
HXDLIN(  43)			if (this->isButton) {
HXLINE(  43)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  43)				_hx_tmp = false;
            			}
HXDLIN(  43)			if (_hx_tmp) {
HXLINE(  44)				borderColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  45)				shift = 2;
            			}
            			else {
HXLINE(  47)				borderColor = ::models::IModel_obj::get_borderColor(this->model);
            			}
HXLINE(  50)			this->get_graphics()->clear();
HXLINE(  53)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  53)			Float _hx_tmp2 = (pos->get_x() + shift);
HXDLIN(  53)			Float _hx_tmp3 = (pos->get_y() + shift);
HXDLIN(  53)			Float _hx_tmp4 = (size->get_width() - ( (Float)(shift) ));
HXDLIN(  53)			_hx_tmp1->drawRect(_hx_tmp2,_hx_tmp3,_hx_tmp4,(size->get_height() - ( (Float)(shift) )));
HXLINE(  54)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  56)			this->get_graphics()->clear();
            		}
            	}



::hx::ObjectPtr< ImgButtonView_obj > ImgButtonView_obj::__new( ::elements::img_button::ImgButton imgButton, ::Xml node) {
	::hx::ObjectPtr< ImgButtonView_obj > __this = new ImgButtonView_obj();
	__this->__construct(imgButton,node);
	return __this;
}

::hx::ObjectPtr< ImgButtonView_obj > ImgButtonView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::img_button::ImgButton imgButton, ::Xml node) {
	ImgButtonView_obj *__this = (ImgButtonView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImgButtonView_obj), true, "elements.img_button.ImgButtonView"));
	*(void **)__this = ImgButtonView_obj::_hx_vtable;
	__this->__construct(imgButton,node);
	return __this;
}

ImgButtonView_obj::ImgButtonView_obj()
{
}

void ImgButtonView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImgButtonView);
	HX_MARK_MEMBER_NAME(node,"node");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImgButtonView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImgButtonView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return ::hx::Val( node ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImgButtonView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImgButtonView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("node",02,0a,0a,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImgButtonView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(ImgButtonView_obj,node),HX_("node",02,0a,0a,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImgButtonView_obj_sStaticStorageInfo = 0;
#endif

static ::String ImgButtonView_obj_sMemberFields[] = {
	HX_("node",02,0a,0a,49),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class ImgButtonView_obj::__mClass;

void ImgButtonView_obj::__register()
{
	ImgButtonView_obj _hx_dummy;
	ImgButtonView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.img_button.ImgButtonView",d1,47,e5,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImgButtonView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImgButtonView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImgButtonView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImgButtonView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace img_button
