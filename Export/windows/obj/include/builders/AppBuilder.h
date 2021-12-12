#ifndef INCLUDED_builders_AppBuilder
#define INCLUDED_builders_AppBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(builders,AppBuilder)
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


class HXCPP_CLASS_ATTRIBUTES AppBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AppBuilder_obj OBJ_;
		AppBuilder_obj();

	public:
		enum { _hx_ClassId = 0x1a11f712 };

		void __construct(::String xmlFile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="builders.AppBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"builders.AppBuilder"); }
		static ::hx::ObjectPtr< AppBuilder_obj > __new(::String xmlFile);
		static ::hx::ObjectPtr< AppBuilder_obj > __alloc(::hx::Ctx *_hx_ctx,::String xmlFile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppBuilder",9a,50,a4,5f); }

		static  ::builders::AppBuilder load(::String xmlFile);
		static ::Dynamic load_dyn();

		::String xmlContent;
		void buildScene( ::views::GuiView parentView);
		::Dynamic buildScene_dyn();

		void buildElement( ::views::GuiView parentView, ::Xml node);
		::Dynamic buildElement_dyn();

};

} // end namespace builders

#endif /* INCLUDED_builders_AppBuilder */ 
