package builders;

import views.GuiView;
import haxe.xml.Access;
import sys.io.File;
import lime.system.System;
import haxe.io.Path;

class AppBuilder {
    
    private var xmlContent:String;

    public function new(xmlFile:String) {
        var appDir:String = Path.normalize(System.applicationDirectory).split('TestTask')[0];
        xmlContent = File.getContent(appDir + "TestTask/Assets/" + xmlFile);
    }

    public static function load(xmlFile:String = "app.xml"):AppBuilder {
        return new AppBuilder(xmlFile);
    }

    public function buildScene(parentView:GuiView) {
        var xml:Xml = Xml.parse(xmlContent);
        var rootNode = new Access(xml.firstElement());
        for (node in rootNode.elements) {
            buildElement(parentView, node);
        }
    }

    private function buildElement(parentView:GuiView, node:Access) {
        parentView = ElementBuilder.build(parentView, node);
        for (node in node.elements) {
            if (parentView != null) {
                buildElement(parentView, node);
            }
        }
    }

}