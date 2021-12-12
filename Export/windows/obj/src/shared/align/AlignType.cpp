#include <hxcpp.h>

#ifndef INCLUDED_shared_align_AlignType
#include <shared/align/AlignType.h>
#endif
namespace shared{
namespace align{

::shared::align::AlignType AlignType_obj::BOTTOM;

::shared::align::AlignType AlignType_obj::CENTER;

::shared::align::AlignType AlignType_obj::LEFT;

::shared::align::AlignType AlignType_obj::RIGHT;

::shared::align::AlignType AlignType_obj::TOP;

bool AlignType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) { outValue = AlignType_obj::BOTTOM; return true; }
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = AlignType_obj::CENTER; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = AlignType_obj::LEFT; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = AlignType_obj::RIGHT; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = AlignType_obj::TOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AlignType_obj)

int AlignType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 2;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 4;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 3;
	if (inName==HX_("TOP",75,02,40,00)) return 1;
	return super::__FindIndex(inName);
}

int AlignType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 0;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val AlignType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return BOTTOM;
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String AlignType_obj_sStaticFields[] = {
	HX_("CENTER",d5,d1,5d,b8),
	HX_("TOP",75,02,40,00),
	HX_("BOTTOM",eb,92,fb,17),
	HX_("RIGHT",bc,43,52,67),
	HX_("LEFT",07,d0,70,32),
	::String(null())
};

::hx::Class AlignType_obj::__mClass;

Dynamic __Create_AlignType_obj() { return new AlignType_obj; }

void AlignType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("shared.align.AlignType",4d,a1,11,29), ::hx::TCanCast< AlignType_obj >,AlignType_obj_sStaticFields,0,
	&__Create_AlignType_obj, &__Create,
	&super::__SGetClass(), &CreateAlignType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AlignType_obj::__GetStatic;
}

void AlignType_obj::__boot()
{
BOTTOM = ::hx::CreateConstEnum< AlignType_obj >(HX_("BOTTOM",eb,92,fb,17),2);
CENTER = ::hx::CreateConstEnum< AlignType_obj >(HX_("CENTER",d5,d1,5d,b8),0);
LEFT = ::hx::CreateConstEnum< AlignType_obj >(HX_("LEFT",07,d0,70,32),4);
RIGHT = ::hx::CreateConstEnum< AlignType_obj >(HX_("RIGHT",bc,43,52,67),3);
TOP = ::hx::CreateConstEnum< AlignType_obj >(HX_("TOP",75,02,40,00),1);
}


} // end namespace shared
} // end namespace align
