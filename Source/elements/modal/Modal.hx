package elements.modal;

import openfl.text.TextFormatAlign;
import shared.Color;
import elements.text.Text;
import models.Model;

class Modal extends Model {
    
    @:isVar public var title(get, null):Text;

    public function new() {
        super();
        title = new Text();
        initTitle();
    }

    private function initTitle() {
        title.alignByVer = TextFormatAlign.CENTER;
        title.alignByHor = TextFormatAlign.LEFT;
        title.fontSize = 20;
        title.textColor.setColor(Color.TEXT);
        title.highlight.setColor(Color.TEXT);
        title.setPadding(20, 0, 0, 0);
    }

    function get_title():Text {
        return title;
    }

}