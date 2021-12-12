package controllers;

import openfl.events.Event;
import models.ModelEvent;
import openfl.events.MouseEvent;
import shared.Point;

class BaseController implements IController {
    
    private final model:Dynamic;

    public function new(model:Dynamic) {
        this.model = model;
    }

    public function onUpdate(e:ModelEvent = null):Void {
        model.update();
    }

    public function onShow(e:ModelEvent = null):Void {
        model.show();
    }

    public function onHide(e:Event = null):Void {
        model.hide();
    }

    public function onHover(e:MouseEvent):Void {
        var p:Point = new Point(e.stageX, e.stageY);
        model.hover(p);
    }

    public function onResize(w:Int, h:Int):Void {
        model.setMaxSize(w, h);
    }

    public function onSyncResize():Void {
        model.syncMaxSize();
    }

}