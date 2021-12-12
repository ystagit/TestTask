#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_shared_Point
#include <shared/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a53245cb2565cd7b_13_new,"controllers.BaseController","new",0x66299956,"controllers.BaseController.new","controllers/BaseController.hx",13,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_17_onUpdate,"controllers.BaseController","onUpdate",0x78b277d2,"controllers.BaseController.onUpdate","controllers/BaseController.hx",17,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_21_onShow,"controllers.BaseController","onShow",0xf16e9286,"controllers.BaseController.onShow","controllers/BaseController.hx",21,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_25_onHide,"controllers.BaseController","onHide",0xea29f24b,"controllers.BaseController.onHide","controllers/BaseController.hx",25,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_28_onHover,"controllers.BaseController","onHover",0xfe8f0013,"controllers.BaseController.onHover","controllers/BaseController.hx",28,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_34_onResize,"controllers.BaseController","onResize",0xfa284bbd,"controllers.BaseController.onResize","controllers/BaseController.hx",34,0x9b7551b9)
HX_LOCAL_STACK_FRAME(_hx_pos_a53245cb2565cd7b_38_onSyncResize,"controllers.BaseController","onSyncResize",0x801c48f8,"controllers.BaseController.onSyncResize","controllers/BaseController.hx",38,0x9b7551b9)
namespace controllers{

void BaseController_obj::__construct( ::Dynamic model){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_13_new)
HXDLIN(  13)		this->model = model;
            	}

Dynamic BaseController_obj::__CreateEmpty() { return new BaseController_obj; }

void *BaseController_obj::_hx_vtable = 0;

Dynamic BaseController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseController_obj > _hx_result = new BaseController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e05ce84;
}

static ::controllers::IController_obj _hx_controllers_BaseController__hx_controllers_IController= {
	( void (::hx::Object::*)( ::models::ModelEvent))&::controllers::BaseController_obj::onUpdate,
	( void (::hx::Object::*)( ::models::ModelEvent))&::controllers::BaseController_obj::onShow,
	( void (::hx::Object::*)( ::openfl::events::Event))&::controllers::BaseController_obj::onHide,
	( void (::hx::Object::*)( ::openfl::events::MouseEvent))&::controllers::BaseController_obj::onHover,
	( void (::hx::Object::*)(int,int))&::controllers::BaseController_obj::onResize,
	( void (::hx::Object::*)())&::controllers::BaseController_obj::onSyncResize,
};

void *BaseController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa721dcce: return &_hx_controllers_BaseController__hx_controllers_IController;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void BaseController_obj::onUpdate( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_17_onUpdate)
HXDLIN(  17)		this->model->__Field(HX_("update",09,86,05,87),::hx::paccDynamic)();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseController_obj,onUpdate,(void))

void BaseController_obj::onShow( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_21_onShow)
HXDLIN(  21)		this->model->__Field(HX_("show",fd,d4,52,4c),::hx::paccDynamic)();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseController_obj,onShow,(void))

void BaseController_obj::onHide( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_25_onHide)
HXDLIN(  25)		this->model->__Field(HX_("hide",c2,34,0e,45),::hx::paccDynamic)();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseController_obj,onHide,(void))

void BaseController_obj::onHover( ::openfl::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_a53245cb2565cd7b_28_onHover)
HXLINE(  29)		 ::shared::Point p =  ::shared::Point_obj::__alloc( HX_CTX ,e->stageX,e->stageY);
HXLINE(  30)		this->model->__Field(HX_("hover",bc,e5,64,2b),::hx::paccDynamic)(p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseController_obj,onHover,(void))

void BaseController_obj::onResize(int w,int h){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_34_onResize)
HXDLIN(  34)		this->model->__Field(HX_("setMaxSize",03,1e,63,1f),::hx::paccDynamic)(w,h);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseController_obj,onResize,(void))

void BaseController_obj::onSyncResize(){
            	HX_STACKFRAME(&_hx_pos_a53245cb2565cd7b_38_onSyncResize)
HXDLIN(  38)		this->model->__Field(HX_("syncMaxSize",6a,38,2f,23),::hx::paccDynamic)();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseController_obj,onSyncResize,(void))


::hx::ObjectPtr< BaseController_obj > BaseController_obj::__new( ::Dynamic model) {
	::hx::ObjectPtr< BaseController_obj > __this = new BaseController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< BaseController_obj > BaseController_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic model) {
	BaseController_obj *__this = (BaseController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseController_obj), true, "controllers.BaseController"));
	*(void **)__this = BaseController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

BaseController_obj::BaseController_obj()
{
}

void BaseController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseController);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_END_CLASS();
}

void BaseController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
}

::hx::Val BaseController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onShow") ) { return ::hx::Val( onShow_dyn() ); }
		if (HX_FIELD_EQ(inName,"onHide") ) { return ::hx::Val( onHide_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onHover") ) { return ::hx::Val( onHover_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onSyncResize") ) { return ::hx::Val( onSyncResize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("model",a9,23,58,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseController_obj,model),HX_("model",a9,23,58,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseController_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseController_obj_sMemberFields[] = {
	HX_("model",a9,23,58,0c),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onShow",bc,dd,dc,ee),
	HX_("onHide",81,3d,98,e7),
	HX_("onHover",1d,84,a2,c1),
	HX_("onResize",73,50,28,e8),
	HX_("onSyncResize",ae,e0,5b,d3),
	::String(null()) };

::hx::Class BaseController_obj::__mClass;

void BaseController_obj::__register()
{
	BaseController_obj _hx_dummy;
	BaseController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controllers.BaseController",64,f6,a8,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace controllers
