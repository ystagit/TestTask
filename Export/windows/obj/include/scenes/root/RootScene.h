#ifndef INCLUDED_scenes_root_RootScene
#define INCLUDED_scenes_root_RootScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(scenes,root,RootScene)

namespace scenes{
namespace root{


class HXCPP_CLASS_ATTRIBUTES RootScene_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef RootScene_obj OBJ_;
		RootScene_obj();

	public:
		enum { _hx_ClassId = 0x18aa0b01 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.root.RootScene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.root.RootScene"); }
		static ::hx::ObjectPtr< RootScene_obj > __new();
		static ::hx::ObjectPtr< RootScene_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RootScene_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RootScene",aa,bf,66,d3); }

};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_RootScene */ 
