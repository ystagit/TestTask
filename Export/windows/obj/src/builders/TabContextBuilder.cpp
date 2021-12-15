#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
#ifndef INCLUDED_builders_TabContextBuilder
#include <builders/TabContextBuilder.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContextView
#include <elements/tabs/context/TabContextView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_18_new,"builders.TabContextBuilder","new",0x8a63bb7d,"builders.TabContextBuilder.new","builders/TabContextBuilder.hx",18,0xe1ee6914)
HX_LOCAL_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_24_validateRequiredAttrs,"builders.TabContextBuilder","validateRequiredAttrs",0x4403442a,"builders.TabContextBuilder.validateRequiredAttrs","builders/TabContextBuilder.hx",24,0xe1ee6914)
HX_LOCAL_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_27_initAttributes,"builders.TabContextBuilder","initAttributes",0x0addbc0a,"builders.TabContextBuilder.initAttributes","builders/TabContextBuilder.hx",27,0xe1ee6914)
HX_LOCAL_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_30_withBackground,"builders.TabContextBuilder","withBackground",0xab0e7197,"builders.TabContextBuilder.withBackground","builders/TabContextBuilder.hx",30,0xe1ee6914)
HX_LOCAL_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_35_apply,"builders.TabContextBuilder","apply",0x427231cb,"builders.TabContextBuilder.apply","builders/TabContextBuilder.hx",35,0xe1ee6914)
HX_LOCAL_STACK_FRAME(_hx_pos_8e46d4b6b1ab7b23_15_build,"builders.TabContextBuilder","build",0xd921878b,"builders.TabContextBuilder.build","builders/TabContextBuilder.hx",15,0xe1ee6914)
namespace builders{

void TabContextBuilder_obj::__construct( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_18_new)
HXLINE(  19)		super::__construct(node);
HXLINE(  20)		this->tabContext =  ::elements::tabs::context::TabContext_obj::__alloc( HX_CTX );
HXLINE(  21)		this->initAttributes();
            	}

Dynamic TabContextBuilder_obj::__CreateEmpty() { return new TabContextBuilder_obj; }

void *TabContextBuilder_obj::_hx_vtable = 0;

Dynamic TabContextBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabContextBuilder_obj > _hx_result = new TabContextBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabContextBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b784972) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b784972;
	} else {
		return inClassId==(int)0x1a5e7cc1;
	}
}

void TabContextBuilder_obj::validateRequiredAttrs(){
            	HX_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_24_validateRequiredAttrs)
            	}


void TabContextBuilder_obj::initAttributes(){
            	HX_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_27_initAttributes)
HXDLIN(  27)		 ::elements::tabs::context::TabContext _hx_tmp = this->tabContext;
HXDLIN(  27)		::String _hx_tmp1;
HXDLIN(  27)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->get_node(),HX_("value",71,7f,b8,31))) {
HXDLIN(  27)			_hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->get_node(),HX_("value",71,7f,b8,31));
            		}
            		else {
HXDLIN(  27)			_hx_tmp1 = HX_("0",30,00,00,00);
            		}
HXDLIN(  27)		_hx_tmp->set_value(_hx_tmp1);
            	}


 ::builders::TabContextBuilder TabContextBuilder_obj::withBackground( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_30_withBackground)
HXLINE(  31)		this->tabContext->setBGColor(color);
HXLINE(  32)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabContextBuilder_obj,withBackground,return )

 ::elements::tabs::context::TabContextView TabContextBuilder_obj::apply( ::views::GuiView parentView){
            	HX_GC_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_35_apply)
HXLINE(  36)		 ::elements::tabs::context::TabContextView tabContextView =  ::elements::tabs::context::TabContextView_obj::__alloc( HX_CTX ,this->tabContext);
HXLINE(  37)		parentView->add(::elements::ElementType_obj::TAB_CONTEXT,tabContextView);
HXLINE(  38)		return tabContextView;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabContextBuilder_obj,apply,return )

 ::builders::TabContextBuilder TabContextBuilder_obj::build( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_8e46d4b6b1ab7b23_15_build)
HXDLIN(  15)		return  ::builders::TabContextBuilder_obj::__alloc( HX_CTX ,node);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TabContextBuilder_obj,build,return )


::hx::ObjectPtr< TabContextBuilder_obj > TabContextBuilder_obj::__new( ::Xml node) {
	::hx::ObjectPtr< TabContextBuilder_obj > __this = new TabContextBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< TabContextBuilder_obj > TabContextBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml node) {
	TabContextBuilder_obj *__this = (TabContextBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabContextBuilder_obj), true, "builders.TabContextBuilder"));
	*(void **)__this = TabContextBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

TabContextBuilder_obj::TabContextBuilder_obj()
{
}

void TabContextBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabContextBuilder);
	HX_MARK_MEMBER_NAME(tabContext,"tabContext");
	 ::builders::BaseBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabContextBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabContext,"tabContext");
	 ::builders::BaseBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabContextBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabContext") ) { return ::hx::Val( tabContext ); }
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

bool TabContextBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

::hx::Val TabContextBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"tabContext") ) { tabContext=inValue.Cast<  ::elements::tabs::context::TabContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabContextBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabContext",1a,88,4f,db));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabContextBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::tabs::context::TabContext */ ,(int)offsetof(TabContextBuilder_obj,tabContext),HX_("tabContext",1a,88,4f,db)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabContextBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TabContextBuilder_obj_sMemberFields[] = {
	HX_("tabContext",1a,88,4f,db),
	HX_("validateRequiredAttrs",cd,4d,21,76),
	HX_("initAttributes",07,5c,3c,bc),
	HX_("withBackground",94,11,6d,5c),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class TabContextBuilder_obj::__mClass;

static ::String TabContextBuilder_obj_sStaticFields[] = {
	HX_("build",2e,db,ea,ba),
	::String(null())
};

void TabContextBuilder_obj::__register()
{
	TabContextBuilder_obj _hx_dummy;
	TabContextBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.TabContextBuilder",0b,39,af,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabContextBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabContextBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabContextBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabContextBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabContextBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabContextBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
