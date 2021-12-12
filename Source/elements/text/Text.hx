package elements.text;

import openfl.text.TextFormatAlign;
import shared.Color;
import models.Model;

class Text extends Model {

    @:isVar public var value(get, set):String;
    @:isVar public var textColor(get, null):Color;
    @:isVar public var font(get, set):String;
    @:isVar public var fontSize(get, set):Int;
    @:isVar public var alignByVer(get, set):TextFormatAlign;
    @:isVar public var alignByHor(get, set):TextFormatAlign;

    public function new() {
        super();
        font = "Arial";
        fontSize = 14;
        alignByVer = TextFormatAlign.START;
        alignByHor = TextFormatAlign.LEFT;
        textColor = Color.create(Color.TEXT);
        highlight.setColor(Color.TEXT);
    }

    function get_value():String {
        return value;
    }

    function set_value(value:String):String {
        return this.value = value;
    }

    function get_textColor():Color {
        return textColor;
    }

    function get_font():String {
        return font;
    }

    function set_font(font:String):String {
        return this.font = font;
    }

    function get_fontSize():Int {
        return fontSize;
    }

    function set_fontSize(fontSize:Int):Int {
        return this.fontSize = fontSize;
    }

    function get_alignByVer():TextFormatAlign {
        return alignByVer;
    }

    function set_alignByVer(alignByVer:TextFormatAlign):TextFormatAlign {
        return this.alignByVer = alignByVer;
    }

    function get_alignByHor():TextFormatAlign {
        return alignByHor;
    }

    function set_alignByHor(alignByHor:TextFormatAlign):TextFormatAlign {
        return this.alignByHor = alignByHor;
    }

}