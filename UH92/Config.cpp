#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_UH92
	{
		units[] = {"ej_UH92_MEV","ej_UH92","ej_UH92_U","ej_UH92_NATO","ej_UH92_RWG","ej_MH92","ej_UH92_BRPMC","ej_MH92S"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

class Default;
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
		class EventHandlers;
		class Turrets: Turrets{class CopilotTurret;};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitMissiles;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitWinch;
		};
		class AnimationSources;
		class ViewOptics;
		class Components;
		class NewTurret;
		class MainTurret;
		class RotorLibHelicopterProperties;
		class Reflectors{class Right;};
	};
	class ej_UH92_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 6000kg";
		destrType = "DestructWreck";		
		picture="\UH-60\Data\UI\UH_92_icon.paa";
		icon="\UH-60\Data\UI\Map_UH_92.paa";
		model="UH-60\UH92\ej_UH92.p3d";
		editorSubcategory="EdSubcat_Helicopters";
		memoryPointTaskMarker="TaskMarker_1_pos";
		mapSize = 15;
		cargoCanEject = 1;
		cost=3000000;
		driverCanEject = 0;
		maxFordingDepth = 1.5;
		mainBladeRadius = 1.5;
		tailBladeRadius=1.5;
		tailBladeVertical=0;
		altFullForce = 4000;
		altNoForce = 6000;
		bodyFrictionCoef = 0.7;
		supplyRadius = 2.5;
		liftForceCoef = 1.1;
		maxSpeed=270;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		enableManualFire = 0;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		irScanRangeMax = 2000;
		class Library{libTextDesc = "UH-92";};
		simulation = "helicopterX";
		damageResistance=0.0055499999;
		armor = 70;
		laserScanner=1;
		irtargetsize=1.2;
		RadarTargetSize=1.4;
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class RotorLibHelicopterProperties
		{
			RTDconfig="uh-60_c\UH92\UH-92.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1850;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=200000;
			maxTailRotorStress=25000;
			rtd_center="rtd_center";
		};
		washDownStrength="1.2f";
		fuelCapacity = 1500;
		fuelConsumptionRate=0.106;
		slingLoadMaxCargoMass=6000;
		slingLoadMemoryPoint="slingLoad0";
		memoryPointDriverOptics="slingCamera";
		weapons[]={"Flanker562_CMFlareLauncherUH92","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		availableForSupportTypes[]={"Drop","Transport"};
		LockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16
		threat[]={0.80000001,0.1,0.60000002};
		visualTargetSize=0.96;
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverCanSee=31;
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		driveOnComponent[]=
		{
			"gear_1",
			"gear_2",
			"gear_3",
		};
		cargoAction[]={"passenger_low01","passenger_generic01_leanleft","passenger_generic01_leanleft","passenger_generic01_leanright","passenger_generic01_foldhands","passenger_mantisrear","passenger_mantisrear","passenger_generic01_foldhands"};
		hideWeaponsCargo = 1;
		castCargoShadow=1;
		transportSoldier=12;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		cargoDoors[]={"LDoor","LDoor","LDoor","LDoor","RDoor","RDoor","RDoor","RDoor"};
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2","Flare_launcher3","Flare_launcher4"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir","flare_launcher4_dir"};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportBackpacks
		{
			class _xx_ej_skram
			{
				backpack="ej_skram";
				count=4;
			};
			class _xx_ej_speedball
			{
				backpack="ej_speedball";
				count=4;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count=10;
				magazine="SmokeShellYellow";
			};
			class _xx_SmokeShellPurple
			{
				count=10;
				magazine="SmokeShellPurple";
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
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count=20;
				name="FirstAidKit";
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				count=2;
				name="ItemGPS";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon="ej_flaregun";
				count=2;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gun_HRot{source="user";animPeriod=1e-006;initPhase=0;};
			class Gun_VRot{source="user";animPeriod=1e-006;initPhase=0;};
			class HideWeapon{source = "user";animPeriod = 0.00001;initPhase = 0;};
			class Gatling_1{source="revolving";weapon=M134_UH60;};
			class Gatling_2{source="revolving";weapon=M134_UH60_2;};
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			class ReloadAnim_2{source="reload";weapon="M240_veh_2";};
			class ReloadMagazine_2{source="reloadmagazine";weapon="M240_veh_2";};
			class Revolving_2{source="revolving";weapon="M240_veh_2";};
			class HidePilotMFD{source="user";animPeriod=0;initPhase=0;};
			class HideGunMFD{source="user";animPeriod=0;initPhase=0;};	
			class HideSlingFeed{source="user";animPeriod=0;initPhase=0;};
			class Probe_Show{source="user";animPeriod=0;initPhase=0;};
    			class lights_green_hide{source = "user";animPeriod = 0.001;initPhase = 1;};
    			class hitGlass1
    			{
        			source = "Hit";
        			hitpoint = "hitGlass1";
        			raw = 1;
    			};
    			class hitGlass2
    			{
        			source = "Hit";
        			hitpoint = "hitGlass2";
        			raw = 1;
    			};
    			class hitGlass3
    			{
        			source = "Hit";
        			hitpoint = "hitGlass3";
        			raw = 1;
    			};
    			class hitGlass4
    			{
        			source = "Hit";
        			hitpoint = "hitGlass4";
        			raw = 1;
    			};
    			class hitGlass5
    			{
        			source = "Hit";
        			hitpoint = "hitGlass5";
        			raw = 1;
    			};
    			class hitGlass6
    			{
        			source = "Hit";
        			hitpoint = "hitGlass6";
        			raw = 1;
    			};
    			class hitGlass7
    			{
        			source = "Hit";
        			hitpoint = "hitGlass7";
        			raw = 1;
    			};
    			class hitGlass8
    			{
        			source = "Hit";
        			hitpoint = "hitGlass8";
        			raw = 1;
    			};
    			class hitGlass9
    			{
        			source = "Hit";
        			hitpoint = "hitGlass9";
        			raw = 1;
    			};
    			class hitGlass10
    			{
        			source = "Hit";
        			hitpoint = "hitGlass10";
        			raw = 1;
    			};
    			class hitGlass11
    			{
        			source = "Hit";
        			hitpoint = "hitGlass11";
        			raw = 1;
    			};
    			class hitGlass12
    			{
        			source = "Hit";
        			hitpoint = "hitGlass12";
        			raw = 1;
    			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="zbytek";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitMissiles: HitMissiles
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1;
			};
			class HitEngine1
			{
				armor=0.69999999;
				radius=0.34999999;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				visual="motor";
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine
			{
				armor=999;
				radius=0.050000001;
				minimalHit=1;
				visual="camo2";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1: HitGlass1
			{
        			armor = 0.2;
        			armorComponent = "hit_glass1";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass1_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass1";
			};
			class HitGlass2: HitGlass2
			{
        			armor = 0.2;
        			armorComponent = "hit_glass2";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass2_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass2";
			};
			class HitGlass3: HitGlass3
			{
        			armor = 0.2;
        			armorComponent = "hit_glass3";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass3_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass3";
			};
			class HitGlass4: HitGlass4
			{
        			armor = 0.2;
        			armorComponent = "hit_glass4";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass4_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass4";
			};
			class HitGlass5: HitGlass5
			{
        			armor = 0.2;
        			armorComponent = "hit_glass5";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass5_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass5";
			};
			class HitGlass6: HitGlass6
			{
        			armor = 0.2;
        			armorComponent = "hit_glass6";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass6_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass6";
			};
			class HitGlass7: HitGlass6
			{
        			armor = 0.2;
        			armorComponent = "hit_glass7";
        			explosionShielding = 2;
        			material = -1;
        			minimalHit = 0;
        			name = "hit_glass7_point";
        			radius = 0.20;
        			passThrough = 0;
        			visual = "hit_glass7";
			};
			class HitGlass8: HitGlass7
			{
        			armorComponent = "hit_glass8";
        			name = "hit_glass8_point";
        			visual = "hit_glass8";
			};
			class HitGlass9: HitGlass6
			{
        			armorComponent = "hit_glass9";
        			name = "hit_glass9_point";
        			visual = "hit_glass9";
			};
			class HitGlass10: HitGlass9
			{
        			armorComponent = "hit_glass10";
        			name = "hit_glass10_point";
        			visual = "hit_glass10";
			};
			class HitGlass11: HitGlass9
			{
        			armorComponent = "hit_glass11";
        			name = "hit_glass11_point";
        			visual = "hit_glass11";
			};
			class HitGlass12: HitGlass9
			{
        			armorComponent = "hit_glass12";
        			name = "hit_glass12_point";
        			visual = "hit_glass12";
			};
			class HitGlass13: HitGlass9
			{
        			armorComponent = "hit_glass13";
        			name = "hit_glass13_point";
        			visual = "hit_glass13";
			};
		};
		class UserActions
		{
			class SlingMFDOn
			{
				displayName= "Sling Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",1];";
				priority=4;
			}; 	

			class SlingMFDOff: SlingMFDOn
			{
				displayName= "Sling Page Off";
				condition="this animationPhase ""copip"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",0];";
			}; 
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",0];";
			};
			class GunMFDOn
			{
				displayName= "CP/G FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip2"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",1];";
				priority=4;
			}; 	

			class GunMFDOff: GunMFDOn
			{
				displayName= "CP/G FLIR Page Off";
				condition="this animationPhase ""copip2"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",0];";
			};
			class formationLights 
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""lights_green_hide"" > 0.5";
				statement = "this animate [""lights_green_hide"",0];";
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
				condition = "player in this and this animationPhase ""lights_green_hide"" < 0.5";
				statement = "this animate [""lights_green_hide"",1];";
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
		class MarkerLights 
		{
			class WhiteStill 
			{
				name = "PositionLight_White_1_pos";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill 
			{
				name = "PositionLight_Red_1_pos";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill 
			{
				name = "PositionLight_Green_1_pos";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
		};
		dammageHalf[] = {};	
		dammageFull[] = {};

		#include "soundsuh92.hpp"
		#include "Cherokee_01.hpp"

		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\ductfans_co.paa"};	
		class Damage
		{
			tex[]={};
			mat[]={
				"uh-60\data\mat\uh92_ductfans.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\uh60m_engine.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\uh60m_fuselage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\uh60m_interior.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",

				"uh-60\data\mat\uh60m_navijak.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat",

				"uh-60\data\mat\uh60m_engine_MEV.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\uh60m_fuselage_MEV.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat",

				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",

			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget      																		{
							minRange = 100;         																	maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget : AirTarget
						{
							maxRange = 8000;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance = 100;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -600;
						maxTrackableSpeed = 2600;
						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;
						typeRecognitionDistance = 1000;
						animDirection = "";
						aimDown = 15;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="Gun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov=0.69999999;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				gunnerType="B_helicrew_F";
				minElev=-60;
				maxElev=18;
				initElev=-45;		
				minTurn=-160; 
				maxTurn=5; 
				initTurn=-90;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[]={"M134_uh60_2"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun_1";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				primaryGunner = 0;			
				selectionFireAnim = "m134flash_1";
				proxyIndex = 2;
				gunnerCompartments="Compartment2";
				commanding=-3;	
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType="B_helicrew_F";			
				minElev=-60; 
				maxElev=18; 
				initElev=-30;				
				minTurn=-5; 
				maxTurn=160; 
				initTurn=90;				
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]={"M134_uh60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				selectionFireAnim = "m134flash";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerType="B_helipilot_F";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -190;  
				maxTurn = 190; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};	
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment2";
				commanding=-1;	
				primaryGunner = 1;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,"168Rnd_CMFlare_Chaff_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			
			
				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};
		};
		class textureSources
		{
			class NATO
			{
				displayName="NATO";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_nato_co.paa","\uh-60\data\uh60m_engine_nato_co.paa","\uh-60\data\natoductfans_co.paa"};
				factions[]={"BLU_F"};
			};
			class Desert
			{
				displayName="Desert";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_desert_co.paa","\uh-60\data\uh60m_engine_desert_co.paa","\uh-60\data\desertductfans_co.paa"};
				factions[]={"BLU_F"};
			};
			class RDA
			{
				displayName="RDA SECFOR";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_rda_co.paa","\uh-60\data\uh60m_engine_rda_co.paa","\uh-60\data\rdaductfans_co.paa"};
				factions[]={"BLU_F"};
			};
			class USArmy
			{
				displayName="US Army";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\ductfans_co.paa"};
				factions[]={"USA"};
			};
			class RWG
			{
				displayName="Raven Warfare Group";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_rwg_co.paa","\uh-60\data\uh60m_engine_rwg_co.paa","\uh-60\data\rwgductfans_co.paa"};
				factions[]={"RWG"};
			};
			class SOAR
			{
				displayName="SOAR";
				author="Flanker562";
				textures[]={"uh-60\data\uh60m_fuselage_dap_co.paa","\uh-60\data\uh60m_engine_DAP_co.paa","\uh-60\data\dapductfans_co.paa"};
				factions[]={"TF160"};
			};
			class BRPMC
			{
				displayName="BRPMC";
				author="Flanker562";
				textures[]={"uh-60\data\uh60m_fuselage_blackriver_co.paa","\uh-60\data\uh60m_engine_blackriver_co.paa","\uh-60\data\dapductfans_co.paa"};
				factions[]={"BRPMC"};
			};
			class USArmyMEV
			{
				displayName="US ArmyMEV";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_mev_co.paa", "\uh-60\data\uh60m_engine_mev92_co.paa", "\uh-60\data\ductfans_co.paa"};
				factions[]={"USA"};
			};
			class JASDF
			{
				displayName="Japan Air Self Defense Force";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_JASDF_co.paa", "\uh-60\data\uh60m_engine_Navy_co.paa", "\uh-60\data\usnductfans_co.paa"};
				factions[]={"USA"};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_UH92: ej_uh92_base
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		scopecurator=2;
		side=1;
		faction="USA";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = "UH-92 Cherokee";
		textureList[]={"USArmy",1};
		cost=200000;
		editorPreview="\uh-60\data\Previews\UH92.jpg";
	};
	class ej_UH92_NATO: ej_uh92_base
	{
		author="Flanker562";
		scope=2;
		scopecurator=2;
		accuracy=1;
		side=1;
		ForceInGarage=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		editorPreview="\uh-60\data\Previews\UH92NATO.jpg";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = UH-92 Cherokee (NATO);
		textureList[]={"NATO",1};
		cost=200000;
	};
	class ej_UH92_MEV: ej_uh92_base
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		scopecurator=2;
		side=1;
		faction="USA";
		cost=200000;
		crew="B_Helipilotusa_F";
		typicalCargo[]={"B_Helipilotusa_F"};
		displayName = UH-92 Cherokee MEV;
		editorPreview="\uh-60\data\Previews\UH92MEV.jpg";
		model = "\UH-60\UH92\ej_UH92_MEV.p3d";
		transportSoldier = 4;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		textureList[]={"USArmyMEV",1};

		class ACE_Actions 
		{
            
            		class ACE_MainActions 
			{
                		class Medical_Menu 
				{
                    			displayName = CSTRING(OpenMenu);
                    			runOnHover = 0;
                    			exceptions[] = {"isNotInside"};
                    			condition = QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu));
                    			statement = QUOTE([_target] call DFUNC(openMenu));
                    			icon = PATHTOEF(medical,UI\icons\medical_cross.paa);
                		};
            		};
        	};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov=0.69999999;
				};
			};
		};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -190;  
				maxTurn = 190; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 1;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,"168Rnd_CMFlare_Chaff_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			
				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};

		 };
	};
	class ej_UH92_U: ej_uh92_base
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		side=1;
		scopecurator=2;
		faction="USA";
		cost=200000;
		crew="B_Helipilotusa_F";
		typicalCargo[]={"B_Helipilotusa_F"};
		displayName = UH-92 Cherokee (Unarmed);
		editorPreview="\uh-60\data\Previews\UH92U.jpg";
		model = "\UH-60\UH92\ej_UH92_U.p3d";
		transportSoldier = 12;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		textureList[]={"USArmy",1};

		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov=0.69999999;
				};
			};
		};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -190;  
				maxTurn = 190; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 1;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,"168Rnd_CMFlare_Chaff_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			
				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side";
				memoryPointsGetInGunnerDir="pos side dir";
				gunnerName="Left Side FFV Position";
				proxyIndex=13;
				maxElev=15;
				minElev=-80;
				maxTurn=30;
				minTurn=-30;
				isPersonTurret=1;
				ejectDeadGunner=0;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side 2 dir";
				gunnerName="Right Side FFV Position";
				proxyIndex=14;
				maxElev=14;
				minElev=-80;
				maxTurn=30;
				minTurn=-30;
				isPersonTurret=1;
				ejectDeadGunner=0;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
				memoryPointGunnerOptics="";
			};

		 };
	};
	class ej_UH92_RWG: ej_uh92_base
	{
		dlc=ej_Uh60;
		author="Flanker562";
		scope=2;
		accuracy=1;
		scopecurator=2;
		side=2;
		faction="RWG";
		receiveRemoteTargets=0;
		reportRemoteTargets=0;
		crew="RWG_Helipilot_F";
		ace_fastroping_enabled = 1;
		editorPreview="\uh-60\data\Previews\UH92RWG.jpg";
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		typicalCargo[]={"RWG_Helipilot_F"};
		displayName = UH-92 Cherokee (RWG);
		model = "\UH-60\UH92\ej_UH92_RWG.p3d";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		textureList[]={"RWG",1};
		cost=200000;
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov=0.69999999;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				gunnerType="RWG_Helicrew_F";
				minElev=-60;
				maxElev=18;
				initElev=-45;		
				minTurn=-160; 
				maxTurn=5; 
				initTurn=-90;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[]={"M134_uh60_2"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun_1";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;			
				selectionFireAnim = "m134flash_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";		
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType="RWG_Helicrew_F";			
				minElev=-60; 
				maxElev=18; 
				initElev=-30;				
				minTurn=-5; 
				maxTurn=160; 
				initTurn=90;				
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]={"M134_uh60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				selectionFireAnim = "m134flash";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				gunnerType="RWG_Helipilot_F";
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -190;  
				maxTurn = 190; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;
				primaryGunner = 1;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted};
				magazines[] = {Laserbatteries};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			

				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};
		};
	};
	class ej_UH92_BRPMC: ej_uh92_RWG
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		side=0;
		scopecurator=2;
		Forceingarage=1;
		editorPreview="\uh-60\data\Previews\UH92BRPMC.jpg";
		displayName = UH-92 Cherokee (Black River PMC);
		faction="BRPMC";
		crew="BRPMC_Pilot";
		typicalCargo[]={"BRPMC_Pilot"};
		textureList[]={"BRPMC",1};
		cost=200000;
        };
	class ej_MH92: ej_uh92_base
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		side=1;
		scopecurator=2;
		faction="TF160";
		editorPreview="\uh-60\data\Previews\MH92.jpg";
		picture="\UH-60\Data\UI\MH_92_Icon.paa";
		icon="\UH-60\Data\UI\Map_MH_92.paa";
		crew = "160th_SOAR_Pilot";
		typicalCargo[]={"160th_SOAR_Pilot"};
		displayName = MH-92F (Insertion);
		model = "\UH-60\MH92\ej_MH92.p3d";
		cost=250000;
		RadarTargetSize=1.4;
		irTargetSize=0.80000001;
		irScanRangeMax = 4000;
        	USAF_RefuelType = "probe";
        	USAF_RefuelPoint[] = {-0.495, -0.413, -7.883};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		textureList[]={"SOAR",1};
		weapons[] = {Flanker562_CMFlareLauncherUH92,kuy_IR_Jammer_Weapon};
		magazines[] = {240Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine};
		slingLoadMaxCargoMass=5500;
					cargoAction[]={"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Transport_01\RTD_Heli_Transport_01.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1100;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=200000;
			maxTailRotorStress=25000;
			rtd_center="rtd_center";
		};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov=0.69999999;
				};
			};
			class MFD3
			{
				renderTarget = "rendertarget2";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class TransportBackpacks
		{
			class _xx_ej_skram_SOAR
			{
				backpack="ej_skram_SOAR";
				count=4;
			};
			class _xx_ej_speedball
			{
				backpack="ej_speedball";
				count=4;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count=10;
				magazine="SmokeShellYellow";
			};
			class _xx_30Rnd_65x39_caseless_FMJBT
			{
				count=14;
				magazine="30Rnd_65x39_caseless_FMJBT";
			};
			class _xx_SmokeShellPurple
			{
				count=10;
				magazine="SmokeShellPurple";
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
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count=10;
				name="FirstAidKit";
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				count=2;
				name="ItemGPS";
			};
			class _xx_ej_160th_ANVIS
			{
				count=2;
				name="160th_ANVIS";
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
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget      																		{
							minRange = 100;         																	maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget : AirTarget
						{
							maxRange = 8000;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance = 100;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -600;
						maxTrackableSpeed = 2600;
						minTrackableATL = -1e10;
						maxTrackableATL = 1e10;
						typeRecognitionDistance = 1000;
						animDirection = "";
						aimDown = 15;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="Gun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=-30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class UserActions
		{
			class SlingMFDOn
			{
				displayName= "Sling Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",1];";
				priority=4;
			}; 	

			class SlingMFDOff: SlingMFDOn
			{
				displayName= "Sling Page Off";
				condition="this animationPhase ""copip"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",0];";
			}; 
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",0];";
			};
			class GunMFDOn
			{
				displayName= "CP/G FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip2"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",1];";
				priority=4;
			}; 	

			class GunMFDOff: GunMFDOn
			{
				displayName= "CP/G FLIR Page On";
				condition="this animationPhase ""copip2"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",0];";
			};
			class formationLights 
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 2;
				radius = 4;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""lights_green_hide"" > 0.5";
				statement = "this animate [""lights_green_hide"",0];";
			};
			class unFormationLights 
			{
				displayName = "Formation Lights Off";
				position = "pilot";
				priority = 2;
				radius = 4;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""lights_green_hide"" < 0.5";
				statement = "this animate [""lights_green_hide"",1];";
			};
			class Probe_Show
			{
				displayName= "Hide Probe";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""Probe_hide"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""Probe_hide"",1];";
				priority=4;
			}; 	
			class Probe_ShowOff: Probe_Show
			{
				displayName= "Show Probe";
				condition="this animationPhase ""Probe_Hide"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""Probe_Hide"",0];";
			};
		};
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				gunnerType="160th_SOAR_Crew";
				minElev=-60;
				maxElev=18;
				initElev=-45;		
				minTurn=-160;
				gunnerLeftHandAnimName="gunner_1_hand_l";
				gunnerRightHandAnimName="gunner_1_hand_r";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs"; 
				maxTurn=5; 
				initTurn=0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[]={"M134_UH60_2"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun_1";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerCompartments="Compartment3";
				commanding=-3;
				primaryGunner = 0;			
				selectionFireAnim = "m134flash_1";
				proxyIndex = 2;
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType="160th_SOAR_Crew";			
				minElev=-60;
				gunnerLeftHandAnimName="gunner_1_hand_l";
				gunnerRightHandAnimName="gunner_1_hand_r";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs"; 
				maxElev=18; 
				initElev=-45;				
				minTurn=-5; 
				maxTurn=160; 
				initTurn=0;				
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]={"M134_UH60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				selectionFireAnim = "M134flash";
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerType="160th_SOAR_Pilot";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;				
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment2";
				commanding=-1;	
				primaryGunner = 1;															class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};			
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,Laserdesignator_mounted};
				magazines[] = {240Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,Laserbatteries};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			
				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_leanleft";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos sl";
				memoryPointsGetInGunnerDir="pos sl dir";
				gunnerName="Squad Leader Seat";
				proxyIndex=8;
				maxElev=50;
				minElev=-20;
				maxTurn=0;
				minTurn=0;
				isPersonTurret=0;
				onlyForPlayer=1;
				ejectDeadGunner=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
				enabledByAnimationSource="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side";
				memoryPointsGetInGunnerDir="pos side dir";
				gunnerName="Left Side FFV Position";
				proxyIndex=10;
				maxElev=15;
				minElev=-80;
				maxTurn=65;
				minTurn=-25;
				isPersonTurret=1;
				ejectDeadGunner=0;
				onlyForPlayer=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 4";
				memoryPointsGetInGunnerDir="pos side dir 4";
				gunnerName="Left Side FFV Position 2";
				proxyIndex=9;
				maxElev=15;
				minElev=-80;
				maxTurn=20;
				minTurn=-65;
				isPersonTurret=1;
				ejectDeadGunner=0;
				usepip=0;
				onlyForPlayer=1;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side dir 2";
				gunnerName="Right Side FFV Position";
				proxyIndex=11;
				maxElev=15;
				minElev=-80;
				maxTurn=25;
				minTurn=-65;
				isPersonTurret=1;
				ejectDeadGunner=0;
				onlyForPlayer=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos side 3";
				memoryPointsGetInGunnerDir="pos side dir 3";
				gunnerName="Right Side FFV Position 2";
				proxyIndex=12;
				maxElev=15;
				minElev=-80;
				maxTurn=65;
				minTurn=-20;
				isPersonTurret=1;
				ejectDeadGunner=0;
				onlyForPlayer=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
			};
		};
	};
	class ej_MH92S: ej_MH92
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		side=1;
		scopecurator=2;
		faction="TF160";
		crew = "160th_SOAR_Pilot";
		editorPreview="\uh-60\data\Previews\MH92.jpg";
		typicalCargo[]={"160th_SOAR_Pilot"};
		displayName = MH-92F (Sniper);
		model = "\UH-60\MH92\ej_MH92S.p3d";
		cost=250000;
		transportSoldier=2;
		class UserActions
		{
			class SlingMFDOn
			{
				displayName= "Sling Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",1];";
				priority=4;
			}; 	

			class SlingMFDOff: SlingMFDOn
			{
				displayName= "Sling Page Off";
				condition="this animationPhase ""copip"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip"",0];";
			}; 
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip1"",0];";
			};
			class GunMFDOn
			{
				displayName= "CP/G FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip2"" < 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",1];";
				priority=4;
			}; 	

			class GunMFDOff: GunMFDOn
			{
				displayName= "CP/G FLIR Page On";
				condition="this animationPhase ""copip2"" > 0.5 AND (player == (gunner this) && (alive this))";
				statement="this animate [""copip2"",0];";
			};
			class formationLights 
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""lights_green_hide"" > 0.5";
				statement = "this animate [""lights_green_hide"",0];";
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
				condition = "player in this and this animationPhase ""lights_green_hide"" < 0.5";
				statement = "this animate [""lights_green_hide"",1];";
			};
			class Probe_Show
			{
				displayName= "Hide Probe";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""Probe_hide"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""Probe_hide"",1];";
				priority=4;
			}; 	
			class Probe_ShowOff: Probe_Show
			{
				displayName= "Show Probe";
				condition="this animationPhase ""Probe_Hide"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""Probe_Hide"",0];";
			};
		};
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				gunnerType="160th_SOAR_Crew";
				minElev=-60;
				maxElev=18;
				initElev=-45;		
				minTurn=-160; 
				maxTurn=5; 
				initTurn=0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[]={"M134_UH60_2"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun_1";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerCompartments="Compartment3";
				commanding=-3;
				primaryGunner = 0;			
				selectionFireAnim = "m134flash_1";
				proxyIndex = 2;
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType="160th_SOAR_Crew";			
				minElev=-60; 
				maxElev=18; 
				initElev=-45;				
				minTurn=-5; 
				maxTurn=160; 
				initTurn=0;				
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]={"M134_UH60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				selectionFireAnim = "M134flash";
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerType="160th_SOAR_Pilot";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				minElev = -80;
				maxElev = +25;
				initElev = 0;
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;				
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment2";
				commanding=-1;	
				primaryGunner = 1;																		class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};			
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,Laserdesignator_mounted};
				magazines[] = {240Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,Laserbatteries};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			
				class OpticsIn 
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
					};			
				};
				class OpticsOut 
				{
					class Monocular 
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2, 3};						
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0; 
					minAngleX = -30; 
					maxAngleX = +30;
					initAngleY = 40; 
					minAngleY = -100; 
					maxAngleY = +100;
					initFov = 1.4; 
					minFov = 0.3; 
					maxFov = 1.0;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerName="Sniper Position";
				proxyIndex=1;
				maxElev=23;
				minElev=-30;
				maxTurn=20;
				minTurn=-35;
				isPersonTurret=1;
				onlyForPlayer=1;
				ejectDeadGunner=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
				enabledByAnimationSource="";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_flatground_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 3";
				memoryPointsGetInGunnerDir="pos side dir 3";
				gunnerName="Spotter Position";
				proxyIndex=2;
				maxElev=23;
				minElev=-30;
				maxTurn=25;
				minTurn=-15;
				isPersonTurret=1;
				ejectDeadGunner=0;
				onlyForPlayer=1;
				usepip=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				memoryPointGunnerOptics="";
			};

		};
	};
	class HelicopterWreck;
	class uh92_wreck_F: HelicopterWreck
	{
		scope=1;	// we don't want to see wreck model in editor (you can use scope=2 if you want to see it)
		model="UH-60\Misc\MH_92Wreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers{};
	};
};

class CfgFunctions
{
    class ej_engine
    {
        class hatchet
        {   
            class setup { file = "\UH-60_c\UH92\fnc_setup.sqf";};
            class shutDown { file = "\UH-60_c\UH92\fnc_shutDown.sqf";};
        };
    };
};