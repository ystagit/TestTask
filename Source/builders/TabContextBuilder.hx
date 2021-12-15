package builders;

import elements.tabs.context.TabContextView;
import elements.tabs.context.TabContext;
import elements.ElementType;
import views.GuiView;
import shared.Color;
import haxe.xml.Access;

class TabContextBuilder extends BaseBuilder {

    private final tabContext:TabContext;

    public static function build(node:Access):TabContextBuilder {
        return new TabContextBuilder(node);
    }

    public function new(node:Access) {
        super(node);
        tabContext = new TabContext();
        initAttributes();
    }

    private function validateRequiredAttrs():Void { }

    private function initAttributes():Void {
        tabContext.value = node.has.value ? node.att.value : '0';
    }

    public function withBackground(color:Color):TabContextBuilder {
        tabContext.setBGColor(color);
        return this;
    }

    public function apply(parentView:GuiView):TabContextView {
        final tabContextView:TabContextView = new TabContextView(tabContext);
        parentView.add(ElementType.TAB_CONTEXT, tabContextView);
        return tabContextView;
    }

}