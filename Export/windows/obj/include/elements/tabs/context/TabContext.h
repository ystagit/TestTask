#ifndef INCLUDED_elements_tabs_context_TabContext
#define INCLUDED_elements_tabs_context_TabContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS3(elements,tabs,context,TabContext)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace tabs{
namespace context{


class HXCPP_CLASS_ATTRIBUTES TabContext_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef TabContext_obj OBJ_;
		TabContext_obj();

	public:
		enum { _hx_ClassId = 0x39c61830 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.context.TabContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.context.TabContext"); }
		static ::hx::ObjectPtr< TabContext_obj > __new();
		static ::hx::ObjectPtr< TabContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabContext",3a,8c,00,d2); }

		::String value;
		::String get_value();
		::Dynamic get_value_dyn();

		::String set_value(::String value);
		::Dynamic set_value_dyn();

};

} // end namespace elements
} // end namespace tabs
} // end namespace context

#endif /* INCLUDED_elements_tabs_context_TabContext */ 
