package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_data_visitor2_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/data/Map.tmx", __ASSET__assets_data_map_tmx);
		type.set ("assets/data/Map.tmx", AssetType.TEXT);
		className.set ("assets/data/Sprites.tsx", __ASSET__assets_data_sprites_tsx);
		type.set ("assets/data/Sprites.tsx", AssetType.TEXT);
		className.set ("assets/data/Test.json", __ASSET__assets_data_test_json);
		type.set ("assets/data/Test.json", AssetType.TEXT);
		className.set ("assets/data/Tileset.tsx", __ASSET__assets_data_tileset_tsx);
		type.set ("assets/data/Tileset.tsx", AssetType.TEXT);
		className.set ("assets/data/visitor2.eot", __ASSET__assets_data_visitor2_eot);
		type.set ("assets/data/visitor2.eot", AssetType.TEXT);
		className.set ("assets/data/visitor2.ttf", __ASSET__assets_data_visitor2_ttf);
		type.set ("assets/data/visitor2.ttf", AssetType.FONT);
		className.set ("assets/images/Battery-1.png", __ASSET__assets_images_battery_1_png);
		type.set ("assets/images/Battery-1.png", AssetType.IMAGE);
		className.set ("assets/images/Battery-2.png", __ASSET__assets_images_battery_2_png);
		type.set ("assets/images/Battery-2.png", AssetType.IMAGE);
		className.set ("assets/images/Battery-3.png", __ASSET__assets_images_battery_3_png);
		type.set ("assets/images/Battery-3.png", AssetType.IMAGE);
		className.set ("assets/images/Buy.png", __ASSET__assets_images_buy_png);
		type.set ("assets/images/Buy.png", AssetType.IMAGE);
		className.set ("assets/images/CloseButton.png", __ASSET__assets_images_closebutton_png);
		type.set ("assets/images/CloseButton.png", AssetType.IMAGE);
		className.set ("assets/images/Gas-1.png", __ASSET__assets_images_gas_1_png);
		type.set ("assets/images/Gas-1.png", AssetType.IMAGE);
		className.set ("assets/images/Gas-2.png", __ASSET__assets_images_gas_2_png);
		type.set ("assets/images/Gas-2.png", AssetType.IMAGE);
		className.set ("assets/images/Gas-3.png", __ASSET__assets_images_gas_3_png);
		type.set ("assets/images/Gas-3.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/Left.png", __ASSET__assets_images_left_png);
		type.set ("assets/images/Left.png", AssetType.IMAGE);
		className.set ("assets/images/Player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/Player.png", AssetType.IMAGE);
		className.set ("assets/images/Right.png", __ASSET__assets_images_right_png);
		type.set ("assets/images/Right.png", AssetType.IMAGE);
		className.set ("assets/images/Sell5.png", __ASSET__assets_images_sell5_png);
		type.set ("assets/images/Sell5.png", AssetType.IMAGE);
		className.set ("assets/images/Sell50.png", __ASSET__assets_images_sell50_png);
		type.set ("assets/images/Sell50.png", AssetType.IMAGE);
		className.set ("assets/images/Sell500.png", __ASSET__assets_images_sell500_png);
		type.set ("assets/images/Sell500.png", AssetType.IMAGE);
		className.set ("assets/images/Sprites.png", __ASSET__assets_images_sprites_png);
		type.set ("assets/images/Sprites.png", AssetType.IMAGE);
		className.set ("assets/images/Tiles.png", __ASSET__assets_images_tiles_png);
		type.set ("assets/images/Tiles.png", AssetType.IMAGE);
		className.set ("assets/images/Title.png", __ASSET__assets_images_title_png);
		type.set ("assets/images/Title.png", AssetType.IMAGE);
		className.set ("assets/images/Windmill-1.png", __ASSET__assets_images_windmill_1_png);
		type.set ("assets/images/Windmill-1.png", AssetType.IMAGE);
		className.set ("assets/images/Windmill-2.png", __ASSET__assets_images_windmill_2_png);
		type.set ("assets/images/Windmill-2.png", AssetType.IMAGE);
		className.set ("assets/images/Windmill-3.png", __ASSET__assets_images_windmill_3_png);
		type.set ("assets/images/Windmill-3.png", AssetType.IMAGE);
		className.set ("assets/music/LD39.mp3", __ASSET__assets_music_ld39_mp3);
		type.set ("assets/music/LD39.mp3", AssetType.MUSIC);
		className.set ("assets/music/LD39.ogg", __ASSET__assets_music_ld39_ogg);
		type.set ("assets/music/LD39.ogg", AssetType.MUSIC);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/Map.tmx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/Sprites.tsx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/Test.json";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/Tileset.tsx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/visitor2.eot";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/visitor2.ttf";
		className.set (id, __ASSET__assets_data_visitor2_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/images/Battery-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Battery-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Battery-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Buy.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/CloseButton.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Gas-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Gas-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Gas-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/Left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Player.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sell5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sell50.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sell500.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sprites.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Tiles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Title.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Windmill-1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Windmill-2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Windmill-3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/LD39.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/music/LD39.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "flixel/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "flixel/images/logo/default.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/data/Map.tmx", __ASSET__assets_data_map_tmx);
		type.set ("assets/data/Map.tmx", AssetType.TEXT);
		
		className.set ("assets/data/Sprites.tsx", __ASSET__assets_data_sprites_tsx);
		type.set ("assets/data/Sprites.tsx", AssetType.TEXT);
		
		className.set ("assets/data/Test.json", __ASSET__assets_data_test_json);
		type.set ("assets/data/Test.json", AssetType.TEXT);
		
		className.set ("assets/data/Tileset.tsx", __ASSET__assets_data_tileset_tsx);
		type.set ("assets/data/Tileset.tsx", AssetType.TEXT);
		
		className.set ("assets/data/visitor2.eot", __ASSET__assets_data_visitor2_eot);
		type.set ("assets/data/visitor2.eot", AssetType.TEXT);
		
		className.set ("assets/data/visitor2.ttf", __ASSET__assets_data_visitor2_ttf);
		type.set ("assets/data/visitor2.ttf", AssetType.FONT);
		
		className.set ("assets/images/Battery-1.png", __ASSET__assets_images_battery_1_png);
		type.set ("assets/images/Battery-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Battery-2.png", __ASSET__assets_images_battery_2_png);
		type.set ("assets/images/Battery-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Battery-3.png", __ASSET__assets_images_battery_3_png);
		type.set ("assets/images/Battery-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/Buy.png", __ASSET__assets_images_buy_png);
		type.set ("assets/images/Buy.png", AssetType.IMAGE);
		
		className.set ("assets/images/CloseButton.png", __ASSET__assets_images_closebutton_png);
		type.set ("assets/images/CloseButton.png", AssetType.IMAGE);
		
		className.set ("assets/images/Gas-1.png", __ASSET__assets_images_gas_1_png);
		type.set ("assets/images/Gas-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Gas-2.png", __ASSET__assets_images_gas_2_png);
		type.set ("assets/images/Gas-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Gas-3.png", __ASSET__assets_images_gas_3_png);
		type.set ("assets/images/Gas-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/Left.png", __ASSET__assets_images_left_png);
		type.set ("assets/images/Left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/Player.png", AssetType.IMAGE);
		
		className.set ("assets/images/Right.png", __ASSET__assets_images_right_png);
		type.set ("assets/images/Right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sell5.png", __ASSET__assets_images_sell5_png);
		type.set ("assets/images/Sell5.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sell50.png", __ASSET__assets_images_sell50_png);
		type.set ("assets/images/Sell50.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sell500.png", __ASSET__assets_images_sell500_png);
		type.set ("assets/images/Sell500.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sprites.png", __ASSET__assets_images_sprites_png);
		type.set ("assets/images/Sprites.png", AssetType.IMAGE);
		
		className.set ("assets/images/Tiles.png", __ASSET__assets_images_tiles_png);
		type.set ("assets/images/Tiles.png", AssetType.IMAGE);
		
		className.set ("assets/images/Title.png", __ASSET__assets_images_title_png);
		type.set ("assets/images/Title.png", AssetType.IMAGE);
		
		className.set ("assets/images/Windmill-1.png", __ASSET__assets_images_windmill_1_png);
		type.set ("assets/images/Windmill-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Windmill-2.png", __ASSET__assets_images_windmill_2_png);
		type.set ("assets/images/Windmill-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Windmill-3.png", __ASSET__assets_images_windmill_3_png);
		type.set ("assets/images/Windmill-3.png", AssetType.IMAGE);
		
		className.set ("assets/music/LD39.mp3", __ASSET__assets_music_ld39_mp3);
		type.set ("assets/music/LD39.mp3", AssetType.MUSIC);
		
		className.set ("assets/music/LD39.ogg", __ASSET__assets_music_ld39_ogg);
		type.set ("assets/music/LD39.ogg", AssetType.MUSIC);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_map_tmx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_sprites_tsx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_test_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_tileset_tsx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_visitor2_eot extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_visitor2_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_battery_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_battery_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_battery_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_buy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_closebutton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gas_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gas_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gas_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sell5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sell50_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sell500_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sprites_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_title_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_windmill_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_windmill_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_windmill_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_ld39_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_music_ld39_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5







@:keep #if display private #end class __ASSET__assets_data_visitor2_ttf extends lime.text.Font { public function new () { super (); name = "Visitor TT2 BRK"; } } 



























@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 




#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/data/Map.tmx") #if display private #end class __ASSET__assets_data_map_tmx extends lime.utils.Bytes {}
@:file("assets/data/Sprites.tsx") #if display private #end class __ASSET__assets_data_sprites_tsx extends lime.utils.Bytes {}
@:file("assets/data/Test.json") #if display private #end class __ASSET__assets_data_test_json extends lime.utils.Bytes {}
@:file("assets/data/Tileset.tsx") #if display private #end class __ASSET__assets_data_tileset_tsx extends lime.utils.Bytes {}
@:file("assets/data/visitor2.eot") #if display private #end class __ASSET__assets_data_visitor2_eot extends lime.utils.Bytes {}
@:font("assets/data/visitor2.ttf") #if display private #end class __ASSET__assets_data_visitor2_ttf extends lime.text.Font {}
@:image("assets/images/Battery-1.png") #if display private #end class __ASSET__assets_images_battery_1_png extends lime.graphics.Image {}
@:image("assets/images/Battery-2.png") #if display private #end class __ASSET__assets_images_battery_2_png extends lime.graphics.Image {}
@:image("assets/images/Battery-3.png") #if display private #end class __ASSET__assets_images_battery_3_png extends lime.graphics.Image {}
@:image("assets/images/Buy.png") #if display private #end class __ASSET__assets_images_buy_png extends lime.graphics.Image {}
@:image("assets/images/CloseButton.png") #if display private #end class __ASSET__assets_images_closebutton_png extends lime.graphics.Image {}
@:image("assets/images/Gas-1.png") #if display private #end class __ASSET__assets_images_gas_1_png extends lime.graphics.Image {}
@:image("assets/images/Gas-2.png") #if display private #end class __ASSET__assets_images_gas_2_png extends lime.graphics.Image {}
@:image("assets/images/Gas-3.png") #if display private #end class __ASSET__assets_images_gas_3_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.Bytes {}
@:image("assets/images/Left.png") #if display private #end class __ASSET__assets_images_left_png extends lime.graphics.Image {}
@:image("assets/images/Player.png") #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:image("assets/images/Right.png") #if display private #end class __ASSET__assets_images_right_png extends lime.graphics.Image {}
@:image("assets/images/Sell5.png") #if display private #end class __ASSET__assets_images_sell5_png extends lime.graphics.Image {}
@:image("assets/images/Sell50.png") #if display private #end class __ASSET__assets_images_sell50_png extends lime.graphics.Image {}
@:image("assets/images/Sell500.png") #if display private #end class __ASSET__assets_images_sell500_png extends lime.graphics.Image {}
@:image("assets/images/Sprites.png") #if display private #end class __ASSET__assets_images_sprites_png extends lime.graphics.Image {}
@:image("assets/images/Tiles.png") #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:image("assets/images/Title.png") #if display private #end class __ASSET__assets_images_title_png extends lime.graphics.Image {}
@:image("assets/images/Windmill-1.png") #if display private #end class __ASSET__assets_images_windmill_1_png extends lime.graphics.Image {}
@:image("assets/images/Windmill-2.png") #if display private #end class __ASSET__assets_images_windmill_2_png extends lime.graphics.Image {}
@:image("assets/images/Windmill-3.png") #if display private #end class __ASSET__assets_images_windmill_3_png extends lime.graphics.Image {}
@:file("assets/music/LD39.mp3") #if display private #end class __ASSET__assets_music_ld39_mp3 extends lime.utils.Bytes {}
@:file("assets/music/LD39.ogg") #if display private #end class __ASSET__assets_music_ld39_ogg extends lime.utils.Bytes {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.Bytes {}
@:file("/usr/local/lib/haxelib/flixel/4,3,0/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends lime.utils.Bytes {}
@:file("/usr/local/lib/haxelib/flixel/4,3,0/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends lime.utils.Bytes {}
@:font("/usr/local/lib/haxelib/flixel/4,3,0/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("/usr/local/lib/haxelib/flixel/4,3,0/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("/usr/local/lib/haxelib/flixel/4,3,0/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:image("/usr/local/lib/haxelib/flixel/4,3,0/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_data_visitor2_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_data_visitor2_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end