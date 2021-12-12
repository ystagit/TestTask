package elements.tabs;

import elements.tabs.context.TabContext;
import models.Model;

class TabList extends Model {
    
    @:isVar public var count(get,set):Int;
    @:isVar public var selected(get,set):String;

    function get_count() {
        return count;
    }
  
    function set_count(count) {
        return this.count = count;
    }

    function get_selected() {
        return selected;
    }
  
    function set_selected(selected) {
        return this.selected = selected;
    }

    public function changeTabContext() {
        // Updates value of <TabContext> element
        if (Std.isOfType(parentModel, TabContext)) {
            var tabContext:TabContext = cast(parentModel, TabContext);
            tabContext.value = selected;
            dispatchEvent(new TabListEvent(TabListEvent.CHANGE_TAB_CONTEXT, selected));
        }
    }
}