package elements.tabs.tab;

import models.ModelEvent;
import openfl.ui.Mouse;
import shared.size.Size;
import shared.Position;
import shared.Color;
import views.GuiView;

class TabView extends GuiView {
    
    public function new(tab:Tab) {
        super(tab);
        isButton = true;
    }
    
    override private function draw(e:ModelEvent = null) {
        var tab:Tab = cast(model, Tab);

        if (tab.visible && tab.active) {
            var pos:Position = model.getPosition();
            var size:Size = model.getSize();

            var borderColor:Color = model.highlight;
            if (isButton && model.hasHover()) {
                borderColor = model.highlight;
            } else {
                borderColor = model.borderColor;
            }

            graphics.clear();
            graphics.beginFill(borderColor.getColor(), borderColor.getAlpha());
            graphics.drawRect(pos.x, pos.y + size.height - 3, size.width, 3);
            graphics.endFill();
        } else {
            graphics.clear();
        }
    }

}