package shared.size;

class PercentSize extends Size {
    
    private var widthInPer:Float = 100;
    private var heightInPer:Float = 100;

    public function setMaxSize(w:Float, h:Float):Void {
        maxWidth = w;
        maxHeight = h;
        clacSize();
    }

    public function setSize(w:Float, h:Float):Void {
        if (w >= 0 && w <= 100 || h >= 0 && h <= 100) {
            widthInPer = w;
            heightInPer = h;
            clacSize();
        }
    }

    private function clacSize():Void {
		width = Math.round(maxWidth * widthInPer * 0.01);
		height = Math.round(maxHeight * heightInPer * 0.01);
	}

}