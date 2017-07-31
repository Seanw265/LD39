package ;

import flixel.FlxSubState;
import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.text.FlxText.FlxTextAlign;
import flixel.FlxG;
import flixel.ui.FlxButton;

class EndOfDaySubState extends FlxSubState {

	var playState:PlayState;

	public function new(playState:PlayState,take:Int,give:Int,tomorrow:Int) {
		super();

		this.playState = playState;

		var backgroundSprite = new FlxSprite();
		backgroundSprite.makeGraphic(Math.round(FlxG.camera.width * 0.9),Math.round(FlxG.camera.height * 0.9),0xff29303c);
		backgroundSprite.x = FlxG.width/2 - backgroundSprite.width/2;
		backgroundSprite.y = FlxG.height/2 - backgroundSprite.height/2;
		add(backgroundSprite);

		var cancelButton = new FlxButton(backgroundSprite.x +backgroundSprite.width-8-2,backgroundSprite.y + 2,"",close);
		cancelButton.loadGraphic("assets/images/CloseButton.png",true,8,8);
		cancelButton.animation.add("normal",[0]);
		cancelButton.animation.add("highlight",[1]);
		cancelButton.animation.add("pressed",[2]);
		add(cancelButton);

		var titleDisplay = new FlxText(backgroundSprite.x + 2,backgroundSprite.y + 2,160,"Day " + playState.lots.day + " Over",13);
		titleDisplay.font = "assets/data/visitor2.ttf";
		titleDisplay.alignment = FlxTextAlign.LEFT;
		add(titleDisplay);

		var instructionsDisplay = new FlxText(backgroundSprite.x + 2 - (backgroundSprite.width - 4)/2,titleDisplay.height + titleDisplay.y,(backgroundSprite.width - 4)*2,"Well that's the end of the day.\n\nThe city gave you $" + Std.string(give) + " and took " + Std.string(take) + " U.\n(PSST that's less than you'd get by selling it! But you still have to have enough for the city at the end of the day!)\n\nBe careful! Tomorrow the city will need " + Std.string(tomorrow) + " U",13);
		instructionsDisplay.scale.x = 0.5;
		instructionsDisplay.scale.y = 0.5;
		instructionsDisplay.y = (titleDisplay.height + titleDisplay.y) - titleDisplay.height/2;
		instructionsDisplay.font = "assets/data/visitor2.ttf";
		instructionsDisplay.alignment = FlxTextAlign.LEFT;
		add(instructionsDisplay);
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
