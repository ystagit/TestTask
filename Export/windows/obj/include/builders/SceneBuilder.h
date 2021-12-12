#ifndef INCLUDED_builders_SceneBuilder
#define INCLUDED_builders_SceneBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(builders,SceneBuilder)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(scenes,root,RootSceneView)
HX_DECLARE_CLASS2(scenes,root,SceneType)
HX_DECLARE_CLASS1(views,GuiComponent)
HX_DECLARE_CLASS1(views,GuiComposite)
HX_DECLARE_CLASS1(views,GuiView)

namespace builders{


class HXCPP_CLASS_ATTRIBUTES SceneBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SceneBuilder_obj OBJ_;
		SceneBuilder_obj();

	public:
		enum { _hx_ClassId = 0x6af4b82b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="builders.SceneBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"builders.SceneBuilder"); }

		inline static ::hx::ObjectPtr< SceneBuilder_obj > __new() {
			::hx::ObjectPtr< SceneBuilder_obj > __this = new SceneBuilder_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SceneBuilder_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SceneBuilder_obj *__this = (SceneBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SceneBuilder_obj), false, "builders.SceneBuilder"));
			*(void **)__this = SceneBuilder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SceneBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SceneBuilder",4f,77,23,76); }

		static void build( ::scenes::root::RootSceneView rootSceneView, ::scenes::root::SceneType sceneType);
		static ::Dynamic build_dyn();

};

} // end namespace builders

#endif /* INCLUDED_builders_SceneBuilder */ 
