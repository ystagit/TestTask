#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_grid_Grid
#include <elements/grid/Grid.h>
#endif
#ifndef INCLUDED_elements_grid_GridView
#include <elements/grid/GridView.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_137bc8034b73302a_15_new,"elements.grid.GridView","new",0x2c8aed8e,"elements.grid.GridView.new","elements/grid/GridView.hx",15,0x5ebabd42)
HX_LOCAL_STACK_FRAME(_hx_pos_137bc8034b73302a_20_initAfterSettingPartner,"elements.grid.GridView","initAfterSettingPartner",0x2d69a0d2,"elements.grid.GridView.initAfterSettingPartner","elements/grid/GridView.hx",20,0x5ebabd42)
HX_LOCAL_STACK_FRAME(_hx_pos_137bc8034b73302a_60_draw,"elements.grid.GridView","draw",0xc6729716,"elements.grid.GridView.draw","elements/grid/GridView.hx",60,0x5ebabd42)
namespace elements{
namespace grid{

void GridView_obj::__construct( ::elements::grid::Grid grid, ::Xml node){
            	HX_STACKFRAME(&_hx_pos_137bc8034b73302a_15_new)
HXLINE(  16)		super::__construct(grid,null());
HXLINE(  17)		this->node = node;
            	}

Dynamic GridView_obj::__CreateEmpty() { return new GridView_obj; }

void *GridView_obj::_hx_vtable = 0;

Dynamic GridView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GridView_obj > _hx_result = new GridView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GridView_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x31b17232) {
				return inClassId==(int)0x24fb5328 || inClassId==(int)0x31b17232;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GridView_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_137bc8034b73302a_20_initAfterSettingPartner)
HXLINE(  21)		 ::elements::grid::Grid grid = ::hx::TCast<  ::elements::grid::Grid >::cast(this->model);
HXLINE(  22)		grid->set_xs(( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->node,HX_("xs",fb,68,00,00)))) ));
HXLINE(  23)		grid->set_ys(( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->node,HX_("ys",da,69,00,00)))) ));
HXLINE(  24)		::String width = ((HX_("",00,00,00,00) + (( (Float)((grid->get_xs() * 100)) ) / ( (Float)(12) ))) + HX_("%",25,00,00,00));
HXLINE(  25)		::String height = ((HX_("",00,00,00,00) + (( (Float)((grid->get_ys() * 100)) ) / ( (Float)(12) ))) + HX_("%",25,00,00,00));
HXLINE(  26)		grid->setSize(width,height);
HXLINE(  28)		 ::views::GuiView parentView = ::hx::TCast<  ::views::GuiView >::cast(this->getParent());
HXLINE(  29)		int lastIndexOfElement = (parentView->getChildrenLength(HX_("Grid",e6,02,45,2f)) - 1);
HXLINE(  30)		 ::views::GuiComponent lastChild = parentView->getChildByIndex(HX_("Grid",e6,02,45,2f),lastIndexOfElement);
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( lastChild )) {
HXLINE(  32)			_hx_tmp = ::Std_obj::isOfType(lastChild,::hx::ClassOf< ::elements::grid::GridView >());
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  33)			 ::elements::grid::GridView otherGridView = ::hx::TCast<  ::elements::grid::GridView >::cast(lastChild);
HXLINE(  34)			 ::elements::grid::Grid otherGrid = ::hx::TCast<  ::elements::grid::Grid >::cast(otherGridView->getModel());
HXLINE(  35)			int _xs = otherGrid->get_xp();
HXDLIN(  35)			int _xs1 = (_xs + otherGrid->get_xs());
HXDLIN(  35)			int _xs2 = (_xs1 + grid->get_xs());
HXLINE(  37)			if ((_xs2 <= 12)) {
HXLINE(  38)				grid->set_rowIndex(otherGrid->get_rowIndex());
HXLINE(  39)				grid->set_xp(otherGrid->get_xs());
HXLINE(  40)				::String x = ((HX_("",00,00,00,00) + (( (Float)((otherGrid->get_xs() * 100)) ) / ( (Float)(12) ))) + HX_("%",25,00,00,00));
HXLINE(  41)				Float y = (( (Float)((otherGrid->get_ys() * 100)) ) / ( (Float)(12) ));
HXDLIN(  41)				::String y1 = ((HX_("",00,00,00,00) + (y * ( (Float)(grid->get_rowIndex()) ))) + HX_("%",25,00,00,00));
HXLINE(  42)				grid->setPosition(x,y1);
            			}
            			else {
HXLINE(  44)				grid->set_rowIndex((otherGrid->get_rowIndex() + 1));
HXLINE(  45)				grid->set_xp(0);
HXLINE(  46)				::String x = HX_("0",30,00,00,00);
HXLINE(  47)				Float y = (( (Float)((otherGrid->get_ys() * 100)) ) / ( (Float)(12) ));
HXDLIN(  47)				::String y1 = ((HX_("",00,00,00,00) + (y * ( (Float)(grid->get_rowIndex()) ))) + HX_("%",25,00,00,00));
HXLINE(  48)				grid->setPosition(x,y1);
            			}
            		}
