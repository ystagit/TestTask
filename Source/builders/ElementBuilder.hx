package builders;

import views.GuiComponent;
import elements.modal.ModalView;
import elements.modal.Modal;
import elements.img_button.ImgButton;
import elements.img_button.ImgButtonView;
import elements.image.Image;
import elements.image.ImageView;
import elements.column.Column;
import elements.column.ColumnView;
import elements.row.RowView;
import elements.row.Row;
import elements.grid.GridView;
import elements.grid.Grid;
import elements.tabs.TabListController;
import elements.tabs.panel.TabPanelView;
import elements.tabs.panel.TabPanel;
import elements.tabs.context.TabContextView;
import elements.tabs.context.TabContext;
import elements.text.TextView;
import elements.text.Text;
import models.IModel;
import shared.size.Size;
import elements.ElementType;
import elements.scene.SceneView;
import elements.scene.Scene;
import haxe.xml.Access;
import elements.tabs.tab.TabView;
import elements.tabs.tab.Tab;
import elements.tabs.TabListView;
import elements.tabs.TabList;
import elements.button.ButtonView;
import shared.Color;
import elements.button.Button;
import views.GuiView;

class ElementBuilder {

    public static function build(parentView:GuiView, node:Access):GuiView {
        switch (node.name) {
            case ElementType.MODAL:
                return addModal(parentView, node);
            case ElementType.SCENE:
                return addScene(parentView, node);
            case ElementType.TAB_CONTEXT:
                return addTabContext(parentView, node);
            case ElementType.TAB_PANEL:
                return addTabPanel(parentView, node);
            case ElementType.TAB_LIST:
                return addTabList(parentView, node);
            case ElementType.TAB:
                return addTab(parentView, node);
            case ElementType.TEXT:
                return addText(parentView, node);
            case ElementType.IMAGE:
                return addImage(parentView, node);
            case ElementType.ROW:
                return addRow(parentView, node);
            case ElementType.COLUMN:
                return addColumn(parentView, node);
            case ElementType.GRID:
                return addGrid(parentView, node);
            case ElementType.BUTTON:
                return addButton(parentView, node);
            case ElementType.IMG_BUTTON:
                return addImgButton(parentView, node);
        }

        return null;
    }

    public static function addModal(parentView:GuiView, node:Access):GuiView {
        final modal:Modal = new Modal();
        final modalView:ModalView = new ModalView(modal);
        parentView.add(ElementType.MODAL, modalView);
        // Takes body of modal window
        final rows:Array<Dynamic> = modalView.findChildren("Row");
        final rowBody:GuiView = rows[1];
        return rowBody;
    }

    public static function addScene(parentView:GuiView, node:Access):GuiView {
        var scene:Scene = new Scene(node.att.name);
        setMaxSize(parentView.getModel(), scene);
        scene.setBGColor(Color.LIGHT);
        var sceneView:SceneView = new SceneView(scene);
        parentView.add(ElementType.SCENE, sceneView);
        return sceneView;
    }

    public static function addText(parentView:GuiView, node:Access):GuiView {
        var textElement:Text = new Text();
        textElement.value = node.innerData;
        var textView:TextView = new TextView(textElement);
        parentView.add(ElementType.TEXT, textView);
        return textView;
    }

    public static function addImage(parentView:GuiView, node:Access):GuiView {
        var img:Image = new Image();
        img.src = node.att.src;
        var imgView:ImageView = new ImageView(img);
        parentView.add(ElementType.IMAGE, imgView);
        return imgView;
    }

    public static function addButton(parentView:GuiView, node:Access):GuiView {
        final button:Button = new Button();
        final title:String = node.has.title ? node.att.title : '';
        button.title = title;
        final buttonView:ButtonView = new ButtonView(button);
        parentView.add(ElementType.BUTTON, buttonView);
        return buttonView;
    }

    public static function addImgButton(parentView:GuiView, node:Access):GuiView {
        final imgButton:ImgButton = new ImgButton();
        final imgButtonView:ImgButtonView = new ImgButtonView(imgButton, node);
        parentView.add(ElementType.IMG_BUTTON, imgButtonView);
        return imgButtonView;
    }

    public static function addTabContext(parentView:GuiView, node:Access):GuiView {
        var tabContext:TabContext = new TabContext();
        setMaxSize(parentView.getModel(), tabContext);
        tabContext.value = node.att.value;
        tabContext.setSize("100%", "100%");
        tabContext.setBGColor(Color.BLACK);
        var tabContextView:TabContextView = new TabContextView(tabContext);
        parentView.add(ElementType.TAB_CONTEXT, tabContextView);
        return tabContextView;
    }

    public static function addTabList(parentView:GuiView, node:Access):GuiView {
        var tabList:TabList = new TabList();
        // Needs to know tabs count to build Tab element
        tabList.count = getElementCount(node, "Tab");
        setMaxSize(parentView.getModel(), tabList);
        tabList.setSize("100%", "10%");
        tabList.setBGColor(Color.LIGHT);
        var tabListController:TabListController = new TabListController(tabList);
        var tabListView:TabListView = new TabListView(tabList, tabListController);
        parentView.add(ElementType.TAB_LIST, tabListView);
        return tabListView;
    }

    public static function addTabPanel(parentView:GuiView, node:Access):GuiView {
        var tabPanel:TabPanel = new TabPanel();
        setMaxSize(parentView.getModel(), tabPanel);
        tabPanel.value = node.att.value;
        tabPanel.setPosition(0, "10%");
        tabPanel.setSize("100%", "90%");
        tabPanel.setBGColor(Color.LIGHT);
        var tabPanelView:TabPanelView = new TabPanelView(tabPanel);
        parentView.add(ElementType.TAB_PANEL, tabPanelView);
        return tabPanelView;
    }

    public static function addTab(parentView:GuiView, node:Access):GuiView {
        var tabList:TabList = cast(parentView.getModel(), TabList);
        var width:Float = 100 / tabList.count;
        var index:Int = parentView.getChildrenLength(ElementType.TAB);
        var tab:Tab = new Tab();
        setMaxSize(parentView.getModel(), tab);
        tab.value = node.att.value;
        tab.setSize('$width%', "100%");
        tab.setPosition('${index * width}%', tab.getPosition().y);
        var tabView:TabView = new TabView(tab);
        parentView.add(ElementType.TAB, tabView);
        return tabView;
    }

    public static function addRow(parentView:GuiView, node:Access):GuiView {
        final row:Row = new Row();
        final width:Dynamic = node.has.width ? node.att.width : '0';
        final height:Dynamic = node.has.height ? node.att.height : '0';
        row.setSize(width, height);
        final rowView:RowView = new RowView(row);
        parentView.add(ElementType.ROW, rowView);
        return rowView;
    }

    public static function addColumn(parentView:GuiView, node:Access):GuiView {
        var columnView:ColumnView = new ColumnView(new Column());
        parentView.add(ElementType.COLUMN, columnView);
        return columnView;
    }

    public static function addGrid(parentView:GuiView, node:Access):GuiView {
        var grid:Grid = new Grid();
        var gridView:GridView = new GridView(grid, node);
        parentView.add(ElementType.GRID, gridView);
        return gridView;
    }

    private static function setMaxSize(parentView:IModel, currentView:IModel) {
        var parentSize:Size = parentView.getSize();
        currentView.setMaxSize(parentSize.width, parentSize.height);
    }

    private static function getElementCount(node:Access, elementName:String):Int {
        var count:Int = 0;
        for (element in node.elements) {
            if (element.name == elementName) {
                count++;
            }
        }
        return count;
    }

}