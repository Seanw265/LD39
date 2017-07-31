package ;

import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.text.FlxText.FlxTextAlign;
import flixel.ui.FlxButton;
import flixel.FlxBasic;
import flixel.FlxObject;

class SellPowerSubState extends FlxSubState {

	var playState:PlayState;

	var exchangeRate:Float;

	var unitsDisplay:FlxText;
	var cashDisplay:FlxText;

	public function new(playState:PlayState) {
		super();

		this.playState = playState;

		this.exchangeRate = playState.lots.exchangeRate;

		var backgroundSprite = new FlxSprite();
		backgroundSprite.makeGraphic(Math.round(FlxG.camera.width * 0.9),Math.round(FlxG.camera.height * 0.9),0xff29303c);
		backgroundSprite.x = FlxG.width/2 - backgroundSprite.width/2;
		backgroundSprite.y = FlxG.height/2 - backgroundSprite.height/2;
		add(backgroundSprite);

		var titleDisplay = new FlxText(backgroundSprite.x + 2,backgroundSprite.y + 2,160,"Sell Some Power Units!",13);
		titleDisplay.font = "assets/data/visitor2.ttf";
		titleDisplay.alignment = FlxTextAlign.LEFT;
		add(titleDisplay);

		var instructionsDisplay = new FlxText(backgroundSprite.x + 2 - (backgroundSprite.width - 4)/2,titleDisplay.height + titleDisplay.y,(backgroundSprite.width - 4)*2,"Click on a button to sell that many power units!\n5 U = $ " + Math.floor(5*exchangeRate*100)/100.0,13);
		instructionsDisplay.scale.x = 0.5;
		instructionsDisplay.scale.y = 0.5;
		instructionsDisplay.y = (titleDisplay.height + titleDisplay.y) - titleDisplay.height/2;
		instructionsDisplay.font = "assets/data/visitor2.ttf";
		instructionsDisplay.alignment = FlxTextAlign.LEFT;
		add(instructionsDisplay);

		var cancelButton = new FlxButton(backgroundSprite.x +backgroundSprite.width-8-2,backgroundSprite.y + 2,"",close);
		cancelButton.loadGraphic("assets/images/CloseButton.png",true,8,8);
		cancelButton.animation.add("normal",[0]);
		cancelButton.animation.add("highlight",[1]);
		cancelButton.animation.add("pressed",[2]);
		add(cancelButton);



		var sell50 = new FlxButton(backgroundSprite.x + backgroundSprite.width/2 - 14,backgroundSprite.y + backgroundSprite.height/2 - 9,"",sell50);
		sell50.loadGraphic("assets/images/Sell50.png",true,28,35);
		sell50.animation.add("normal",[0]);
		sell50.animation.add("highlight",[1]);
		sell50.animation.add("pressed",[2]);
		add(sell50);

		var sell5 = new FlxButton(sell50.x - sell50.width - 2,sell50.y,"",sell5);
		sell5.loadGraphic("assets/images/Sell5.png",true,28,35);
		sell5.animation.add("normal",[0]);
		sell5.animation.add("highlight",[1]);
		sell5.animation.add("pressed",[2]);
		add(sell5);

		var sell500 = new FlxButton(sell50.x + sell50.width + 2,sell50.y,"",sell500);
		sell500.loadGraphic("assets/images/Sell500.png",true,28,35);
		sell500.animation.add("normal",[0]);
		sell500.animation.add("highlight",[1]);
		sell500.animation.add("pressed",[2]);
		add(sell500);

		unitsDisplay = new FlxText(0,0,100, Math.round(playState.lots.totalUnits) + " U",13);
		unitsDisplay.font = "assets/data/visitor2.ttf";
		unitsDisplay.alignment = FlxTextAlign.LEFT;
		unitsDisplay.x = backgroundSprite.x + 2 - unitsDisplay.width/4;
		unitsDisplay.y = backgroundSprite.height + backgroundSprite.y - unitsDisplay.height;
//		totalUnits.y = 0;
		unitsDisplay.scale.x = 0.5;
		unitsDisplay.scale.y = 0.5;
		add(unitsDisplay);

		cashDisplay = new FlxText(0,0,100, Math.round(playState.lots.money) + " $",13);
		cashDisplay.font = "assets/data/visitor2.ttf";
		cashDisplay.alignment = FlxTextAlign.LEFT;
		cashDisplay.x = unitsDisplay.x; //FlxG.camera.width - cashDisplay.width + cashDisplay.width/4;
		cashDisplay.y = unitsDisplay.y + unitsDisplay.height * unitsDisplay.scale.y - cashDisplay.height/4 + 1;
		cashDisplay.scale.x = 0.5;
		cashDisplay.scale.y = 0.5;
		add(cashDisplay);
	}

	function sell5(){
		sell(5);
	}
	function sell50(){
		sell(50);
	}
	function sell500(){
		sell(500);
	}

	function sell(amount:Int){
		if(playState.lots.totalUnits >= amount){
			playState.lots.money += amount * exchangeRate;
			playState.lots.totalUnits -= amount;
		}

		unitsDisplay.text = Math.round(playState.lots.totalUnits) + " U";
		cashDisplay.text = Math.round(playState.lots.money) + " $";
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
