#include <hxcpp.h>

#ifndef INCLUDED_scenes_root_SceneType
#include <scenes/root/SceneType.h>
#endif
namespace scenes{
namespace root{

::scenes::root::SceneType SceneType_obj::MAIN_SCENE;

bool SceneType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MAIN_SCENE",66,c9,45,53)) { outValue = SceneType_obj::MAIN_SCENE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SceneType_obj)

int SceneType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MAIN_SCENE",66,c9,45,53)) return 0;
	return super::__FindIndex(inName);
}

int SceneType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MAIN_SCENE",66,c9,45,53)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SceneType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MAIN_SCENE",66,c9,45,53)) return MAIN_SCENE;
	return super::__Field(inName,inCallProp);
}

static ::String SceneType_obj_sStaticFields[] = {
	HX_("MAIN_SCENE",66,c9,45,53),
	::String(null())
};

::hx::Class SceneType_obj::__mClass;

Dynamic __Create_SceneType_obj() { return new SceneType_obj; }

void SceneType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("scenes.root.SceneType",a1,03,3b,61), ::hx::TCanCast< SceneType_obj >,SceneType_obj_sStaticFields,0,
	&__Create_SceneType_obj, &__Create,
	&super::__SGetClass(), &CreateSceneType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SceneType_obj::__GetStatic;
}

void SceneType_obj::__boot()
{
MAIN_SCENE = ::hx::CreateConstEnum< SceneType_obj >(HX_("MAIN_SCENE",66,c9,45,53),0);
}


} // end namespace scenes
} // end namespace root
