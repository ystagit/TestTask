#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_controllers_MouseController
#include <controllers/MouseController.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4a6ec588c26cd61a_10_new,"controllers.MouseController","new",0xd98dcadc,"controllers.MouseController.new","controllers/MouseController.hx",10,0x4f7f5855)
HX_LOCAL_STACK_FRAME(_hx_pos_4a6ec588c26cd61a_14_onClick,"controllers.MouseController","onClick",0xdb0b0325,"controllers.MouseController.onClick","controllers/MouseController.hx",14,0x4f7f5855)
namespace controllers{

void MouseController_obj::__construct( ::models::Model model){
            	HX_STACKFRAME(&_hx_pos_4a6ec588c26cd61a_10_new)
HXDLIN(  10)		this->model = model;
            	}

Dynamic MouseController_obj::__CreateEmpty() { return new MouseController_obj; }

void *MouseController_obj::_hx_vtable = 0;

Dynamic MouseController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MouseController_obj > _hx_result = new MouseController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MouseController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3448b0ca;
}

static ::controllers::IController_obj _hx_controllers_MouseController__hx_controllers_IController= {
};

static ::controllers::IMouseHandler_obj _hx_controllers_MouseController__hx_controllers_IMouseHandler= {
};

void *MouseController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa721dcce: return &_hx_controllers_MouseController__hx_controllers_IController;
		case (int)0x9c5d34d7: return &_hx_controllers_MouseController__hx_controllers_IMouseHandler;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void MouseController_obj::onClick(){
            	HX_STACKFRAME(&_hx_pos_4a6ec588c26cd61a_14_onClick)
HXDLIN(  14)		::haxe::Log_obj::trace(HX_("I'm clicking on this element!",fb,cf,0e,6c),::hx::SourceInfo(HX_("Source/controllers/MouseController.hx",29,42,68,33),14,HX_("controllers.MouseController",ea,6c,68,64),HX_("onClick",a9,1a,9c,de)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseController_obj,onClick,(void))


::hx::ObjectPtr< MouseController_obj > MouseController_obj::__new( ::models::Model model) {
	::hx::ObjectPtr< MouseController_obj > __this = new MouseController_obj();
	__this->__construct(model);
	return __this;
}

::hx::ObjectPtr< MouseController_obj > MouseController_obj::__alloc(::hx::Ctx *_hx_ctx, ::models::Model model) {
	MouseController_obj *__this = (MouseController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseController_obj), true, "controllers.MouseController"));
	*(void **)__this = MouseController_obj::_hx_vtable;
	__this->__construct(model);
	return __this;
}

MouseController_obj::MouseController_obj()
{
}

void MouseController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseController);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_END_CLASS();
}

void MouseController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
}

::hx::Val MouseController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MouseController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::models::Model >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("model",a9,23,58,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MouseController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::models::Model */ ,(int)offsetof(MouseController_obj,model),HX_("model",a9,23,58,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MouseController_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseController_obj_sMemberFields[] = {
	HX_("model",a9,23,58,0c),
	HX_("onClick",a9,1a,9c,de),
	::String(null()) };

::hx::Class MouseController_obj::__mClass;

void MouseController_obj::__register()
{
	MouseController_obj _hx_dummy;
	MouseController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("controllers.MouseController",ea,6c,68,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MouseController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace controllers
