#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
#ifndef INCLUDED_builders_TabPanelBuilder
#include <builders/TabPanelBuilder.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanel
#include <elements/tabs/panel/TabPanel.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanelView
#include <elements/tabs/panel/TabPanelView.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a99173a3a5364015_18_new,"builders.TabPanelBuilder","new",0x9e907ec8,"builders.TabPanelBuilder.new","builders/TabPanelBuilder.hx",18,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_24_validateRequiredAttrs,"builders.TabPanelBuilder","validateRequiredAttrs",0x4471b635,"builders.TabPanelBuilder.validateRequiredAttrs","builders/TabPanelBuilder.hx",24,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_27_initAttributes,"builders.TabPanelBuilder","initAttributes",0x61c6f69f,"builders.TabPanelBuilder.initAttributes","builders/TabPanelBuilder.hx",27,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_30_withPosition,"builders.TabPanelBuilder","withPosition",0x59b18d67,"builders.TabPanelBuilder.withPosition","builders/TabPanelBuilder.hx",30,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_35_withSize,"builders.TabPanelBuilder","withSize",0x1529d67f,"builders.TabPanelBuilder.withSize","builders/TabPanelBuilder.hx",35,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_40_withBackground,"builders.TabPanelBuilder","withBackground",0x01f7ac2c,"builders.TabPanelBuilder.withBackground","builders/TabPanelBuilder.hx",40,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_45_apply,"builders.TabPanelBuilder","apply",0x4dce9dd6,"builders.TabPanelBuilder.apply","builders/TabPanelBuilder.hx",45,0x1f0485e9)
HX_LOCAL_STACK_FRAME(_hx_pos_a99173a3a5364015_15_build,"builders.TabPanelBuilder","build",0xe47df396,"builders.TabPanelBuilder.build","builders/TabPanelBuilder.hx",15,0x1f0485e9)
namespace builders{

void TabPanelBuilder_obj::__construct( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_a99173a3a5364015_18_new)
HXLINE(  19)		super::__construct(node);
HXLINE(  20)		this->tabPanel =  ::elements::tabs::panel::TabPanel_obj::__alloc( HX_CTX );
HXLINE(  21)		this->initAttributes();
            	}

Dynamic TabPanelBuilder_obj::__CreateEmpty() { return new TabPanelBuilder_obj; }

void *TabPanelBuilder_obj::_hx_vtable = 0;

Dynamic TabPanelBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabPanelBuilder_obj > _hx_result = new TabPanelBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabPanelBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b784972) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b784972;
	} else {
		return inClassId==(int)0x642f850c;
	}
}

void TabPanelBuilder_obj::validateRequiredAttrs(){
            	HX_STACKFRAME(&_hx_pos_a99173a3a5364015_24_validateRequiredAttrs)
            	}


void TabPanelBuilder_obj::initAttributes(){
            	HX_STACKFRAME(&_hx_pos_a99173a3a5364015_27_initAttributes)
HXDLIN(  27)		 ::elements::tabs::panel::TabPanel _hx_tmp = this->tabPanel;
HXDLIN(  27)		::String _hx_tmp1;
HXDLIN(  27)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->get_node(),HX_("value",71,7f,b8,31))) {
HXDLIN(  27)			_hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->get_node(),HX_("value",71,7f,b8,31));
            		}
            		else {
HXDLIN(  27)			_hx_tmp1 = HX_("0",30,00,00,00);
            		}
HXDLIN(  27)		_hx_tmp->set_value(_hx_tmp1);
            	}


 ::builders::TabPanelBuilder TabPanelBuilder_obj::withPosition( ::Dynamic x, ::Dynamic y){
            	HX_STACKFRAME(&_hx_pos_a99173a3a5364015_30_withPosition)
HXLINE(  31)		this->tabPanel->setPosition(x,y);
HXLINE(  32)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabPanelBuilder_obj,withPosition,return )

 ::builders::TabPanelBuilder TabPanelBuilder_obj::withSize( ::Dynamic w, ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_a99173a3a5364015_35_withSize)
HXLINE(  36)		this->tabPanel->setSize(w,h);
HXLINE(  37)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabPanelBuilder_obj,withSize,return )

 ::builders::TabPanelBuilder TabPanelBuilder_obj::withBackground( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_a99173a3a5364015_40_withBackground)
HXLINE(  41)		this->tabPanel->setBGColor(color);
HXLINE(  42)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabPanelBuilder_obj,withBackground,return )

 ::elements::tabs::panel::TabPanelView TabPanelBuilder_obj::apply( ::views::GuiView parentView){
            	HX_GC_STACKFRAME(&_hx_pos_a99173a3a5364015_45_apply)
HXLINE(  46)		 ::elements::tabs::panel::TabPanelView tabPanelView =  ::elements::tabs::panel::TabPanelView_obj::__alloc( HX_CTX ,this->tabPanel);
HXLINE(  47)		parentView->add(::elements::ElementType_obj::TAB_PANEL,tabPanelView);
HXLINE(  48)		return tabPanelView;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabPanelBuilder_obj,apply,return )

 ::builders::TabPanelBuilder TabPanelBuilder_obj::build( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_a99173a3a5364015_15_build)
HXDLIN(  15)		return  ::builders::TabPanelBuilder_obj::__alloc( HX_CTX ,node);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TabPanelBuilder_obj,build,return )


::hx::ObjectPtr< TabPanelBuilder_obj > TabPanelBuilder_obj::__new( ::Xml node) {
	::hx::ObjectPtr< TabPanelBuilder_obj > __this = new TabPanelBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TabPanelBuilder_obj > TabPanelBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml node) {
	TabPanelBuilder_obj *__this = (TabPanelBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabPanelBuilder_obj), true, "builders.TabPanelBuilder"));
	*(void **)__this = TabPanelBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TabPanelBuilder_obj::TabPanelBuilder_obj()
{
}

void TabPanelBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabPanelBuilder);
	HX_MARK_MEMBER_NAME(tabPanel,"tabPanel");
	 ::builders::BaseBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabPanelBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabPanel,"tabPanel");
	 ::builders::BaseBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabPanelBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabPanel") ) { return ::hx::Val( tabPanel ); }
		if (HX_FIELD_EQ(inName,"withSize") ) { return ::hx::Val( withSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"withPosition") ) { return ::hx::Val( withPosition_dyn() ); }
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

bool TabPanelBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

::hx::Val TabPanelBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabPanel") ) { tabPanel=inValue.Cast<  ::elements::tabs::panel::TabPanel >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabPanelBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabPanel",6f,fc,f6,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabPanelBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::tabs::panel::TabPanel */ ,(int)offsetof(TabPanelBuilder_obj,tabPanel),HX_("tabPanel",6f,fc,f6,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabPanelBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TabPanelBuilder_obj_sMemberFields[] = {
	HX_("tabPanel",6f,fc,f6,2b),
	HX_("validateRequiredAttrs",cd,4d,21,76),
	HX_("initAttributes",07,5c,3c,bc),
	HX_("withPosition",cf,48,b3,e3),
	HX_("withSize",e7,bd,ff,1e),
	HX_("withBackground",94,11,6d,5c),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class TabPanelBuilder_obj::__mClass;

static ::String TabPanelBuilder_obj_sStaticFields[] = {
	HX_("build",2e,db,ea,ba),
	::String(null())
};

void TabPanelBuilder_obj::__register()
{
	TabPanelBuilder_obj _hx_dummy;
	TabPanelBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.TabPanelBuilder",d6,ba,af,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabPanelBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabPanelBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabPanelBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabPanelBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabPanelBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabPanelBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
