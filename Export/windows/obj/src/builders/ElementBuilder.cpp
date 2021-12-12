#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_builders_ElementBuilder
#include <builders/ElementBuilder.h>
#endif
#ifndef INCLUDED_controllers_BaseController
#include <controllers/BaseController.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_elements_ElementType
#include <elements/ElementType.h>
#endif
#ifndef INCLUDED_elements_button_Button
#include <elements/button/Button.h>
#endif
#ifndef INCLUDED_elements_button_ButtonView
#include <elements/button/ButtonView.h>
#endif
#ifndef INCLUDED_elements_column_Column
#include <elements/column/Column.h>
#endif
#ifndef INCLUDED_elements_column_ColumnView
#include <elements/column/ColumnView.h>
#endif
#ifndef INCLUDED_elements_grid_Grid
#include <elements/grid/Grid.h>
#endif
#ifndef INCLUDED_elements_grid_GridView
#include <elements/grid/GridView.h>
#endif
#ifndef INCLUDED_elements_image_Image
#include <elements/image/Image.h>
#endif
#ifndef INCLUDED_elements_image_ImageView
#include <elements/image/ImageView.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButton
#include <elements/img_button/ImgButton.h>
#endif
#ifndef INCLUDED_elements_img_button_ImgButtonView
#include <elements/img_button/ImgButtonView.h>
#endif
#ifndef INCLUDED_elements_modal_Modal
#include <elements/modal/Modal.h>
#endif
#ifndef INCLUDED_elements_modal_ModalView
#include <elements/modal/ModalView.h>
#endif
#ifndef INCLUDED_elements_row_Row
#include <elements/row/Row.h>
#endif
#ifndef INCLUDED_elements_row_RowView
#include <elements/row/RowView.h>
#endif
#ifndef INCLUDED_elements_scene_Scene
#include <elements/scene/Scene.h>
#endif
#ifndef INCLUDED_elements_scene_SceneView
#include <elements/scene/SceneView.h>
#endif
#ifndef INCLUDED_elements_tabs_TabList
#include <elements/tabs/TabList.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListController
#include <elements/tabs/TabListController.h>
#endif
#ifndef INCLUDED_elements_tabs_TabListView
#include <elements/tabs/TabListView.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContext
#include <elements/tabs/context/TabContext.h>
#endif
#ifndef INCLUDED_elements_tabs_context_TabContextView
#include <elements/tabs/context/TabContextView.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanel
#include <elements/tabs/panel/TabPanel.h>
#endif
#ifndef INCLUDED_elements_tabs_panel_TabPanelView
#include <elements/tabs/panel/TabPanelView.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_Tab
#include <elements/tabs/tab/Tab.h>
#endif
#ifndef INCLUDED_elements_tabs_tab_TabView
#include <elements/tabs/tab/TabView.h>
#endif
#ifndef INCLUDED_elements_text_Text
#include <elements/text/Text.h>
#endif
#ifndef INCLUDED_elements_text_TextView
#include <elements/text/TextView.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_Access_Impl_
#include <haxe/xml/_Access/Access_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_40_build,"builders.ElementBuilder","build",0x4aafb895,"builders.ElementBuilder.build","builders/ElementBuilder.hx",40,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_73_addModal,"builders.ElementBuilder","addModal",0x80ad8345,"builders.ElementBuilder.addModal","builders/ElementBuilder.hx",73,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_83_addScene,"builders.ElementBuilder","addScene",0xed273c64,"builders.ElementBuilder.addScene","builders/ElementBuilder.hx",83,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_92_addText,"builders.ElementBuilder","addText",0x39fb5495,"builders.ElementBuilder.addText","builders/ElementBuilder.hx",92,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_100_addImage,"builders.ElementBuilder","addImage",0x31be8273,"builders.ElementBuilder.addImage","builders/ElementBuilder.hx",100,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_108_addButton,"builders.ElementBuilder","addButton",0x3041b3da,"builders.ElementBuilder.addButton","builders/ElementBuilder.hx",108,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_117_addImgButton,"builders.ElementBuilder","addImgButton",0xe8f7156d,"builders.ElementBuilder.addImgButton","builders/ElementBuilder.hx",117,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_124_addTabContext,"builders.ElementBuilder","addTabContext",0x8023ee02,"builders.ElementBuilder.addTabContext","builders/ElementBuilder.hx",124,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_135_addTabList,"builders.ElementBuilder","addTabList",0x7eef4a6b,"builders.ElementBuilder.addTabList","builders/ElementBuilder.hx",135,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_148_addTabPanel,"builders.ElementBuilder","addTabPanel",0xdabe9857,"builders.ElementBuilder.addTabPanel","builders/ElementBuilder.hx",148,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_160_addTab,"builders.ElementBuilder","addTab",0xdb86476d,"builders.ElementBuilder.addTab","builders/ElementBuilder.hx",160,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_174_addRow,"builders.ElementBuilder","addRow",0xdb84cf32,"builders.ElementBuilder.addRow","builders/ElementBuilder.hx",174,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_184_addColumn,"builders.ElementBuilder","addColumn",0x1ceca0be,"builders.ElementBuilder.addColumn","builders/ElementBuilder.hx",184,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_190_addGrid,"builders.ElementBuilder","addGrid",0x316d5eae,"builders.ElementBuilder.addGrid","builders/ElementBuilder.hx",190,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_197_setMaxSize,"builders.ElementBuilder","setMaxSize",0xf69f4b3c,"builders.ElementBuilder.setMaxSize","builders/ElementBuilder.hx",197,0xab341628)
HX_LOCAL_STACK_FRAME(_hx_pos_992a27da9529f3a9_202_getElementCount,"builders.ElementBuilder","getElementCount",0x165fb650,"builders.ElementBuilder.getElementCount","builders/ElementBuilder.hx",202,0xab341628)
namespace builders{

void ElementBuilder_obj::__construct() { }

Dynamic ElementBuilder_obj::__CreateEmpty() { return new ElementBuilder_obj; }

void *ElementBuilder_obj::_hx_vtable = 0;

Dynamic ElementBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ElementBuilder_obj > _hx_result = new ElementBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ElementBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a72a7bb;
}

 ::views::GuiView ElementBuilder_obj::build( ::views::GuiView parentView, ::Xml node){
            	HX_STACKFRAME(&_hx_pos_992a27da9529f3a9_40_build)
HXLINE(  41)		{
HXLINE(  41)			::String _g;
HXDLIN(  41)			if ((node->nodeType == ::Xml_obj::Document)) {
HXLINE(  41)				_g = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE(  41)				if ((node->nodeType != ::Xml_obj::Element)) {
HXLINE(  41)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(node->nodeType))));
            				}
