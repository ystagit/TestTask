#ifndef INCLUDED_shared_BoundingBox
#define INCLUDED_shared_BoundingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(shared,BoundingBox)
HX_DECLARE_CLASS1(shared,Point)
HX_DECLARE_CLASS1(shared,Position)
HX_DECLARE_CLASS2(shared,size,Size)

namespace shared{


class HXCPP_CLASS_ATTRIBUTES BoundingBox_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BoundingBox_obj OBJ_;
		BoundingBox_obj();

	public:
		enum { _hx_ClassId = 0x72c095a2 };

		void __construct( ::shared::Position pos, ::shared::size::Size size);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="shared.BoundingBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"shared.BoundingBox"); }
		static ::hx::ObjectPtr< BoundingBox_obj > __new( ::shared::Position pos, ::shared::size::Size size);
		static ::hx::ObjectPtr< BoundingBox_obj > __alloc(::hx::Ctx *_hx_ctx, ::shared::Position pos, ::shared::size::Size size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoundingBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BoundingBox",e7,2c,da,69); }

		Float minX;
		Float maxX;
		Float minY;
		Float maxY;
		Float get_minX();
		::Dynamic get_minX_dyn();

		Float set_minX(Float minX);
		::Dynamic set_minX_dyn();

		Float get_maxX();
		::Dynamic get_maxX_dyn();

		Float set_maxX(Float maxX);
		::Dynamic set_maxX_dyn();

		Float get_minY();
		::Dynamic get_minY_dyn();

		Float set_minY(Float minY);
		::Dynamic set_minY_dyn();

		Float get_maxY();
		::Dynamic get_maxY_dyn();

		Float set_maxY(Float maxY);
		::Dynamic set_maxY_dyn();

		void setBound( ::shared::Position pos, ::shared::size::Size size);
		::Dynamic setBound_dyn();

		bool isContainsCursor( ::shared::Point p);
		::Dynamic isContainsCursor_dyn();

};

} // end namespace shared

#endif /* INCLUDED_shared_BoundingBox */ 
