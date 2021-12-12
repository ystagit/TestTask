#ifndef INCLUDED_elements_grid_Grid
#define INCLUDED_elements_grid_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
HX_DECLARE_CLASS2(elements,grid,Grid)
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace elements{
namespace grid{


class HXCPP_CLASS_ATTRIBUTES Grid_obj : public  ::models::Model_obj
{
	public:
		typedef  ::models::Model_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();

	public:
		enum { _hx_ClassId = 0x49ad2723 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="elements.grid.Grid")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"elements.grid.Grid"); }
		static ::hx::ObjectPtr< Grid_obj > __new();
		static ::hx::ObjectPtr< Grid_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grid",e6,02,45,2f); }

		int rowIndex;
		int xs;
		int ys;
		int xp;
		int yp;
		int get_rowIndex();
		::Dynamic get_rowIndex_dyn();

		int set_rowIndex(int rowIndex);
		::Dynamic set_rowIndex_dyn();

		int get_xs();
		::Dynamic get_xs_dyn();

		int set_xs(int xs);
		::Dynamic set_xs_dyn();

		int get_ys();
		::Dynamic get_ys_dyn();

		int set_ys(int ys);
		::Dynamic set_ys_dyn();

		int get_xp();
		::Dynamic get_xp_dyn();

		int set_xp(int xp);
		::Dynamic set_xp_dyn();

		int get_yp();
		::Dynamic get_yp_dyn();

		int set_yp(int yp);
		::Dynamic set_yp_dyn();

};

} // end namespace elements
} // end namespace grid

#endif /* INCLUDED_elements_grid_Grid */ 
