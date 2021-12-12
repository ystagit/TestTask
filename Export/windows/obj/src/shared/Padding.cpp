#include <hxcpp.h>

#ifndef INCLUDED_shared_Padding
#include <shared/Padding.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_10_new,"shared.Padding","new",0x7b8243da,"shared.Padding.new","shared/Padding.hx",10,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_18_get_top,"shared.Padding","get_top",0x2493e7a6,"shared.Padding.get_top","shared/Padding.hx",18,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_22_set_top,"shared.Padding","set_top",0x179578b2,"shared.Padding.set_top","shared/Padding.hx",22,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_26_get_right,"shared.Padding","get_right",0x344eb32d,"shared.Padding.get_right","shared/Padding.hx",26,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_30_set_right,"shared.Padding","set_right",0x179f9f39,"shared.Padding.set_right","shared/Padding.hx",30,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_34_get_bottom,"shared.Padding","get_bottom",0xa7e0a67a,"shared.Padding.get_bottom","shared/Padding.hx",34,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_38_set_bottom,"shared.Padding","set_bottom",0xab5e44ee,"shared.Padding.set_bottom","shared/Padding.hx",38,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_42_get_left,"shared.Padding","get_left",0xd78575d6,"shared.Padding.get_left","shared/Padding.hx",42,0xf0c6e017)
HX_LOCAL_STACK_FRAME(_hx_pos_8c18bfa808cdedcc_46_set_left,"shared.Padding","set_left",0x85e2cf4a,"shared.Padding.set_left","shared/Padding.hx",46,0xf0c6e017)
namespace shared{

void Padding_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_10_new)
HXLINE(  11)		this->set_top(( (Float)(0) ));
HXLINE(  12)		this->set_right(( (Float)(0) ));
HXLINE(  13)		this->set_bottom(( (Float)(0) ));
HXLINE(  14)		this->set_left(( (Float)(0) ));
            	}

Dynamic Padding_obj::__CreateEmpty() { return new Padding_obj; }

void *Padding_obj::_hx_vtable = 0;

Dynamic Padding_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Padding_obj > _hx_result = new Padding_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Padding_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06968008;
}

Float Padding_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_18_get_top)
HXDLIN(  18)		return this->top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_top,return )

Float Padding_obj::set_top(Float top){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_22_set_top)
HXDLIN(  22)		return (this->top = top);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_top,return )

Float Padding_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_26_get_right)
HXDLIN(  26)		return this->right;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_right,return )

Float Padding_obj::set_right(Float right){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_30_set_right)
HXDLIN(  30)		return (this->right = right);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_right,return )

Float Padding_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_34_get_bottom)
HXDLIN(  34)		return this->bottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_bottom,return )

Float Padding_obj::set_bottom(Float bottom){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_38_set_bottom)
HXDLIN(  38)		return (this->bottom = bottom);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_bottom,return )

Float Padding_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_42_get_left)
HXDLIN(  42)		return this->left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Padding_obj,get_left,return )

Float Padding_obj::set_left(Float left){
            	HX_STACKFRAME(&_hx_pos_8c18bfa808cdedcc_46_set_left)
HXDLIN(  46)		return (this->left = left);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Padding_obj,set_left,return )


Padding_obj::Padding_obj()
{
}

::hx::Val Padding_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_top() : top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_left() : left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_right() : right ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottom() : bottom ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return ::hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return ::hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return ::hx::Val( set_bottom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Padding_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) );top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) );left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_right(inValue.Cast< Float >()) );right=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottom(inValue.Cast< Float >()) );bottom=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Padding_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("left",07,08,b0,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Padding_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Padding_obj,top),HX_("top",95,66,58,00)},
	{::hx::fsFloat,(int)offsetof(Padding_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsFloat,(int)offsetof(Padding_obj,bottom),HX_("bottom",eb,e6,78,65)},
	{::hx::fsFloat,(int)offsetof(Padding_obj,left),HX_("left",07,08,b0,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Padding_obj_sStaticStorageInfo = 0;
#endif

static ::String Padding_obj_sMemberFields[] = {
	HX_("top",95,66,58,00),
	HX_("right",dc,0b,64,e9),
	HX_("bottom",eb,e6,78,65),
	HX_("left",07,08,b0,47),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	::String(null()) };

::hx::Class Padding_obj::__mClass;

void Padding_obj::__register()
{
	Padding_obj _hx_dummy;
	Padding_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.Padding",e8,0e,31,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Padding_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Padding_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Padding_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Padding_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
