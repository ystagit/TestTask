#ifndef INCLUDED_shared_size_Size
#define INCLUDED_shared_size_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(shared,size,Size)

namespace shared{
namespace size{


class HXCPP_CLASS_ATTRIBUTES Size_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();

	public:
		enum { _hx_ClassId = 0x21efcec7 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shared.size.Size")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shared.size.Size"); }
		static ::hx::ObjectPtr< Size_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< Size_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Size",e1,cc,2c,37); }

		Float width;
		Float height;
		Float maxWidth;
		Float maxHeight;
		::String _width;
		::String _height;
		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float width);
		::Dynamic set_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_height(Float height);
		::Dynamic set_height_dyn();

		Float get_maxWidth();
		::Dynamic get_maxWidth_dyn();

		Float get_maxHeight();
		::Dynamic get_maxHeight_dyn();

		void setMaxSize(Float w,Float h);
		::Dynamic setMaxSize_dyn();

		void setWidth(::String _width);
		::Dynamic setWidth_dyn();

		void setHeight(::String _height);
		::Dynamic setHeight_dyn();

		Float parse(::String numStr,Float max);
		::Dynamic parse_dyn();

};

} // end namespace shared
} // end namespace size

#endif /* INCLUDED_shared_size_Size */ 
