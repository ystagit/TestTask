package shared.size;

class SizeManager {
    
    public static function getSize(sizeType:SizeType):Size {
        switch (sizeType) {
            case PIXEL:
                return new PixelSize();
            case PERCENT:
                return new PercentSize();
        }
    }

}