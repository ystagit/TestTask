package models;

import shared.Color;
import shared.Padding;
import shared.Position;
import shared.size.Size;
import openfl.events.IEventDispatcher;

interface IModel extends IEventDispatcher {

    @:isVar public var visible(get, set):Bool;
    @:isVar public var borderColor(get, null):Color;
	@:isVar public var highlight(get, null):Color;

    public function getPadding():Padding;

    public function setPadding(top:Int, right:Int, bottom:Int, left:Int):Void;

    public function getPosition():Position;

    public function setPosition(x:Dynamic, y:Dynamic):Void;

    public function getSize():Size;

    public function setSize(width:Dynamic, height:Dynamic):Void;

    public function setMaxSize(w:Float, h:Float):Void;

    public function hasHover():Bool;

    public function getBGColor():Color;

    public function setParentModel(model:IModel):Void;

}