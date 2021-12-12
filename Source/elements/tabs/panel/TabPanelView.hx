package elements.tabs.panel;

import elements.tabs.context.TabContext;
import elements.tabs.context.TabContextView;
import openfl.events.Event;
import views.GuiView;

class TabPanelView extends GuiView {
    
    public function new(tabPanel:TabPanel) {
        super(tabPanel);
    }

    public override function initAfterSettingPartner() {
        change();
    }

    public override function change(e:Event = null):Void {
        if (Std.isOfType(getParent(), TabContextView)) {
            var view:TabContextView = cast(getParent(), TabContextView);
            var tabContext:TabContext = cast(view.getModel(), TabContext);
            var tabPanel:TabPanel = cast(model, TabPanel);

            if (tabContext.visible && tabContext.value == tabPanel.value) {
                trace("Show <TabPanel value='" + tabPanel.value + "' >");
                show();
            } else if (tabPanel.visible) {
                trace("Hide <TabPanel value='" + tabPanel.value + "' >");
                hide();
            }
        }
    }

}