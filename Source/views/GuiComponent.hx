package views;

import openfl.events.Event;
import openfl.events.MouseEvent;
import controllers.BaseController;
import models.ModelEvent;
import controllers.IController;
import models.IModel;
import openfl.errors.IllegalOperationError;
import openfl.display.Sprite;
import haxe.Exception;

class GuiComponent extends Sprite {

    private var parentNode:GuiComposite;
    private final model:IModel;
    private final controller:IController;

    public function new(model:IModel, controller:IController) {
        super();
        this.model = model;
        this.controller = controller != null ? controller : new BaseController(model);
    }

    public function initAfterSettingPartner():Void { }

    public function add(k:String, c:GuiComponent):Void {
        throw new IllegalOperationError("'add' opertion is not supported.");
    }

    public function remove(c:GuiComponent):Void {
        throw new Exception("'remove' opertion is not supported.");
    }

    public function hover(e:MouseEvent):Void { }

    public function show(e:ModelEvent = null):Void { }

    public function hide(e:Event = null):Void { }

    public function resize(e:ModelEvent = null):Void { }

    public function change(e:ModelEvent = null):Void { }

    public function updateAll(e:ModelEvent = null):Void { }

    public function getChildrenLength(k:String):Int {
        return 0;
    }

    public function getChildrenByKey(k:String):Array<GuiComponent> {
        throw new Exception("'getChildrenByKey' opertion is not supported.");
        return null;
    }

    public function getChildByIndex(k:String, i:Int):GuiComponent {
        throw new Exception("'getChildByIndex' opertion is not supported.");
        return null;
    }

    public function findChildren(path:String):Array<GuiComponent> {
        throw new Exception("'findChildren' opertion is not supported.");
        return null;
    }

    public function getModel():IModel {
        return model;
    }

    public function getComposite():GuiComposite {
        return null;
    }

    public function getParent():GuiComposite {
        return parentNode;
    }

    public function setParent(parent:GuiComposite):Void {
        parentNode = parent;
        // Creates a relationship between models
        // For example: Child element must change size if user resizes window
        model.setParentModel(parent.getModel());
        initAfterSettingPartner();
    }


    public function removePartnerRef():Void {
        parentNode = null;
    }

}