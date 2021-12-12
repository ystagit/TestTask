#ifndef INCLUDED_controllers_RootSceneController
#define INCLUDED_controllers_RootSceneController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(controllers,IMouseHandler)
HX_DECLARE_CLASS1(controllers,RootSceneController)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace controllers{


class HXCPP_CLASS_ATTRIBUTES RootSceneController_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RootSceneController_obj OBJ_;
		RootSceneController_obj();

	public:
		enum { _hx_ClassId = 0x6302632f };

		void __construct( ::models::Model model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="controllers.RootSceneController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"controllers.RootSceneController"); }
		static ::hx::ObjectPtr< RootSceneController_obj > __new( ::models::Model model);
		static ::hx::ObjectPtr< RootSceneController_obj > __alloc(::hx::Ctx *_hx_ctx, ::models::Model model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RootSceneController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("RootSceneController",e6,54,0e,d0); }

		 ::models::Model model;
		void onClickMouse( ::openfl::events::MouseEvent e);
		::Dynamic onClickMouse_dyn();

		void onMoveMouse( ::openfl::events::MouseEvent e);
		::Dynamic onMoveMouse_dyn();

};

} // end namespace controllers

#endif /* INCLUDED_controllers_RootSceneController */ 
