#ifndef INCLUDED_elements_container_ContainerView
#define INCLUDED_elements_container_ContainerView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,container,Container)
HX_DECLARE_CLASS2(elements,container,ContainerView)
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
namespace container{


class HXCPP_CLASS_ATTRIBUTES ContainerView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ContainerView_obj OBJ_;
		ContainerView_obj();

	public:
		enum { _hx_ClassId = 0x0e143dbc };

		void __construct( ::elements::container::Container container);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.container.ContainerView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.container.ContainerView"); }
		static ::hx::ObjectPtr< ContainerView_obj > __new( ::elements::container::Container container);
		static ::hx::ObjectPtr< ContainerView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::container::Container container);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ContainerView_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ContainerView",26,58,f6,c4); }

};

} // end namespace elements
} // end namespace container

#endif /* INCLUDED_elements_container_ContainerView */ 
