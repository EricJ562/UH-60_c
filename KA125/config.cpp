#include "basicdefines_A3.hpp"

class CfgPatches
{
	class ka125_F
	{
		units[] ={"kj_ka125_Black","kj_ka125"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"KJ_UH_60","A3_Air_F"};
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
class AirplaneHUD;
class DefaultVehicleSystemsDisplayManagerRight;
class DefaultVehicleSystemsDisplayManagerLeft;
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints;
	};

	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
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
		class RotorLibHelicopterProperties;
		class Reflectors{class Right;};
	};

	class kj_ka125_base: Helicopter_Base_H
	{
		scope=0;
		vehicleClass="Air";
		altFullForce = 4000;
		picture="\uh-60\data\ui\KA_145_Icon.paa";
		icon="\UH-60\Data\UI\Map_KA_145_Icon.paa";
		altNoForce = 6000;
		maxSpeed = 350;
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
		armor=70;
		hasGunner=0;
		damageResistance=0.0063499999;
		washDownStrength="1.2f";
		class RotorLibHelicopterProperties
		{
			RTDconfig="uh-60_c\KA125\KA125.xml";
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
		displayName = "Ka-125 Hokum C";
		model = "\uh-60\ka125\kj_ka125.p3d";
		driveOnComponent[]=
		{
			"damper_front",
			"damper_left",
			"damper_right"
		};
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
		gearRetracting=1;
		gearUpTime=3;
		gearDownTime=3;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		memoryPointDriverOptics="PilotCamera_pos";
		reportOwnPosition=1;
		cost=3000000;
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir"};
		precisegetinout = 1;
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		class Turrets{};

		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-110;
			maxTurn=110;
			initTurn=0;
			minElev=-15;
			maxElev=60;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=1;
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
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine="30Rnd_762x39_AK12_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12U_F
			{
				weapon="arifle_AK12U_F";
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
		weapons[] = {"kj_master_arms_safe","gatling_2A42","CMFlareLauncher","Laserdesignator_mounted"};
		magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","192Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};

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
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON"
						};
						turret[]={-1};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_19Rnd_Rocket_Skyfire";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
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
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class MissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorsDisplay";
				class Components
				{
					class MissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorsDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						aimDown=0;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
						maxTrackableSpeed=110;
						typeRecognitionDistance=1500;
						class AirTarget
						{
							maxRange=2500;
							minRange=0;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							maxRange=2500;
							minRange=0;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						aimDown=0;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
						maxTrackableSpeed=110;
						typeRecognitionDistance=1000;
						class AirTarget
						{
							maxRange=2000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							maxRange=2000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
					};
					class PassiveRadarComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarComponent: SensorTemplateActiveRadar
					{
						aimDown=0;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						typeRecognitionDistance=3000;
						groundNoiseDistanceCoef=-1;
						class AirTarget
						{
							maxRange=6000;
							minRange=0;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=4000;
							minRange=0;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						aimDown=0;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
						typeRecognitionDistance=1500;
						class AirTarget
						{
							maxRange=3000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							maxRange=3000;
							minRange=50;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
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

		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"uh-60\data\Mat\ka125\ka50_01.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\Mat\ka125\ka50_02.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\Mat\ka125\ka50_03.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

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

		#include "soundska125.hpp" /// sounds are included in a separate file

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
		hiddenSelections[] ={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]={"\uh-60\data\ka50_01_co.paa","\uh-60\data\ka50_02_co.paa","\uh-60\data\ka50_03_co.paa","\uh-60\data\ductfansRus1_co.paa"};	
		aggregateReflectors[] = {{"Left", "Right"}};
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
		};
		#include "rtd.hpp"
        };
	class kj_ka125: kj_ka125_base
	{
		scope = 2;
		scopecurator=2;
		side = 0;
		editoInrPreview="\uh-60\data\Previews\KA125PIMAGE.jpg";
		faction	= "RUSFED";
		crew = "O_HelicrewRUS_F";
		displayName="Ka-125 Hokum C";
		accuracy = 1.50;
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 2000000;
	};
	class kj_ka125_Black: kj_ka125_base
	{
		scope = 2;
		scopecurator=2;
		side = 0;
		ForceIngarage=1;
		editorPreview="\uh-60\data\Previews\KA125BLACK.jpg";
		faction	= "RUSFED";
		crew = "O_HelicrewRUS_F";
		displayName="Ka-125 Hokum C (Black)";
		accuracy = 1.50;
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 2000000;
		hiddenSelections[] ={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]={"\uh-60\data\ka50_blk_01_co.paa","\uh-60\data\ka50_blk_02_co.paa","\uh-60\data\ka50_blk_03_co.paa","\uh-60\data\dapductfans_co.paa"};	
	};

};