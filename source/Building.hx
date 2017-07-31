package ;

import BuildingInfo;
import flixel.FlxSprite;
import flixel.FlxG;



class Building extends FlxSprite {

	public var output:Float;
	public var outputPerSecond:Float;
	private var availableUnits:Float;

	public var chargeTime:Float = 10.0;
	public var curChargeTime:Float;

	var totalTime:Float;

	var dies:Float;

	public var efficiency:Float = 1.0;

	public var type:String;

	var progressBar:ProgressBar;

	var lot:Lot;



	public function new(type:String,lot:Lot) {
		super();

		this.lot = lot;

		var curData = BuildingInfo.data[type];
		this.output = curData.output;
		this.chargeTime = curData.chargeTime+0.1;
		this.dies = curData.dies;

		this.type = type;

		this.width = 24;
		this.height = 40;

		this.loadGraphic("assets/images/" + type + ".png",true,24,40);
		this.animation.add("run",[0,1,2,3],10,true);
		this.animation.play("run");

		progressBar = new ProgressBar();
		progressBar.setWidth(this.width-4);
//		progressBar.setColor(0xffe73535);

	}

	public function getAvailableUnits(){
		var wasAvailableUnits = availableUnits;
		availableUnits = 0;
		return wasAvailableUnits;
	}

	override public function draw(){
		super.draw();
		progressBar.draw();
	}

	override public function update(elapsed){
		super.update(elapsed);

		totalTime += elapsed;
		curChargeTime += elapsed;

		if(dies > 0){
			if(totalTime > dies){
				breakDown();
			}
		}

		outputPerSecond = output/chargeTime;

		if(curChargeTime > chargeTime){
			availableUnits += output * efficiency;
			curChargeTime = 0;
		}

		progressBar.x = this.x+2;
		progressBar.y = this.y + this.height-5;
		progressBar.setValue(this.curChargeTime/this.chargeTime);

		this.animation.curAnim.frameRate = Math.round(10 * efficiency);
	}

	public function breakDown(){
		lot.removeBuilding();
//		this.destroy();
	}
}
