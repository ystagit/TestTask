#ifndef INCLUDED_elements_snackbar_Snackbar
#define INCLUDED_elements_snackbar_Snackbar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,snackbar,Snackbar)
HX_DECLARE_CLASS2(elements,text,Text)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace snackbar{


class HXCPP_CLASS_ATTRIBUTES Snackbar_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Snackbar_obj OBJ_;
		Snackbar_obj();

	public:
		enum { _hx_ClassId = 0x465cf661 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.snackbar.Snackbar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.snackbar.Snackbar"); }
		static ::hx::ObjectPtr< Snackbar_obj > __new();
		static ::hx::ObjectPtr< Snackbar_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Snackbar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Snackbar",25,fb,e1,79); }

		static void __boot();
		static ::String ERROR;
		static ::String WARNING;
		static ::String INFO;
		static ::String SUCCESS;
		static ::String DEFAULT;
		 ::elements::text::Text message;
		int time;
		int startTime;
		 ::haxe::Timer timer;
		void setSnackbarType(::String type);
		::Dynamic setSnackbarType_dyn();

		void show();

		 ::elements::text::Text get_message();
		::Dynamic get_message_dyn();

		void setMessage(::String message);
		::Dynamic setMessage_dyn();

		int get_time();
		::Dynamic get_time_dyn();

		int set_time(int time);
		::Dynamic set_time_dyn();

		void run();
		::Dynamic run_dyn();

		void stop();
		::Dynamic stop_dyn();

};

} // end namespace elements
} // end namespace snackbar

#endif /* INCLUDED_elements_snackbar_Snackbar */ 