HXDLIN(  41)				_g = node->nodeName;
            			}
HXDLIN(  41)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==::elements::ElementType_obj::BUTTON) ){
HXLINE(  65)				return ::builders::ElementBuilder_obj::addButton(parentView,node);
HXDLIN(  65)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::COLUMN) ){
HXLINE(  61)				return ::builders::ElementBuilder_obj::addColumn(parentView,node);
HXDLIN(  61)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::GRID) ){
HXLINE(  63)				return ::builders::ElementBuilder_obj::addGrid(parentView,node);
HXDLIN(  63)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::IMAGE) ){
HXLINE(  57)				return ::builders::ElementBuilder_obj::addImage(parentView,node);
HXDLIN(  57)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::IMG_BUTTON) ){
HXLINE(  67)				return ::builders::ElementBuilder_obj::addImgButton(parentView,node);
HXDLIN(  67)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::MODAL) ){
HXLINE(  43)				return ::builders::ElementBuilder_obj::addModal(parentView,node);
HXDLIN(  43)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::ROW) ){
HXLINE(  59)				return ::builders::ElementBuilder_obj::addRow(parentView,node);
HXDLIN(  59)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::SCENE) ){
HXLINE(  45)				return ::builders::ElementBuilder_obj::addScene(parentView,node);
HXDLIN(  45)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::TAB) ){
HXLINE(  53)				return ::builders::ElementBuilder_obj::addTab(parentView,node);
HXDLIN(  53)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::TAB_CONTEXT) ){
HXLINE(  47)				return ::builders::ElementBuilder_obj::addTabContext(parentView,node);
HXDLIN(  47)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::TAB_LIST) ){
HXLINE(  51)				return ::builders::ElementBuilder_obj::addTabList(parentView,node);
HXDLIN(  51)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::TAB_PANEL) ){
HXLINE(  49)				return ::builders::ElementBuilder_obj::addTabPanel(parentView,node);
HXDLIN(  49)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==::elements::ElementType_obj::TEXT) ){
HXLINE(  55)				return ::builders::ElementBuilder_obj::addText(parentView,node);
HXDLIN(  55)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  70)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,build,return )

 ::views::GuiView ElementBuilder_obj::addModal( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_73_addModal)
