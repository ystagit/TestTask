package elements.button;

import shared.align.AlignType;
import shared.align.Align;
import models.ModelEvent;
import elements.text.TextView;
import elements.text.Text;
import shared.size.Size;
import shared.Position;
import shared.Color;
import views.GuiView;

class ButtonView extends GuiView {

    public function new(button:Button) {
        super(button);
        isButton = true;
    }

    public override function initAfterSettingPartner() {
        var button:Button = cast(model, Button);
        button.setSize("98%", "98%");
        button.setBGColor(Color.LIGHT);
        button.align.alignTypeByHor = AlignType.CENTER;
        button.align.alignTypeByVer = AlignType.CENTER;
        if (button.title != null) {
            addText(button.title);
        }
        super.initAfterSettingPartner();
    }
    
    override private function draw(e:ModelEvent = null) {
        if (model.visible) {
            var pos:Position = model.getPosition();
            var size:Size = model.getSize();

            var backgroundColor:Color = model.getBGColor();
            
            var borderColor:Color = model.highlight;
            if (isButton && model.hasHover()) {
                borderColor = model.highlight;
            } else {
                borderColor = model.borderColor;
            }

            graphics.clear();
            graphics.beginFill(backgroundColor.getColor(), backgroundColor.getAlpha());
            graphics.lineStyle(1, borderColor.getColor(), 1);
            graphics.drawRect(pos.x, pos.y, size.width, size.height);
            graphics.endFill();
        } else {
            graphics.clear();
        }
    }

    private function addText(text:String) {
        var model:Text = new Text();
        model.value = text;
        var modelView:TextView = new TextView(model);
        add(ElementType.TEXT, modelView);
    }

}