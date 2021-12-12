#include <hxcpp.h>

#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButton
#include <elements/img_button/ImgButton.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92664b97515459e5_10_new,"elements.img_button.ImgButton","new",0x63788a3e,"elements.img_button.ImgButton.new","elements/img_button/ImgButton.hx",10,0x564f6492)
HX_LOCAL_STACK_FRAME(_hx_pos_92664b97515459e5_16_get_image,"elements.img_button.ImgButton","get_image",0x69a4f010,"elements.img_button.ImgButton.get_image","elements/img_button/ImgButton.hx",16,0x564f6492)
namespace elements{
namespace img_button{

void ImgButton_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_92664b97515459e5_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->image =  ::elements::image::Image_obj::__alloc( HX_CTX );
            	}

Dynamic ImgButton_obj::__CreateEmpty() { return new ImgButton_obj; }

void *ImgButton_obj::_hx_vtable = 0;

Dynamic ImgButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImgButton_obj > _hx_result = new ImgButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImgButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07181a8c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x07181a8c;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}

 ::elements::image::Image ImgButton_obj::get_image(){
            	HX_STACKFRAME(&_hx_pos_92664b97515459e5_16_get_image)
HXDLIN(  16)		return this->image;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImgButton_obj,get_image,return )


::hx::ObjectPtr< ImgButton_obj > ImgButton_obj::__new() {
	::hx::ObjectPtr< ImgButton_obj > __this = new ImgButton_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImgButton_obj > ImgButton_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImgButton_obj *__this = (ImgButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImgButton_obj), true, "elements.img_button.ImgButton"));
	*(void **)__this = ImgButton_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImgButton_obj::ImgButton_obj()
{
}

void ImgButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImgButton);
	HX_MARK_MEMBER_NAME(image,"image");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImgButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImgButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_image() : image ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_image") ) { return ::hx::Val( get_image_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImgButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::elements::image::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImgButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("image",5b,1f,69,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImgButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::image::Image */ ,(int)offsetof(ImgButton_obj,image),HX_("image",5b,1f,69,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImgButton_obj_sStaticStorageInfo = 0;
#endif

static ::String ImgButton_obj_sMemberFields[] = {
	HX_("image",5b,1f,69,bd),
	HX_("get_image",b2,7b,12,01),
	::String(null()) };

::hx::Class ImgButton_obj::__mClass;

void ImgButton_obj::__register()
{
	ImgButton_obj _hx_dummy;
	ImgButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.img_button.ImgButton",4c,53,a3,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImgButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImgButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImgButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImgButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace img_button
