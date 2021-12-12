#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_scene_SceneController
#include <elements/scene/SceneController.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_745285dab3c2569e_11_new,"elements.scene.SceneController","new",0x2b5dd2c1,"elements.scene.SceneController.new","elements/scene/SceneController.hx",11,0x2e6acf11)
HX_LOCAL_STACK_FRAME(_hx_pos_745285dab3c2569e_15_onClickMouse,"elements.scene.SceneController","onClickMouse",0xba05503b,"elements.scene.SceneController.onClickMouse","elements/scene/SceneController.hx",15,0x2e6acf11)
HX_LOCAL_STACK_FRAME(_hx_pos_745285dab3c2569e_18_onMoveMouse,"elements.scene.SceneController","onMoveMouse",0x01c39396,"elements.scene.SceneController.onMoveMouse","elements/scene/SceneController.hx",18,0x2e6acf11)
HX_LOCAL_STACK_FRAME(_hx_pos_745285dab3c2569e_23_onResizeWindow,"elements.scene.SceneController","onResizeWindow",0xc6237802,"elements.scene.SceneController.onResizeWindow","elements/scene/SceneController.hx",23,0x2e6acf11)
namespace elements{
namespace scene{

void SceneController_obj::__construct( ::elements::scene::Scene model){
            	HX_STACKFRAME(&_hx_pos_745285dab3c2569e_11_new)
HXDLIN(  11)		super::__construct(model);
            	}

Dynamic SceneController_obj::__CreateEmpty() { return new SceneController_obj; }

void *SceneController_obj::_hx_vtable = 0;

Dynamic SceneController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SceneController_obj > _hx_result = new SceneController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SceneController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e05ce84) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e05ce84;
	} else {
		return inClassId==(int)0x112dc413;
	}
}

static ::controllers::IMouseHandler_obj _hx_elements_scene_SceneController__hx_controllers_IMouseHandler= {
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::elements::scene::SceneController_obj::onClickMouse,
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::elements::scene::SceneController_obj::onMoveMouse,
};

void *SceneController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c5d34d7: return &_hx_elements_scene_SceneController__hx_controllers_IMouseHandler;
	}
	return super::_hx_getInterface(inHash);
}

void SceneController_obj::onClickMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_745285dab3c2569e_15_onClickMouse)
HXDLIN(  15)		::haxe::Log_obj::trace(HX_("I'm clicking on this element!",fb,cf,0e,6c),::hx::SourceInfo(HX_("Source/elements/scene/SceneController.hx",bd,c1,5a,3a),15,HX_("elements.scene.SceneController",4f,5e,f3,6f),HX_("onClickMouse",bc,26,28,25)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneController_obj,onClickMouse,(void))

void SceneController_obj::onMoveMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_745285dab3c2569e_18_onMoveMouse)
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneController_obj,onMoveMouse,(void))

void SceneController_obj::onResizeWindow(int w,int h){
            	HX_STACKFRAME(&_hx_pos_745285dab3c2569e_23_onResizeWindow)
HXDLIN(  23)		this->model->setMaxSize(w,h);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SceneController_obj,onResizeWindow,(void))


::hx::ObjectPtr< SceneController_obj > SceneController_obj::__new( ::elements::scene::Scene model) {
	::hx::ObjectPtr< SceneController_obj > __this = new SceneController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< SceneController_obj > SceneController_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::scene::Scene model) {
	SceneController_obj *__this = (SceneController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SceneController_obj), true, "elements.scene.SceneController"));
	*(void **)__this = SceneController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

SceneController_obj::SceneController_obj()
{
}

::hx::Val SceneController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"onMoveMouse") ) { return ::hx::Val( onMoveMouse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onClickMouse") ) { return ::hx::Val( onClickMouse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onResizeWindow") ) { return ::hx::Val( onResizeWindow_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SceneController_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SceneController_obj_sStaticStorageInfo = 0;
#endif

static ::String SceneController_obj_sMemberFields[] = {
	HX_("onClickMouse",bc,26,28,25),
	HX_("onMoveMouse",35,c8,6e,ec),
	HX_("onResizeWindow",c3,b0,89,60),
	::String(null()) };

::hx::Class SceneController_obj::__mClass;

void SceneController_obj::__register()
{
	SceneController_obj _hx_dummy;
	SceneController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.scene.SceneController",4f,5e,f3,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SceneController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SceneController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace scene
