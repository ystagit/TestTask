#include <hxcpp.h>

#ifndef INCLUDED_elements_grid_Grid
#include <elements/grid/Grid.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_5_new,"elements.grid.Grid","new",0x6ae11109,"elements.grid.Grid.new","elements/grid/Grid.hx",5,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_14_get_rowIndex,"elements.grid.Grid","get_rowIndex",0x060ce0d8,"elements.grid.Grid.get_rowIndex","elements/grid/Grid.hx",14,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_18_set_rowIndex,"elements.grid.Grid","set_rowIndex",0x1b06044c,"elements.grid.Grid.set_rowIndex","elements/grid/Grid.hx",18,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_22_get_xs,"elements.grid.Grid","get_xs",0x4c1fcf3b,"elements.grid.Grid.get_xs","elements/grid/Grid.hx",22,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_26_set_xs,"elements.grid.Grid","set_xs",0x186823af,"elements.grid.Grid.set_xs","elements/grid/Grid.hx",26,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_30_get_ys,"elements.grid.Grid","get_ys",0x4c1fd01a,"elements.grid.Grid.get_ys","elements/grid/Grid.hx",30,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_34_set_ys,"elements.grid.Grid","set_ys",0x1868248e,"elements.grid.Grid.set_ys","elements/grid/Grid.hx",34,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_38_get_xp,"elements.grid.Grid","get_xp",0x4c1fcf38,"elements.grid.Grid.get_xp","elements/grid/Grid.hx",38,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_42_set_xp,"elements.grid.Grid","set_xp",0x186823ac,"elements.grid.Grid.set_xp","elements/grid/Grid.hx",42,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_46_get_yp,"elements.grid.Grid","get_yp",0x4c1fd017,"elements.grid.Grid.get_yp","elements/grid/Grid.hx",46,0x13849227)
HX_LOCAL_STACK_FRAME(_hx_pos_ca44b5f6148c0d92_50_set_yp,"elements.grid.Grid","set_yp",0x1868248b,"elements.grid.Grid.set_yp","elements/grid/Grid.hx",50,0x13849227)
namespace elements{
namespace grid{

void Grid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x49ad2723;
	}
}

int Grid_obj::get_rowIndex(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_14_get_rowIndex)
HXDLIN(  14)		return this->rowIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_rowIndex,return )

int Grid_obj::set_rowIndex(int rowIndex){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_18_set_rowIndex)
HXDLIN(  18)		return (this->rowIndex = rowIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_rowIndex,return )

int Grid_obj::get_xs(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_22_get_xs)
HXDLIN(  22)		return this->xs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_xs,return )

int Grid_obj::set_xs(int xs){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_26_set_xs)
HXDLIN(  26)		return (this->xs = xs);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_xs,return )

int Grid_obj::get_ys(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_30_get_ys)
HXDLIN(  30)		return this->ys;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_ys,return )

int Grid_obj::set_ys(int ys){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_34_set_ys)
HXDLIN(  34)		return (this->ys = ys);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_ys,return )

int Grid_obj::get_xp(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_38_get_xp)
HXDLIN(  38)		return this->xp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_xp,return )

int Grid_obj::set_xp(int xp){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_42_set_xp)
HXDLIN(  42)		return (this->xp = xp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_xp,return )

int Grid_obj::get_yp(){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_46_get_yp)
HXDLIN(  46)		return this->yp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_yp,return )

int Grid_obj::set_yp(int yp){
            	HX_STACKFRAME(&_hx_pos_ca44b5f6148c0d92_50_set_yp)
HXDLIN(  50)		return (this->yp = yp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_yp,return )


::hx::ObjectPtr< Grid_obj > Grid_obj::__new() {
	::hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grid_obj *__this = (Grid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), true, "elements.grid.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grid_obj::Grid_obj()
{
}

::hx::Val Grid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"xs") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_xs() : xs ); }
		if (HX_FIELD_EQ(inName,"ys") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_ys() : ys ); }
		if (HX_FIELD_EQ(inName,"xp") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_xp() : xp ); }
		if (HX_FIELD_EQ(inName,"yp") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_yp() : yp ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_xs") ) { return ::hx::Val( get_xs_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xs") ) { return ::hx::Val( set_xs_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ys") ) { return ::hx::Val( get_ys_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ys") ) { return ::hx::Val( set_ys_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_xp") ) { return ::hx::Val( get_xp_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xp") ) { return ::hx::Val( set_xp_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_yp") ) { return ::hx::Val( get_yp_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_yp") ) { return ::hx::Val( set_yp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowIndex") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_rowIndex() : rowIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rowIndex") ) { return ::hx::Val( get_rowIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rowIndex") ) { return ::hx::Val( set_rowIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grid_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"xs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xs(inValue.Cast< int >()) );xs=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ys") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ys(inValue.Cast< int >()) );ys=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xp(inValue.Cast< int >()) );xp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_yp(inValue.Cast< int >()) );yp=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rowIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rowIndex(inValue.Cast< int >()) );rowIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rowIndex",98,4a,ff,65));
	outFields->push(HX_("xs",fb,68,00,00));
	outFields->push(HX_("ys",da,69,00,00));
	outFields->push(HX_("xp",f8,68,00,00));
	outFields->push(HX_("yp",d7,69,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grid_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Grid_obj,rowIndex),HX_("rowIndex",98,4a,ff,65)},
	{::hx::fsInt,(int)offsetof(Grid_obj,xs),HX_("xs",fb,68,00,00)},
	{::hx::fsInt,(int)offsetof(Grid_obj,ys),HX_("ys",da,69,00,00)},
	{::hx::fsInt,(int)offsetof(Grid_obj,xp),HX_("xp",f8,68,00,00)},
	{::hx::fsInt,(int)offsetof(Grid_obj,yp),HX_("yp",d7,69,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grid_obj_sStaticStorageInfo = 0;
#endif

static ::String Grid_obj_sMemberFields[] = {
	HX_("rowIndex",98,4a,ff,65),
	HX_("xs",fb,68,00,00),
	HX_("ys",da,69,00,00),
	HX_("xp",f8,68,00,00),
	HX_("yp",d7,69,00,00),
	HX_("get_rowIndex",a1,fe,18,1b),
	HX_("set_rowIndex",15,22,12,30),
	HX_("get_xs",44,00,30,a3),
	HX_("set_xs",b8,54,78,6f),
	HX_("get_ys",23,01,30,a3),
	HX_("set_ys",97,55,78,6f),
	HX_("get_xp",41,00,30,a3),
	HX_("set_xp",b5,54,78,6f),
	HX_("get_yp",20,01,30,a3),
	HX_("set_yp",94,55,78,6f),
	::String(null()) };

::hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	Grid_obj _hx_dummy;
	Grid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.grid.Grid",97,d8,d7,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace grid
