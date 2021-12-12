package elements.tabs.context;

import elements.tabs.panel.TabPanel;
import elements.tabs.panel.TabPanelView;
import views.GuiView;

class TabContextView extends GuiView {
    
    public function new(tabContext:TabContext) {
        super(tabContext);
    }

    public override function add(k:String, c:Dynamic):Void {
        if (Std.isOfType(c, TabListView)) {
            var tabListView:TabListView = cast(c, TabListView);
            tabListView.getModel().addEventListener(TabListEvent.CHANGE_TAB_CONTEXT, change);
            super.add(k, tabListView);
        } else if (Std.isOfType(c, TabPanelView)) {
            var tabPanelView:TabPanelView = cast(c, TabPanelView);
            super.add(k, tabPanelView);
        } else {
            trace("Unable to add a view because it supports tags: <TabList>, <TabPanel>");
        }
    }

}