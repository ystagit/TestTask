package elements.snackbar;

import elements.text.TextView;
import elements.text.Text;
import models.IModel;
import shared.Color;
import views.GuiView;

class SnackbarView extends GuiView {
    
    private var textModel:Text;

    public function new(snackbar:Snackbar, controller:SnackbarController) {
        super(snackbar, controller);
        snackbar.addEventListener(SnackbarEvent.SHOW, show);
        snackbar.addEventListener(SnackbarEvent.HIDE, hide);
    }

    public override function initAfterSettingPartner() {
        final parentModel:IModel = getParent().getModel();
        setMaxSize(parentModel);
        
        final snackbar:Snackbar = cast(model, Snackbar);
        snackbar.setSize("100%", "60");
        snackbar.setSnackbarType(Snackbar.DEFAULT);
        
        // Addes Text component
        var modelView:TextView = new TextView(snackbar.message);
        add(ElementType.TEXT, modelView);
    }
}