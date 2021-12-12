#include <hxcpp.h>

#ifndef INCLUDED_elements_snackbar_Snackbar
#include <elements/snackbar/Snackbar.h>
#endif
#ifndef INCLUDED_elements_snackbar_SnackbarEvent
#include <elements/snackbar/SnackbarEvent.h>
#endif
#ifndef INCLUDED_elements_text_Text
#include <elements/text/Text.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_48a31be8a411078b_24_new,"elements.snackbar.Snackbar","new",0x7bef5629,"elements.snackbar.Snackbar.new","elements/snackbar/Snackbar.hx",24,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_38_setSnackbarType,"elements.snackbar.Snackbar","setSnackbarType",0xabc6266a,"elements.snackbar.Snackbar.setSnackbarType","elements/snackbar/Snackbar.hx",38,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_62_show,"elements.snackbar.Snackbar","show",0xf8cc5f14,"elements.snackbar.Snackbar.show","elements/snackbar/Snackbar.hx",62,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_70_get_message,"elements.snackbar.Snackbar","get_message",0x39bf8ca7,"elements.snackbar.Snackbar.get_message","elements/snackbar/Snackbar.hx",70,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_74_setMessage,"elements.snackbar.Snackbar","setMessage",0x089b0f9c,"elements.snackbar.Snackbar.setMessage","elements/snackbar/Snackbar.hx",74,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_78_get_time,"elements.snackbar.Snackbar","get_time",0x33f5692d,"elements.snackbar.Snackbar.get_time","elements/snackbar/Snackbar.hx",78,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_82_set_time,"elements.snackbar.Snackbar","set_time",0xe252c2a1,"elements.snackbar.Snackbar.set_time","elements/snackbar/Snackbar.hx",82,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_85_run,"elements.snackbar.Snackbar","run",0x7bf26d14,"elements.snackbar.Snackbar.run","elements/snackbar/Snackbar.hx",85,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_94_stop,"elements.snackbar.Snackbar","stop",0xf8d57a19,"elements.snackbar.Snackbar.stop","elements/snackbar/Snackbar.hx",94,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_15_boot,"elements.snackbar.Snackbar","boot",0xed950e49,"elements.snackbar.Snackbar.boot","elements/snackbar/Snackbar.hx",15,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_16_boot,"elements.snackbar.Snackbar","boot",0xed950e49,"elements.snackbar.Snackbar.boot","elements/snackbar/Snackbar.hx",16,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_17_boot,"elements.snackbar.Snackbar","boot",0xed950e49,"elements.snackbar.Snackbar.boot","elements/snackbar/Snackbar.hx",17,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_18_boot,"elements.snackbar.Snackbar","boot",0xed950e49,"elements.snackbar.Snackbar.boot","elements/snackbar/Snackbar.hx",18,0xfc953587)
HX_LOCAL_STACK_FRAME(_hx_pos_48a31be8a411078b_19_boot,"elements.snackbar.Snackbar","boot",0xed950e49,"elements.snackbar.Snackbar.boot","elements/snackbar/Snackbar.hx",19,0xfc953587)
namespace elements{
namespace snackbar{

void Snackbar_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_48a31be8a411078b_24_new)
HXLINE(  25)		super::__construct();
HXLINE(  26)		this->set_time(5000);
HXLINE(  27)		this->message =  ::elements::text::Text_obj::__alloc( HX_CTX );
HXLINE(  28)		this->get_message()->set_alignByVer(0);
HXLINE(  29)		this->get_message()->set_alignByHor(3);
HXLINE(  30)		this->get_message()->set_fontSize(16);
HXLINE(  31)		this->get_message()->get_textColor()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  32)		this->get_message()->get_highlight()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  33)		this->get_message()->setPadding(20,0,0,0);
HXLINE(  34)		this->setMessage(HX_("No message!",19,a0,39,37));
            	}

Dynamic Snackbar_obj::__CreateEmpty() { return new Snackbar_obj; }

void *Snackbar_obj::_hx_vtable = 0;

Dynamic Snackbar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Snackbar_obj > _hx_result = new Snackbar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Snackbar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3117369f) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3117369f;
		}
	} else {
		return inClassId==(int)0x465cf661;
	}
}

