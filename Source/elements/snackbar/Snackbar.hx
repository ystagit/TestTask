package elements.snackbar;

import openfl.text.TextFormatAlign;
import shared.Color;
import elements.text.Text;
import lime.system.System;
import haxe.Timer;
import models.Model;

class Snackbar extends Model {

    @:isVar public var message(get, null):Text;
    @:isVar public var time(get, set):Int;

    public static final ERROR:String = "error";
    public static final WARNING:String = "warning";
    public static final INFO:String = "info";
    public static final SUCCESS:String = "success";
    public static final DEFAULT:String = "default";

    private var startTime:Int;
    private var timer:Timer;

    public function new() {
        super();
        time = 5000;
        message = new Text();
        message.alignByVer = TextFormatAlign.CENTER;
        message.alignByHor = TextFormatAlign.LEFT;
        message.fontSize = 16;
        message.textColor.setColor(Color.LIGHT);
        message.highlight.setColor(Color.LIGHT);
        message.setPadding(20, 0, 0, 0);
        setMessage("No message!");
    }

    public function setSnackbarType(type:String) {
        switch (type) {
            case ERROR:
                message.textColor.setColor(Color.LIGHT);
                background.setColor(Color.ERROR);
                highlight.setColor(Color.ERROR);
            case WARNING:
                message.textColor.setColor(Color.LIGHT);
                background.setColor(Color.WARNING);
                highlight.setColor(Color.WARNING);
            case INFO:
                message.textColor.setColor(Color.LIGHT);
                background.setColor(Color.INFO);
                highlight.setColor(Color.INFO);
            case SUCCESS:
                message.textColor.setColor(Color.LIGHT);
                background.setColor(Color.SUCCESS);
                highlight.setColor(Color.SUCCESS);
            case DEFAULT:
                message.textColor.setColor(Color.TEXT);
                background.setColor(Color.LIGHT);
                highlight.setColor(Color.LIGHT);
        }
    }

    public override function show() {
        stop();
        timer = new Timer(0);
        startTime = System.getTimer();
        timer.run = run;
    }

    function get_message() {
        return message;
    }
  
    public function setMessage(message):Void {
        this.message.value = message;
    }

    function get_time() {
        return time;
    }
  
    function set_time(time) {
        return this.time = time;
    }

    private function run() {
        super.show();
        final currentTime:Int = System.getTimer();
        if (time < currentTime-startTime) {
            stop();
        }
    }

    private function stop() {
        if (timer != null) {
            timer.stop();
            timer = null;
            // setMessage("No message!");
            // setSnackbarType(Snackbar.DEFAULT);
            dispatchEvent(new SnackbarEvent(SnackbarEvent.HIDE));
        }
    }

}