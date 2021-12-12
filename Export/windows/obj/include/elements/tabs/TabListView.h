#ifndef INCLUDED_elements_tabs_TabListView
#define INCLUDED_elements_tabs_TabListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,tabs,TabList)
HX_DECLARE_CLASS2(elements,tabs,TabListController)
HX_DECLARE_CLASS2(elements,tabs,TabListView)
HX_DECLARE_CLASS3(elements,tabs,tab,Tab)
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


class HXCPP_CLASS_ATTRIBUTES TabListView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TabListView_obj OBJ_;
		TabListView_obj();

	public:
		enum { _hx_ClassId = 0x0b0316ff };

		void __construct( ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.TabListView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.TabListView"); }
		static ::hx::ObjectPtr< TabListView_obj > __new( ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller);
		static ::hx::ObjectPtr< TabListView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::TabList tabList, ::elements::tabs::TabListController controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabListView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabListView",38,8d,92,ed); }

		void initAfterSettingPartner();

		void onPress( ::elements::tabs::tab::Tab tab);
		::Dynamic onPress_dyn();

		void add(::String k, ::views::GuiComponent _tmp_c);

		void draw( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_TabListView */ 
