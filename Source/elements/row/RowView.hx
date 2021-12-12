package elements.row;

import models.ModelEvent;
import views.GuiComponent;
import haxe.xml.Access;
import views.GuiView;

class RowView extends GuiView {

    public override function initAfterSettingPartner() {
        final parentView:GuiView = cast(getParent(), GuiView);
        final rows:Array<GuiComponent> = parentView.findChildren("Row");
        
        var yPos:Float = 0;
        for (row in rows) {
            yPos += row.getModel().getSize().height;
        }

        model.setPosition(getModel().getPosition().x, yPos);
        super.initAfterSettingPartner();
    }
    
}