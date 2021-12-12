package elements.image;

import models.ModelEvent;
import shared.size.Size;
import shared.Position;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.utils.Assets;
import views.GuiView;

class ImageView extends GuiView {
    
    private var imageSrc:String;
    private final bitmap:Bitmap;

    public function new(image:Image) {
        super(image);
        imageSrc = image.src;
        final bitmapData:BitmapData = Assets.getBitmapData(image.src);
        bitmap = new Bitmap(bitmapData);
    }

    public override function initAfterSettingPartner() {
        super.initAfterSettingPartner();
        final img:Image = cast(model, Image);
        final imagePos:Position = img.getPosition();
        final imageSize:Size = img.getSize();
        bitmap.x = imagePos.x;
        bitmap.y = imagePos.y;
        bitmap.width = imageSize.width;
        bitmap.height = imageSize.height;
        addChild(bitmap);
    }

    override private function draw(e:ModelEvent = null) {
        
        if (model.visible) {
            final img:Image = cast(model, Image);
            final imagePos:Position = img.getPosition();
            final imageSize:Size = img.getSize();

            if (imageSrc != img.src) {
                bitmap.bitmapData = Assets.getBitmapData(img.src);
                imageSrc = img.src;
            }

            bitmap.visible = true;
            bitmap.x = imagePos.x;
            bitmap.y = imagePos.y;
            bitmap.width = imageSize.width;
            bitmap.height = imageSize.height;
        } else {
            bitmap.visible = false;
        }
    }

}