#include <hxcpp.h>

#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_row_RowView
#include <elements/row/RowView.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
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
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8b40e65e062c6e0d_8_new,"elements.row.RowView","new",0xa5a45566,"elements.row.RowView.new","elements/row/RowView.hx",8,0xde57e3cc)
HX_LOCAL_STACK_FRAME(_hx_pos_8b40e65e062c6e0d_10_initAfterSettingPartner,"elements.row.RowView","initAfterSettingPartner",0x07df04aa,"elements.row.RowView.initAfterSettingPartner","elements/row/RowView.hx",10,0xde57e3cc)
namespace elements{
namespace row{

void RowView_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_STACKFRAME(&_hx_pos_8b40e65e062c6e0d_8_new)
HXDLIN(   8)		super::__construct(model,controller);
            	}

Dynamic RowView_obj::__CreateEmpty() { return new RowView_obj; }

void *RowView_obj::_hx_vtable = 0;

Dynamic RowView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RowView_obj > _hx_result = new RowView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RowView_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x6547d7c0) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x31b17232 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6547d7c0;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void RowView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_8b40e65e062c6e0d_10_initAfterSettingPartner)
HXLINE(  11)		 ::views::GuiView parentView = ::hx::TCast<  ::views::GuiView >::cast(this->getParent());
HXLINE(  12)		::Array< ::Dynamic> rows = parentView->findChildren(HX_("Row",fa,99,3e,00));
HXLINE(  14)		Float yPos = ( (Float)(0) );
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			while((_g < rows->length)){
HXLINE(  15)				 ::views::GuiComponent row = rows->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				yPos = (yPos + ::models::IModel_obj::getSize(row->getModel())->get_height());
            			}
            		}
HXLINE(  19)		::Dynamic _hx_tmp = this->model;
HXDLIN(  19)		::models::IModel_obj::setPosition(_hx_tmp,::models::IModel_obj::getPosition(this->getModel())->get_x(),yPos);
HXLINE(  20)		this->super::initAfterSettingPartner();
            	}



::hx::ObjectPtr< RowView_obj > RowView_obj::__new(::Dynamic model,::Dynamic controller) {
	::hx::ObjectPtr< RowView_obj > __this = new RowView_obj();
	__this->__construct(model,controller);
	return __this;
}

::hx::ObjectPtr< RowView_obj > RowView_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller) {
	RowView_obj *__this = (RowView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RowView_obj), true, "elements.row.RowView"));
	*(void **)__this = RowView_obj::_hx_vtable;
	__this->__construct(model,controller);
	return __this;
}

RowView_obj::RowView_obj()
{
}

::hx::Val RowView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RowView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RowView_obj_sStaticStorageInfo = 0;
#endif

static ::String RowView_obj_sMemberFields[] = {
	HX_("initAfterSettingPartner",a4,98,49,a4),
	::String(null()) };

::hx::Class RowView_obj::__mClass;

void RowView_obj::__register()
{
	RowView_obj _hx_dummy;
	RowView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.row.RowView",74,6a,f0,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RowView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RowView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RowView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RowView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace row
