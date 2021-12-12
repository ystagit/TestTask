#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_16_new,"elements.text.Text","new",0x315b1ba9,"elements.text.Text.new","elements/text/Text.hx",16,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_27_get_value,"elements.text.Text","get_value",0x4b1243d1,"elements.text.Text.get_value","elements/text/Text.hx",27,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_31_set_value,"elements.text.Text","set_value",0x2e632fdd,"elements.text.Text.set_value","elements/text/Text.hx",31,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_35_get_textColor,"elements.text.Text","get_textColor",0xed4d75d6,"elements.text.Text.get_textColor","elements/text/Text.hx",35,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_39_get_font,"elements.text.Text","get_font",0x6d31456f,"elements.text.Text.get_font","elements/text/Text.hx",39,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_43_set_font,"elements.text.Text","set_font",0x1b8e9ee3,"elements.text.Text.set_font","elements/text/Text.hx",43,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_47_get_fontSize,"elements.text.Text","get_fontSize",0x205ef5d0,"elements.text.Text.get_fontSize","elements/text/Text.hx",47,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_51_set_fontSize,"elements.text.Text","set_fontSize",0x35581944,"elements.text.Text.set_fontSize","elements/text/Text.hx",51,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_55_get_alignByVer,"elements.text.Text","get_alignByVer",0x0fd61367,"elements.text.Text.get_alignByVer","elements/text/Text.hx",55,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_59_set_alignByVer,"elements.text.Text","set_alignByVer",0x2ff5fbdb,"elements.text.Text.set_alignByVer","elements/text/Text.hx",59,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_63_get_alignByHor,"elements.text.Text","get_alignByHor",0x0fcb7c8f,"elements.text.Text.get_alignByHor","elements/text/Text.hx",63,0xe9eebb87)
HX_LOCAL_STACK_FRAME(_hx_pos_49edbf59f5d4faf0_67_set_alignByHor,"elements.text.Text","set_alignByHor",0x2feb6503,"elements.text.Text.set_alignByHor","elements/text/Text.hx",67,0xe9eebb87)
namespace elements{
namespace text{

void Text_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_16_new)
HXLINE(  17)		super::__construct();
HXLINE(  18)		this->set_font(HX_("Arial",23,09,b6,b8));
HXLINE(  19)		this->set_fontSize(14);
HXLINE(  20)		this->set_alignByVer(5);
HXLINE(  21)		this->set_alignByHor(3);
HXLINE(  22)		this->textColor = ::shared::Color_obj::create(::shared::Color_obj::TEXT);
HXLINE(  23)		this->get_highlight()->setColor(::shared::Color_obj::TEXT);
            	}

Dynamic Text_obj::__CreateEmpty() { return new Text_obj; }

void *Text_obj::_hx_vtable = 0;

Dynamic Text_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Text_obj > _hx_result = new Text_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Text_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x530cfa31;
	}
}

::String Text_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_27_get_value)
HXDLIN(  27)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_value,return )

::String Text_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_31_set_value)
HXDLIN(  31)		return (this->value = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_value,return )

 ::shared::Color Text_obj::get_textColor(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_35_get_textColor)
HXDLIN(  35)		return this->textColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_textColor,return )

::String Text_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_39_get_font)
HXDLIN(  39)		return this->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_font,return )

::String Text_obj::set_font(::String font){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_43_set_font)
HXDLIN(  43)		return (this->font = font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

int Text_obj::get_fontSize(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_47_get_fontSize)
HXDLIN(  47)		return this->fontSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_fontSize,return )

int Text_obj::set_fontSize(int fontSize){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_51_set_fontSize)
HXDLIN(  51)		return (this->fontSize = fontSize);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_fontSize,return )

 ::Dynamic Text_obj::get_alignByVer(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_55_get_alignByVer)
