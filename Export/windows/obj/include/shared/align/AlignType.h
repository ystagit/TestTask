#ifndef INCLUDED_shared_align_AlignType
#define INCLUDED_shared_align_AlignType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(shared,align,AlignType)
namespace shared{
namespace align{


class AlignType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AlignType_obj OBJ_;

	public:
		AlignType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("shared.align.AlignType",4d,a1,11,29); }
		::String __ToString() const { return HX_("AlignType.",4f,e3,ce,aa) + _hx_tag; }

		static ::shared::align::AlignType BOTTOM;
		static inline ::shared::align::AlignType BOTTOM_dyn() { return BOTTOM; }
		static ::shared::align::AlignType CENTER;
		static inline ::shared::align::AlignType CENTER_dyn() { return CENTER; }
		static ::shared::align::AlignType LEFT;
		static inline ::shared::align::AlignType LEFT_dyn() { return LEFT; }
		static ::shared::align::AlignType RIGHT;
		static inline ::shared::align::AlignType RIGHT_dyn() { return RIGHT; }
		static ::shared::align::AlignType TOP;
		static inline ::shared::align::AlignType TOP_dyn() { return TOP; }
};

} // end namespace shared
} // end namespace align

#endif /* INCLUDED_shared_align_AlignType */ 
