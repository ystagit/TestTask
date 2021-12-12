#ifndef INCLUDED_elements_img_button_ImgButton
#define INCLUDED_elements_img_button_ImgButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,image,Image)
HX_DECLARE_CLASS2(elements,img_button,ImgButton)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace img_button{


class HXCPP_CLASS_ATTRIBUTES ImgButton_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef ImgButton_obj OBJ_;
		ImgButton_obj();

	public:
		enum { _hx_ClassId = 0x07181a8c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.img_button.ImgButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.img_button.ImgButton"); }
		static ::hx::ObjectPtr< ImgButton_obj > __new();
		static ::hx::ObjectPtr< ImgButton_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImgButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImgButton",35,26,e9,4a); }

		 ::elements::image::Image image;
		 ::elements::image::Image get_image();
		::Dynamic get_image_dyn();

};

} // end namespace elements
} // end namespace img_button

#endif /* INCLUDED_elements_img_button_ImgButton */ 
