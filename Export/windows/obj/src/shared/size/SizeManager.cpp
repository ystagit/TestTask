#include <hxcpp.h>

#ifndef INCLUDED_shared_size_PercentSize
#include <shared/size/PercentSize.h>
#endif
#ifndef INCLUDED_shared_size_PixelSize
#include <shared/size/PixelSize.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif
#ifndef INCLUDED_shared_size_SizeManager
#include <shared/size/SizeManager.h>
#endif
#ifndef INCLUDED_shared_size_SizeType
#include <shared/size/SizeType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_60f206af1216a655_6_getSize,"shared.size.SizeManager","getSize",0xdce59a51,"shared.size.SizeManager.getSize","shared/size/SizeManager.hx",6,0x5e89a3d6)
namespace shared{
namespace size{

void SizeManager_obj::__construct() { }

Dynamic SizeManager_obj::__CreateEmpty() { return new SizeManager_obj; }

void *SizeManager_obj::_hx_vtable = 0;

Dynamic SizeManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SizeManager_obj > _hx_result = new SizeManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SizeManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x790f6266;
}

 ::shared::size::Size SizeManager_obj::getSize( ::shared::size::SizeType sizeType){
            	HX_GC_STACKFRAME(&_hx_pos_60f206af1216a655_6_getSize)
HXDLIN(   6)		switch((int)(sizeType->_hx_getIndex())){
            			case (int)0: {
HXLINE(   8)				return  ::shared::size::PixelSize_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE(  10)				return  ::shared::size::PercentSize_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
            			break;
            		}
HXLINE(   6)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeManager_obj,getSize,return )


SizeManager_obj::SizeManager_obj()
{
}

bool SizeManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getSize") ) { outValue = getSize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SizeManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SizeManager_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SizeManager_obj::__mClass;

static ::String SizeManager_obj_sStaticFields[] = {
	HX_("getSize",77,50,d6,1e),
	::String(null())
};

void SizeManager_obj::__register()
{
	SizeManager_obj _hx_dummy;
	SizeManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.size.SizeManager",48,40,d9,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SizeManager_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SizeManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SizeManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SizeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SizeManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
} // end namespace size