HXLINE(  74)		 ::elements::modal::Modal modal =  ::elements::modal::Modal_obj::__alloc( HX_CTX );
HXLINE(  75)		 ::elements::modal::ModalView modalView =  ::elements::modal::ModalView_obj::__alloc( HX_CTX ,modal,null());
HXLINE(  76)		parentView->add(::elements::ElementType_obj::MODAL,modalView);
HXLINE(  78)		::cpp::VirtualArray rows = modalView->findChildren(HX_("Row",fa,99,3e,00));
HXLINE(  79)		 ::views::GuiView rowBody = ( ( ::views::GuiView)(rows->__get(1)) );
HXLINE(  80)		return rowBody;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addModal,return )

 ::views::GuiView ElementBuilder_obj::addScene( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_83_addScene)
HXLINE(  84)		 ::elements::scene::Scene scene =  ::elements::scene::Scene_obj::__alloc( HX_CTX ,::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("name",4b,72,ff,48)));
HXLINE(  85)		::builders::ElementBuilder_obj::setMaxSize(parentView->getModel(),scene);
HXLINE(  86)		scene->setBGColor(::shared::Color_obj::LIGHT);
HXLINE(  87)		 ::elements::scene::SceneView sceneView =  ::elements::scene::SceneView_obj::__alloc( HX_CTX ,scene,null());
HXLINE(  88)		parentView->add(::elements::ElementType_obj::SCENE,sceneView);
HXLINE(  89)		return sceneView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addScene,return )

 ::views::GuiView ElementBuilder_obj::addText( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_92_addText)
HXLINE(  93)		 ::elements::text::Text textElement =  ::elements::text::Text_obj::__alloc( HX_CTX );
HXLINE(  94)		textElement->set_value(::haxe::xml::_Access::Access_Impl__obj::get_innerData(node));
HXLINE(  95)		 ::elements::text::TextView textView =  ::elements::text::TextView_obj::__alloc( HX_CTX ,textElement);
HXLINE(  96)		parentView->add(::elements::ElementType_obj::TEXT,textView);
HXLINE(  97)		return textView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addText,return )

 ::views::GuiView ElementBuilder_obj::addImage( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_100_addImage)
HXLINE( 101)		 ::elements::image::Image img =  ::elements::image::Image_obj::__alloc( HX_CTX );
HXLINE( 102)		img->set_src(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("src",e4,a6,57,00)));
HXLINE( 103)		 ::elements::image::ImageView imgView =  ::elements::image::ImageView_obj::__alloc( HX_CTX ,img);
HXLINE( 104)		parentView->add(::elements::ElementType_obj::IMAGE,imgView);
HXLINE( 105)		return imgView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addImage,return )

 ::views::GuiView ElementBuilder_obj::addButton( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_108_addButton)
