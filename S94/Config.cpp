#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_S94
	{
		units[] = {"ej_S94U","ej_S94"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
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
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitWinch;
		};
		class AnimationSources;
		class ViewOptics;
		class NewTurret;
		class MainTurret;
		class RotorLibHelicopterProperties;
		class Reflectors{class Right;};
	};
	class ej_S94_base: Helicopter_Base_H
	{
		destrType = "DestructWreck";		
		picture="\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon="\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		editorSubcategory="EdSubcat_Helicopters";
		mapSize = 15;
		cargoCanEject = 1;
		driverCanEject = 0;
		maxFordingDepth = 1.5;
		mainBladeRadius = 2;
		altFullForce = 4000;
		altNoForce = 6000;
		bodyFrictionCoef = 0.7;
		supplyRadius = 2.5;
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		irtargetsize=1.2;
		RadarTargetSize=1.4;
		enableManualFire = 0;
		class Library{libTextDesc = "UH-92";};
		simulation = "helicopterX";
		armor = 30;
		washDownStrength="1.2f";
		damageResistance=0.0055499999;
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class RotorLibHelicopterProperties
		{
			RTDconfig="uh-60_c\S94\UH-92.xml";
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
		fuelCapacity = 1360;
		fuelConsumptionRate=0.126;
		maxSpeed = 270;
		slingLoadMaxCargoMass=4000;
		slingLoadMemoryPoint="slingLoad0";
		memoryPointDriverOptics="slingCamera";
		availableForSupportTypes[]={"Drop","Transport"};
		LockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16
		threat[] = {0.8, 1, 0.6};
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverCanSee=31;
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		driveOnComponent[] = {"Wheels"};
		cargoAction[]={"passenger_low01","passenger_generic01_leanleft","passenger_generic01_leanleft","passenger_generic01_leanright","passenger_generic01_foldhands","passenger_mantisrear","passenger_mantisrear","passenger_generic01_foldhands"};
		hideWeaponsCargo = 1;
		castCargoShadow=1;
		transportSoldier=12;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		castCargoShadow=1;
		transportSoldier=16;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		availableForSupportTypes[]={"Drop","Transport"};
		cargoDoors[]={"LDoor","LDoor","LDoor","LDoor","RDoor","RDoor","RDoor","RDoor"};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportBackpacks
		{
			class _xx_ej_survivalbag
			{
				backpack="ej_survivalbag";
				count=2;
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
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.093;
				};
			};
		};
		class MFD{};
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
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="camo1";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				name=camo1;
				armor=0.69999999;
				radius=0.125;
				passthrough=0.5;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.15000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitEngine1: HitEngine
			{
				armor=0.69999999;
				radius=0.34999999;
				explosionShielding=3;
				minimalHit=0.1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				visual="camo2";
				name="engine_hit";
				convexComponent="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.1;
				explosionShielding=2;
			};
			class HitVRotor: HitVRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.1;
				explosionShielding=2;
			};
			class HitGlass1: HitGlass1
			{
				name=glass1;
				passthrough=0.5;
				armor=1.3;
				radius=0.44999999;
				explosionShielding=6;
			};
			class HitGlass2: HitGlass2
			{
				name=glass2;
				passthrough=0.5;
				armor=1.3;
				radius=0.44999999;
				explosionShielding=6;
			};
			class HitGlass3: HitGlass3
			{
				name=glass3;
				armor=1.3;
				passthrough=0.5;
				radius=0.34999999;
				explosionShielding=6;
			};
			class HitGlass4: HitGlass4
			{
				name=glass4;
				passthrough=0.5;
				armor=1.3;
				radius=0.34999999;
				explosionShielding=6;
			};
			class HitGlass5: HitGlass5
			{
				name=glass5;
				passthrough=0.5;
				armor=1.3;
				radius=0.46000001;
				explosionShielding=6;
			};
			class HitGlass6: HitGlass6
			{
				name=glass6;
				passthrough=0.5;
				armor=1.3;
				radius=0.46000001;
				explosionShielding=6;
			};
			class HitGlass7: HitGlass6
			{
				name="glass7";
				passthrough=0.5;
				convexComponent="glass7";
				visual="glass7";
				radius=0.2;
			};
			class HitGlass8: HitGlass7
			{
				name="glass8";
				passthrough=0.5;
				convexComponent="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass6
			{
				name="glass9";
				passthrough=0.5;
				convexComponent="glass9";
				visual="glass9";
				radius=0.41999999;
			};
			class HitGlass10: HitGlass9
			{
				name="glass10";
				convexComponent="glass10";
				visual="glass10";
			};
			class HitGlass11: HitGlass9
			{
				name="glass11";
				convexComponent="glass11";
				visual="glass11";
			};
			class HitGlass12: HitGlass9
			{
				name="glass12";
				convexComponent="glass12";
				visual="glass12";
			};
			class HitGlass13: HitGlass6
			{
				name="glass13";
				convexComponent="glass13";
				visual="glass13";
				radius=0.33000001;
			};
			class HitWinch: HitWinch
			{
				name=winch;
				passthrough=0.5;
				armor=1.3;
				radius=0.34999999;
				explosionShielding=6;
				class DestructionEffects{};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gun_HRot{source="user";animPeriod=1e-006;initPhase=0;};
			class Gun_VRot{source="user";animPeriod=1e-006;initPhase=0;};
			class HideWeapon{source = "user";animPeriod = 0.00001;initPhase = 0;};
			class Gatling{source = "revolving";weapon = "M197_MH60";};
			class Gatling_1{source="revolving";weapon=LMG_Minigun_Transport;};
			class Gatling_2{source="revolving";weapon=LMG_Minigun_Transport2;};
			class Cannon{source = "ammorandom";weapon = "M230";};
			class Missiles_revolving{source = "revolving";weapon = "missiles_DAGR";};
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			class ReloadAnim_2{source="reload";weapon="M240_veh_2";};
			class ReloadMagazine_2{source="reloadmagazine";weapon="M240_veh_2";};
			class Revolving_2{source="revolving";weapon="M240_veh_2";};
			class FormationLights {AnimPeriod = 1;source = "user";InitPhase = 1; };
			class HidePilotMFD{source="user";animPeriod=0;initPhase=0;};
			class HideGunMFD{source="user";animPeriod=0;initPhase=0;};	
			class HideSlingFeed{source="user";animPeriod=0;initPhase=0;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
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

				"uh-60\data\mat\uh60m_navijak.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"a3\air_f_beta\heli_transport_01\data\heli_transport_01_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

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
				"A3\data_F\default_destruct.rvmat"

			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
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
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				copilotHasFlares = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
		};
		class textureSources
		{
			class CIVWhite
			{
				displayName="White";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_white_co.paa","\uh-60\data\uh60m_engine_white_co.paa","\uh-60\data\whiteductfans_co.paa"};
				factions[]={"CIV_F"};
			};
			class CIVRed
			{
				displayName="Red";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_Red_co.paa","\uh-60\data\uh60m_engine_Red_co.paa","\uh-60\data\redductfans_co.paa"};
				factions[]={"CIV_F"};
			};
			class CIVGreen
			{
				displayName="Green";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_Green_co.paa","\uh-60\data\uh60m_engine_Green_co.paa","\uh-60\data\Greenductfans_co.paa"};
				factions[]={"CIV_F"};
			};
			class CIVBlue
			{
				displayName="Blue";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_blue_co.paa","\uh-60\data\uh60m_engine_blue_co.paa","\uh-60\data\blueductfans_co.paa"};
				factions[]={"CIV_F"};
			};
			class CIVBlack
			{
				displayName="Black";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_black_co.paa","\uh-60\data\uh60m_engine_black_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[]={"CIV_F","BLU_F"};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_S94: ej_S94_base
	{
		author="EricJ";
		_generalMacro="ej_S94";
		scope=2;
		accuracy=1;
		side=3;
		faction="CIV_F";
		crew="CIV_Helipilot_F";
		displayName = S-94;
		model = "\UH-60\S94\ej_S94.p3d";
		textureList[]={"CIVWhite",1};
		cost=200;
	};
	class ej_S94U: ej_S94
	{
		author="EricJ";
		_generalMacro="ej_S94U";
		scope=2;
		slingLoadMaxCargoMass=6000;
		ForceinGarage=1;
		model = "\UH-60\S94\ej_S94U.p3d";
		displayName = S-94 Utility;
		textureList[]={"CIVWhite",1};
		cargoProxyIndexes[] = {1,2,3,4};
		castCargoShadow=1;
		transportSoldier=4;
	};
};
