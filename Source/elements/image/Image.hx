package elements.image;

import models.Model;

class Image extends Model {

    @:isVar public var src(get, set):String;

    function get_src() {
        return src;
    }
  
    function set_src(src) {
        return this.src = src;
    }

}