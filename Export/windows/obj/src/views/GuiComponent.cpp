#include <hxcpp.h>

#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_19_new,"views.GuiComponent","new",0xacc6dad4,"views.GuiComponent.new","views/GuiComponent.hx",19,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_25_initAfterSettingPartner,"views.GuiComponent","initAfterSettingPartner",0x8fe81518,"views.GuiComponent.initAfterSettingPartner","views/GuiComponent.hx",25,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_28_add,"views.GuiComponent","add",0xacbcfc95,"views.GuiComponent.add","views/GuiComponent.hx",28,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_32_remove,"views.GuiComponent","remove",0x4ac49250,"views.GuiComponent.remove","views/GuiComponent.hx",32,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_35_hover,"views.GuiComponent","hover",0x22867530,"views.GuiComponent.hover","views/GuiComponent.hx",35,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_37_show,"views.GuiComponent","show",0x8488f009,"views.GuiComponent.show","views/GuiComponent.hx",37,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_39_hide,"views.GuiComponent","hide",0x7d444fce,"views.GuiComponent.hide","views/GuiComponent.hx",39,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_41_resize,"views.GuiComponent","resize",0x4eb75000,"views.GuiComponent.resize","views/GuiComponent.hx",41,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_43_change,"views.GuiComponent","change",0xfdae877c,"views.GuiComponent.change","views/GuiComponent.hx",43,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_45_updateAll,"views.GuiComponent","updateAll",0x35e7300c,"views.GuiComponent.updateAll","views/GuiComponent.hx",45,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_48_getChildrenLength,"views.GuiComponent","getChildrenLength",0x7c4fb82f,"views.GuiComponent.getChildrenLength","views/GuiComponent.hx",48,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_52_getChildrenByKey,"views.GuiComponent","getChildrenByKey",0xea1684df,"views.GuiComponent.getChildrenByKey","views/GuiComponent.hx",52,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_57_getChildByIndex,"views.GuiComponent","getChildByIndex",0xb67191a9,"views.GuiComponent.getChildByIndex","views/GuiComponent.hx",57,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_62_findChildren,"views.GuiComponent","findChildren",0x15820da4,"views.GuiComponent.findChildren","views/GuiComponent.hx",62,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_67_getModel,"views.GuiComponent","getModel",0xb1ddc43f,"views.GuiComponent.getModel","views/GuiComponent.hx",67,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_71_getComposite,"views.GuiComponent","getComposite",0xd995b39d,"views.GuiComponent.getComposite","views/GuiComponent.hx",71,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_75_getParent,"views.GuiComponent","getParent",0x1ce4e7d4,"views.GuiComponent.getParent","views/GuiComponent.hx",75,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_78_setParent,"views.GuiComponent","setParent",0x0035d3e0,"views.GuiComponent.setParent","views/GuiComponent.hx",78,0xaa1d843b)
HX_LOCAL_STACK_FRAME(_hx_pos_3ec9a95cc7f9c8d0_88_removePartnerRef,"views.GuiComponent","removePartnerRef",0xc9b2a25b,"views.GuiComponent.removePartnerRef","views/GuiComponent.hx",88,0xaa1d843b)
namespace views{

void GuiComponent_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_19_new)
HXLINE(  20)		super::__construct();
HXLINE(  21)		this->model = model;
HXLINE(  22)		::Dynamic _hx_tmp;
HXDLIN(  22)		if (::hx::IsNotNull( controller )) {
HXLINE(  22)			_hx_tmp = controller;
            		}
            		else {
HXLINE(  22)			_hx_tmp =  ::controllers::BaseController_obj::__alloc( HX_CTX ,model);
            		}
HXDLIN(  22)		this->controller = _hx_tmp;
            	}

Dynamic GuiComponent_obj::__CreateEmpty() { return new GuiComponent_obj; }

void *GuiComponent_obj::_hx_vtable = 0;

Dynamic GuiComponent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GuiComponent_obj > _hx_result = new GuiComponent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GuiComponent_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GuiComponent_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_25_initAfterSettingPartner)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GuiComponent_obj,initAfterSettingPartner,(void))

void GuiComponent_obj::add(::String k, ::views::GuiComponent c){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_28_add)
HXDLIN(  28)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("'add' opertion is not supported.",58,59,eb,0d))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(GuiComponent_obj,add,(void))

void GuiComponent_obj::remove( ::views::GuiComponent c){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_32_remove)
HXDLIN(  32)		HX_STACK_DO_THROW( ::haxe::Exception_obj::__alloc( HX_CTX ,HX_("'remove' opertion is not supported.",29,70,10,d8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,remove,(void))

void GuiComponent_obj::hover( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_35_hover)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,hover,(void))

void GuiComponent_obj::show( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_37_show)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,show,(void))

void GuiComponent_obj::hide( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_39_hide)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,hide,(void))

void GuiComponent_obj::resize( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_41_resize)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,resize,(void))

void GuiComponent_obj::change( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_43_change)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,change,(void))

void GuiComponent_obj::updateAll( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_45_updateAll)
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,updateAll,(void))

int GuiComponent_obj::getChildrenLength(::String k){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_48_getChildrenLength)
HXDLIN(  48)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,getChildrenLength,return )

::Array< ::Dynamic> GuiComponent_obj::getChildrenByKey(::String k){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_52_getChildrenByKey)
HXDLIN(  52)		HX_STACK_DO_THROW( ::haxe::Exception_obj::__alloc( HX_CTX ,HX_("'getChildrenByKey' opertion is not supported.",f8,4a,9e,c0),null(),null()));
HXDLIN(  52)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,getChildrenByKey,return )

 ::views::GuiComponent GuiComponent_obj::getChildByIndex(::String k,int i){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_57_getChildByIndex)
