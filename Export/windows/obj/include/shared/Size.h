#ifndef INCLUDED_shared_Size
#define INCLUDED_shared_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5f219fda5581a3a2_12_new)
HX_DECLARE_CLASS1(shared,Size)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES Size_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();

	public:
		enum { _hx_ClassId = 0x345a1ac6 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.Size")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.Size"); }

		inline static ::hx::ObjectPtr< Size_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
			::hx::ObjectPtr< Size_obj > __this = new Size_obj();
			__this->__construct(__o_width,__o_height);
			return __this;
		}

		inline static ::hx::ObjectPtr< Size_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
			Size_obj *__this = (Size_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Size_obj), false, "shared.Size"));
			*(void **)__this = Size_obj::_hx_vtable;
{
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_12_new)
HXLINE(  13)		( ( ::shared::Size)(__this) )->set_width(width);
HXLINE(  14)		( ( ::shared::Size)(__this) )->set_height(height);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Size",e1,cc,2c,37); }

		Float width;
		Float height;
		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float width);
		::Dynamic set_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_height(Float height);
		::Dynamic set_height_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_Size */ 
