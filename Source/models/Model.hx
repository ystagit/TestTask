package models;

import shared.align.AlignType;
import shared.align.Align;
import shared.Point;
import shared.BoundingBox;
import shared.Padding;
import shared.Color;
import openfl.events.EventDispatcher;
import shared.Position;
import shared.size.Size;

class Model extends EventDispatcher implements IModel {

	@:isVar public var visible(get, set):Bool;
	@:isVar public var borderColor(get, null):Color;
	@:isVar public var highlight(get, null):Color;
	@:isVar public var align(get, null):Align;

	private var parentModel:IModel;
	private final position:Position;
	private final _position:Position;
	private final size:Size;
	private final _size:Size;
	private final background:Color;
	private final padding:Padding;
	private final boundingBox:BoundingBox;
	private var isHover:Bool;

	public function new() {
		super();
		position = new Position();
		_position = new Position();
		size = new Size();
		_size = new Size();
		borderColor = Color.create(Color.PRIMARY);
		background = Color.create(Color.LIGHT);
		highlight = Color.create(Color.HIGHLIGHT_PRIMARY);
		align = new Align(AlignType.TOP, AlignType.LEFT);
		padding = new Padding();
		boundingBox = new BoundingBox(position, size);
		setSize("100%", "100%");
	}

	function get_visible() {
        return visible;
    }
  
    function set_visible(visible) {
        return this.visible = visible;
    }

	function get_align() {
        return align;
    }

	public function setParentModel(model:IModel):Void {
		parentModel = model;
		update();
	}

	public function getPadding():Padding {
		return padding;
	}

	public function setPadding(left:Int, top:Int, right:Int, bottom:Int):Void {
		padding.top = top;
		padding.right = right;
		padding.bottom = bottom;
		padding.left = left;
	}

	public function getPosition():Position {
		return position;
	}

	public function setPosition(x:Dynamic, y:Dynamic):Void {
		if (Std.isOfType(x, Float)) {
			_position.x = x;
		} else if (Std.isOfType(x, String)) {
			_position.setX(x);
		}

		if (Std.isOfType(y, Float)) {
			_position.y = y;
		} else if (Std.isOfType(y, String)) {
			_position.setY(y);
		}

		applyPosision();
	}

	public function getSize():Size {
		return size;
	}

	public function setSize(width:Dynamic, height:Dynamic):Void {
		if (Std.isOfType(width, Float)
			|| Std.isOfType(width, Int)) 
		{
			_size.width = width;
		} else if (Std.isOfType(width, String)) {
			_size.setWidth(width);
		}

		if (Std.isOfType(height, Float)
			|| Std.isOfType(height, Int)) 
		{
			_size.height = height;
		} else if (Std.isOfType(height, String)) {
			_size.setHeight(height);
		}

		applySize();
	}

	public function setMaxSize(w:Float, h:Float):Void {
		_size.setMaxSize(w, h);
		_position.setMaxSize(w, h);
		syncResize();
		update();
	}

	/*
	 * Synchronizes max size from parent model
	 */
	public function syncMaxSize():Void {
		if (parentModel != null) {
			var parentSize:Size = parentModel.getSize();
			_size.setMaxSize(parentSize.width, parentSize.height);
			_position.setMaxSize(parentSize.width, parentSize.height);
		}

		update();
	}

	function get_highlight():Color {
        return highlight;
    }

	function get_borderColor():Color {
        return borderColor;
    }

	public function getBGColor():Color {
		return background;
	}

	public function setBGColor(color:Color):Void {
		background.setColor(color);
	}

	public function syncResize():Void {
		dispatchEvent(new ModelEvent(ModelEvent.SYNC_RESIZE));
	}

	public function hasHover():Bool {
		return isHover;
	}

	public function show():Void {
		visible = true;
		update();
	}

	public function hide():Void {
		visible = false;
		update();
	}

	public function hover(p:Point):Void {
		if (parentModel != null) {
			isHover = boundingBox.isContainsCursor(p);
			update();
		}
	}

	public function update():Void {
		align.align(cast(this, IModel), parentModel);
		applyPosision();
		applySize();
		applyPadding();
		updateBound();
		dispatchEvent(new ModelEvent(ModelEvent.DRAW));
	}

	/*
	 * Corretcs global position of the element by a parent element
	 */
	private function applyPosision():Void {
		position.x = position.x + _position.x;
		position.y = position.y + _position.y;
	}

	private function applySize():Void {
		size.width = _size.width;
		size.height = _size.height;
	}

	private function applyPadding():Void {
		position.x = position.x + padding.left;
		position.y = position.y + padding.top;
		size.width = padding.left != 0 ? size.width - padding.left - padding.right : size.width;
		size.height = padding.bottom != 0 ? size.height - padding.top - padding.bottom : size.height;
	}

	private function updateBound():Void {
		boundingBox.setBound(position, size);
	}
}
