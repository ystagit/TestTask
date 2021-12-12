package elements.scene;

import models.ModelEvent;
import controllers.IController;
import models.IModel;
import views.GuiView;

class SceneView extends GuiView {
    
    public function new(model:IModel, controller:IController = null) {
        super(model, controller);
        model.addEventListener(ModelEvent.UPDATE_ALL, updateAll);
    }

}