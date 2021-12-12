#include <hxcpp.h>

#ifndef INCLUDED_shared_size_PixelSize
#include <shared/size/PixelSize.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4070f3f34d5df4b_3_new,"shared.size.PixelSize","new",0xdc312a75,"shared.size.PixelSize.new","shared/size/PixelSize.hx",3,0x333f06fb)
HX_LOCAL_STACK_FRAME(_hx_pos_f4070f3f34d5df4b_5_setMaxSize,"shared.size.PixelSize","setMaxSize",0x9668608e,"shared.size.PixelSize.setMaxSize","shared/size/PixelSize.hx",5,0x333f06fb)
HX_LOCAL_STACK_FRAME(_hx_pos_f4070f3f34d5df4b_10_setSize,"shared.size.PixelSize","setSize",0xc7d46a18,"shared.size.PixelSize.setSize","shared/size/PixelSize.hx",10,0x333f06fb)
namespace shared{
namespace size{

void PixelSize_obj::__construct( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight){
            	HX_STACKFRAME(&_hx_pos_f4070f3f34d5df4b_3_new)
HXDLIN(   3)		super::__construct(width,height,maxWidth,maxHeight);
            	}

Dynamic PixelSize_obj::__CreateEmpty() { return new PixelSize_obj; }

void *PixelSize_obj::_hx_vtable = 0;

Dynamic PixelSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelSize_obj > _hx_result = new PixelSize_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PixelSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21efcec7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21efcec7;
	} else {
		return inClassId==(int)0x2b7e8aa1;
	}
}

void PixelSize_obj::setMaxSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_f4070f3f34d5df4b_5_setMaxSize)
HXLINE(   6)		this->maxWidth = w;
HXLINE(   7)		this->maxHeight = h;
            	}


void PixelSize_obj::setSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_f4070f3f34d5df4b_10_setSize)
HXLINE(  11)		this->width = w;
HXLINE(  12)		this->height = h;
            	}



PixelSize_obj::PixelSize_obj()
{
}

::hx::Val PixelSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PixelSize_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PixelSize_obj_sStaticStorageInfo = 0;
#endif

static ::String PixelSize_obj_sMemberFields[] = {
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setSize",83,e1,d7,11),
	::String(null()) };

::hx::Class PixelSize_obj::__mClass;

void PixelSize_obj::__register()
{
	PixelSize_obj _hx_dummy;
	PixelSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.size.PixelSize",03,cc,6b,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PixelSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PixelSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
} // end namespace size
