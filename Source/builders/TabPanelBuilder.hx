package builders;

import elements.tabs.panel.TabPanelView;
import elements.tabs.panel.TabPanel;
import elements.ElementType;
import views.GuiView;
import shared.Color;
import haxe.xml.Access;

class TabPanelBuilder extends BaseBuilder {

    private final tabPanel:TabPanel;

    public static function build(node:Access):TabPanelBuilder {
        return new TabPanelBuilder(node);
    }

    public function new(node:Access) {
        super(node);
        tabPanel = new TabPanel();
        initAttributes();
    }

    private function validateRequiredAttrs():Void { }

    private function initAttributes():Void {
        tabPanel.value = node.has.value ? node.att.value : '0';
    }

    public function withPosition(x:Dynamic, y:Dynamic):TabPanelBuilder {
        tabPanel.setPosition(x, y);
        return this;
    }

    public function withSize(w:Dynamic, h:Dynamic):TabPanelBuilder {
        tabPanel.setSize(w, h);
        return this;
    }

    public function withBackground(color:Color):TabPanelBuilder {
        tabPanel.setBGColor(color);
        return this;
    }

    public function apply(parentView:GuiView):TabPanelView {
        final tabPanelView:TabPanelView = new TabPanelView(tabPanel);
        parentView.add(ElementType.TAB_PANEL, tabPanelView);
        return tabPanelView;
    }

}