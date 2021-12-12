#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarController
#include <elements/snackbar/SnackbarController.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarEvent
#include <elements/snackbar/SnackbarEvent.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarView
#include <elements/snackbar/SnackbarView.h>
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
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1191d7bf6f864faa_13_new,"elements.snackbar.SnackbarView","new",0xef7242ae,"elements.snackbar.SnackbarView.new","elements/snackbar/SnackbarView.hx",13,0xa6d090a2)
HX_LOCAL_STACK_FRAME(_hx_pos_1191d7bf6f864faa_19_initAfterSettingPartner,"elements.snackbar.SnackbarView","initAfterSettingPartner",0x8c4645f2,"elements.snackbar.SnackbarView.initAfterSettingPartner","elements/snackbar/SnackbarView.hx",19,0xa6d090a2)
namespace elements{
namespace snackbar{

void SnackbarView_obj::__construct( ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller){
            	HX_STACKFRAME(&_hx_pos_1191d7bf6f864faa_13_new)
HXLINE(  14)		super::__construct(snackbar,controller);
HXLINE(  15)		snackbar->addEventListener(HX_("showSnackbae",15,95,bd,cb),this->show_dyn(),null(),null(),null());
HXLINE(  16)		snackbar->addEventListener(HX_("hideSnackbar",e7,c1,35,61),this->hide_dyn(),null(),null(),null());
            	}

Dynamic SnackbarView_obj::__CreateEmpty() { return new SnackbarView_obj; }

void *SnackbarView_obj::_hx_vtable = 0;

Dynamic SnackbarView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SnackbarView_obj > _hx_result = new SnackbarView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SnackbarView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x4a169966) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x4a169966;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void SnackbarView_obj::initAfterSettingPartner(){
            	HX_GC_STACKFRAME(&_hx_pos_1191d7bf6f864faa_19_initAfterSettingPartner)
HXLINE(  20)		::Dynamic parentModel = this->getParent()->getModel();
HXLINE(  21)		this->setMaxSize(parentModel);
HXLINE(  23)		 ::elements::snackbar::Snackbar snackbar = ::hx::TCast<  ::elements::snackbar::Snackbar >::cast(this->model);
HXLINE(  24)		snackbar->setSize(HX_("100%",94,0a,88,20),HX_("60",3a,2f,00,00));
HXLINE(  25)		snackbar->setSnackbarType(::elements::snackbar::Snackbar_obj::DEFAULT);
HXLINE(  28)		 ::elements::text::TextView modelView =  ::elements::text::TextView_obj::__alloc( HX_CTX ,snackbar->get_message());
HXLINE(  29)		this->add(::elements::ElementType_obj::TEXT,modelView);
            	}



::hx::ObjectPtr< SnackbarView_obj > SnackbarView_obj::__new( ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller) {
	::hx::ObjectPtr< SnackbarView_obj > __this = new SnackbarView_obj();
	__this->__construct(snackbar,controller);
	return __this;
}

::hx::ObjectPtr< SnackbarView_obj > SnackbarView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller) {
	SnackbarView_obj *__this = (SnackbarView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SnackbarView_obj), true, "elements.snackbar.SnackbarView"));
	*(void **)__this = SnackbarView_obj::_hx_vtable;
	__this->__construct(snackbar,controller);
	return __this;
}

SnackbarView_obj::SnackbarView_obj()
{
}

void SnackbarView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SnackbarView);
	HX_MARK_MEMBER_NAME(textModel,"textModel");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SnackbarView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textModel,"textModel");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SnackbarView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textModel") ) { return ::hx::Val( textModel ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SnackbarView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textModel") ) { textModel=inValue.Cast<  ::elements::text::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SnackbarView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textModel",bc,b3,45,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SnackbarView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::text::Text */ ,(int)offsetof(SnackbarView_obj,textModel),HX_("textModel",bc,b3,45,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SnackbarView_obj_sStaticStorageInfo = 0;
#endif

static ::String SnackbarView_obj_sMemberFields[] = {
	HX_("textModel",bc,b3,45,a5),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	::String(null()) };

::hx::Class SnackbarView_obj::__mClass;

void SnackbarView_obj::__register()
{
	SnackbarView_obj _hx_dummy;
	SnackbarView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.snackbar.SnackbarView",bc,13,5c,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SnackbarView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SnackbarView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SnackbarView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SnackbarView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace snackbar
