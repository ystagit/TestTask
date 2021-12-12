#include <hxcpp.h>

#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_5_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",5,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_6_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",6,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_7_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",7,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_8_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",8,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_9_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",9,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_10_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",10,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_11_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",11,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_12_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",12,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_13_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",13,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_14_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",14,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_15_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",15,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_16_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",16,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_17_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",17,0x8e129120)
HX_LOCAL_STACK_FRAME(_hx_pos_62fe12b8dd33a515_18_boot,"elements.ElementType","boot",0x9dbf8c41,"elements.ElementType.boot","elements/ElementType.hx",18,0x8e129120)
namespace elements{

void ElementType_obj::__construct() { }

Dynamic ElementType_obj::__CreateEmpty() { return new ElementType_obj; }

void *ElementType_obj::_hx_vtable = 0;

Dynamic ElementType_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ElementType_obj > _hx_result = new ElementType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ElementType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x293d8d7b;
}

::String ElementType_obj::SNACKBAR;

::String ElementType_obj::MODAL;

::String ElementType_obj::SCENE;

::String ElementType_obj::TAB_CONTEXT;

::String ElementType_obj::TAB_PANEL;

::String ElementType_obj::TAB_LIST;

::String ElementType_obj::TAB;

::String ElementType_obj::TEXT;

::String ElementType_obj::IMAGE;

::String ElementType_obj::ROW;

::String ElementType_obj::COLUMN;

::String ElementType_obj::GRID;

::String ElementType_obj::BUTTON;

::String ElementType_obj::IMG_BUTTON;


ElementType_obj::ElementType_obj()
{
}

bool ElementType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"MODAL") ) { outValue = ( MODAL ); return true; }
		if (HX_FIELD_EQ(inName,"SCENE") ) { outValue = ( SCENE ); return true; }
		if (HX_FIELD_EQ(inName,"IMAGE") ) { outValue = ( IMAGE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"COLUMN") ) { outValue = ( COLUMN ); return true; }
		if (HX_FIELD_EQ(inName,"BUTTON") ) { outValue = ( BUTTON ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SNACKBAR") ) { outValue = ( SNACKBAR ); return true; }
		if (HX_FIELD_EQ(inName,"TAB_LIST") ) { outValue = ( TAB_LIST ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TAB_PANEL") ) { outValue = ( TAB_PANEL ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"IMG_BUTTON") ) { outValue = ( IMG_BUTTON ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TAB_CONTEXT") ) { outValue = ( TAB_CONTEXT ); return true; }
	}
	return false;
}

