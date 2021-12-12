#ifndef INCLUDED_elements_snackbar_SnackbarEvent
#define INCLUDED_elements_snackbar_SnackbarEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
HX_DECLARE_CLASS2(elements,snackbar,SnackbarEvent)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace elements{
namespace snackbar{


class HXCPP_CLASS_ATTRIBUTES SnackbarEvent_obj : public  ::models::ModelEvent_obj
{
	public:
		typedef  ::models::ModelEvent_obj super;
		typedef SnackbarEvent_obj OBJ_;
		SnackbarEvent_obj();

	public:
		enum { _hx_ClassId = 0x046ec815 };

		void __construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.snackbar.SnackbarEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.snackbar.SnackbarEvent"); }
		static ::hx::ObjectPtr< SnackbarEvent_obj > __new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< SnackbarEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SnackbarEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SnackbarEvent",b5,b6,36,7e); }

		static void __boot();
		static ::String SHOW;
		static ::String HIDE;
};

} // end namespace elements
} // end namespace snackbar

#endif /* INCLUDED_elements_snackbar_SnackbarEvent */ 
