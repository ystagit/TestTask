#ifndef INCLUDED_scenes_root_SceneType
#define INCLUDED_scenes_root_SceneType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(scenes,root,SceneType)
namespace scenes{
namespace root{


class SceneType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SceneType_obj OBJ_;

	public:
		SceneType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("scenes.root.SceneType",a1,03,3b,61); }
		::String __ToString() const { return HX_("SceneType.",68,d7,a4,6a) + _hx_tag; }

		static ::scenes::root::SceneType MAIN_SCENE;
		static inline ::scenes::root::SceneType MAIN_SCENE_dyn() { return MAIN_SCENE; }
};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_SceneType */ 
