#ifndef INCLUDED_controllers_MouseController
#define INCLUDED_controllers_MouseController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
HX_DECLARE_CLASS1(controllers,IController)
HX_DECLARE_CLASS1(controllers,IMouseHandler)
HX_DECLARE_CLASS1(controllers,MouseController)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)

namespace controllers{


class HXCPP_CLASS_ATTRIBUTES MouseController_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MouseController_obj OBJ_;
		MouseController_obj();

	public:
		enum { _hx_ClassId = 0x3448b0ca };

		void __construct( ::models::Model model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="controllers.MouseController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"controllers.MouseController"); }
		static ::hx::ObjectPtr< MouseController_obj > __new( ::models::Model model);
		static ::hx::ObjectPtr< MouseController_obj > __alloc(::hx::Ctx *_hx_ctx, ::models::Model model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("MouseController",01,bb,fd,75); }

		 ::models::Model model;
		void onClick();
		::Dynamic onClick_dyn();

};

} // end namespace controllers

#endif /* INCLUDED_controllers_MouseController */ 
