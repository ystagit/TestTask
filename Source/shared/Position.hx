package shared;

class Position {

    @:isVar public var x(get, set):Float;
    @:isVar public var y(get, set):Float;
    @:isVar public var maxWidth(get, null):Float;
    @:isVar public var maxHeight(get, null):Float;
    private var _x:String;
    private var _y:String;

    public function new(x:Float = 0, y:Float = 0) {
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

    function get_maxWidth() {
        return maxWidth;
    }

    function get_maxHeight() {
        return maxHeight;
    }

    public function setMaxSize(w:Float, h:Float):Void {
        maxWidth = w;
        maxHeight = h;

        if (_x != null) {
            x = parse(_x, maxWidth);
        }

        if (_y != null) {
            y = parse(_y, maxHeight);
        }
    }

    public function setX(_x:String) {
        this._x = _x;
        x = parse(_x, maxWidth);
    }

    public function setY(_y:String) {
        this._y = _y;
        y = parse(_y, maxHeight);
    }

    /*
    * Parses x or y position to Float 
    * Or calculate x or y position if numStr is percent
    */
    private function parse(numStr:String, max:Float):Float {
        var result:Float = 0;
        var lastChar:String = numStr.charAt(numStr.length-1);
        
        if (lastChar == "%") {
            var numStrInPer:String = numStr.substring(0, numStr.length-1);
            var numInPer:Float = Std.parseFloat(numStrInPer);
            result = max * numInPer * 0.01;
        } else {
            result = Std.parseFloat(numStr);
        }

        return result;
    }
}