HXDLIN(  57)		HX_STACK_DO_THROW( ::haxe::Exception_obj::__alloc( HX_CTX ,HX_("'getChildByIndex' opertion is not supported.",ec,f7,f4,16),null(),null()));
HXDLIN(  57)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(GuiComponent_obj,getChildByIndex,return )

::Array< ::Dynamic> GuiComponent_obj::findChildren(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_62_findChildren)
HXDLIN(  62)		HX_STACK_DO_THROW( ::haxe::Exception_obj::__alloc( HX_CTX ,HX_("'findChildren' opertion is not supported.",bd,57,4f,46),null(),null()));
HXDLIN(  62)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,findChildren,return )

::Dynamic GuiComponent_obj::getModel(){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_67_getModel)
HXDLIN(  67)		return this->model;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GuiComponent_obj,getModel,return )

 ::views::GuiComposite GuiComponent_obj::getComposite(){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_71_getComposite)
HXDLIN(  71)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GuiComponent_obj,getComposite,return )

 ::views::GuiComposite GuiComponent_obj::getParent(){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_75_getParent)
HXDLIN(  75)		return this->parentNode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GuiComponent_obj,getParent,return )

void GuiComponent_obj::setParent( ::views::GuiComposite parent){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_78_setParent)
HXLINE(  79)		this->parentNode = parent;
HXLINE(  82)		::Dynamic _hx_tmp = this->model;
HXDLIN(  82)		::models::IModel_obj::setParentModel(_hx_tmp,parent->getModel());
HXLINE(  83)		this->initAfterSettingPartner();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComponent_obj,setParent,(void))

void GuiComponent_obj::removePartnerRef(){
            	HX_STACKFRAME(&_hx_pos_3ec9a95cc7f9c8d0_88_removePartnerRef)
HXDLIN(  88)		this->parentNode = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GuiComponent_obj,removePartnerRef,(void))


::hx::ObjectPtr< GuiComponent_obj > GuiComponent_obj::__new(::Dynamic model,::Dynamic controller) {
	::hx::ObjectPtr< GuiComponent_obj > __this = new GuiComponent_obj();
	__this->__construct(model,controller);
	return __this;
}

::hx::ObjectPtr< GuiComponent_obj > GuiComponent_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller) {
	GuiComponent_obj *__this = (GuiComponent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GuiComponent_obj), true, "views.GuiComponent"));
	*(void **)__this = GuiComponent_obj::_hx_vtable;
	__this->__construct(model,controller);
	return __this;
}

GuiComponent_obj::GuiComponent_obj()
{
}

void GuiComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GuiComponent);
	HX_MARK_MEMBER_NAME(parentNode,"parentNode");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(controller,"controller");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GuiComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentNode,"parentNode");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(controller,"controller");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GuiComponent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		if (HX_FIELD_EQ(inName,"hover") ) { return ::hx::Val( hover_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getModel") ) { return ::hx::Val( getModel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateAll") ) { return ::hx::Val( updateAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return ::hx::Val( getParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"setParent") ) { return ::hx::Val( setParent_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentNode") ) { return ::hx::Val( parentNode ); }
		if (HX_FIELD_EQ(inName,"controller") ) { return ::hx::Val( controller ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findChildren") ) { return ::hx::Val( findChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComposite") ) { return ::hx::Val( getComposite_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getChildByIndex") ) { return ::hx::Val( getChildByIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getChildrenByKey") ) { return ::hx::Val( getChildrenByKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"removePartnerRef") ) { return ::hx::Val( removePartnerRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getChildrenLength") ) { return ::hx::Val( getChildrenLength_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GuiComponent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentNode") ) { parentNode=inValue.Cast<  ::views::GuiComposite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GuiComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentNode",4c,18,1c,e8));
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("controller",9c,98,be,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GuiComponent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::views::GuiComposite */ ,(int)offsetof(GuiComponent_obj,parentNode),HX_("parentNode",4c,18,1c,e8)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(GuiComponent_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(GuiComponent_obj,controller),HX_("controller",9c,98,be,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GuiComponent_obj_sStaticStorageInfo = 0;
#endif

static ::String GuiComponent_obj_sMemberFields[] = {
	HX_("parentNode",4c,18,1c,e8),
	HX_("model",a9,23,58,0c),
	HX_("controller",9c,98,be,04),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("hover",bc,e5,64,2b),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("resize",f4,59,7b,08),
	HX_("change",70,91,72,b7),
	HX_("updateAll",98,d6,d6,82),
	HX_("getChildrenLength",bb,ca,5a,b6),
	HX_("getChildrenByKey",d3,07,9e,a6),
	HX_("getChildByIndex",35,a9,5e,89),
	HX_("findChildren",98,06,e8,5d),
	HX_("getModel",33,33,2f,6c),
	HX_("getComposite",91,ac,fb,21),
	HX_("getParent",60,8e,d4,69),
	HX_("setParent",6c,7a,25,4d),
	HX_("removePartnerRef",4f,25,3a,86),
	::String(null()) };

::hx::Class GuiComponent_obj::__mClass;

void GuiComponent_obj::__register()
{
	GuiComponent_obj _hx_dummy;
	GuiComponent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("views.GuiComponent",e2,20,ec,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GuiComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GuiComponent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GuiComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GuiComponent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace views
