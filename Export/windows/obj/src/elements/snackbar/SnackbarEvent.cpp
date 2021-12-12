#include <hxcpp.h>

#ifndef INCLUDED_elements_snackbar_SnackbarEvent
#include <elements/snackbar/SnackbarEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6965eeb8f9481c95_13_new,"elements.snackbar.SnackbarEvent","new",0x049f6155,"elements.snackbar.SnackbarEvent.new","elements/snackbar/SnackbarEvent.hx",13,0x9f69179b)
HX_LOCAL_STACK_FRAME(_hx_pos_6965eeb8f9481c95_8_boot,"elements.snackbar.SnackbarEvent","boot",0xfeeec99d,"elements.snackbar.SnackbarEvent.boot","elements/snackbar/SnackbarEvent.hx",8,0x9f69179b)
HX_LOCAL_STACK_FRAME(_hx_pos_6965eeb8f9481c95_10_boot,"elements.snackbar.SnackbarEvent","boot",0xfeeec99d,"elements.snackbar.SnackbarEvent.boot","elements/snackbar/SnackbarEvent.hx",10,0x9f69179b)
namespace elements{
namespace snackbar{

void SnackbarEvent_obj::__construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_6965eeb8f9481c95_13_new)
HXDLIN(  13)		super::__construct(type,data,bubbles,cancelable);
            	}

Dynamic SnackbarEvent_obj::__CreateEmpty() { return new SnackbarEvent_obj; }

void *SnackbarEvent_obj::_hx_vtable = 0;

Dynamic SnackbarEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SnackbarEvent_obj > _hx_result = new SnackbarEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SnackbarEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		if (inClassId<=(int)0x046ec815) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x046ec815;
		} else {
			return inClassId==(int)0x08ec4c31;
		}
	} else {
		return inClassId==(int)0x5cb5a0fb;
	}
}

::String SnackbarEvent_obj::SHOW;

::String SnackbarEvent_obj::HIDE;


::hx::ObjectPtr< SnackbarEvent_obj > SnackbarEvent_obj::__new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< SnackbarEvent_obj > __this = new SnackbarEvent_obj();
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< SnackbarEvent_obj > SnackbarEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	SnackbarEvent_obj *__this = (SnackbarEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SnackbarEvent_obj), true, "elements.snackbar.SnackbarEvent"));
	*(void **)__this = SnackbarEvent_obj::_hx_vtable;
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

SnackbarEvent_obj::SnackbarEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SnackbarEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SnackbarEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SnackbarEvent_obj::SHOW,HX_("SHOW",fd,9c,13,37)},
	{::hx::fsString,(void *) &SnackbarEvent_obj::HIDE,HX_("HIDE",c2,fc,ce,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SnackbarEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnackbarEvent_obj::SHOW,"SHOW");
	HX_MARK_MEMBER_NAME(SnackbarEvent_obj::HIDE,"HIDE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SnackbarEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnackbarEvent_obj::SHOW,"SHOW");
	HX_VISIT_MEMBER_NAME(SnackbarEvent_obj::HIDE,"HIDE");
};

#endif

::hx::Class SnackbarEvent_obj::__mClass;

static ::String SnackbarEvent_obj_sStaticFields[] = {
	HX_("SHOW",fd,9c,13,37),
	HX_("HIDE",c2,fc,ce,2f),
	::String(null())
};

void SnackbarEvent_obj::__register()
{
	SnackbarEvent_obj _hx_dummy;
	SnackbarEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.snackbar.SnackbarEvent",e3,12,fd,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SnackbarEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SnackbarEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SnackbarEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SnackbarEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SnackbarEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SnackbarEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SnackbarEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6965eeb8f9481c95_8_boot)
HXDLIN(   8)		SHOW = HX_("showSnackbae",15,95,bd,cb);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6965eeb8f9481c95_10_boot)
HXDLIN(  10)		HIDE = HX_("hideSnackbar",e7,c1,35,61);
            	}
}

} // end namespace elements
} // end namespace snackbar
