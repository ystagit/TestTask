#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_builders_AppBuilder
#include <builders/AppBuilder.h>
#endif
#ifndef INCLUDED_builders_ElementBuilder
#include <builders/ElementBuilder.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif
#ifndef INCLUDED_views_GuiView
#include <views/GuiView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3528a5859dd1a361_13_new,"builders.AppBuilder","new",0x826e7542,"builders.AppBuilder.new","builders/AppBuilder.hx",13,0x777ebbcd)
HX_LOCAL_STACK_FRAME(_hx_pos_3528a5859dd1a361_22_buildScene,"builders.AppBuilder","buildScene",0x320fc29c,"builders.AppBuilder.buildScene","builders/AppBuilder.hx",22,0x777ebbcd)
HX_LOCAL_STACK_FRAME(_hx_pos_3528a5859dd1a361_30_buildElement,"builders.AppBuilder","buildElement",0xf9db8c0c,"builders.AppBuilder.buildElement","builders/AppBuilder.hx",30,0x777ebbcd)
HX_LOCAL_STACK_FRAME(_hx_pos_3528a5859dd1a361_19_load,"builders.AppBuilder","load",0x9ced3b04,"builders.AppBuilder.load","builders/AppBuilder.hx",19,0x777ebbcd)
namespace builders{

void AppBuilder_obj::__construct(::String xmlFile){
            	HX_STACKFRAME(&_hx_pos_3528a5859dd1a361_13_new)
HXLINE(  14)		::String appDir = ::haxe::io::Path_obj::normalize(::lime::_hx_system::System_obj::get_applicationDirectory()).split(HX_("TestTask",d7,00,db,29))->__get(0);
HXLINE(  15)		this->xmlContent = ::sys::io::File_obj::getContent(((appDir + HX_("TestTask/Assets/",b4,75,0a,aa)) + xmlFile));
            	}

Dynamic AppBuilder_obj::__CreateEmpty() { return new AppBuilder_obj; }

void *AppBuilder_obj::_hx_vtable = 0;

Dynamic AppBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppBuilder_obj > _hx_result = new AppBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AppBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a11f712;
}

void AppBuilder_obj::buildScene( ::views::GuiView parentView){
            	HX_STACKFRAME(&_hx_pos_3528a5859dd1a361_22_buildScene)
HXLINE(  23)		 ::Xml xml = ::Xml_obj::parse(this->xmlContent);
HXLINE(  24)		 ::Xml x = xml->firstElement();
HXDLIN(  24)		bool _hx_tmp;
HXDLIN(  24)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  24)			_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN(  24)		 ::Xml this1 = x;
HXDLIN(  24)		 ::Xml rootNode = this1;
HXLINE(  25)		{
HXLINE(  25)			 ::Dynamic node = rootNode->elements();
HXDLIN(  25)			while(( (bool)(node->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  25)				 ::Xml node1 = ( ( ::Xml)(node->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  26)				this->buildElement(parentView,node1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppBuilder_obj,buildScene,(void))

void AppBuilder_obj::buildElement( ::views::GuiView parentView, ::Xml node){
            	HX_STACKFRAME(&_hx_pos_3528a5859dd1a361_30_buildElement)
HXLINE(  31)		parentView = ::builders::ElementBuilder_obj::build(parentView,node);
HXLINE(  32)		{
HXLINE(  32)			 ::Dynamic node1 = node->elements();
HXDLIN(  32)			while(( (bool)(node1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  32)				 ::Xml node = ( ( ::Xml)(node1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  33)				if (::hx::IsNotNull( parentView )) {
HXLINE(  34)					this->buildElement(parentView,node);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AppBuilder_obj,buildElement,(void))

 ::builders::AppBuilder AppBuilder_obj::load(::String __o_xmlFile){
            		::String xmlFile = __o_xmlFile;
            		if (::hx::IsNull(__o_xmlFile)) xmlFile = HX_("app.xml",8a,9f,3e,25);
            	HX_GC_STACKFRAME(&_hx_pos_3528a5859dd1a361_19_load)
HXDLIN(  19)		return  ::builders::AppBuilder_obj::__alloc( HX_CTX ,xmlFile);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppBuilder_obj,load,return )


::hx::ObjectPtr< AppBuilder_obj > AppBuilder_obj::__new(::String xmlFile) {
	::hx::ObjectPtr< AppBuilder_obj > __this = new AppBuilder_obj();
	__this->__construct(xmlFile);
	return __this;
}

::hx::ObjectPtr< AppBuilder_obj > AppBuilder_obj::__alloc(::hx::Ctx *_hx_ctx,::String xmlFile) {
	AppBuilder_obj *__this = (AppBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppBuilder_obj), true, "builders.AppBuilder"));
	*(void **)__this = AppBuilder_obj::_hx_vtable;
	__this->__construct(xmlFile);
	return __this;
}

AppBuilder_obj::AppBuilder_obj()
{
}

void AppBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppBuilder);
	HX_MARK_MEMBER_NAME(xmlContent,"xmlContent");
	HX_MARK_END_CLASS();
}

void AppBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xmlContent,"xmlContent");
}

::hx::Val AppBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { return ::hx::Val( xmlContent ); }
		if (HX_FIELD_EQ(inName,"buildScene") ) { return ::hx::Val( buildScene_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buildElement") ) { return ::hx::Val( buildElement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AppBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
	}
	return false;
}

::hx::Val AppBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { xmlContent=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xmlContent",22,c0,c2,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AppBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AppBuilder_obj,xmlContent),HX_("xmlContent",22,c0,c2,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AppBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String AppBuilder_obj_sMemberFields[] = {
	HX_("xmlContent",22,c0,c2,fb),
	HX_("buildScene",3e,27,45,0d),
	HX_("buildElement",2e,dd,ac,18),
	::String(null()) };

::hx::Class AppBuilder_obj::__mClass;

static ::String AppBuilder_obj_sStaticFields[] = {
	HX_("load",26,9a,b7,47),
	::String(null())
};

void AppBuilder_obj::__register()
{
	AppBuilder_obj _hx_dummy;
	AppBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.AppBuilder",50,6c,fe,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AppBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AppBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders
