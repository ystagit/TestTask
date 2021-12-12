package elements.modal;

import models.ModelEvent;
import openfl.events.EventType;

class ModalEvent extends ModelEvent {

    public static inline var SHOW:EventType<ModalEvent> = "showModal";

    public static inline var HIDE:EventType<ModalEvent> = "hideModal";

    public function new(type:String, data:Map<String, Dynamic> = null, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, data, bubbles, cancelable);
    }

}