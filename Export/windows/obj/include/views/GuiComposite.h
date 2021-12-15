#ifndef INCLUDED_views_GuiComposite
#define INCLUDED_views_GuiComposite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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


class HXCPP_CLASS_ATTRIBUTES GuiComposite_obj : public  ::views::GuiComponent_obj
{
	public:
		typedef  ::views::GuiComponent_obj super;
		typedef GuiComposite_obj OBJ_;
		GuiComposite_obj();

	public:
		enum { _hx_ClassId = 0x1ee7691a };

		void __construct(::Dynamic model,::Dynamic controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="views.GuiComposite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"views.GuiComposite"); }
		static ::hx::ObjectPtr< GuiComposite_obj > __new(::Dynamic model,::Dynamic controller);
		static ::hx::ObjectPtr< GuiComposite_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GuiComposite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GuiComposite",2c,86,c1,b4); }

		 ::haxe::ds::StringMap childern;
		virtual void initAfterSettingPartner();

		virtual void add(::String k, ::views::GuiComponent c);

		int getChildrenLength(::String k);

		::Array< ::Dynamic> getChildrenByKey(::String k);

		::Array< ::Dynamic> findChildren(::String path);

		 ::views::GuiComponent getChildByIndex(::String k,int i);

		void hover( ::openfl::events::MouseEvent e);

		virtual void show( ::models::ModelEvent e);

		virtual void hide( ::openfl::events::Event e);

		void resize( ::models::ModelEvent e);

		virtual void change( ::models::ModelEvent e);

		void updateAll( ::models::ModelEvent e);

		void remove( ::views::GuiComponent c);

		void safeRemove( ::views::GuiComponent c);
		::Dynamic safeRemove_dyn();

		 ::views::GuiComposite getComposite();

		void setMaxSize(::Dynamic parentModel);
		::Dynamic setMaxSize_dyn();

		::Array< ::Dynamic> parsePath(::String path);
		::Dynamic parsePath_dyn();

};

} // end namespace views

#endif /* INCLUDED_views_GuiComposite */ 
