#ifndef INCLUDED_elements_tabs_TabListEvent
#define INCLUDED_elements_tabs_TabListEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
HX_DECLARE_CLASS2(elements,tabs,TabListEvent)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace elements{
namespace tabs{


class HXCPP_CLASS_ATTRIBUTES TabListEvent_obj : public  ::models::ModelEvent_obj
{
	public:
		typedef  ::models::ModelEvent_obj super;
		typedef TabListEvent_obj OBJ_;
		TabListEvent_obj();

	public:
		enum { _hx_ClassId = 0x2485c908 };

		void __construct(::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.TabListEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.TabListEvent"); }
		static ::hx::ObjectPtr< TabListEvent_obj > __new(::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< TabListEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::String selected,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabListEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabListEvent",e7,e5,70,31); }

		static void __boot();
		static ::String CHANGE_TAB_CONTEXT;
		::String selected;
		::String get_selected();
		::Dynamic get_selected_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_TabListEvent */ 
