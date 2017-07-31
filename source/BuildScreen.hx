package ;

import BuildingInfo;
import BuildingInfo;
import BuildingInfo;
import Building;
import flixel.FlxObject;
import flixel.FlxBasic;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;

//typedef BuildingData = {
//	var title:String;
//	var description:String;
//	var imageName:String;
//	var cost:Int;
//}

class BuildScreen extends FlxSubState{

	var playState:PlayState;

//	var types = ["Windmill-1","Windmill-2","Windmill-3","Gas-1","Gas-2","Gas-3","Battery-1","Battery-2","Battery-3"];
//	var data:Map<String, BuildingData> = [
//		"Windmill-1" =>
//		{
//			title:"Old Windmill",
//			description:"Wow! This windmill powered Thomas Edison's toaster from 1880 until 1881! Consider yourself lucky, you've got an antique on your hands!\nDelivers 1 unit every 4 seconds",
//			imageName:"Windmill-1",
//			cost:100
//		},
//		"Windmill-2" =>
//		{
//			title:"Slightly Newer Windmill",
//			description:"WOW... Wait weren't these older than the other ones???\nDelivers 3 units every 5 seconds.",
//			imageName:"Windmill-2",
//			cost:250
//		},
//		"Windmill-3" =>
//		{
//			title:"Wind Turbine",
//			description:"Now this is impressive. Maybe you should like build more of these.\nDelivers 10 units every 2 seconds",
//			imageName:"Windmill-3",
//			cost:2000
//		},
//		"Gas-1" =>
//		{
//			title:"Spoiled Camper Generator",
//			description:"Do you really need one of these? Really?\nDelivers 1 unit every 6 seconds",
//			imageName:"Gas-1",
//			cost:40
//		},
//		"Gas-2" =>
//		{
//			title:"Household Backup Generator",
//			description:"The power goes out. You hear a blood curdling scream. The lights come back on. You realize that was you...\nDelivers 4 units every 10 seconds",
//			imageName:"Gas-2",
//			cost:200
//		},
//		"Gas-3" =>
//		{
//			title:"Power Plant Generator",
//			description:"These things *CAN'T* be good for the environment!\nDelivers 10 units every 10 seconds",
//			imageName:"Gas-3",
//			cost:1000
//		},
//		"Battery-1" =>
//		{
//			title:"Flashlight Battery",
//			description:"That's cute.\nDelivers 1 unit every second but DIES after 10 seconds",
//			imageName:"Battery-1",
//			cost:10
//		},
//		"Battery-2" =>
//		{
//			title:"Car Battery",
//			description:"I dare you to lick it.\nDelivers 2 units every second but DIES after 8 seconds",
//			imageName:"Battery-2",
//			cost:50
//		},
//		"Battery-3" =>
//		{
//			title:"GIANT BATTERY",
//			description:"I'm not even gonna go near that.\nDelivers 8 units every second but DIES after 4 seconds",
//			imageName:"Battery-3",
//			cost:100
//		}
//	];

	var currentIndex = 0;

	var buildingDisplay:FlxSprite;
	var buildingTitleDisplay:FlxText;
	var buildingDescriptionDisplay:FlxText;

	var unitsDisplay:FlxText;
	var cashDisplay:FlxText;

