package shared;

class Color {

    public static final LIGHT:Color = new Color(255, 255, 255, 255);
    public static final BLACK:Color = new Color(0, 0, 0, 255);
    public static final PRIMARY:Color = new Color(117, 125, 232, 255);
    public static final GREY:Color = new Color(189, 189, 189, 255);
    public static final TEXT:Color = new Color(54, 54, 54, 255);
    public static final HIGHLIGHT_PRIMARY:Color = new Color(23, 105, 170, 255);
    public static final TRANSPERNCY:Color = new Color(0, 0, 0, 0);
    public static final ERROR:Color = new Color(211, 47, 47, 255);
    public static final WARNING:Color = new Color(237, 108, 2, 255);
    public static final INFO:Color = new Color(2, 136, 209, 255);
    public static final SUCCESS:Color = new Color(46, 125, 50, 255);
    
    @:isVar public var r(get, set):Int;
    @:isVar public var g(get, set):Int;
    @:isVar public var b(get, set):Int;
    @:isVar public var a(get, set):Int;

    public static function create(color:Color):Color {
        return new Color(color.r, color.g, color.b, color.a);
    }

    public function new(r:Int, g:Int, b:Int, a:Int) {
        this.r = r;
        this.g = g;
        this.b = b;
        this.a = a;
    }

    public function getColor():Int {
        return (r * 65536) + (g * 256) + b;
    }

    public function getAlpha():Float {
        return a / 255;
    }

    public function setColor(color:Color):Void {
        this.r = color.r;
        this.g = color.g;
        this.b = color.b;
        this.a = color.a;
    }

    public function rgb(r:Int, g:Int, b:Int) {
        this.r = r;
        this.g = g;
        this.b = b;
    }

    public function rgba(r:Int, g:Int, b:Int, a:Int) {
        this.r = r;
        this.g = g;
        this.b = b;
        this.a = a;
    }

    function get_r() {
        return r;
    }
  
    function set_r(r) {
        return this.r = r;
    }

    function get_g() {
        return g;
    }
    
    function set_g(g) {
        return this.g = g;
    }

    function get_b() {
        return b;
    }
    
    function set_b(b) {
        return this.b = b;
    }

    function get_a() {
        return a;
    }
    
    function set_a(a) {
        return this.a = a;
    }

}