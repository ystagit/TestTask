#ifndef INCLUDED_scenes_root_NavEvent
#define INCLUDED_scenes_root_NavEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(scenes,root,NavEvent)

namespace scenes{
namespace root{


class HXCPP_CLASS_ATTRIBUTES NavEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NavEvent_obj OBJ_;
		NavEvent_obj();

	public:
		enum { _hx_ClassId = 0x16033ce0 };

		void __construct(::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scenes.root.NavEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"scenes.root.NavEvent"); }
		static ::hx::ObjectPtr< NavEvent_obj > __new(::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< NavEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::String sceneName,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NavEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NavEvent",57,90,0f,66); }

		static void __boot();
		static ::String UPDATE_SCENE;
		::String sceneName;
		::String getSceneName();
		::Dynamic getSceneName_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace scenes
} // end namespace root

#endif /* INCLUDED_scenes_root_NavEvent */ 
