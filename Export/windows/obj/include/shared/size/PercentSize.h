#ifndef INCLUDED_shared_size_PercentSize
#define INCLUDED_shared_size_PercentSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif
HX_DECLARE_CLASS2(shared,size,PercentSize)
HX_DECLARE_CLASS2(shared,size,Size)

namespace shared{
namespace size{


class HXCPP_CLASS_ATTRIBUTES PercentSize_obj : public  ::shared::size::Size_obj
{
	public:
		typedef  ::shared::size::Size_obj super;
		typedef PercentSize_obj OBJ_;
		PercentSize_obj();

	public:
		enum { _hx_ClassId = 0x6f28fce0 };

		void __construct( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.size.PercentSize")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.size.PercentSize"); }
		static ::hx::ObjectPtr< PercentSize_obj > __new( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight);
		static ::hx::ObjectPtr< PercentSize_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PercentSize_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PercentSize",06,56,c7,95); }

		Float widthInPer;
		Float heightInPer;
		void setMaxSize(Float w,Float h);

		void setSize(Float w,Float h);

		void clacSize();
		::Dynamic clacSize_dyn();

};

} // end namespace shared
} // end namespace size

#endif /* INCLUDED_shared_size_PercentSize */ 