	public function new(playState:PlayState) {
		super();

		this.playState = playState;

		var backgroundSprite = new FlxSprite();
		backgroundSprite.makeGraphic(Math.round(FlxG.camera.width * 0.9),Math.round(FlxG.camera.height * 0.9),0xff29303c);
		backgroundSprite.x = FlxG.width/2 - backgroundSprite.width/2;
		backgroundSprite.y = FlxG.height/2 - backgroundSprite.height/2;
		add(backgroundSprite);

		var cancelButton = new FlxButton(backgroundSprite.x +backgroundSprite.width-8-2,backgroundSprite.y + 2,"",closeButtonPressed);
		cancelButton.loadGraphic("assets/images/CloseButton.png",true,8,8);
		cancelButton.animation.add("normal",[0]);
		cancelButton.animation.add("highlight",[1]);
		cancelButton.animation.add("pressed",[2]);
		add(cancelButton);

		var buildingBackground = new FlxSprite();
		buildingBackground.makeGraphic(24,40,0xff909ca1);
		buildingBackground.x = backgroundSprite.x + 2;
		buildingBackground.y = backgroundSprite.y + backgroundSprite.height/2 - buildingBackground.height/2;
		add(buildingBackground);

		buildingDisplay = new FlxSprite();
		buildingDisplay.loadGraphic("assets/images/Windmill-1.png",true,24,40);
		buildingDisplay.x = backgroundSprite.x + 2;
		buildingDisplay.y = backgroundSprite.y + backgroundSprite.height/2 - buildingDisplay.height/2;
		buildingDisplay.animation.add("display",[0,1,2,3],10,true);
		buildingDisplay.animation.play("display");
		add(buildingDisplay);

		buildingTitleDisplay = new FlxText(backgroundSprite.x + 2,backgroundSprite.y + 2,100,"Old Windmill",13);
		buildingTitleDisplay.font = "assets/data/visitor2.ttf";
		add(buildingTitleDisplay);

		buildingDescriptionDisplay = new FlxText(buildingDisplay.x + buildingDisplay.width + 2 - (2*(backgroundSprite.x + backgroundSprite.width - (buildingDisplay.x + buildingDisplay.width + 2))-2)/4, buildingTitleDisplay.y + buildingTitleDisplay.height + 2,2*(backgroundSprite.x + backgroundSprite.width - (buildingDisplay.x + buildingDisplay.width + 2))-2,"Wow! This windmill powered Thomas Edison's toaster from 1880 until 1881! Consider yourself lucky, you've got an antique on your hands!\nDelivers 1 unit every 3 seconds",13);
		buildingDescriptionDisplay.font = "assets/data/visitor2.ttf";
		buildingDescriptionDisplay.scale.x = 0.5;
		buildingDescriptionDisplay.scale.y = 0.5;
		add(buildingDescriptionDisplay);

		var buyButton = new FlxButton(backgroundSprite.x + backgroundSprite.width - 32 - 2, backgroundSprite.y + backgroundSprite.height - 20 - 2,"",buy);
		buyButton.loadGraphic("assets/images/Buy.png",true,32,20);
		buyButton.animation.add("normal",[0]);
		buyButton.animation.add("highlight",[1]);
		buyButton.animation.add("pressed",[2]);
		add(buyButton);

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

		unitsDisplay = new FlxText(0,0,100, Math.round(playState.lots.totalUnits) + " U",13);
		unitsDisplay.font = "assets/data/visitor2.ttf";
		unitsDisplay.alignment = FlxTextAlign.LEFT;
		unitsDisplay.x = backgroundSprite.x + 2 - unitsDisplay.width/4;
		unitsDisplay.y = backgroundSprite.height + backgroundSprite.y - unitsDisplay.height;
//		totalUnits.y = 0;
		unitsDisplay.scale.x = 0.5;
		unitsDisplay.scale.y = 0.5;
		add(unitsDisplay);

		cashDisplay = new FlxText(0,0,100, Math.round(playState.lots.money) + " $",13);
		cashDisplay.font = "assets/data/visitor2.ttf";
		cashDisplay.alignment = FlxTextAlign.LEFT;
		cashDisplay.x = unitsDisplay.x; //FlxG.camera.width - cashDisplay.width + cashDisplay.width/4;
		cashDisplay.y = unitsDisplay.y + unitsDisplay.height * unitsDisplay.scale.y - cashDisplay.height/4 + 1;
		cashDisplay.scale.x = 0.5;
		cashDisplay.scale.y = 0.5;
		add(cashDisplay);
	}

	public function closeButtonPressed(){
		playState.closeBuildingScreen(false,null);
		this.close();
	}

	public function buy(){
		var currentData:BuildingInfo.BuildingData = BuildingInfo.data[BuildingInfo.types[currentIndex]];
		if(playState.lots.money >= currentData.cost){
			playState.lots.money -= currentData.cost;

			playState.closeBuildingScreen(true,currentData.imageName);

			this.close();
		}else{
			this.openSubState(new NotEnoughCashState());
		}
	}

	public function left(){
		setCurrentIndex(currentIndex - 1);
	}

	public function right(){
		setCurrentIndex(currentIndex + 1);

	}

	public function setCurrentIndex(i:Int){
		if(i >= 0 && i < BuildingInfo.types.length){
			var currentData:BuildingData = BuildingInfo.data[BuildingInfo.types[i]];

			if(currentData != null){
				currentIndex = i;

				buildingDisplay.loadGraphic("assets/images/" + currentData.imageName + ".png",true,24,40);
				buildingDisplay.animation.add("display",[0,1,2,3],10,true);
				buildingDisplay.animation.play("display");
				buildingTitleDisplay.text = currentData.title;
				buildingDescriptionDisplay.text = currentData.description + "\nCosts $" + currentData.cost;
			}
		}
	}

	override public function add(b:FlxBasic){
		if(Std.is(b,FlxObject)){
			var o = cast(b, FlxObject);
			o.scrollFactor.x = 0;
			o.scrollFactor.y = 0;
		}
		return super.add(b);
	}


}
