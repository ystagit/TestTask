#include <hxcpp.h>

#ifndef INCLUDED_elements_Elements
#include <elements/Elements.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_5_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",5,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_6_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",6,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_7_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",7,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_8_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",8,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_9_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",9,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_10_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",10,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_11_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",11,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_12_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",12,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_13_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",13,0xabaf6daf)
HX_LOCAL_STACK_FRAME(_hx_pos_ab501a2d89d32a2d_14_boot,"elements.Elements","boot",0xc1fe6932,"elements.Elements.boot","elements/Elements.hx",14,0xabaf6daf)
namespace elements{

void Elements_obj::__construct() { }

Dynamic Elements_obj::__CreateEmpty() { return new Elements_obj; }

void *Elements_obj::_hx_vtable = 0;

Dynamic Elements_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Elements_obj > _hx_result = new Elements_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Elements_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bf788ce;
}

::String Elements_obj::SCENE;

::String Elements_obj::TAB_CONTEXT;

::String Elements_obj::TAB_PANEL;

::String Elements_obj::TAB_LIST;

::String Elements_obj::TAB;

::String Elements_obj::TEXT;

::String Elements_obj::ROW;

::String Elements_obj::COLUMN;

::String Elements_obj::GRID;

::String Elements_obj::BUTTON;


Elements_obj::Elements_obj()
{
}

bool Elements_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TAB") ) { outValue = ( TAB ); return true; }
		if (HX_FIELD_EQ(inName,"ROW") ) { outValue = ( ROW ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"TEXT") ) { outValue = ( TEXT ); return true; }
		if (HX_FIELD_EQ(inName,"GRID") ) { outValue = ( GRID ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCENE") ) { outValue = ( SCENE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"COLUMN") ) { outValue = ( COLUMN ); return true; }
		if (HX_FIELD_EQ(inName,"BUTTON") ) { outValue = ( BUTTON ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TAB_LIST") ) { outValue = ( TAB_LIST ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TAB_PANEL") ) { outValue = ( TAB_PANEL ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TAB_CONTEXT") ) { outValue = ( TAB_CONTEXT ); return true; }
	}
	return false;
}

bool Elements_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TAB") ) { TAB=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ROW") ) { ROW=ioValue.Cast< ::String >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"TEXT") ) { TEXT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"GRID") ) { GRID=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCENE") ) { SCENE=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"COLUMN") ) { COLUMN=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"BUTTON") ) { BUTTON=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TAB_LIST") ) { TAB_LIST=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TAB_PANEL") ) { TAB_PANEL=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TAB_CONTEXT") ) { TAB_CONTEXT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Elements_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Elements_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Elements_obj::SCENE,HX_("SCENE",2c,11,c0,f6)},
	{::hx::fsString,(void *) &Elements_obj::TAB_CONTEXT,HX_("TAB_CONTEXT",85,76,24,51)},
	{::hx::fsString,(void *) &Elements_obj::TAB_PANEL,HX_("TAB_PANEL",1a,06,b6,ac)},
	{::hx::fsString,(void *) &Elements_obj::TAB_LIST,HX_("TAB_LIST",e8,69,93,9c)},
	{::hx::fsString,(void *) &Elements_obj::TAB,HX_("TAB",35,f6,3f,00)},
	{::hx::fsString,(void *) &Elements_obj::TEXT,HX_("TEXT",ad,94,ba,37)},
	{::hx::fsString,(void *) &Elements_obj::ROW,HX_("ROW",fa,7d,3e,00)},
	{::hx::fsString,(void *) &Elements_obj::COLUMN,HX_("COLUMN",d6,fa,0d,79)},
	{::hx::fsString,(void *) &Elements_obj::GRID,HX_("GRID",c6,9e,2c,2f)},
	{::hx::fsString,(void *) &Elements_obj::BUTTON,HX_("BUTTON",f2,0d,63,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Elements_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Elements_obj::SCENE,"SCENE");
	HX_MARK_MEMBER_NAME(Elements_obj::TAB_CONTEXT,"TAB_CONTEXT");
	HX_MARK_MEMBER_NAME(Elements_obj::TAB_PANEL,"TAB_PANEL");
	HX_MARK_MEMBER_NAME(Elements_obj::TAB_LIST,"TAB_LIST");
	HX_MARK_MEMBER_NAME(Elements_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Elements_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(Elements_obj::ROW,"ROW");
	HX_MARK_MEMBER_NAME(Elements_obj::COLUMN,"COLUMN");
	HX_MARK_MEMBER_NAME(Elements_obj::GRID,"GRID");
	HX_MARK_MEMBER_NAME(Elements_obj::BUTTON,"BUTTON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Elements_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Elements_obj::SCENE,"SCENE");
	HX_VISIT_MEMBER_NAME(Elements_obj::TAB_CONTEXT,"TAB_CONTEXT");
	HX_VISIT_MEMBER_NAME(Elements_obj::TAB_PANEL,"TAB_PANEL");
	HX_VISIT_MEMBER_NAME(Elements_obj::TAB_LIST,"TAB_LIST");
	HX_VISIT_MEMBER_NAME(Elements_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Elements_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(Elements_obj::ROW,"ROW");
	HX_VISIT_MEMBER_NAME(Elements_obj::COLUMN,"COLUMN");
	HX_VISIT_MEMBER_NAME(Elements_obj::GRID,"GRID");
	HX_VISIT_MEMBER_NAME(Elements_obj::BUTTON,"BUTTON");
};

#endif

::hx::Class Elements_obj::__mClass;

static ::String Elements_obj_sStaticFields[] = {
	HX_("SCENE",2c,11,c0,f6),
	HX_("TAB_CONTEXT",85,76,24,51),
	HX_("TAB_PANEL",1a,06,b6,ac),
	HX_("TAB_LIST",e8,69,93,9c),
	HX_("TAB",35,f6,3f,00),
	HX_("TEXT",ad,94,ba,37),
	HX_("ROW",fa,7d,3e,00),
	HX_("COLUMN",d6,fa,0d,79),
	HX_("GRID",c6,9e,2c,2f),
	HX_("BUTTON",f2,0d,63,8c),
	::String(null())
};

void Elements_obj::__register()
{
	Elements_obj _hx_dummy;
	Elements_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.Elements",6e,9b,db,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Elements_obj::__GetStatic;
	__mClass->mSetStaticField = &Elements_obj::__SetStatic;
	__mClass->mMarkFunc = Elements_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Elements_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Elements_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Elements_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Elements_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Elements_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Elements_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_5_boot)
HXDLIN(   5)		SCENE = HX_("Scene",2c,49,ff,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_6_boot)
HXDLIN(   6)		TAB_CONTEXT = HX_("TabContext",3a,8c,00,d2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_7_boot)
HXDLIN(   7)		TAB_PANEL = HX_("TabPanel",8f,b8,a8,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_8_boot)
HXDLIN(   8)		TAB_LIST = HX_("TabList",33,19,7a,0d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_9_boot)
HXDLIN(   9)		TAB = HX_("Tab",35,12,40,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_10_boot)
HXDLIN(  10)		TEXT = HX_("Text",cd,f8,d2,37);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_11_boot)
HXDLIN(  11)		ROW = HX_("Row",fa,99,3e,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_12_boot)
HXDLIN(  12)		COLUMN = HX_("Column",f6,c2,1f,fb);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_13_boot)
HXDLIN(  13)		GRID = HX_("Grid",e6,02,45,2f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ab501a2d89d32a2d_14_boot)
HXDLIN(  14)		BUTTON = HX_("Button",12,d6,74,0e);
            	}
}

} // end namespace elements
