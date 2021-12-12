#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_container_Container
#include <elements/container/Container.h>
#endif
#ifndef INCLUDED_elements_container_ContainerView
#include <elements/container/ContainerView.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
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
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f11055ea7516a2d_14_new,"scenes.main.MainScene","new",0xc876dc17,"scenes.main.MainScene.new","scenes/main/MainScene.hx",14,0xcbd6df99)
HX_LOCAL_STACK_FRAME(_hx_pos_7f11055ea7516a2d_17_createContainer,"scenes.main.MainScene","createContainer",0x730970dc,"scenes.main.MainScene.createContainer","scenes/main/MainScene.hx",17,0xcbd6df99)
namespace scenes{
namespace main{

void MainScene_obj::__construct( ::elements::scene::Scene scene){
            	HX_STACKFRAME(&_hx_pos_7f11055ea7516a2d_14_new)
HXDLIN(  14)		super::__construct(scene,null());
            	}

Dynamic MainScene_obj::__CreateEmpty() { return new MainScene_obj; }

void *MainScene_obj::_hx_vtable = 0;

Dynamic MainScene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainScene_obj > _hx_result = new MainScene_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainScene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x1b9649d0) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x1b9649d0;
			}
		} else {
			return inClassId==(int)0x1ee7691a || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x420ee900) {
			if (inClassId<=(int)0x31b17232) {
				return inClassId==(int)0x2fff67ef || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x420ee900;
			}
		} else {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		}
	}
}

void MainScene_obj::createContainer(){
            	HX_GC_STACKFRAME(&_hx_pos_7f11055ea7516a2d_17_createContainer)
HXLINE(  18)		 ::elements::container::Container container =  ::elements::container::Container_obj::__alloc( HX_CTX );
HXLINE(  19)		 ::elements::container::ContainerView containerView =  ::elements::container::ContainerView_obj::__alloc( HX_CTX ,container);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainScene_obj,createContainer,(void))


::hx::ObjectPtr< MainScene_obj > MainScene_obj::__new( ::elements::scene::Scene scene) {
	::hx::ObjectPtr< MainScene_obj > __this = new MainScene_obj();
	__this->__construct(scene);
	return __this;
}

::hx::ObjectPtr< MainScene_obj > MainScene_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::scene::Scene scene) {
	MainScene_obj *__this = (MainScene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainScene_obj), true, "scenes.main.MainScene"));
	*(void **)__this = MainScene_obj::_hx_vtable;
	__this->__construct(scene);
	return __this;
}

MainScene_obj::MainScene_obj()
{
}

::hx::Val MainScene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createContainer") ) { return ::hx::Val( createContainer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MainScene_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MainScene_obj_sStaticStorageInfo = 0;
#endif

static ::String MainScene_obj_sMemberFields[] = {
	HX_("createContainer",a5,2e,68,60),
	::String(null()) };

::hx::Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	MainScene_obj _hx_dummy;
	MainScene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.main.MainScene",a5,84,8b,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainScene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainScene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainScene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainScene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scenes
} // end namespace main
