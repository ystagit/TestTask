package elements.tabs;

import models.ModelEvent;
import shared.size.Size;
import shared.Position;
import shared.Color;
import elements.tabs.context.TabContext;
import elements.tabs.context.TabContextView;
import elements.tabs.tab.Tab;
import openfl.events.MouseEvent;
import elements.tabs.tab.TabView;
import views.GuiView;

class TabListView extends GuiView {
    
    public function new(tabList:TabList, controller:TabListController) {
        super(tabList, controller);
    }

    public override function initAfterSettingPartner() {
        if (Std.isOfType(getParent(), TabContextView)) {
            var view:TabContextView = cast(getParent(), TabContextView);
            var tabContext:TabContext = cast(view.getModel(), TabContext);
            var tabList:TabList = cast(model, TabList);
            tabList.selected = tabContext.value;
            tabList.borderColor.setColor(Color.GREY);
            super.initAfterSettingPartner();
        }
    }

    public function onPress(tab:Tab):Void {
        if (tab.hasHover()) {
            cast(controller, TabListController).onSelect(tab.value);
        }
    }

    public override function add(k:String, c:Dynamic) {
        if (Std.isOfType(c, TabView)) {
            var tabView:TabView = cast(c, TabView);
            var tab:Tab = cast(tabView.getModel(), Tab);
            c.addEventListener(MouseEvent.CLICK, event -> onPress(tab));
            super.add(k, tabView);
        } else {
            trace("Unable to add a view because it supports tags: <Tab>");
        }
    }

    override private function draw(e:ModelEvent = null) {
        var tabList:TabList = cast(model, TabList);

        if (tabList.visible) {
            var pos:Position = tabList.getPosition();
            var size:Size = tabList.getSize();
            var borderColor:Color = model.borderColor;

            var backgroundColor:Color = model.highlight;
            if (isButton && model.hasHover()) {
                backgroundColor = model.highlight;
            } else {
                backgroundColor = model.getBGColor();
            }

            graphics.clear();
            // Draws rect
            graphics.beginFill(backgroundColor.getColor(), backgroundColor.getAlpha());
            graphics.drawRect(pos.x, pos.y, size.width, size.height);
            // Draws ine
            graphics.beginFill(borderColor.getColor(), borderColor.getAlpha());
            graphics.drawRect(pos.x, pos.y + size.height - 1, size.width, 1);
            graphics.endFill();
        } else {
            graphics.clear();
        }
    }

}