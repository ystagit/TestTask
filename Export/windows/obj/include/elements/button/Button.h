#ifndef INCLUDED_elements_button_Button
#define INCLUDED_elements_button_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,button,Button)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace button{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x22e873df };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.button.Button")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.button.Button"); }
		static ::hx::ObjectPtr< Button_obj > __new();
		static ::hx::ObjectPtr< Button_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Button",12,d6,74,0e); }

		::String title;
		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String title);
		::Dynamic set_title_dyn();

};

} // end namespace elements
} // end namespace button

#endif /* INCLUDED_elements_button_Button */ 
