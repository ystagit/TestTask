#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif
#ifndef INCLUDED_builders_SceneBuilder
#include <builders/SceneBuilder.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04545888ab04dc37_19_new,"builders.SceneBuilder","new",0x77b133f7,"builders.SceneBuilder.new","builders/SceneBuilder.hx",19,0xb0c3e078)
HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_26_validateRequiredAttrs,"builders.SceneBuilder","validateRequiredAttrs",0x124a6324,"builders.SceneBuilder.validateRequiredAttrs","builders/SceneBuilder.hx",26,0xb0c3e078)
HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_32_initAttributes,"builders.SceneBuilder","initAttributes",0x474d81d0,"builders.SceneBuilder.initAttributes","builders/SceneBuilder.hx",32,0xb0c3e078)
HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_35_withBackground,"builders.SceneBuilder","withBackground",0xe77e375d,"builders.SceneBuilder.withBackground","builders/SceneBuilder.hx",35,0xb0c3e078)
HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_40_apply,"builders.SceneBuilder","apply",0x386a3cc5,"builders.SceneBuilder.apply","builders/SceneBuilder.hx",40,0xb0c3e078)
HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_16_build,"builders.SceneBuilder","build",0xcf199285,"builders.SceneBuilder.build","builders/SceneBuilder.hx",16,0xb0c3e078)
namespace builders{

void SceneBuilder_obj::__construct( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_04545888ab04dc37_19_new)
HXLINE(  20)		super::__construct(node);
HXLINE(  21)		this->scene =  ::elements::scene::Scene_obj::__alloc( HX_CTX ,::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("name",4b,72,ff,48)));
HXLINE(  22)		this->initAttributes();
            	}

Dynamic SceneBuilder_obj::__CreateEmpty() { return new SceneBuilder_obj; }

void *SceneBuilder_obj::_hx_vtable = 0;

Dynamic SceneBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SceneBuilder_obj > _hx_result = new SceneBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SceneBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b784972) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b784972;
	} else {
		return inClassId==(int)0x6af4b82b;
	}
}

void SceneBuilder_obj::validateRequiredAttrs(){
            	HX_GC_STACKFRAME(&_hx_pos_04545888ab04dc37_26_validateRequiredAttrs)
HXDLIN(  26)		if (!(::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->get_node(),HX_("name",4b,72,ff,48)))) {
HXLINE(  27)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("No 'name' attribute",d0,f0,89,4b))));
            		}
            	}


void SceneBuilder_obj::initAttributes(){
            	HX_STACKFRAME(&_hx_pos_04545888ab04dc37_32_initAttributes)
HXDLIN(  32)		 ::elements::scene::Scene _hx_tmp = this->scene;
HXDLIN(  32)		::String _hx_tmp1;
HXDLIN(  32)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->get_node(),HX_("title",98,15,3b,10))) {
HXDLIN(  32)			_hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->get_node(),HX_("title",98,15,3b,10));
            		}
            		else {
HXDLIN(  32)			_hx_tmp1 = HX_("No title",99,e4,d3,50);
            		}
HXDLIN(  32)		_hx_tmp->set_title(_hx_tmp1);
            	}


 ::builders::SceneBuilder SceneBuilder_obj::withBackground( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_04545888ab04dc37_35_withBackground)
HXLINE(  36)		this->scene->setBGColor(color);
HXLINE(  37)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneBuilder_obj,withBackground,return )

 ::elements::scene::SceneView SceneBuilder_obj::apply( ::views::GuiView parentView){
            	HX_GC_STACKFRAME(&_hx_pos_04545888ab04dc37_40_apply)
HXLINE(  41)		 ::elements::scene::SceneView sceneView =  ::elements::scene::SceneView_obj::__alloc( HX_CTX ,this->scene,null());
HXLINE(  42)		parentView->add(::elements::ElementType_obj::SCENE,sceneView);
HXLINE(  43)		return sceneView;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneBuilder_obj,apply,return )

 ::builders::SceneBuilder SceneBuilder_obj::build( ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_04545888ab04dc37_16_build)
HXDLIN(  16)		return  ::builders::SceneBuilder_obj::__alloc( HX_CTX ,node);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SceneBuilder_obj,build,return )


::hx::ObjectPtr< SceneBuilder_obj > SceneBuilder_obj::__new( ::Xml node) {
	::hx::ObjectPtr< SceneBuilder_obj > __this = new SceneBuilder_obj();
	__this->__construct(node);
	return __this;
}

::hx::ObjectPtr< SceneBuilder_obj > SceneBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml node) {
	SceneBuilder_obj *__this = (SceneBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SceneBuilder_obj), true, "builders.SceneBuilder"));
	*(void **)__this = SceneBuilder_obj::_hx_vtable;
	__this->__construct(node);
	return __this;
}

SceneBuilder_obj::SceneBuilder_obj()
{
}

void SceneBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneBuilder);
	HX_MARK_MEMBER_NAME(scene,"scene");
	 ::builders::BaseBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SceneBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scene,"scene");
	 ::builders::BaseBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SceneBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
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

bool SceneBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

::hx::Val SceneBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::elements::scene::Scene >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scene",4c,d9,d1,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SceneBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::scene::Scene */ ,(int)offsetof(SceneBuilder_obj,scene),HX_("scene",4c,d9,d1,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SceneBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String SceneBuilder_obj_sMemberFields[] = {
	HX_("scene",4c,d9,d1,78),
	HX_("validateRequiredAttrs",cd,4d,21,76),
	HX_("initAttributes",07,5c,3c,bc),
	HX_("withBackground",94,11,6d,5c),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class SceneBuilder_obj::__mClass;

static ::String SceneBuilder_obj_sStaticFields[] = {
	HX_("build",2e,db,ea,ba),
	::String(null())
};

void SceneBuilder_obj::__register()
{
	SceneBuilder_obj _hx_dummy;
	SceneBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.SceneBuilder",85,6c,04,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SceneBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SceneBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SceneBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SceneBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
