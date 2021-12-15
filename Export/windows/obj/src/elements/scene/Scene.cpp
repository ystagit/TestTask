#include <hxcpp.h>

#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5af7b6313dd7a1c6_10_new,"elements.scene.Scene","new",0x33b32245,"elements.scene.Scene.new","elements/scene/Scene.hx",10,0x9739958d)
HX_LOCAL_STACK_FRAME(_hx_pos_5af7b6313dd7a1c6_16_get_name,"elements.scene.Scene","get_name",0x74eeddcf,"elements.scene.Scene.get_name","elements/scene/Scene.hx",16,0x9739958d)
HX_LOCAL_STACK_FRAME(_hx_pos_5af7b6313dd7a1c6_20_get_title,"elements.scene.Scene","get_title",0x55c9bd94,"elements.scene.Scene.get_title","elements/scene/Scene.hx",20,0x9739958d)
HX_LOCAL_STACK_FRAME(_hx_pos_5af7b6313dd7a1c6_24_set_title,"elements.scene.Scene","set_title",0x391aa9a0,"elements.scene.Scene.set_title","elements/scene/Scene.hx",24,0x9739958d)
namespace elements{
namespace scene{

void Scene_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_5af7b6313dd7a1c6_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->name = name;
            	}

Dynamic Scene_obj::__CreateEmpty() { return new Scene_obj; }

void *Scene_obj::_hx_vtable = 0;

Dynamic Scene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene_obj > _hx_result = new Scene_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Scene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x3c47e497;
	}
}

::String Scene_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_5af7b6313dd7a1c6_16_get_name)
HXDLIN(  16)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_name,return )

::String Scene_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_5af7b6313dd7a1c6_20_get_title)
HXDLIN(  20)		return this->title;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_title,return )

::String Scene_obj::set_title(::String title){
            	HX_STACKFRAME(&_hx_pos_5af7b6313dd7a1c6_24_set_title)
HXDLIN(  24)		return (this->title = title);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_title,return )


::hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String name) {
	::hx::ObjectPtr< Scene_obj > __this = new Scene_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Scene_obj > Scene_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Scene_obj *__this = (Scene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene_obj), true, "elements.scene.Scene"));
	*(void **)__this = Scene_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(title,"title");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_name() : name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_title() : title ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) );title=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Scene_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(Scene_obj,title),HX_("title",98,15,3b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scene_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("title",98,15,3b,10),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	::String(null()) };

::hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Scene_obj _hx_dummy;
	Scene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.scene.Scene",d3,9b,01,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace scene
