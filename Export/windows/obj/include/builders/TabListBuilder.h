#ifndef INCLUDED_builders_TabListBuilder
#define INCLUDED_builders_TabListBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(builders,BaseBuilder)
HX_DECLARE_CLASS1(builders,TabListBuilder)
HX_DECLARE_CLASS2(elements,tabs,TabList)
HX_DECLARE_CLASS2(elements,tabs,TabListView)
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


class HXCPP_CLASS_ATTRIBUTES TabListBuilder_obj : public  ::builders::BaseBuilder_obj
{
	public:
		typedef  ::builders::BaseBuilder_obj super;
		typedef TabListBuilder_obj OBJ_;
		TabListBuilder_obj();

	public:
		enum { _hx_ClassId = 0x165208a0 };

		void __construct( ::Xml node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="builders.TabListBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"builders.TabListBuilder"); }
		static ::hx::ObjectPtr< TabListBuilder_obj > __new( ::Xml node);
		static ::hx::ObjectPtr< TabListBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabListBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabListBuilder",28,c6,03,85); }

		static  ::builders::TabListBuilder build( ::Xml node);
		static ::Dynamic build_dyn();

		 ::elements::tabs::TabList tabList;
		void validateRequiredAttrs();

		void initAttributes();

		 ::builders::TabListBuilder withCountTab(int n);
		::Dynamic withCountTab_dyn();

		 ::builders::TabListBuilder withBackground( ::shared::Color color);
		::Dynamic withBackground_dyn();

		 ::builders::TabListBuilder withSize( ::Dynamic w, ::Dynamic h);
		::Dynamic withSize_dyn();

		 ::elements::tabs::TabListView apply( ::views::GuiView parentView);
		::Dynamic apply_dyn();

};

} // end namespace builders

#endif /* INCLUDED_builders_TabListBuilder */ 
