#ifndef INCLUDED_shared_Position
#define INCLUDED_shared_Position

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(shared,Position)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES Position_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Position_obj OBJ_;
		Position_obj();

	public:
		enum { _hx_ClassId = 0x7ca180d2 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shared.Position")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shared.Position"); }
		static ::hx::ObjectPtr< Position_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Position_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Position_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Position",c9,5c,ac,a4); }

		Float x;
		Float y;
		Float maxWidth;
		Float maxHeight;
		::String _x;
		::String _y;
		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float x);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float y);
		::Dynamic set_y_dyn();

		Float get_maxWidth();
		::Dynamic get_maxWidth_dyn();

		Float get_maxHeight();
		::Dynamic get_maxHeight_dyn();

		void setMaxSize(Float w,Float h);
		::Dynamic setMaxSize_dyn();

		void setX(::String _x);
		::Dynamic setX_dyn();

		void setY(::String _y);
		::Dynamic setY_dyn();

		Float parse(::String numStr,Float max);
		::Dynamic parse_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_Position */ 
