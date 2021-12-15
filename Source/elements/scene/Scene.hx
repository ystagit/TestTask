package elements.scene;

import models.Model;

class Scene extends Model {
    
    @:isVar public var name(get, null):String;
    @:isVar public var title(get, set):String;

    public function new(name:String) {
        super();
        this.name = name;
    }

    function get_name() {
        return name;
    }

    function get_title() {
        return title;
    }

    function set_title(title) {
        return this.title = title;
    }

}