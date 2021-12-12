package elements.grid;

import models.ModelEvent;
import shared.size.Size;
import shared.Position;
import views.GuiComponent;
import haxe.xml.Access;
import shared.Color;
import views.GuiView;

class GridView extends GuiView {
    
    private var node:Access;

    public function new(grid:Grid, node:Access) {
        super(grid);
        this.node = node;
    }

    public override function initAfterSettingPartner() {
        final grid:Grid = cast(model, Grid);
        grid.xs = Std.parseInt(node.att.xs);
        grid.ys = Std.parseInt(node.att.ys);
        var width:String = '${grid.xs * 100 / 12}%';
        var height:String = '${grid.ys * 100 / 12}%';
        grid.setSize(width, height);

        final parentView:GuiView = cast(getParent(), GuiView);
        final lastIndexOfElement = parentView.getChildrenLength("Grid") - 1;
        final lastChild:GuiComponent = parentView.getChildByIndex("Grid", lastIndexOfElement);

        if (lastChild != null && Std.isOfType(lastChild, GridView)) {
            final otherGridView:GridView = cast(lastChild, GridView);
            final otherGrid:Grid = cast(otherGridView.getModel(), Grid);
            final _xs:Int = otherGrid.xp + otherGrid.xs + grid.xs;

            if (_xs <= 12) {
                grid.rowIndex = otherGrid.rowIndex;
                grid.xp = otherGrid.xs;
                var x:String = '${otherGrid.xs * 100 / 12}%';
                var y:String = '${otherGrid.ys * 100 / 12 * grid.rowIndex}%';
                grid.setPosition(x, y);
            } else {
                grid.rowIndex = otherGrid.rowIndex + 1;
                grid.xp = 0;
                var x:String = '0';
                var y:String = '${otherGrid.ys * 100 / 12 * grid.rowIndex}%';
                grid.setPosition(x, y);
            }
        }

        grid.borderColor.setColor(Color.GREY);
        grid.highlight.setColor(Color.GREY);
        grid.setBGColor(Color.LIGHT);
        
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
}