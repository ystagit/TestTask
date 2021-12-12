package views;

import shared.Color;
import shared.Position;
import models.ModelEvent;
import shared.size.Size;
import controllers.IController;
import models.IModel;

abstract class GuiView extends GuiComposite {

    private var isButton:Bool = false;

    public function new(model:IModel, controller:IController = null) {
        super(model, controller);
        model.addEventListener(ModelEvent.DRAW, draw);
        model.addEventListener(ModelEvent.SYNC_RESIZE, onSyncResize);
    }

    public function onSyncResize(e:ModelEvent) {
        super.resize();
    }
    
    private function draw(e:ModelEvent = null) {
        if (model.visible) {
            var pos:Position = model.getPosition();
            var size:Size = model.getSize();

            var color:Color = model.highlight;
            if (isButton && model.hasHover()) {
                color = model.highlight;
            } else {
                color = model.getBGColor();
            }

            graphics.clear();
            graphics.beginFill(color.getColor(), color.getAlpha());
            graphics.drawRect(pos.x, pos.y, size.width, size.height);
            graphics.endFill();
        } else {
            graphics.clear();
        }
    }
}