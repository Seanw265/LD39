package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/Map.tmx", "assets/data/Map.tmx");
			type.set ("assets/data/Map.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/Sprites.tsx", "assets/data/Sprites.tsx");
			type.set ("assets/data/Sprites.tsx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/Test.json", "assets/data/Test.json");
			type.set ("assets/data/Test.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/Tileset.tsx", "assets/data/Tileset.tsx");
			type.set ("assets/data/Tileset.tsx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/Battery-1.png", "assets/images/Battery-1.png");
			type.set ("assets/images/Battery-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Battery-2.png", "assets/images/Battery-2.png");
			type.set ("assets/images/Battery-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Battery-3.png", "assets/images/Battery-3.png");
			type.set ("assets/images/Battery-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Gas-1.png", "assets/images/Gas-1.png");
			type.set ("assets/images/Gas-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Gas-2.png", "assets/images/Gas-2.png");
			type.set ("assets/images/Gas-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Gas-3.png", "assets/images/Gas-3.png");
			type.set ("assets/images/Gas-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/Player.png", "assets/images/Player.png");
			type.set ("assets/images/Player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Sprites.png", "assets/images/Sprites.png");
			type.set ("assets/images/Sprites.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Tiles.png", "assets/images/Tiles.png");
			type.set ("assets/images/Tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Windmill-1.png", "assets/images/Windmill-1.png");
			type.set ("assets/images/Windmill-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Windmill-2.png", "assets/images/Windmill-2.png");
			type.set ("assets/images/Windmill-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Windmill-3.png", "assets/images/Windmill-3.png");
			type.set ("assets/images/Windmill-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
