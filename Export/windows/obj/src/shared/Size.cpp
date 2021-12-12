#include <hxcpp.h>

#ifndef INCLUDED_shared_Size
#include <shared/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f219fda5581a3a2_12_new,"shared.Size","new",0x3c3ff53c,"shared.Size.new","shared/Size.hx",12,0xd34bf7d3)
HX_LOCAL_STACK_FRAME(_hx_pos_5f219fda5581a3a2_18_get_width,"shared.Size","get_width",0xc41d4439,"shared.Size.get_width","shared/Size.hx",18,0xd34bf7d3)
HX_LOCAL_STACK_FRAME(_hx_pos_5f219fda5581a3a2_22_set_width,"shared.Size","set_width",0xa76e3045,"shared.Size.set_width","shared/Size.hx",22,0xd34bf7d3)
HX_LOCAL_STACK_FRAME(_hx_pos_5f219fda5581a3a2_26_get_height,"shared.Size","get_height",0x8bcde654,"shared.Size.get_height","shared/Size.hx",26,0xd34bf7d3)
HX_LOCAL_STACK_FRAME(_hx_pos_5f219fda5581a3a2_30_set_height,"shared.Size","set_height",0x8f4b84c8,"shared.Size.set_height","shared/Size.hx",30,0xd34bf7d3)
namespace shared{

void Size_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_12_new)
HXLINE(  13)		this->set_width(width);
HXLINE(  14)		this->set_height(height);
            	}

Dynamic Size_obj::__CreateEmpty() { return new Size_obj; }

void *Size_obj::_hx_vtable = 0;

Dynamic Size_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Size_obj > _hx_result = new Size_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Size_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x345a1ac6;
}

Float Size_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_18_get_width)
HXDLIN(  18)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_width,return )

Float Size_obj::set_width(Float width){
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_22_set_width)
HXDLIN(  22)		return (this->width = width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_width,return )

Float Size_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_26_get_height)
HXDLIN(  26)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_height,return )

Float Size_obj::set_height(Float height){
            	HX_STACKFRAME(&_hx_pos_5f219fda5581a3a2_30_set_height)
HXDLIN(  30)		return (this->height = height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_height,return )


Size_obj::Size_obj()
{
}

::hx::Val Size_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Size_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Size_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Size_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Size_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Size_obj_sStaticStorageInfo = 0;
#endif

static ::String Size_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	::String(null()) };

::hx::Class Size_obj::__mClass;

void Size_obj::__register()
{
	Size_obj _hx_dummy;
	Size_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.Size",4a,e7,5d,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Size_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Size_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Size_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Size_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