HXLINE( 109)		 ::elements::button::Button button =  ::elements::button::Button_obj::__alloc( HX_CTX );
HXLINE( 110)		::String title;
HXDLIN( 110)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("title",98,15,3b,10))) {
HXLINE( 110)			title = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("title",98,15,3b,10));
            		}
            		else {
HXLINE( 110)			title = HX_("",00,00,00,00);
            		}
HXLINE( 111)		button->set_title(title);
HXLINE( 112)		 ::elements::button::ButtonView buttonView =  ::elements::button::ButtonView_obj::__alloc( HX_CTX ,button);
HXLINE( 113)		parentView->add(::elements::ElementType_obj::BUTTON,buttonView);
HXLINE( 114)		return buttonView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addButton,return )

 ::views::GuiView ElementBuilder_obj::addImgButton( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_117_addImgButton)
HXLINE( 118)		 ::elements::img_button::ImgButton imgButton =  ::elements::img_button::ImgButton_obj::__alloc( HX_CTX );
HXLINE( 119)		 ::elements::img_button::ImgButtonView imgButtonView =  ::elements::img_button::ImgButtonView_obj::__alloc( HX_CTX ,imgButton,node);
HXLINE( 120)		parentView->add(::elements::ElementType_obj::IMG_BUTTON,imgButtonView);
HXLINE( 121)		return imgButtonView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addImgButton,return )

 ::views::GuiView ElementBuilder_obj::addTabContext( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_124_addTabContext)
HXLINE( 125)		 ::elements::tabs::context::TabContext tabContext =  ::elements::tabs::context::TabContext_obj::__alloc( HX_CTX );
HXLINE( 126)		::builders::ElementBuilder_obj::setMaxSize(parentView->getModel(),tabContext);
HXLINE( 127)		tabContext->set_value(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("value",71,7f,b8,31)));
HXLINE( 128)		tabContext->setSize(HX_("100%",94,0a,88,20),HX_("100%",94,0a,88,20));
HXLINE( 129)		tabContext->setBGColor(::shared::Color_obj::BLACK);
HXLINE( 130)		 ::elements::tabs::context::TabContextView tabContextView =  ::elements::tabs::context::TabContextView_obj::__alloc( HX_CTX ,tabContext);
HXLINE( 131)		parentView->add(::elements::ElementType_obj::TAB_CONTEXT,tabContextView);
HXLINE( 132)		return tabContextView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addTabContext,return )

 ::views::GuiView ElementBuilder_obj::addTabList( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_135_addTabList)
HXLINE( 136)		 ::elements::tabs::TabList tabList =  ::elements::tabs::TabList_obj::__alloc( HX_CTX );
HXLINE( 138)		tabList->set_count(::builders::ElementBuilder_obj::getElementCount(node,HX_("Tab",35,12,40,00)));
HXLINE( 139)		::builders::ElementBuilder_obj::setMaxSize(parentView->getModel(),tabList);
HXLINE( 140)		tabList->setSize(HX_("100%",94,0a,88,20),HX_("10%",66,58,25,00));
HXLINE( 141)		tabList->setBGColor(::shared::Color_obj::LIGHT);
HXLINE( 142)		 ::elements::tabs::TabListController tabListController =  ::elements::tabs::TabListController_obj::__alloc( HX_CTX ,tabList);
HXLINE( 143)		 ::elements::tabs::TabListView tabListView =  ::elements::tabs::TabListView_obj::__alloc( HX_CTX ,tabList,tabListController);
HXLINE( 144)		parentView->add(::elements::ElementType_obj::TAB_LIST,tabListView);
HXLINE( 145)		return tabListView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addTabList,return )

 ::views::GuiView ElementBuilder_obj::addTabPanel( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_148_addTabPanel)
