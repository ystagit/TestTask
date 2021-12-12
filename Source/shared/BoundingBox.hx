package shared;

import shared.size.Size;

class BoundingBox {

    @:isVar public var minX(get,set):Float;
    @:isVar public var maxX(get,set):Float;
    @:isVar public var minY(get,set):Float;
    @:isVar public var maxY(get,set):Float;

    public function new(pos:Position, size:Size) {
        setBound(pos, size);
    }

    function get_minX() {
        return minX;
    }
  
    function set_minX(minX) {
        return this.minX = minX;
    }

    function get_maxX() {
        return maxX;
    }
  
    function set_maxX(maxX) {
        return this.maxX = maxX;
    }

    function get_minY() {
        return minY;
    }
  
    function set_minY(minY) {
        return this.minY = minY;
    }

    function get_maxY() {
        return maxY;
    }
  
    function set_maxY(maxY) {
        return this.maxY = maxY;
    }

    public function setBound(pos:Position, size:Size) {
        minX = pos.x;
        minY = pos.y;
        maxX = minX + size.width;
        maxY = minY + size.height;
    }

    public function isContainsCursor(p:Point):Bool {
        // the point is inside the rectangle's bounds
        return p.x >= minX     // right of the left edge
            && p.x <= maxX     // left of the right edge
            && p.y >= minY     // below the top
            && p.y <= maxY;     // above the bottom
    }

}