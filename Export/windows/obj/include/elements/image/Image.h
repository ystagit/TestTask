#ifndef INCLUDED_elements_image_Image
#define INCLUDED_elements_image_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,image,Image)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace image{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x32515477 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.image.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.image.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new();
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		::String src;
		::String get_src();
		::Dynamic get_src_dyn();

		::String set_src(::String src);
		::Dynamic set_src_dyn();

};

} // end namespace elements
} // end namespace image

#endif /* INCLUDED_elements_image_Image */ 
