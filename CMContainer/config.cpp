class CfgPatches
{
	class CMContainer_F
	{
		addonRootClass="A3_Static_F_Destroyer";
		requiredAddons[]=
		{
			"A3_Static_F_Destroyer"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ej_CMContainer"
		};
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class Ship;
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
	};
	class CMContainer_base_F: StaticMGWeapon
	{
		author="Flanker562";
		scope=0;
		scopeCurator=0;
		vehicleClass="Autonomous";
		picture="\UH-60\Data\Ui\CMC_01_picture_CA.paa";
		uiPicture="\UH-60\Data\Ui\CMC_01_picture_CA.paa";
		icon="\UH-60\Data\Ui\CMC_01_icon_CA.paa";
		displayName="Cruise Missle Container";
		hasDriver=0;
		hasGunner=1;
		isUav=1;
		uavCameraGunnerPos="pos_gunner_view";
		uavCameraGunnerDir="pos_gunner_view_dir";
		unitInfoType="RscUnitInfoStatic";
		model="\uh-60\Misc\CMContainer\CMContainer.p3d";
		threat[]={1,1,0.1};
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		cost=3000000;
		accuracy=0.12;
		extCameraPosition[]={0,3,-12};
		cameraSmoothSpeed=10;
		canFloat=0;
		enableGPS=1;
		radartype=2;
		radarTarget=1;
		radarTargetSize=1.5;
		visualTarget=1;
		visualTargetSize=1.5;
		irTargetSize=1;
		reportRemoteTargets=0;
		receiveRemoteTargets=1;
		reportOwnPosition=0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange=32000;
							maxRange=32000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=32000;
							maxRange=32000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
		};
		armor=200;
		armorStructural=6;
		damageResistance=0.0040000002;
		damageEffect="AirDestructionEffects";
		explosionEffects="BombExplosion";
		fuelExplosionPower=1;
		hullDamageCauseExplosion=1;
		secondaryExplosion=-1;
		class Hitpoints: HitPoints
		{
			class HitHull
			{
				armor=6;
				radius=0.1;
				minimalHit=0.30000001;
				explosionShielding=0.0099999998;
				passThrough=0.050000001;
				material=-1;
				name="hit_hull";
				convexComponent="hit_hull";
				visual="hull_hit";
				depends="Total";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_damage.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_destruct.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_damage.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_destruct.rvmat"
			};
		};
		class DestructionEffects
		{
			ignoreFuel=1;
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="turretdestruct_pos";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="turretdestruct_pos";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="turretdestruct_pos";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="turretdestruct_pos";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="turretdestruct_pos";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="turretdestruct_pos";
				intensity=0;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="gundestruct_pos";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="gundestruct_pos";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="gundestruct_pos";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="gundestruct_pos";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
		memoryPointLMissile="pos_missile_l";
		memoryPointRMissile="pos_missile_r";
		memoryPointLRocket="pos_missile_l";
		memoryPointRRocket="pos_missile_r";
		memoryPointMissile[]=
		{
			"pos_missile",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"pos_missile_end",
			"konec hlavne"
		};
		animated=1;
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="ammo";
				weapon="ej_weapon_VLS_01";
				animPeriod=0.001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=0;
				maxElev=0;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				maxHorizontalRotSpeed=8;
				maxVerticalRotSpeed=8;
				elevationMode=3;
				soundServo[]={};
				hasGunner=1;
				gunnerName="Gunner";
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=1;
				turretInfoType="RscOptics_VLS_01";
				forceHideGunner=1;
				gunnerForceOptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				showAllTargets="2 + 4";
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				uavCameraGunnerPos="pos_gunner_view";
				uavCameraGunnerDir="pos_gunner_view_dir";
				memoryPointGunnerOptics="pos_gunner_view";
				selectionFireAnim="zasleh";
				missileBeg="pos_missile";
				missileEnd="pos_missile_end";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				weapons[]=
				{
					"ej_weapon_VLS_01"
				};
				magazines[]=
				{
					"magazine_Missiles_Cruise_01_x4"
				};
				class Turrets
				{
				};
				optics=1;
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_empty_F.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
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
						initFov=0.75;
						minFov=0.75;
						maxFov=0.75;
						directionStabilized=0;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_empty_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
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
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,32000};
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
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,32000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						name="hit_turret";
						convexComponent="";
						visual="";
						radius=0.15000001;
						material=-1;
						armor=6;
						passThrough=0.050000001;
						minimalHit=0.2;
						explosionShielding=0.0099999998;
						isTurret=1;
					};
					class Hitgun: HitTurret
					{
						name="hit_gun";
						isGun=1;
					};
				};
			};
		};
	};
	class ej_CMContainer: CMContainer_base_F
	{
		author="Flanker562";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]={"B_UAV_AI"};
	};
};
