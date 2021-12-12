package scenes.root;

import openfl.events.EventType;
import openfl.events.EventDispatcher;

class Navigator extends EventDispatcher {
    
    public static final instance:Navigator = new Navigator();
    private static final breadCrumbs:Array<String> = new Array();
    private static var activeSceneType:String;

    private function new () {
        super();
    }

    public function navTo(sceneType:String) {
        if (activeSceneType != sceneType) {
            // Addes new scene to the list 
            breadCrumbs.push(sceneType);
            // Activates last scene
            activeSceneType = sceneType;
            // Updates the scene
            dispatchEvent(new NavEvent(NavEvent.UPDATE_SCENE, sceneType));
        } else {
            trace("Navigate: " + sceneType + " scene is active.");
        }
    }

    public function back() {
        if (breadCrumbs.length > 1) {
            // Removes last scene
            breadCrumbs.pop();
            // Activates last scene of the updated list 
            var newSceneType:String = breadCrumbs[breadCrumbs.length-1];
            activeSceneType = newSceneType;
            // Updates the scene
            dispatchEvent(new NavEvent(NavEvent.UPDATE_SCENE, newSceneType));
        }
    }

    public static function addNavEventListener(type:EventType<NavEvent>, listener:NavEvent->Void): Void {
        Navigator.instance.addEventListener(type, listener);
    }

    public static function open(sceneType:String) {
        Navigator.instance.navTo(sceneType);
    }

    public static function close() {
        Navigator.instance.back();
    }

}