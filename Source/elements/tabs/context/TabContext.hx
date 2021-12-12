package elements.tabs.context;

import models.Model;

class TabContext extends Model {

    @:isVar public var value(get, set):String;

    public function new() {
        super();
        padding.left = 20;
        padding.top = 20;
        padding.right = 20;
        padding.bottom = 20;
    }

    function get_value() {
        return value;
    }
  
    function set_value(value) {
        return this.value = value;
    }

}