#include <hxcpp.h>

#ifndef INCLUDED_shared_size_SizeType
#include <shared/size/SizeType.h>
#endif
namespace shared{
namespace size{

::shared::size::SizeType SizeType_obj::PERCENT;

::shared::size::SizeType SizeType_obj::PIXEL;

bool SizeType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) { outValue = SizeType_obj::PERCENT; return true; }
	if (inName==HX_("PIXEL",66,fe,91,40)) { outValue = SizeType_obj::PIXEL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SizeType_obj)

int SizeType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return 1;
	if (inName==HX_("PIXEL",66,fe,91,40)) return 0;
	return super::__FindIndex(inName);
}

int SizeType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return 0;
	if (inName==HX_("PIXEL",66,fe,91,40)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SizeType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return PERCENT;
	if (inName==HX_("PIXEL",66,fe,91,40)) return PIXEL;
	return super::__Field(inName,inCallProp);
}

static ::String SizeType_obj_sStaticFields[] = {
	HX_("PIXEL",66,fe,91,40),
	HX_("PERCENT",a5,7e,ae,f8),
	::String(null())
};

::hx::Class SizeType_obj::__mClass;

Dynamic __Create_SizeType_obj() { return new SizeType_obj; }

void SizeType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("shared.size.SizeType",ff,dd,b1,54), ::hx::TCanCast< SizeType_obj >,SizeType_obj_sStaticFields,0,
	&__Create_SizeType_obj, &__Create,
	&super::__SGetClass(), &CreateSizeType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SizeType_obj::__GetStatic;
}

void SizeType_obj::__boot()
{
PERCENT = ::hx::CreateConstEnum< SizeType_obj >(HX_("PERCENT",a5,7e,ae,f8),1);
PIXEL = ::hx::CreateConstEnum< SizeType_obj >(HX_("PIXEL",66,fe,91,40),0);
}


} // end namespace shared
} // end namespace size
