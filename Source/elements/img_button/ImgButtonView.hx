package elements.img_button;

import models.ModelEvent;
import elements.image.ImageView;
import openfl.ui.Mouse;
import haxe.xml.Access;
import shared.size.Size;
import shared.Position;
import shared.Color;
import views.GuiView;

class ImgButtonView extends GuiView {

    private final node:Access;

    public function new(imgButton:ImgButton, node:Access) {
        super(imgButton);
        this.node = node;
        isButton = true;
    }

    public override function initAfterSettingPartner() {
        super.initAfterSettingPartner();

        final imgButton:ImgButton = cast(model, ImgButton);
        imgButton.image.src = node.att.src;
        imgButton.setSize("100%", "100%");
        imgButton.setBGColor(Color.TRANSPERNCY);
        
        final imageView:ImageView = new ImageView(imgButton.image);
        add(ElementType.IMAGE, imageView);
    }
    
    override private function draw(e:ModelEvent = null) {
        if (model.visible) {
            var pos:Position = model.getPosition();
            var size:Size = model.getSize();

            var backgroundColor:Color = model.getBGColor();
            
            var shift:Int = 0;
            var borderColor:Color = model.highlight;
            if (isButton && model.hasHover()) {
                borderColor = model.highlight;
                shift = 2;
            } else {
                borderColor = model.borderColor;
            }

            graphics.clear();
            // graphics.beginFill(backgroundColor.getColor(), backgroundColor.getAlpha());
            // graphics.lineStyle(2, borderColor.getColor(), 2);
            graphics.drawRect(pos.x + shift, pos.y + shift, size.width - shift, size.height - shift);
            graphics.endFill();
        } else {
            graphics.clear();
        }
    }

}