#ifndef INCLUDED_elements_snackbar_SnackbarView
#define INCLUDED_elements_snackbar_SnackbarView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,snackbar,Snackbar)
HX_DECLARE_CLASS2(elements,snackbar,SnackbarController)
HX_DECLARE_CLASS2(elements,snackbar,SnackbarView)
HX_DECLARE_CLASS2(elements,text,Text)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
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


class HXCPP_CLASS_ATTRIBUTES SnackbarView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef SnackbarView_obj OBJ_;
		SnackbarView_obj();

	public:
		enum { _hx_ClassId = 0x4a169966 };

		void __construct( ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.snackbar.SnackbarView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.snackbar.SnackbarView"); }
		static ::hx::ObjectPtr< SnackbarView_obj > __new( ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller);
		static ::hx::ObjectPtr< SnackbarView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::snackbar::Snackbar snackbar, ::elements::snackbar::SnackbarController controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SnackbarView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SnackbarView",2a,50,f7,98); }

		 ::elements::text::Text textModel;
		void initAfterSettingPartner();

};

} // end namespace elements
} // end namespace snackbar

#endif /* INCLUDED_elements_snackbar_SnackbarView */ 
