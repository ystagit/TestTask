package shared.align;

import shared.size.Size;
import models.IModel;

class Align {

    @:isVar public var alignTypeByVer(get, set):AlignType;
    @:isVar public var alignTypeByHor(get, set):AlignType;

    public function new(alignTypeByVer:AlignType, alignTypeByHor:AlignType) {
        this.alignTypeByVer = alignTypeByVer;
        this.alignTypeByHor = alignTypeByHor;
    }

    function get_alignTypeByVer() {
        return alignTypeByVer;
    }

    function set_alignTypeByVer(type) {
        return this.alignTypeByVer = type;
    }

    function get_alignTypeByHor() {
        return alignTypeByHor;
    }

    function set_alignTypeByHor(type) {
        return this.alignTypeByHor = type;
    }

    public function align(currentElement:IModel, parentElement:IModel) {

        if (parentElement == null) {
            return;
        }

        var currentElPos:Position = currentElement.getPosition();
        var currentElSize:Size = currentElement.getSize();
        var parentElPos:Position = parentElement.getPosition();
        var parentElSize:Size = parentElement.getSize();

        if (alignTypeByVer.equals(AlignType.TOP)) {
            currentElPos.y = parentElPos.y;
        } else if (alignTypeByVer.equals(AlignType.BOTTOM)) {
            currentElPos.y = parentElPos.y + parentElSize.height;
            currentElPos.y =- parentElSize.height;
        } else if (alignTypeByVer.equals(AlignType.CENTER)) {
            currentElPos.y = parentElPos.y + parentElSize.height * 0.5;
            currentElPos.y = currentElPos.y - currentElSize.height * 0.5;
        }

        if (alignTypeByHor.equals(AlignType.RIGHT)) {
            currentElPos.x = parentElPos.x + parentElSize.width;
            currentElPos.x =- parentElSize.width;
        } else if (alignTypeByHor.equals(AlignType.LEFT)) {
            currentElPos.x = parentElPos.x;
        } else if (alignTypeByHor.equals(AlignType.CENTER)) {
            currentElPos.x = parentElPos.x + parentElSize.width * 0.5;
            currentElPos.x = currentElPos.x - currentElSize.width * 0.5;
        }

    }

}