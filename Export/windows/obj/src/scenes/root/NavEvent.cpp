#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_scenes_root_NavEvent
#include <scenes/root/NavEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4ffea3367daac83_12_new,"scenes.root.NavEvent","new",0x406f460e,"scenes.root.NavEvent.new","scenes/root/NavEvent.hx",12,0x3d86f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4ffea3367daac83_18_getSceneName,"scenes.root.NavEvent","getSceneName",0xcec10ed3,"scenes.root.NavEvent.getSceneName","scenes/root/NavEvent.hx",18,0x3d86f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4ffea3367daac83_22_clone,"scenes.root.NavEvent","clone",0x5e89d08b,"scenes.root.NavEvent.clone","scenes/root/NavEvent.hx",22,0x3d86f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_e4ffea3367daac83_8_boot,"scenes.root.NavEvent","boot",0x190706c4,"scenes.root.NavEvent.boot","scenes/root/NavEvent.hx",8,0x3d86f4c2)
namespace scenes{
namespace root{

void NavEvent_obj::__construct(::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_e4ffea3367daac83_12_new)
HXLINE(  13)		super::__construct(type,bubbles,cancelable);
HXLINE(  14)		this->sceneName = sceneName;
            	}

Dynamic NavEvent_obj::__CreateEmpty() { return new NavEvent_obj; }

void *NavEvent_obj::_hx_vtable = 0;

Dynamic NavEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NavEvent_obj > _hx_result = new NavEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NavEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x16033ce0;
	}
}

::String NavEvent_obj::getSceneName(){
            	HX_STACKFRAME(&_hx_pos_e4ffea3367daac83_18_getSceneName)
HXDLIN(  18)		return this->sceneName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NavEvent_obj,getSceneName,return )

 ::openfl::events::Event NavEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e4ffea3367daac83_22_clone)
HXDLIN(  22)		return  ::scenes::root::NavEvent_obj::__alloc( HX_CTX ,this->type,this->sceneName,this->bubbles,this->cancelable);
            	}


::String NavEvent_obj::UPDATE_SCENE;


::hx::ObjectPtr< NavEvent_obj > NavEvent_obj::__new(::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< NavEvent_obj > __this = new NavEvent_obj();
	__this->__construct(type,sceneName,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< NavEvent_obj > NavEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	NavEvent_obj *__this = (NavEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NavEvent_obj), true, "scenes.root.NavEvent"));
	*(void **)__this = NavEvent_obj::_hx_vtable;
	__this->__construct(type,sceneName,__o_bubbles,__o_cancelable);
	return __this;
}

NavEvent_obj::NavEvent_obj()
{
}

void NavEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NavEvent);
	HX_MARK_MEMBER_NAME(sceneName,"sceneName");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NavEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sceneName,"sceneName");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NavEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sceneName") ) { return ::hx::Val( sceneName ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSceneName") ) { return ::hx::Val( getSceneName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NavEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"sceneName") ) { sceneName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NavEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sceneName",b7,0d,7f,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NavEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(NavEvent_obj,sceneName),HX_("sceneName",b7,0d,7f,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NavEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NavEvent_obj::UPDATE_SCENE,HX_("UPDATE_SCENE",36,37,a2,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NavEvent_obj_sMemberFields[] = {
	HX_("sceneName",b7,0d,7f,9f),
	HX_("getSceneName",41,aa,d5,ae),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void NavEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NavEvent_obj::UPDATE_SCENE,"UPDATE_SCENE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NavEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NavEvent_obj::UPDATE_SCENE,"UPDATE_SCENE");
};

#endif

::hx::Class NavEvent_obj::__mClass;

static ::String NavEvent_obj_sStaticFields[] = {
	HX_("UPDATE_SCENE",36,37,a2,a9),
	::String(null())
};

void NavEvent_obj::__register()
{
	NavEvent_obj _hx_dummy;
	NavEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.NavEvent",1c,e7,fb,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NavEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NavEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NavEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NavEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NavEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NavEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NavEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NavEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e4ffea3367daac83_8_boot)
HXDLIN(   8)		UPDATE_SCENE = HX_("updateScene",83,42,6a,5e);
            	}
}

} // end namespace scenes
} // end namespace root
