#include <hxcpp.h>

#ifndef INCLUDED_elements_column_Column
#include <elements/column/Column.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_54d86feb5b5039cb_5_new,"elements.column.Column","new",0xd1fd6d89,"elements.column.Column.new","elements/column/Column.hx",5,0xc1509fe7)
namespace elements{
namespace column{

void Column_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_54d86feb5b5039cb_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Column_obj::__CreateEmpty() { return new Column_obj; }

void *Column_obj::_hx_vtable = 0;

Dynamic Column_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Column_obj > _hx_result = new Column_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Column_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x220bd1a7) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x220bd1a7;
		}
	} else {
		return inClassId==(int)0x3117369f;
	}
}


::hx::ObjectPtr< Column_obj > Column_obj::__new() {
	::hx::ObjectPtr< Column_obj > __this = new Column_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Column_obj > Column_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Column_obj *__this = (Column_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Column_obj), true, "elements.column.Column"));
	*(void **)__this = Column_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Column_obj::Column_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Column_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Column_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Column_obj::__mClass;

void Column_obj::__register()
{
	Column_obj _hx_dummy;
	Column_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.column.Column",17,f5,6b,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Column_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Column_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Column_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace column
