#ifndef INCLUDED_elements_tabs_Tabs
#define INCLUDED_elements_tabs_Tabs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,tabs,Tabs)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(shared,size,SizeType)

namespace elements{
namespace tabs{


class HXCPP_CLASS_ATTRIBUTES Tabs_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Tabs_obj OBJ_;
		Tabs_obj();

	public:
		enum { _hx_ClassId = 0x072f5ff7 };

		void __construct( ::shared::size::SizeType sizeType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.tabs.Tabs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.tabs.Tabs"); }
		static ::hx::ObjectPtr< Tabs_obj > __new( ::shared::size::SizeType sizeType);
		static ::hx::ObjectPtr< Tabs_obj > __alloc(::hx::Ctx *_hx_ctx, ::shared::size::SizeType sizeType);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tabs_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tabs",9e,dc,cf,37); }

};

} // end namespace elements
} // end namespace tabs

#endif /* INCLUDED_elements_tabs_Tabs */ 
