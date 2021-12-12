#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_elements_button_Button
#include <elements/button/Button.h>
#endif
#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButton
#include <elements/img_button/ImgButton.h>
#endif
#ifndef INCLUDED_elements_modal_ModalEvent
#include <elements/modal/ModalEvent.h>
#endif
#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarEvent
#include <elements/snackbar/SnackbarEvent.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_scenes_root_Navigator
#include <scenes/root/Navigator.h>
#endif
#ifndef INCLUDED_scenes_root_RootScene
#include <scenes/root/RootScene.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_24_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",24,0x087e5c05)
HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_39_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",39,0x087e5c05)
HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_48_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",48,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_53_showModal,"Main","showModal",0x1b45bd9b,"Main.showModal","Main.hx",53,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_62_showAlert,"Main","showAlert",0x307bf4ca,"Main.showAlert","Main.hx",62,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_24_new)
HXDLIN(  24)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		super::__construct();
HXLINE(  26)		 ::scenes::root::RootScene rootScene =  ::scenes::root::RootScene_obj::__alloc( HX_CTX );
HXLINE(  27)		rootScene->set_visible(true);
HXLINE(  28)		rootScene->setMaxSize(( (Float)(this->stage->stageWidth) ),( (Float)(this->stage->stageHeight) ));
HXLINE(  29)		 ::scenes::root::RootSceneController rootSceneController =  ::scenes::root::RootSceneController_obj::__alloc( HX_CTX ,rootScene);
HXLINE(  30)		 ::scenes::root::RootSceneView rootScene1 =  ::scenes::root::RootSceneView_obj::__alloc( HX_CTX ,rootScene,rootSceneController,this->stage);
HXLINE(  31)		this->addChild(rootScene1);
HXLINE(  32)		::scenes::root::Navigator_obj::open(HX_("Main",59,64,2f,33));
HXLINE(  34)		this->modal = rootScene1->findChildren(HX_("Modal",0d,90,85,9f))->__get(0).StaticCast<  ::views::GuiComponent >();
HXLINE(  35)		::Array< ::Dynamic> cells = rootScene1->findChildrenViaScene(HX_("Main",59,64,2f,33),HX_("TabContext/TabPanel[1]/Grid/Grid",03,1c,cd,53));
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			while((_g < cells->length)){
HXLINE(  36)				 ::views::GuiComponent cell = cells->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				::Array< ::Dynamic> imgButtons = cell->findChildren(HX_("ImgButton",35,26,e9,4a));
HXLINE(  38)				{
HXLINE(  38)					int _g1 = 0;
HXDLIN(  38)					while((_g1 < imgButtons->length)){
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::views::GuiComponent,imgButton, ::Main,_gthis) HXARGC(1)
            						void _hx_run( ::openfl::events::MouseEvent e){
            							HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_39_new)
HXLINE(  39)							 ::Main _gthis1 = _gthis;
HXDLIN(  39)							_gthis1->showModal(imgButton->getModel());
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  38)						 ::views::GuiComponent imgButton = imgButtons->__get(_g1).StaticCast<  ::views::GuiComponent >();
HXDLIN(  38)						_g1 = (_g1 + 1);
HXLINE(  39)						imgButton->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(imgButton,_gthis)),null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE(  43)		this->snackbar = rootScene1->findChildren(HX_("Snackbar",25,fb,e1,79))->__get(0).StaticCast<  ::views::GuiComponent >();
HXLINE(  44)		::Array< ::Dynamic> cells1 = rootScene1->findChildrenViaScene(HX_("Main",59,64,2f,33),HX_("TabContext/TabPanel[2]/Grid/Grid",a2,89,8c,95));
HXLINE(  45)		{
HXLINE(  45)			int _g1 = 0;
HXDLIN(  45)			while((_g1 < cells1->length)){
HXLINE(  45)				 ::views::GuiComponent cell = cells1->__get(_g1).StaticCast<  ::views::GuiComponent >();
HXDLIN(  45)				_g1 = (_g1 + 1);
HXLINE(  46)				::Array< ::Dynamic> buttons = cell->findChildren(HX_("Button",12,d6,74,0e));
HXLINE(  47)				{
HXLINE(  47)					int _g = 0;
HXDLIN(  47)					while((_g < buttons->length)){
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Main,_gthis, ::views::GuiComponent,button) HXARGC(1)
            						void _hx_run( ::openfl::events::MouseEvent e){
            							HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_48_new)
HXLINE(  48)							 ::Main _gthis1 = _gthis;
HXDLIN(  48)							_gthis1->showAlert(button->getModel());
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE(  47)						 ::views::GuiComponent button = buttons->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  47)						_g = (_g + 1);
HXLINE(  48)						button->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_1(_gthis,button)),null(),null(),null());
            					}
            				}
            			}
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::showModal(::Dynamic model){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_53_showModal)
HXLINE(  54)		 ::elements::img_button::ImgButton imgButton = ::hx::TCast<  ::elements::img_button::ImgButton >::cast(model);
HXLINE(  55)		 ::elements::modal::ModalEvent event =  ::elements::modal::ModalEvent_obj::__alloc( HX_CTX ,HX_("showModal",f0,85,bc,3a),null(),null(),null());
HXLINE(  56)		 ::views::GuiComponent imgComponent = this->modal->findChildren(HX_("Row[1]/Image",d9,2a,80,77))->__get(0).StaticCast<  ::views::GuiComponent >();
HXLINE(  57)		 ::elements::image::Image img = ::hx::TCast<  ::elements::image::Image >::cast(imgComponent->getModel());
HXLINE(  58)		img->set_src(imgButton->get_image()->get_src());
HXLINE(  59)		::openfl::events::IEventDispatcher_obj::dispatchEvent(this->modal->getModel(),event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,showModal,(void))

