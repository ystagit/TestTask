#ifndef INCLUDED_elements_image_ImageView
#define INCLUDED_elements_image_ImageView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,image,Image)
HX_DECLARE_CLASS2(elements,image,ImageView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace elements{
namespace image{


class HXCPP_CLASS_ATTRIBUTES ImageView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ImageView_obj OBJ_;
		ImageView_obj();

	public:
		enum { _hx_ClassId = 0x3418d744 };

		void __construct( ::elements::image::Image image);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.image.ImageView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.image.ImageView"); }
		static ::hx::ObjectPtr< ImageView_obj > __new( ::elements::image::Image image);
		static ::hx::ObjectPtr< ImageView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::image::Image image);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageView",40,a7,56,d2); }

		::String imageSrc;
		 ::openfl::display::Bitmap bitmap;
		void initAfterSettingPartner();

		void draw( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace image

#endif /* INCLUDED_elements_image_ImageView */ 
