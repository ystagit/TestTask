#include <hxcpp.h>

#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f0db238aae4be74_26_new,"shared.Color","new",0x5a2c68ac,"shared.Color.new","shared/Color.hx",26,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_34_getColor,"shared.Color","getColor",0x43535521,"shared.Color.getColor","shared/Color.hx",34,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_38_getAlpha,"shared.Color","getAlpha",0x1a8d8b1c,"shared.Color.getAlpha","shared/Color.hx",38,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_41_setColor,"shared.Color","setColor",0xf1b0ae95,"shared.Color.setColor","shared/Color.hx",41,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_48_rgb,"shared.Color","rgb",0x5a2f7359,"shared.Color.rgb","shared/Color.hx",48,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_54_rgba,"shared.Color","rgba",0x8f557ae8,"shared.Color.rgba","shared/Color.hx",54,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_62_get_r,"shared.Color","get_r",0x84c8e895,"shared.Color.get_r","shared/Color.hx",62,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_66_set_r,"shared.Color","set_r",0x6d97dea1,"shared.Color.set_r","shared/Color.hx",66,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_70_get_g,"shared.Color","get_g",0x84c8e88a,"shared.Color.get_g","shared/Color.hx",70,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_74_set_g,"shared.Color","set_g",0x6d97de96,"shared.Color.set_g","shared/Color.hx",74,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_78_get_b,"shared.Color","get_b",0x84c8e885,"shared.Color.get_b","shared/Color.hx",78,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_82_set_b,"shared.Color","set_b",0x6d97de91,"shared.Color.set_b","shared/Color.hx",82,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_86_get_a,"shared.Color","get_a",0x84c8e884,"shared.Color.get_a","shared/Color.hx",86,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_90_set_a,"shared.Color","set_a",0x6d97de90,"shared.Color.set_a","shared/Color.hx",90,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_23_create,"shared.Color","create",0x83e20630,"shared.Color.create","shared/Color.hx",23,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_5_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",5,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_6_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",6,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_7_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",7,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_8_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",8,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_9_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",9,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_10_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",10,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_11_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",11,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_12_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",12,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_13_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",13,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_14_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",14,0xcb4fb945)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0db238aae4be74_15_boot,"shared.Color","boot",0x84c82e66,"shared.Color.boot","shared/Color.hx",15,0xcb4fb945)
namespace shared{

void Color_obj::__construct(int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_26_new)
HXLINE(  27)		this->set_r(r);
HXLINE(  28)		this->set_g(g);
HXLINE(  29)		this->set_b(b);
HXLINE(  30)		this->set_a(a);
            	}

Dynamic Color_obj::__CreateEmpty() { return new Color_obj; }

void *Color_obj::_hx_vtable = 0;

Dynamic Color_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Color_obj > _hx_result = new Color_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Color_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6800bbbe;
}

int Color_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_34_getColor)
HXDLIN(  34)		int _hx_tmp = (this->get_r() * 65536);
HXDLIN(  34)		int _hx_tmp1 = (_hx_tmp + (this->get_g() * 256));
HXDLIN(  34)		return (_hx_tmp1 + this->get_b());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,getColor,return )

Float Color_obj::getAlpha(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_38_getAlpha)
HXDLIN(  38)		return (( (Float)(this->get_a()) ) / ( (Float)(255) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,getAlpha,return )

void Color_obj::setColor( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_41_setColor)
HXLINE(  42)		this->set_r(color->get_r());
HXLINE(  43)		this->set_g(color->get_g());
HXLINE(  44)		this->set_b(color->get_b());
HXLINE(  45)		this->set_a(color->get_a());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,setColor,(void))

void Color_obj::rgb(int r,int g,int b){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_48_rgb)
HXLINE(  49)		this->set_r(r);
HXLINE(  50)		this->set_g(g);
HXLINE(  51)		this->set_b(b);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Color_obj,rgb,(void))

void Color_obj::rgba(int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_54_rgba)
HXLINE(  55)		this->set_r(r);
HXLINE(  56)		this->set_g(g);
HXLINE(  57)		this->set_b(b);
HXLINE(  58)		this->set_a(a);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,rgba,(void))

int Color_obj::get_r(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_62_get_r)
HXDLIN(  62)		return this->r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_r,return )

int Color_obj::set_r(int r){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_66_set_r)
HXDLIN(  66)		return (this->r = r);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_r,return )

int Color_obj::get_g(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_70_get_g)
HXDLIN(  70)		return this->g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_g,return )

int Color_obj::set_g(int g){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_74_set_g)
HXDLIN(  74)		return (this->g = g);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_g,return )

int Color_obj::get_b(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_78_get_b)
HXDLIN(  78)		return this->b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_b,return )

