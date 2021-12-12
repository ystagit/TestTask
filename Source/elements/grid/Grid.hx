package elements.grid;

import models.Model;

class Grid extends Model {
    
    @:isVar public var rowIndex(get,set):Int;
    @:isVar public var xs(get,set):Int;
    @:isVar public var ys(get,set):Int;
    @:isVar public var xp(get,set):Int;
    @:isVar public var yp(get,set):Int;

    function get_rowIndex() {
        return rowIndex;
    }
  
    function set_rowIndex(rowIndex) {
        return this.rowIndex = rowIndex;
    }

    function get_xs() {
        return xs;
    }
  
    function set_xs(xs) {
        return this.xs = xs;
    }

    function get_ys() {
        return ys;
    }
  
    function set_ys(ys) {
        return this.ys = ys;
    }

    function get_xp() {
        return xp;
    }
  
    function set_xp(xp) {
        return this.xp = xp;
    }

    function get_yp() {
        return yp;
    }
  
    function set_yp(yp) {
        return this.yp = yp;
    }

}