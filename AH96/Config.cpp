#include "basicdefines_A3.hpp"

class CfgPatches
{
	class ej_AH96
	{
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
		requiredVersion=0.1;
		units[]={"ej_ah96"};
		weapons[]={};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Reflectors{class Right;};
		class Components;
	};
	class ej_AH96_base_F: Helicopter_Base_F
	{
		author="Flanker562";
		mapSize=17.75;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_air_gunship_s"};
				speechPlural[]={"veh_air_gunship_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_gunship_s";
		textPlural="$STR_A3_nameSound_veh_air_gunship_p";
		nameSound="veh_air_gunship_s";
		memoryPointTaskMarker="TaskMarker_1_pos";
		model="\uh-60\AH96\ej_AH96.p3d";
		editorSubcategory="EdSubcat_Helicopters";
		icon="\UH-60\Data\UI\Map_AH_96_Icon.paa";
		picture="\UH-60\Data\UI\AH_96_Icon.paa";
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Attack_01\RTD_Heli_Attack_01.xml";
			defaultCollective=0.67500001;
			autoHoverCorrection[]={3.5,5.1999998,0};
			retreatBladeStallWarningSpeed=92.778;
			maxTorque=4500;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=100000;
			maxHorizontalStabilizerRightStress=100000;
			maxVerticalStabilizerStress=100000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=150000;
			maxTailRotorStress=30000;
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		fuelCapacity = 1561;
		fuelConsumptionRate=0.126;
		washDownStrength="1.1f";
		fuelConsumptionRate=0.055500001;
		maxSpeed=250;
		armor=40;
		accuracy=0.5;
		cost=3000000;
		altFullForce=3000;
		altNoForce=5000;
		crewVulnerable=0;
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		maxFordingDepth=0.44999999;
		mainBladeRadius = 2;
		liftForceCoef=0.89999998;
		bodyFrictionCoef=0.43099999;
		castDriverShadow=1;
		viewCargoShadow=1;
		threat[]={0.80000001,1,0.80000001};
		maxMainRotorDive=7;
		minMainRotorDive=-7;
		neutralMainRotorDive=0;
		mainRotorSpeed=-1;
		backRotorSpeed=1;
		LockDetectionSystem="1 + 8 + 4";
		incomingMissileDetectionSystem=16;
		weapons[]={"ej_master_arms_safe","Flanker562_CMFlareLauncherUH92","kuy_IR_Jammer_Weapon"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		memoryPointCM[]={"Flare_launcher1","Flare_launcher2","Flare_launcher3","Flare_launcher4"};
		memoryPointCMDir[]={"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir","flare_launcher4_dir"};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		irtargetsize=1.3;
		RadarTargetSize=1.4;
		driverAction="Heli_Attack_01_pilot";
		driverInAction="Heli_Attack_01_pilot";
		driveOnComponent[]={"Skids"};
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		driverCanEject=0;
		precisegetinout=1;
		class ViewPilot: ViewPilot
		{
			initAngleX=-4;
		};
		class ViewOptics: ViewOptics
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
		memoryPointDriverOptics="z_flir_pos";
		driverWeaponsInfoType="RscOptics_Heli_Attack_01_pilot";
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
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
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
				class View02
				{
					pointPosition = "pilotFLIR_Pos";
					pointDirection = "PilotFLIR_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.05;
				};
			};
			class MFD3
			{
				renderTarget = "rendertarget2";
				class View03
				{
					pointPosition = "pilotFLIR_Pos";
					pointDirection = "PilotFLIR_dir";
					renderQuality = 2;
					renderVisionMode = 1;
					fov = 0.05;
				};
			};
			class MFD4
			{
				renderTarget = "rendertarget3";
				class View04
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
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
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon="arifle_MXC_F";
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
		getinAction="Heli_Attack_01_Pilot_Enter";
		getoutaction="Heli_Attack_01_Pilot_Exit";
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
		#include "soundsuh92.hpp"
		class AnimationSources: AnimationSources
		{
			class Gatling{source = "revolving";weapon = "M197_MH60";};
			class HitGlass1{source="Hit";hitpoint="HitGlass1";raw=1;};
			class HitGlass2: HitGlass1{hitpoint="HitGlass2";};
			class HitGlass3: HitGlass1{hitpoint="HitGlass3";};
			class HitGlass4: HitGlass1{hitpoint="HitGlass4";};
			class HitGlass5: HitGlass1{hitpoint="HitGlass5";};
			class HitGlass6: HitGlass1{hitpoint="HitGlass6";};
			class HitGlass7: HitGlass1{hitpoint="HitGlass7";};
			class HitGlass8: HitGlass1{hitpoint="HitGlass8";};
			class Missiles{source="revolving";weapon="missiles_DAGR";};
			class Hide{source="user";animPeriod=0;initPhase=0;};
			class HidePilotFeed{source="user";animPeriod=0;initPhase=0;};
			class HidePilotNVGFeed{source="user";animPeriod=0;initPhase=0;};
			class Muzzle_flash{source="ammorandom";weapon="M197_MH60";};
			class FormationLights {AnimPeriod = 1;source = "user";InitPhase = 1; };
		};
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]={"uh-60\data\ah96_body_co.paa","uh-60\data\ah96_engines_co.paa","uh-60\data\usmcductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_Navy_co.paa"};	
		
		class textureSources
		{
			class USMC1
			{
				displayName="USMC (HMLA-167)";
				author="Flanker562";
				textures[]={"\uh-60\data\ah96_body_HMLA167_co.paa","uh-60\data\ah96_engines_HMLA167_co.paa","uh-60\data\usmcductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_Navy_co.paa"};
				factions[]={"BLU_F"};
			};
			class USArmy
			{
				displayName="US Army";
				author="Flanker562";
				textures[]={"\uh-60\data\ah96_body_army_co.paa","uh-60\data\ah96_engines_army_co.paa","uh-60\data\ductfansArmy_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[]={"BLU_F"};
			};
			class NATO
			{
				displayName="NATO";
				author="Flanker562";
				textures[]={"\uh-60\data\ah96_body_nato_co.paa","uh-60\data\ah96_engines_nato_co.paa","uh-60\data\natoductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[]={"BLU_F"};
			};
			class RDA
			{
				displayName="RDA SECFOR";
				author="Flanker562";
				textures[]={"\uh-60\data\ah96_body_rda_co.paa","uh-60\data\ah96_engines_rda_co.paa","uh-60\data\rdaductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[]={"BLU_F"};
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
			class PilotFMFDOn
			{
				displayName= "Flight Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip3"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip3"",1];";
				priority=4;
			}; 	

			class PilotFMFDOff: PilotFMFDOn
			{
				displayName= "Flight Page Off";
				condition="this animationPhase ""copip3"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip3"",0];";
			};
			class PilotFNVGMFDOn
			{
				displayName= "Flight NVG Page On";
				displayNameDefault = "";
				position="";
				radius=20;
				onlyForplayer=true;
				condition="this animationPhase ""copip4"" < 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip4"",1];";
				priority=4;
			}; 	

			class PilotFNVGMFDOff: PilotFNVGMFDOn
			{
				displayName= "Flight NVG Page Off";
				condition="this animationPhase ""copip4"" > 0.5 AND (player == (driver this) && (alive this))";
				statement="this animate [""copip4"",0];";
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
		laserScanner=1;
		showAllTargets=4;
		class ViewPilot: ViewPilot
		{
			initAngleX=10;
		};
		class ViewOptics: ViewOptics
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot=1;
				CanEject=0;
				startEngine=0;
				minElev=-60; maxElev=+10; initElev=0;
				minTurn=-70; maxTurn=+70; initTurn=0;
				class Components
				{
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
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]={"Normal","NVG"};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]={"",0.0099999998,1};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointsGetInGunner="pos Copilot";
				memoryPointsGetInGunnerDir="pos Copilot dir";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				memoryPointGun="machinegun";
				gunBeg="gun2_end";
				gunEnd="gun2_begin";
				memoryPointGunnerOptics="z_flir_pos";
				selectionFireAnim="muzzleflash";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerGetInAction="Heli_Attack_01_Gunner_Enter";
				gunnerGetOutAction="Heli_Attack_01_Gunner_Exit";
				precisegetinout=1;
				gunnerOpticsModel="";
				gunnerOpticsEffect[]={"TankCommanderOptics1","BWTV"};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[] = {ej_master_arms_safe,Flanker562_CMFlareLauncher,kuy_IR_Jammer_Weapon,M197_MH60,Laserdesignator_mounted};
				magazines[] = {168Rnd_CMFlare_Chaff_Magazine,kuy_IR_Jammer_Magazine,750Rnd_M197_MH60,Laserbatteries};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun1";
						passThrough=0.30000001;
						radius=0.2;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun2";
						passThrough=0.30000001;
						radius=0.2;
					};
				};
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
							maxRange=4000;
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
			class TransportPylonsComponent
			{
				uiPicture="\UH-60\Data\UI\Heli_attack_AH_96.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_LG_scalpel";
						priority=5;
						bay=1;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_RATTLER_PYLON",
							"B_A143_BUZZARD_CENTER_PYLON",
							"B_AGM145_Rail_ah96",
							"CANNON_PODS_RF",
							"B_AGM152_ah96",
							"B_FUELTANK_HELI_AH96"
						};
						turret[]={0};
						maxweight=500;
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_12Rnd_PG_missiles";
						priority=4;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"UNI_SCALPEL",
							"B_RATTLER_PYLON",
							"B_AGM145_Rail_ah96"
						};
						maxweight=500;
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="PylonRack_12Rnd_PG_missiles";
						priority=3;
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_RATTLER_PYLON",
							"B_AGM145_Rail_ah96"
						};
						maxweight=500;
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.55000001,0.30000001};
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
					class pylonTip1
					{
						hardpoints[]		= {"B_AIM9X_ah96","B_AGM145_ah96"};
						turret[]={0};
						priority			= 3;
						attachment			= PylonMissile_1Rnd_Missile_AIM9X_ah96;
						maxweight			= 135;
						UIposition[]		= {0.625,0.25};
					};
					class pylonTip2: pylonTip1
					{
						UIposition[]={0.039999999,0.25};
						mirroredMissilePos=1;
					};
				};
			  };
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"uh-60\data\mat\uh92_ductfans.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\ah1z_engines.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",

				"uh-60\data\mat\ah1z_body.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"uh-60\data\mat\ah1z_cockpit.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

			};
		};
		class EventHandlers: EventHandlers{fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";};
		numberPhysicalWheels=0;
	};
	class ej_AH96: ej_AH96_base_F
	{
		author="Flanker562";
		_generalMacro="ej_AH96";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		accuracy=2.5;
		displayName="AH-96D Coyote (6 pylons)";
		class Library{libTextDesc="AH-96 Coyote";};
		availableForSupportTypes[]={"CAS_Heli"};
	};
};
