#ifndef INCLUDED_elements_snackbar_SnackbarController
#define INCLUDED_elements_snackbar_SnackbarController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,snackbar,SnackbarController)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace elements{
namespace snackbar{


class HXCPP_CLASS_ATTRIBUTES SnackbarController_obj : public  ::controllers::BaseController_obj
{
	public:
		typedef  ::controllers::BaseController_obj super;
		typedef SnackbarController_obj OBJ_;
		SnackbarController_obj();

	public:
		enum { _hx_ClassId = 0x0e0bcac1 };

		void __construct( ::Dynamic model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.snackbar.SnackbarController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.snackbar.SnackbarController"); }
		static ::hx::ObjectPtr< SnackbarController_obj > __new( ::Dynamic model);
		static ::hx::ObjectPtr< SnackbarController_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SnackbarController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SnackbarController",21,d8,de,ab); }

		void onShow( ::models::ModelEvent e);

};

} // end namespace elements
} // end namespace snackbar

#endif /* INCLUDED_elements_snackbar_SnackbarController */ 
