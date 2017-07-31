package ;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxObject;
import flixel.FlxSprite;

class Lot extends FlxObject{

	var buildingsGroup:FlxTypedGroup<Building>;
	public var building:Building;

	public function new(x,y, buildingsGroup) {
		super(x,y);
		this.width = 24;
		this.height = 24;

		this.buildingsGroup = buildingsGroup;
	}

	public function add(b:Building){
		building = b;
		b.x = this.x;
		b.y = this.y+this.height-b.height;
		buildingsGroup.add(b);
	}

	public function removeBuilding(){
		buildingsGroup.remove(building,true);
		this.building = null;
	}
}
