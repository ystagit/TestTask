#ifndef INCLUDED_elements_tabs_context_TabContextView
#define INCLUDED_elements_tabs_context_TabContextView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,context,TabContext)
HX_DECLARE_CLASS3(elements,tabs,context,TabContextView)
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
namespace context{


class HXCPP_CLASS_ATTRIBUTES TabContextView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TabContextView_obj OBJ_;
		TabContextView_obj();

	public:
		enum { _hx_ClassId = 0x0f164eb5 };

		void __construct( ::elements::tabs::context::TabContext tabContext);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.context.TabContextView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.context.TabContextView"); }
		static ::hx::ObjectPtr< TabContextView_obj > __new( ::elements::tabs::context::TabContext tabContext);
		static ::hx::ObjectPtr< TabContextView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::context::TabContext tabContext);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabContextView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabContextView",bf,8f,9c,89); }

		void add(::String k, ::views::GuiComponent _tmp_c);

};

} // end namespace elements
} // end namespace tabs
} // end namespace context

#endif /* INCLUDED_elements_tabs_context_TabContextView */ 
