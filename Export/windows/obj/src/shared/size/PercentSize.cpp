#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_shared_size_PercentSize
#include <shared/size/PercentSize.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82682fa4d8cdad55_3_new,"shared.size.PercentSize","new",0xcbe004b4,"shared.size.PercentSize.new","shared/size/PercentSize.hx",3,0x9990519c)
HX_LOCAL_STACK_FRAME(_hx_pos_82682fa4d8cdad55_8_setMaxSize,"shared.size.PercentSize","setMaxSize",0x2112dc2f,"shared.size.PercentSize.setMaxSize","shared/size/PercentSize.hx",8,0x9990519c)
HX_LOCAL_STACK_FRAME(_hx_pos_82682fa4d8cdad55_15_setSize,"shared.size.PercentSize","setSize",0xc736cfd7,"shared.size.PercentSize.setSize","shared/size/PercentSize.hx",15,0x9990519c)
HX_LOCAL_STACK_FRAME(_hx_pos_82682fa4d8cdad55_22_clacSize,"shared.size.PercentSize","clacSize",0xa7b81158,"shared.size.PercentSize.clacSize","shared/size/PercentSize.hx",22,0x9990519c)
namespace shared{
namespace size{

void PercentSize_obj::__construct( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight){
            	HX_STACKFRAME(&_hx_pos_82682fa4d8cdad55_3_new)
HXLINE(   6)		this->heightInPer = ((Float)100);
HXLINE(   5)		this->widthInPer = ((Float)100);
HXLINE(   3)		super::__construct(width,height,maxWidth,maxHeight);
            	}

Dynamic PercentSize_obj::__CreateEmpty() { return new PercentSize_obj; }

void *PercentSize_obj::_hx_vtable = 0;

Dynamic PercentSize_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PercentSize_obj > _hx_result = new PercentSize_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PercentSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21efcec7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21efcec7;
	} else {
		return inClassId==(int)0x6f28fce0;
	}
}

void PercentSize_obj::setMaxSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_82682fa4d8cdad55_8_setMaxSize)
HXLINE(   9)		this->maxWidth = w;
HXLINE(  10)		this->maxHeight = h;
HXLINE(  11)		this->clacSize();
            	}


void PercentSize_obj::setSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_82682fa4d8cdad55_15_setSize)
HXDLIN(  15)		bool _hx_tmp;
HXDLIN(  15)		bool _hx_tmp1;
HXDLIN(  15)		if ((w >= 0)) {
HXDLIN(  15)			_hx_tmp1 = (w <= 100);
            		}
            		else {
HXDLIN(  15)			_hx_tmp1 = false;
            		}
HXDLIN(  15)		if (!(_hx_tmp1)) {
HXDLIN(  15)			if ((h >= 0)) {
HXDLIN(  15)				_hx_tmp = (h <= 100);
            			}
            			else {
HXDLIN(  15)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN(  15)			_hx_tmp = true;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  16)			this->widthInPer = w;
HXLINE(  17)			this->heightInPer = h;
HXLINE(  18)			this->clacSize();
            		}
            	}


void PercentSize_obj::clacSize(){
            	HX_STACKFRAME(&_hx_pos_82682fa4d8cdad55_22_clacSize)
HXLINE(  23)		Float _hx_tmp = this->get_maxWidth();
HXDLIN(  23)		this->width = ( (Float)(::Math_obj::round(((_hx_tmp * this->widthInPer) * ((Float)0.01)))) );
HXLINE(  24)		Float _hx_tmp1 = this->get_maxHeight();
HXDLIN(  24)		this->height = ( (Float)(::Math_obj::round(((_hx_tmp1 * this->heightInPer) * ((Float)0.01)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PercentSize_obj,clacSize,(void))


::hx::ObjectPtr< PercentSize_obj > PercentSize_obj::__new( ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight) {
	::hx::ObjectPtr< PercentSize_obj > __this = new PercentSize_obj();
	__this->__construct(width,height,maxWidth,maxHeight);
	return __this;
}

::hx::ObjectPtr< PercentSize_obj > PercentSize_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic width, ::Dynamic height, ::Dynamic maxWidth, ::Dynamic maxHeight) {
	PercentSize_obj *__this = (PercentSize_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PercentSize_obj), false, "shared.size.PercentSize"));
	*(void **)__this = PercentSize_obj::_hx_vtable;
	__this->__construct(width,height,maxWidth,maxHeight);
	return __this;
}

PercentSize_obj::PercentSize_obj()
{
}

::hx::Val PercentSize_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clacSize") ) { return ::hx::Val( clacSize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"widthInPer") ) { return ::hx::Val( widthInPer ); }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"heightInPer") ) { return ::hx::Val( heightInPer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PercentSize_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"widthInPer") ) { widthInPer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"heightInPer") ) { heightInPer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PercentSize_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("widthInPer",12,92,60,fd));
	outFields->push(HX_("heightInPer",91,d0,5d,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PercentSize_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PercentSize_obj,widthInPer),HX_("widthInPer",12,92,60,fd)},
	{::hx::fsFloat,(int)offsetof(PercentSize_obj,heightInPer),HX_("heightInPer",91,d0,5d,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PercentSize_obj_sStaticStorageInfo = 0;
#endif

static ::String PercentSize_obj_sMemberFields[] = {
	HX_("widthInPer",12,92,60,fd),
	HX_("heightInPer",91,d0,5d,57),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setSize",83,e1,d7,11),
	HX_("clacSize",2c,76,06,aa),
	::String(null()) };

::hx::Class PercentSize_obj::__mClass;

void PercentSize_obj::__register()
{
	PercentSize_obj _hx_dummy;
	PercentSize_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.size.PercentSize",c2,da,f2,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PercentSize_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PercentSize_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PercentSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PercentSize_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
} // end namespace size
