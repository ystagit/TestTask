package shared;

class Padding {

    @:isVar public var top(get,set):Float;
    @:isVar public var right(get,set):Float;
    @:isVar public var bottom(get,set):Float;
    @:isVar public var left(get,set):Float;

    public function new() {
        top = 0;
        right = 0;
        bottom = 0;
        left = 0;
    }

    function get_top() {
        return top;
    }
  
    function set_top(top) {
        return this.top = top;
    }

    function get_right() {
        return right;
    }
  
    function set_right(right) {
        return this.right = right;
    }

    function get_bottom() {
        return bottom;
    }
  
    function set_bottom(bottom) {
        return this.bottom = bottom;
    }

    function get_left() {
        return left;
    }
  
    function set_left(left) {
        return this.left = left;
    }

}