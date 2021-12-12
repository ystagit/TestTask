package elements.column;

import cpp.Random;
import shared.Color;
import views.GuiView;

class ColumnView extends GuiView {
    
    public function new(column:Column) {
        super(column);
    }

    public override function initAfterSettingPartner() {
        final column:Column = cast(model, Column);
        final parentView:GuiView = cast(getParent(), GuiView);
        final index:Int = parentView.getChildrenLength(ElementType.COLUMN);
        column.setSize('${100 / index}%', "100%");
        column.setBGColor(new Color(Math.floor(Math.random() * 255), Math.floor(Math.random() * 255), Math.floor(Math.random() * 255), 255));
        
        super.initAfterSettingPartner();
    }
}