#include <hxcpp.h>

#ifndef INCLUDED_shared_BoundingBox
#include <shared/BoundingBox.h>
#endif
#ifndef INCLUDED_shared_Point
#include <shared/Point.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_538c136b9d62430d_13_new,"shared.BoundingBox","new",0x3cc0e990,"shared.BoundingBox.new","shared/BoundingBox.hx",13,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_17_get_minX,"shared.BoundingBox","get_minX",0x7db0a2df,"shared.BoundingBox.get_minX","shared/BoundingBox.hx",17,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_21_set_minX,"shared.BoundingBox","set_minX",0x2c0dfc53,"shared.BoundingBox.set_minX","shared/BoundingBox.hx",21,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_25_get_maxX,"shared.BoundingBox","get_maxX",0x7daa998d,"shared.BoundingBox.get_maxX","shared/BoundingBox.hx",25,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_29_set_maxX,"shared.BoundingBox","set_maxX",0x2c07f301,"shared.BoundingBox.set_maxX","shared/BoundingBox.hx",29,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_33_get_minY,"shared.BoundingBox","get_minY",0x7db0a2e0,"shared.BoundingBox.get_minY","shared/BoundingBox.hx",33,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_37_set_minY,"shared.BoundingBox","set_minY",0x2c0dfc54,"shared.BoundingBox.set_minY","shared/BoundingBox.hx",37,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_41_get_maxY,"shared.BoundingBox","get_maxY",0x7daa998e,"shared.BoundingBox.get_maxY","shared/BoundingBox.hx",41,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_45_set_maxY,"shared.BoundingBox","set_maxY",0x2c07f302,"shared.BoundingBox.set_maxY","shared/BoundingBox.hx",45,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_48_setBound,"shared.BoundingBox","setBound",0x7acab20c,"shared.BoundingBox.setBound","shared/BoundingBox.hx",48,0x3f2817a1)
HX_LOCAL_STACK_FRAME(_hx_pos_538c136b9d62430d_57_isContainsCursor,"shared.BoundingBox","isContainsCursor",0xbe475caf,"shared.BoundingBox.isContainsCursor","shared/BoundingBox.hx",57,0x3f2817a1)
namespace shared{

void BoundingBox_obj::__construct( ::shared::Position pos, ::shared::size::Size size){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_13_new)
HXDLIN(  13)		this->setBound(pos,size);
            	}

Dynamic BoundingBox_obj::__CreateEmpty() { return new BoundingBox_obj; }

void *BoundingBox_obj::_hx_vtable = 0;

Dynamic BoundingBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BoundingBox_obj > _hx_result = new BoundingBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BoundingBox_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72c095a2;
}

Float BoundingBox_obj::get_minX(){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_17_get_minX)
HXDLIN(  17)		return this->minX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,get_minX,return )

Float BoundingBox_obj::set_minX(Float minX){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_21_set_minX)
HXDLIN(  21)		return (this->minX = minX);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_minX,return )

Float BoundingBox_obj::get_maxX(){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_25_get_maxX)
HXDLIN(  25)		return this->maxX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,get_maxX,return )

Float BoundingBox_obj::set_maxX(Float maxX){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_29_set_maxX)
HXDLIN(  29)		return (this->maxX = maxX);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_maxX,return )

Float BoundingBox_obj::get_minY(){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_33_get_minY)
HXDLIN(  33)		return this->minY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,get_minY,return )

Float BoundingBox_obj::set_minY(Float minY){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_37_set_minY)
HXDLIN(  37)		return (this->minY = minY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_minY,return )

Float BoundingBox_obj::get_maxY(){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_41_get_maxY)
HXDLIN(  41)		return this->maxY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BoundingBox_obj,get_maxY,return )

Float BoundingBox_obj::set_maxY(Float maxY){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_45_set_maxY)
HXDLIN(  45)		return (this->maxY = maxY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,set_maxY,return )

