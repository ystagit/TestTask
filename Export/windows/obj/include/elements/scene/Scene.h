#ifndef INCLUDED_elements_scene_Scene
#define INCLUDED_elements_scene_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,scene,Scene)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Scene_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();

	public:
		enum { _hx_ClassId = 0x3c47e497 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.scene.Scene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.scene.Scene"); }
		static ::hx::ObjectPtr< Scene_obj > __new(::String name);
		static ::hx::ObjectPtr< Scene_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scene",2c,49,ff,0b); }

		::String name;
		::String get_name();
		::Dynamic get_name_dyn();

};

} // end namespace elements
} // end namespace scene

#endif /* INCLUDED_elements_scene_Scene */ 
