#ifndef INCLUDED_shared_Padding
#define INCLUDED_shared_Padding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_10_new)
HX_DECLARE_CLASS1(shared,Padding)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES Padding_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Padding_obj OBJ_;
		Padding_obj();

	public:
		enum { _hx_ClassId = 0x06968008 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.Padding")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.Padding"); }

		inline static ::hx::ObjectPtr< Padding_obj > __new() {
			::hx::ObjectPtr< Padding_obj > __this = new Padding_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Padding_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Padding_obj *__this = (Padding_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Padding_obj), false, "shared.Padding"));
			*(void **)__this = Padding_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_10_new)
HXLINE(  11)		( ( ::shared::Padding)(__this) )->set_top(( (Float)(0) ));
HXLINE(  12)		( ( ::shared::Padding)(__this) )->set_right(( (Float)(0) ));
HXLINE(  13)		( ( ::shared::Padding)(__this) )->set_bottom(( (Float)(0) ));
HXLINE(  14)		( ( ::shared::Padding)(__this) )->set_left(( (Float)(0) ));
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Padding_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Padding",b1,81,ce,9d); }

		Float top;
		Float right;
		Float bottom;
		Float left;
		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float top);
		::Dynamic set_top_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float right);
		::Dynamic set_right_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float bottom);
		::Dynamic set_bottom_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float left);
		::Dynamic set_left_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_Padding */ 
