#ifndef INCLUDED_shared_size_SizeType
#define INCLUDED_shared_size_SizeType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(shared,size,SizeType)
namespace shared{
namespace size{


class SizeType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SizeType_obj OBJ_;

	public:
		SizeType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("shared.size.SizeType",ff,dd,b1,54); }
		::String __ToString() const { return HX_("SizeType.",93,c3,34,bb) + _hx_tag; }

		static ::shared::size::SizeType PERCENT;
		static inline ::shared::size::SizeType PERCENT_dyn() { return PERCENT; }
		static ::shared::size::SizeType PIXEL;
		static inline ::shared::size::SizeType PIXEL_dyn() { return PIXEL; }
};

} // end namespace shared
} // end namespace size

#endif /* INCLUDED_shared_size_SizeType */ 
