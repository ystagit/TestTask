#ifndef INCLUDED_elements_text_TextView
#define INCLUDED_elements_text_TextView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS2(elements,text,Text)
HX_DECLARE_CLASS2(elements,text,TextView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace elements{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef TextView_obj OBJ_;
		TextView_obj();

	public:
		enum { _hx_ClassId = 0x65dcc536 };

		void __construct( ::elements::text::Text text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.text.TextView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.text.TextView"); }
		static ::hx::ObjectPtr< TextView_obj > __new( ::elements::text::Text text);
		static ::hx::ObjectPtr< TextView_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::text::Text text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextView",d2,41,fc,2a); }

		 ::openfl::text::TextField textField;
		 ::openfl::text::TextFormat format;
		void initAfterSettingPartner();

		void draw( ::models::ModelEvent e);

		void onScroll( ::openfl::events::MouseEvent e);
		::Dynamic onScroll_dyn();

};

} // end namespace elements
} // end namespace text

#endif /* INCLUDED_elements_text_TextView */ 
