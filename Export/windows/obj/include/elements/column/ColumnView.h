#ifndef INCLUDED_elements_column_ColumnView
#define INCLUDED_elements_column_ColumnView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,column,Column)
HX_DECLARE_CLASS2(elements,column,ColumnView)
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
namespace column{


class HXCPP_CLASS_ATTRIBUTES ColumnView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ColumnView_obj OBJ_;
		ColumnView_obj();

	public:
		enum { _hx_ClassId = 0x7cd52048 };

		void __construct( ::elements::column::Column column);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.column.ColumnView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.column.ColumnView"); }
		static ::hx::ObjectPtr< ColumnView_obj > __new( ::elements::column::Column column);
		static ::hx::ObjectPtr< ColumnView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::column::Column column);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColumnView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColumnView",7b,d4,e3,10); }

		void initAfterSettingPartner();

};

} // end namespace elements
} // end namespace column

#endif /* INCLUDED_elements_column_ColumnView */ 
