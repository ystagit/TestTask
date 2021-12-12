package elements.tabs;

import models.ModelEvent;
import openfl.events.EventType;
import openfl.events.Event;

class TabListEvent extends ModelEvent {

    public static inline var CHANGE_TAB_CONTEXT:EventType<ModelEvent> = "changeTabContext";

    @:isVar public var selected(get, null):String;

    public function new(type:String, selected:String, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, bubbles, cancelable);
        this.selected = selected;
    }

    function get_selected() {
        return selected;
    }


    public override function clone():Event {
        return new TabListEvent(type, selected, bubbles, cancelable);
    }
}