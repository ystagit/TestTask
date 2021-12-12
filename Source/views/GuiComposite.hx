package views;

import haxe.ds.Vector;
import haxe.Exception;
import openfl.events.Event;
import openfl.events.MouseEvent;
import shared.size.Size;
import models.ModelEvent;
import controllers.IController;
import models.IModel;

class GuiComposite extends GuiComponent {

    private final childern:Map<String, Array<GuiComponent>>;

    public function new(model:IModel, controller:IController) {
        super(model, controller);
        childern = [];
    }

    public override function initAfterSettingPartner() {
        final parentModel:IModel = getParent().getModel();
        setMaxSize(parentModel);

        if (parentModel.visible) {
            show();
        } else {
            hide();
        }
    }

    public override function add(k:String, c:GuiComponent) {
        var elements:Array<GuiComponent> = childern[k];
        if (elements == null) {
            elements = new Array();
        }
        elements.push(c);
        childern[k] = elements;
        c.setParent(this);
        addChild(c); // Display object is added to the display list
    }

    public override function getChildrenLength(k:String):Int {
        return childern[k] != null ? childern[k].length : 0;
    }

    public override function getChildrenByKey(k:String):Array<GuiComponent> {
        return childern[k];
    }

    public override function findChildren(path:String):Array<GuiComponent> {
        final elements:Array<Vector<Dynamic>> = parsePath(path);
        var _childern:Array<GuiComponent> = null;
        var _foundChild:GuiComponent = this;

        for (element in elements) {
            _childern = _foundChild.getChildrenByKey(element[0]);

            if (_childern == null || _childern.length == 0) {
                break;
            }

            _foundChild = _childern[element[1]];
            if (_foundChild == null) {
                _childern = null;
                break;
            }

        }
        return _childern;
    }

    public override function getChildByIndex(k:String, i:Int):GuiComponent {
        var elements:Array<GuiComponent> = childern[k];
        if (i > 0 && i <= elements.length) {
            return elements[i-1];
        } else {
            return null;
        }
    }

    public override function hover(e:MouseEvent):Void {
        controller.onHover(e);

        for (elements in childern) {
            for (el in elements) {
                el.hover(e);
            }
        }
    }

    public override function show(e:ModelEvent = null):Void {
        if (e != null) {
        trace(e.data);
        }
        controller.onShow(e);

        for (elements in childern) {
            for (el in elements) {
                el.show(e);
            }
        }
    }

    public override function hide(e:Event = null):Void {
        controller.onHide(e);

        for (elements in childern) {
            for (el in elements) {
                el.hide(e);
            }
        }
    }

    public override function resize(e:ModelEvent = null) {
        controller.onSyncResize();

        for (elements in childern) {
            for (el in elements) {
                el.resize(e);
            }
        }
    }

    public override function change(e:ModelEvent = null):Void {
        controller.onUpdate(e);

        for (elements in childern) {
            for (el in elements) {
                el.change(e);
            }
        }
    }

    public override function updateAll(e:ModelEvent = null) {
        controller.onUpdate(e);

        for (elements in childern) {
            for (el in elements) {
                el.updateAll(e);
            }
        }
    }

    public override function remove(c:GuiComponent):Void {
        for (elements in childern) {
            if (c == this) {
                for (i in 0...elements.length) {
                    safeRemove(elements[i]);
                }

                elements = [];
                removePartnerRef();
            } else {
                for (j in 0...elements.length) {
                    safeRemove(elements[j]);
                    elements.splice(j, 1);
                }
            }
        }
    }

    private function safeRemove(c:GuiComponent):Void {
        if (c.getComposite() != null) {
            c.remove(c); // There is GuiComposite
        } else {
            c.removePartnerRef();
        }
    }

    public override function getComposite():GuiComposite {
        return this;
    }

    private function setMaxSize(parentModel:IModel) {
        var size:Size = parentModel.getSize();
        model.setMaxSize(size.width, size.height);
    }

    private function parsePath(path:String):Array<Vector<Dynamic>> {
        final result:Array<Vector<Dynamic>> = new Array();
        final names:Array<String> = path.split("/");

        for (name in names) {
            if (~/^[a-zA-Z]+\[\d+\]$/m.match(name)
                || ~/^[a-zA-Z]+$/m.match(name)) 
            {
                final vector:Vector<Dynamic> = new Vector(2);
                final arr:Array<String> = ~/\[|\]+/g.split(name);
                vector[0] = arr[0]; // String is <???> tab name
                vector[1] = arr[1] != null ? Std.parseInt(arr[1]) : 0; // Int is array index
                result.push(vector);
            } else {
                throw new Exception('$name name is invalid in path: $path');
            }
        }

        return result;
    }

}