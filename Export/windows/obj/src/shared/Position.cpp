#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_12_new,"shared.Position","new",0x8d2fc1a4,"shared.Position.new","shared/Position.hx",12,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_18_get_x,"shared.Position","get_x",0x020e6f93,"shared.Position.get_x","shared/Position.hx",18,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_22_set_x,"shared.Position","set_x",0xeadd659f,"shared.Position.set_x","shared/Position.hx",22,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_26_get_y,"shared.Position","get_y",0x020e6f94,"shared.Position.get_y","shared/Position.hx",26,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_30_set_y,"shared.Position","set_y",0xeadd65a0,"shared.Position.set_y","shared/Position.hx",30,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_34_get_maxWidth,"shared.Position","get_maxWidth",0xd7ff8307,"shared.Position.get_maxWidth","shared/Position.hx",34,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_38_get_maxHeight,"shared.Position","get_maxHeight",0xdde29bc6,"shared.Position.get_maxHeight","shared/Position.hx",38,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_41_setMaxSize,"shared.Position","setMaxSize",0x62bd9d3f,"shared.Position.setMaxSize","shared/Position.hx",41,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_54_setX,"shared.Position","setX",0xffe7bcb2,"shared.Position.setX","shared/Position.hx",54,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_59_setY,"shared.Position","setY",0xffe7bcb3,"shared.Position.setY","shared/Position.hx",59,0x4a6aabeb)
HX_LOCAL_STACK_FRAME(_hx_pos_421c8cbfefa8e94b_68_parse,"shared.Position","parse",0x2e035a77,"shared.Position.parse","shared/Position.hx",68,0x4a6aabeb)
namespace shared{

void Position_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_12_new)
HXLINE(  13)		this->set_x(x);
HXLINE(  14)		this->set_y(y);
            	}

Dynamic Position_obj::__CreateEmpty() { return new Position_obj; }

void *Position_obj::_hx_vtable = 0;

Dynamic Position_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Position_obj > _hx_result = new Position_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Position_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ca180d2;
}

Float Position_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_18_get_x)
HXDLIN(  18)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Position_obj,get_x,return )

Float Position_obj::set_x(Float x){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_22_set_x)
HXDLIN(  22)		return (this->x = x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,set_x,return )

Float Position_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_26_get_y)
HXDLIN(  26)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Position_obj,get_y,return )

Float Position_obj::set_y(Float y){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_30_set_y)
HXDLIN(  30)		return (this->y = y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,set_y,return )

Float Position_obj::get_maxWidth(){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_34_get_maxWidth)
HXDLIN(  34)		return this->maxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Position_obj,get_maxWidth,return )

Float Position_obj::get_maxHeight(){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_38_get_maxHeight)
HXDLIN(  38)		return this->maxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Position_obj,get_maxHeight,return )

void Position_obj::setMaxSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_41_setMaxSize)
HXLINE(  42)		this->maxWidth = w;
HXLINE(  43)		this->maxHeight = h;
HXLINE(  45)		if (::hx::IsNotNull( this->_x )) {
HXLINE(  46)			::String _hx_tmp = this->_x;
HXDLIN(  46)			this->set_x(this->parse(_hx_tmp,this->get_maxWidth()));
            		}
HXLINE(  49)		if (::hx::IsNotNull( this->_y )) {
HXLINE(  50)			::String _hx_tmp = this->_y;
HXDLIN(  50)			this->set_y(this->parse(_hx_tmp,this->get_maxHeight()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Position_obj,setMaxSize,(void))

void Position_obj::setX(::String _x){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_54_setX)
HXLINE(  55)		this->_x = _x;
HXLINE(  56)		this->set_x(this->parse(_x,this->get_maxWidth()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,setX,(void))

void Position_obj::setY(::String _y){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_59_setY)
HXLINE(  60)		this->_y = _y;
HXLINE(  61)		this->set_y(this->parse(_y,this->get_maxHeight()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Position_obj,setY,(void))

Float Position_obj::parse(::String numStr,Float max){
            	HX_STACKFRAME(&_hx_pos_421c8cbfefa8e94b_68_parse)
HXLINE(  69)		Float result = ( (Float)(0) );
HXLINE(  70)		::String lastChar = numStr.charAt((numStr.length - 1));
HXLINE(  72)		if ((lastChar == HX_("%",25,00,00,00))) {
HXLINE(  73)			::String numStrInPer = numStr.substring(0,(numStr.length - 1));
HXLINE(  74)			Float numInPer = ::Std_obj::parseFloat(numStrInPer);
HXLINE(  75)			result = ((max * numInPer) * ((Float)0.01));
            		}
            		else {
HXLINE(  77)			result = ::Std_obj::parseFloat(numStr);
            		}
HXLINE(  80)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Position_obj,parse,return )


::hx::ObjectPtr< Position_obj > Position_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Position_obj > __this = new Position_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Position_obj > Position_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Position_obj *__this = (Position_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Position_obj), true, "shared.Position"));
	*(void **)__this = Position_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Position_obj::Position_obj()
{
}

void Position_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Position);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void Position_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

::hx::Val Position_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_x() : x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_y() : y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return ::hx::Val( _x ); }
		if (HX_FIELD_EQ(inName,"_y") ) { return ::hx::Val( _y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"setX") ) { return ::hx::Val( setX_dyn() ); }
		if (HX_FIELD_EQ(inName,"setY") ) { return ::hx::Val( setY_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxWidth() : maxWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxHeight() : maxHeight ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_maxWidth") ) { return ::hx::Val( get_maxWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_maxHeight") ) { return ::hx::Val( get_maxHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Position_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Position_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("_x",39,53,00,00));
	outFields->push(HX_("_y",3a,53,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Position_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Position_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Position_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsFloat,(int)offsetof(Position_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsString,(int)offsetof(Position_obj,_x),HX_("_x",39,53,00,00)},
	{::hx::fsString,(int)offsetof(Position_obj,_y),HX_("_y",3a,53,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Position_obj_sStaticStorageInfo = 0;
#endif

static ::String Position_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	HX_("_x",39,53,00,00),
	HX_("_y",3a,53,00,00),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_maxWidth",cb,bc,99,29),
	HX_("get_maxHeight",82,ed,3a,f3),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setX",76,92,50,4c),
	HX_("setY",77,92,50,4c),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class Position_obj::__mClass;

void Position_obj::__register()
{
	Position_obj _hx_dummy;
	Position_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.Position",b2,5f,85,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Position_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Position_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Position_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Position_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
