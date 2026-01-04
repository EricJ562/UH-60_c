#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_MH6
	{
		units[]={"ej_mh6j","ej_mh15m"};
		weapons[]={};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Characters_F",
			"A3_Data_F",
			"A3_Soft_F",
			"A3_UI_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Weapons_F"
		};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Components;
		class Reflectors
		{
			class Right;
		};
	};
	class ej_mh6_base: Helicopter_Base_H
	{
		armor=30;
		altFullForce=4000;
		altNoForce=6000;
		maxSpeed=172;
		fuelCapacity=236;
		memoryPointTaskMarker="TaskMarker_1_pos";
		maxFordingDepth=0.64999998;
		mainBladeRadius=4.3200002;
		tailBladeRadius=0.76999998;
		liftForceCoef=1.1;
		bodyFrictionCoef=0.69999999;
		cyclicAsideForceCoef=1;
		cyclicForwardForceCoef=1;
		backRotorForceCoef=1;
		slingLoadMaxCargoMass=500;
		slingLoadMemoryPoint="slingLoad0";
		editorPreview="\uh-60\data\Previews\mh6m.jpg";
		icon="\A3\Air_F\Heli_Light_01\Data\UI\Map_Heli_Light_01_CA.paa";
		picture="\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_CA.paa";
		fuelConsumptionRate=0.032200001;
		accuracy=0.5;
		washDownStrength="0.7f";
		displayName="MH-6";
		model="\uh-60\MH6\ej_mh6j.p3d";
		driveOnComponent[]=
		{
			"Skids"
		};
		driverAction="Chopperlight_L_Static_H";
		getInAction="ChopperLight_L_In_H";
		precisegetinout=0;
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		transportSoldier=0;
		gunnerUsesPilotView=1;
		castCargoShadow=1;
		radarTargetSize=0.69999999;
		visualTargetSize=0.80000001;
		irTargetSize=0.80000001;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		lockDetectionSystem=0;
		cost=3000000;
		damageResistance=0.01039;
		memoryPointCM[]={"flare_launcher1","Flare_launcher2"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir"};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			autoHoverCorrection[]={0.28,2.8800001,0};
			defaultCollective=0.63499999;
			maxTorque=900;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=31000;
			maxTailRotorStress=5200;
			retreatBladeStallWarningSpeed=77.222;
		};
		class MFD{};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
				};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=14;
				magazine="30Rnd_65x39_caseless_mag";
			};
			class _xx_FlareGreen_F
			{
				count=10;
				magazine="FlareGreen_F";
			};
			class _xx_FlareRed_F
			{
				count=10;
				magazine="FlareRed_F";
			};
			class _xx_FlareWhite_F
			{
				count=10;
				magazine="FlareWhite_F";
			};
			class _xx_FlareYellow_F
			{
				count=10;
				magazine="FlareYellow_F";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon="ej_flaregun";
				count=2;
			};
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
		cargoIsCoDriver[]={0,0};
		hideWeaponsCargo=1;
		driverCanEject=0;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
		};
		memoryPointGun="machinegun_end";
		selectionFireAnim="muzzleFlash";
		class ViewPilot: ViewPilot
		{
			initFov = 1.4; 
			minFov = 0.6; 
			maxFov = 1.0;
      			initAngleX = 0; 
			minAngleX = -65; 
			maxAngleX = +85; 
			initAngleY = 0; 
			minAngleY = -150; 
			maxAngleY = +150;
		};
		class Viewoptics: Viewoptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
		};
		memoryPointDriverOptics="slingCamera";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				iscopilot=1;
				gunnerAction="Chopperlight_R_Static_H";
				gunnerInAction="Chopperlight_R_Static_H";
				weapons[]={};
				magazines[]={};
				gunnerGetInAction="Chopperlight_R_In_H";
				gunnergetOutAction="GetOutLow";
				usePreciseGetInAction=0;
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";	
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				preciseGetInOut=0;
				canEject=0;
				isPersonTurret=0;
				personTurretAction="vehicle_coshooter_1";
				maxElev=15;
				minElev=-60;
				maxTurn=-20;
				minTurn=-105;
				headAimDown=3;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-70,-20};
				};
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos 1";
				memoryPointsGetInGunnerDir="pos 1 dir";
				gunnerName="Left Rear FFV Position";
				proxyIndex=3;
				maxElev=45;
				minElev=-60;
				maxTurn=95;
				minTurn=-15;
				isPersonTurret=1;
				ejectDeadGunner=0;
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos 2";
				memoryPointsGetInGunnerDir="pos 2 dir";
				gunnerName="Left Front FFV Position";
				proxyIndex=4;
				maxElev=45;
				minElev=-45;
				maxTurn=95;
				minTurn=-95;
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerCompartments="compartment3";
				memoryPointsGetInGunner="pos 3";
				memoryPointsGetInGunnerDir="pos 3 dir";
				gunnerName="Right Front FFV Position";
				proxyIndex=6;
				maxElev=45;
				minElev=-60;
				maxTurn=95;
				minTurn=-15;
			};
			class CargoTurret_06: CargoTurret_05
			{
				gunnerCompartments="compartment3";
				memoryPointsGetInGunner="pos 4";
				memoryPointsGetInGunnerDir="pos 4 dir";
				gunnerName="Right Rear FFV Position";
				proxyIndex=5;
				maxElev=45;
				minElev=-45;
				maxTurn=55;
				minTurn=-95;
			};
		};
		#include "rtd.hpp"
		#include "soundsmh6.hpp"
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"UH-60\Data\Mat\MH6\ah6_merge1.rvmat",
				"UH-60\Data\Mat\MH6\ah6_merge1_destruct.rvmat",

				"UH-60\Data\Mat\MH6\ah6_merge2.rvmat",
				"UH-60\Data\Mat\MH6\ah6_merge2_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		class Reflectors: Reflectors
		{
			class Right
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;	
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = true;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = false;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};

			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};			
		};	
		aggregateReflectors[] = {{"Left", "Right"}};
		class AnimationSources: AnimationSources
		{
			class GunL_Revolving
			{
				source="revolving";
				weapon="M134_minigun";
			};
			class GunR_Revolving: GunL_Revolving
			{
			};
			class muzzle_hide
			{
				source="reload";
				weapon="M134_minigun";
			};
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="M134_minigun";
				animPeriod=1e-006;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_DAR";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_DAGR";
			};
			class Proxy
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FormationLights {AnimPeriod = 1;source = "user";InitPhase = 1; };
		};
	};
	class ej_mh6j: ej_mh6_base
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="TF160";
		crew="160th_SOAR_Pilot";
		displayName="MH-6J Little Bird";
		accuracy=1.5;
		editorPreview="\uh-60\data\Previews\mh6j.jpg";
		weapons[] = {ej_master_arms_safe,EricJ_CMFlareLauncher,kuy_IR_Jammer_Weapon};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		hiddenSelectionsTextures[]=
		{
			"\uh-60\data\ah6_merge1_co.paa"
		};
		availableForSupportTypes[] = {"Drop", "Transport"};
		cost=700000;
	};
	class ej_mh15m: ej_mh6j
	{
		scope=2;
		scopeCurator=2;
		side=1;
		ForceinGarage=1;
		faction="TF160";
		mainBladeRadius = 1.1;
		tailBladeRadius=1.1;
		slingLoadMaxCargoMass=750;
		crew="160th_SOAR_Pilot";
		displayName="MH-15M Little Bird";
		accuracy=1.5;
		icon="\UH-60\Data\UI\Map_XX_15M_Icon.paa";
		picture="\UH-60\Data\UI\MH_15M_Icon.paa";
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		editorPreview="\uh-60\data\Previews\mh15m.jpg";
		weapons[] = {ej_master_arms_safe,EricJ_CMFlareLauncher,kuy_IR_Jammer_Weapon};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		model="\uh-60\MH6\ej_mh15m.p3d";
		#include "soundsmh15.hpp"
		class UserActions
		{
			class formationLights 
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" > 0.5";
				statement = "this animate [""FormationLights"",0];";
			};
			class unFormationLights 
			{
				displayName = "Formation Lights Off";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" < 0.5";
				statement = "this animate [""FormationLights"",1];";
			};
		};
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\uh-60\data\ah6_merge1_co.paa","\uh-60\data\dapductfans_co.paa"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		cost=700000;
	};
     };
};