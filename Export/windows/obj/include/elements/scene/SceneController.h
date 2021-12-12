#ifndef INCLUDED_elements_scene_SceneController
#define INCLUDED_elements_scene_SceneController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(controllers,IMouseHandler)
HX_DECLARE_CLASS2(elements,scene,Scene)
HX_DECLARE_CLASS2(elements,scene,SceneController)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace elements{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES SceneController_obj : public  ::controllers::BaseController_obj
{
	public:
		typedef  ::controllers::BaseController_obj super;
		typedef SceneController_obj OBJ_;
		SceneController_obj();

	public:
		enum { _hx_ClassId = 0x112dc413 };

		void __construct( ::elements::scene::Scene model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.scene.SceneController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.scene.SceneController"); }
		static ::hx::ObjectPtr< SceneController_obj > __new( ::elements::scene::Scene model);
		static ::hx::ObjectPtr< SceneController_obj > __alloc(::hx::Ctx *_hx_ctx, ::elements::scene::Scene model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SceneController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SceneController",e8,94,fe,2e); }

		void onClickMouse( ::openfl::events::MouseEvent e);
		::Dynamic onClickMouse_dyn();

		void onMoveMouse( ::openfl::events::MouseEvent e);
		::Dynamic onMoveMouse_dyn();

		void onResizeWindow(int w,int h);
		::Dynamic onResizeWindow_dyn();

};

} // end namespace elements
} // end namespace scene

#endif /* INCLUDED_elements_scene_SceneController */ 