HXDLIN(  55)		return this->alignByVer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_alignByVer,return )

 ::Dynamic Text_obj::set_alignByVer( ::Dynamic alignByVer){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_59_set_alignByVer)
HXDLIN(  59)		return (this->alignByVer = alignByVer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_alignByVer,return )

 ::Dynamic Text_obj::get_alignByHor(){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_63_get_alignByHor)
HXDLIN(  63)		return this->alignByHor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_alignByHor,return )

 ::Dynamic Text_obj::set_alignByHor( ::Dynamic alignByHor){
            	HX_STACKFRAME(&_hx_pos_49edbf59f5d4faf0_67_set_alignByHor)
HXDLIN(  67)		return (this->alignByHor = alignByHor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_alignByHor,return )


::hx::ObjectPtr< Text_obj > Text_obj::__new() {
	::hx::ObjectPtr< Text_obj > __this = new Text_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Text_obj > Text_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Text_obj *__this = (Text_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Text_obj), true, "elements.text.Text"));
	*(void **)__this = Text_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	HX_MARK_MEMBER_NAME(alignByVer,"alignByVer");
	HX_MARK_MEMBER_NAME(alignByHor,"alignByHor");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	HX_VISIT_MEMBER_NAME(alignByVer,"alignByVer");
	HX_VISIT_MEMBER_NAME(alignByHor,"alignByHor");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Text_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_font() : font ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_value() : value ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_fontSize() : fontSize ); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textColor() : textColor ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignByVer") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_alignByVer() : alignByVer ); }
		if (HX_FIELD_EQ(inName,"alignByHor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_alignByHor() : alignByHor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_fontSize") ) { return ::hx::Val( get_fontSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fontSize") ) { return ::hx::Val( set_fontSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return ::hx::Val( get_textColor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_alignByVer") ) { return ::hx::Val( get_alignByVer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignByVer") ) { return ::hx::Val( set_alignByVer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alignByHor") ) { return ::hx::Val( get_alignByHor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignByHor") ) { return ::hx::Val( set_alignByHor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Text_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) );font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< ::String >()) );value=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fontSize(inValue.Cast< int >()) );fontSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textColor") ) { textColor=inValue.Cast<  ::shared::Color >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignByVer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignByVer(inValue.Cast<  ::Dynamic >()) );alignByVer=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alignByHor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignByHor(inValue.Cast<  ::Dynamic >()) );alignByHor=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("textColor",76,01,4a,e3));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	outFields->push(HX_("alignByVer",c7,b3,d3,56));
	outFields->push(HX_("alignByHor",ef,1c,c9,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Text_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Text_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /*  ::shared::Color */ ,(int)offsetof(Text_obj,textColor),HX_("textColor",76,01,4a,e3)},
	{::hx::fsString,(int)offsetof(Text_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsInt,(int)offsetof(Text_obj,fontSize),HX_("fontSize",30,be,d1,ce)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Text_obj,alignByVer),HX_("alignByVer",c7,b3,d3,56)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Text_obj,alignByHor),HX_("alignByHor",ef,1c,c9,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Text_obj_sStaticStorageInfo = 0;
#endif

static ::String Text_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("textColor",76,01,4a,e3),
	HX_("font",cf,5d,c0,43),
	HX_("fontSize",30,be,d1,ce),
	HX_("alignByVer",c7,b3,d3,56),
	HX_("alignByHor",ef,1c,c9,56),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_textColor",4d,d5,ad,a4),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_fontSize",39,72,eb,83),
	HX_("set_fontSize",ad,95,e4,98),
	HX_("get_alignByVer",10,3c,c9,cc),
	HX_("set_alignByVer",84,24,e9,ec),
	HX_("get_alignByHor",38,a5,be,cc),
	HX_("set_alignByHor",ac,8d,de,ec),
	::String(null()) };

::hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	Text_obj _hx_dummy;
	Text_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.text.Text",37,13,90,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Text_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Text_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Text_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Text_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace text
