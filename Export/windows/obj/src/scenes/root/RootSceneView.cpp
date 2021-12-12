#include <hxcpp.h>

#ifndef INCLUDED_builders_AppBuilder
#include <builders/AppBuilder.h>
#endif
#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_controllers_IMouseHandler
#include <controllers/IMouseHandler.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarController
#include <elements/snackbar/SnackbarController.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarView
#include <elements/snackbar/SnackbarView.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_scenes_root_NavEvent
#include <scenes/root/NavEvent.h>
#endif
#ifndef INCLUDED_scenes_root_Navigator
#include <scenes/root/Navigator.h>
#endif
#ifndef INCLUDED_scenes_root_RootSceneController
#include <scenes/root/RootSceneController.h>
#endif
#ifndef INCLUDED_scenes_root_RootSceneView
#include <scenes/root/RootSceneView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cfe49ccc335862e4_22_new,"scenes.root.RootSceneView","new",0xf2eac83c,"scenes.root.RootSceneView.new","scenes/root/RootSceneView.hx",22,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_29_findChildrenViaScene,"scenes.root.RootSceneView","findChildrenViaScene",0x859623fa,"scenes.root.RootSceneView.findChildrenViaScene","scenes/root/RootSceneView.hx",29,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_40_init,"scenes.root.RootSceneView","init",0x973d23b4,"scenes.root.RootSceneView.init","scenes/root/RootSceneView.hx",40,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_48_initEventListeners,"scenes.root.RootSceneView","initEventListeners",0xb669f4d9,"scenes.root.RootSceneView.initEventListeners","scenes/root/RootSceneView.hx",48,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_56_onUpdateScene,"scenes.root.RootSceneView","onUpdateScene",0x640a4280,"scenes.root.RootSceneView.onUpdateScene","scenes/root/RootSceneView.hx",56,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_76_onResizeWindow,"scenes.root.RootSceneView","onResizeWindow",0x1cfa4e67,"scenes.root.RootSceneView.onResizeWindow","scenes/root/RootSceneView.hx",76,0x812c2f14)
HX_LOCAL_STACK_FRAME(_hx_pos_cfe49ccc335862e4_80_onClickMouse,"scenes.root.RootSceneView","onClickMouse",0x49795360,"scenes.root.RootSceneView.onClickMouse","scenes/root/RootSceneView.hx",80,0x812c2f14)
namespace scenes{
namespace root{

void RootSceneView_obj::__construct(::Dynamic model,::Dynamic controller, ::openfl::display::Stage target){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_22_new)
HXLINE(  23)		super::__construct(model,controller);
HXLINE(  24)		this->target = target;
HXLINE(  25)		this->init();
HXLINE(  26)		this->initEventListeners();
            	}

Dynamic RootSceneView_obj::__CreateEmpty() { return new RootSceneView_obj; }

void *RootSceneView_obj::_hx_vtable = 0;

Dynamic RootSceneView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RootSceneView_obj > _hx_result = new RootSceneView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RootSceneView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0aec0722) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0aec0722;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1b9649d0 || inClassId==(int)0x1ee7691a;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x31b17232) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

::Array< ::Dynamic> RootSceneView_obj::findChildrenViaScene(::String sceneName,::String path){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_29_findChildrenViaScene)
HXLINE(  30)		::Array< ::Dynamic> scenes = this->findChildren(HX_("Scene",2c,49,ff,0b));
HXLINE(  31)		{
HXLINE(  31)			int _g = 0;
HXDLIN(  31)			while((_g < scenes->length)){
HXLINE(  31)				 ::views::GuiComponent scene = scenes->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  31)				_g = (_g + 1);
HXLINE(  32)				 ::elements::scene::Scene sceneModel = ::hx::TCast<  ::elements::scene::Scene >::cast(scene->getModel());
HXLINE(  33)				if ((sceneModel->get_name() == sceneName)) {
HXLINE(  34)					return scene->findChildren(path);
            				}
            			}
            		}
HXLINE(  37)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(RootSceneView_obj,findChildrenViaScene,return )

void RootSceneView_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_cfe49ccc335862e4_40_init)
HXLINE(  41)		::builders::AppBuilder_obj::load(null())->buildScene(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  42)		 ::elements::snackbar::Snackbar snackbar =  ::elements::snackbar::Snackbar_obj::__alloc( HX_CTX );
HXLINE(  43)		 ::elements::snackbar::SnackbarController controller =  ::elements::snackbar::SnackbarController_obj::__alloc( HX_CTX ,snackbar);
HXLINE(  44)		 ::elements::snackbar::SnackbarView snackbarView =  ::elements::snackbar::SnackbarView_obj::__alloc( HX_CTX ,snackbar,controller);
HXLINE(  45)		this->add(::elements::ElementType_obj::SNACKBAR,snackbarView);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RootSceneView_obj,init,(void))