void BoundingBox_obj::setBound( ::shared::Position pos, ::shared::size::Size size){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_48_setBound)
HXLINE(  49)		this->set_minX(pos->get_x());
HXLINE(  50)		this->set_minY(pos->get_y());
HXLINE(  51)		Float _hx_tmp = this->get_minX();
HXDLIN(  51)		this->set_maxX((_hx_tmp + size->get_width()));
HXLINE(  52)		Float _hx_tmp1 = this->get_minY();
HXDLIN(  52)		this->set_maxY((_hx_tmp1 + size->get_height()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,setBound,(void))

bool BoundingBox_obj::isContainsCursor( ::shared::Point p){
            	HX_STACKFRAME(&_hx_pos_538c136b9d62430d_57_isContainsCursor)
HXDLIN(  57)		bool _hx_tmp;
HXDLIN(  57)		bool _hx_tmp1;
HXDLIN(  57)		Float _hx_tmp2 = p->get_x();
HXDLIN(  57)		if ((_hx_tmp2 >= this->get_minX())) {
HXLINE(  58)			Float _hx_tmp = p->get_x();
HXLINE(  57)			_hx_tmp1 = (_hx_tmp <= this->get_maxX());
            		}
            		else {
HXDLIN(  57)			_hx_tmp1 = false;
            		}
HXDLIN(  57)		if (_hx_tmp1) {
HXLINE(  59)			Float _hx_tmp1 = p->get_y();
HXLINE(  57)			_hx_tmp = (_hx_tmp1 >= this->get_minY());
            		}
            		else {
HXDLIN(  57)			_hx_tmp = false;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  60)			Float _hx_tmp = p->get_y();
HXDLIN(  60)			return (_hx_tmp <= this->get_maxY());
            		}
            		else {
HXDLIN(  57)			return false;
            		}
HXDLIN(  57)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,isContainsCursor,return )


::hx::ObjectPtr< BoundingBox_obj > BoundingBox_obj::__new( ::shared::Position pos, ::shared::size::Size size) {
	::hx::ObjectPtr< BoundingBox_obj > __this = new BoundingBox_obj();
	__this->__construct(pos,size);
	return __this;
}

::hx::ObjectPtr< BoundingBox_obj > BoundingBox_obj::__alloc(::hx::Ctx *_hx_ctx, ::shared::Position pos, ::shared::size::Size size) {
	BoundingBox_obj *__this = (BoundingBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BoundingBox_obj), false, "shared.BoundingBox"));
	*(void **)__this = BoundingBox_obj::_hx_vtable;
	__this->__construct(pos,size);
	return __this;
}

BoundingBox_obj::BoundingBox_obj()
{
}

::hx::Val BoundingBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_minX() : minX ); }
		if (HX_FIELD_EQ(inName,"maxX") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxX() : maxX ); }
		if (HX_FIELD_EQ(inName,"minY") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_minY() : minY ); }
		if (HX_FIELD_EQ(inName,"maxY") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxY() : maxY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_minX") ) { return ::hx::Val( get_minX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minX") ) { return ::hx::Val( set_minX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxX") ) { return ::hx::Val( get_maxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxX") ) { return ::hx::Val( set_maxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minY") ) { return ::hx::Val( get_minY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minY") ) { return ::hx::Val( set_minY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxY") ) { return ::hx::Val( get_maxY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxY") ) { return ::hx::Val( set_maxY_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBound") ) { return ::hx::Val( setBound_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isContainsCursor") ) { return ::hx::Val( isContainsCursor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BoundingBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minX(inValue.Cast< Float >()) );minX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxX(inValue.Cast< Float >()) );maxX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minY(inValue.Cast< Float >()) );minY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxY(inValue.Cast< Float >()) );maxY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("minX",86,4e,5c,48));
	outFields->push(HX_("maxX",34,45,56,48));
	outFields->push(HX_("minY",87,4e,5c,48));
	outFields->push(HX_("maxY",35,45,56,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BoundingBox_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BoundingBox_obj,minX),HX_("minX",86,4e,5c,48)},
	{::hx::fsFloat,(int)offsetof(BoundingBox_obj,maxX),HX_("maxX",34,45,56,48)},
	{::hx::fsFloat,(int)offsetof(BoundingBox_obj,minY),HX_("minY",87,4e,5c,48)},
	{::hx::fsFloat,(int)offsetof(BoundingBox_obj,maxY),HX_("maxY",35,45,56,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BoundingBox_obj_sStaticStorageInfo = 0;
#endif

static ::String BoundingBox_obj_sMemberFields[] = {
	HX_("minX",86,4e,5c,48),
	HX_("maxX",34,45,56,48),
	HX_("minY",87,4e,5c,48),
	HX_("maxY",35,45,56,48),
	HX_("get_minX",0f,0a,17,c8),
	HX_("set_minX",83,63,74,76),
	HX_("get_maxX",bd,00,11,c8),
	HX_("set_maxX",31,5a,6e,76),
	HX_("get_minY",10,0a,17,c8),
	HX_("set_minY",84,63,74,76),
	HX_("get_maxY",be,00,11,c8),
	HX_("set_maxY",32,5a,6e,76),
	HX_("setBound",3c,19,31,c5),
	HX_("isContainsCursor",df,73,30,8d),
	::String(null()) };

::hx::Class BoundingBox_obj::__mClass;

void BoundingBox_obj::__register()
{
	BoundingBox_obj _hx_dummy;
	BoundingBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.BoundingBox",9e,21,11,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BoundingBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BoundingBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoundingBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoundingBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
