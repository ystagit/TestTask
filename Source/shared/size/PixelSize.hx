package shared.size;

class PixelSize extends Size {
    
    public function setMaxSize(w:Float, h:Float):Void {
        maxWidth = w;
        maxHeight = h;
    }

    public function setSize(w:Float, h:Float):Void {
        width = w;
        height = h;
    }

}