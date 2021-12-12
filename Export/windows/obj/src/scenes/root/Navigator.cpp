#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_scenes_root_NavEvent
#include <scenes/root/NavEvent.h>
#endif
#ifndef INCLUDED_scenes_root_Navigator
#include <scenes/root/Navigator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69a9800138fe5207_13_new,"scenes.root.Navigator","new",0xe1287c44,"scenes.root.Navigator.new","scenes/root/Navigator.hx",13,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_17_navTo,"scenes.root.Navigator","navTo",0xd6cdc222,"scenes.root.Navigator.navTo","scenes/root/Navigator.hx",17,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_30_back,"scenes.root.Navigator","back",0x1a5295c3,"scenes.root.Navigator.back","scenes/root/Navigator.hx",30,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_42_addNavEventListener,"scenes.root.Navigator","addNavEventListener",0xa18bb3f0,"scenes.root.Navigator.addNavEventListener","scenes/root/Navigator.hx",42,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_46_open,"scenes.root.Navigator","open",0x22f5bf66,"scenes.root.Navigator.open","scenes/root/Navigator.hx",46,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_50_close,"scenes.root.Navigator","close",0x88a5849c,"scenes.root.Navigator.close","scenes/root/Navigator.hx",50,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_8_boot,"scenes.root.Navigator","boot",0x1a5d3fce,"scenes.root.Navigator.boot","scenes/root/Navigator.hx",8,0xf421240c)
HX_LOCAL_STACK_FRAME(_hx_pos_69a9800138fe5207_9_boot,"scenes.root.Navigator","boot",0x1a5d3fce,"scenes.root.Navigator.boot","scenes/root/Navigator.hx",9,0xf421240c)
namespace scenes{
namespace root{

void Navigator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69a9800138fe5207_13_new)
HXDLIN(  13)		super::__construct(null());
            	}

Dynamic Navigator_obj::__CreateEmpty() { return new Navigator_obj; }

void *Navigator_obj::_hx_vtable = 0;

Dynamic Navigator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Navigator_obj > _hx_result = new Navigator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Navigator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x5ddfcb2a;
	}
}

