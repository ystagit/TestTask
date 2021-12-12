#ifndef INCLUDED_elements_modal_Modal
#define INCLUDED_elements_modal_Modal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,modal,Modal)
HX_DECLARE_CLASS2(elements,text,Text)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace modal{


class HXCPP_CLASS_ATTRIBUTES Modal_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Modal_obj OBJ_;
		Modal_obj();

	public:
		enum { _hx_ClassId = 0x6992f2b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.modal.Modal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.modal.Modal"); }
		static ::hx::ObjectPtr< Modal_obj > __new();
		static ::hx::ObjectPtr< Modal_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Modal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Modal",0d,90,85,9f); }

		 ::elements::text::Text title;
		void initTitle();
		::Dynamic initTitle_dyn();

		 ::elements::text::Text get_title();
		::Dynamic get_title_dyn();

};

} // end namespace elements
} // end namespace modal

#endif /* INCLUDED_elements_modal_Modal */ 
