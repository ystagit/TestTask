package builders;

import haxe.xml.Access;

abstract class BaseBuilder {

    @:isVar public var node(get, null):Access;

    public function new(node:Access) {
        this.node = node;
        validateRequiredAttrs();
    }

    function get_node() {
        return node;
    }

    abstract function validateRequiredAttrs():Void;

    abstract function initAttributes():Void;

}