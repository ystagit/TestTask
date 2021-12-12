#ifndef INCLUDED_elements_tabs_panel_TabPanel
#define INCLUDED_elements_tabs_panel_TabPanel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,panel,TabPanel)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace tabs{
namespace panel{


class HXCPP_CLASS_ATTRIBUTES TabPanel_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef TabPanel_obj OBJ_;
		TabPanel_obj();

	public:
		enum { _hx_ClassId = 0x0e3ae1ee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.panel.TabPanel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.panel.TabPanel"); }
		static ::hx::ObjectPtr< TabPanel_obj > __new();
		static ::hx::ObjectPtr< TabPanel_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabPanel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabPanel",8f,b8,a8,05); }

		::String value;
		::String get_value();
		::Dynamic get_value_dyn();

		::String set_value(::String value);
		::Dynamic set_value_dyn();

};

} // end namespace elements
} // end namespace tabs
} // end namespace panel

#endif /* INCLUDED_elements_tabs_panel_TabPanel */ 
