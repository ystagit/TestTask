#ifndef INCLUDED_shared_Color
#define INCLUDED_shared_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4f0db238aae4be74_26_new)
HX_DECLARE_CLASS1(shared,Color)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES Color_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();

	public:
		enum { _hx_ClassId = 0x6800bbbe };

		void __construct(int r,int g,int b,int a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.Color")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.Color"); }

		inline static ::hx::ObjectPtr< Color_obj > __new(int r,int g,int b,int a) {
			::hx::ObjectPtr< Color_obj > __this = new Color_obj();
			__this->__construct(r,g,b,a);
			return __this;
		}

		inline static ::hx::ObjectPtr< Color_obj > __alloc(::hx::Ctx *_hx_ctx,int r,int g,int b,int a) {
			Color_obj *__this = (Color_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Color_obj), false, "shared.Color"));
			*(void **)__this = Color_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_26_new)
HXLINE(  27)		( ( ::shared::Color)(__this) )->set_r(r);
HXLINE(  28)		( ( ::shared::Color)(__this) )->set_g(g);
HXLINE(  29)		( ( ::shared::Color)(__this) )->set_b(b);
HXLINE(  30)		( ( ::shared::Color)(__this) )->set_a(a);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Color_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Color",43,e1,89,dd); }

		static void __boot();
		static  ::shared::Color LIGHT;
		static  ::shared::Color BLACK;
		static  ::shared::Color PRIMARY;
		static  ::shared::Color GREY;
		static  ::shared::Color TEXT;
		static  ::shared::Color HIGHLIGHT_PRIMARY;
		static  ::shared::Color TRANSPERNCY;
		static  ::shared::Color ERROR;
		static  ::shared::Color WARNING;
		static  ::shared::Color INFO;
		static  ::shared::Color SUCCESS;
		static  ::shared::Color create( ::shared::Color color);
		static ::Dynamic create_dyn();

		int r;
		int g;
		int b;
		int a;
		int getColor();
		::Dynamic getColor_dyn();

		Float getAlpha();
		::Dynamic getAlpha_dyn();

		void setColor( ::shared::Color color);
		::Dynamic setColor_dyn();

		void rgb(int r,int g,int b);
		::Dynamic rgb_dyn();

		void rgba(int r,int g,int b,int a);
		::Dynamic rgba_dyn();

		int get_r();
		::Dynamic get_r_dyn();

		int set_r(int r);
		::Dynamic set_r_dyn();

		int get_g();
		::Dynamic get_g_dyn();

		int set_g(int g);
		::Dynamic set_g_dyn();

		int get_b();
		::Dynamic get_b_dyn();

		int set_b(int b);
		::Dynamic set_b_dyn();

		int get_a();
		::Dynamic get_a_dyn();

		int set_a(int a);
		::Dynamic set_a_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_Color */ 
