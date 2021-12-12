#ifndef INCLUDED_scenes_root_RootSceneController
#define INCLUDED_scenes_root_RootSceneController

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
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(scenes,root,RootScene)
HX_DECLARE_CLASS2(scenes,root,RootSceneController)

namespace scenes{
namespace root{


class HXCPP_CLASS_ATTRIBUTES RootSceneController_obj : public  ::controllers::BaseController_obj
{
	public:
		typedef  ::controllers::BaseController_obj super;
		typedef RootSceneController_obj OBJ_;
		RootSceneController_obj();

	public:
		enum { _hx_ClassId = 0x5c13d2fd };

		void __construct( ::scenes::root::RootScene model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.root.RootSceneController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.root.RootSceneController"); }
		static ::hx::ObjectPtr< RootSceneController_obj > __new( ::scenes::root::RootScene model);
		static ::hx::ObjectPtr< RootSceneController_obj > __alloc(::hx::Ctx *_hx_ctx, ::scenes::root::RootScene model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RootSceneController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("RootSceneController",e6,54,0e,d0); }

		void onClickMouse( ::openfl::events::MouseEvent e);
		::Dynamic onClickMouse_dyn();

		void onMoveMouse( ::openfl::events::MouseEvent e);
		::Dynamic onMoveMouse_dyn();

		void onResizeWindow(int w,int h);
		::Dynamic onResizeWindow_dyn();

};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_RootSceneController */ 
