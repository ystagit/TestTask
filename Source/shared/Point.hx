package shared;

class Point {
    @:isVar public var x(get, set):Float;
    @:isVar public var y(get, set):Float;

    public function new(x:Float, y:Float) {
        this.x = x;
        this.y = y;
    }

    function get_x() {
        return x;
    }
    
    function set_x(x) {
        return this.x = x;
    }

    function get_y() {
        return y;
    }
    
    function set_y(y) {
        return this.y = y;
    }
}