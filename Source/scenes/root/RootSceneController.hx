package scenes.root;

import controllers.BaseController;
import controllers.IMouseHandler;
import openfl.events.MouseEvent;

class RootSceneController extends BaseController 
    implements IMouseHandler {

    public function new(model:RootScene) {
        super(model);
    }

    public function onClickMouse(e:MouseEvent):Void {
        // Listener clicking mouse on root scene
    }

    public function onMoveMouse(e:MouseEvent):Void {
        // Listener moving mouse on root scene
    }

    public function onResizeWindow(w:Int, h:Int):Void {
        model.setMaxSize(w, h);
    }

}