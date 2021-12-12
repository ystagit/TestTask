#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_column_Column
#include <elements/column/Column.h>
#endif
#ifndef INCLUDED_elements_column_ColumnView
#include <elements/column/ColumnView.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
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
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_24879cf5b2e40461_10_new,"elements.column.ColumnView","new",0xe24f8a0e,"elements.column.ColumnView.new","elements/column/ColumnView.hx",10,0xa500ab02)
HX_LOCAL_STACK_FRAME(_hx_pos_24879cf5b2e40461_13_initAfterSettingPartner,"elements.column.ColumnView","initAfterSettingPartner",0x25577d52,"elements.column.ColumnView.initAfterSettingPartner","elements/column/ColumnView.hx",13,0xa500ab02)
namespace elements{
namespace column{

void ColumnView_obj::__construct( ::elements::column::Column column){
            	HX_STACKFRAME(&_hx_pos_24879cf5b2e40461_10_new)
HXDLIN(  10)		super::__construct(column,null());
            	}

Dynamic ColumnView_obj::__CreateEmpty() { return new ColumnView_obj; }

void *ColumnView_obj::_hx_vtable = 0;

Dynamic ColumnView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColumnView_obj > _hx_result = new ColumnView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColumnView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x1b9649d0) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x1b9649d0;
			}
		} else {
			return inClassId==(int)0x1ee7691a || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x7cd52048;
		}
	}
}

void ColumnView_obj::initAfterSettingPartner(){
            	HX_GC_STACKFRAME(&_hx_pos_24879cf5b2e40461_13_initAfterSettingPartner)
HXLINE(  14)		 ::elements::column::Column column = ::hx::TCast<  ::elements::column::Column >::cast(this->model);
HXLINE(  15)		 ::views::GuiView parentView = ::hx::TCast<  ::views::GuiView >::cast(this->getParent());
HXLINE(  16)		int index = parentView->getChildrenLength(::elements::ElementType_obj::COLUMN);
HXLINE(  17)		column->setSize(((HX_("",00,00,00,00) + (( (Float)(100) ) / ( (Float)(index) ))) + HX_("%",25,00,00,00)),HX_("100%",94,0a,88,20));
HXLINE(  18)		column->setBGColor( ::shared::Color_obj::__alloc( HX_CTX ,::Math_obj::floor((::Math_obj::random() * ( (Float)(255) ))),::Math_obj::floor((::Math_obj::random() * ( (Float)(255) ))),::Math_obj::floor((::Math_obj::random() * ( (Float)(255) ))),255));
HXLINE(  20)		this->super::initAfterSettingPartner();
            	}



::hx::ObjectPtr< ColumnView_obj > ColumnView_obj::__new( ::elements::column::Column column) {
	::hx::ObjectPtr< ColumnView_obj > __this = new ColumnView_obj();
	__this->__construct(column);
	return __this;
}

::hx::ObjectPtr< ColumnView_obj > ColumnView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::column::Column column) {
	ColumnView_obj *__this = (ColumnView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColumnView_obj), true, "elements.column.ColumnView"));
	*(void **)__this = ColumnView_obj::_hx_vtable;
	__this->__construct(column);
	return __this;
}

ColumnView_obj::ColumnView_obj()
{
}

::hx::Val ColumnView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColumnView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ColumnView_obj_sStaticStorageInfo = 0;
#endif

static ::String ColumnView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	::String(null()) };

::hx::Class ColumnView_obj::__mClass;

void ColumnView_obj::__register()
{
	ColumnView_obj _hx_dummy;
	ColumnView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.column.ColumnView",1c,2b,6a,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColumnView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColumnView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColumnView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColumnView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace column
