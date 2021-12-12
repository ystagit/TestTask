#include <hxcpp.h>

#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarManager
#include <elements/snackbar/SnackbarManager.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarView
#include <elements/snackbar/SnackbarView.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd27c1de35ab1c89_10_new,"elements.snackbar.SnackbarManager","new",0xc2417568,"elements.snackbar.SnackbarManager.new","elements/snackbar/SnackbarManager.hx",10,0x37121ee8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd27c1de35ab1c89_16_getView,"elements.snackbar.SnackbarManager","getView",0x962aab23,"elements.snackbar.SnackbarManager.getView","elements/snackbar/SnackbarManager.hx",16,0x37121ee8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd27c1de35ab1c89_20_open,"elements.snackbar.SnackbarManager","open",0x37b6c5c2,"elements.snackbar.SnackbarManager.open","elements/snackbar/SnackbarManager.hx",20,0x37121ee8)
HX_LOCAL_STACK_FRAME(_hx_pos_fd27c1de35ab1c89_7_boot,"elements.snackbar.SnackbarManager","boot",0x2f1e462a,"elements.snackbar.SnackbarManager.boot","elements/snackbar/SnackbarManager.hx",7,0x37121ee8)
namespace elements{
namespace snackbar{

void SnackbarManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fd27c1de35ab1c89_10_new)
HXLINE(  11)		 ::elements::snackbar::Snackbar snackbar =  ::elements::snackbar::Snackbar_obj::__alloc( HX_CTX );
HXLINE(  12)		this->snackbarView =  ::elements::snackbar::SnackbarView_obj::__alloc( HX_CTX ,snackbar);
            	}

Dynamic SnackbarManager_obj::__CreateEmpty() { return new SnackbarManager_obj; }

void *SnackbarManager_obj::_hx_vtable = 0;

Dynamic SnackbarManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SnackbarManager_obj > _hx_result = new SnackbarManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SnackbarManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20e7c728;
}

 ::elements::snackbar::SnackbarView SnackbarManager_obj::getView(){
            	HX_STACKFRAME(&_hx_pos_fd27c1de35ab1c89_16_getView)
HXDLIN(  16)		return this->snackbarView;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SnackbarManager_obj,getView,return )

void SnackbarManager_obj::open(){
            	HX_GC_STACKFRAME(&_hx_pos_fd27c1de35ab1c89_20_open)
HXDLIN(  20)		 ::elements::snackbar::SnackbarView _hx_tmp = this->snackbarView;
HXDLIN(  20)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  20)		_g->set(HX_("title",98,15,3b,10),HX_("TEST",52,90,ba,37));
HXDLIN(  20)		_hx_tmp->show( ::models::ModelEvent_obj::__alloc( HX_CTX ,HX_("OpenModal",e3,6f,50,21),_g,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SnackbarManager_obj,open,(void))

 ::elements::snackbar::SnackbarManager SnackbarManager_obj::instance;


::hx::ObjectPtr< SnackbarManager_obj > SnackbarManager_obj::__new() {
	::hx::ObjectPtr< SnackbarManager_obj > __this = new SnackbarManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SnackbarManager_obj > SnackbarManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SnackbarManager_obj *__this = (SnackbarManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SnackbarManager_obj), true, "elements.snackbar.SnackbarManager"));
	*(void **)__this = SnackbarManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SnackbarManager_obj::SnackbarManager_obj()
{
}

void SnackbarManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SnackbarManager);
	HX_MARK_MEMBER_NAME(snackbarView,"snackbarView");
	HX_MARK_END_CLASS();
}

void SnackbarManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snackbarView,"snackbarView");
}

::hx::Val SnackbarManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return ::hx::Val( open_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return ::hx::Val( getView_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"snackbarView") ) { return ::hx::Val( snackbarView ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SnackbarManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val SnackbarManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"snackbarView") ) { snackbarView=inValue.Cast<  ::elements::snackbar::SnackbarView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SnackbarManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::elements::snackbar::SnackbarManager >(); return true; }
	}
	return false;
}

void SnackbarManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("snackbarView",0a,04,e5,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SnackbarManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::snackbar::SnackbarView */ ,(int)offsetof(SnackbarManager_obj,snackbarView),HX_("snackbarView",0a,04,e5,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SnackbarManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::elements::snackbar::SnackbarManager */ ,(void *) &SnackbarManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SnackbarManager_obj_sMemberFields[] = {
	HX_("snackbarView",0a,04,e5,d0),
	HX_("getView",1b,e2,d1,20),
	HX_("open",ca,03,b4,49),
	::String(null()) };

static void SnackbarManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnackbarManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SnackbarManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnackbarManager_obj::instance,"instance");
};

#endif

::hx::Class SnackbarManager_obj::__mClass;

static ::String SnackbarManager_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void SnackbarManager_obj::__register()
{
	SnackbarManager_obj _hx_dummy;
	SnackbarManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.snackbar.SnackbarManager",76,e1,b8,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SnackbarManager_obj::__GetStatic;
	__mClass->mSetStaticField = &SnackbarManager_obj::__SetStatic;
	__mClass->mMarkFunc = SnackbarManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SnackbarManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SnackbarManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SnackbarManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SnackbarManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SnackbarManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SnackbarManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SnackbarManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_fd27c1de35ab1c89_7_boot)
HXDLIN(   7)		instance =  ::elements::snackbar::SnackbarManager_obj::__alloc( HX_CTX );
            	}
}

} // end namespace elements
} // end namespace snackbar