HXLINE( 149)		 ::elements::tabs::panel::TabPanel tabPanel =  ::elements::tabs::panel::TabPanel_obj::__alloc( HX_CTX );
HXLINE( 150)		::builders::ElementBuilder_obj::setMaxSize(parentView->getModel(),tabPanel);
HXLINE( 151)		tabPanel->set_value(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("value",71,7f,b8,31)));
HXLINE( 152)		tabPanel->setPosition(0,HX_("10%",66,58,25,00));
HXLINE( 153)		tabPanel->setSize(HX_("100%",94,0a,88,20),HX_("90%",6e,6a,2b,00));
HXLINE( 154)		tabPanel->setBGColor(::shared::Color_obj::LIGHT);
HXLINE( 155)		 ::elements::tabs::panel::TabPanelView tabPanelView =  ::elements::tabs::panel::TabPanelView_obj::__alloc( HX_CTX ,tabPanel);
HXLINE( 156)		parentView->add(::elements::ElementType_obj::TAB_PANEL,tabPanelView);
HXLINE( 157)		return tabPanelView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addTabPanel,return )

 ::views::GuiView ElementBuilder_obj::addTab( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_160_addTab)
HXLINE( 161)		 ::elements::tabs::TabList tabList = ::hx::TCast<  ::elements::tabs::TabList >::cast(parentView->getModel());
HXLINE( 162)		Float width = (( (Float)(100) ) / ( (Float)(tabList->get_count()) ));
HXLINE( 163)		int index = parentView->getChildrenLength(::elements::ElementType_obj::TAB);
HXLINE( 164)		 ::elements::tabs::tab::Tab tab =  ::elements::tabs::tab::Tab_obj::__alloc( HX_CTX );
HXLINE( 165)		::builders::ElementBuilder_obj::setMaxSize(parentView->getModel(),tab);
HXLINE( 166)		tab->set_value(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("value",71,7f,b8,31)));
HXLINE( 167)		tab->setSize(((HX_("",00,00,00,00) + width) + HX_("%",25,00,00,00)),HX_("100%",94,0a,88,20));
HXLINE( 168)		tab->setPosition(((HX_("",00,00,00,00) + (( (Float)(index) ) * width)) + HX_("%",25,00,00,00)),tab->getPosition()->get_y());
HXLINE( 169)		 ::elements::tabs::tab::TabView tabView =  ::elements::tabs::tab::TabView_obj::__alloc( HX_CTX ,tab);
HXLINE( 170)		parentView->add(::elements::ElementType_obj::TAB,tabView);
HXLINE( 171)		return tabView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addTab,return )

 ::views::GuiView ElementBuilder_obj::addRow( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_174_addRow)
HXLINE( 175)		 ::elements::row::Row row =  ::elements::row::Row_obj::__alloc( HX_CTX );
HXLINE( 176)		 ::Dynamic width;
HXDLIN( 176)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("width",06,b6,62,ca))) {
HXLINE( 176)			width = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("width",06,b6,62,ca));
            		}
            		else {
HXLINE( 176)			width = HX_("0",30,00,00,00);
            		}
HXLINE( 177)		 ::Dynamic height;
HXDLIN( 177)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("height",e7,07,4c,02))) {
HXLINE( 177)			height = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("height",e7,07,4c,02));
            		}
            		else {
HXLINE( 177)			height = HX_("0",30,00,00,00);
            		}
HXLINE( 178)		row->setSize(width,height);
HXLINE( 179)		 ::elements::row::RowView rowView =  ::elements::row::RowView_obj::__alloc( HX_CTX ,row,null());
HXLINE( 180)		parentView->add(::elements::ElementType_obj::ROW,rowView);
HXLINE( 181)		return rowView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addRow,return )

 ::views::GuiView ElementBuilder_obj::addColumn( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_184_addColumn)
HXLINE( 185)		 ::elements::column::ColumnView columnView =  ::elements::column::ColumnView_obj::__alloc( HX_CTX , ::elements::column::Column_obj::__alloc( HX_CTX ));
HXLINE( 186)		parentView->add(::elements::ElementType_obj::COLUMN,columnView);
HXLINE( 187)		return columnView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addColumn,return )

 ::views::GuiView ElementBuilder_obj::addGrid( ::views::GuiView parentView, ::Xml node){
            	HX_GC_STACKFRAME(&_hx_pos_992a27da9529f3a9_190_addGrid)
HXLINE( 191)		 ::elements::grid::Grid grid =  ::elements::grid::Grid_obj::__alloc( HX_CTX );
HXLINE( 192)		 ::elements::grid::GridView gridView =  ::elements::grid::GridView_obj::__alloc( HX_CTX ,grid,node);
HXLINE( 193)		parentView->add(::elements::ElementType_obj::GRID,gridView);
HXLINE( 194)		return gridView;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,addGrid,return )

