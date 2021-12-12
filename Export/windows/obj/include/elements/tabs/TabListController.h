#ifndef INCLUDED_elements_tabs_TabListController
#define INCLUDED_elements_tabs_TabListController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,tabs,TabList)
HX_DECLARE_CLASS2(elements,tabs,TabListController)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace tabs{


class HXCPP_CLASS_ATTRIBUTES TabListController_obj : public  ::controllers::BaseController_obj
{
	public:
		typedef  ::controllers::BaseController_obj super;
		typedef TabListController_obj OBJ_;
		TabListController_obj();

	public:
		enum { _hx_ClassId = 0x275632d2 };

		void __construct( ::elements::tabs::TabList model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.TabListController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.TabListController"); }
		static ::hx::ObjectPtr< TabListController_obj > __new( ::elements::tabs::TabList model);
		static ::hx::ObjectPtr< TabListController_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::tabs::TabList model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabListController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabListController",af,53,32,ca); }

		void onSelect(::String value);
		::Dynamic onSelect_dyn();

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_TabListController */ 
