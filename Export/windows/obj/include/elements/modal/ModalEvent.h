#ifndef INCLUDED_elements_modal_ModalEvent
#define INCLUDED_elements_modal_ModalEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
HX_DECLARE_CLASS2(elements,modal,ModalEvent)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace elements{
namespace modal{


class HXCPP_CLASS_ATTRIBUTES ModalEvent_obj : public  ::models::ModelEvent_obj
{
	public:
		typedef  ::models::ModelEvent_obj super;
		typedef ModalEvent_obj OBJ_;
		ModalEvent_obj();

	public:
		enum { _hx_ClassId = 0x36c10de3 };

		void __construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.modal.ModalEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.modal.ModalEvent"); }
		static ::hx::ObjectPtr< ModalEvent_obj > __new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< ModalEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModalEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModalEvent",cd,58,e6,9d); }

		static void __boot();
		static ::String SHOW;
		static ::String HIDE;
};

} // end namespace elements
} // end namespace modal

#endif /* INCLUDED_elements_modal_ModalEvent */ 
