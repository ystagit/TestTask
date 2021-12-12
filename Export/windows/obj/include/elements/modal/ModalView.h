#ifndef INCLUDED_elements_modal_ModalView
#define INCLUDED_elements_modal_ModalView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,modal,ModalView)
HX_DECLARE_CLASS2(elements,row,RowView)
HX_DECLARE_CLASS1(models,IModel)
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
namespace modal{


class HXCPP_CLASS_ATTRIBUTES ModalView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef ModalView_obj OBJ_;
		ModalView_obj();

	public:
		enum { _hx_ClassId = 0x2a7078bc };

		void __construct(::Dynamic model,::Dynamic controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.modal.ModalView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.modal.ModalView"); }
		static ::hx::ObjectPtr< ModalView_obj > __new(::Dynamic model,::Dynamic controller);
		static ::hx::ObjectPtr< ModalView_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModalView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModalView",12,79,eb,ae); }

		void initAfterSettingPartner();

		 ::elements::row::RowView addRow( ::Dynamic w, ::Dynamic h);
		::Dynamic addRow_dyn();

};

} // end namespace elements
} // end namespace modal

#endif /* INCLUDED_elements_modal_ModalView */ 
