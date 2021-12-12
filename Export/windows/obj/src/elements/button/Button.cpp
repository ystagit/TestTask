#include <hxcpp.h>

#ifndef INCLUDED_elements_button_Button
#include <elements/button/Button.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aeb767350b1954a4_5_new,"elements.button.Button","new",0x08ee0909,"elements.button.Button.new","elements/button/Button.hx",5,0x5c89f467)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb767350b1954a4_10_get_title,"elements.button.Button","get_title",0xf1a40f58,"elements.button.Button.get_title","elements/button/Button.hx",10,0x5c89f467)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb767350b1954a4_14_set_title,"elements.button.Button","set_title",0xd4f4fb64,"elements.button.Button.set_title","elements/button/Button.hx",14,0x5c89f467)
namespace elements{
namespace button{

void Button_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aeb767350b1954a4_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x22e873df) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x22e873df;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}

::String Button_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_aeb767350b1954a4_10_get_title)
HXDLIN(  10)		return this->title;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_title,return )

::String Button_obj::set_title(::String title){
            	HX_STACKFRAME(&_hx_pos_aeb767350b1954a4_14_set_title)
HXDLIN(  14)		return (this->title = title);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_title,return )


::hx::ObjectPtr< Button_obj > Button_obj::__new() {
	::hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Button_obj > Button_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Button_obj *__this = (Button_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "elements.button.Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Button_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_title() : title ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Button_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) );title=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Button_obj,title),HX_("title",98,15,3b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_("title",98,15,3b,10),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	::String(null()) };

::hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	Button_obj _hx_dummy;
	Button_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.button.Button",97,d0,08,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Button_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace button
