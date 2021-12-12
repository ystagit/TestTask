#ifndef INCLUDED_elements_row_Row
#define INCLUDED_elements_row_Row

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,row,Row)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace row{


class HXCPP_CLASS_ATTRIBUTES Row_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Row_obj OBJ_;
		Row_obj();

	public:
		enum { _hx_ClassId = 0x4f117557 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.row.Row")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.row.Row"); }
		static ::hx::ObjectPtr< Row_obj > __new();
		static ::hx::ObjectPtr< Row_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Row_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Row",fa,99,3e,00); }

};

} // end namespace elements
} // end namespace row

#endif /* INCLUDED_elements_row_Row */ 
