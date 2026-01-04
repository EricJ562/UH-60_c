#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_MH60MDAP
	{
		units[] = {"ej_MH60MDAP4DP","ej_MH60MDAP2","ej_MH60SI2","ej_HH60H"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
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
	class ej_MH60MDAP_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 2000kg";
		destrType = "DestructWreck";		
		picture="\uh-60\data\ui\MH_60_icon.paa";
		icon="\uh-60\Data\UI\Map_UH_60_ca.paa";
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
		fuelCapacity = 1800;
		fuelConsumptionRate=0.126;
		maxSpeed = 300;
		simulation = "helicopterX";
		armor = 60;
		washDownStrength="1.2f";
		numberPhysicalWheels=3;
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		weapons[]={"Flanker562_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		availableForSupportTypes[]={"Drop","Transport"};
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Missile;
		slingLoadMaxCargoMass=500;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		cost=3000000;
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
		driverCanSee=31;
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
		cargoProxyIndexes[] = {};
		castCargoShadow=1;
		transportSoldier=0;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
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
			class Probe_Show{source="user";animPeriod=0;initPhase=0;};
			class Doors_Show{source="user";animPeriod=0;initPhase=0;};
			class Fuelprobe_Extend{source="user";animPeriod=0;initPhase=0;};
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
				weapons[] = {"Flanker562_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};									
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot"; 
			};
		};
		class textureSources
		{
			class SOAR
			{
				displayName="SOAR";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_dap_co.paa","\uh-60\data\uh60m_engine_DAP_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"TF160","BLU_F"};
			};
			class USN
			{
				displayName="USN";
				author="Flanker562";
				textures[]={"\uh-60\data\uh60m_fuselage_Navy_co.paa","\uh-60\data\uh60m_engine_Navy_co.paa","\uh-60\data\default_co.paa"};
				factions[]={"BLU_F"};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_MH60MDAP2: ej_MH60MDAP_base
	{
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		availableForSupportTypes[]={"CAS_Heli"};
		displayName = MH-60M DAP 2-Pylon;
		editorPreview="\uh-60\data\Previews\MH60DAP2.jpg";
		model = "\UH-60\MH60\ej_MH60MDAP2.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire=1;
		hideWeaponsCargo = 1;
        	USAF_RefuelType = "probe";
        	USAF_RefuelPoint[] = {-1.146, -1.159, -9.243};
		selectionFireAnim="muzzleFlash_1";
		transportSoldier = 0;
		cost=200000;
		ace_fastroping_enabled = 0;
		textureList[]={"SOAR",1};
		weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,ej_M134_minigun};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,5000Rnd_762x51_Belt_Red};
		memoryPointGun[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showAsCargo = 1;
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 1;										selectionFireAnim="muzzleFlash_1";
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
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,kuy_IR_Jammer_Weapon,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,kuy_IR_Jammer_Magazine,"168Rnd_CMFlare_Chaff_Magazine"};									
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
				gunnerName="Left Side Crew Position";
				proxyIndex=2;
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
				gunnerName="Right Side Crew Position";
				proxyIndex=1;
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M230_uh60_r",
							"B_MH60_Rocket"
						};
						turret[]={0};
						maxweight=400;
						UIposition[]={0.059999999,0.15000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=4;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M230_uh60",
							"B_MH60_Rocket"
						};
						maxweight=400;
						UIposition[]={0.499999998,0.15000001};
					};
				};
			};
		};
	};
        class ej_MH60MDAP4DP: ej_MH60MDAP_base
	{
		dlc=Flanker562_UH60;
		scope=2;
		accuracy=1;
		side=1;
		faction="TF160";
		vehicleClass = "Air";
		editorPreview="\uh-60\data\Previews\MH60DAP4.jpg";
		availableForSupportTypes[]={"CAS_Heli"};
		displayName = MH-60M DAP 4-Pylon;
		model = "\UH-60\MH60\ej_MH60MDAP4DP.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire=1;
		selectionFireAnim="muzzleFlash_1";
		transportSoldier = 0;
		cost=200000;
		ace_fastroping_enabled = 0;
        	USAF_RefuelType = "probe";
        	USAF_RefuelPoint[] = {-1.146, -1.159, -9.243};
		textureList[]={"SOAR",1};
		weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,ej_M134_minigun};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,5000Rnd_762x51_Belt_Red};
		memoryPointGun[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				
				showHMD = 1;
				CanEject = 0;
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
				copilotHasFlares = 1;
				weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,Laserdesignator_mounted};
				magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,Laserbatteries,5000Rnd_762x51_Belt};									
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
				gunnerName="Left Side Crew Position";
				proxyIndex=2;
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
				gunnerName="Right Side Crew Position";
				proxyIndex=1;
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"B_MH60_Rocket",
						};
						turret[]={0};
						maxweight=400;
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=4;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M230_uh60_r",
							"B_MH60_Rocket",
						};
						maxweight=400;
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonRight2: PylonLeft2
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=3;
						hardpoints[]=
						{
							"B_AH6_Rocket",
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M230_uh60",
							"B_MH60_Rocket",
						};
						maxweight=400;
						UIposition[]={0.56999999,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=2;
						hardpoints[]=
						{
							"B_AH6_Rocket",
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"B_MH60_Rocket",
						};
						maxweight=400;
						UIposition[]={0.58999997,0.40000001};
					};
				};
			};
		};
	};
	class ej_HH60H: ej_MH60MDAP_base
	{
		author="Flanker562";
		scope=2;
		accuracy=1;
		side=1;
		picture="\uh-60\data\ui\HH_60_icon.paa";
		icon="\uh-60\Data\UI\Map_UH_60_ca.paa";
		faction="USN";
		crew="B_Helipilot_F";
		editorPreview="\uh-60\data\Previews\HH60H.jpg";
		typicalCargo[]={"B_Helipilot_F"};
		displayName = HH-60H (Insertion);
		ace_fastroping_enabled = 1;
		textureList[]={"USN",1};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8};
		transportSoldier=8;
		fuelCapacity = 1564;
		slingLoadMaxCargoMass=2722;
		ace_fastroping_ropeOrigins[] = {"ropeOriginRight"};
		model = "\UH-60\hh\ej_HH60H.p3d";
		attenuationEffectType="OpenCarAttenuation";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
	cargoAction[]={"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		class Components: Components

		{
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="";
						priority=5;
						hardpoints[]=
						{
							"B_HH60_Hellfire",
							"DAGR",
						};
						turret[]={0};
						maxweight=400;
						UIposition[]={0.059999999,0.40000001};
					};
		              };
	              };
		};
		class CargoTurret;
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
				minElev = -2;
				maxElev = +25;
				initElev = 0;
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showAsCargo = 1;
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 1;										selectionFireAnim="muzzleFlash_1";
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
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,kuy_IR_Jammer_Weapon,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,kuy_IR_Jammer_Magazine,"168Rnd_CMFlare_Chaff_Magazine"};									
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
	class ej_MH60SI2: ej_MH60MDAP_base
	{
		dlc=Flanker562_UH60;
		scope=2;
		accuracy=1;
		side=1;
		faction="USN";
		vehicleClass = "Air";
		availableForSupportTypes[]={"CAS_Heli"};
		displayName = MH-60S 2-Pylon;
		editorPreview="\uh-60\data\Previews\MH60S2PYLON.jpg";
		model = "\UH-60\MH60\ej_MH60SI2.p3d";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F"};
		enableManualFire=1;
		hideWeaponsCargo = 1;
		fuelCapacity = 1360;
		cost=200000;
		fuelConsumptionRate=0.126;
		selectionFireAnim="muzzleFlash_1";
		transportSoldier = 0;
		textureList[]={"USN",1};
		weapons[]={"Flanker562_CMFlareLauncher","kuy_IR_Jammer_Weapon","ej_M240_mg"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
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
		};
		weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,ej_M134_minigun};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,5000Rnd_762x51_Belt};
		memoryPointGun[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
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
				minTurn = -360;  
				maxTurn = 360; 
				initTurn = 0;
				gunBeg = "gun_end"; 
				gunEnd = "gun_begin"; 						
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showAsCargo = 1;
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {,db-40,1.0};				
				outGunnerMayFire = 1; 
				gunnerCompartments="Compartment3";
				commanding=-3;	
				primaryGunner = 1;										selectionFireAnim="muzzleFlash_1";
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
				weapons[] = {ej_master_arms_safe,Laserdesignator_mounted,kuy_IR_Jammer_Weapon,"Flanker562_CMFlareLauncherDAP"};
				magazines[] = {Laserbatteries,kuy_IR_Jammer_Magazine,"168Rnd_CMFlare_Chaff_Magazine"};									
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M197_MH60S_r"
						};
						turret[]={0};
						maxweight=400;
						UIposition[]={0.059999999,0.15000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=4;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_UH60_Hellfire",
							"M197_MH60S"
						};
						maxweight=400;
						UIposition[]={0.499999998,0.15000001};
					};
				};
			};
		};
	};

};