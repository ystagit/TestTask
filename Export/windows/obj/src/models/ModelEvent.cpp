#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_997593e9e618fe71_16_new,"models.ModelEvent","new",0x3c298487,"models.ModelEvent.new","models/ModelEvent.hx",16,0x9f5bfc28)
HX_LOCAL_STACK_FRAME(_hx_pos_997593e9e618fe71_22_get_data,"models.ModelEvent","get_data",0x5706f02c,"models.ModelEvent.get_data","models/ModelEvent.hx",22,0x9f5bfc28)
HX_LOCAL_STACK_FRAME(_hx_pos_997593e9e618fe71_26_clone,"models.ModelEvent","clone",0x6c2b5f44,"models.ModelEvent.clone","models/ModelEvent.hx",26,0x9f5bfc28)
HX_LOCAL_STACK_FRAME(_hx_pos_997593e9e618fe71_8_boot,"models.ModelEvent","boot",0x6043722b,"models.ModelEvent.boot","models/ModelEvent.hx",8,0x9f5bfc28)
HX_LOCAL_STACK_FRAME(_hx_pos_997593e9e618fe71_10_boot,"models.ModelEvent","boot",0x6043722b,"models.ModelEvent.boot","models/ModelEvent.hx",10,0x9f5bfc28)
HX_LOCAL_STACK_FRAME(_hx_pos_997593e9e618fe71_12_boot,"models.ModelEvent","boot",0x6043722b,"models.ModelEvent.boot","models/ModelEvent.hx",12,0x9f5bfc28)
namespace models{

void ModelEvent_obj::__construct(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_997593e9e618fe71_16_new)
HXLINE(  17)		super::__construct(type,bubbles,cancelable);
HXLINE(  18)		 ::haxe::ds::StringMap _hx_tmp;
HXDLIN(  18)		if (::hx::IsNotNull( data )) {
HXLINE(  18)			_hx_tmp = data;
            		}
            		else {
HXLINE(  18)			_hx_tmp =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXDLIN(  18)		this->data = _hx_tmp;
            	}

Dynamic ModelEvent_obj::__CreateEmpty() { return new ModelEvent_obj; }

void *ModelEvent_obj::_hx_vtable = 0;

Dynamic ModelEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModelEvent_obj > _hx_result = new ModelEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ModelEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x5cb5a0fb;
	}
}

 ::haxe::ds::StringMap ModelEvent_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_997593e9e618fe71_22_get_data)
HXDLIN(  22)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ModelEvent_obj,get_data,return )

 ::openfl::events::Event ModelEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_997593e9e618fe71_26_clone)
HXDLIN(  26)		::String _hx_tmp = this->type;
HXDLIN(  26)		 ::haxe::ds::StringMap _hx_tmp1 = this->get_data();
HXDLIN(  26)		return  ::models::ModelEvent_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->bubbles,this->cancelable);
            	}


::String ModelEvent_obj::UPDATE_ALL;

::String ModelEvent_obj::DRAW;

::String ModelEvent_obj::SYNC_RESIZE;


::hx::ObjectPtr< ModelEvent_obj > ModelEvent_obj::__new(::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< ModelEvent_obj > __this = new ModelEvent_obj();
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< ModelEvent_obj > ModelEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::haxe::ds::StringMap data,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	ModelEvent_obj *__this = (ModelEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModelEvent_obj), true, "models.ModelEvent"));
	*(void **)__this = ModelEvent_obj::_hx_vtable;
	__this->__construct(type,data,__o_bubbles,__o_cancelable);
	return __this;
}

ModelEvent_obj::ModelEvent_obj()
{
}

void ModelEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModelEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ModelEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ModelEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_data() : data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModelEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModelEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModelEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ModelEvent_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ModelEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ModelEvent_obj::UPDATE_ALL,HX_("UPDATE_ALL",8b,44,21,14)},
	{::hx::fsString,(void *) &ModelEvent_obj::DRAW,HX_("DRAW",04,f4,30,2d)},
	{::hx::fsString,(void *) &ModelEvent_obj::SYNC_RESIZE,HX_("SYNC_RESIZE",98,66,37,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ModelEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("get_data",b3,11,1e,c2),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ModelEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModelEvent_obj::UPDATE_ALL,"UPDATE_ALL");
	HX_MARK_MEMBER_NAME(ModelEvent_obj::DRAW,"DRAW");
	HX_MARK_MEMBER_NAME(ModelEvent_obj::SYNC_RESIZE,"SYNC_RESIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModelEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModelEvent_obj::UPDATE_ALL,"UPDATE_ALL");
	HX_VISIT_MEMBER_NAME(ModelEvent_obj::DRAW,"DRAW");
	HX_VISIT_MEMBER_NAME(ModelEvent_obj::SYNC_RESIZE,"SYNC_RESIZE");
};

#endif

::hx::Class ModelEvent_obj::__mClass;

static ::String ModelEvent_obj_sStaticFields[] = {
	HX_("UPDATE_ALL",8b,44,21,14),
	HX_("DRAW",04,f4,30,2d),
	HX_("SYNC_RESIZE",98,66,37,09),
	::String(null())
};

void ModelEvent_obj::__register()
{
	ModelEvent_obj _hx_dummy;
	ModelEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("models.ModelEvent",15,35,c5,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModelEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ModelEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModelEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModelEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModelEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModelEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModelEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ModelEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_997593e9e618fe71_8_boot)
HXDLIN(   8)		UPDATE_ALL = HX_("updateAll",98,d6,d6,82);
            	}
{
            	HX_STACKFRAME(&_hx_pos_997593e9e618fe71_10_boot)
HXDLIN(  10)		DRAW = HX_("draw",04,2c,70,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_997593e9e618fe71_12_boot)
HXDLIN(  12)		SYNC_RESIZE = HX_("syncResize",af,3e,18,fb);
            	}
}

} // end namespace models
