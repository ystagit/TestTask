#ifndef INCLUDED_elements_tabs_tab_TabView
#define INCLUDED_elements_tabs_tab_TabView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,tab,Tab)
HX_DECLARE_CLASS3(elements,tabs,tab,TabView)
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
namespace tabs{
namespace tab{


class HXCPP_CLASS_ATTRIBUTES TabView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TabView_obj OBJ_;
		TabView_obj();

	public:
		enum { _hx_ClassId = 0x02d0eaa6 };

		void __construct( ::elements::tabs::tab::Tab tab);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.tab.TabView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.tab.TabView"); }
		static ::hx::ObjectPtr< TabView_obj > __new( ::elements::tabs::tab::Tab tab);
		static ::hx::ObjectPtr< TabView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::tab::Tab tab);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabView",3a,2f,16,14); }

		void draw( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace tabs
} // end namespace tab

#endif /* INCLUDED_elements_tabs_tab_TabView */ 