void Snackbar_obj::setSnackbarType(::String type){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_38_setSnackbarType)
HXDLIN(  38)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==::elements::snackbar::Snackbar_obj::DEFAULT) ){
HXLINE(  56)			this->get_message()->get_textColor()->setColor(::shared::Color_obj::TEXT);
HXLINE(  57)			this->background->setColor(::shared::Color_obj::LIGHT);
HXLINE(  58)			this->get_highlight()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  55)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==::elements::snackbar::Snackbar_obj::ERROR) ){
HXLINE(  40)			this->get_message()->get_textColor()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  41)			this->background->setColor(::shared::Color_obj::ERROR);
HXLINE(  42)			this->get_highlight()->setColor(::shared::Color_obj::ERROR);
HXLINE(  39)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==::elements::snackbar::Snackbar_obj::INFO) ){
HXLINE(  48)			this->get_message()->get_textColor()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  49)			this->background->setColor(::shared::Color_obj::INFO);
HXLINE(  50)			this->get_highlight()->setColor(::shared::Color_obj::INFO);
HXLINE(  47)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==::elements::snackbar::Snackbar_obj::SUCCESS) ){
HXLINE(  52)			this->get_message()->get_textColor()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  53)			this->background->setColor(::shared::Color_obj::SUCCESS);
HXLINE(  54)			this->get_highlight()->setColor(::shared::Color_obj::SUCCESS);
HXLINE(  51)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==::elements::snackbar::Snackbar_obj::WARNING) ){
HXLINE(  44)			this->get_message()->get_textColor()->setColor(::shared::Color_obj::LIGHT);
HXLINE(  45)			this->background->setColor(::shared::Color_obj::WARNING);
HXLINE(  46)			this->get_highlight()->setColor(::shared::Color_obj::WARNING);
HXLINE(  43)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Snackbar_obj,setSnackbarType,(void))

void Snackbar_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_48a31be8a411078b_62_show)
HXLINE(  63)		this->stop();
HXLINE(  64)		this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(0) ));
HXLINE(  65)		this->startTime = ::lime::_hx_system::System_obj::getTimer();
HXLINE(  66)		this->timer->run = this->run_dyn();
            	}


 ::elements::text::Text Snackbar_obj::get_message(){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_70_get_message)
HXDLIN(  70)		return this->message;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Snackbar_obj,get_message,return )

void Snackbar_obj::setMessage(::String message){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_74_setMessage)
HXDLIN(  74)		this->get_message()->set_value(message);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Snackbar_obj,setMessage,(void))

int Snackbar_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_78_get_time)
HXDLIN(  78)		return this->time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Snackbar_obj,get_time,return )

int Snackbar_obj::set_time(int time){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_82_set_time)
HXDLIN(  82)		return (this->time = time);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Snackbar_obj,set_time,return )

void Snackbar_obj::run(){
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_85_run)
HXLINE(  86)		this->super::show();
HXLINE(  87)		int currentTime = ::lime::_hx_system::System_obj::getTimer();
HXLINE(  88)		int _hx_tmp = this->get_time();
HXDLIN(  88)		if ((_hx_tmp < (currentTime - this->startTime))) {
HXLINE(  89)			this->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Snackbar_obj,run,(void))

