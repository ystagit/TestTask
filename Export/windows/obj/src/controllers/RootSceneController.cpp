#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_controllers_RootSceneController
#include <controllers/RootSceneController.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_502b4f6d34cf4487_12_new,"controllers.RootSceneController","new",0x7469a3c1,"controllers.RootSceneController.new","controllers/RootSceneController.hx",12,0xcda29790)
HX_LOCAL_STACK_FRAME(_hx_pos_502b4f6d34cf4487_16_onClickMouse,"controllers.RootSceneController","onClickMouse",0x43775f3b,"controllers.RootSceneController.onClickMouse","controllers/RootSceneController.hx",16,0xcda29790)
HX_LOCAL_STACK_FRAME(_hx_pos_502b4f6d34cf4487_20_onMoveMouse,"controllers.RootSceneController","onMoveMouse",0xe4886496,"controllers.RootSceneController.onMoveMouse","controllers/RootSceneController.hx",20,0xcda29790)
namespace controllers{

void RootSceneController_obj::__construct( ::models::Model model){
            	HX_STACKFRAME(&_hx_pos_502b4f6d34cf4487_12_new)
HXDLIN(  12)		this->model = model;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x6302632f;
}

static ::controllers::IController_obj _hx_controllers_RootSceneController__hx_controllers_IController= {
};

static ::controllers::IMouseHandler_obj _hx_controllers_RootSceneController__hx_controllers_IMouseHandler= {
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::controllers::RootSceneController_obj::onClickMouse,
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::controllers::RootSceneController_obj::onMoveMouse,
};

void *RootSceneController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa721dcce: return &_hx_controllers_RootSceneController__hx_controllers_IController;
		case (int)0x9c5d34d7: return &_hx_controllers_RootSceneController__hx_controllers_IMouseHandler;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void RootSceneController_obj::onClickMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_502b4f6d34cf4487_16_onClickMouse)
HXDLIN(  16)		::haxe::Log_obj::trace(HX_("I'm clicking on this element!",fb,cf,0e,6c),::hx::SourceInfo(HX_("Source/controllers/RootSceneController.hx",64,fb,a6,33),16,HX_("controllers.RootSceneController",4f,af,82,50),HX_("onClickMouse",bc,26,28,25)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneController_obj,onClickMouse,(void))

void RootSceneController_obj::onMoveMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_502b4f6d34cf4487_20_onMoveMouse)
HXDLIN(  20)		::haxe::Log_obj::trace(HX_("I'm moving on this element!",c7,a6,e5,9a),::hx::SourceInfo(HX_("Source/controllers/RootSceneController.hx",64,fb,a6,33),20,HX_("controllers.RootSceneController",4f,af,82,50),HX_("onMoveMouse",35,c8,6e,ec)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneController_obj,onMoveMouse,(void))


::hx::ObjectPtr< RootSceneController_obj > RootSceneController_obj::__new( ::models::Model model) {
	::hx::ObjectPtr< RootSceneController_obj > __this = new RootSceneController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< RootSceneController_obj > RootSceneController_obj::__alloc(::hx::Ctx *_hx_ctx, ::models::Model model) {
	RootSceneController_obj *__this = (RootSceneController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RootSceneController_obj), true, "controllers.RootSceneController"));
	*(void **)__this = RootSceneController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

RootSceneController_obj::RootSceneController_obj()
{
}

void RootSceneController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RootSceneController);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_END_CLASS();
}

void RootSceneController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
}

::hx::Val RootSceneController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMoveMouse") ) { return ::hx::Val( onMoveMouse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onClickMouse") ) { return ::hx::Val( onClickMouse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RootSceneController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::models::Model >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RootSceneController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("model",a9,23,58,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RootSceneController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::models::Model */ ,(int)offsetof(RootSceneController_obj,model),HX_("model",a9,23,58,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RootSceneController_obj_sStaticStorageInfo = 0;
#endif

static ::String RootSceneController_obj_sMemberFields[] = {
	HX_("model",a9,23,58,0c),
	HX_("onClickMouse",bc,26,28,25),
	HX_("onMoveMouse",35,c8,6e,ec),
	::String(null()) };

::hx::Class RootSceneController_obj::__mClass;

void RootSceneController_obj::__register()
{
	RootSceneController_obj _hx_dummy;
	RootSceneController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controllers.RootSceneController",4f,af,82,50);
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

} // end namespace controllers
