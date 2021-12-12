#ifndef INCLUDED_elements_column_Column
#define INCLUDED_elements_column_Column

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,column,Column)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace column{


class HXCPP_CLASS_ATTRIBUTES Column_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Column_obj OBJ_;
		Column_obj();

	public:
		enum { _hx_ClassId = 0x220bd1a7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.column.Column")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.column.Column"); }
		static ::hx::ObjectPtr< Column_obj > __new();
		static ::hx::ObjectPtr< Column_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Column_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Column",f6,c2,1f,fb); }

};

} // end namespace elements
} // end namespace column

#endif /* INCLUDED_elements_column_Column */ 
