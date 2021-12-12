#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
#endif
#ifndef INCLUDED_elements_image_ImageView
#include <elements/image/ImageView.h>
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
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0f3961f1ca922866_16_new,"elements.image.ImageView","new",0xbbfadc28,"elements.image.ImageView.new","elements/image/ImageView.hx",16,0x36fb720a)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3961f1ca922866_23_initAfterSettingPartner,"elements.image.ImageView","initAfterSettingPartner",0xe8c0386c,"elements.image.ImageView.initAfterSettingPartner","elements/image/ImageView.hx",23,0x36fb720a)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3961f1ca922866_37_draw,"elements.image.ImageView","draw",0xb8f36f3c,"elements.image.ImageView.draw","elements/image/ImageView.hx",37,0x36fb720a)
namespace elements{
namespace image{

void ImageView_obj::__construct( ::elements::image::Image image){
            	HX_GC_STACKFRAME(&_hx_pos_0f3961f1ca922866_16_new)
HXLINE(  17)		super::__construct(image,null());
HXLINE(  18)		this->imageSrc = image->get_src();
HXLINE(  19)		 ::openfl::display::BitmapData bitmapData = ::openfl::utils::Assets_obj::getBitmapData(image->get_src(),null());
HXLINE(  20)		this->bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
            	}

Dynamic ImageView_obj::__CreateEmpty() { return new ImageView_obj; }

void *ImageView_obj::_hx_vtable = 0;

Dynamic ImageView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageView_obj > _hx_result = new ImageView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImageView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x3418d744) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x3418d744;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ImageView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_0f3961f1ca922866_23_initAfterSettingPartner)
HXLINE(  24)		this->super::initAfterSettingPartner();
HXLINE(  25)		 ::elements::image::Image img = ::hx::TCast<  ::elements::image::Image >::cast(this->model);
HXLINE(  26)		 ::shared::Position imagePos = img->getPosition();
HXLINE(  27)		 ::shared::size::Size imageSize = img->getSize();
HXLINE(  28)		 ::openfl::display::Bitmap _hx_tmp = this->bitmap;
HXDLIN(  28)		_hx_tmp->set_x(imagePos->get_x());
HXLINE(  29)		 ::openfl::display::Bitmap _hx_tmp1 = this->bitmap;
HXDLIN(  29)		_hx_tmp1->set_y(imagePos->get_y());
HXLINE(  30)		 ::openfl::display::Bitmap _hx_tmp2 = this->bitmap;
HXDLIN(  30)		_hx_tmp2->set_width(imageSize->get_width());
HXLINE(  31)		 ::openfl::display::Bitmap _hx_tmp3 = this->bitmap;
HXDLIN(  31)		_hx_tmp3->set_height(imageSize->get_height());
HXLINE(  32)		this->addChild(this->bitmap);
            	}


void ImageView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_0f3961f1ca922866_37_draw)
HXDLIN(  37)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  38)			 ::elements::image::Image img = ::hx::TCast<  ::elements::image::Image >::cast(this->model);
HXLINE(  39)			 ::shared::Position imagePos = img->getPosition();
HXLINE(  40)			 ::shared::size::Size imageSize = img->getSize();
HXLINE(  42)			::String _hx_tmp = this->imageSrc;
HXDLIN(  42)			if ((_hx_tmp != img->get_src())) {
HXLINE(  43)				 ::openfl::display::Bitmap _hx_tmp = this->bitmap;
HXDLIN(  43)				_hx_tmp->set_bitmapData(::openfl::utils::Assets_obj::getBitmapData(img->get_src(),null()));
HXLINE(  44)				this->imageSrc = img->get_src();
            			}
HXLINE(  47)			this->bitmap->set_visible(true);
HXLINE(  48)			 ::openfl::display::Bitmap _hx_tmp1 = this->bitmap;
HXDLIN(  48)			_hx_tmp1->set_x(imagePos->get_x());
HXLINE(  49)			 ::openfl::display::Bitmap _hx_tmp2 = this->bitmap;
HXDLIN(  49)			_hx_tmp2->set_y(imagePos->get_y());
HXLINE(  50)			 ::openfl::display::Bitmap _hx_tmp3 = this->bitmap;
HXDLIN(  50)			_hx_tmp3->set_width(imageSize->get_width());
HXLINE(  51)			 ::openfl::display::Bitmap _hx_tmp4 = this->bitmap;
HXDLIN(  51)			_hx_tmp4->set_height(imageSize->get_height());
            		}
            		else {
HXLINE(  53)			this->bitmap->set_visible(false);
            		}
            	}



::hx::ObjectPtr< ImageView_obj > ImageView_obj::__new( ::elements::image::Image image) {
	::hx::ObjectPtr< ImageView_obj > __this = new ImageView_obj();
	__this->__construct(image);
	return __this;
}

::hx::ObjectPtr< ImageView_obj > ImageView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::image::Image image) {
	ImageView_obj *__this = (ImageView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageView_obj), true, "elements.image.ImageView"));
	*(void **)__this = ImageView_obj::_hx_vtable;
	__this->__construct(image);
	return __this;
}

ImageView_obj::ImageView_obj()
{
}

void ImageView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageView);
	HX_MARK_MEMBER_NAME(imageSrc,"imageSrc");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(imageSrc,"imageSrc");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImageView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imageSrc") ) { return ::hx::Val( imageSrc ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imageSrc") ) { imageSrc=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("imageSrc",49,0a,3a,84));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageView_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ImageView_obj,imageSrc),HX_("imageSrc",49,0a,3a,84)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(ImageView_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageView_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageView_obj_sMemberFields[] = {
	HX_("imageSrc",49,0a,3a,84),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class ImageView_obj::__mClass;

void ImageView_obj::__register()
{
	ImageView_obj _hx_dummy;
	ImageView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.image.ImageView",36,e8,87,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace image
