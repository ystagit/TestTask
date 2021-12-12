#ifndef INCLUDED_shared_size_PixelSize
#define INCLUDED_shared_size_PixelSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_f4070f3f34d5df4b_3_new)
HX_DECLARE_CLASS2(shared,size,PixelSize)
HX_DECLARE_CLASS2(shared,size,Size)

namespace shared{
namespace size{


class HXCPP_CLASS_ATTRIBUTES PixelSize_obj : public  ::shared::size::Size_obj
{
	public:
		typedef  ::shared::size::Size_obj super;
		typedef PixelSize_obj OBJ_;
		PixelSize_obj();

	public:
		enum { _hx_ClassId = 0x2b7e8aa1 };

		void __construct( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.size.PixelSize")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.size.PixelSize"); }

		inline static ::hx::ObjectPtr< PixelSize_obj > __new( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight) {
			::hx::ObjectPtr< PixelSize_obj > __this = new PixelSize_obj();
			__this->__construct(width,height,maxWidth,maxHeight);
			return __this;
		}

		inline static ::hx::ObjectPtr< PixelSize_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight) {
			PixelSize_obj *__this = (PixelSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PixelSize_obj), false, "shared.size.PixelSize"));
			*(void **)__this = PixelSize_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f4070f3f34d5df4b_3_new)
HXDLIN(   3)		__this->super::__construct(width,height,maxWidth,maxHeight);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelSize_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelSize",47,2e,b0,a7); }

		void setMaxSize(Float w,Float h);

		void setSize(Float w,Float h);

};

} // end namespace shared
} // end namespace size

#endif /* INCLUDED_shared_size_PixelSize */ 
