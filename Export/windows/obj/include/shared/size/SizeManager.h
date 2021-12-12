#ifndef INCLUDED_shared_size_SizeManager
#define INCLUDED_shared_size_SizeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(shared,size,Size)
HX_DECLARE_CLASS2(shared,size,SizeManager)
HX_DECLARE_CLASS2(shared,size,SizeType)

namespace shared{
namespace size{


class HXCPP_CLASS_ATTRIBUTES SizeManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SizeManager_obj OBJ_;
		SizeManager_obj();

	public:
		enum { _hx_ClassId = 0x790f6266 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.size.SizeManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.size.SizeManager"); }

		inline static ::hx::ObjectPtr< SizeManager_obj > __new() {
			::hx::ObjectPtr< SizeManager_obj > __this = new SizeManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SizeManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SizeManager_obj *__this = (SizeManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SizeManager_obj), false, "shared.size.SizeManager"));
			*(void **)__this = SizeManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SizeManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SizeManager",8c,bb,ad,9f); }

		static  ::shared::size::Size getSize( ::shared::size::SizeType sizeType);
		static ::Dynamic getSize_dyn();

};

} // end namespace shared
} // end namespace size

#endif /* INCLUDED_shared_size_SizeManager */ 
