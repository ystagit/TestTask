#ifndef INCLUDED_shared_Point
#define INCLUDED_shared_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_7_new)
HX_DECLARE_CLASS1(shared,Point)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x50a42eff };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.Point"); }

		inline static ::hx::ObjectPtr< Point_obj > __new(Float x,Float y) {
			::hx::ObjectPtr< Point_obj > __this = new Point_obj();
			__this->__construct(x,y);
			return __this;
		}

		inline static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
			Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "shared.Point"));
			*(void **)__this = Point_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_7_new)
HXLINE(   8)		( ( ::shared::Point)(__this) )->set_x(x);
HXLINE(   9)		( ( ::shared::Point)(__this) )->set_y(y);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		Float x;
		Float y;
		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float x);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float y);
		::Dynamic set_y_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_Point */ 
