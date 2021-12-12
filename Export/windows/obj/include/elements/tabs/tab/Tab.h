#ifndef INCLUDED_elements_tabs_tab_Tab
#define INCLUDED_elements_tabs_tab_Tab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,tab,Tab)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace tabs{
namespace tab{


class HXCPP_CLASS_ATTRIBUTES Tab_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Tab_obj OBJ_;
		Tab_obj();

	public:
		enum { _hx_ClassId = 0x63d7df75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.tab.Tab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.tab.Tab"); }
		static ::hx::ObjectPtr< Tab_obj > __new();
		static ::hx::ObjectPtr< Tab_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tab_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tab",35,12,40,00); }

		::String value;
		bool active;
		::String get_value();
		::Dynamic get_value_dyn();

		::String set_value(::String value);
		::Dynamic set_value_dyn();

		bool get_active();
		::Dynamic get_active_dyn();

};

} // end namespace elements
} // end namespace tabs
} // end namespace tab

#endif /* INCLUDED_elements_tabs_tab_Tab */ 
