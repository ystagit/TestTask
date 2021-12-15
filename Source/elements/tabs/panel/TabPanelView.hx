package elements.tabs.panel;

import models.ModelEvent;
import elements.tabs.context.TabContext;
import elements.tabs.context.TabContextView;
import openfl.events.Event;
import views.GuiView;

class TabPanelView extends GuiView {
    
    public function new(tabPanel:TabPanel) {
        super(tabPanel);
    }

    public override function initAfterSettingPartner() {
        super.initAfterSettingPartner();
        checkVisibility();
    }

    public override function show(e:ModelEvent = null):Void {
        checkVisibility();
    }

    public override function hide(e:Event = null):Void {
        checkVisibility();
    }

    public override function change(e:Event = null):Void {
        checkVisibility();
    }

    private function checkVisibility() {
        if (Std.isOfType(getParent(), TabContextView)) {
            var view:TabContextView = cast(getParent(), TabContextView);
            var tabContext:TabContext = cast(view.getModel(), TabContext);
            var tabPanel:TabPanel = cast(model, TabPanel);

            if (tabContext.visible && tabContext.value == tabPanel.value) {
                trace("Show <TabPanel value='" + tabPanel.value + "' >");
                super.show();
            } else if (tabPanel.visible) {
                trace("Hide <TabPanel value='" + tabPanel.value + "' >");
                super.hide();
            }
        }
    }

}