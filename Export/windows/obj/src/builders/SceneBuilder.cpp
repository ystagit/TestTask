#include <hxcpp.h>

#ifndef INCLUDED_builders_ElementBuilder
#include <builders/ElementBuilder.h>
#endif
#ifndef INCLUDED_builders_SceneBuilder
#include <builders/SceneBuilder.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
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
#ifndef INCLUDED_scenes_main_MainScene
#include <scenes/main/MainScene.h>
#endif
#ifndef INCLUDED_scenes_root_IScene
#include <scenes/root/IScene.h>
#endif
#ifndef INCLUDED_scenes_root_RootSceneView
#include <scenes/root/RootSceneView.h>
#endif
#ifndef INCLUDED_scenes_root_SceneType
#include <scenes/root/SceneType.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_04545888ab04dc37_11_build,"builders.SceneBuilder","build",0xcf199285,"builders.SceneBuilder.build","builders/SceneBuilder.hx",11,0xb0c3e078)
namespace builders{

void SceneBuilder_obj::__construct() { }

Dynamic SceneBuilder_obj::__CreateEmpty() { return new SceneBuilder_obj; }

void *SceneBuilder_obj::_hx_vtable = 0;

Dynamic SceneBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SceneBuilder_obj > _hx_result = new SceneBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SceneBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6af4b82b;
}

void SceneBuilder_obj::build( ::scenes::root::RootSceneView rootSceneView, ::scenes::root::SceneType sceneType){
            	HX_GC_STACKFRAME(&_hx_pos_04545888ab04dc37_11_build)
HXLINE(  12)		 ::elements::scene::Scene scene =  ::elements::scene::Scene_obj::__alloc( HX_CTX );
HXLINE(  13)		 ::elements::scene::SceneView sceneView;
HXLINE(  16)		{
HXLINE(  17)			sceneView =  ::scenes::main::MainScene_obj::__alloc( HX_CTX ,scene);
HXLINE(  18)			::builders::ElementBuilder_obj::addTabList(sceneView);
            		}
HXLINE(  21)		rootSceneView->add(sceneView);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneBuilder_obj,build,(void))


SceneBuilder_obj::SceneBuilder_obj()
{
}

bool SceneBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SceneBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SceneBuilder_obj_sStaticStorageInfo = 0;
#endif

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
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
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
