#ifndef INCLUDED_elements_snackbar_SnackbarManager
#define INCLUDED_elements_snackbar_SnackbarManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(elements,snackbar,SnackbarManager)
HX_DECLARE_CLASS2(elements,snackbar,SnackbarView)
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

namespace elements{
namespace snackbar{


class HXCPP_CLASS_ATTRIBUTES SnackbarManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SnackbarManager_obj OBJ_;
		SnackbarManager_obj();

	public:
		enum { _hx_ClassId = 0x20e7c728 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.snackbar.SnackbarManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.snackbar.SnackbarManager"); }
		static ::hx::ObjectPtr< SnackbarManager_obj > __new();
		static ::hx::ObjectPtr< SnackbarManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SnackbarManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SnackbarManager",c8,9d,80,8f); }

		static void __boot();
		static  ::elements::snackbar::SnackbarManager instance;
		 ::elements::snackbar::SnackbarView snackbarView;
		 ::elements::snackbar::SnackbarView getView();
		::Dynamic getView_dyn();

		void open();
		::Dynamic open_dyn();

};

} // end namespace elements
} // end namespace snackbar

#endif /* INCLUDED_elements_snackbar_SnackbarManager */ 
