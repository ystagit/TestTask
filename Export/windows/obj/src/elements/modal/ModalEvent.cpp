#include <hxcpp.h>

#ifndef INCLUDED_elements_modal_ModalEvent
#include <elements/modal/ModalEvent.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04ad4588051f5733_13_new,"elements.modal.ModalEvent","new",0x035722f7,"elements.modal.ModalEvent.new","elements/modal/ModalEvent.hx",13,0xbe52a057)
HX_LOCAL_STACK_FRAME(_hx_pos_04ad4588051f5733_8_boot,"elements.modal.ModalEvent","boot",0xe10075bb,"elements.modal.ModalEvent.boot","elements/modal/ModalEvent.hx",8,0xbe52a057)
HX_LOCAL_STACK_FRAME(_hx_pos_04ad4588051f5733_10_boot,"elements.modal.ModalEvent","boot",0xe10075bb,"elements.modal.ModalEvent.boot","elements/modal/ModalEvent.hx",10,0xbe52a057)
namespace elements{
namespace modal{

void ModalEvent_obj::__construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_04ad4588051f5733_13_new)
HXDLIN(  13)		super::__construct(type,data,bubbles,cancelable);
            	}

Dynamic ModalEvent_obj::__CreateEmpty() { return new ModalEvent_obj; }

void *ModalEvent_obj::_hx_vtable = 0;

Dynamic ModalEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModalEvent_obj > _hx_result = new ModalEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ModalEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x36c10de3) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x36c10de3;
		}
	} else {
		return inClassId==(int)0x5cb5a0fb;
	}
}

::String ModalEvent_obj::SHOW;

::String ModalEvent_obj::HIDE;


::hx::ObjectPtr< ModalEvent_obj > ModalEvent_obj::__new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< ModalEvent_obj > __this = new ModalEvent_obj();
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< ModalEvent_obj > ModalEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	ModalEvent_obj *__this = (ModalEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModalEvent_obj), true, "elements.modal.ModalEvent"));
	*(void **)__this = ModalEvent_obj::_hx_vtable;
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

ModalEvent_obj::ModalEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ModalEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ModalEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ModalEvent_obj::SHOW,HX_("SHOW",fd,9c,13,37)},
	{::hx::fsString,(void *) &ModalEvent_obj::HIDE,HX_("HIDE",c2,fc,ce,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ModalEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModalEvent_obj::SHOW,"SHOW");
	HX_MARK_MEMBER_NAME(ModalEvent_obj::HIDE,"HIDE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModalEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModalEvent_obj::SHOW,"SHOW");
	HX_VISIT_MEMBER_NAME(ModalEvent_obj::HIDE,"HIDE");
};

#endif

::hx::Class ModalEvent_obj::__mClass;

static ::String ModalEvent_obj_sStaticFields[] = {
	HX_("SHOW",fd,9c,13,37),
	HX_("HIDE",c2,fc,ce,2f),
	::String(null())
};

void ModalEvent_obj::__register()
{
	ModalEvent_obj _hx_dummy;
	ModalEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.modal.ModalEvent",85,db,46,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModalEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ModalEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ModalEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModalEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModalEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModalEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ModalEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_04ad4588051f5733_8_boot)
HXDLIN(   8)		SHOW = HX_("showModal",f0,85,bc,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_04ad4588051f5733_10_boot)
HXDLIN(  10)		HIDE = HX_("hideModal",0b,dc,b6,67);
            	}
}

} // end namespace elements
} // end namespace modal
