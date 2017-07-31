package ;

import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.FlxBasic;
import flixel.FlxObject;

class NotEnoughCashState extends FlxSubState{
	public function new() {
		super();

		var backgroundSprite = new FlxSprite();
		backgroundSprite.makeGraphic(Math.round(FlxG.camera.width * 0.9),Math.round(FlxG.camera.height * 0.9),0xff29303c);
		backgroundSprite.x = FlxG.width/2 - backgroundSprite.width/2;
		backgroundSprite.y = FlxG.height/2 - backgroundSprite.height/2;
		add(backgroundSprite);

		var buildingTitleDisplay = new FlxText(backgroundSprite.x,backgroundSprite.height/2,backgroundSprite.width,"Not Enough Cash!",13);
		buildingTitleDisplay.font = "assets/data/visitor2.ttf";
		buildingTitleDisplay.alignment = FlxTextAlign.CENTER;
		add(buildingTitleDisplay);

		var cancelButton = new FlxButton(backgroundSprite.x +backgroundSprite.width-8-2,backgroundSprite.y + 2,"",close);
		cancelButton.loadGraphic("assets/images/CloseButton.png",true,8,8);
		cancelButton.animation.add("normal",[0]);
		cancelButton.animation.add("highlight",[1]);
		cancelButton.animation.add("pressed",[2]);
		add(cancelButton);
	}

	override public function add(b:FlxBasic){
		if(Std.is(b,FlxObject)){
			var o = cast(b, FlxObject);
			o.scrollFactor.x = 0;
			o.scrollFactor.y = 0;
		}
		return super.add(b);
	}
}
