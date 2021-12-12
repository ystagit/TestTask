package elements.modal;

import openfl.events.MouseEvent;
import elements.button.ButtonView;
import elements.button.Button;
import elements.text.TextView;
import elements.text.Text;
import elements.row.RowView;
import elements.row.Row;
import controllers.IController;
import models.IModel;
import views.GuiView;

class ModalView extends GuiView {
    
    public function new(model:IModel, controller:IController = null) {
        super(model, controller);
        model.addEventListener(ModalEvent.SHOW, show);
    }

    public override function initAfterSettingPartner() {
        super.initAfterSettingPartner();
        final modal:Modal = cast(model, Modal);
        modal.visible = false;

        // Addes title in row
        final titleRow:RowView = addRow("100%", "10%");
        final bodyRow:RowView = addRow("100%", "80%");
        final bottomRow:RowView = addRow("100%", "10%");

        modal.title.value = "It's my title";
        final modelView:TextView = new TextView(modal.title);
        titleRow.add(ElementType.TEXT, modelView);

        final button:Button = new Button();
        button.title = "OK";
        final buttonView:ButtonView = new ButtonView(button);
        buttonView.addEventListener(MouseEvent.CLICK, (e) -> hide());
        bottomRow.add(ElementType.BUTTON, buttonView);
    }

    private function addRow(w:Dynamic, h:Dynamic):RowView {
        final row:Row = new Row();
        row.setSize(w, h);
        final rowView:RowView = new RowView(row);
        add(ElementType.ROW, rowView);
        return rowView;
    }

}