package;

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

	var lots:FlxTypedGroup<Lot>;

	var lotsMap:FlxTilemap;
	var backgroundMap:FlxTilemap;

	override public function create():Void
	{
		super.create();

		var tiledFile = new TiledMap("assets/data/Map.tmx");

		var backgroundTMXLayer = cast(tiledFile.getLayer("Background"),TiledTileLayer);
		var lotsTMXLayer = cast(tiledFile.getLayer("Lots"),TiledTileLayer);


		backgroundMap = new FlxTilemap();
		lotsMap = new FlxTilemap();

		backgroundMap.loadMapFromCSV(backgroundTMXLayer.csvData,"assets/images/Tiles.png",8,8,FlxTilemapAutoTiling.OFF,1);
		lotsMap.loadMapFromCSV(lotsTMXLayer.csvData,"assets/images/Tiles.png",8,8,FlxTilemapAutoTiling.OFF,1,1,1);

		backgroundMap.useScaleHack = false;
		lotsMap.useScaleHack = false;

		add(backgroundMap);
		add(lotsMap);

//		lots = new FlxTypedGroup<Lot>();
//		add(lots);
//		for(lotPoint in lotsMap.getTileCoords(18,true)){
//			var lot = new Lot(lotPoint.x-LOTWIDTH/2,lotPoint.y-LOTHEIGHT/2);
//			lot.immovable = true;
//			lot.pixelPerfectPosition = true;
//			lots.add(lot);
//		}

		player = new FlxSprite();
//		player.pixelPerfectRender = true;
//		player.pixelPerfectPosition = true;
		player.loadGraphic("assets/images/Player.png",true,16,16);
		player.maxVelocity.x = 60;
		player.maxVelocity.y = 60;
		player.drag.x = 500;
		player.drag.y = 500;
		add(player);

		FlxG.camera.follow(player);

//		FlxG.debugger.addTrackerProfile(FlxSprite,["x","y","width","height","velocity","acceleration"]);
		FlxG.debugger.track(player);


//		FlxG.fixedTimestep = false;
		
	}

	var PLAYER_ACCELERATION = 500;

	override public function update(elapsed:Float):Void
	{
		trace("before update: " + player.x);
		FlxG.collide(player,lotsMap);

		super.update(elapsed);
		trace("after update: " + player.x);

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
		trace("after keys: " + player.x);

		trace("after collide: " + player.x);
	}
}
