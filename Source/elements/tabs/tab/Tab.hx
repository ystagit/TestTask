package elements.tabs.tab;

import models.Model;

class Tab extends Model {

    @:isVar public var value(get, set):String;
    @:isVar public var active(get, null):Bool;

    function get_value() {
        return value;
    }
  
    function set_value(value) {
        return this.value = value;
    }

    public function get_active():Bool {
        if (Std.isOfType(parentModel, TabList)) {
            var tabList:TabList = cast(parentModel, TabList);
            return tabList.selected == value;
        }

        return false;
    } 

}