void ElementBuilder_obj::setMaxSize(::Dynamic parentView,::Dynamic currentView){
            	HX_STACKFRAME(&_hx_pos_992a27da9529f3a9_197_setMaxSize)
HXLINE( 198)		 ::shared::size::Size parentSize = ::models::IModel_obj::getSize(parentView);
HXLINE( 199)		Float _hx_tmp = parentSize->get_width();
HXDLIN( 199)		::models::IModel_obj::setMaxSize(currentView,_hx_tmp,parentSize->get_height());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,setMaxSize,(void))

int ElementBuilder_obj::getElementCount( ::Xml node,::String elementName){
            	HX_STACKFRAME(&_hx_pos_992a27da9529f3a9_202_getElementCount)
HXLINE( 203)		int count = 0;
HXLINE( 204)		{
HXLINE( 204)			 ::Dynamic element = node->elements();
HXDLIN( 204)			while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 204)				 ::Xml element1 = ( ( ::Xml)(element->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 205)				::String _hx_tmp;
HXDLIN( 205)				if ((element1->nodeType == ::Xml_obj::Document)) {
HXLINE( 205)					_hx_tmp = HX_("Document",3b,ab,c4,74);
            				}
            				else {
HXLINE( 205)					if ((element1->nodeType != ::Xml_obj::Element)) {
HXLINE( 205)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(element1->nodeType))));
            					}
HXDLIN( 205)					_hx_tmp = element1->nodeName;
            				}
HXDLIN( 205)				if ((_hx_tmp == elementName)) {
HXLINE( 206)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 209)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementBuilder_obj,getElementCount,return )


ElementBuilder_obj::ElementBuilder_obj()
{
}

bool ElementBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addTab") ) { outValue = addTab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addRow") ) { outValue = addRow_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addText") ) { outValue = addText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addGrid") ) { outValue = addGrid_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addModal") ) { outValue = addModal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addScene") ) { outValue = addScene_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addImage") ) { outValue = addImage_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addButton") ) { outValue = addButton_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addColumn") ) { outValue = addColumn_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addTabList") ) { outValue = addTabList_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { outValue = setMaxSize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTabPanel") ) { outValue = addTabPanel_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addImgButton") ) { outValue = addImgButton_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTabContext") ) { outValue = addTabContext_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getElementCount") ) { outValue = getElementCount_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ElementBuilder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ElementBuilder_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ElementBuilder_obj::__mClass;

static ::String ElementBuilder_obj_sStaticFields[] = {
	HX_("build",2e,db,ea,ba),
	HX_("addModal",4c,46,b5,85),
	HX_("addScene",6b,ff,2e,f2),
	HX_("addText",6e,0f,37,89),
	HX_("addImage",7a,45,c6,36),
	HX_("addButton",f3,96,04,92),
	HX_("addImgButton",f4,67,6a,a8),
	HX_("addTabContext",9b,d1,98,45),
	HX_("addTabList",32,1d,b3,a7),
	HX_("addTabPanel",b0,33,53,5d),
	HX_("addTab",b4,6a,09,9f),
	HX_("addRow",79,f2,07,9f),
	HX_("addColumn",d7,83,af,7e),
	HX_("addGrid",87,19,a9,80),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("getElementCount",29,72,87,cd),
	::String(null())
};

void ElementBuilder_obj::__register()
{
	ElementBuilder_obj _hx_dummy;
	ElementBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("builders.ElementBuilder",95,a6,1b,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ElementBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ElementBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ElementBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElementBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElementBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace builders