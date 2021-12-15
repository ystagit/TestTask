#ifndef INCLUDED_builders_TabPanelBuilder
#define INCLUDED_builders_TabPanelBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(builders,BaseBuilder)
HX_DECLARE_CLASS1(builders,TabPanelBuilder)
HX_DECLARE_CLASS3(elements,tabs,panel,TabPanel)
HX_DECLARE_CLASS3(elements,tabs,panel,TabPanelView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(shared,Color)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace builders{


class HXCPP_CLASS_ATTRIBUTES TabPanelBuilder_obj : public  ::builders::BaseBuilder_obj
{
	public:
		typedef  ::builders::BaseBuilder_obj super;
		typedef TabPanelBuilder_obj OBJ_;
		TabPanelBuilder_obj();

	public:
		enum { _hx_ClassId = 0x642f850c };

		void __construct( ::Xml node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="builders.TabPanelBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"builders.TabPanelBuilder"); }
		static ::hx::ObjectPtr< TabPanelBuilder_obj > __new( ::Xml node);
		static ::hx::ObjectPtr< TabPanelBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabPanelBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabPanelBuilder",4c,0a,98,f1); }

		static  ::builders::TabPanelBuilder build( ::Xml node);
		static ::Dynamic build_dyn();

		 ::elements::tabs::panel::TabPanel tabPanel;
		void validateRequiredAttrs();

		void initAttributes();

		 ::builders::TabPanelBuilder withPosition( ::Dynamic x, ::Dynamic y);
		::Dynamic withPosition_dyn();

		 ::builders::TabPanelBuilder withSize( ::Dynamic w, ::Dynamic h);
		::Dynamic withSize_dyn();

		 ::builders::TabPanelBuilder withBackground( ::shared::Color color);
		::Dynamic withBackground_dyn();

		 ::elements::tabs::panel::TabPanelView apply( ::views::GuiView parentView);
		::Dynamic apply_dyn();

};

} // end namespace builders

#endif /* INCLUDED_builders_TabPanelBuilder */ 
