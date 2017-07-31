package ;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

class ProgressBar extends FlxSpriteGroup {

	var progressSprite:FlxSprite;
	public var outline:FlxSprite;

	var value: Float;

	public function new() {
		super();

		outline = new FlxSprite();
		outline.makeGraphic(20,3,0xff29303c);
		add(outline);

		progressSprite = new FlxSprite();
//		progressSprite.origin = FlxPoint.get(10,0);
		progressSprite.x = outline.x + 1;
		progressSprite.y = outline.y + 1;
		progressSprite.makeGraphic(1,1,0xff3551e7);
//		progressSprite.scale.y = outline.height-2;
//		progressSprite.scale.x = (outline.width-2)/2;
		add(progressSprite);


		setValue(0.0);
	}

	public function setValue(val:Float){
		this.value = val;
		progressSprite.setGraphicSize(Math.round((outline.width-2) * val), Math.round(outline.height-2));
		progressSprite.updateHitbox();
//		progressSprite.scale.x = val * (outline.width-2);
//		progressSprite.x = this.x + scale.x/2 + 1;
	}

	public function setWidth(w:Float){
		outline.width = w;
		setValue(value);
	}

	public function setColor(c:FlxColor){
		progressSprite.makeGraphic(1,1,color);
	}
}
