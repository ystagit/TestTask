package models;

import models.ModelEvent;
import openfl.events.EventType;
import openfl.events.Event;

class SceneEvent extends ModelEvent {

    public static inline var RESIZE_SCENE:EventType<SceneEvent> = "update";

    public function new(type:String, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, bubbles, cancelable);
    }

    public override function clone():Event {
        return new SceneEvent(type, bubbles, cancelable);
    }
}