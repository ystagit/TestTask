package elements.snackbar;

import models.ModelEvent;
import controllers.BaseController;

class SnackbarController extends BaseController {
    
    public override function onShow(e:ModelEvent = null):Void {
        final snackbar:Snackbar = cast(model, Snackbar);
        snackbar.setMessage(e.data["message"]);
        snackbar.setSnackbarType(e.data["type"] != null ? e.data["type"] : Snackbar.DEFAULT);
        super.onShow(e);
    }

}