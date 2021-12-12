#ifndef INCLUDED_scenes_root_RootSceneView
#define INCLUDED_scenes_root_RootSceneView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(scenes,root,NavEvent)
HX_DECLARE_CLASS2(scenes,root,RootSceneView)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace scenes{
namespace root{


class HXCPP_CLASS_ATTRIBUTES RootSceneView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef RootSceneView_obj OBJ_;
		RootSceneView_obj();

	public:
		enum { _hx_ClassId = 0x0aec0722 };

		void __construct(::Dynamic model,::Dynamic controller, ::openfl::display::Stage target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.root.RootSceneView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.root.RootSceneView"); }
		static ::hx::ObjectPtr< RootSceneView_obj > __new(::Dynamic model,::Dynamic controller, ::openfl::display::Stage target);
		static ::hx::ObjectPtr< RootSceneView_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller, ::openfl::display::Stage target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RootSceneView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RootSceneView",2f,3b,79,22); }

		 ::openfl::display::Stage target;
		::Array< ::Dynamic> findChildrenViaScene(::String sceneName,::String path);
		::Dynamic findChildrenViaScene_dyn();

		void init();
		::Dynamic init_dyn();

		void initEventListeners();
		::Dynamic initEventListeners_dyn();

		void onUpdateScene( ::scenes::root::NavEvent e);
		::Dynamic onUpdateScene_dyn();

		void onResizeWindow( ::openfl::events::Event e);
		::Dynamic onResizeWindow_dyn();

		void onClickMouse( ::openfl::events::MouseEvent e);
		::Dynamic onClickMouse_dyn();

};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_RootSceneView */ 
