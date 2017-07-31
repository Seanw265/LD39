package;

/*
DONE: Add cash and units display to Sell state and to Build state.
TODO: Add some indicator for placing an object.
TODO: Change exchange rate every day/ every time you offload some energy early/ etc.
DONE: Title screen
TODO: Add music again
TODO: Tutorial
DONE: Distinguish between types

DONE: Day cycle thingy. Every day, city takes an amount of power. If you don't have enough then you lose/ city loses happiness/ negative outcome.

 */


import flixel.text.FlxText;
import flixel.util.FlxColor;
import flash.filters.ShaderFilter;
import flixel.FlxObject;
import flixel.FlxCamera.FlxCameraFollowStyle;
import flixel.group.FlxGroup;
import flixel.tile.FlxBaseTilemap.FlxTilemapAutoTiling;
import flixel.tile.FlxTilemap;
import flixel.graphics.atlas.FlxAtlas;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.FlxG;

class PlayState extends FlxState
{

	var player:FlxSprite;

	var LOTWIDTH = 24;
	var LOTHEIGHT = 24;

	public var lots:LotManager;
	var buildings:FlxTypedGroup<Building>;

	var lotsMap:FlxTilemap;
	var backgroundMap:FlxTilemap;

	var ui: UIGroup;

	var placing:Bool = false;
	public var placingObject:String = null;
//	var placingText:FlxText;

//	var buildState:BuildScreen;

	override public function create():Void
	{
		super.create();

		FlxG.camera.fade(FlxColor.BLACK,0.1,true,startTutorial);


		var tiledFile = new TiledMap("assets/data/Map.tmx");

		var backgroundTMXLayer = cast(tiledFile.getLayer("Background"),TiledTileLayer);
		var lotsTMXLayer = cast(tiledFile.getLayer("Lots"),TiledTileLayer);


		backgroundMap = new FlxTilemap();
		lotsMap = new FlxTilemap();

		backgroundMap.loadMapFromCSV(backgroundTMXLayer.csvData,"assets/images/Tiles.png",8,8,FlxTilemapAutoTiling.OFF,1);
		lotsMap.loadMapFromCSV(lotsTMXLayer.csvData,"assets/images/Tiles.png",8,8,FlxTilemapAutoTiling.OFF,1,1,1);

//		backgroundMap.useScaleHack = false;
//		lotsMap.useScaleHack = false;

		add(backgroundMap);
		add(lotsMap);

		lots = new LotManager();
		add(lots);

		player = new Player();
		add(player);

		buildings = new FlxTypedGroup<Building>();
		add(buildings);

		for(lotPoint in lotsMap.getTileCoords(18,true)){
			var lot = new Lot(lotPoint.x-LOTWIDTH/2,lotPoint.y-LOTHEIGHT/2, buildings);
			lot.immovable = true;
			lot.pixelPerfectPosition = true;
			lots.add(lot);
		}





		FlxG.camera.follow(player,FlxCameraFollowStyle.TOPDOWN,0.25);
		FlxG.camera.setScrollBoundsRect(backgroundMap.x,backgroundMap.y,backgroundMap.width,backgroundMap.height,true);
//		FlxG.camera.pixelPerfectRender = true;

//		FlxG.debugger.addTrackerProfile(FlxSprite,["x","y","width","height","velocity","acceleration"]);
		FlxG.debugger.track(player);


		FlxG.fixedTimestep = false;


//		var chromatic = new Chromatic();
//		var chromaticFilter = new ShaderFilter(chromatic);
//		chromatic.uBOffset = [.5,0];
//		chromatic.uROffset = [-.5,0];
//		chromatic.uGOffset = [0,.5];
//		chromatic.uSize = [FlxG.width*4,FlxG.height*4];
//
//		var distortion = new Distortion();
//		var distortionFilter = new ShaderFilter(distortion);
//		distortion.BarrelPower = 1.05;
//
////		var scanline = new Scanline();
////		var scanlineFilter = new ShaderFilter(scanline);
////		scanline.scale = 2.0;
//
//		FlxG.camera.setFilters([distortionFilter,chromaticFilter]);

		ui = new UIGroup();
		add(ui);

		FlxG.sound.playMusic("assets/music/LD39.ogg",1,true);


//		buildState = new BuildScreen(this);
		
	}

	var PLAYER_ACCELERATION = 800;

	override public function update(elapsed:Float):Void
	{
		FlxG.collide(player,lots);

		super.update(elapsed);

		if(FlxG.keys.pressed.D){
			player.acceleration.x = PLAYER_ACCELERATION;
		}else if(FlxG.keys.pressed.A){
			player.acceleration.x = -PLAYER_ACCELERATION;
		}else{
			player.acceleration.x = 0;
		}

		if(FlxG.keys.pressed.W){
			player.acceleration.y = -PLAYER_ACCELERATION;
		}else if(FlxG.keys.pressed.S){
			player.acceleration.y = PLAYER_ACCELERATION;
		}else{
			player.acceleration.y = 0;
		}

		if(FlxG.mouse.justPressed){
			if(placing){
				var o = new FlxObject(FlxG.mouse.x,FlxG.mouse.y);
				FlxG.overlap(o,lots,placeObject);
				o.destroy();
			}else{

			}
		}

		if(FlxG.mouse.justPressedRight){
			var o = new FlxObject(FlxG.mouse.x,FlxG.mouse.y);
			FlxG.overlap(o,lots,removeObject);
			o.destroy();
		}

		if(FlxG.keys.justPressed.B){

			var buildScreen = new BuildScreen(this);
			this.openSubState(buildScreen);
		}

		if(FlxG.keys.justPressed.N){

			var sellPowerSubState = new SellPowerSubState(this);
			this.openSubState(sellPowerSubState);
		}

//		if(FlxG.keys.justPressed.M){
//
//			var endOfDaySubState = new EndOfDaySubState(this,10,5,20);
//			this.openSubState(endOfDaySubState);
//		}

		if(FlxG.keys.justPressed.I){
			startTutorial();
		}

//		if(FlxG.keys.justPressed.COMMA){
//
//			var endGameSubState = new EndGameSubState(this);
//			this.openSubState(endGameSubState);
//		}

		ui.placingText.exists = placing;

		ui.setTotalCash(Math.floor(lots.money));
		ui.setTotalUnits(Math.floor(lots.totalUnits));
		ui.setTime(lots.time);
		ui.setDay(lots.day + 1);

	}

	public function removeObject(o:FlxObject,lot:Lot){
		if(lot.building != null){
			lot.building.breakDown();
		}
	}

	public function closeBuildingScreen(isPlacing:Bool,?placingObject:String){
		placing = isPlacing;
		this.placingObject = placingObject;
	}

	function placeObject(o:FlxObject,lot:Lot){
		lot.add(new Building(placingObject,lot));
		placing = false;
		placingObject = null;
	}

	function startTutorial(){
		this.openSubState(new TutorialSubstate(this));
	}
}
