#ifndef INCLUDED_elements_container_Container
#define INCLUDED_elements_container_Container

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,container,Container)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace container{


class HXCPP_CLASS_ATTRIBUTES Container_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Container_obj OBJ_;
		Container_obj();

	public:
		enum { _hx_ClassId = 0x54b037b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.container.Container")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.container.Container"); }
		static ::hx::ObjectPtr< Container_obj > __new();
		static ::hx::ObjectPtr< Container_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Container_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Container",21,55,46,61); }

};

} // end namespace elements
} // end namespace container

#endif /* INCLUDED_elements_container_Container */ 
