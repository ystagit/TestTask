#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_12_new,"shared.size.Size","new",0x3b8b6017,"shared.size.Size.new","shared/size/Size.hx",12,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_18_get_width,"shared.size.Size","get_width",0x43b0c554,"shared.size.Size.get_width","shared/size/Size.hx",18,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_22_set_width,"shared.size.Size","set_width",0x2701b160,"shared.size.Size.set_width","shared/size/Size.hx",22,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_26_get_height,"shared.size.Size","get_height",0xad4b5cd9,"shared.size.Size.get_height","shared/size/Size.hx",26,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_30_set_height,"shared.size.Size","set_height",0xb0c8fb4d,"shared.size.Size.set_height","shared/size/Size.hx",30,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_34_get_maxWidth,"shared.size.Size","get_maxWidth",0x5db3fe34,"shared.size.Size.get_maxWidth","shared/size/Size.hx",34,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_38_get_maxHeight,"shared.size.Size","get_maxHeight",0x5619e7f9,"shared.size.Size.get_maxHeight","shared/size/Size.hx",38,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_41_setMaxSize,"shared.size.Size","setMaxSize",0xd9db032c,"shared.size.Size.setMaxSize","shared/size/Size.hx",41,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_54_setWidth,"shared.size.Size","setWidth",0xc9e837ed,"shared.size.Size.setWidth","shared/size/Size.hx",54,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_59_setHeight,"shared.size.Size","setHeight",0x97983020,"shared.size.Size.setHeight","shared/size/Size.hx",59,0x6a8d5ed9)
HX_LOCAL_STACK_FRAME(_hx_pos_376ea1d1bc1b5dad_68_parse,"shared.size.Size","parse",0xe159bbaa,"shared.size.Size.parse","shared/size/Size.hx",68,0x6a8d5ed9)
namespace shared{
namespace size{

void Size_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_12_new)
HXLINE(  13)		this->set_width(width);
HXLINE(  14)		this->set_height(height);
            	}

Dynamic Size_obj::__CreateEmpty() { return new Size_obj; }

void *Size_obj::_hx_vtable = 0;

Dynamic Size_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Size_obj > _hx_result = new Size_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Size_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21efcec7;
}

Float Size_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_18_get_width)
HXDLIN(  18)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_width,return )

Float Size_obj::set_width(Float width){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_22_set_width)
HXDLIN(  22)		return (this->width = width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_width,return )

Float Size_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_26_get_height)
HXDLIN(  26)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_height,return )

Float Size_obj::set_height(Float height){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_30_set_height)
HXDLIN(  30)		return (this->height = height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,set_height,return )

Float Size_obj::get_maxWidth(){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_34_get_maxWidth)
HXDLIN(  34)		return this->maxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_maxWidth,return )

Float Size_obj::get_maxHeight(){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_38_get_maxHeight)
HXDLIN(  38)		return this->maxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Size_obj,get_maxHeight,return )

void Size_obj::setMaxSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_41_setMaxSize)
HXLINE(  42)		this->maxWidth = w;
HXLINE(  43)		this->maxHeight = h;
HXLINE(  45)		if (::hx::IsNotNull( this->_width )) {
HXLINE(  46)			::String _hx_tmp = this->_width;
HXDLIN(  46)			this->set_width(this->parse(_hx_tmp,this->get_maxWidth()));
            		}
HXLINE(  49)		if (::hx::IsNotNull( this->_height )) {
HXLINE(  50)			::String _hx_tmp = this->_height;
HXDLIN(  50)			this->set_height(this->parse(_hx_tmp,this->get_maxHeight()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Size_obj,setMaxSize,(void))

void Size_obj::setWidth(::String _width){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_54_setWidth)
HXLINE(  55)		this->_width = _width;
HXLINE(  56)		this->set_width(this->parse(_width,this->get_maxWidth()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,setWidth,(void))

void Size_obj::setHeight(::String _height){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_59_setHeight)
HXLINE(  60)		this->_height = _height;
HXLINE(  61)		this->set_height(this->parse(_height,this->get_maxHeight()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Size_obj,setHeight,(void))

Float Size_obj::parse(::String numStr,Float max){
            	HX_STACKFRAME(&_hx_pos_376ea1d1bc1b5dad_68_parse)
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


HX_DEFINE_DYNAMIC_FUNC2(Size_obj,parse,return )


::hx::ObjectPtr< Size_obj > Size_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Size_obj > __this = new Size_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Size_obj > Size_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Size_obj *__this = (Size_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Size_obj), true, "shared.size.Size"));
	*(void **)__this = Size_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

Size_obj::Size_obj()
{
}

void Size_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Size);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_END_CLASS();
}

void Size_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
}

::hx::Val Size_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxWidth() : maxWidth ); }
		if (HX_FIELD_EQ(inName,"setWidth") ) { return ::hx::Val( setWidth_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxHeight() : maxHeight ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"setHeight") ) { return ::hx::Val( setHeight_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
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

::hx::Val Size_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Size_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Size_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Size_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(Size_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsFloat,(int)offsetof(Size_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsString,(int)offsetof(Size_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsString,(int)offsetof(Size_obj,_height),HX_("_height",86,19,c3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Size_obj_sStaticStorageInfo = 0;
#endif

static ::String Size_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_maxWidth",cb,bc,99,29),
	HX_("get_maxHeight",82,ed,3a,f3),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("setWidth",04,1f,97,d8),
	HX_("setHeight",29,7d,f3,61),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class Size_obj::__mClass;

void Size_obj::__register()
{
	Size_obj _hx_dummy;
	Size_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shared.size.Size",a5,08,0e,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Size_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Size_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Size_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Size_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shared
} // end namespace size