void Main_obj::showAlert(::Dynamic model){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_62_showAlert)
HXLINE(  63)		 ::elements::button::Button button = ::hx::TCast<  ::elements::button::Button >::cast(model);
HXLINE(  64)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  64)		_g->set(HX_("message",c7,35,11,9a),button->get_title());
HXDLIN(  64)		 ::haxe::ds::StringMap data = _g;
HXLINE(  66)		if ((button->get_title().indexOf(HX_("Error",a8,3b,57,06),null()) != -1)) {
HXLINE(  67)			 ::Dynamic v = ::elements::snackbar::Snackbar_obj::ERROR;
HXDLIN(  67)			data->set(HX_("type",ba,f2,08,4d),v);
            		}
            		else {
HXLINE(  68)			if ((button->get_title().indexOf(HX_("Warning",3c,02,1d,d7),null()) != -1)) {
HXLINE(  69)				 ::Dynamic v = ::elements::snackbar::Snackbar_obj::WARNING;
HXDLIN(  69)				data->set(HX_("type",ba,f2,08,4d),v);
            			}
            			else {
HXLINE(  70)				if ((button->get_title().indexOf(HX_("Info",8e,64,94,30),null()) != -1)) {
HXLINE(  71)					 ::Dynamic v = ::elements::snackbar::Snackbar_obj::INFO;
HXDLIN(  71)					data->set(HX_("type",ba,f2,08,4d),v);
            				}
            				else {
HXLINE(  72)					if ((button->get_title().indexOf(HX_("Success",a3,4d,9f,85),null()) != -1)) {
HXLINE(  73)						 ::Dynamic v = ::elements::snackbar::Snackbar_obj::SUCCESS;
HXDLIN(  73)						data->set(HX_("type",ba,f2,08,4d),v);
            					}
            				}
            			}
            		}
HXLINE(  75)		 ::elements::snackbar::SnackbarEvent event =  ::elements::snackbar::SnackbarEvent_obj::__alloc( HX_CTX ,HX_("showSnackbae",15,95,bd,cb),data,null(),null());
HXLINE(  76)		::openfl::events::IEventDispatcher_obj::dispatchEvent(this->snackbar->getModel(),event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,showAlert,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(modal,"modal");
	HX_MARK_MEMBER_NAME(snackbar,"snackbar");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(modal,"modal");
	HX_VISIT_MEMBER_NAME(snackbar,"snackbar");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"modal") ) { return ::hx::Val( modal ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"snackbar") ) { return ::hx::Val( snackbar ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showModal") ) { return ::hx::Val( showModal_dyn() ); }
		if (HX_FIELD_EQ(inName,"showAlert") ) { return ::hx::Val( showAlert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"modal") ) { modal=inValue.Cast<  ::views::GuiComponent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"snackbar") ) { snackbar=inValue.Cast<  ::views::GuiComponent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("modal",2d,20,58,0c));
	outFields->push(HX_("snackbar",05,3f,30,a0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::views::GuiComponent */ ,(int)offsetof(Main_obj,modal),HX_("modal",2d,20,58,0c)},
	{::hx::fsObject /*  ::views::GuiComponent */ ,(int)offsetof(Main_obj,snackbar),HX_("snackbar",05,3f,30,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("modal",2d,20,58,0c),
	HX_("snackbar",05,3f,30,a0),
	HX_("showModal",f0,85,bc,3a),
	HX_("showAlert",1f,bd,f2,4f),
	::String(null()) };

::hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

