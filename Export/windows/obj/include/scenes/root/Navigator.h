#ifndef INCLUDED_scenes_root_Navigator
#define INCLUDED_scenes_root_Navigator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(scenes,root,NavEvent)
HX_DECLARE_CLASS2(scenes,root,Navigator)

namespace scenes{
namespace root{


class HXCPP_CLASS_ATTRIBUTES Navigator_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Navigator_obj OBJ_;
		Navigator_obj();

	public:
		enum { _hx_ClassId = 0x5ddfcb2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.root.Navigator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.root.Navigator"); }
		static ::hx::ObjectPtr< Navigator_obj > __new();
		static ::hx::ObjectPtr< Navigator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Navigator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Navigator",b7,b4,c4,a6); }

		static void __boot();
		static  ::scenes::root::Navigator instance;
		static ::Array< ::String > breadCrumbs;
		static ::String activeSceneType;
		static void addNavEventListener(::String type, ::Dynamic listener);
		static ::Dynamic addNavEventListener_dyn();

		static void open(::String sceneType);
		static ::Dynamic open_dyn();

		static void close();
		static ::Dynamic close_dyn();

		void navTo(::String sceneType);
		::Dynamic navTo_dyn();

		void back();
		::Dynamic back_dyn();

};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_Navigator */ 
