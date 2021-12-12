#include <hxcpp.h>

#ifndef INCLUDED_shared_Point
#include <shared/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_7_new,"shared.Point","new",0x54202619,"shared.Point.new","shared/Point.hx",7,0xedb94878)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_13_get_x,"shared.Point","get_x",0xb1389b48,"shared.Point.get_x","shared/Point.hx",13,0xedb94878)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_17_set_x,"shared.Point","set_x",0x9a079154,"shared.Point.set_x","shared/Point.hx",17,0xedb94878)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_21_get_y,"shared.Point","get_y",0xb1389b49,"shared.Point.get_y","shared/Point.hx",21,0xedb94878)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9620d917ca5fd0_25_set_y,"shared.Point","set_y",0x9a079155,"shared.Point.set_y","shared/Point.hx",25,0xedb94878)
namespace shared{

void Point_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_7_new)
HXLINE(   8)		this->set_x(x);
HXLINE(   9)		this->set_y(y);
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50a42eff;
}

Float Point_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_13_get_x)
HXDLIN(  13)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_x,return )

Float Point_obj::set_x(Float x){
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_17_set_x)
HXDLIN(  17)		return (this->x = x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,set_x,return )

Float Point_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_21_get_y)
HXDLIN(  21)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_y,return )

Float Point_obj::set_y(Float y){
            	HX_STACKFRAME(&_hx_pos_2a9620d917ca5fd0_25_set_y)
HXDLIN(  25)		return (this->y = y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,set_y,return )


Point_obj::Point_obj()
{
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_x() : x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_y() : y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Point_obj_sStaticStorageInfo = 0;
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

::hx::Class Point_obj::__mClass;

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.Point",a7,25,83,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
