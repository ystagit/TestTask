#ifndef INCLUDED_views_GuiView
#define INCLUDED_views_GuiView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(models,IModel)
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

namespace views{


class HXCPP_CLASS_ATTRIBUTES GuiView_obj : public  ::views::GuiComposite_obj
{
	public:
		typedef  ::views::GuiComposite_obj super;
		typedef GuiView_obj OBJ_;
		GuiView_obj();

	public:
		enum { _hx_ClassId = 0x31b17232 };

		void __construct(::Dynamic model,::Dynamic controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="views.GuiView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"views.GuiView"); }

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GuiView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GuiView",60,6e,70,fe); }

		bool isButton;
		void onSyncResize( ::models::ModelEvent e);
		::Dynamic onSyncResize_dyn();

		virtual void draw( ::models::ModelEvent e);
		::Dynamic draw_dyn();

};

} // end namespace views

#endif /* INCLUDED_views_GuiView */ 
