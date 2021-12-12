package;

import elements.image.Image;
import elements.image.ImageView;
import elements.modal.ModalEvent;
import elements.img_button.ImgButton;
import elements.snackbar.Snackbar;
import elements.snackbar.SnackbarEvent;
import models.IModel;
import elements.button.Button;
import openfl.events.MouseEvent;
import views.GuiComponent;
import scenes.root.RootSceneController;
import scenes.root.RootScene;
import scenes.root.Navigator;
import scenes.root.RootSceneView;
import openfl.display.Sprite;

class Main extends Sprite {

	private final modal:GuiComponent;
	private final snackbar:GuiComponent;
	
	public function new() {
		super();
		var rootScene:RootScene = new RootScene();
		rootScene.visible = true;
		rootScene.setMaxSize(stage.stageWidth, stage.stageHeight);
		var rootSceneController:RootSceneController = new RootSceneController(rootScene);
		var rootScene:RootSceneView = new RootSceneView(rootScene, rootSceneController, this.stage);
		addChild(rootScene);
		Navigator.open("Main");
		
		modal = rootScene.findChildren("Modal")[0];
		final cells:Array<GuiComponent> = rootScene.findChildrenViaScene("Main", "TabContext/TabPanel[1]/Grid/Grid");
		for (cell in cells) {
			final imgButtons:Array<GuiComponent> = cell.findChildren("ImgButton");
			for (imgButton in imgButtons) {
				imgButton.addEventListener(MouseEvent.CLICK, (e) -> showModal(imgButton.getModel()));
			}
		}

		snackbar = rootScene.findChildren("Snackbar")[0];
		final cells:Array<GuiComponent> = rootScene.findChildrenViaScene("Main", "TabContext/TabPanel[2]/Grid/Grid");
		for (cell in cells) {
			final buttons:Array<GuiComponent> = cell.findChildren("Button");
			for (button in buttons) {
				button.addEventListener(MouseEvent.CLICK, (e) -> showAlert(button.getModel()));
			}
		}
	}

	public function showModal(model:IModel) {
		final imgButton:ImgButton = cast(model, ImgButton);
		final event:ModalEvent = new ModalEvent(ModalEvent.SHOW);
		final imgComponent:GuiComponent = modal.findChildren("Row[1]/Image")[0];
		final img:Image = cast(imgComponent.getModel(), Image);
		img.src = imgButton.image.src;
		modal.getModel().dispatchEvent(event);
	}

	public function showAlert(model:IModel) {
		final button:Button = cast(model, Button);
		final data:Map<String, Dynamic> = ["message" => button.title];
		
		if (StringTools.contains(button.title, "Error")) {
			data["type"] = Snackbar.ERROR;
		} else if (StringTools.contains(button.title, "Warning")) {
			data["type"] = Snackbar.WARNING;
		} else if (StringTools.contains(button.title, "Info")) {
			data["type"] = Snackbar.INFO;
		} else if (StringTools.contains(button.title, "Success")) {
			data["type"] = Snackbar.SUCCESS;
		}
		final event:SnackbarEvent = new SnackbarEvent(SnackbarEvent.SHOW, data);
		snackbar.getModel().dispatchEvent(event);
	}
}
