#ifndef INCLUDED_elements_img_button_ImgButtonView
#define INCLUDED_elements_img_button_ImgButtonView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(elements,img_button,ImgButton)
HX_DECLARE_CLASS2(elements,img_button,ImgButtonView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS1(models,ModelEvent)
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
namespace img_button{


class HXCPP_CLASS_ATTRIBUTES ImgButtonView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ImgButtonView_obj OBJ_;
		ImgButtonView_obj();

	public:
		enum { _hx_ClassId = 0x1684a9f5 };

		void __construct( ::elements::img_button::ImgButton imgButton, ::Xml node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.img_button.ImgButtonView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.img_button.ImgButtonView"); }
		static ::hx::ObjectPtr< ImgButtonView_obj > __new( ::elements::img_button::ImgButton imgButton, ::Xml node);
		static ::hx::ObjectPtr< ImgButtonView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::img_button::ImgButton imgButton, ::Xml node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImgButtonView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImgButtonView",3a,43,d9,6a); }

		 ::Xml node;
		void initAfterSettingPartner();

		void draw( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace img_button

#endif /* INCLUDED_elements_img_button_ImgButtonView */ 
