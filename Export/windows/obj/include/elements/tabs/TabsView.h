#ifndef INCLUDED_elements_tabs_TabsView
#define INCLUDED_elements_tabs_TabsView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,tabs,Tabs)
HX_DECLARE_CLASS2(elements,tabs,TabsView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace elements{
namespace tabs{


class HXCPP_CLASS_ATTRIBUTES TabsView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TabsView_obj OBJ_;
		TabsView_obj();

	public:
		enum { _hx_ClassId = 0x21f29898 };

		void __construct( ::elements::tabs::Tabs tab);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.TabsView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.TabsView"); }
		static ::hx::ObjectPtr< TabsView_obj > __new( ::elements::tabs::Tabs tab);
		static ::hx::ObjectPtr< TabsView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::Tabs tab);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabsView_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabsView",23,e2,65,25); }

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_TabsView */ 
