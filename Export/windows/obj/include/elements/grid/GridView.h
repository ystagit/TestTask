#ifndef INCLUDED_elements_grid_GridView
#define INCLUDED_elements_grid_GridView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(elements,grid,Grid)
HX_DECLARE_CLASS2(elements,grid,GridView)
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
namespace grid{


class HXCPP_CLASS_ATTRIBUTES GridView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef GridView_obj OBJ_;
		GridView_obj();

	public:
		enum { _hx_ClassId = 0x24fb5328 };

		void __construct( ::elements::grid::Grid grid, ::Xml node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.grid.GridView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.grid.GridView"); }
		static ::hx::ObjectPtr< GridView_obj > __new( ::elements::grid::Grid grid, ::Xml node);
		static ::hx::ObjectPtr< GridView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::grid::Grid grid, ::Xml node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GridView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GridView",6b,cc,3f,2a); }

		 ::Xml node;
		void initAfterSettingPartner();

		void draw( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace grid

#endif /* INCLUDED_elements_grid_GridView */ 
