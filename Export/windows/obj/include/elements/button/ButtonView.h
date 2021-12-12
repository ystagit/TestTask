#ifndef INCLUDED_elements_button_ButtonView
#define INCLUDED_elements_button_ButtonView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,button,Button)
HX_DECLARE_CLASS2(elements,button,ButtonView)
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
namespace button{


class HXCPP_CLASS_ATTRIBUTES ButtonView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ButtonView_obj OBJ_;
		ButtonView_obj();

	public:
		enum { _hx_ClassId = 0x441b3e80 };

		void __construct( ::elements::button::Button button);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.button.ButtonView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.button.ButtonView"); }
		static ::hx::ObjectPtr< ButtonView_obj > __new( ::elements::button::Button button);
		static ::hx::ObjectPtr< ButtonView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::button::Button button);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonView",97,a5,f6,ae); }

		void initAfterSettingPartner();

		void draw( ::models::ModelEvent e);

		void addText(::String text);
		::Dynamic addText_dyn();

};

} // end namespace elements
} // end namespace button

#endif /* INCLUDED_elements_button_ButtonView */ 
