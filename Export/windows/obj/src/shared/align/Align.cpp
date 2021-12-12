#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_align_Align
#include <shared/align/Align.h>
#endif
#ifndef INCLUDED_shared_align_AlignType
#include <shared/align/AlignType.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_52db3c30a2db0160_11_new,"shared.align.Align","new",0x0feb2365,"shared.align.Align.new","shared/align/Align.hx",11,0xd634186d)
HX_LOCAL_STACK_FRAME(_hx_pos_52db3c30a2db0160_17_get_alignTypeByVer,"shared.align.Align","get_alignTypeByVer",0xf5376391,"shared.align.Align.get_alignTypeByVer","shared/align/Align.hx",17,0xd634186d)
HX_LOCAL_STACK_FRAME(_hx_pos_52db3c30a2db0160_21_set_alignTypeByVer,"shared.align.Align","set_alignTypeByVer",0xd1e69605,"shared.align.Align.set_alignTypeByVer","shared/align/Align.hx",21,0xd634186d)
HX_LOCAL_STACK_FRAME(_hx_pos_52db3c30a2db0160_25_get_alignTypeByHor,"shared.align.Align","get_alignTypeByHor",0xf52cccb9,"shared.align.Align.get_alignTypeByHor","shared/align/Align.hx",25,0xd634186d)
HX_LOCAL_STACK_FRAME(_hx_pos_52db3c30a2db0160_29_set_alignTypeByHor,"shared.align.Align","set_alignTypeByHor",0xd1dbff2d,"shared.align.Align.set_alignTypeByHor","shared/align/Align.hx",29,0xd634186d)
HX_LOCAL_STACK_FRAME(_hx_pos_52db3c30a2db0160_32_align,"shared.align.Align","align",0xc3e7350a,"shared.align.Align.align","shared/align/Align.hx",32,0xd634186d)
namespace shared{
namespace align{

void Align_obj::__construct( ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_11_new)
HXLINE(  12)		this->set_alignTypeByVer(alignTypeByVer);
HXLINE(  13)		this->set_alignTypeByHor(alignTypeByHor);
            	}

Dynamic Align_obj::__CreateEmpty() { return new Align_obj; }

void *Align_obj::_hx_vtable = 0;

Dynamic Align_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Align_obj > _hx_result = new Align_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Align_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0deb2b99;
}

 ::shared::align::AlignType Align_obj::get_alignTypeByVer(){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_17_get_alignTypeByVer)
HXDLIN(  17)		return this->alignTypeByVer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,get_alignTypeByVer,return )

 ::shared::align::AlignType Align_obj::set_alignTypeByVer( ::shared::align::AlignType type){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_21_set_alignTypeByVer)
HXDLIN(  21)		return (this->alignTypeByVer = type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Align_obj,set_alignTypeByVer,return )

 ::shared::align::AlignType Align_obj::get_alignTypeByHor(){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_25_get_alignTypeByHor)
HXDLIN(  25)		return this->alignTypeByHor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,get_alignTypeByHor,return )

 ::shared::align::AlignType Align_obj::set_alignTypeByHor( ::shared::align::AlignType type){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_29_set_alignTypeByHor)
HXDLIN(  29)		return (this->alignTypeByHor = type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Align_obj,set_alignTypeByHor,return )

