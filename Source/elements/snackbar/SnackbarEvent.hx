package elements.snackbar;

import models.ModelEvent;
import openfl.events.EventType;

class SnackbarEvent extends ModelEvent {

    public static inline var SHOW:EventType<SnackbarEvent> = "showSnackbae";

    public static inline var HIDE:EventType<SnackbarEvent> = "hideSnackbar";

    public function new(type:String, data:Map<String, Dynamic> = null, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, data, bubbles, cancelable);
    }

}