#ifndef INCLUDED_elements_tabs_panel_TabPanelView
#define INCLUDED_elements_tabs_panel_TabPanelView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,panel,TabPanel)
HX_DECLARE_CLASS3(elements,tabs,panel,TabPanelView)
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
namespace panel{


class HXCPP_CLASS_ATTRIBUTES TabPanelView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TabPanelView_obj OBJ_;
		TabPanelView_obj();

	public:
		enum { _hx_ClassId = 0x4787c01f };

		void __construct( ::elements::tabs::panel::TabPanel tabPanel);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.panel.TabPanelView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.panel.TabPanelView"); }
		static ::hx::ObjectPtr< TabPanelView_obj > __new( ::elements::tabs::panel::TabPanel tabPanel);
		static ::hx::ObjectPtr< TabPanelView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::panel::TabPanel tabPanel);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabPanelView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabPanelView",94,0a,da,43); }

		void initAfterSettingPartner();

		void show( ::models::ModelEvent e);

		void hide( ::openfl::events::Event e);

		void change( ::models::ModelEvent _tmp_e);

		void checkVisibility();
		::Dynamic checkVisibility_dyn();

};

} // end namespace elements
} // end namespace tabs
} // end namespace panel

#endif /* INCLUDED_elements_tabs_panel_TabPanelView */ 