int Color_obj::set_b(int b){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_82_set_b)
HXDLIN(  82)		return (this->b = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_b,return )

int Color_obj::get_a(){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_86_get_a)
HXDLIN(  86)		return this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,get_a,return )

int Color_obj::set_a(int a){
            	HX_STACKFRAME(&_hx_pos_4f0db238aae4be74_90_set_a)
HXDLIN(  90)		return (this->a = a);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_a,return )

 ::shared::Color Color_obj::LIGHT;

 ::shared::Color Color_obj::BLACK;

 ::shared::Color Color_obj::PRIMARY;

 ::shared::Color Color_obj::GREY;

 ::shared::Color Color_obj::TEXT;

 ::shared::Color Color_obj::HIGHLIGHT_PRIMARY;

 ::shared::Color Color_obj::TRANSPERNCY;

 ::shared::Color Color_obj::ERROR;

 ::shared::Color Color_obj::WARNING;

 ::shared::Color Color_obj::INFO;

 ::shared::Color Color_obj::SUCCESS;

 ::shared::Color Color_obj::create( ::shared::Color color){
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_23_create)
HXDLIN(  23)		int _hx_tmp = color->get_r();
HXDLIN(  23)		int _hx_tmp1 = color->get_g();
HXDLIN(  23)		int _hx_tmp2 = color->get_b();
HXDLIN(  23)		return  ::shared::Color_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,color->get_a());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,create,return )


Color_obj::Color_obj()
{
}

