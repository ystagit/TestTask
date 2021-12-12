package elements.img_button;

import elements.image.Image;
import models.Model;

class ImgButton extends Model {

    @:isVar public var image(get, null):Image;

    public function new() {
        super();
        image = new Image();
    }

    function get_image() {
        return image;
    }

}