bool ElementType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"MODAL") ) { MODAL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SCENE") ) { SCENE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"IMAGE") ) { IMAGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"COLUMN") ) { COLUMN=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"BUTTON") ) { BUTTON=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SNACKBAR") ) { SNACKBAR=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_LIST") ) { TAB_LIST=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TAB_PANEL") ) { TAB_PANEL=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"IMG_BUTTON") ) { IMG_BUTTON=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TAB_CONTEXT") ) { TAB_CONTEXT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ElementType_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ElementType_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ElementType_obj::SNACKBAR,HX_("SNACKBAR",05,cf,b5,f9)},
	{::hx::fsString,(void *) &ElementType_obj::MODAL,HX_("MODAL",0d,58,46,8a)},
	{::hx::fsString,(void *) &ElementType_obj::SCENE,HX_("SCENE",2c,11,c0,f6)},
	{::hx::fsString,(void *) &ElementType_obj::TAB_CONTEXT,HX_("TAB_CONTEXT",85,76,24,51)},
	{::hx::fsString,(void *) &ElementType_obj::TAB_PANEL,HX_("TAB_PANEL",1a,06,b6,ac)},
	{::hx::fsString,(void *) &ElementType_obj::TAB_LIST,HX_("TAB_LIST",e8,69,93,9c)},
	{::hx::fsString,(void *) &ElementType_obj::TAB,HX_("TAB",35,f6,3f,00)},
	{::hx::fsString,(void *) &ElementType_obj::TEXT,HX_("TEXT",ad,94,ba,37)},
	{::hx::fsString,(void *) &ElementType_obj::IMAGE,HX_("IMAGE",3b,57,57,3b)},
	{::hx::fsString,(void *) &ElementType_obj::ROW,HX_("ROW",fa,7d,3e,00)},
	{::hx::fsString,(void *) &ElementType_obj::COLUMN,HX_("COLUMN",d6,fa,0d,79)},
	{::hx::fsString,(void *) &ElementType_obj::GRID,HX_("GRID",c6,9e,2c,2f)},
	{::hx::fsString,(void *) &ElementType_obj::BUTTON,HX_("BUTTON",f2,0d,63,8c)},
	{::hx::fsString,(void *) &ElementType_obj::IMG_BUTTON,HX_("IMG_BUTTON",0e,8a,b0,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ElementType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElementType_obj::SNACKBAR,"SNACKBAR");
	HX_MARK_MEMBER_NAME(ElementType_obj::MODAL,"MODAL");
	HX_MARK_MEMBER_NAME(ElementType_obj::SCENE,"SCENE");
	HX_MARK_MEMBER_NAME(ElementType_obj::TAB_CONTEXT,"TAB_CONTEXT");
	HX_MARK_MEMBER_NAME(ElementType_obj::TAB_PANEL,"TAB_PANEL");
	HX_MARK_MEMBER_NAME(ElementType_obj::TAB_LIST,"TAB_LIST");
	HX_MARK_MEMBER_NAME(ElementType_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(ElementType_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(ElementType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(ElementType_obj::ROW,"ROW");
	HX_MARK_MEMBER_NAME(ElementType_obj::COLUMN,"COLUMN");
	HX_MARK_MEMBER_NAME(ElementType_obj::GRID,"GRID");
	HX_MARK_MEMBER_NAME(ElementType_obj::BUTTON,"BUTTON");
	HX_MARK_MEMBER_NAME(ElementType_obj::IMG_BUTTON,"IMG_BUTTON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ElementType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElementType_obj::SNACKBAR,"SNACKBAR");
	HX_VISIT_MEMBER_NAME(ElementType_obj::MODAL,"MODAL");
	HX_VISIT_MEMBER_NAME(ElementType_obj::SCENE,"SCENE");
	HX_VISIT_MEMBER_NAME(ElementType_obj::TAB_CONTEXT,"TAB_CONTEXT");
	HX_VISIT_MEMBER_NAME(ElementType_obj::TAB_PANEL,"TAB_PANEL");
	HX_VISIT_MEMBER_NAME(ElementType_obj::TAB_LIST,"TAB_LIST");
	HX_VISIT_MEMBER_NAME(ElementType_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(ElementType_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(ElementType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(ElementType_obj::ROW,"ROW");
	HX_VISIT_MEMBER_NAME(ElementType_obj::COLUMN,"COLUMN");
	HX_VISIT_MEMBER_NAME(ElementType_obj::GRID,"GRID");
	HX_VISIT_MEMBER_NAME(ElementType_obj::BUTTON,"BUTTON");
	HX_VISIT_MEMBER_NAME(ElementType_obj::IMG_BUTTON,"IMG_BUTTON");
};

#endif

::hx::Class ElementType_obj::__mClass;

static ::String ElementType_obj_sStaticFields[] = {
	HX_("SNACKBAR",05,cf,b5,f9),
	HX_("MODAL",0d,58,46,8a),
	HX_("SCENE",2c,11,c0,f6),
	HX_("TAB_CONTEXT",85,76,24,51),
	HX_("TAB_PANEL",1a,06,b6,ac),
	HX_("TAB_LIST",e8,69,93,9c),
	HX_("TAB",35,f6,3f,00),
	HX_("TEXT",ad,94,ba,37),
	HX_("IMAGE",3b,57,57,3b),
	HX_("ROW",fa,7d,3e,00),
	HX_("COLUMN",d6,fa,0d,79),
	HX_("GRID",c6,9e,2c,2f),
	HX_("BUTTON",f2,0d,63,8c),
	HX_("IMG_BUTTON",0e,8a,b0,1f),
	::String(null())
};

void ElementType_obj::__register()
{
	ElementType_obj _hx_dummy;
	ElementType_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.ElementType",bf,52,ab,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ElementType_obj::__GetStatic;
	__mClass->mSetStaticField = &ElementType_obj::__SetStatic;
	__mClass->mMarkFunc = ElementType_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ElementType_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ElementType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ElementType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElementType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElementType_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ElementType_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_5_boot)
HXDLIN(   5)		SNACKBAR = HX_("Snackbar",25,fb,e1,79);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_6_boot)
HXDLIN(   6)		MODAL = HX_("Modal",0d,90,85,9f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_7_boot)
HXDLIN(   7)		SCENE = HX_("Scene",2c,49,ff,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_8_boot)
HXDLIN(   8)		TAB_CONTEXT = HX_("TabContext",3a,8c,00,d2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_9_boot)
HXDLIN(   9)		TAB_PANEL = HX_("TabPanel",8f,b8,a8,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_10_boot)
HXDLIN(  10)		TAB_LIST = HX_("TabList",33,19,7a,0d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_11_boot)
HXDLIN(  11)		TAB = HX_("Tab",35,12,40,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_12_boot)
HXDLIN(  12)		TEXT = HX_("Text",cd,f8,d2,37);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_13_boot)
HXDLIN(  13)		IMAGE = HX_("Image",3b,8f,96,50);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_14_boot)
HXDLIN(  14)		ROW = HX_("Row",fa,99,3e,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_15_boot)
HXDLIN(  15)		COLUMN = HX_("Column",f6,c2,1f,fb);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_16_boot)
HXDLIN(  16)		GRID = HX_("Grid",e6,02,45,2f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_17_boot)
HXDLIN(  17)		BUTTON = HX_("Button",12,d6,74,0e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62fe12b8dd33a515_18_boot)
HXDLIN(  18)		IMG_BUTTON = HX_("ImgButton",35,26,e9,4a);
            	}
}

} // end namespace elements
