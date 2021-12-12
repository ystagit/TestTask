#ifndef INCLUDED_scenes_main_MainScene
#define INCLUDED_scenes_main_MainScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
#endif
HX_DECLARE_CLASS2(elements,scene,Scene)
HX_DECLARE_CLASS2(elements,scene,SceneView)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(scenes,main,MainScene)
HX_DECLARE_CLASS2(scenes,root,IScene)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace scenes{
namespace main{


class HXCPP_CLASS_ATTRIBUTES MainScene_obj : public  ::elements::scene::SceneView_obj
{
	public:
		typedef  ::elements::scene::SceneView_obj super;
		typedef MainScene_obj OBJ_;
		MainScene_obj();

	public:
		enum { _hx_ClassId = 0x2fff67ef };

		void __construct( ::elements::scene::Scene scene);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.main.MainScene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.main.MainScene"); }
		static ::hx::ObjectPtr< MainScene_obj > __new( ::elements::scene::Scene scene);
		static ::hx::ObjectPtr< MainScene_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::scene::Scene scene);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainScene_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainScene",33,82,48,34); }

		void createContainer();
		::Dynamic createContainer_dyn();

};

} // end namespace scenes
} // end namespace main

#endif /* INCLUDED_scenes_main_MainScene */ 
