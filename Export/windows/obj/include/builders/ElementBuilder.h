#ifndef INCLUDED_builders_ElementBuilder
#define INCLUDED_builders_ElementBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(builders,ElementBuilder)
HX_DECLARE_CLASS1(models,IModel)
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

namespace builders{


class HXCPP_CLASS_ATTRIBUTES ElementBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ElementBuilder_obj OBJ_;
		ElementBuilder_obj();

	public:
		enum { _hx_ClassId = 0x1a72a7bb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="builders.ElementBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"builders.ElementBuilder"); }

		inline static ::hx::ObjectPtr< ElementBuilder_obj > __new() {
			::hx::ObjectPtr< ElementBuilder_obj > __this = new ElementBuilder_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ElementBuilder_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ElementBuilder_obj *__this = (ElementBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ElementBuilder_obj), false, "builders.ElementBuilder"));
			*(void **)__this = ElementBuilder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ElementBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ElementBuilder",df,77,2a,5e); }

		static  ::views::GuiView build( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic build_dyn();

		static  ::views::GuiView addModal( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addModal_dyn();

		static  ::views::GuiView addText( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addText_dyn();

		static  ::views::GuiView addImage( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addImage_dyn();

		static  ::views::GuiView addButton( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addButton_dyn();

		static  ::views::GuiView addImgButton( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addImgButton_dyn();

		static  ::views::GuiView addTabContext( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addTabContext_dyn();

		static  ::views::GuiView addTabList( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addTabList_dyn();

		static  ::views::GuiView addTabPanel( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addTabPanel_dyn();

		static  ::views::GuiView addTab( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addTab_dyn();

		static  ::views::GuiView addRow( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addRow_dyn();

		static  ::views::GuiView addColumn( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addColumn_dyn();

		static  ::views::GuiView addGrid( ::views::GuiView parentView, ::Xml node);
		static ::Dynamic addGrid_dyn();

		static void setMaxSize(::Dynamic parentView,::Dynamic currentView);
		static ::Dynamic setMaxSize_dyn();

		static int getElementCount( ::Xml node,::String elementName);
		static ::Dynamic getElementCount_dyn();

};

} // end namespace builders

#endif /* INCLUDED_builders_ElementBuilder */ 
