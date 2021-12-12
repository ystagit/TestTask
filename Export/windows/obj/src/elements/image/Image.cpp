#include <hxcpp.h>

#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c0fa0d67ae8e80f1_5_new,"elements.image.Image","new",0xa51b2aa3,"elements.image.Image.new","elements/image/Image.hx",5,0xeb8942ef)
HX_LOCAL_STACK_FRAME(_hx_pos_c0fa0d67ae8e80f1_10_get_src,"elements.image.Image","get_src",0xdf21a73e,"elements.image.Image.get_src","elements/image/Image.hx",10,0xeb8942ef)
HX_LOCAL_STACK_FRAME(_hx_pos_c0fa0d67ae8e80f1_14_set_src,"elements.image.Image","set_src",0xd223384a,"elements.image.Image.set_src","elements/image/Image.hx",14,0xeb8942ef)
namespace elements{
namespace image{

void Image_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c0fa0d67ae8e80f1_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x32515477;
	}
}

::String Image_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_c0fa0d67ae8e80f1_10_get_src)
HXDLIN(  10)		return this->src;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

::String Image_obj::set_src(::String src){
            	HX_STACKFRAME(&_hx_pos_c0fa0d67ae8e80f1_14_set_src)
HXDLIN(  14)		return (this->src = src);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )


::hx::ObjectPtr< Image_obj > Image_obj::__new() {
	::hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Image_obj > Image_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Image_obj *__this = (Image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "elements.image.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(src,"src");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(src,"src");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Image_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_src() : src ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return ::hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return ::hx::Val( set_src_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Image_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_src(inValue.Cast< ::String >()) );src=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("src",e4,a6,57,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Image_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Image_obj,src),HX_("src",e4,a6,57,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Image_obj_sStaticStorageInfo = 0;
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_("src",e4,a6,57,00),
	HX_("get_src",7b,6f,cc,26),
	HX_("set_src",87,00,ce,19),
	::String(null()) };

::hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	Image_obj _hx_dummy;
	Image_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.image.Image",31,9d,aa,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Image_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace image
