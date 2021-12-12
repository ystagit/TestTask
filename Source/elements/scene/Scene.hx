package elements.scene;

import models.ModelEvent;
import models.Model;

class Scene extends Model {
    
    @:isVar public var name(get, null):String;

    public function new(name:String) {
        super();
        this.name = name;
    }

    function get_name() {
        return name;
    }

}