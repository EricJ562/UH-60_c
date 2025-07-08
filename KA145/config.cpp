#include "basicdefines_A3.hpp"

class CfgPatches
{
	class ka145_F
	{
		units[] = 
		{
			"ej_ka145"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
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
class WeaponCloudsMGun;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class AirplaneHUD;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};

	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
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

	class ka145_base: Helicopter_Base_H
	{
		scope=0;
		editorSubcategory="EdSubcat_Helicopters";
		vehicleClass="Air";
		altFullForce = 4000;
		altNoForce = 6000;
		maxSpeed = 240;
		memoryPointTaskMarker="TaskMarker_1_pos";
		maxFordingDepth = 0.55;
		mainBladeRadius = 1.5;
		tailBladeRadius=1.5;
		liftForceCoef = 1.1;	
		bodyFrictionCoef = 0.7;	
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;	
		accuracy = 0.5;
		Armor=50;
		washDownStrength="1.2f";
		class RotorLibHelicopterProperties
		{
			RTDconfig="uh-60_c\KA145\KA145.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=2000;
			stressDamagePerSec=0.0023333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=200000;
			maxTailRotorStress=25000;
			rtd_center="rtd_center";
		};
		displayName = "Ka-145 Hoplite";
		model = "\uh-60\ka145\ej_ka145.p3d";
		driveOnComponent[] = {"Wheels"};
		irtargetsize=1.2;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		RadarTargetSize=1.4;
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		numberPhysicalWheels=3;
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		gearRetracting=1;
		gearUpTime=3;
		gearDownTime=3;
		cost=3000000;
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir"};
		driverAction="pilot_Heli_Transport_01";
		precisegetinout = 1;
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Katiba_C_F
			{
				weapon="arifle_Katiba_C_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
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
		
		maximumLoad = 2000;
		cargoCanEject = 1;
		driverCanEject = 0;

		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};

		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Missile;
		selectionFireAnim = "muzzleFlash";
		memoryPointGun="machinegun_end";
		weapons[] = {"gatling_2A42","CMFlareLauncher"};
		magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","192Rnd_CMFlare_Chaff_Magazine"};

		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON"
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_19Rnd_Rocket_Skyfire";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.56999999,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.58999997,0.40000001};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
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

		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot=1;
				minElev = -30;
				maxElev = +45;
				initElev = 0;
				minTurn = -190;  
				maxTurn = 190; 
				initTurn = 0;
				class Components
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
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=10;
						minAngleX=-45;
						maxAngleX=25;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						initAngleX=0;
						initAngleY=0;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				body = "ObsTurret";
				gun = "ObsGun";
				primaryGunner=1;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_Dir";
				gunBeg="Laser_end";
				gunEnd="Laser_begin";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="muzzleflash";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				gunnerGetOutAction="GetOutLow";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_02_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				showHMD=0;
				showAllTargets=4;
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				canEject=0;
				copilotHasFlares = 1;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.5;
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun";
						passThrough=0.30000001;
						radius=0.34999999;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun";
						passThrough=0.30000001;
						radius=0.34999999;
					};
				};
			};
		};

		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"uh-60\data\Mat\ka145\ka52_01.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\Mat\ka145\ka52_02.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\Mat\ka145\ka52_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones{};
				class Draw{};
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={0,0,0};
				helmetRight[]={0,0,0};
				helmetDown[]={0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,"0.9 - 0.04 + 0.012"};
						pos10[]={"0.5 + 0.0111","0.9 - 0.04 + 0.012 + 0.0133"};
					};
					class Target
					{
						source="target";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.85000002,0.85000002};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.64999998,0.64999998};
					};
					class Velocity_slip
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.84500003};
						pos10[]={0.52999997,0.84500003};
					};
					class VspeedBone
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-10;
						max=10;
						minPos[]={0.93000001,0.2};
						maxPos[]={0.93000001,0.80000001};
					};
					class RadarAltitudeBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=60;
						minPos[]={0.96499997,0.2};
						maxPos[]={0.96499997,0.80000001};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.5};
						pos10[]={0.77999997,0.77999997};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.15000001,0.15000001};
						clipBR[]={0.85000002,0.85000002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{"Level0",{-0.41999999,0},1},
									{"Level0",{-0.38,0},1},{},
									{"Level0",{-0.37,0},1},
									{"Level0",{-0.33000001,0},1},{},
									{"Level0",{-0.31999999,0},1},
									{"Level0",{-0.28,0},1},{},
									{"Level0",{-0.27000001,0},1},
									{"Level0",{-0.23,0},1},{},
									{"Level0",{-0.22,0},1},
									{"Level0",{-0.18000001,0},1},{},
									{"Level0",{-0.17,0},1},								
									{"Level0",{-0.13,0},1},{},
									{"Level0",{0.12,0},1},
									{"Level0",{-0.079999998,0},1},{},
									{"Level0",{0.41999999,0},1},
									{"Level0",{0.38,0},1},{},
									{"Level0",{0.37,0},1},
									{"Level0",{0.33000001,0},1},{},
									{"Level0",{0.31999999,0},1},
									{"Level0",{0.28,0},1},{},
									{"Level0",{0.27000001,0},1},
									{"Level0",{0.23,0},1},{},
									{"Level0",{0.22,0},1},
									{"Level0",{0.18000001,0},1},{},
									{"Level0",{0.17,0},1},								
									{"Level0",{0.13,0},1},{},
									{"Level0",{0.12,0},1},
									{"Level0",{0.079999998,0},1}
								};
							};
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=3;
						points[]=
						{
							
							{"HorizonBankRot",{0,0.25},1},
							{"HorizonBankRot",{-0.0099999998,0.23},1},
							{"HorizonBankRot",{0.0099999998,0.23},1},
							{"HorizonBankRot",{0,0.25},1}
						};
					};
					class Static_HAD_BOX
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=5;
						points[]=
						{
							
							{{"0.5-0.1","0.9-0.04"},1},
							{{"0.5-0.1","0.9+0.04"},1},
							{{"0.5+0.1","0.9+0.04"},1},
							{{"0.5+0.1","0.9-0.04"},1},
							{{"0.5-0.1","0.9-0.04"},1},{},
							{{"0.5-0.1","0.9-0.04+0.012"},1},
							{{"0.5-0.092","0.9-0.04+0.012"},1},{},
							{{"0.5+0.1","0.9-0.04+0.012"},1},
							{{"0.5+0.092","0.9-0.04+0.012"},1},{},
							{{0.5,"0.9-0.04"},1},
							{{0.5,"0.9-0.032"},1},{},
							{{0.5,"0.9+0.04"},1},						
							{{0.5,"0.9+0.032"},1},{}
						};
					};
					class Gunner_HAD
					{
						type="line";
						width=6;
						points[]=
						{
							{"GunnerAim",{-0.015,-0.0080000004},1},
							{"GunnerAim",{-0.015,0.0080000004},1},
							{"GunnerAim",{0.015,0.0080000004},1},
							{"GunnerAim",{0.015,-0.0080000004},1},
							{"GunnerAim",{-0.015,-0.0080000004},1}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type="line";
							width=4;
							points[]=
							{
								
								{{"0.5-0.018","0.9-0.04"},1},
								{{"0.5-0.018","0.9-0.075"},1},{},
								{{"0.5+0.018","0.9-0.04"},1},
								{{"0.5+0.018","0.9-0.075"},1}
							};
						};
						class Slip_ball
						{
							type="line";
							width=6;
							points[]=
							{
								
								{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},
								{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},
								{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},
								{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},
								{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},
								{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},
								{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},
								{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},				
								{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},
								{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},
								{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},
								{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},
								{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},
								{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},
								{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},
								{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},
								{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},
								{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},				
								{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},
								{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},
								{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},							
								{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},
								{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},
								{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},
								{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},
								{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},
								{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},
								{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},
								{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},
								{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},
								{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},
								{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},
								{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},
								{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},
								{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},
								{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},
								{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},
								{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},
								{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},
								{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},
								{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},
								{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},
								{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},
								{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},
								{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},
								{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},
								{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},
								{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},
								{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},
								{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},			
								{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},
								{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},
								{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},
								{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},
								{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}
							};
						};
					};
					class Centerline
					{
						type="line";
						width=5;
						points[]=
						{
							
							{{0.5,0.47999999},1},					
							{{0.5,0.44999999},1},{},
							{{0.5,0.51999998},1},
							{{0.5,0.55000001},1},{},
							{{0.47999999,0.5},1},
							{{0.44999999,0.5},1},{},
							{{0.51999998,0.5},1},					
							{{0.55000001,0.5},1},{}
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]={{0.61000001,0.86000001},1};
						right[]={{0.64999998,0.86000001},1};
						down[]={{0.61000001,0.89999998},1};
					};
					class Ammo_GUN
					{
						type="group";
						condition="mgun";
						class Ammo_count_GUN
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]={{0.61000001,0.88999999},1};
							right[]={{0.64999998,0.88999999},1};
							down[]={{0.61000001,0.93000001},1};
						};
					};
					class Ammo_RKT
					{
						type="group";
						condition="rocket";
						class Ammo_count_RKT
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]={{0.61000001,0.88999999},1};
							right[]={{0.64999998,0.88999999},1};
							down[]={{0.61000001,0.93000001},1};
						};
					};
					class Ammo_AGM
					{
						type="group";
						condition="AAmissile";
						class Ammo_count_AGM
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]={{0.61000001,0.88999999},1};
							right[]={{0.64999998,0.88999999},1};
							down[]={{0.61000001,0.93000001},1};
						};
					};
					class Ammo_AAM
					{
						type="group";
						condition="ATmissile";
						class Ammo_count_AAM
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]={{0.61000001,0.88999999},1};
							right[]={{0.64999998,0.88999999},1};
							down[]={{0.61000001,0.93000001},1};
						};
					};
					class Ammo_Bomb
					{
						type="group";
						condition="Bomb";
						class Ammo_count_Bomb
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]={{0.61000001,0.88999999},1};
							right[]={{0.64999998,0.88999999},1};
							down[]={{0.61000001,0.93000001},1};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]={{0.029999999,"0.53 + 0.055"},1};
							right[]={{0.07,"0.53 + 0.055"},1};
							down[]={{0.029999999,"0.53 + 0.095"},1};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="A-COL";
							align="right";
							scale=1;
							pos[]={{0.029999999,"0.53 + 0.105"},1};
							right[]={{0.07,"0.53 + 0.105"},1};
							down[]={{0.029999999,"0.53 + 0.145"},1};
						};
					};
					class ATMissileTOFGroup
					{
						condition="ATmissile";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]={{0.61000001,0.92000002},1};
							right[]={{0.64999998,0.92000002},1};
							down[]={{0.61000001,0.95999998},1};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]={{0.69,0.92000002},1};
							right[]={{0.73000002,0.92000002},1};
							down[]={{0.69,0.95999998},1};
						};
					};
					class LaserTOFGroup
					{
						condition="Bomb";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]={{0.61000001,0.92000002},1};
							right[]={{0.64999998,0.92000002},1};
							down[]={{0.61000001,0.95999998},1};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]={{0.69,0.92000002},1};
							right[]={{0.73000002,0.92000002},1};
							down[]={{0.69,0.95999998},1};
						};
					};
					class RocketTOFGroup
					{
						condition="Rocket";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]={{0.61000001,0.92000002},1};
							right[]={{0.64999998,0.92000002},1};
							down[]={{0.61000001,0.95999998},1};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]={{0.69,0.92000002},1};
							right[]={{0.73000002,0.92000002},1};
							down[]={{0.69,0.95999998},1};
						};
					};
					class RangeNumber
					{
						type="text";
						source="targetDist";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]={{0.38999999,0.88999999},1};
						right[]={{0.43000001,0.88999999},1};
						down[]={{0.38999999,0.93000001},1};
					};
					class RangeText
					{
						type="text";
						source="static";
						text="RNG";
						align="left";
						scale=1;
						pos[]={{0.38999999,0.86000001},1};
						right[]={{0.43000001,0.86000001},1};
						down[]={{0.38999999,0.89999998},1};
					};
					class SpeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]={{0.029999999,0.47499999},1};
						right[]={{0.079999998,0.47499999},1};
						down[]={{0.029999999,0.52499998},1};
					};
					class TorqueNumber
					{
						condition="simulRTD";
						class Torque_number
						{
							type="text";
							align="left";
							scale=1;
							source="rtdRotorTorque";
							sourceScale=290;
							pos[]={{0.064999998,0.175},1};
							right[]={{0.115,0.175},1};
							down[]={{0.064999998,0.22499999},1};
						};
						class Torquetext
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]={{0.07,0.175},1};
							right[]={{0.12,0.175},1};
							down[]={{0.07,0.22499999},1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align="right";
						source="altitudeAGL";
						sourceScale=1;
						pos[]={{0.82999998,0.47499999},1};
						right[]={{0.88,0.47499999},1};
						down[]={{0.82999998,0.52499998},1};
					};
					class ASLNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]={{0.83499998,0.18000001},1};
						right[]={{0.875,0.18000001},1};
						down[]={{0.83499998,0.22},1};
					};
					class VspeedScalePosta
					{
						type="line";
						width=5;
						points[]=
						{
							
							{{0.98000002,0.2},1},{{1,0.2},1},{},
							{{0.93000001,0.2},1},{{0.94999999,0.2},1},{},
							{{0.98000002,0.34999999},1},
							{{1,0.34999999},1},{},
							{{0.93000001,0.34999999},1},
							{{0.94999999,0.34999999},1},{},
							{{0.94,0.38},1},
							{{0.94999999,0.38},1},{},
							{{0.94,0.41},1},							
							{{0.94999999,0.41},1},{},
							{{0.94,0.44},1},
							{{0.94999999,0.44},1},{},
							{{0.94,0.47},1},
							{{0.94999999,0.47},1},{},
							{{0.98000002,0.5},1},
							{{1,0.5},1},{},
							{{0.93000001,0.5},1},
							{{0.94999999,0.5},1},{},
							{{0.94,0.52999997},1},
							{{0.94999999,0.52999997},1},{},
							{{0.94,0.56},1},
							{{0.94999999,0.56},1},{},
							{{0.94,0.58999997},1},
							{{0.94999999,0.58999997},1},{},
							{{0.94,0.62},1},
							{{0.94999999,0.62},1},{},
							{{0.98000002,0.64999998},1},
							{{1,0.64999998},1},{},
							{{0.93000001,0.64999998},1},
							{{0.94999999,0.64999998},1},{},
							{{0.99000001,0.68000001},1},					
							{{0.98000002,0.68000001},1},{},
							{{0.99000001,0.70999998},1},
							{{0.98000002,0.70999998},1},{},
							{{0.99000001,0.74000001},1},					
							{{0.98000002,0.74000001},1},{},
							{{0.99000001,0.76999998},1},
							{{0.98000002,0.76999998},1},{},
							{{0.98000002,0.80000001},1},
							{{1,0.80000001},1},{},
							{{0.93000001,0.80000001},1},
							{{0.94999999,0.80000001},1},{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.80000001};
						hideValue=201;
						class radarbanda
						{
							type="line";
							width=17;
							points[]=
							{
								
								{"RadarAltitudeBone",{0,0},1},
								{"RadarAltitudeBone",{0,0.60000002},1}
							};
						};
					};
					class VspeedBand
					{
						type="line";
						width=3;
						points[]=
						{
							
							{"VspeedBone",{-0.0099999998,0},1},
							{"VspeedBone",{-0.025,-0.015},1},
							{"VspeedBone",{-0.025,0.015},1},
							{"VspeedBone",{-0.0099999998,0},1},{}
						};
					};
					class HeadingNumber: SpeedNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						pos[]={{0.5,0.045000002},1};
						right[]={{0.56,0.045000002},1};
						down[]={{0.5,"0.045 + 0.06"},1};
					};
					class Center_box
					{
						type="line";
						width=1.5;
						points[]=
						{
							
							{{0.44999999,"0.02 + 0.085 - 0.06"},1},
							{{"0.45 + 0.10","0.02 + 0.085 - 0.06"},1},
							{{"0.45 + 0.10","0.02 + 0.085"},1},
							{{0.44999999,"0.02 + 0.085"},1},
							{{0.44999999,"0.02 + 0.085 - 0.06"},1}
						};
					};
					class HeadingArrow
					{
						type="line";
						width=7;
						points[]=
						{
							
							{{"0.5","0.128 + 0.03"},1},
							{{0.5,0.12800001},1}
						};
					};
					class HeadingScale_LEFT
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]={0.12,"0.0 + 0.065"};
							right[]={0.16,"0.0 + 0.065"};
							down[]={0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]={0.12,"0.0 + 0.065"};
							right[]={0.16,"0.0 + 0.065"};
							down[]={0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[]={0.44999999,"0.02 + 0.085"};
						clipBR[]={"0.45 + 0.10",1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]={0.12,"0.0 + 0.065"};
							right[]={0.16,"0.0 + 0.065"};
							down[]={0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type="text";
						source="static";
						text="Fuel";
						align="right";
						scale=1;
						pos[]={{0.029999999,0.89999998},1};
						right[]={{0.07,0.89999998},1};
						down[]={{0.029999999,0.94},1};
					};
					class Fuel_Number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]={{0.1,0.89999998},1};
						right[]={{0.14,0.89999998},1};
						down[]={{0.1,0.94},1};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.039999999,0.039999999,0.1};
				helmetRight[]={0.079999998,0,0};
				helmetDown[]={0,-0.079999998,0};
			};
			class Kimi_HUD_2
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class ForwardVec1
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25299999,0.25299999};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class WeaponAim1
					{
						type="vector";
						source="weapon";
						pos0[]={0,0};
						pos10[]={0.25299999,0.23};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class RadarContact
					{
						type="fixed";
						pos[]={0,0};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class LimitWaypoint
					{
						type = "limit";
						limits[] = {0.2, 0.1, 0.8, 0.1};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.734, 0.73};
					};
					class WPPointToView: WPPoint
					{
						source = "WPPointToView";
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class PlaneMovementCrosshair
					{
						type="line";
						width=7;
						points[]=
						{
							
							{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},
							{"ForwardVec1",1,"Velocity",1,{0.0099999998,-0.01732},1},
							{"ForwardVec1",1,"Velocity",1,{0.01732,-0.0099999998},1},
							{"ForwardVec1",1,"Velocity",1,{0.02,0},1},							
							{"ForwardVec1",1,"Velocity",1,{0.01732,0.0099999998},1},
							{"ForwardVec1",1,"Velocity",1,{0.0099999998,0.01732},1},
							{"ForwardVec1",1,"Velocity",1,{0,0.02},1},
							{"ForwardVec1",1,"Velocity",1,{-0.0099999998,0.01732},1},
							{"ForwardVec1",1,"Velocity",1,{-0.01732,0.0099999998},1},
							{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},
							{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.0099999998},1},
							{"ForwardVec1",1,"Velocity",1,{-0.0099999998,-0.01732},1},
							{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},
							{"ForwardVec1",1,"Velocity",1,{0.039999999,0},1},
							{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},
							{"ForwardVec1",1,"Velocity",1,{-0.039999999,0},1},
							{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},
							{"ForwardVec1",1,"Velocity",1,{0,-0.039999999},1},
							{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}
						};
					};
					class Gunner_AIM
					{
						type="group";
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},
								{"ForwardVec",1,"WeaponAim",1,{0,-0.029999999},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0,-0.032499999},1},
								{"ForwardVec",1,"WeaponAim",1,{0,-0.047499999},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},
								{"ForwardVec",1,"WeaponAim",1,{0,0.029999999},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0,0.032499999},1},				
								{"ForwardVec",1,"WeaponAim",1,{0,0.047499999},1},{},
								{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},
								{"ForwardVec",1,"WeaponAim",1,{-0.029999999,0},1},{},
								{"ForwardVec",1,"WeaponAim",1,{-0.032499999,0},1},				
								{"ForwardVec",1,"WeaponAim",1,{-0.047499999,0},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},
								{"ForwardVec",1,"WeaponAim",1,{0.029999999,0},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0.032499999,0},1},
								{"ForwardVec",1,"WeaponAim",1,{0.047499999,0},1}
							};
						};
					};
					class GunCross
					{
						condition="mgun";
						class Circle
						{
							type="line";
							width=9;
							points[]=
							{
								
								{"ForwardVec",1,"WeaponAim",1,{0,-0.050000001},1},
								{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},
								{"ForwardVec",1,"WeaponAim",1,{0,0.050000001},1},{},
								{"ForwardVec",1,"WeaponAim",1,{-0.050000001,0},1},
								{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},
								{"ForwardVec",1,"WeaponAim",1,{0.050000001,0},1},{}
							};
						};
					};
					class RocketCross
					{
						condition="rocket";
						width=6;
						class Circle
						{
							type="line";
							width=6;
							points[]=								
								{
								{"ForwardVec",1,"WeaponAim",1,{-0.050000001,-0.079999998},1},
								{"ForwardVec",1,"WeaponAim",1,{0.050000001,-0.079999998},1},{},
								{"ForwardVec",1,"WeaponAim",1,{0,-0.079999998},1},								
								{"ForwardVec",1,"WeaponAim",1,{0,0.079999998},1},{},
								{"ForwardVec",1,"WeaponAim",1,{-0.050000001,0.079999998},1},
								{"ForwardVec",1,"WeaponAim",1,{0.050000001,0.079999998},1},{}
							};
						};
					};
					class AT_Aim
					{
						condition="ATmissile";
						width=2;
						class Circle
						{
							type="line";
							width=2;
							points[]=
							{
								
								{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1},
								{"ForwardVec",1,"WeaponAim",1,{0.1,-0.1},1},
								{"ForwardVec",1,"WeaponAim",1,{0.1,0.1},1},
								{"ForwardVec",1,"WeaponAim",1,{-0.1,0.1},1},								
								{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1}
							};
						};
					};
					class AA_aim
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							width=2.5;
							points[]=
							{
								
								{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","-0.244781 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","-0.233571 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","-0.215252 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","-0.190396 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","-0.159774 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","-0.12428 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","-0.0850072 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","-0.0431499 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.25 / 4","0 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","0.0431499 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","0.0850072 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","0.12428 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","0.159774 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","0.190396 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","0.215252 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","0.233571 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","0.244781 / 4"},1},							
								{"ForwardVec",1,"WeaponAim",1,{"0 / 4","0.248559 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","0.244781 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","0.233571 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","0.215252 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","0.190396 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","0.159774 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","0.12428 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","0.0850072 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","0.0431499 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 4","0 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","-0.0431499 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","-0.0850072 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","-0.12428 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","-0.159774 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","-0.190396 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","-0.215252 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","-0.233571 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","-0.244781 / 4"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{},
								{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","-0.244781 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","-0.233571 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","-0.215252 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","-0.190396 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","-0.159774 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","-0.12428 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","-0.0850072 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","-0.0431499 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.25 / 2","0 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","0.0431499 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","0.0850072 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","0.12428 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","0.159774 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","0.190396 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","0.215252 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","0.233571 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","0.244781 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0 / 2","0.248559 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","0.244781 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","0.233571 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","0.215252 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","0.190396 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","0.159774 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","0.12428 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","0.0850072 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","0.0431499 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 2","0 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","-0.0431499 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","-0.0850072 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","-0.12428 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","-0.159774 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","-0.190396 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","-0.215252 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","-0.233571 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","-0.244781 / 2"},1},
								{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1}
							};
						};
					};
					class TargetACQ
					{
						type="line";
						width=2;
						points[]=
						{
							
							{"ForwardVec",1,"target",{0,-0.059999999},1},
							{"ForwardVec",1,"target",{0,-0.055},1},{},
							{"ForwardVec",1,"target",{0,-0.050000001},1},
							{"ForwardVec",1,"target",{0,-0.045000002},1},{},
							{"ForwardVec",1,"target",{0,-0.039999999},1},
							{"ForwardVec",1,"target",{0,-0.035},1},{},
							{"ForwardVec",1,"target",{0,-0.029999999},1},
							{"ForwardVec",1,"target",{0,-0.025},1},{},
							{"ForwardVec",1,"target",{0,-0.02},1},
							{"ForwardVec",1,"target",{0,-0.015},1},{},
							{"ForwardVec",1,"target",{0,-0.0099999998},1},
							{"ForwardVec",1,"target",{0,-0.0049999999},1},{},
							{"ForwardVec",1,"target",{0,0},1},
							{"ForwardVec",1,"target",{0,0},1},{},
							{"ForwardVec",1,"target",{0,0.059999999},1},
							{"ForwardVec",1,"target",{0,0.055},1},{},
							{"ForwardVec",1,"target",{0,0.050000001},1},
							{"ForwardVec",1,"target",{0,0.045000002},1},{},
							{"ForwardVec",1,"target",{0,0.039999999},1},
							{"ForwardVec",1,"target",{0,0.035},1},{},
							{"ForwardVec",1,"target",{0,0.029999999},1},
							{"ForwardVec",1,"target",{0,0.025},1},{},
							{"ForwardVec",1,"target",{0,0.02},1},
							{"ForwardVec",1,"target",{0,0.015},1},{},
							{"ForwardVec",1,"target",{0,0.0099999998},1},
							{"ForwardVec",1,"target",{0,0.0049999999},1},{},
							{"ForwardVec",1,"target",{-0.059999999,0},1},
							{"ForwardVec",1,"target",{-0.055,0},1},{},
							{"ForwardVec",1,"target",{-0.050000001,0},1},
							{"ForwardVec",1,"target",{-0.045000002,0},1},{},
							{"ForwardVec",1,"target",{-0.039999999,0},1},
							{"ForwardVec",1,"target",{-0.035,0},1},{},
							{"ForwardVec",1,"target",{-0.029999999,0},1},							
							{"ForwardVec",1,"target",{-0.025,0},1},{},							
							{"ForwardVec",1,"target",{-0.02,0},1},						
							{"ForwardVec",1,"target",{-0.015,0},1},{},						
							{"ForwardVec",1,"target",{-0.0099999998,0},1},						
							{"ForwardVec",1,"target",{-0.0049999999,0},1},{},						
							{"ForwardVec",1,"target",{0.059999999,0},1},							
							{"ForwardVec",1,"target",{0.055,0},1},{},							
							{"ForwardVec",1,"target",{0.050000001,0},1},						
							{"ForwardVec",1,"target",{0.045000002,0},1},{},						
							{"ForwardVec",1,"target",{0.039999999,0},1},							
							{"ForwardVec",1,"target",{0.035,0},1},{},							
							{"ForwardVec",1,"target",{0.029999999,0},1},							
							{"ForwardVec",1,"target",{0.025,0},1},{},						
							{"ForwardVec",1,"target",{0.02,0},1},							
							{"ForwardVec",1,"target",{0.015,0},1},{},						
							{"ForwardVec",1,"target",{0.0099999998,0},1},						
							{"ForwardVec",1,"target",{0.0049999999,0},1},{}
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.035,0.035,0.1};
				helmetRight[]={0.07,0,0};
				helmetDown[]={0,-0.07,0};
			};
		};

		#include "soundska145.hpp" /// sounds are included in a separate file

		class AnimationSources: AnimationSources
		{
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="gatling_30mm";
			};
			class Gatling
			{
				source="revolving";
				weapon="gatling_30mm";
			};
                };	
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
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
		#include "rtd.hpp"
        };
	class ej_ka145: ka145_base
	{
		scope = 2;
		scopeCurator = public;
		side = 0;
		faction	= RUSFED;
		crew = "O_HelicrewRUS_F";
		displayName="Ka-145 Hoplite";
		accuracy = 1.50;
		
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";

		hiddenSelectionsTextures[] =
		{
			"uh-60\data\ka52_01_co.paa","uh-60\data\ka52_02_co.paa","uh-60\data\ka145ductfans_co.paa"
		};
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 2000000;
	};

};