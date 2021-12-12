#include <hxcpp.h>

#ifndef INCLUDED_elements_modal_Modal
#include <elements/modal/Modal.h>
#endif
#ifndef INCLUDED_elements_text_Text
#include <elements/text/Text.h>
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
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5cd28a5214f2cd6b_12_new,"elements.modal.Modal","new",0x27d2f7c7,"elements.modal.Modal.new","elements/modal/Modal.hx",12,0x7f10664b)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd28a5214f2cd6b_18_initTitle,"elements.modal.Modal","initTitle",0xfcc65f0f,"elements.modal.Modal.initTitle","elements/modal/Modal.hx",18,0x7f10664b)
HX_LOCAL_STACK_FRAME(_hx_pos_5cd28a5214f2cd6b_28_get_title,"elements.modal.Modal","get_title",0x24dda096,"elements.modal.Modal.get_title","elements/modal/Modal.hx",28,0x7f10664b)
namespace elements{
namespace modal{

void Modal_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5cd28a5214f2cd6b_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		this->title =  ::elements::text::Text_obj::__alloc( HX_CTX );
HXLINE(  15)		this->initTitle();
            	}

Dynamic Modal_obj::__CreateEmpty() { return new Modal_obj; }

void *Modal_obj::_hx_vtable = 0;

Dynamic Modal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Modal_obj > _hx_result = new Modal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Modal_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x6992f2b7;
	}
}

void Modal_obj::initTitle(){
            	HX_STACKFRAME(&_hx_pos_5cd28a5214f2cd6b_18_initTitle)
HXLINE(  19)		this->get_title()->set_alignByVer(0);
HXLINE(  20)		this->get_title()->set_alignByHor(3);
HXLINE(  21)		this->get_title()->set_fontSize(20);
HXLINE(  22)		this->get_title()->get_textColor()->setColor(::shared::Color_obj::TEXT);
HXLINE(  23)		this->get_title()->get_highlight()->setColor(::shared::Color_obj::TEXT);
HXLINE(  24)		this->get_title()->setPadding(20,0,0,0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Modal_obj,initTitle,(void))

 ::elements::text::Text Modal_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_5cd28a5214f2cd6b_28_get_title)
HXDLIN(  28)		return this->title;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Modal_obj,get_title,return )


::hx::ObjectPtr< Modal_obj > Modal_obj::__new() {
	::hx::ObjectPtr< Modal_obj > __this = new Modal_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Modal_obj > Modal_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Modal_obj *__this = (Modal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Modal_obj), true, "elements.modal.Modal"));
	*(void **)__this = Modal_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Modal_obj::Modal_obj()
{
}

void Modal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Modal);
	HX_MARK_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Modal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Modal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_title() : title ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initTitle") ) { return ::hx::Val( initTitle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Modal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::elements::text::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Modal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Modal_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::text::Text */ ,(int)offsetof(Modal_obj,title),HX_("title",98,15,3b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Modal_obj_sStaticStorageInfo = 0;
#endif

static ::String Modal_obj_sMemberFields[] = {
	HX_("title",98,15,3b,10),
	HX_("initTitle",68,30,cd,2b),
	HX_("get_title",ef,71,e4,53),
	::String(null()) };

::hx::Class Modal_obj::__mClass;

void Modal_obj::__register()
{
	Modal_obj _hx_dummy;
	Modal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.modal.Modal",55,08,64,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Modal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Modal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Modal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Modal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace modal
