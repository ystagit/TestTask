#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_00a6598df524d055_10_new,"elements.scene.SceneView","new",0x22444cca,"elements.scene.SceneView.new","elements/scene/SceneView.hx",10,0x4f8c6ba8)
namespace elements{
namespace scene{

void SceneView_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_STACKFRAME(&_hx_pos_00a6598df524d055_10_new)
HXLINE(  11)		super::__construct(model,controller);
HXLINE(  12)		::openfl::events::IEventDispatcher_obj::addEventListener(model,HX_("updateAll",98,d6,d6,82),this->updateAll_dyn(),null(),null(),null());
            	}

Dynamic SceneView_obj::__CreateEmpty() { return new SceneView_obj; }

void *SceneView_obj::_hx_vtable = 0;

Dynamic SceneView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SceneView_obj > _hx_result = new SceneView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SceneView_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x420ee900) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x420ee900;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< SceneView_obj > SceneView_obj::__new(::Dynamic model,::Dynamic controller) {
	::hx::ObjectPtr< SceneView_obj > __this = new SceneView_obj();
	__this->__construct(model,controller);
	return __this;
}

::hx::ObjectPtr< SceneView_obj > SceneView_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller) {
	SceneView_obj *__this = (SceneView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SceneView_obj), true, "elements.scene.SceneView"));
	*(void **)__this = SceneView_obj::_hx_vtable;
	__this->__construct(model,controller);
	return __this;
}

SceneView_obj::SceneView_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SceneView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SceneView_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SceneView_obj::__mClass;

void SceneView_obj::__register()
{
	SceneView_obj _hx_dummy;
	SceneView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.scene.SceneView",d8,df,1f,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SceneView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace scene
