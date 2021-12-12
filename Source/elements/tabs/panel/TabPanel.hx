package elements.tabs.panel;

import models.Model;

class TabPanel extends Model {

    @:isVar public var value(get, set):String;

    function get_value() {
        return value;
    }
  
    function set_value(value) {
        return this.value = value;
    }

}