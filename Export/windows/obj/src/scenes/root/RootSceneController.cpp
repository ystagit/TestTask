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
#ifndef INCLUDED_scenes_root_RootScene
#include <scenes/root/RootScene.h>
#endif
#ifndef INCLUDED_scenes_root_RootSceneController
#include <scenes/root/RootSceneController.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed98c3cd1e0fcde3_11_new,"scenes.root.RootSceneController","new",0x51216fb3,"scenes.root.RootSceneController.new","scenes/root/RootSceneController.hx",11,0x45cceb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_ed98c3cd1e0fcde3_14_onClickMouse,"scenes.root.RootSceneController","onClickMouse",0x6b538509,"scenes.root.RootSceneController.onClickMouse","scenes/root/RootSceneController.hx",14,0x45cceb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_ed98c3cd1e0fcde3_18_onMoveMouse,"scenes.root.RootSceneController","onMoveMouse",0xa6b87288,"scenes.root.RootSceneController.onMoveMouse","scenes/root/RootSceneController.hx",18,0x45cceb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_ed98c3cd1e0fcde3_23_onResizeWindow,"scenes.root.RootSceneController","onResizeWindow",0x0f02fc50,"scenes.root.RootSceneController.onResizeWindow","scenes/root/RootSceneController.hx",23,0x45cceb7d)
namespace scenes{
namespace root{

void RootSceneController_obj::__construct( ::scenes::root::RootScene model){
            	HX_STACKFRAME(&_hx_pos_ed98c3cd1e0fcde3_11_new)
HXDLIN(  11)		super::__construct(model);
            	}

Dynamic RootSceneController_obj::__CreateEmpty() { return new RootSceneController_obj; }

void *RootSceneController_obj::_hx_vtable = 0;

Dynamic RootSceneController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RootSceneController_obj > _hx_result = new RootSceneController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RootSceneController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e05ce84) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e05ce84;
	} else {
		return inClassId==(int)0x5c13d2fd;
	}
}

static ::controllers::IMouseHandler_obj _hx_scenes_root_RootSceneController__hx_controllers_IMouseHandler= {
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::scenes::root::RootSceneController_obj::onClickMouse,
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::scenes::root::RootSceneController_obj::onMoveMouse,
};

void *RootSceneController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c5d34d7: return &_hx_scenes_root_RootSceneController__hx_controllers_IMouseHandler;
	}
	return super::_hx_getInterface(inHash);
}

void RootSceneController_obj::onClickMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_ed98c3cd1e0fcde3_14_onClickMouse)
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneController_obj,onClickMouse,(void))

void RootSceneController_obj::onMoveMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_ed98c3cd1e0fcde3_18_onMoveMouse)
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneController_obj,onMoveMouse,(void))

void RootSceneController_obj::onResizeWindow(int w,int h){
            	HX_STACKFRAME(&_hx_pos_ed98c3cd1e0fcde3_23_onResizeWindow)
HXDLIN(  23)		this->model->__Field(HX_("setMaxSize",03,1e,63,1f),::hx::paccDynamic)(w,h);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RootSceneController_obj,onResizeWindow,(void))


::hx::ObjectPtr< RootSceneController_obj > RootSceneController_obj::__new( ::scenes::root::RootScene model) {
	::hx::ObjectPtr< RootSceneController_obj > __this = new RootSceneController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< RootSceneController_obj > RootSceneController_obj::__alloc(::hx::Ctx *_hx_ctx, ::scenes::root::RootScene model) {
	RootSceneController_obj *__this = (RootSceneController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RootSceneController_obj), true, "scenes.root.RootSceneController"));
	*(void **)__this = RootSceneController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

RootSceneController_obj::RootSceneController_obj()
{
}

::hx::Val RootSceneController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *RootSceneController_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RootSceneController_obj_sStaticStorageInfo = 0;
#endif

static ::String RootSceneController_obj_sMemberFields[] = {
	HX_("onClickMouse",bc,26,28,25),
	HX_("onMoveMouse",35,c8,6e,ec),
	HX_("onResizeWindow",c3,b0,89,60),
	::String(null()) };

::hx::Class RootSceneController_obj::__mClass;

void RootSceneController_obj::__register()
{
	RootSceneController_obj _hx_dummy;
	RootSceneController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.RootSceneController",41,1a,c5,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RootSceneController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RootSceneController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RootSceneController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RootSceneController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scenes
} // end namespace root
