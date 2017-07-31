package ;
import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
class LotManager extends FlxTypedGroup<Lot>{

	public var totalOutputPerSecond: Float;
	public var totalUnits: Float;

	public var money: Float = 500;

	public var cityTake:Float;

	public var day:Int;
	public var time:Float;
	public var dayLength:Float;
	public var rawCurTime:Float;

	public var exchangeRate:Float;

	public function new() {
		super();

		this.exchangeRate = .5+((Math.random()*.2)-.1);

		dayLength = 60;

		cityTake = 10;
	}

	override public function update(elapsed){

		rawCurTime += elapsed;
		time = rawCurTime/dayLength;
		if(rawCurTime >= dayLength){
			rawCurTime = 0;
			endDay();
		}

		totalOutputPerSecond = 0;
		for(lot in this.members){
			if(lot.building != null){
				totalOutputPerSecond += lot.building.outputPerSecond;
				totalUnits += lot.building.getAvailableUnits();
			}
		}
	}

	public function endDay(){
		this.exchangeRate = .5+((Math.random()*.2)-.1);
		day++;
		if(totalUnits > cityTake){
			totalUnits -= cityTake;
			money += Math.ceil(cityTake * 0.25);
			FlxG.state.openSubState(new EndOfDaySubState(cast(FlxG.state,PlayState),Math.round(cityTake),Math.ceil(cityTake * 0.25),Math.round(cityTake*2)));
			cityTake += cityTake;
		}else{
			FlxG.state.openSubState(new EndGameSubState(cast(FlxG.state,PlayState)));
		}
	}
}
