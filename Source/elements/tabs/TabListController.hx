package elements.tabs;

import models.IModel;
import controllers.BaseController;

class TabListController extends BaseController {
    
    public function new(model:TabList) {
        super(model);
    }

    public function onSelect(value:String) {
        var tabList:TabList = cast(model, TabList);
        if (tabList.selected != value) {
            tabList.selected = value;
            tabList.changeTabContext();
        }
        
    }

}