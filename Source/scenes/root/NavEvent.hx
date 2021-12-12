package scenes.root;

import openfl.events.EventType;
import openfl.events.Event;

class NavEvent extends Event {

    public static inline var UPDATE_SCENE:EventType<NavEvent> = "updateScene";

    private final sceneName:String;

    public function new(type:String, sceneName:String, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, bubbles, cancelable);
        this.sceneName = sceneName;
    }

    public function getSceneName():String {
        return sceneName;
    }

    public override function clone():Event {
        return new NavEvent(type, sceneName, bubbles, cancelable);
    }
}