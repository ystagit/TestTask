#ifndef INCLUDED_models_ModelEvent
#define INCLUDED_models_ModelEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace models{


class HXCPP_CLASS_ATTRIBUTES ModelEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ModelEvent_obj OBJ_;
		ModelEvent_obj();

	public:
		enum { _hx_ClassId = 0x5cb5a0fb };

		void __construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="models.ModelEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"models.ModelEvent"); }
		static ::hx::ObjectPtr< ModelEvent_obj > __new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< ModelEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModelEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModelEvent",d1,33,3c,44); }

		static void __boot();
		static ::String UPDATE_ALL;
		static ::String DRAW;
		static ::String SYNC_RESIZE;
		 ::haxe::ds::StringMap data;
		 ::haxe::ds::StringMap get_data();
		::Dynamic get_data_dyn();

		virtual  ::openfl::events::Event clone();

};

} // end namespace models

#endif /* INCLUDED_models_ModelEvent */ 