void RootSceneView_obj::initEventListeners(){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_48_initEventListeners)
HXLINE(  49)		this->target->addEventListener(HX_("resize",f4,59,7b,08),this->onResizeWindow_dyn(),null(),null(),null());
HXLINE(  50)		this->target->addEventListener(HX_("syncResize",af,3e,18,fb),this->resize_dyn(),null(),null(),null());
HXLINE(  51)		this->target->addEventListener(HX_("click",48,7c,5e,48),this->onClickMouse_dyn(),null(),null(),null());
HXLINE(  52)		this->target->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->hover_dyn(),null(),null(),null());
HXLINE(  53)		::scenes::root::Navigator_obj::addNavEventListener(HX_("updateScene",83,42,6a,5e),this->onUpdateScene_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(RootSceneView_obj,initEventListeners,(void))

void RootSceneView_obj::onUpdateScene( ::scenes::root::NavEvent e){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_56_onUpdateScene)
HXLINE(  57)		::String sceneName = e->getSceneName();
HXLINE(  59)		::Array< ::Dynamic> scenes = this->findChildren(HX_("Scene",2c,49,ff,0b));
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			while((_g < scenes->length)){
HXLINE(  61)				 ::views::GuiComponent scene = scenes->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  61)				_g = (_g + 1);
HXLINE(  62)				 ::elements::scene::Scene sceneModel = ::hx::TCast<  ::elements::scene::Scene >::cast(scene->getModel());
HXLINE(  64)				if (scene->get_visible()) {
HXLINE(  65)					scene->hide(null());
            				}
HXLINE(  68)				if ((sceneModel->get_name() == sceneName)) {
HXLINE(  69)					scene->show(null());
HXLINE(  70)					::haxe::Log_obj::trace((sceneName + HX_(" scene is opened.",a3,85,64,51)),::hx::SourceInfo(HX_("Source/scenes/root/RootSceneView.hx",e8,3b,19,86),70,HX_("scenes.root.RootSceneView",4a,3a,63,0d),HX_("onUpdateScene",a4,5f,54,c1)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneView_obj,onUpdateScene,(void))

void RootSceneView_obj::onResizeWindow( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_76_onResizeWindow)
HXDLIN(  76)		::controllers::IController_obj::onResize(this->controller,this->target->stageWidth,this->target->stageHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneView_obj,onResizeWindow,(void))

void RootSceneView_obj::onClickMouse( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_cfe49ccc335862e4_80_onClickMouse)
HXDLIN(  80)		::hx::TCast<  ::scenes::root::RootSceneController >::cast(this->controller)->onClickMouse(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RootSceneView_obj,onClickMouse,(void))


::hx::ObjectPtr< RootSceneView_obj > RootSceneView_obj::__new(::Dynamic model,::Dynamic controller, ::openfl::display::Stage target) {
	::hx::ObjectPtr< RootSceneView_obj > __this = new RootSceneView_obj();
	__this->__construct(model,controller,target);
	return __this;
}

::hx::ObjectPtr< RootSceneView_obj > RootSceneView_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller, ::openfl::display::Stage target) {
	RootSceneView_obj *__this = (RootSceneView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RootSceneView_obj), true, "scenes.root.RootSceneView"));
	*(void **)__this = RootSceneView_obj::_hx_vtable;
	__this->__construct(model,controller,target);
	return __this;
}

RootSceneView_obj::RootSceneView_obj()
{
}

void RootSceneView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RootSceneView);
	HX_MARK_MEMBER_NAME(target,"target");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RootSceneView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RootSceneView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onClickMouse") ) { return ::hx::Val( onClickMouse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onUpdateScene") ) { return ::hx::Val( onUpdateScene_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onResizeWindow") ) { return ::hx::Val( onResizeWindow_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initEventListeners") ) { return ::hx::Val( initEventListeners_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"findChildrenViaScene") ) { return ::hx::Val( findChildrenViaScene_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RootSceneView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RootSceneView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RootSceneView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(RootSceneView_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RootSceneView_obj_sStaticStorageInfo = 0;
#endif

static ::String RootSceneView_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("findChildrenViaScene",56,b3,91,87),
	HX_("init",10,3b,bb,45),
	HX_("initEventListeners",35,b5,2f,ab),
	HX_("onUpdateScene",a4,5f,54,c1),
	HX_("onResizeWindow",c3,b0,89,60),
	HX_("onClickMouse",bc,26,28,25),
	::String(null()) };

::hx::Class RootSceneView_obj::__mClass;

void RootSceneView_obj::__register()
{
	RootSceneView_obj _hx_dummy;
	RootSceneView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.RootSceneView",4a,3a,63,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RootSceneView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RootSceneView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RootSceneView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RootSceneView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scenes
} // end namespace root
