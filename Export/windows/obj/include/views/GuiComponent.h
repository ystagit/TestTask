#ifndef INCLUDED_views_GuiComponent
#define INCLUDED_views_GuiComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(models,IModel)
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
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)

namespace views{


class HXCPP_CLASS_ATTRIBUTES GuiComponent_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef GuiComponent_obj OBJ_;
		GuiComponent_obj();

	public:
		enum { _hx_ClassId = 0x1b9649d0 };

		void __construct(::Dynamic model,::Dynamic controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="views.GuiComponent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"views.GuiComponent"); }
		static ::hx::ObjectPtr< GuiComponent_obj > __new(::Dynamic model,::Dynamic controller);
		static ::hx::ObjectPtr< GuiComponent_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GuiComponent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GuiComponent",e2,66,70,b1); }

		 ::views::GuiComposite parentNode;
		::Dynamic model;
		::Dynamic controller;
		virtual void initAfterSettingPartner();
		::Dynamic initAfterSettingPartner_dyn();

		virtual void add(::String k, ::views::GuiComponent c);
		::Dynamic add_dyn();

		virtual void remove( ::views::GuiComponent c);
		::Dynamic remove_dyn();

		virtual void hover( ::openfl::events::MouseEvent e);
		::Dynamic hover_dyn();

		virtual void show( ::models::ModelEvent e);
		::Dynamic show_dyn();

		virtual void hide( ::openfl::events::Event e);
		::Dynamic hide_dyn();

		virtual void resize( ::models::ModelEvent e);
		::Dynamic resize_dyn();

		virtual void change( ::models::ModelEvent e);
		::Dynamic change_dyn();

		virtual void updateAll( ::models::ModelEvent e);
		::Dynamic updateAll_dyn();

		virtual int getChildrenLength(::String k);
		::Dynamic getChildrenLength_dyn();

		virtual ::Array< ::Dynamic> getChildrenByKey(::String k);
		::Dynamic getChildrenByKey_dyn();

		virtual  ::views::GuiComponent getChildByIndex(::String k,int i);
		::Dynamic getChildByIndex_dyn();

		virtual ::Array< ::Dynamic> findChildren(::String path);
		::Dynamic findChildren_dyn();

		::Dynamic getModel();
		::Dynamic getModel_dyn();

		virtual  ::views::GuiComposite getComposite();
		::Dynamic getComposite_dyn();

		 ::views::GuiComposite getParent();
		::Dynamic getParent_dyn();

		void setParent( ::views::GuiComposite parent);
		::Dynamic setParent_dyn();

		void removePartnerRef();
		::Dynamic removePartnerRef_dyn();

};

} // end namespace views

#endif /* INCLUDED_views_GuiComponent */ 