HXLINE(  52)		grid->get_borderColor()->setColor(::shared::Color_obj::GREY);
HXLINE(  53)		grid->get_highlight()->setColor(::shared::Color_obj::GREY);
HXLINE(  54)		grid->setBGColor(::shared::Color_obj::LIGHT);
HXLINE(  56)		this->super::initAfterSettingPartner();
            	}


void GridView_obj::draw( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_137bc8034b73302a_60_draw)
HXDLIN(  60)		if (::models::IModel_obj::get_visible(this->model)) {
HXLINE(  61)			 ::shared::Position pos = ::models::IModel_obj::getPosition(this->model);
HXLINE(  62)			 ::shared::size::Size size = ::models::IModel_obj::getSize(this->model);
HXLINE(  64)			 ::shared::Color backgroundColor = ::models::IModel_obj::getBGColor(this->model);
HXLINE(  66)			 ::shared::Color borderColor = ::models::IModel_obj::get_highlight(this->model);
HXLINE(  67)			bool _hx_tmp;
HXDLIN(  67)			if (this->isButton) {
HXLINE(  67)				_hx_tmp = ::models::IModel_obj::hasHover(this->model);
            			}
            			else {
HXLINE(  67)				_hx_tmp = false;
            			}
HXDLIN(  67)			if (_hx_tmp) {
HXLINE(  68)				borderColor = ::models::IModel_obj::get_highlight(this->model);
            			}
            			else {
HXLINE(  70)				borderColor = ::models::IModel_obj::get_borderColor(this->model);
            			}
HXLINE(  73)			this->get_graphics()->clear();
HXLINE(  74)			 ::openfl::display::Graphics _hx_tmp1 = this->get_graphics();
HXDLIN(  74)			int _hx_tmp2 = backgroundColor->getColor();
HXDLIN(  74)			_hx_tmp1->beginFill(_hx_tmp2,backgroundColor->getAlpha());
HXLINE(  75)			 ::openfl::display::Graphics _hx_tmp3 = this->get_graphics();
HXDLIN(  75)			_hx_tmp3->lineStyle(1,borderColor->getColor(),1,null(),null(),null(),null(),null());
HXLINE(  76)			 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN(  76)			Float _hx_tmp5 = pos->get_x();
HXDLIN(  76)			Float _hx_tmp6 = pos->get_y();
HXDLIN(  76)			Float _hx_tmp7 = size->get_width();
HXDLIN(  76)			_hx_tmp4->drawRect(_hx_tmp5,_hx_tmp6,_hx_tmp7,size->get_height());
HXLINE(  77)			this->get_graphics()->endFill();
            		}
            		else {
HXLINE(  79)			this->get_graphics()->clear();
            		}
            	}



::hx::ObjectPtr< GridView_obj > GridView_obj::__new( ::elements::grid::Grid grid, ::Xml node) {
	::hx::ObjectPtr< GridView_obj > __this = new GridView_obj();
	__this->__construct(grid,node);
	return __this;
}

::hx::ObjectPtr< GridView_obj > GridView_obj::__alloc(::hx::Ctx *_hx_ctx, ::elements::grid::Grid grid, ::Xml node) {
	GridView_obj *__this = (GridView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GridView_obj), true, "elements.grid.GridView"));
	*(void **)__this = GridView_obj::_hx_vtable;
	__this->__construct(grid,node);
	return __this;
}

GridView_obj::GridView_obj()
{
}

void GridView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GridView);
	HX_MARK_MEMBER_NAME(node,"node");
	 ::views::GuiComposite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GridView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
	 ::views::GuiComposite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GridView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return ::hx::Val( node ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GridView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("node",02,0a,0a,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GridView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(GridView_obj,node),HX_("node",02,0a,0a,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GridView_obj_sStaticStorageInfo = 0;
#endif

static ::String GridView_obj_sMemberFields[] = {
	HX_("node",02,0a,0a,49),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class GridView_obj::__mClass;

void GridView_obj::__register()
{
	GridView_obj _hx_dummy;
	GridView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("elements.grid.GridView",9c,ce,4d,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GridView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GridView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GridView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GridView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace elements
} // end namespace grid
