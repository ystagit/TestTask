package controllers;

import openfl.events.Event;
import models.ModelEvent;
import openfl.events.MouseEvent;

interface IController {

    public function onUpdate(e:ModelEvent = null):Void;

    public function onShow(e:ModelEvent = null):Void;

    public function onHide(e:Event = null):Void;

    public function onHover(e:MouseEvent):Void;

    public function onResize(w:Int, h:Int):Void;

    public function onSyncResize():Void;

}