#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_UAV
	{
		units[] = {"ej_MQ17SOAR","ej_MQ17","ej_MQ17C","ej_MQ17C_CIV_F","ej_MQ37","ej_MQ37D","ej_MQ17D"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class ej_MQ17_base: Helicopter_Base_F
	{
		features = "Slingload: Slingloads up to 500kg";
		destrType = "DestructWreck";		
		picture="\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon="\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		editorSubcategory="EdSubcat_Drones";
		mapSize = 4;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_air_UAV_s"};
				speechPlural[]={"veh_air_UAV_p"};
			};
		};
		maxFordingDepth = 1.5;
		mainBladeRadius = 2;
		altFullForce = 4000;
		altNoForce = 6000;
		killFriendlyExpCoef=0.1;
		bodyFrictionCoef = 0.7;
		supplyRadius = 2.5;
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		enableManualFire = 0;
		irtarget=0;
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		irScanRangeMax = 2000;
		class Library{libTextDesc = "MQ-17";};
		simulation = "helicopterX";
		armor = 40;
		laserScanner=1;
		gearRetracting=0;
		irscanner=1;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		predictTurnPlan=2;
		predictTurnSimul=1.5;
		fuelCapacity = 100;
		maxSpeed = 200;
		camouflage=5;
		slingLoadMaxCargoMass=50;
		slingLoadMemoryPoint="slingLoad0";
		LockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16
		threat[] = {0.8, 1, 0.6};
		unitInfoType = "RscOptics_AV_pilot";
		unitInfoTypeRTD = "RscOptics_AV_pilot";
		memoryPointDriverOptics = "Driver_pos";
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics = 1;
		disableInventory=1;
		washDownDiameter="10.0f";
		washDownStrength="0.25f";
		model = "\UH-60\UAV\ej_MQ17.p3d";
		isUav=1;
		driverCompartments="Compartment3";
		cargoCompartments[]={"Compartment2"};
		precision=15;
		dustEffect="UAVDust";
		waterEffect="UAVWater";
		LODTurnedIn=-1;
		LODTurnedOut=-1;
		cost=3000000;
		radarTargetSize=0.3;
		visualTargetSize=0.69999999;
		irTargetSize=0.5;
		availableForSupportTypes[]={"CAS_Heli"};
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2","Flare_launcher3","Flare_launcher4"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir","flare_launcher4_dir"};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		uavCameraDriverPos = "light_pos";
		uavCameraDriverDir = "light_dir";
		vehicleClass="Autonomous";
		class TransportItems{};
		class MFD{};
		class Damage
		{
			tex[]={};
			mat[]=
			{

				"UH-60\Data\Mat\MQ17.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_damage.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_destruct.rvmat",

				"UH-60\Data\Mat\uh92_ductfans.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_damage.rvmat",
				"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_destruct.rvmat"
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
			};
			class HitHRotor: HitHRotor
			{
				armor=0.30000001;
			};
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			visionMode[]={"Normal","NVG","Ti"};
			thermalMode[]={0,1};
		};
		#include "soundsUH92.hpp"
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=0;
				minElev=-90;
				maxElev=3;
				initElev=-3;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						initFov=0.0286;
						minFov=0.0286;
						maxFov=0.0286;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointGun="PIP0_dir";
				memoryPointGunnerOptics="PIP0_pos";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics=1;
				turretInfoType="RscOptics_UAV_gunner";
				stabilizedInAxes=3;
				soundServo[]={"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_1",0.079432823,1,10};
				soundServoVertical[]={"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				GunnerCompartments="Compartment1";
				LODTurnedIn=-1;
				LODTurnedOut=-1;
			};
		};
	};
	class ej_MQ17: ej_MQ17_base
	{
		author="EricJ";
		_generalMacro="ej_MQ17";
		scope=2;
		accuracy=1;
		faction="BLU_F";
		side=1;
		displayName = MQ-17 Hawk;
		crew="B_UAV_AI";
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		cost=200000;
		reportOwnPosition=1;
		typicalCargo[]={"B_UAV_AI"};
		weapons[]={"ej_master_arms_safe","EricJ_CMFlareLauncherUH92","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_mq17.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_2rnd_Rattler_uh60";
						priority=5;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_RATTLER_PYLON",
							"M134_mq17"
						};
						turret[]={1};
						maxweight=150;
						UIposition[]={0.59999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_2rnd_Rattler_uh60";
						priority=5;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_RATTLER_PYLON",
							"M134_mq17"
						};
						turret[]={1};
						UIposition[]={0.059999999,0.40000001};									maxweight=150;						
					};

				};
			};
		};
	};
	class ej_MQ17D: ej_MQ17
	{
		author="EricJ";
		_generalMacro="ej_MQ17";
		scope=2;
		accuracy=1;
		faction="BLU_F";
		side=1;
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		cost=200000;
		displayName = MQ-17 Hawk (Desert);
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17D_co.paa","uh-60\data\desertductfans_co.paa"};
	};
	class ej_MQ17SOAR: ej_MQ17
	{
		author="EricJ";
		_generalMacro="ej_MQ17";
		scope=2;
		accuracy=1;
		faction="TF160";
		cost=200000;
		side=1;
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		displayName = MQ-17 Hawk (SOAR);
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17SOAR_co.paa","\uh-60\data\dapductfans_co.paa"};
	};
	class ej_MQ17C: ej_MQ17_base
	{
		author="EricJ";
		_generalMacro="ej_MQ17";
		scope=2;
		accuracy=1;
		side=1;
		faction="BLU_F";
		displayName = MQ-17 Hawk (Cargo);
		crew="B_UAV_AI";
		cost=200000;
		typicalCargo[]={"B_UAV_AI"};
		slingLoadMaxCargoMass=500;
		model = "\UH-60\UAV\ej_MQ17C.p3d";
	};
	class ej_MQ17C;
	class ej_MQ17C_CIV_F: ej_MQ17C
	{
		author="EricJ";
		_generalMacro="ej_MQ17";
		scope=2;
		accuracy=1;
		side=3;
		cost=200000;
		faction="CIV_IDAP_F";
		displayName = MQ-17 Cargo Drone;
		crew="C_IDAP_UAV_AI_F";
		typicalCargo[]={"C_IDAP_UAV_AI_F"};
		slingLoadMaxCargoMass=600;
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17_civ_co.paa","uh-60\data\whiteductfans_co.paa"};
		model = "\UH-60\UAV\ej_MQ17CIV.p3d";
          };
	class ej_MQ37: ej_MQ17_base
	{
		author="EricJ";
		_generalMacro="ej_MQ37";
		scope=2;
		accuracy=1;
		side=1;
		faction="BLU_F";
		displayName = MQ-37 Cargo Drone;
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		slingLoadMaxCargoMass=2000;
		model = "\UH-60\UAV\ej_MQ37.p3d";
		fuelCapacity = 400;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		cost=200000;
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17_co.paa","uh-60\data\natoductfans_co.paa","uh-60\data\drone_co.paa"};
		slingLoadCargoMemoryPoints[]={"SlingLoad1","SlingLoad2","SlingLoad3","SlingLoad4"};
		weapons[]={"ej_master_arms_safe","EricJ_CMFlareLauncherUH92","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
          };
	class ej_MQ37D: ej_MQ37
	{
		author="EricJ";
		_generalMacro="ej_MQ37";
		scope=2;
		accuracy=1;
		side=1;
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		faction="BLU_F";
		cost=200000;
		displayName = MQ-37 Cargo Drone (Desert);
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17D_co.paa","uh-60\data\desertductfans_co.paa","uh-60\data\drone_desert_co.paa"};
        };
	class ej_MQ37USMC: ej_MQ37
	{
		author="EricJ";
		_generalMacro="ej_MQ37";
		scope=2;
		accuracy=1;
		side=1;
		cost=200000;
		faction="USMC";
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		displayName = MQ-37 Cargo Drone (USMC);
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17USMC_co.paa","uh-60\data\usmcductfans_co.paa","uh-60\data\drone_usmc_co.paa"};
          };
	class ej_MQ37USN: ej_MQ37
	{
		author="EricJ";
		_generalMacro="ej_MQ37";
		scope=2;
		accuracy=1;
		side=1;
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
		faction="USN";
		cost=200000;
		displayName = MQ-37 Cargo Drone (US Navy);
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"uh-60\data\mq17USN_co.paa","uh-60\data\usnductfans_co.paa","uh-60\data\drone_usn_co.paa"};
          };
};
