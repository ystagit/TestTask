package builders;

import elements.ElementType;
import elements.scene.SceneView;
import views.GuiView;
import shared.Color;
import elements.scene.Scene;
import openfl.errors.IllegalOperationError;
import haxe.xml.Access;

class SceneBuilder extends BaseBuilder {

    private final scene:Scene;

    public static function build(node:Access):SceneBuilder {
        return new SceneBuilder(node);
    }

    public function new(node:Access) {
        super(node);
        scene = new Scene(node.att.name);
        initAttributes();
    }

    private function validateRequiredAttrs():Void {
        if (!node.has.name) {
            throw new IllegalOperationError("No 'name' attribute");
        }
    }

    private function initAttributes():Void {
        scene.title = node.has.title ? node.att.title : "No title";
    }

    public function withBackground(color:Color):SceneBuilder {
        scene.setBGColor(color);
        return this;
    }

    public function apply(parentView:GuiView):SceneView {
        final sceneView:SceneView = new SceneView(scene);
        parentView.add(ElementType.SCENE, sceneView);
        return sceneView;
    }

}