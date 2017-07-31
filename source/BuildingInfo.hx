package ;

typedef BuildingData = {
	var title:String;
	var description:String;
	var imageName:String;
	var cost:Int;
	var output:Float;
	var chargeTime:Float;
	var dies:Float;
}

class BuildingInfo {

	public static var types = ["Windmill-1","Windmill-2","Windmill-3","Gas-1","Gas-2","Gas-3","Battery-1","Battery-2","Battery-3"];

	public static var data:Map<String, BuildingData> = [
		"Windmill-1" =>
		{
			title:"Old Windmill",
			description:"Wow! This windmill powered Thomas Edison's toaster from 1880 until 1881! Consider yourself lucky, you've got an antique on your hands!\nDelivers 1 unit every 4 seconds",
			imageName:"Windmill-1",
			cost:100,
			output:1.0,
			chargeTime:4.0,
			dies:-1
		},
		"Windmill-2" =>
		{
			title:"Slightly Newer Windmill",
			description:"WOW... Wait weren't these older than the other ones???\nDelivers 3 units every 5 seconds.",
			imageName:"Windmill-2",
			cost:250,
			output:3,
			chargeTime:5.0,
			dies:-1
		},
		"Windmill-3" =>
		{
			title:"Wind Turbine",
			description:"Now this is impressive. Maybe you should like build more of these.\nDelivers 10 units every 2 seconds",
			imageName:"Windmill-3",
			cost:2000,
			output:10.0,
			chargeTime:2.0,
			dies:-1
		},
		"Gas-1" =>
		{
			title:"Spoiled Camper Generator",
			description:"Do you really need one of these? Really?\nDelivers 1 unit every 6 seconds",
			imageName:"Gas-1",
			cost:40,
			output:1.0,
			chargeTime:6.0,
			dies:-1
		},
		"Gas-2" =>
		{
			title:"Household Backup Generator",
			description:"The power goes out. You hear a blood curdling scream. The lights come back on. You realize that was you...\nDelivers 4 units every 10 seconds",
			imageName:"Gas-2",
			cost:200,
			output:4.0,
			chargeTime:10.0,
			dies:-1
		},
		"Gas-3" =>
		{
			title:"Power Plant Generator",
			description:"These things *CAN'T* be good for the environment!\nDelivers 10 units every 10 seconds",
			imageName:"Gas-3",
			cost:1000,
			output:10.0,
			chargeTime:40.0,
			dies:-1
		},
		"Battery-1" =>
		{
			title:"Flashlight Battery",
			description:"That's cute.\nDelivers 1 unit every second but DIES after 10 seconds",
			imageName:"Battery-1",
			cost:10,
			output:1.0,
			chargeTime:1.0,
			dies:10.0
		},
		"Battery-2" =>
		{
			title:"Car Battery",
			description:"I dare you to lick it.\nDelivers 2 units every second but DIES after 8 seconds",
			imageName:"Battery-2",
			cost:50,
			output:2,
			chargeTime:1,
			dies:8
		},
		"Battery-3" =>
		{
			title:"GIANT BATTERY",
			description:"I'm not even gonna go near that.\nDelivers 8 units every second but DIES after 4 seconds",
			imageName:"Battery-3",
			cost:100,
			output:8,
			chargeTime:1,
			dies:4
		}
	];

	public function new() {

	}
}
