package ;

import flixel.FlxSprite;

class Player extends FlxSprite {
	public function new() {
		super();

//		this.pixelPerfectRender = true;
//		this.pixelPerfectPosition = true;
		this.loadGraphic("assets/images/Player.png",true,16,16);
		this.animation.add("idle",[1,2,3,4],10,true);
		this.animation.add("run",[5,6,7,8],10,true);
		this.maxVelocity.x = 60;
		this.maxVelocity.y = 60;
		this.drag.x = 1000;
		this.drag.y = 1000;
	}

	override public function update(elapsed){
		super.update(elapsed);

		if(Math.abs(this.velocity.x) > 2 || Math.abs(this.velocity.y) > 2){
			this.animation.play("run");
		}else{
			this.animation.play("idle");
		}
	}
}
