#ifndef INCLUDED_elements_scene_SceneView
#define INCLUDED_elements_scene_SceneView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS2(elements,scene,SceneView)
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
namespace scene{


class HXCPP_CLASS_ATTRIBUTES SceneView_obj : public  ::views::GuiView_obj
{
	public:
		typedef  ::views::GuiView_obj super;
		typedef SceneView_obj OBJ_;
		SceneView_obj();

	public:
		enum { _hx_ClassId = 0x420ee900 };

		void __construct(::Dynamic model,::Dynamic controller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.scene.SceneView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.scene.SceneView"); }
		static ::hx::ObjectPtr< SceneView_obj > __new(::Dynamic model,::Dynamic controller);
		static ::hx::ObjectPtr< SceneView_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SceneView_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SceneView",b1,ad,a1,46); }

};

} // end namespace elements
} // end namespace scene

#endif /* INCLUDED_elements_scene_SceneView */ 
