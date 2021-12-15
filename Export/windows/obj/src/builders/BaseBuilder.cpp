#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_builders_BaseBuilder
#include <builders/BaseBuilder.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d3025662fda3ec5_9_new,"builders.BaseBuilder","new",0xe2265566,"builders.BaseBuilder.new","builders/BaseBuilder.hx",9,0xa737788b)
HX_LOCAL_STACK_FRAME(_hx_pos_1d3025662fda3ec5_15_get_node,"builders.BaseBuilder","get_node",0xead44ac5,"builders.BaseBuilder.get_node","builders/BaseBuilder.hx",15,0xa737788b)
namespace builders{

void BaseBuilder_obj::__construct( ::Xml node){
            	HX_STACKFRAME(&_hx_pos_1d3025662fda3ec5_9_new)
HXLINE(  10)		this->node = node;
HXLINE(  11)		this->validateRequiredAttrs();
            	}

bool BaseBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b784972;
}

 ::Xml BaseBuilder_obj::get_node(){
            	HX_STACKFRAME(&_hx_pos_1d3025662fda3ec5_15_get_node)
HXDLIN(  15)		return this->node;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseBuilder_obj,get_node,return )

HX_DEFINE_DYNAMIC_FUNC0(BaseBuilder_obj,validateRequiredAttrs,(void))

HX_DEFINE_DYNAMIC_FUNC0(BaseBuilder_obj,initAttributes,(void))


BaseBuilder_obj::BaseBuilder_obj()
{
}

void BaseBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseBuilder);
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void BaseBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
}

::hx::Val BaseBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_node() : node ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_node") ) { return ::hx::Val( get_node_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initAttributes") ) { return ::hx::Val( initAttributes_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateRequiredAttrs") ) { return ::hx::Val( validateRequiredAttrs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("node",02,0a,0a,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(BaseBuilder_obj,node),HX_("node",02,0a,0a,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseBuilder_obj_sMemberFields[] = {
	HX_("node",02,0a,0a,49),
	HX_("get_node",8b,c5,c4,c8),
	HX_("validateRequiredAttrs",cd,4d,21,76),
	HX_("initAttributes",07,5c,3c,bc),
	::String(null()) };

::hx::Class BaseBuilder_obj::__mClass;

void BaseBuilder_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.BaseBuilder",74,6a,72,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x8639f432 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
