#ifndef INCLUDED_controllers_BaseController
#define INCLUDED_controllers_BaseController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
HX_DECLARE_CLASS1(controllers,BaseController)
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(models,ModelEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace controllers{


class HXCPP_CLASS_ATTRIBUTES BaseController_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseController_obj OBJ_;
		BaseController_obj();

	public:
		enum { _hx_ClassId = 0x0e05ce84 };

		void __construct( ::Dynamic model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="controllers.BaseController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"controllers.BaseController"); }
		static ::hx::ObjectPtr< BaseController_obj > __new( ::Dynamic model);
		static ::hx::ObjectPtr< BaseController_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseController",2d,38,cd,fa); }

		 ::Dynamic model;
		void onUpdate( ::models::ModelEvent e);
		::Dynamic onUpdate_dyn();

		virtual void onShow( ::models::ModelEvent e);
		::Dynamic onShow_dyn();

		void onHide( ::openfl::events::Event e);
		::Dynamic onHide_dyn();

		void onHover( ::openfl::events::MouseEvent e);
		::Dynamic onHover_dyn();

		void onResize(int w,int h);
		::Dynamic onResize_dyn();

		void onSyncResize();
		::Dynamic onSyncResize_dyn();

};

} // end namespace controllers

#endif /* INCLUDED_controllers_BaseController */ 
