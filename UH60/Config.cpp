#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_UH60M
	{
		units[] = {"ej_MH60A","ej_MH60AL","ej_UH60M_BR","ej_UH60M_NATO","ej_UH60M_MEV_NOESSS","ej_MH60L","ej_UH60M_UT","ej_UH60M","ej_MH60S","ej_MH60SI","ej_MH60M","ej_UH60M_U","ej_UH60M_MEV","ej_MH60MS"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 2.20;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","CBA_Main"};
		authorUrl = "https://discord.gg/HbPTn278f6";
	};
};

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
		class Components;
	};
	class ej_UH60M_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 2000kg";
		destrType = "DestructWreck";		
		picture="\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon="\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		vehicleClass="Air";
		memoryPointTaskMarker="TaskMarker_1_pos";
		editorSubcategory="EdSubcat_Helicopters";
		mapSize = 15;
		cargoCanEject = 1;
		driverCanEject = 0;
		helmetMountedDisplay = 0;
		maxFordingDepth = 1.5;
		mainBladeRadius = 7.5;
		tailBladeRadius=2;
		altFullForce = 4000;
		altNoForce = 6000;
		bodyFrictionCoef = 0.7;
		irtargetsize=1.2;
		RadarTargetSize=1.2;
		supplyRadius = 2.5;
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		enableManualFire = 0;
		class Library{libTextDesc = "UH-60";};
		fuelCapacity = 1360;
		fuelConsumptionRate=0.126;
		maxSpeed = 282;
		simulation = "helicopterX";
		armor = 60;
		numberPhysicalWheels=3;
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		weapons[]={"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		availableForSupportTypes[]={"Drop","Transport"};
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Missile;
		slingLoadMaxCargoMass=4082;
		slingLoadMemoryPoint="slingLoad0";
		cargoDoors[]={"LDoor","LDoor","LDoor","LDoor","RDoor","RDoor","RDoor","RDoor"};
		unitInfoTypeRTD="RscUnitInfoAirRTDBasic";
		driveOnComponent[] = {"Wheels"};
		class RotorLibHelicopterProperties
		{
			RTDconfig="uh-60_c\UH60\uh-60.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1700;
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
		threat[]={0.80000001,0.1,0.60000002};
		visualTargetSize=0.96;
		selectionFireAnim = "muzzleFlash";
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		driverCanSee=31;
		washDownStrength="1.2f";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_mantisrear",
			"passenger_mantisrear",
			"passenger_generic01_foldhands"
		};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hideWeaponsCargo = 1;
		cargoIsCoDriver[]={false, false, false, false, false, false};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12};
		castCargoShadow=1;
		transportSoldier=12;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		damageResistance=0.0055499999;
   		memoryPointCM[]={"Flare_launcher1","Flare_launcher2"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir"};
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
		};
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
		class MarkerLights 
		{
			class WhiteStill 
			{
				name = "bily pozicni";
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
				name = "cerveny pozicni";
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
				name = "zeleny pozicni";
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
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class AddHellfire {source = user; animPeriod = 0.000001; initPhase = 0;};
			class Gun_HRot{source="user";animPeriod=1e-006;initPhase=0;};
			class Gun_VRot{source="user";animPeriod=1e-006;initPhase=0;};
			class HideWeapon{source = "user";animPeriod = 0.00001;initPhase = 0;};
			class Gatling{source = "revolving";weapon = "M197_MH60";};
			class Gatling_1{source="revolving";weapon=M134_uh60;};
			class Gatling_2{source="revolving";weapon=M134_uh60_2;};
			class Cannon{source = "ammorandom";weapon = "M230";};
			class Missiles_revolving{source = "revolving";weapon = "missiles_DAGR";};
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			class ReloadAnim_2{source="reload";weapon="M240_veh_2";};
			class ReloadMagazine_2{source="reloadmagazine";weapon="M240_veh_2";};
			class Revolving_2{source="revolving";weapon="M240_veh_2";};
			class HidePilotMFD{source="user";animPeriod=0;initPhase=0;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Probe_Show{source="user";animPeriod=0;initPhase=0;};
			class Tanks_Show{source="user";animPeriod=0;initPhase=0;};
			class Fuelprobe_Extend{source="user";animPeriod=0;initPhase=0;};
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
		#include "sounds.hpp"
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\default_co.paa"};	
		class Damage
		{
			tex[]={};
			mat[]={
				"uh-60\data\mat\uh60m_dust_filter.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\uh60m_engine.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",

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
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				minElev=-90; maxElev=2; initElev=0;
				minTurn=-160; maxTurn=7; initTurn=0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
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
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev=-90; maxElev=2; initElev=0;
				minTurn=-7; maxTurn=160; initTurn=0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex=1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				selectionFireAnim = "m134flash";
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics = "";		
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
		};
		class textureSources
		{
			class NATO
			{
				displayName="NATO";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_nato_co.paa","\uh-60\data\uh60m_engine_nato_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class ADF
			{
				displayName="ADF";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_adf.paa","\uh-60\data\uh60m_engine_adf.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class RDA
			{
				displayName="RDA SEC-FOR";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_rda_co.paa","\uh-60\data\uh60m_engine_rda_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class Desert
			{
				displayName="Desert";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_desert_co.paa","\uh-60\data\uh60m_engine_desert_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class Black
			{
				displayName="Black";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_black_co.paa","\uh-60\data\uh60m_engine_black_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class BlackRiver
			{
				displayName="Black River PMC";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_blackriver_co.paa","\uh-60\data\uh60m_engine_blackriver_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BRPMC"};
			};
			class USArmy
			{
				displayName="US Army";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class USArmyMEV
			{
				displayName="US ArmyMEV";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_mev_co.paa", "\uh-60\data\uh60m_engine_mev_co.paa", "\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
			class USN
			{
				displayName="USN";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_Navy_co.paa","\uh-60\data\uh60m_engine_Navy_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"TF160","BLU_F"};
			};
			class SOAR
			{
				displayName="SOAR";
				author="EricJ";
				textures[]={"\uh-60\data\uh60m_fuselage_dap_co.paa","\uh-60\data\uh60m_engine_DAP_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"TF160","BLU_F"};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_UH60M: ej_UH60M_base
	{
		dlc=EricJ_UH60;
		scope=2;
		side=1;
		faction="USA";
		author="EricJ";
		_generalMacro="UH60M";
		displayName = UH-60M;
		crew="B_HelipilotUSA_F";
		model = "\UH-60\UH60\ej_UH60M.p3d";
		typicalCargo[]={"B_HelipilotUSA_F"};
		textureList[]={"USArmy",1};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class MFD{};
	};
	class ej_UH60M_NATO: ej_UH60M
	{
		dlc=EricJ_UH60;
		scope=2;
		side=1;
		faction="BLU_F";
		typicalCargo[]={"B_Helipilot_F"};
		typicalCargo[]={"B_Helipilot_F"};
		author="EricJ";
		_generalMacro="UH60M";
		displayName = UH-60M (NATO);
		textureList[]={"NATO",1};
		ForceInGarage=1;
	};
	class ej_UH60M_U: ej_UH60M_base
	{
		author="EricJ";
		_generalMacro="UH60M_U";
		scope=2;
		accuracy=1;
		side=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		faction="USA";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = UH-60M (Unarmed);
		model = "\UH-60\UH60\ej_UH60M_U.p3d";
		textureList[]={"USArmy",1};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class MFD{};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
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
				memoryPointGunnerOptics = "";		
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
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
	class ej_UH60M_UT: ej_UH60M_U
	{
		dlc=EricJ_UH60;
		author="EricJ";
		_generalMacro="UH60M_U";
		scope=2;
		accuracy=1;
		side=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		faction="USA";
		fuelCapacity = 950;
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = UH-60M (Unarmed/ESSS);
		model = "\UH-60\UH60\ej_UH60M_UT.p3d";
		textureList[]={"USArmy",1};
		slingLoadMaxCargoMass=3600;
		class UserActions
		{
			class Tanks_Show
			{
				displayName= "Hide Fuel Tanks";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""tank_hide"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""tank_hide"",1];";
				priority=4;
			}; 	

			class Tanks_ShowOff: Tanks_Show
			{
				displayName= "Show Fuel Tanks";
				condition="this animationPhase ""tank_hide"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""tank_hide"",0];";
			};
		};
	};
	class ej_UH60M_MEV: ej_UH60M_base
	{
		dlc=EricJ_UH60;
		author="EricJ";
		_generalMacro="UH60M_MEV";
		scope=2;
		accuracy=1;
		side=1;
		faction="USA";
		transportSoldier = 4;
		attendant = 1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		crew="B_Helipilotusa_F";
		typicalCargo[]={"B_Helipilotusa_F"};
		fuelCapacity = 950;
		displayName = UH-60M (Medevac);
		model = "\UH-60\UH60\ej_UH60M_MEV.p3d";
		textureList[]={"USArmyMEV",1};
		slingLoadMaxCargoMass=3600;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class MFD{};
		class CargoTurret;
        	
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
		class UserActions
		{
			class Tanks_Show
			{
				displayName= "Hide Fuel Tanks";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""tank_hide"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""tank_hide"",1];";
				priority=4;
			}; 	

			class Tanks_ShowOff: Tanks_Show
			{
				displayName= "Show Fuel Tanks";
				condition="this animationPhase ""tank_hide"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""tank_hide"",0];";
			};
		};
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
				memoryPointGunnerOptics = "";		
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
		};
	};
	class ej_UH60M_MEV_NOESSS: ej_UH60M_base
	{
		dlc=EricJ_UH60;
		author="EricJ";
		_generalMacro="UH60M_MEV";
		scope=2;
		accuracy=1;
		side=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		faction="USA";
		transportSoldier = 4;
		attendant = 1;
		crew="B_Helipilotusa_F";
		typicalCargo[]={"B_Helipilotusa_F"};
		displayName = UH-60M (Medevac/No ESSS);
		model = "\UH-60\UH60\ej_UH60M_MEV_NOESSS.p3d";
		textureList[]={"USArmyMEV",1};
		slingLoadMaxCargoMass=3700;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class MFD{};
		class CargoTurret;
        	
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
				memoryPointGunnerOptics = "";		
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
		};
	};

//Knighthawks

	class ej_MH60S: ej_UH60M_base
	{
		dlc=EricJ_UH60;
		author="EricJ";
		_generalMacro="MH60S";
		scope=2;
		accuracy=1;
		side=1;
		faction="USN";
		accuracy = 1.5;
		transportSoldier = 12;
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		displayName = MH-60S (Transport);
		model = "\UH-60\MH60\ej_MH60S.p3d";
		weapons[]={"ej_master_arms_safe"};
		textureList[]={"USN",1};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
	};
	class ej_MH60SI: ej_MH60S
	{
		dlc=EricJ_UH60;
		author="EricJ";
		_generalMacro="ej_MH60SI";
		scope=2;
		accuracy=1;
		side=1;
		faction="USN";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = MH-60S (Insertion);
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		model = "\UH-60\MH60\ej_MH60SI.p3d";
		attenuationEffectType="OpenCarAttenuation";
	cargoAction[]={"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		class CargoTurret;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev=-90; maxElev=2; initElev=0;
				minTurn=-160; maxTurn=7; initTurn=0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
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
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
			};
			class MainTurret: MainTurret 
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";			
				minElev=-90; maxElev=2; initElev=0;
				minTurn=-7; maxTurn=160; initTurn=0;		
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex=1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				selectionFireAnim = "m134flash";
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";		
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;				
				copilotHasFlares = 1;
				LockDetectionSystem = 1 + 2 + 4 + 8;
				incomingMissileDetectionSystem = 16;
				TurretCanSee = 1+2+4+8+16;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
                };
        };

//SOAR Birds

	class ej_MH60A: ej_UH60M_base
	{
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60A.p3d";
		displayName = "MH-60A (Insertion-1987)";
		crew = "160th_SOAR_Pilot";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		hideWeaponsCargo = 1;
		ace_fastroping_enabled = 1;
		cargoProxyIndexes[] = {1,2,3,4};
		castCargoShadow=1;
		transportSoldier=4;
		weapons[]={"CMFlareLauncher"};
		magazines[]={"60Rnd_CMFlareMagazine"};
		memoryPointCM[]={"Flare_launcher1"};
		memoryPointCMDir[]={"Flare_launcher1_dir"};
		textureList[]={"USN",1};
		laserScanner=1;
		fuelCapacity = 1800;
		fuelConsumptionRate=0.126;
		Cost=200000;
		slingLoadMaxCargoMass=4082;
		class MFD{};
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
			class MFD1
			{
				renderTarget = "rendertarget1";
				class View02
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev=-60;
				maxElev=2;
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
				weapons[]={"M134E_uh60_2"};
				magazines[]={"2000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
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
				minElev=-60; 
				maxElev=2; 
				initElev=-45;				
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
				weapons[]={"M134E_uh60"};
				magazines[]={"2000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 1;
				selectionFireAnim = "m134flash";
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
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
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[]={"CMFlareLauncher"};
				magazines[]={"60Rnd_CMFlareMagazine"};									
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
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side dir 2";
				gunnerName="Right Side FFV Position";
				proxyIndex=3;
class TurnOut
				{
					limitsArrayTop[]=
					{
						{4.2147999,-41.222198},
						{15.2573,-37.7332},
						{25.244499,-33.571602},
						{28.359501,-4.6949},
						{21.892,7.1290002},
						{13.5426,15.8007},
						{-4.1974001,23.5159}
					};
					limitsArrayBottom[]=
					{
						{-12.4846,-33.923},
						{-6.7800002,-26.0082},
						{-1.3741,-5.0386},
						{-5.0306001,13.1077},
						{-3.7142,23.5767}
					};
				};
				class TurnIn: TurnOut
				{
				};
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
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side";
				memoryPointsGetInGunnerDir="pos side dir";
				gunnerName="Left Side FFV Position";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-9.5507002,-1.5932},
						{7.2315998,6.1824002},
						{21.2761,24.8757},
						{18.4188,51.977901},
						{-1.294,61.902401}
					};
					limitsArrayBottom[]=
					{
						{-10.5189,-1.5408},
						{-11.8771,7.4937},
						{-9.0822001,24.590599},
						{-13.2861,45.595699},
						{-23.2533,55.884998}
					};
				};
				class TurnIn: TurnOut
				{
				};				
				isPersonTurret=1;
				ejectDeadGunner=0;
				usepip=0;
				proxyIndex=4;
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
	class ej_MH60AL: ej_UH60M_base
	{
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60AL.p3d";
		displayName = "MH-60A (Insertion)";
		crew = "160th_SOAR_Pilot";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		hideWeaponsCargo = 1;
		ace_fastroping_enabled = 1;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12};
		castCargoShadow=1;
		transportSoldier=12;
		weapons[]={"CMFlareLauncher"};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		magazines[]={"60Rnd_CMFlareMagazine"};
		memoryPointCM[]={"Flare_launcher1"};
		memoryPointCMDir[]={"Flare_launcher1_dir"};
		textureList[]={"SOAR",1};
		laserScanner=1;
		Cost=200000;
		slingLoadMaxCargoMass=4082;
		class MFD{};
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
			class MFD1
			{
				renderTarget = "rendertarget1";
				class View02
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev=-60;
				maxElev=2;
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
				weapons[]={"M134E_uh60_2"};
				magazines[]={"2000Rnd_762x51_Belt_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
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
				minElev=-60; 
				maxElev=2; 
				initElev=-45;				
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
				weapons[]={"M134E_uh60"};
				magazines[]={"2000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 1;
				selectionFireAnim = "m134flash";
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
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
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[]={"CMFlareLauncher"};
				magazines[]={"60Rnd_CMFlareMagazine"};									
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
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side";
				memoryPointsGetInGunnerDir="pos side dir";
				gunnerName="Left Side FFV Position";
				proxyIndex=10;
				maxElev=15;
				minElev=-80;
				maxTurn=65;
				minTurn=-15;
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
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 4";
				memoryPointsGetInGunnerDir="pos side dir 4";
				gunnerName="Left Side FFV Position 2";
				proxyIndex=9;
				maxElev=15;
				minElev=-80;
				maxTurn=30;
				minTurn=-65;
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
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side dir 2";
				gunnerName="Right Side FFV Position";
				proxyIndex=11;
				maxElev=15;
				minElev=-80;
				maxTurn=30;
				minTurn=-65;
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
			class CargoTurret_04: CargoTurret
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
				minTurn=-15;
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
	class ej_MH60M: ej_UH60M_base
	{
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60M.p3d";
		displayName = "MH-60M (Insertion)";
		crew = "160th_SOAR_Pilot";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		hideWeaponsCargo = 1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
        	USAF_RefuelType = "probe";
        	USAF_RefuelPoint[] = {-1.146, -1.159, -9.243};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		weapons[]={"EricJ_CMFlareLauncherDAP","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2","Flare_launcher3"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir"};
		textureList[]={"SOAR",1};
		laserScanner=1;
		cost=200000;
		slingLoadMaxCargoMass=4082;
		cargoAction[]={"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
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
			class MFD1
			{
				renderTarget = "rendertarget1";
				class View02
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class UserActions
		{
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",0];";
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
			class Fuelprobe_Extend
			{
				displayName= "Extend Probe";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""FuelProbe_Extend"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",1];";
				priority=4;
			}; 	

			class Fuelprobe_Retract: Fuelprobe_Extend
			{
				displayName= "Retract Probe";
				condition="this animationPhase ""FuelProbe_Extend"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",0];";
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
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=14;
				magazine="30Rnd_65x39_caseless_mag";
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
			class _xx_ej_PVS15
			{
				count=2;
				name="ej_PVS15";
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
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev=-60;
				maxElev=2;
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
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
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
				minElev=-60; 
				maxElev=2; 
				initElev=-45;				
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
				weapons[]={"M134_uh60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 1;
				selectionFireAnim = "m134flash";
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
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
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,kuy_IR_Jammer_Weapon};
				magazines[] = {Laserbatteries,kuy_IR_Jammer_Magazine};									
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
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side";
				memoryPointsGetInGunnerDir="pos side dir";
				gunnerName="Left Side FFV Position";
				proxyIndex=10;
				maxElev=15;
				minElev=-80;
				maxTurn=65;
				minTurn=-15;
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
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos side 4";
				memoryPointsGetInGunnerDir="pos side dir 4";
				gunnerName="Left Side FFV Position 2";
				proxyIndex=9;
				maxElev=15;
				minElev=-80;
				maxTurn=30;
				minTurn=-65;
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
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side dir 2";
				gunnerName="Right Side FFV Position";
				proxyIndex=11;
				maxElev=15;
				minElev=-80;
				maxTurn=30;
				minTurn=-65;
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
			class CargoTurret_04: CargoTurret
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
				minTurn=-15;
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
	class ej_MH60MS: ej_MH60M
	{
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60MS.p3d";
		displayName = "MH-60M (Sniper)";
		crew = "160th_SOAR_Pilot";
		textureList[]={"SOAR",1};
		laserScanner=1;
		transportSoldier=2;
		cost=250000;
		slingLoadMaxCargoMass=4082;
		cargoAction[]={"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
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
			class MFD1
			{
				renderTarget = "rendertarget1";
				class View02
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class UserActions
		{
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",0];";
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
			class Fuelprobe_Extend
			{
				displayName= "Extend Probe";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""FuelProbe_Extend"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",1];";
				priority=4;
			}; 	

			class Fuelprobe_Retract: Fuelprobe_Extend
			{
				displayName= "Retract Probe";
				condition="this animationPhase ""FuelProbe_Extend"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",0];";
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
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=14;
				magazine="30Rnd_65x39_caseless_mag";
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
			class _xx_ej_PVS15
			{
				count=2;
				name="ej_PVS15";
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
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev=-60;
				maxElev=2;
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
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
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
				minElev=-60; 
				maxElev=2; 
				initElev=-45;				
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
				weapons[]={"M134_uh60"};
				magazines[]={"3000Rnd_762x51_Belt_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 1;
				selectionFireAnim = "m134flash";
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGun = "gun_end";		
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
				primaryGunner = 0;										
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};				
				gunnerForceOptics = false;
				gunnerOpticsShowCursor = 1;
				turretInfoType="Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,kuy_IR_Jammer_Weapon};
				magazines[] = {Laserbatteries,kuy_IR_Jammer_Magazine};									
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
	class ej_MH60L: ej_MH60M
	{
		dlc=EricJ_UH60;
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60L.p3d";
		displayName = "MH-60L (Insertion)";
		class MFD{};
		class UserActions
		{
			class PilotMFDOn
			{
				displayName= "FLIR Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",1];";
				priority=4;
			}; 	

			class PilotMFDOff: PilotMFDOn
			{
				displayName= "FLIR Page Off";
				condition="this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip5"",0];";
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
			class Fuelprobe_Extend
			{
				displayName= "Extend Probe";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""FuelProbe_Extend"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",1];";
				priority=4;
			}; 	

			class Fuelprobe_Retract: Fuelprobe_Extend
			{
				displayName= "Retract Probe";
				condition="this animationPhase ""FuelProbe_Extend"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""FuelProbe_Extend"",0];";
			};
		};
	};

};