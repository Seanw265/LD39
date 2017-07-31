package ;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.FlxG;

class TutorialSubstate extends FlxSubState{

	var playState:PlayState;

	var currentIndex:Int = 0;
	var data:Array<String> = [
		"Welcome to Power Rancher!\n\nPress > to continue!",
		"In this game you have to fulfull a city's daily power consumption needs.\n\n(Press >)",
		"You have a certain number of Power Units (U). You will be able to see how many Power Units you have in the top right corner of the screen.",
		"You also have a certain amount of cash ($). You can use your cash to purchase generators which will generate power units.",
		"To purchase generators you will press (B) on your keyboard.",
		"Click to place.\n\nRight click to destroy.",
		"At the end of every day, the city will buy the amount of power they need from you at a discounted rate.",
		"You can also sell power to other individuals by pressing (N) on your keyboard.",
		"If you don't have enough Units at the end of the day you lose."
	];

	var instructionsDisplay:FlxText;

	public function new(playState:PlayState) {
		super();

		this.playState = playState;

		var backgroundSprite = new FlxSprite();
		backgroundSprite.makeGraphic(Math.round(FlxG.camera.width * 0.9),Math.round(FlxG.camera.height * 0.9),0xff29303c);
		backgroundSprite.x = FlxG.width/2 - backgroundSprite.width/2;
		backgroundSprite.y = FlxG.height/2 - backgroundSprite.height/2;
		add(backgroundSprite);

		var cancelButton = new FlxButton(backgroundSprite.x +backgroundSprite.width-8-2,backgroundSprite.y + 2,"",close);
		cancelButton.loadGraphic("assets/images/CloseButton.png",true,8,8);
		cancelButton.animation.add("normal",[0]);
		cancelButton.animation.add("highlight",[1]);
		cancelButton.animation.add("pressed",[2]);
		add(cancelButton);

		var titleDisplay = new FlxText(backgroundSprite.x + 2,backgroundSprite.y + 2,160,"Tutorial",13);
		titleDisplay.font = "assets/data/visitor2.ttf";
		titleDisplay.alignment = FlxTextAlign.LEFT;
		add(titleDisplay);

		instructionsDisplay = new FlxText(backgroundSprite.x + 2 - (backgroundSprite.width - 4)/2,titleDisplay.height + titleDisplay.y,(backgroundSprite.width - 4)*2,"Well that's the game! You gave it a good run and got " + playState.lots.day + " days!",13);
		instructionsDisplay.scale.x = 0.5;
		instructionsDisplay.scale.y = 0.5;
		instructionsDisplay.updateHitbox();
		instructionsDisplay.x = backgroundSprite.x + 2;
		instructionsDisplay.width = backgroundSprite.width - 4;
		instructionsDisplay.y = (titleDisplay.height + titleDisplay.y);
		instructionsDisplay.font = "assets/data/visitor2.ttf";
		instructionsDisplay.alignment = FlxTextAlign.LEFT;
		add(instructionsDisplay);

		var leftbutton = new FlxButton(backgroundSprite.x + backgroundSprite.width/2 - 16 - 1,backgroundSprite.y + backgroundSprite.height - 20-2,"",left);
		leftbutton.loadGraphic("assets/images/Left.png",true,16,20);
		leftbutton.animation.add("normal",[0]);
		leftbutton.animation.add("highlight",[1]);
		leftbutton.animation.add("pressed",[2]);
		add(leftbutton);

		var rightbutton = new FlxButton(backgroundSprite.x + backgroundSprite.width/2 + 1,backgroundSprite.y + backgroundSprite.height - 20-2,"",right);
		rightbutton.loadGraphic("assets/images/Right.png",true,16,20);
		rightbutton.animation.add("normal",[0]);
		rightbutton.animation.add("highlight",[1]);
		rightbutton.animation.add("pressed",[2]);
		add(rightbutton);

		setCurrentIndex(0);

	}

	public function left(){
		setCurrentIndex(currentIndex - 1);
	}
	public function right(){
		setCurrentIndex(currentIndex + 1);
	}

	public function setCurrentIndex(i:Int){
		if(i >= 0 && i < data.length){
			currentIndex = i;
			instructionsDisplay.text = data[i];
		}
	}
}
