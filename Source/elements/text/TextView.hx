package elements.text;

import models.ModelEvent;
import openfl.events.MouseEvent;
import elements.button.ButtonView;
import elements.tabs.tab.TabView;
import openfl.text.TextFormatAlign;
import shared.size.Size;
import openfl.text.TextFormat;
import shared.Position;
import shared.Color;
import openfl.text.TextField;
import views.GuiView;

class TextView extends GuiView {
    
    private final textField:TextField;
    private final format:TextFormat;

    public function new(text:Text) {
        super(text);
        textField = new TextField();
        format = new TextFormat();
        textField.addEventListener(MouseEvent.MOUSE_WHEEL, onScroll);
    }

    public override function initAfterSettingPartner() {
        super.initAfterSettingPartner();
        
        if (Std.isOfType(getParent(), TabView) 
            || Std.isOfType(getParent(), ButtonView)) 
        {
            var text:Text = cast(model, Text);
            text.alignByVer = TextFormatAlign.CENTER;
            text.alignByHor = TextFormatAlign.CENTER;
            text.fontSize = 20;
            text.textColor.setColor(Color.PRIMARY);
            text.highlight.setColor(Color.HIGHLIGHT_PRIMARY);
        }

        addChild(textField);
    }

    override private function draw(e:ModelEvent = null) {
        if (model.visible) {
            var textElement:Text = cast(model, Text);
            var pos:Position = textElement.getPosition();
            var size:Size = textElement.getSize();

            textField.visible = true;
            textField.selectable = false;
            format.font = textElement.font;
            format.size = textElement.fontSize;
            format.align = textElement.alignByHor;
            textField.width = size.width;    
            textField.height = size.height;
            textField.textColor = (textElement.hasHover()) 
                ? textElement.highlight.getColor() 
                : textElement.textColor.getColor();
            textField.text = textElement.value;
            textField.setTextFormat(format);

            textField.x = pos.x;
             if (TextFormatAlign.CENTER == textElement.alignByVer) {
                textField.y = pos.y + (textField.height - textField.textHeight) * 0.5 - 2;
            } else if (TextFormatAlign.START == textElement.alignByVer) {
                textField.y = pos.y;
            }
        } else {
            graphics.clear();
            textField.visible = false; 
        }
    }

    private function onScroll(e:MouseEvent):Void {
		if (e.delta > 0) {
			textField.scrollH += 30;
		} else if (e.delta < 0) {
			textField.scrollH -= 30;
		}
	}

}