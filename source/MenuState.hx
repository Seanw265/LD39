package ;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class MenuState extends FlxState
{
	override public function create():Void
	{
		super.create();

		var title = new FlxSprite();
		title.loadGraphic("assets/images/Title.png");
		add(title);

		FlxG.sound.playMusic("assets/music/LD39.ogg",1,true);

	}

	override public function update(elapsed){
		super.update(elapsed);

		if(FlxG.keys.justPressed.SPACE){

			FlxG.camera.fade(FlxColor.BLACK,0.6,false,start);
		}
	}

	public function start(){
		FlxG.switchState(new PlayState());
	}
}
