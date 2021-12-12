package elements.button;

import models.Model;

class Button extends Model {

    @:isVar public var title(get, set):String;

    function get_title() {
        return title;
    }
  
    function set_title(title) {
        return this.title = title;
    }

}