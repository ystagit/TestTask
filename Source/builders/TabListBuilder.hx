package builders;

import elements.tabs.TabListView;
import elements.tabs.TabListController;
import elements.tabs.TabList;
import elements.ElementType;
import views.GuiView;
import shared.Color;
import haxe.xml.Access;

class TabListBuilder extends BaseBuilder {

    private final tabList:TabList;

    public static function build(node:Access):TabListBuilder {
        return new TabListBuilder(node);
    }

    public function new(node:Access) {
        super(node);
        tabList = new TabList();
        initAttributes();
    }

    private function validateRequiredAttrs():Void { }

    private function initAttributes():Void { }

    public function withCountTab(n:Int):TabListBuilder {
        tabList.count = n;
        return this;
    }

    public function withBackground(color:Color):TabListBuilder {
        tabList.setBGColor(color);
        return this;
    }

    public function withSize(w:Dynamic, h:Dynamic):TabListBuilder {
        tabList.setSize(w, h);
        return this;
    }

    public function apply(parentView:GuiView):TabListView {
        final tabListController:TabListController = new TabListController(tabList);
        final tabListView:TabListView = new TabListView(tabList, tabListController);
        parentView.add(ElementType.TAB_LIST, tabListView);
        return tabListView;
    }

}