void Snackbar_obj::stop(){
            	HX_GC_STACKFRAME(&_hx_pos_48a31be8a411078b_94_stop)
HXDLIN(  94)		if (::hx::IsNotNull( this->timer )) {
HXLINE(  95)			this->timer->stop();
HXLINE(  96)			this->timer = null();
HXLINE(  99)			this->dispatchEvent( ::elements::snackbar::SnackbarEvent_obj::__alloc( HX_CTX ,HX_("hideSnackbar",e7,c1,35,61),null(),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Snackbar_obj,stop,(void))

::String Snackbar_obj::ERROR;

::String Snackbar_obj::WARNING;

::String Snackbar_obj::INFO;

::String Snackbar_obj::SUCCESS;

::String Snackbar_obj::DEFAULT;


::hx::ObjectPtr< Snackbar_obj > Snackbar_obj::__new() {
	::hx::ObjectPtr< Snackbar_obj > __this = new Snackbar_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Snackbar_obj > Snackbar_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Snackbar_obj *__this = (Snackbar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Snackbar_obj), true, "elements.snackbar.Snackbar"));
	*(void **)__this = Snackbar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Snackbar_obj::Snackbar_obj()
{
}

void Snackbar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snackbar);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(timer,"timer");
	 ::models::Model_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Snackbar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	 ::models::Model_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Snackbar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_time() : time ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_message() : message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setMessage") ) { return ::hx::Val( setMessage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_message") ) { return ::hx::Val( get_message_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setSnackbarType") ) { return ::hx::Val( setSnackbarType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Snackbar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { outValue = ( INFO ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ( ERROR ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { outValue = ( WARNING ); return true; }
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { outValue = ( SUCCESS ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { outValue = ( DEFAULT ); return true; }
	}
	return false;
}

::hx::Val Snackbar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< int >()) );time=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast<  ::elements::text::Text >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Snackbar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { INFO=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { WARNING=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { SUCCESS=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Snackbar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("timer",c5,bf,35,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Snackbar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::elements::text::Text */ ,(int)offsetof(Snackbar_obj,message),HX_("message",c7,35,11,9a)},
	{::hx::fsInt,(int)offsetof(Snackbar_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsInt,(int)offsetof(Snackbar_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(Snackbar_obj,timer),HX_("timer",c5,bf,35,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Snackbar_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Snackbar_obj::ERROR,HX_("ERROR",a8,03,18,f1)},
	{::hx::fsString,(void *) &Snackbar_obj::WARNING,HX_("WARNING",3c,ae,9f,89)},
	{::hx::fsString,(void *) &Snackbar_obj::INFO,HX_("INFO",6e,00,7c,30)},
	{::hx::fsString,(void *) &Snackbar_obj::SUCCESS,HX_("SUCCESS",a3,f9,21,38)},
	{::hx::fsString,(void *) &Snackbar_obj::DEFAULT,HX_("DEFAULT",a1,ac,97,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Snackbar_obj_sMemberFields[] = {
	HX_("message",c7,35,11,9a),
	HX_("time",0d,cc,fc,4c),
	HX_("startTime",8f,45,f0,05),
	HX_("timer",c5,bf,35,10),
	HX_("setSnackbarType",21,97,54,ee),
	HX_("show",fd,d4,52,4c),
	HX_("get_message",de,95,0b,20),
	HX_("setMessage",45,5a,f0,ec),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("run",4b,e7,56,00),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void Snackbar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snackbar_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(Snackbar_obj::WARNING,"WARNING");
	HX_MARK_MEMBER_NAME(Snackbar_obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(Snackbar_obj::SUCCESS,"SUCCESS");
	HX_MARK_MEMBER_NAME(Snackbar_obj::DEFAULT,"DEFAULT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Snackbar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snackbar_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(Snackbar_obj::WARNING,"WARNING");
	HX_VISIT_MEMBER_NAME(Snackbar_obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(Snackbar_obj::SUCCESS,"SUCCESS");
	HX_VISIT_MEMBER_NAME(Snackbar_obj::DEFAULT,"DEFAULT");
};

#endif

::hx::Class Snackbar_obj::__mClass;

static ::String Snackbar_obj_sStaticFields[] = {
	HX_("ERROR",a8,03,18,f1),
	HX_("WARNING",3c,ae,9f,89),
	HX_("INFO",6e,00,7c,30),
	HX_("SUCCESS",a3,f9,21,38),
	HX_("DEFAULT",a1,ac,97,1b),
	::String(null())
};

void Snackbar_obj::__register()
{
	Snackbar_obj _hx_dummy;
	Snackbar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.snackbar.Snackbar",b7,0d,d5,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Snackbar_obj::__GetStatic;
	__mClass->mSetStaticField = &Snackbar_obj::__SetStatic;
	__mClass->mMarkFunc = Snackbar_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Snackbar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Snackbar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Snackbar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Snackbar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Snackbar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Snackbar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Snackbar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_15_boot)
HXDLIN(  15)		ERROR = HX_("error",c8,cb,29,73);
            	}
{
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_16_boot)
HXDLIN(  16)		WARNING = HX_("warning",5c,da,cb,09);
            	}
{
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_17_boot)
HXDLIN(  17)		INFO = HX_("info",6e,38,bb,45);
            	}
{
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_18_boot)
HXDLIN(  18)		SUCCESS = HX_("success",c3,25,4e,b8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_48a31be8a411078b_19_boot)
HXDLIN(  19)		DEFAULT = HX_("default",c1,d8,c3,9b);
            	}
}

} // end namespace elements
} // end namespace snackbar
