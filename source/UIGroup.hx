package ;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxBasic;
import flixel.text.FlxText;
import flixel.group.FlxGroup;
import flixel.FlxG;

class UIGroup extends FlxGroup {

//	var powerPerSecond:FlxText;
	var unitsDisplay:FlxText;
	var cashDisplay:FlxText;

	var units:Int;
	var cash:Int;
	var day:Int;

	var dayProgressBar:ProgressBar;

	public var placingText:FlxText;
	var placingTextBackground:FlxSprite;

	var dayDisplay:FlxText;

	public function new() {
		super();

//		powerPerSecond = new FlxText(0,0, "13 U/S",13);
//		powerPerSecond.font = "assets/data/visitor2.ttf";
//		powerPerSecond.scale.x = 0.5;
//		powerPerSecond.scale.y = 0.5;
////		add(powerPerSecond);

		var topRightBackgroundSprite = new FlxSprite(FlxG.width*.8,0);
		topRightBackgroundSprite.makeGraphic(Math.round(FlxG.width * 0.2),Math.round(FlxG.height * .2),0xff29303c);
		add(topRightBackgroundSprite);



		unitsDisplay = new FlxText(0,0,100, "0 U",13);
		unitsDisplay.font = "assets/data/visitor2.ttf";
		unitsDisplay.alignment = FlxTextAlign.RIGHT;
		unitsDisplay.x = FlxG.camera.width - unitsDisplay.width + unitsDisplay.width/4;
//		totalUnits.y = 0;
		unitsDisplay.scale.x = 0.5;
		unitsDisplay.scale.y = 0.5;
		add(unitsDisplay);

		cashDisplay = new FlxText(0,0,100, "0 $",13);
		cashDisplay.font = "assets/data/visitor2.ttf";
		cashDisplay.alignment = FlxTextAlign.RIGHT;
		cashDisplay.x = FlxG.camera.width - cashDisplay.width + cashDisplay.width/4;
		cashDisplay.y = unitsDisplay.y + unitsDisplay.height * unitsDisplay.scale.y - cashDisplay.height/4 + 1;
		cashDisplay.scale.x = 0.5;
		cashDisplay.scale.y = 0.5;
		add(cashDisplay);



		dayProgressBar = new ProgressBar();
		dayProgressBar.x = FlxG.width - topRightBackgroundSprite.width;
		dayProgressBar.setWidth(topRightBackgroundSprite.width);
		add(dayProgressBar);

//		var dayBackground = new FlxSprite();
//		add(dayBackground);

		dayDisplay = new FlxText(0,0,100, "Day 0",13);
		dayDisplay.scale.x = 0.5;
		dayDisplay.scale.y = 0.5;
		dayDisplay.font = "assets/data/visitor2.ttf";
		dayDisplay.alignment = FlxTextAlign.RIGHT;
//		dayDisplay.updateHitbox();
		dayDisplay.x = FlxG.camera.width - dayDisplay.width;//dayProgressBar.outline.width;
		dayDisplay.x = FlxG.camera.width - cashDisplay.width + cashDisplay.width/4;
		dayDisplay.y = cashDisplay.y + unitsDisplay.height * unitsDisplay.scale.y - cashDisplay.height/4 + 1;//0 - dayDisplay.height/4;//unitsDisplay.y + unitsDisplay.height * unitsDisplay.scale.y - cashDisplay.height/2 + 1;

//		dayBackground.makeGraphic(Math.round(30),Math.round(dayDisplay.height/2),0xff29303c);
//		dayBackground.x = dayDisplay.x;
//		dayBackground.y = dayDisplay.y;

		add(dayDisplay);

		placingTextBackground = new FlxSprite();
		add(placingTextBackground);

		placingText = new FlxText(0,0,FlxG.width,"Click a lot to build",13);
		placingText.font = "assets/data/visitor2.ttf";
		placingText.alignment = FlxTextAlign.CENTER;
		placingText.exists = false;
		add(placingText);

		placingTextBackground.makeGraphic(FlxG.width,Math.round(placingText.height),0xff29303c);

	}

	override public function add(b:FlxBasic){
		var o = cast(b,FlxObject);
		o.scrollFactor.x = 0;
		o.scrollFactor.y = 0;
		return super.add(o);
	}

//	public function setOutputPerSecond(val:Float){
////		powerPerSecond.text = Std.string(Math.floor(val)) + " U/s" ;
//	}

	public function setTotalUnits(val:Int){
		if(val != units) unitsDisplay.text = Std.string(Math.floor(val)) + " U" ;
		this.units = val;
	}

	public function setTotalCash(val:Int){
		if(val != cash) cashDisplay.text = Std.string(Math.floor(val)) + " $" ;
		this.cash = val;
	}

	public function setTime(val:Float){
		dayProgressBar.setValue(val);
	}

	public function setDay(val:Int){
		if(val != day) dayDisplay.text = "Day " + val;
		day = val;
	}


	override public function update(elapsed){
		super.update(elapsed);

		placingTextBackground.exists = placingText.exists;
	}

}
