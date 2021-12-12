#ifndef INCLUDED_elements_text_Text
#define INCLUDED_elements_text_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,text,Text)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(shared,Color)

namespace elements{
namespace text{


class HXCPP_CLASS_ATTRIBUTES Text_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Text_obj OBJ_;
		Text_obj();

	public:
		enum { _hx_ClassId = 0x530cfa31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.text.Text")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.text.Text"); }
		static ::hx::ObjectPtr< Text_obj > __new();
		static ::hx::ObjectPtr< Text_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Text",cd,f8,d2,37); }

		::String value;
		 ::shared::Color textColor;
		::String font;
		int fontSize;
		 ::Dynamic alignByVer;
		 ::Dynamic alignByHor;
		::String get_value();
		::Dynamic get_value_dyn();

		::String set_value(::String value);
		::Dynamic set_value_dyn();

		 ::shared::Color get_textColor();
		::Dynamic get_textColor_dyn();

		::String get_font();
		::Dynamic get_font_dyn();

		::String set_font(::String font);
		::Dynamic set_font_dyn();

		int get_fontSize();
		::Dynamic get_fontSize_dyn();

		int set_fontSize(int fontSize);
		::Dynamic set_fontSize_dyn();

		 ::Dynamic get_alignByVer();
		::Dynamic get_alignByVer_dyn();

		 ::Dynamic set_alignByVer( ::Dynamic alignByVer);
		::Dynamic set_alignByVer_dyn();

		 ::Dynamic get_alignByHor();
		::Dynamic get_alignByHor_dyn();

		 ::Dynamic set_alignByHor( ::Dynamic alignByHor);
		::Dynamic set_alignByHor_dyn();

};

} // end namespace elements
} // end namespace text

#endif /* INCLUDED_elements_text_Text */ 
