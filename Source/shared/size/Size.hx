package shared.size;

class Size {

    @:isVar public var width(get, set):Float;
    @:isVar public var height(get, set):Float;
    @:isVar public var maxWidth(get, null):Float;
    @:isVar public var maxHeight(get, null):Float;
    private var _width:String;
    private var _height:String;

    public function new(width:Float = 0, height:Float = 0) {
        this.width = width;
        this.height = height;
    }

    function get_width() {
        return width;
    }

    function set_width(width) {
        return this.width = width;
    }

    function get_height() {
        return height;
    }

    function set_height(height) {
        return this.height = height;
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

        if (_width != null) {
            width = parse(_width, maxWidth);
        }

        if (_height != null) {
            height = parse(_height, maxHeight);
        }
    }

    public function setWidth(_width:String) {
        this._width = _width;
        width = parse(_width, maxWidth);
    }

    public function setHeight(_height:String) {
        this._height = _height;
        height = parse(_height, maxHeight);
    }

    /*
    * Parses width or height position to Float 
    * Or calculate width or height position if numStr is percent
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