void Navigator_obj::navTo(::String sceneType){
            	HX_GC_STACKFRAME(&_hx_pos_69a9800138fe5207_17_navTo)
HXDLIN(  17)		if ((::scenes::root::Navigator_obj::activeSceneType != sceneType)) {
HXLINE(  19)			::scenes::root::Navigator_obj::breadCrumbs->push(sceneType);
HXLINE(  21)			::scenes::root::Navigator_obj::activeSceneType = sceneType;
HXLINE(  23)			this->dispatchEvent( ::scenes::root::NavEvent_obj::__alloc( HX_CTX ,HX_("updateScene",83,42,6a,5e),sceneType,null(),null()));
            		}
            		else {
HXLINE(  25)			::haxe::Log_obj::trace(((HX_("Navigate: ",37,a4,51,45) + sceneType) + HX_(" scene is active.",e6,df,55,78)),::hx::SourceInfo(HX_("Source/scenes/root/Navigator.hx",e0,36,2a,f9),25,HX_("scenes.root.Navigator",52,4a,a4,c2),HX_("navTo",3e,55,8b,96)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Navigator_obj,navTo,(void))

void Navigator_obj::back(){
            	HX_GC_STACKFRAME(&_hx_pos_69a9800138fe5207_30_back)
HXDLIN(  30)		if ((::scenes::root::Navigator_obj::breadCrumbs->length > 1)) {
HXLINE(  32)			::scenes::root::Navigator_obj::breadCrumbs->pop();
HXLINE(  34)			::String newSceneType = ::scenes::root::Navigator_obj::breadCrumbs->__get((::scenes::root::Navigator_obj::breadCrumbs->length - 1));
HXLINE(  35)			::scenes::root::Navigator_obj::activeSceneType = newSceneType;
HXLINE(  37)			this->dispatchEvent( ::scenes::root::NavEvent_obj::__alloc( HX_CTX ,HX_("updateScene",83,42,6a,5e),newSceneType,null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Navigator_obj,back,(void))

 ::scenes::root::Navigator Navigator_obj::instance;

::Array< ::String > Navigator_obj::breadCrumbs;

::String Navigator_obj::activeSceneType;

void Navigator_obj::addNavEventListener(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_69a9800138fe5207_42_addNavEventListener)
HXDLIN(  42)		::scenes::root::Navigator_obj::instance->addEventListener(type,listener,null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Navigator_obj,addNavEventListener,(void))

void Navigator_obj::open(::String sceneType){
            	HX_STACKFRAME(&_hx_pos_69a9800138fe5207_46_open)
HXDLIN(  46)		::scenes::root::Navigator_obj::instance->navTo(sceneType);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Navigator_obj,open,(void))

void Navigator_obj::close(){
            	HX_STACKFRAME(&_hx_pos_69a9800138fe5207_50_close)
HXDLIN(  50)		::scenes::root::Navigator_obj::instance->back();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Navigator_obj,close,(void))


::hx::ObjectPtr< Navigator_obj > Navigator_obj::__new() {
	::hx::ObjectPtr< Navigator_obj > __this = new Navigator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Navigator_obj > Navigator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Navigator_obj *__this = (Navigator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Navigator_obj), true, "scenes.root.Navigator"));
	*(void **)__this = Navigator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Navigator_obj::Navigator_obj()
{
}

::hx::Val Navigator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"navTo") ) { return ::hx::Val( navTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Navigator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { outValue = close_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"breadCrumbs") ) { outValue = ( breadCrumbs ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeSceneType") ) { outValue = ( activeSceneType ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addNavEventListener") ) { outValue = addNavEventListener_dyn(); return true; }
	}
	return false;
}

bool Navigator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::scenes::root::Navigator >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"breadCrumbs") ) { breadCrumbs=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeSceneType") ) { activeSceneType=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Navigator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Navigator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::scenes::root::Navigator */ ,(void *) &Navigator_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Navigator_obj::breadCrumbs,HX_("breadCrumbs",30,cf,4c,d5)},
	{::hx::fsString,(void *) &Navigator_obj::activeSceneType,HX_("activeSceneType",80,c3,5d,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Navigator_obj_sMemberFields[] = {
	HX_("navTo",3e,55,8b,96),
	HX_("back",27,da,10,41),
	::String(null()) };

static void Navigator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Navigator_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Navigator_obj::breadCrumbs,"breadCrumbs");
	HX_MARK_MEMBER_NAME(Navigator_obj::activeSceneType,"activeSceneType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Navigator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Navigator_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Navigator_obj::breadCrumbs,"breadCrumbs");
	HX_VISIT_MEMBER_NAME(Navigator_obj::activeSceneType,"activeSceneType");
};

#endif

::hx::Class Navigator_obj::__mClass;

static ::String Navigator_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("breadCrumbs",30,cf,4c,d5),
	HX_("activeSceneType",80,c3,5d,d8),
	HX_("addNavEventListener",0c,00,4a,5a),
	HX_("open",ca,03,b4,49),
	HX_("close",b8,17,63,48),
	::String(null())
};

void Navigator_obj::__register()
{
	Navigator_obj _hx_dummy;
	Navigator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.Navigator",52,4a,a4,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Navigator_obj::__GetStatic;
	__mClass->mSetStaticField = &Navigator_obj::__SetStatic;
	__mClass->mMarkFunc = Navigator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Navigator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Navigator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Navigator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Navigator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Navigator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Navigator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Navigator_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_69a9800138fe5207_8_boot)
HXDLIN(   8)		instance =  ::scenes::root::Navigator_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_69a9800138fe5207_9_boot)
HXDLIN(   9)		breadCrumbs = ::Array_obj< ::String >::__new();
            	}
}

} // end namespace scenes
} // end namespace root
