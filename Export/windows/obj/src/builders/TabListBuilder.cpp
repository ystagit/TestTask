#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
#ifndef INCLUDED_builders_TabListBuilder
#include <builders/TabListBuilder.h>
#endif
#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListController
#include <elements/tabs/TabListController.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListView
#include <elements/tabs/TabListView.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e0214ab335820b7d_19_new,"builders.TabListBuilder","new",0x6e2f5cd0,"builders.TabListBuilder.new","builders/TabListBuilder.hx",19,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_25_validateRequiredAttrs,"builders.TabListBuilder","validateRequiredAttrs",0xd388b63d,"builders.TabListBuilder.validateRequiredAttrs","builders/TabListBuilder.hx",25,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_27_initAttributes,"builders.TabListBuilder","initAttributes",0xa9f44597,"builders.TabListBuilder.initAttributes","builders/TabListBuilder.hx",27,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_29_withCountTab,"builders.TabListBuilder","withCountTab",0x02b2867c,"builders.TabListBuilder.withCountTab","builders/TabListBuilder.hx",29,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_34_withBackground,"builders.TabListBuilder","withBackground",0x4a24fb24,"builders.TabListBuilder.withBackground","builders/TabListBuilder.hx",34,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_39_withSize,"builders.TabListBuilder","withSize",0x55c11b77,"builders.TabListBuilder.withSize","builders/TabListBuilder.hx",39,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_44_apply,"builders.TabListBuilder","apply",0x69670dde,"builders.TabListBuilder.apply","builders/TabListBuilder.hx",44,0x50e01b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_e0214ab335820b7d_16_build,"builders.TabListBuilder","build",0x0016639e,"builders.TabListBuilder.build","builders/TabListBuilder.hx",16,0x50e01b7f)
namespace builders{

void TabListBuilder_obj::__construct( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_e0214ab335820b7d_19_new)
HXLINE(  20)		super::__construct(node);
HXLINE(  21)		this->tabList =  ::elements::tabs::TabList_obj::__alloc( HX_CTX );
HXLINE(  22)		this->initAttributes();
            	}

Dynamic TabListBuilder_obj::__CreateEmpty() { return new TabListBuilder_obj; }

void *TabListBuilder_obj::_hx_vtable = 0;

Dynamic TabListBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabListBuilder_obj > _hx_result = new TabListBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabListBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b784972) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b784972;
	} else {
		return inClassId==(int)0x165208a0;
	}
}

void TabListBuilder_obj::validateRequiredAttrs(){
            	HX_STACKFRAME(&_hx_pos_e0214ab335820b7d_25_validateRequiredAttrs)
            	}


void TabListBuilder_obj::initAttributes(){
            	HX_STACKFRAME(&_hx_pos_e0214ab335820b7d_27_initAttributes)
            	}


 ::builders::TabListBuilder TabListBuilder_obj::withCountTab(int n){
            	HX_STACKFRAME(&_hx_pos_e0214ab335820b7d_29_withCountTab)
HXLINE(  30)		this->tabList->set_count(n);
HXLINE(  31)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabListBuilder_obj,withCountTab,return )

 ::builders::TabListBuilder TabListBuilder_obj::withBackground( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_e0214ab335820b7d_34_withBackground)
HXLINE(  35)		this->tabList->setBGColor(color);
HXLINE(  36)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabListBuilder_obj,withBackground,return )

 ::builders::TabListBuilder TabListBuilder_obj::withSize( ::Dynamic w, ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_e0214ab335820b7d_39_withSize)
HXLINE(  40)		this->tabList->setSize(w,h);
HXLINE(  41)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabListBuilder_obj,withSize,return )

 ::elements::tabs::TabListView TabListBuilder_obj::apply( ::views::GuiView parentView){
            	HX_GC_STACKFRAME(&_hx_pos_e0214ab335820b7d_44_apply)
HXLINE(  45)		 ::elements::tabs::TabListController tabListController =  ::elements::tabs::TabListController_obj::__alloc( HX_CTX ,this->tabList);
HXLINE(  46)		 ::elements::tabs::TabListView tabListView =  ::elements::tabs::TabListView_obj::__alloc( HX_CTX ,this->tabList,tabListController);
HXLINE(  47)		parentView->add(::elements::ElementType_obj::TAB_LIST,tabListView);
HXLINE(  48)		return tabListView;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabListBuilder_obj,apply,return )

 ::builders::TabListBuilder TabListBuilder_obj::build( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_e0214ab335820b7d_16_build)
HXDLIN(  16)		return  ::builders::TabListBuilder_obj::__alloc( HX_CTX ,node);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TabListBuilder_obj,build,return )


::hx::ObjectPtr< TabListBuilder_obj > TabListBuilder_obj::__new( ::Xml node) {
	::hx::ObjectPtr< TabListBuilder_obj > __this = new TabListBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TabListBuilder_obj > TabListBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml node) {
	TabListBuilder_obj *__this = (TabListBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabListBuilder_obj), true, "builders.TabListBuilder"));
	*(void **)__this = TabListBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TabListBuilder_obj::TabListBuilder_obj()
{
}

void TabListBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabListBuilder);
	HX_MARK_MEMBER_NAME(tabList,"tabList");
	 ::builders::BaseBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabListBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabList,"tabList");
	 ::builders::BaseBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabListBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tabList") ) { return ::hx::Val( tabList ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"withSize") ) { return ::hx::Val( withSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"withCountTab") ) { return ::hx::Val( withCountTab_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initAttributes") ) { return ::hx::Val( initAttributes_dyn() ); }
		if (HX_FIELD_EQ(inName,"withBackground") ) { return ::hx::Val( withBackground_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateRequiredAttrs") ) { return ::hx::Val( validateRequiredAttrs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TabListBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

::hx::Val TabListBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tabList") ) { tabList=inValue.Cast<  ::elements::tabs::TabList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabListBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabList",53,f1,28,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabListBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::tabs::TabList */ ,(int)offsetof(TabListBuilder_obj,tabList),HX_("tabList",53,f1,28,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabListBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TabListBuilder_obj_sMemberFields[] = {
	HX_("tabList",53,f1,28,40),
	HX_("validateRequiredAttrs",cd,4d,21,76),
	HX_("initAttributes",07,5c,3c,bc),
	HX_("withCountTab",ec,20,cb,a9),
	HX_("withBackground",94,11,6d,5c),
	HX_("withSize",e7,bd,ff,1e),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class TabListBuilder_obj::__mClass;

static ::String TabListBuilder_obj_sStaticFields[] = {
	HX_("build",2e,db,ea,ba),
	::String(null())
};

void TabListBuilder_obj::__register()
{
	TabListBuilder_obj _hx_dummy;
	TabListBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.TabListBuilder",de,f4,f4,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabListBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabListBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabListBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabListBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabListBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabListBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