::hx::Val Color_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_r() : r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_g() : g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_b() : b ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_a() : a ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return ::hx::Val( rgb_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rgba") ) { return ::hx::Val( rgba_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_r") ) { return ::hx::Val( get_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_r") ) { return ::hx::Val( set_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g") ) { return ::hx::Val( get_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return ::hx::Val( set_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_b") ) { return ::hx::Val( get_b_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return ::hx::Val( set_b_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_a") ) { return ::hx::Val( get_a_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_a") ) { return ::hx::Val( set_a_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return ::hx::Val( getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Color_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GREY") ) { outValue = ( GREY ); return true; }
		if (HX_FIELD_EQ(inName,"TEXT") ) { outValue = ( TEXT ); return true; }
		if (HX_FIELD_EQ(inName,"INFO") ) { outValue = ( INFO ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { outValue = ( LIGHT ); return true; }
		if (HX_FIELD_EQ(inName,"BLACK") ) { outValue = ( BLACK ); return true; }
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ( ERROR ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PRIMARY") ) { outValue = ( PRIMARY ); return true; }
		if (HX_FIELD_EQ(inName,"WARNING") ) { outValue = ( WARNING ); return true; }
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { outValue = ( SUCCESS ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPERNCY") ) { outValue = ( TRANSPERNCY ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT_PRIMARY") ) { outValue = ( HIGHLIGHT_PRIMARY ); return true; }
	}
	return false;
}

::hx::Val Color_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_r(inValue.Cast< int >()) );r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_g(inValue.Cast< int >()) );g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_b(inValue.Cast< int >()) );b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_a(inValue.Cast< int >()) );a=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Color_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GREY") ) { GREY=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"TEXT") ) { TEXT=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"INFO") ) { INFO=ioValue.Cast<  ::shared::Color >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { LIGHT=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"BLACK") ) { BLACK=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast<  ::shared::Color >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PRIMARY") ) { PRIMARY=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"WARNING") ) { WARNING=ioValue.Cast<  ::shared::Color >(); return true; }
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { SUCCESS=ioValue.Cast<  ::shared::Color >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPERNCY") ) { TRANSPERNCY=ioValue.Cast<  ::shared::Color >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT_PRIMARY") ) { HIGHLIGHT_PRIMARY=ioValue.Cast<  ::shared::Color >(); return true; }
	}
	return false;
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Color_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Color_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsInt,(int)offsetof(Color_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsInt,(int)offsetof(Color_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(Color_obj,a),HX_("a",61,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Color_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::LIGHT,HX_("LIGHT",b6,c8,ea,f2)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::BLACK,HX_("BLACK",9f,0d,e0,32)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::PRIMARY,HX_("PRIMARY",a2,13,50,03)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::GREY,HX_("GREY",5f,9b,2c,2f)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::TEXT,HX_("TEXT",ad,94,ba,37)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::HIGHLIGHT_PRIMARY,HX_("HIGHLIGHT_PRIMARY",37,67,73,6f)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::TRANSPERNCY,HX_("TRANSPERNCY",ef,53,97,46)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::ERROR,HX_("ERROR",a8,03,18,f1)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::WARNING,HX_("WARNING",3c,ae,9f,89)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::INFO,HX_("INFO",6e,00,7c,30)},
	{::hx::fsObject /*  ::shared::Color */ ,(void *) &Color_obj::SUCCESS,HX_("SUCCESS",a3,f9,21,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Color_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("a",61,00,00,00),
	HX_("getColor",ed,80,33,aa),
	HX_("getAlpha",e8,b6,6d,81),
	HX_("setColor",61,da,90,58),
	HX_("rgb",0d,db,56,00),
	HX_("rgba",b4,d0,a8,4b),
	HX_("get_r",49,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	HX_("get_g",3e,a5,60,91),
	HX_("set_g",4a,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	::String(null()) };

static void Color_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::LIGHT,"LIGHT");
	HX_MARK_MEMBER_NAME(Color_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(Color_obj::PRIMARY,"PRIMARY");
	HX_MARK_MEMBER_NAME(Color_obj::GREY,"GREY");
	HX_MARK_MEMBER_NAME(Color_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(Color_obj::HIGHLIGHT_PRIMARY,"HIGHLIGHT_PRIMARY");
	HX_MARK_MEMBER_NAME(Color_obj::TRANSPERNCY,"TRANSPERNCY");
	HX_MARK_MEMBER_NAME(Color_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(Color_obj::WARNING,"WARNING");
	HX_MARK_MEMBER_NAME(Color_obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(Color_obj::SUCCESS,"SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Color_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_obj::LIGHT,"LIGHT");
	HX_VISIT_MEMBER_NAME(Color_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(Color_obj::PRIMARY,"PRIMARY");
	HX_VISIT_MEMBER_NAME(Color_obj::GREY,"GREY");
	HX_VISIT_MEMBER_NAME(Color_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(Color_obj::HIGHLIGHT_PRIMARY,"HIGHLIGHT_PRIMARY");
	HX_VISIT_MEMBER_NAME(Color_obj::TRANSPERNCY,"TRANSPERNCY");
	HX_VISIT_MEMBER_NAME(Color_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(Color_obj::WARNING,"WARNING");
	HX_VISIT_MEMBER_NAME(Color_obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(Color_obj::SUCCESS,"SUCCESS");
};

#endif

::hx::Class Color_obj::__mClass;

static ::String Color_obj_sStaticFields[] = {
	HX_("LIGHT",b6,c8,ea,f2),
	HX_("BLACK",9f,0d,e0,32),
	HX_("PRIMARY",a2,13,50,03),
	HX_("GREY",5f,9b,2c,2f),
	HX_("TEXT",ad,94,ba,37),
	HX_("HIGHLIGHT_PRIMARY",37,67,73,6f),
	HX_("TRANSPERNCY",ef,53,97,46),
	HX_("ERROR",a8,03,18,f1),
	HX_("WARNING",3c,ae,9f,89),
	HX_("INFO",6e,00,7c,30),
	HX_("SUCCESS",a3,f9,21,38),
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void Color_obj::__register()
{
	Color_obj _hx_dummy;
	Color_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.Color",ba,e2,4f,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_obj::__GetStatic;
	__mClass->mSetStaticField = &Color_obj::__SetStatic;
	__mClass->mMarkFunc = Color_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Color_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Color_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Color_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Color_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Color_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_5_boot)
HXDLIN(   5)		LIGHT =  ::shared::Color_obj::__alloc( HX_CTX ,255,255,255,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_6_boot)
HXDLIN(   6)		BLACK =  ::shared::Color_obj::__alloc( HX_CTX ,0,0,0,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_7_boot)
HXDLIN(   7)		PRIMARY =  ::shared::Color_obj::__alloc( HX_CTX ,117,125,232,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_8_boot)
HXDLIN(   8)		GREY =  ::shared::Color_obj::__alloc( HX_CTX ,189,189,189,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_9_boot)
HXDLIN(   9)		TEXT =  ::shared::Color_obj::__alloc( HX_CTX ,54,54,54,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_10_boot)
HXDLIN(  10)		HIGHLIGHT_PRIMARY =  ::shared::Color_obj::__alloc( HX_CTX ,23,105,170,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_11_boot)
HXDLIN(  11)		TRANSPERNCY =  ::shared::Color_obj::__alloc( HX_CTX ,0,0,0,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_12_boot)
HXDLIN(  12)		ERROR =  ::shared::Color_obj::__alloc( HX_CTX ,211,47,47,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_13_boot)
HXDLIN(  13)		WARNING =  ::shared::Color_obj::__alloc( HX_CTX ,237,108,2,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_14_boot)
HXDLIN(  14)		INFO =  ::shared::Color_obj::__alloc( HX_CTX ,2,136,209,255);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4f0db238aae4be74_15_boot)
HXDLIN(  15)		SUCCESS =  ::shared::Color_obj::__alloc( HX_CTX ,46,125,50,255);
            	}
}

} // end namespace shared
