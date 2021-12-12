package scenes.root;

import elements.scene.Scene;
import views.GuiComponent;
import elements.snackbar.SnackbarController;
import elements.snackbar.SnackbarView;
import elements.snackbar.Snackbar;
import elements.ElementType;
import builders.AppBuilder;
import models.ModelEvent;
import views.GuiView;
import openfl.events.Event;
import openfl.display.Stage;
import openfl.events.MouseEvent;
import controllers.IController;
import models.IModel;

class RootSceneView extends GuiView {
    
    private var target:Stage;

    public function new(model:IModel, controller:IController, target:Stage) {
        super(model, controller);
        this.target = target;
        init();
        initEventListeners();
    }

    public function findChildrenViaScene(sceneName:String, path:String):Array<GuiComponent> {
        final scenes:Array<GuiComponent> = findChildren("Scene");
        for (scene in scenes) {
            final sceneModel:Scene = cast(scene.getModel(), Scene);
            if (sceneModel.name == sceneName) {
                return scene.findChildren(path);
            }
		}
        return null;
    }

    private function init() {
        AppBuilder.load().buildScene(this);
        final snackbar:Snackbar = new Snackbar();
        final controller:SnackbarController = new SnackbarController(snackbar);
        final snackbarView:SnackbarView = new SnackbarView(snackbar, controller);
        add(ElementType.SNACKBAR, snackbarView);
    }

    private function initEventListeners() {
        target.addEventListener(Event.RESIZE, onResizeWindow);
        target.addEventListener(ModelEvent.SYNC_RESIZE, resize);
        target.addEventListener(MouseEvent.CLICK, onClickMouse);
        target.addEventListener(MouseEvent.MOUSE_MOVE, hover);
        Navigator.addNavEventListener(NavEvent.UPDATE_SCENE, onUpdateScene);
    }

    private function onUpdateScene(e:NavEvent) {
        var sceneName:String = e.getSceneName();

        final scenes:Array<GuiComponent> = findChildren("Scene");

        for (scene in scenes) {
            final sceneModel:Scene = cast(scene.getModel(), Scene);

            if (scene.visible) {
                scene.hide();
            }

            if (sceneModel.name == sceneName) {
                scene.show();
                trace(sceneName + " scene is opened.");
            }
        }
    }

    private function onResizeWindow(e:Event) {
        controller.onResize(target.stageWidth, target.stageHeight);
    }

    private function onClickMouse(e:MouseEvent) {
        cast(controller, RootSceneController).onClickMouse(e);
    }

}