package models;

import openfl.events.EventType;
import openfl.events.Event;

class ModelEvent extends Event {

    public static inline var UPDATE_ALL:EventType<ModelEvent> = "updateAll";

    public static inline var DRAW:EventType<ModelEvent> = "draw";

    public static inline var SYNC_RESIZE:EventType<ModelEvent> = "syncResize";

    @:isVar public var data(get, null):Map<String, Dynamic>;

    public function new(type:String, data:Map<String, Dynamic> = null, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, bubbles, cancelable);
        this.data = data != null ? data : [];
    }

    function get_data() {
        return data;
    }

    public override function clone():Event {
        return new ModelEvent(type, data, bubbles, cancelable);
    }
}