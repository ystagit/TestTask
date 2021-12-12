#ifndef INCLUDED_elements_tabs_TabList
#define INCLUDED_elements_tabs_TabList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,tabs,TabList)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace tabs{


class HXCPP_CLASS_ATTRIBUTES TabList_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef TabList_obj OBJ_;
		TabList_obj();

	public:
		enum { _hx_ClassId = 0x436aa85e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.TabList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.TabList"); }
		static ::hx::ObjectPtr< TabList_obj > __new();
		static ::hx::ObjectPtr< TabList_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabList",33,19,7a,0d); }

		int count;
		::String selected;
		int get_count();
		::Dynamic get_count_dyn();

		int set_count(int count);
		::Dynamic set_count_dyn();

		::String get_selected();
		::Dynamic get_selected_dyn();

		::String set_selected(::String selected);
		::Dynamic set_selected_dyn();

		void changeTabContext();
		::Dynamic changeTabContext_dyn();

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_TabList */ 