void Align_obj::align(::Dynamic currentElement,::Dynamic parentElement){
            	HX_STACKFRAME(&_hx_pos_52db3c30a2db0160_32_align)
HXLINE(  34)		if (::hx::IsNull( parentElement )) {
HXLINE(  35)			return;
            		}
HXLINE(  38)		 ::shared::Position currentElPos = ::models::IModel_obj::getPosition(currentElement);
HXLINE(  39)		 ::shared::size::Size currentElSize = ::models::IModel_obj::getSize(currentElement);
HXLINE(  40)		 ::shared::Position parentElPos = ::models::IModel_obj::getPosition(parentElement);
HXLINE(  41)		 ::shared::size::Size parentElSize = ::models::IModel_obj::getSize(parentElement);
HXLINE(  43)		if (__hxcpp_enum_eq(this->get_alignTypeByVer(),::shared::align::AlignType_obj::TOP_dyn())) {
HXLINE(  44)			currentElPos->set_y(parentElPos->get_y());
            		}
            		else {
HXLINE(  45)			if (__hxcpp_enum_eq(this->get_alignTypeByVer(),::shared::align::AlignType_obj::BOTTOM_dyn())) {
HXLINE(  46)				Float _hx_tmp = parentElPos->get_y();
HXDLIN(  46)				currentElPos->set_y((_hx_tmp + parentElSize->get_height()));
HXLINE(  47)				currentElPos->set_y(-(parentElSize->get_height()));
            			}
            			else {
HXLINE(  48)				if (__hxcpp_enum_eq(this->get_alignTypeByVer(),::shared::align::AlignType_obj::CENTER_dyn())) {
HXLINE(  49)					Float _hx_tmp = parentElPos->get_y();
HXDLIN(  49)					currentElPos->set_y((_hx_tmp + (parentElSize->get_height() * ((Float)0.5))));
HXLINE(  50)					Float _hx_tmp1 = currentElPos->get_y();
HXDLIN(  50)					currentElPos->set_y((_hx_tmp1 - (currentElSize->get_height() * ((Float)0.5))));
            				}
            			}
            		}
HXLINE(  53)		if (__hxcpp_enum_eq(this->get_alignTypeByHor(),::shared::align::AlignType_obj::RIGHT_dyn())) {
HXLINE(  54)			Float _hx_tmp = parentElPos->get_x();
HXDLIN(  54)			currentElPos->set_x((_hx_tmp + parentElSize->get_width()));
HXLINE(  55)			currentElPos->set_x(-(parentElSize->get_width()));
            		}
            		else {
HXLINE(  56)			if (__hxcpp_enum_eq(this->get_alignTypeByHor(),::shared::align::AlignType_obj::LEFT_dyn())) {
HXLINE(  57)				currentElPos->set_x(parentElPos->get_x());
            			}
            			else {
HXLINE(  58)				if (__hxcpp_enum_eq(this->get_alignTypeByHor(),::shared::align::AlignType_obj::CENTER_dyn())) {
HXLINE(  59)					Float _hx_tmp = parentElPos->get_x();
HXDLIN(  59)					currentElPos->set_x((_hx_tmp + (parentElSize->get_width() * ((Float)0.5))));
HXLINE(  60)					Float _hx_tmp1 = currentElPos->get_x();
HXDLIN(  60)					currentElPos->set_x((_hx_tmp1 - (currentElSize->get_width() * ((Float)0.5))));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Align_obj,align,(void))


::hx::ObjectPtr< Align_obj > Align_obj::__new( ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor) {
	::hx::ObjectPtr< Align_obj > __this = new Align_obj();
	__this->__construct(alignTypeByVer,alignTypeByHor);
	return __this;
}

::hx::ObjectPtr< Align_obj > Align_obj::__alloc(::hx::Ctx *_hx_ctx, ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor) {
	Align_obj *__this = (Align_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Align_obj), true, "shared.align.Align"));
	*(void **)__this = Align_obj::_hx_vtable;
	__this->__construct(alignTypeByVer,alignTypeByHor);
	return __this;
}

Align_obj::Align_obj()
{
}

void Align_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Align);
	HX_MARK_MEMBER_NAME(alignTypeByVer,"alignTypeByVer");
	HX_MARK_MEMBER_NAME(alignTypeByHor,"alignTypeByHor");
	HX_MARK_END_CLASS();
}

void Align_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alignTypeByVer,"alignTypeByVer");
	HX_VISIT_MEMBER_NAME(alignTypeByHor,"alignTypeByHor");
}

::hx::Val Align_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return ::hx::Val( align_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alignTypeByVer") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_alignTypeByVer() : alignTypeByVer ); }
		if (HX_FIELD_EQ(inName,"alignTypeByHor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_alignTypeByHor() : alignTypeByHor ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_alignTypeByVer") ) { return ::hx::Val( get_alignTypeByVer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignTypeByVer") ) { return ::hx::Val( set_alignTypeByVer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alignTypeByHor") ) { return ::hx::Val( get_alignTypeByHor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignTypeByHor") ) { return ::hx::Val( set_alignTypeByHor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Align_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"alignTypeByVer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignTypeByVer(inValue.Cast<  ::shared::align::AlignType >()) );alignTypeByVer=inValue.Cast<  ::shared::align::AlignType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alignTypeByHor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignTypeByHor(inValue.Cast<  ::shared::align::AlignType >()) );alignTypeByHor=inValue.Cast<  ::shared::align::AlignType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Align_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alignTypeByVer",2d,a8,0e,c6));
	outFields->push(HX_("alignTypeByHor",55,11,04,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Align_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shared::align::AlignType */ ,(int)offsetof(Align_obj,alignTypeByVer),HX_("alignTypeByVer",2d,a8,0e,c6)},
	{::hx::fsObject /*  ::shared::align::AlignType */ ,(int)offsetof(Align_obj,alignTypeByHor),HX_("alignTypeByHor",55,11,04,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Align_obj_sStaticStorageInfo = 0;
#endif

static ::String Align_obj_sMemberFields[] = {
	HX_("alignTypeByVer",2d,a8,0e,c6),
	HX_("alignTypeByHor",55,11,04,c6),
	HX_("get_alignTypeByVer",f6,88,a8,61),
	HX_("set_alignTypeByVer",6a,bb,57,3e),
	HX_("get_alignTypeByHor",1e,f2,9d,61),
	HX_("set_alignTypeByHor",92,24,4d,3e),
	HX_("align",c5,56,91,21),
	::String(null()) };

::hx::Class Align_obj::__mClass;

void Align_obj::__register()
{
	Align_obj _hx_dummy;
	Align_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.align.Align",f3,8c,9a,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Align_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Align_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Align_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Align_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
} // end namespace align
