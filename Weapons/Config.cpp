#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_UH60M_weapons
	{
		units[] = {};
		weapons[] = {"Missile_AGM145_ah96_F","UH60_Hellfire","UH60_Rattler","M260_ah6_rockets"};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class SensorTemplateLaser;
class Components;

class CfgWeapons
{
	class Default;
	class M134_minigun;
	class LauncherCore;
	class MissileLauncher;
	class MGun;
	class MGunCore;
	class missiles_DAR; //External 
	class RocketPods;
	class MissileLauncher;
	class mortar_155mm_AMOS;
	class CannonCore;
	class mortar_82mm;
	class rockets_ATACMS: RocketPods
	{
		class gunClouds
		{
		};
		displayName="ATACMS Launcher";
		magazines[]=
		{
			"2Rnd_ATACMS_rockets"
		};
		magazineReloadTime=90;
		sounds[]=
		{
			"StandardSound"
		};
		cursorAim="EmptyCursor";
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2",
				1.7782794,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="Konec hlavne";
				directionName="Usti hlavne";
			};
		};
		modes[]=
		{
			"Mode_1",
			"Mode_2",
			"Mode_3",
			"Mode_4",
			"Mode_5",
			"Mode_6",
			"Mode_7",
			"Mode_8",
			"Mode_9",
			"Mode_10",
			"Mode_11",
			"Mode_12",
			"Mode_13",
			"Mode_14",
			"Mode_15",
			"Mode_16"
		};
		class Close: RocketPods
		{
			displayName="$STR_A3_rockets_230mm_GAT_Close0";
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=2500;
			midRangeProbab=0.64999998;
			maxRange=4600;
			maxRangeProbab=0.050000001;
			reloadTime=0.80000001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\Titan_2",
					1.7782794,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			autoFire=0;
			artilleryDispersion=0.5;
			artilleryCharge=0.25;
			soundBurst=0;
			aiRateOfFire=0.80000001;
			aiRateOfFireDistance=2500;
		};
		class Medium: Close
		{
			displayName="$STR_A3_rockets_230mm_GAT_Medium0";
			minRange=3100;
			minRangeProbab=0.15000001;
			midRange=12000;
			midRangeProbab=0.55000001;
			maxRange=18400;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=0.5;
			aiRateOfFire=1.8;
			aiRateOfFireDistance=12000;
		};
		class Far: Close
		{
			displayName="$STR_A3_rockets_230mm_GAT_Far0";
			minRange=7100;
			minRangeProbab=0.15000001;
			midRange=25000;
			midRangeProbab=0.44999999;
			maxRange=40000;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=0.75;
			aiRateOfFire=4;
			aiRateOfFireDistance=25000;
		};
		class Full: Close
		{
			displayName="$STR_A3_rockets_230mm_GAT_Full0";
			minRange=12800;
			minRangeProbab=0.15000001;
			midRange=45000;
			midRangeProbab=0.34999999;
			maxRange=80000;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=1;
			aiRateOfFire=8;
			aiRateOfFireDistance=45000;
		};
		class Mode_1: Close
		{
			displayName="1000m-1300m";
			artilleryCharge=0.13500001;
			minRange=1000;
			minRangeProbab=0.15000001;
			midRange=1150;
			midRangeProbab=0.64999998;
			maxRange=1300;
			maxRangeProbab=0.050000001;
		};
		class Mode_2: Close
		{
			displayName="1300m-1700m";
			artilleryCharge=0.153;
			minRange=1300;
			minRangeProbab=0.15000001;
			midRange=1500;
			midRangeProbab=0.64999998;
			maxRange=1700;
			maxRangeProbab=0.050000001;
		};
		class Mode_3: Close
		{
			displayName="1700m-2200m";
			artilleryCharge=0.175;
			minRange=1700;
			minRangeProbab=0.15000001;
			midRange=1950;
			midRangeProbab=0.64999998;
			maxRange=2200;
			maxRangeProbab=0.050000001;
		};
		class Mode_4: Close
		{
			displayName="2200m-2900m";
			artilleryCharge=0.2;
			minRange=2200;
			minRangeProbab=0.15000001;
			midRange=2550;
			midRangeProbab=0.64999998;
			maxRange=2900;
			maxRangeProbab=0.050000001;
		};
		class Mode_5: Close
		{
			displayName="2900m-3800m";
			artilleryCharge=0.228;
			minRange=2900;
			minRangeProbab=0.15000001;
			midRange=3350;
			midRangeProbab=0.64999998;
			maxRange=3800;
			maxRangeProbab=0.050000001;
		};
		class Mode_6: Close
		{
			displayName="3800m-5000m";
			artilleryCharge=0.26100001;
			minRange=3800;
			minRangeProbab=0.15000001;
			midRange=4400;
			midRangeProbab=0.64999998;
			maxRange=5000;
			maxRangeProbab=0.050000001;
		};
		class Mode_7: Close
		{
			displayName="5000m-6600m";
			artilleryCharge=0.30000001;
			minRange=5000;
			minRangeProbab=0.15000001;
			midRange=5800;
			midRangeProbab=0.64999998;
			maxRange=6600;
			maxRangeProbab=0.050000001;
		};
		class Mode_8: Close
		{
			displayName="6600m-8500m";
			artilleryCharge=0.34099999;
			minRange=6600;
			minRangeProbab=0.15000001;
			midRange=7550;
			midRangeProbab=0.64999998;
			maxRange=8500;
			maxRangeProbab=0.050000001;
		};
		class Mode_9: Close
		{
			displayName="8500m-11000m";
			artilleryCharge=0.38800001;
			minRange=8500;
			minRangeProbab=0.15000001;
			midRange=9750;
			midRangeProbab=0.64999998;
			maxRange=11000;
			maxRangeProbab=0.050000001;
		};
		class Mode_10: Close
		{
			displayName="11000m-14000m";
			artilleryCharge=0.44;
			minRange=11000;
			minRangeProbab=0.15000001;
			midRange=12500;
			midRangeProbab=0.64999998;
			maxRange=14000;
			maxRangeProbab=0.050000001;
		};
		class Mode_11: Close
		{
			displayName="14000m-18000m";
			artilleryCharge=0.495;
			minRange=14000;
			minRangeProbab=0.15000001;
			midRange=16000;
			midRangeProbab=0.64999998;
			maxRange=18000;
			maxRangeProbab=0.050000001;
		};
		class Mode_12: Close
		{
			displayName="18000m-23000m";
			artilleryCharge=0.56;
			minRange=18000;
			minRangeProbab=0.15000001;
			midRange=20500;
			midRangeProbab=0.64999998;
			maxRange=23000;
			maxRangeProbab=0.050000001;
		};
		class Mode_13: Close
		{
			displayName="23000m-30000m";
			artilleryCharge=0.639;
			minRange=23000;
			minRangeProbab=0.15000001;
			midRange=26500;
			midRangeProbab=0.64999998;
			maxRange=30000;
			maxRangeProbab=0.050000001;
		};
		class Mode_14: Close
		{
			displayName="30000m-40000m";
			artilleryCharge=0.74000001;
			minRange=30000;
			minRangeProbab=0.15000001;
			midRange=35000;
			midRangeProbab=0.64999998;
			maxRange=40000;
			maxRangeProbab=0.050000001;
		};
		class Mode_15: Close
		{
			displayName="40000m-52000m";
			artilleryCharge=0.84200001;
			minRange=40000;
			minRangeProbab=0.15000001;
			midRange=46000;
			midRangeProbab=0.64999998;
			maxRange=52000;
			maxRangeProbab=0.050000001;
		};
		class Mode_16: Close
		{
			displayName="52000m-67000m";
			artilleryCharge=0.95999998;
			minRange=52000;
			minRangeProbab=0.15000001;
			midRange=59500;
			midRangeProbab=0.64999998;
			maxRange=67000;
			maxRangeProbab=0.050000001;
		};
	};
	class mortar_105mm: mortar_82mm
	{
		displayName="105mm";
		ballisticscomputer=2;
		reloadTime=6;
		magazineReloadTime=6;
		magazines[]=
		{
			"100rd_105mm_Shells",
			"32Rnd_105mm_Smoke_white",
			"32Rnd_105mm_Guided",
			"32Rnd_105mm_Flare_white",
			"16Rnd_105mm_Illum_white"
		};
		class StandardSound
		{
			begin1[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadSound[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
		soundServo[]={"",9.9999997e-005,1};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="gun_muzzle";
				directionName="muzzle_dir";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName="Reduced Charge";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[]={"begin1",0.5,"begin2",0.5};
			};
			reloadSound[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			reloadTime=8;
			artilleryDispersion=7.1999998;
			artilleryCharge=0.100000;
			minRange=50;
			minRangeProbab=0.60000002;
			midRange=100;
			midRangeProbab=0.64999998;
			maxRange=2867;
			maxRangeProbab=0.60000002;
		};
		class Single2: Single1
		{
			displayName="Reduced Charge 2";
			sounds[]={"StandardSound"};
			artilleryCharge=0.300000;
			minRange=2807;
			minRangeProbab=0.60000002;
			midRange=3346;
			midRangeProbab=0.64999998;
			maxRange=3885;
			maxRangeProbab=0.60000002;
		};
		class Single3: Single1
		{
			displayName="Charge 1";
			sounds[]={"StandardSound"};
			artilleryCharge=0.5;
			minRange=3784;
			minRangeProbab=0.60000002;
			midRange=4510.5;
			midRangeProbab=0.64999998;
			maxRange=5237;
			maxRangeProbab=0.60000002;
		};
		class Single4: Single1
		{
			displayName="Charge 2";
			sounds[]={"StandardSound"};
			artilleryCharge=0.55000;
			minRange=5058;
			minRangeProbab=0.60000002;
			midRange=6028.5;
			midRangeProbab=0.64999998;
			maxRange=6999;
			maxRangeProbab=0.60000002;
		};
		class Single5: Single1
		{
			displayName="Charge 3";
			sounds[]={"StandardSound"};
			artilleryCharge=0.61000;
			minRange=6983;
			minRangeProbab=0.60000002;
			midRange=8323.5;
			midRangeProbab=0.64999998;
			maxRange=9664;
			maxRangeProbab=0.60000002;
		};
		class Single6: Single1
		{
			displayName="Charge 4";
			sounds[]={"StandardSound"};
			artilleryCharge=0.719999;
			minRange=9218;
			minRangeProbab=0.60000002;
			midRange=10987.5;
			midRangeProbab=0.64999998;
			maxRange=12757;
			maxRangeProbab=0.60000002;
		};
		class Single7: Single1
		{
			displayName="Full charge";
			sounds[]={"StandardSound"};
			artilleryCharge=0.840000;
			minRange=12707;
			minRangeProbab=0.60000002;
			midRange=15103.5;
			midRangeProbab=0.64999998;
			maxRange=19500;
			maxRangeProbab=0.60000002;
		};
	};
	class mortar_81mm: mortar_82mm
	{
		scope=1;
		displayname="81mm Mortar";
		nameSound="CannonCore";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
				1.2589254,
				1,
				250
			};
			begin2[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
				1.2589254,
				1,
				250
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"8Rnd_82mm_Mo_shells",
			"8Rnd_82mm_Mo_Flare_white",
			"4Rnd_82mm_Mo_Smoke_white",
			"4rd_82mm_Laser_Shell"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_82mm_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			artilleryDispersion=1.9;
			artilleryCharge=0.34999999;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single20";
			artilleryCharge=0.69999999;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single30";
			artilleryCharge=1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]={"begin1",0.5,"begin2",0.5};
			};
			reloadSound[]={"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[]={"",9.9999997e-005,1};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
	class gatling_2A42_base: CannonCore
	{
		scope=0;
		displayName="2A42";
		nameSound="cannon";
		burst=5;
		reloadTime=0.02;
		autoFire=1;
		magazines[]=
		{
			"250Rnd_30mm_HE_shells",
			"250Rnd_30mm_HE_shells_Tracer_Red",
			"250Rnd_30mm_HE_shells_Tracer_Green",
			"250Rnd_30mm_APDS_shells",
			"250Rnd_30mm_APDS_shells_Tracer_Red",
			"250Rnd_30mm_APDS_shells_Tracer_Green",
			"250Rnd_30mm_APDS_shells_Tracer_Yellow"
		};
		modes[]=
		{
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=0;
		cursor="EmptyCursor";
		cursorAim="mg";
		canLock=0;
		ballisticsComputer="1 + 2 + 16";
		FCSMaxLeadSpeed=30.555599;
		FCSZeroingDelay=0.5;
		maxZeroing=2500;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun2";
				positionName="konec hlavne";
				directionName="Konec effect";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_GATLING_30MM_LOWROF0";
			burst=5;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",
					5.6234136,
					1,
					1500,
					{2,45447}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.079999998;
			dispersion=0.0044;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: LowROF
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=16;
			burstRangeMax=37;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.1;
			midRange=50;
			midRangeProbab=0.64999998;
			maxRange=400;
			maxRangeProbab=0.75;
		};
		class near: close
		{
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=32;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=200;
			minRangeProbab=0.64999998;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=1000;
			maxRangeProbab=0.69999999;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=28;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.69999999;
			midRange=1400;
			midRangeProbab=0.40000001;
			maxRange=1800;
			maxRangeProbab=0.15000001;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=9;
			burstRangeMax=20;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1400;
			minRange=1400;
			minRangeProbab=0.5;
			midRange=1800;
			midRangeProbab=0.15000001;
			maxRange=2500;
			maxRangeProbab=0.050000001;
		};
	};
	class gatling_2A42: gatling_2A42_base
	{
		scope=1;
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: gatling_2A42_base
		{
			magazines[]=
			{
				"250Rnd_30mm_HE_shells",
				"250Rnd_30mm_HE_shells_Tracer_Red",
				"250Rnd_30mm_HE_shells_Tracer_Green"
			};
			class LowROF: LowROF
			{
				dispersion=0.0066;
			};
		};
		class AP: gatling_2A42_base
		{
			magazines[]=
			{
				"250Rnd_30mm_APDS_shells",
				"250Rnd_30mm_APDS_shells_Tracer_Red",
				"250Rnd_30mm_APDS_shells_Tracer_Green",
				"250Rnd_30mm_APDS_shells_Tracer_Yellow"
			};
		};
	};
	class weapon_HARMLauncher: MissileLauncher
	{
			class LoalDistance: MissileLauncher
			{
				displayName = "AGM-88C HARM";
				textureType = "semi";
				reloadTime = 4;
				aiRateOfFire = 15;
				aiRateOfFireDispersion = -10;
				aiRateOfFireDistance = 10000;
				minRange = 1000;
				minRangeProbab = 0.9;
				midRange = 3000;
				midRangeProbab = 1;
				maxRange = 16000;
				maxRangeProbab = 1;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2", 1.12202, 1.3, 1000};
					soundBegin[] = {"begin1", 1};
					weaponSoundEffect = "DefaultRifle";
				};
				soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.5, 700};
				lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.5};
				lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
			};
			displayName = "AGM-88C HARM";
			weaponLockDelay = 1.5;
			weaponLockSystem = 0;
			cmImmunity = 0.75;
			showAimCursorInternal = 0;
			reloadTime = 0.1;
			magazineReloadTime = 0.1;
			magazines[] = {"magazine_Missile_HARM_x1", "PylonRack_Missile_HARM_x1", "PylonMissile_Missile_HARM_x1", "PylonMissile_Missile_HARM_INT_x1"};
			aiRateOfFire = 15;
			aiRateOfFireDispersion = -10;
			aiRateOfFireDistance = 10000;
			minRange = 1000;
			minRangeProbab = 0.9;
			midRange = 3000;
			midRangeProbab = 1;
			maxRange = 16000;
			maxRangeProbab = 1;
			textureType = "semi";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2", 1.12202, 1.3, 1000};
				soundBegin[] = {"begin1", 1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 1, 1.5, 700};
			lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 2.5};
			lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
			modes[] = {"LoalDistance"};
	};
	class Missile_AGM145_ah96_F: weapon_HARMLauncher
	{
			displayName = "AGM-145D";
			holdsterAnimValue = 2;
			magazines[] = {"1Rnd_Missile_AGM145_ah96","PylonMissile_1Rnd_Missile_AGM145_ah96","PylonPod_1Rnd_AGM145_ah96"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3", 1, 1, 2000};
				soundBegin[] = {"begin1", 1};
			};
			weaponLockDelay = 3;
			aiRateOfFireDistance = 5000;
			minRange = 500;
			midRange = 1500;
			maxRange = 8000;
			class LoalDistance: LoalDistance
			{
				displayName = "AGM-145D";
				aiRateOfFireDistance = 5000;
				minRange = 500;
				midRange = 1500;
				maxRange = 8000;
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3", 1, 1, 2000};
					soundBegin[] = {"begin1", 1};
				};
			};
	};
	class Missile_AGM152_ah96_F: weapon_HARMLauncher
	{
			displayName = "AGM-152C";
			holdsterAnimValue = 2;
			magazines[] = {"PylonRack_2Rnd_Missile_AGM152_ah96"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3", 1, 1, 2000};
				soundBegin[] = {"begin1", 1};
			};
			weaponLockDelay = 3;
			aiRateOfFireDistance = 5000;
			minRange = 500;
			midRange = 1500;
			maxRange = 8000;
			class LoalDistance: LoalDistance
			{
				displayName = "AGM-152C";
				aiRateOfFireDistance = 5000;
				minRange = 500;
				midRange = 1500;
				maxRange = 8000;
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3", 1, 1, 2000};
					soundBegin[] = {"begin1", 1};
				};
			};
	};
	class ej_M134_minigun: MGunCore
	{
		scope=1;
		displayName="$STR_A3_M134_minigun0";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"5000Rnd_762x51_Belt_Red"
		};
		magazineReloadTime=15;
		canLock=0;
		modes[]=
		{
			"HighROF",
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		weight=40;
		type=65536;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzle_1";
				directionName="chamber_1";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="muzzle_2";
				directionName="chamber_2";
			};
			class effect1
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge";
			};
			class effect2
			{
				positionName="machinegun_eject_2_pos";
				directionName="machinegun_eject_2_dir";
				effectName="MachineGunCartridge";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_M134_minigun0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.033333302;
			dispersion=0.0092000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			showToPlayer=0;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="$STR_A3_M134_minigun0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					2.5118864,
					1,
					1500,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=1;
			multiplier=3;
		};
		class close: HighROF
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=36;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=30;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class ej_M240_mg: MGunCore
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = false;
		aiDispersionCoefY=21;
		aiDispersionCoefX=21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime=3;
		canLock = 0;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
            		displayName = "M240";
            		autoFire = 1;
			reloadTime = 0.075;
      	                dispersion=0.0012;
	 		burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=1;minRangeProbab=0.01;
			midRange=2;midRangeProbab=0.01;
			maxRange=3;maxRangeProbab=0.01;
		}
		class close: manual
		{
		        burst = 10; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;minRangeProbab=0.05;
			midRange=100;midRangeProbab=0.58;
			maxRange=200;maxRangeProbab=0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300; //Rg 200;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58; //Rg 100;
			maxRange=400;maxRangeProbab=0.04; //Rg 200;
		};
		class medium: close
		{
			burst = 4; //Rg 8;
			aiRateOfFire = 3; //Rg 4;
			aiRateOfFireDistance = 600; //Rg 400;
			minRange=300;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58; //Rg 300;
			maxRange=600;maxRangeProbab=0.04; //Rg 400;
		};
		class far: close
		{
			burst = 5; //Rg 7;
			aiRateOfFire = 5; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=500;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4; //Rg 500;
			maxRange=800;maxRangeProbab=0.01; //Rg 600;
		};
	};
	class M134_mq17: M134_minigun
	{
		scope = 1;
		displayname = "M134 Minigun";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"PylonWeapon_M134_mq17","1000Rnd_762x51_M134"};
		canLock = 0;
		modes[] = {"Low","High","close","short","medium","far"};
		weight = 40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzle_1";
				directionName="chamber_1";
			};
			class effect1
			{
				effectName = "MachineGunCartridge";
				positionName = "Gatling_pos";
				directionName = "Gatling_eject_dir";
			};
		};
		class Low: Mode_FullAuto
		{
			displayName = "LOW";
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.9810717,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 3;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.03;
			dispersion = 0.0055;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 1;
			multiplier = 1;
		};
		class High: Low
		{
			displayName = "HIGH";
			textureType = "fullAuto";
			minRangeProbab = 0.08;
			midRangeProbab = 0.058;
			reloadTime = 0.015;
		};
		class close: High
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.3;//0.5
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.70; //0.05
			midRange = 500;
			midRangeProbab = 0.95; //0.7
			maxRange = 1000;
			maxRangeProbab = 0.95;//0.1
		};
		class short: close
		{
			burst = 30;
			aiRateOfFire = 0.5;//2
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.95;//0.05
			midRange = 1000;
			midRangeProbab = 0.90;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: Low
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 45;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.90;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.70;
		};
		class far: medium
		{
			burst = 20;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.85;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.60;
		};
	};
	class M134_uh60: M134_minigun
	{
		scope = 1;
		displayname = "M134 Minigun";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"3000Rnd_762x51_Belt_Red"};
		canLock = 0;
		modes[] = {"Low","close","short","medium","far"};
		weight = 40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzle_1";
				directionName="chamber_1";
			};
			class effect1
			{
				effectName = "MachineGunCartridge";
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
			};
		};
		class Low: Mode_FullAuto
		{
			displayName = "LOW";
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.9810717,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 3;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.02;
			dispersion = 0.0055;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 1;
			multiplier = 1;
		};
		class close: Low
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.3;//0.5
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.70; //0.05
			midRange = 500;
			midRangeProbab = 0.95; //0.7
			maxRange = 1000;
			maxRangeProbab = 0.95;//0.1
		};
		class short: close
		{
			burst = 30;
			aiRateOfFire = 0.5;//2
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.95;//0.05
			midRange = 1000;
			midRangeProbab = 0.90;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: Low
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 45;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.90;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.70;
		};
		class far: medium
		{
			burst = 20;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.85;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.60;
		};
	};
	class M134_uh60_2: M134_minigun
	{
		scope = 1;
		displayname = "M134 Minigun";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"3000Rnd_762x51_Belt_Red"};
		canLock = 0;
		modes[] = {"Low","close","short","medium","far"};
		weight = 40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzle_2";
				directionName="chamber_2";
			};
			class effect1
			{
				effectName = "MachineGunCartridge";
				positionName = "machinegun_eject_pos2";
				directionName = "machinegun_eject_dir2";
			};
		};
		class Low: Mode_FullAuto
		{
			displayName = "LOW";
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.9810717,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 3;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.02;
			dispersion = 0.0055;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 1;
			multiplier = 1;
		};
		class close: Low
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.3;//0.5
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.70; //0.05
			midRange = 500;
			midRangeProbab = 0.95; //0.7
			maxRange = 1000;
			maxRangeProbab = 0.95;//0.1
		};
		class short: close
		{
			burst = 30;
			aiRateOfFire = 0.5;//2
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.95;//0.05
			midRange = 1000;
			midRangeProbab = 0.90;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: Low
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 45;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.90;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.70;
		};
		class far: medium
		{
			burst = 20;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.85;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.60;
		};
	};
	class M134E_uh60: M134_minigun
	{
		scope=1;
		displayname="M134";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		magazines[]={"2000Rnd_762x51_Belt_Red"};
		canLock=0;
		modes[]=
		{
			"LowROF",
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		weight=40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzleEnd";
				directionName="muzzlePos";
			};
			class effect1
			{
				effectName="MachineGunCartridge";
				positionName="gun_eject_pos";
				directionName="gun_eject_dir";
			};
			class effect3
			{
				effectName="MachineGunEject";
				positionName="gun_eject_pos";
				directionName="gun_eject_dir";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="LO";
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.31622776,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.31622776,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			soundContinuous=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=3;
			aiDispersionCoefY=3;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.02;
			dispersion=0.0055;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			showToPlayer=1;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="HI";
			textureType="fullAuto";
			minRangeProbab=0.079999998;
			midRangeProbab=0.057999998;
			reloadTime=0.015;
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.30000001;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=1000;
			maxRangeProbab=0.94999999;
		};
		class short: close
		{
			burst=30;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.94999999;
			midRange=1000;
			midRangeProbab=0.89999998;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: LowROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=45;
			aiRateOfFire=0.69999999;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.89999998;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: medium
		{
			burst=20;
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.85000002;
			midRange=2500;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.60000002;
		};
	};
	class M134E_uh60_2: M134_minigun
	{
		scope=1;
		displayname="M134";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		magazines[]={"2000Rnd_762x51_Belt_Red"};
		canLock=0;
		modes[]=
		{
			"LowROF",
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		weight=40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="muzzleEnd";
				directionName="muzzlePos";
			};
			class effect1
			{
				effectName="MachineGunCartridge";
				positionName="gun_eject_pos";
				directionName="gun_eject_dir";
			};
			class effect3
			{
				effectName="MachineGunEject";
				positionName="gun_eject_pos";
				directionName="gun_eject_dir";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="LO";
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.31622776,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.31622776,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			soundContinuous=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=3;
			aiDispersionCoefY=3;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.02;
			dispersion=0.0055;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			showToPlayer=1;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="HI";
			textureType="fullAuto";
			minRangeProbab=0.079999998;
			midRangeProbab=0.057999998;
			reloadTime=0.015;
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.30000001;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=1000;
			maxRangeProbab=0.94999999;
		};
		class short: close
		{
			burst=30;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=300;
			minRange=500;
			minRangeProbab=0.94999999;
			midRange=1000;
			midRangeProbab=0.89999998;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: LowROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=45;
			aiRateOfFire=0.69999999;
			aiRateOfFireDistance=600;
			minRange=1000;
			minRangeProbab=0.89999998;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: medium
		{
			burst=20;
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			minRange=1500;
			minRangeProbab=0.85000002;
			midRange=2500;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.60000002;
		};
	};
	class M260_ah6_rockets: RocketPods
	{
		displayName="M260";
		magazines[]=
		{
			"PylonRack_7Rnd_Rockets",
			"PylonRack_7Rnd_M255A1",
			"PylonRack_7Rnd_M229",
			"PylonRack_7Rnd_M261"
		};
		modes[]=
		{
			"Far_AI",
			"Medium_AI",
			"Burst"
		};
		canLock=0;
		weaponLockDelay=0;
		cursor="EmptyCursor";
		cursorAim="rocket";
		holdsterAnimValue=1;
		weight=80;
		class Far_AI: RocketPods
		{
			displayName="$STR_A3_missiles_dar0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.079999998;
			dispersion=0.015;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=4;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=3200;
			maxRangeProbab=0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=6;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.1;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab=0.75;
		};
		class Burst: RocketPods
		{
			displayName="$STR_A3_missiles_dar0";
			burst=1;
			soundContinuous=0;
			autoFire=1;
			reloadTime=0.079999998;
			dispersion=0.015;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fullAuto";
		};
	};
	class M261_uh60_rockets: RocketPods
	{
		displayName="M260";
		magazines[]=
		{
			"PylonRack_19Rnd_Rockets"
		};
		modes[]=
		{
			"Far_AI",
			"Medium_AI",
			"Burst"
		};
		canLock=0;
		weaponLockDelay=0;
		cursor="EmptyCursor";
		cursorAim="rocket";
		holdsterAnimValue=1;
		weight=80;
		class Far_AI: RocketPods
		{
			displayName="M260";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.079999998;
			dispersion=0.015;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=4;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=3200;
			maxRangeProbab=0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=6;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.1;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab=0.75;
		};
		class Burst: RocketPods
		{
			displayName="M260";
			burst=1;
			soundContinuous=0;
			autoFire=1;
			reloadTime=0.079999998;
			dispersion=0.015;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					1.7782794,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			textureType="fullAuto";
		};
	};
	class ej_weapon_VLSBase: MissileLauncher
	{
		class Cruise;
	};
	class ej_weapon_VLS_01: ej_weapon_VLSBase
	{
		displayName="$STR_A3_Missile_Cruise_weapon_name";
		magazines[]=
		{
			"magazine_Missiles_Cruise_01_x4",
		};
		class Cruise: Cruise
		{
		};
		class EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = false;
		aiDispersionCoefY=21;
		aiDispersionCoefX=21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime=3;
		canLock = 0;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
            		displayName = "M240";
            		autoFire = 1;
			reloadTime = 0.075;
      	                dispersion=0.0012;
	 		burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=1;minRangeProbab=0.01;
			midRange=2;midRangeProbab=0.01;
			maxRange=3;maxRangeProbab=0.01;
		}
		class close: manual
		{
		        burst = 10; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;minRangeProbab=0.05;
			midRange=100;midRangeProbab=0.58;
			maxRange=200;maxRangeProbab=0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300; //Rg 200;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58; //Rg 100;
			maxRange=400;maxRangeProbab=0.04; //Rg 200;
		};
		class medium: close
		{
			burst = 4; //Rg 8;
			aiRateOfFire = 3; //Rg 4;
			aiRateOfFireDistance = 600; //Rg 400;
			minRange=300;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58; //Rg 300;
			maxRange=600;maxRangeProbab=0.04; //Rg 400;
		};
		class far: close
		{
			burst = 5; //Rg 7;
			aiRateOfFire = 5; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=500;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4; //Rg 500;
			maxRange=800;maxRangeProbab=0.01; //Rg 600;
		};
	};
	class M240_veh_2:M240_veh {};
	class M230_uh60: CannonCore
	{
		scope = 1;
		displayName = "M230";
		nameSound="cannon";
		autoFire = 1;
		magazines[] = {"1100Rnd_30_uh60","PylonWeapon_M230","PylonWeapon_M230_R"};
		canLock = 2;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer=2;
		modes[]={"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName="M230";
			autoFire=1;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\cannons\cannon_30mm",1.1220185,1,1100};
				soundBegin[]={"begin1",1};
			};
			reloadTime=0.0967741935483871;
			dispersion=0.0011636;
			soundContinuous=0;
			soundBurst=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class M197_MH60: CannonCore
	{
		scope = 1;
		displayName = "M197";
		nameSound="cannon";
		autoFire = 1;
		magazines[] = {"750Rnd_M197_MH60","PylonWeapon_M197","PylonWeapon_M197_r"};
		canLock = 2;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer=2;
		modes[]={"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class effect2
			{
				effectName="MachineGunEject";
				positionName="Gatling_pos";
				directionName="Gatling_eject_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="M197";
			autoFire=1;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\gatling\gatling4",1.1220185,1,1100};
				soundBegin[]={"begin1",1};
			};
			reloadTime=0.039999999;
			dispersion=0.0011636;
			soundContinuous=0;
			soundBurst=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class CMFlareLauncher;
	class EricJ_CMFlareLauncher: CMFlareLauncher
	{
		modes[]=
		{
			"Single",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5",
			"Burst6",
			"Burst7",
			"Burst8",
			"AIBurst"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.25;
			autoFire="false";
			displayName="A- 2F/-";
			burst=1;
			multiplier=2;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="B - 8F/0.5S";
			burst=4;
			multiplier=2;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="C - 8F/1S";
			burst=4;
			multiplier=2;
		};
		class Burst3: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="D - 8F/2S";
			burst=4;
			multiplier=2;
		};
		class Burst4: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="E - 8F/4S";
			burst=4;
			multiplier=2;
		};
		class Burst5: Burst1
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="F - 16F/1S";
			burst=8;
			multiplier=2;
		};
		class Burst6: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="G - 16F/2S";
			burst=8;
			multiplier=2;
		};
		class Burst7: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="H - 16F/4S";
			burst=8;
			multiplier=2;
		};
		class Burst8: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="I - 16F/8S";
			burst=8;
			multiplier=2;
		};
	};
	class EricJ_CMFlareLauncherDAP: CMFlareLauncher
	{
		modes[]=
		{
			"Single",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5",
			"Burst6",
			"Burst7",
			"Burst8",
			"AIBurst"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.25;
			autoFire="false";
			displayName="A- 3F/-";
			burst=1;
			multiplier=3;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="B - 9F/0.5S";
			burst=3;
			multiplier=3;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="C - 9F/1S";
			burst=3;
			multiplier=3;
		};
		class Burst3: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="D - 9F/2S";
			burst=3;
			multiplier=3;
		};
		class Burst4: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="E - 9F/4S";
			burst=3;
			multiplier=3;
		};
		class Burst5: Burst1
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="F - 18F/1S";
			burst=9;
			multiplier=2;
		};
		class Burst6: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="G - 18F/2S";
			burst=9;
			multiplier=2;
		};
		class Burst7: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="H - 18F/4S";
			burst=9;
			multiplier=2;
		};
		class Burst8: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="I - 18F/8S";
			burst=9;
			multiplier=2;
		};
	};
	class EricJ_CMFlareLauncherUH92: CMFlareLauncher
	{
		modes[]=
		{
			"Single",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5",
			"Burst6",
			"Burst7",
			"Burst8",
			"AIBurst"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.25;
			autoFire="false";
			displayName="A- 4F/-";
			burst=1;
			multiplier=4;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};

		class Burst1: Mode_Burst
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="B - 12F/0.5S";
			burst=4;
			multiplier=3;
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[]={"begin1",1};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="C - 12F/1S";
			burst=4;
			multiplier=3;
		};
		class Burst3: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="D - 12F/2S";
			burst=4;
			multiplier=3;
		};
		class Burst4: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="E - 12F/4S";
			burst=4;
			multiplier=3;
		};
		class Burst5: Burst1
		{
			reloadTime=0.125;
			autoFire="true";
			displayName="F - 20F/1S";
			burst=10;
			multiplier=2;
		};
		class Burst6: Burst1
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="G - 20F/2S";
			burst=10;
			multiplier=2;
		};
		class Burst7: Burst1
		{
			reloadTime=0.5;
			autoFire="true";
			displayName="H - 20F/4S";
			burst=10;
			multiplier=2;
		};
		class Burst8: Burst1
		{
			reloadTime=1;
			autoFire="true";
			displayName="I - 20F/8S";
			burst=10;
			multiplier=2;
		};
	};
	class SmokeLauncher;
	class kuy_IR_Jammer_Weapon: SmokeLauncher
	{
		scope=2;
		displayName="IR Jammer";
		magazines[]={"kuy_IR_Jammer_Magazine"};
		magazineReloadTime=60;
		simulation="cmlauncher";
		modes[]={"Burst1"};
		class Burst1: Mode_Burst
		{
			displayName="IR Jammer";
			reloadTime=0.25;
			burst=120;
			sounds[]={"StandardSound"};
			class StandardSound{begin1[]={"",1,1,300};soundBegin[]={"begin1",1};weaponSoundEffect="";};
			showToPlayer=1;
			multiplier=1;
			minRange=0;
			maxRange=200;
			soundBurst=0;
		};
	};
	class RocketPods;
	class ej_master_arms_safe: RocketPods
	{
		CanLock=0;
		displayName="MASTER ARM - SAFE";
		displayNameMagazine="MASTER ARM - SAFE";
		shortNameMagazine="MASTER ARM - SAFE";
		nameSound="";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		magazines[]={};
		burst=0;
		reloadTime=0.0099999998;
		magazineReloadTime=0.1;
	};
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_B_RWGPilotCoveralls: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Raven Warfare Group Coveralls";
		picture="\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RWG_Helipilot_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class uh60_hellfire: MissileLauncher
	{
		autoFire=0;
		displayName="Hellfire";
		magazines[]=
		{
			"PylonRack_1rnd_Hellfire_uh60",
			"PylonRack_2rnd_Hellfire_uh60",
			"PylonRack_4rnd_Hellfire_uh60",
			"PylonRack_2rnd_Hellfire_AH6",
			"PylonRack_1rnd_Hellfire_AH6"
		};
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.1220185,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
		textureType="semi";
		modes[]=
		{
			"TopDown"
		};
		class TopDown: RocketPods
		{
			textureType="topDown";
			displayName="Hellfire";
			reloadTime=0.1;
			magazineReloadTime=0.1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.1220185,
					1.3,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				2.5
			};
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			showToPlayer=1;
			minRange=400;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.95999998;
			maxRange=8000;
			maxRangeProbab=0.92000002;
		};
	};
	class uh60_rattler: MissileLauncher
	{
		autoFire=0;
		displayName="Rattler";
		magazines[]=
		{
			"PylonRack_1rnd_Rattler_uh60",
			"PylonRack_2rnd_Rattler_uh60",
			"PylonRack_4rnd_Rattler_uh60",
			"PylonRack_4rnd_RNLOS_uh60"
		};
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]={"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1000};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
		textureType="semi";
		modes[]=
		{
			"TopDown"
		};
		class TopDown: RocketPods
		{
			textureType="topDown";
			displayName="Rattler";
			reloadTime=0.1;
			magazineReloadTime=0.1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.1220185,
					1.3,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				2.5
			};
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			showToPlayer=1;
			minRange=400;
			minRangeProbab=0.2;
			midRange=800;
			midRangeProbab=0.95999998;
			maxRange=8000;
			maxRangeProbab=0.92000002;
		};
	};
	class Missile_AIM9X_ah96_F: RocketPods
	{
		displayName="AIM-9X";
		magazines[]=
		{
			"PylonMissile_1Rnd_Missile_AIM9X_ah96"
		};
		holdsterAnimValue=2;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		autoFire=0;
		cursor="EmptyCursor";
		cursorAim="missile";
		showAimCursorInternal=0;
		nameSound="MissileLauncher";
		textureType="fullAuto";
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.5;
		lockingTargetSound[]=
		{
			"A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F_EPC\Weapons\missile_epc_3",
				1,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		minRange=160;
		minRangeProbab=0.25;
		midRange=1250;
		midRangeProbab=0.94999999;
		maxRange=6000;
		maxRangeProbab=0.85000002;

	};
	class Pylon_DummyLauncher_ah96: MissileLauncher
	{
		showToPlayer=0;
		magazines[]=
		{
			"PylonPod_Fuel_AH96"
		};
	};
};


class CfgMagazines
{
	class VehicleMagazine;
	class FakeMagazine_uh60;
	class 12Rnd_missiles;
	class agm114_uh60_1: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-114";
		displayName = "AGM-114";
		descriptionShort = "AGM-114";
		weight = 45;
		count=1;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class agm114_uh60_2: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-114";
		displayName = "AGM-114";
		descriptionShort = "AGM-114";
		weight = 45;
		count=2;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class agm114_uh60_4: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-114";
		displayName = "AGM-114";
		descriptionShort = "AGM-114";
		weight = 45;
		count=4;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class PylonRack_1rnd_Hellfire_uh60: agm114_uh60_1
	{
		displayName="1x AGM-114K";
		model="\UH-60\Misc\Weapons\M299\M299_1rndH.p3d";
		mass=50;
		hardpoints[]={"B_UH60_Hellfire"};
		pylonWeapon="uh60_hellfire";
	};
	class PylonRack_2rnd_Hellfire_uh60: agm114_uh60_2
	{
		displayName="2x AGM-114K";
		model="\UH-60\Misc\Weapons\M299\M299x2h.p3d";
		mass=100;
		count=2;
		mirrorMissilesIndexes[]={2,1};
		hardpoints[]={"B_UH60_Hellfire"};
		pylonWeapon="uh60_hellfire";
	};
	class PylonRack_1rnd_Hellfire_AH6: agm114_uh60_1
	{
		displayName="1x AGM-114K";
		model="\UH-60\Misc\Weapons\M299\M299x2ah61.p3d";
		mass=100;
		hardpoints[]={"B_AH6_Hellfire"};
		pylonWeapon="uh60_hellfire";
	};
	class PylonRack_2rnd_Hellfire_AH6: agm114_uh60_2
	{
		displayName="2x AGM-114K";
		model="\UH-60\Misc\Weapons\M299\M299x2ah6.p3d";
		mass=100;
		count=2;
		mirrorMissilesIndexes[]={2,1};
		hardpoints[]={"B_AH6_Hellfire"};
		pylonWeapon="uh60_hellfire";
	};
	class PylonRack_4rnd_Hellfire_uh60: agm114_uh60_4
	{
		displayName="4x AGM-114K";
		model="\UH-60\Misc\Weapons\M299\M299.p3d";
		mass=370;
		count=4;
		mirrorMissilesIndexes[]={2,1,4,3};
		hardpoints[]={"B_UH60_Hellfire"};
		pylonWeapon="uh60_hellfire";
	};
	class agm117_uh60_1: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-117";
		displayName = "AGM-117";
		descriptionShort = "AGM-117";
		weight = 45;
		count=1;
		ammo = "M_Rattler_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class agm117_uh60_2: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-117";
		displayName = "AGM-117";
		descriptionShort = "AGM-117";
		weight = 45;
		count=2;
		ammo = "M_Rattler_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class agm117_uh60_4: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "AGM-117";
		displayName = "AGM-117";
		descriptionShort = "AGM-117";
		weight = 45;
		count=4;
		ammo = "M_Rattler_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class agm117_uh60_4_NLOS: VehicleMagazine
	{
		author = "EricJ";
		scope = 2;
		displaynameshort = "R-NLOS";
		displayName = "R-NLOS";
		descriptionShort = "R-NLOS";
		weight = 45;
		count=4;
		ammo = "Rattler_AT_NLOS";
		initSpeed = 0;
		maxLeadSpeed = 100;
		nameSound="missiles";
	};
	class PylonRack_1rnd_Rattler_uh60: agm117_uh60_1
	{
		displayName="1x AGM-117";
		hardpoints[]={"B_RATTLER_PYLON"};
		model="\UH-60\Misc\Weapons\M299\M299xR_1rnd.p3d";
		pylonWeapon="uh60_rattler";
		mass=75;
	};
	class PylonRack_2rnd_Rattler_uh60: agm117_uh60_2
	{
		displayName="2x AGM-117";
		hardpoints[]={"B_RATTLER_PYLON"};
		model="\UH-60\Misc\Weapons\M299\M299x2.p3d";
		pylonWeapon="uh60_rattler";
		mass=100;
	};
	class PylonRack_4rnd_Rattler_uh60: agm117_uh60_4
	{
		displayName="4x AGM-117";
		hardpoints[]={"B_RATTLER_PYLON"};
		model="\UH-60\Misc\Weapons\M299\M299xR.p3d";
		pylonWeapon="uh60_rattler";
		mass=370;
	};
	class PylonRack_4rnd_RNLOS_uh60: agm117_uh60_4_NLOS
	{
		displayName="4x R-NLOS";
		hardpoints[]={"B_RATTLER_PYLON"};
		model="\UH-60\Misc\Weapons\M299\M299xRNLOS.p3d";
		pylonWeapon="uh60_rattler";
		mass=370;
	};
	class 1Rnd_Missile_AIM9X_ah96: VehicleMagazine
	{
		author="EricJ";
		scope=2;
		displayNameShort="AIM-9X";
		descriptionShort="AIM-9X";
		ammo="Missile_AIM9x_AA";
		count=1;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class PylonMissile_1Rnd_Missile_AIM9X_ah96: 1Rnd_Missile_AIM9X_ah96
	{
		DisplayName="AIM-9X";
		DisplayNameShort="AIM-9X";
		descriptionShort="AIM-9X";
		hardpoints[]=
		{
			"B_AIM9X_ah96"
		};
		model="\uh-60\Misc\Weapons\AIM9X\PylonPod_Missile_AIM9X_AA.p3d";
		mass=85;
		pylonWeapon="Missile_AIM9X_ah96_F";
	};
	class 1Rnd_Missile_AGM152_ah96: VehicleMagazine
	{
		author="EricJ";
		scope=2;
		displayNameShort="AGM-152C";
		descriptionShort="AGM-152C";
		ammo="EJ_ammo_Missile_AGM152";
		count=1;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class PylonRack_2Rnd_Missile_AGM152_ah96: 1Rnd_Missile_AGM152_ah96
	{
		Count=2;
		DisplayName="2x AGM-152C";
		DisplayNameShort="AGM-152C";
		descriptionShort="AGM-152C";
		hardpoints[]=
		{
			"B_AGM152_ah96"
		};
		model="\uh-60\Misc\Weapons\M299\M299xAGM152.p3d";
		mass=300;
		pylonWeapon="Missile_AGM152_ah96_F";
	};
	class 1Rnd_Missile_AGM145_ah96: VehicleMagazine
	{
		author="EricJ";
		scope=2;
		displayNameShort="AGM-145D";
		descriptionShort="AGM-145D";
		ammo="EJ_ammo_Missile_AGM145";
		count=1;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class PylonMissile_1Rnd_Missile_AGM145_ah96: 1Rnd_Missile_AGM145_ah96
	{
		DisplayName="AGM-145D";
		DisplayNameShort="AGM-145D";
		descriptionShort="AGM-145D";
		hardpoints[]=
		{
			"B_AGM145_ah96"
		};
		model="\uh-60\Misc\Weapons\AGM145\PylonPod_Missile_AGM145_AG.p3d";
		mass=125;
		pylonWeapon="Missile_AGM145_ah96_F";
	};
	class PylonPod_1Rnd_AGM145_ah96: 1Rnd_Missile_AGM145_ah96
	{
		DisplayName="AGM-145D";
		DisplayNameShort="AGM-145D";
		descriptionShort="AGM-145D";
		hardpoints[]=
		{
			"B_AGM145_Rail_ah96"
		};
		model="\uh-60\Misc\Weapons\AGM145\PylonPod_AGM145Railx1.p3d";
		mass=200;
		pylonWeapon="Missile_AGM145_ah96_F";
	};
	class magazine_Missiles_Cruise_01_x4: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Missile_Cruise_HE_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_HE_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_HE_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01";
		initSpeed=12;
		maxLeadSpeed=1.38889;
		count=4;
		nameSound="missiles";
	};
	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count=100;
		ammo = "ej_762m240";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound="mgun";
		descriptionShort = "100RND_M240";
	};
	class 1000Rnd_762x51_M134: VehicleMagazine
	{
		scope = 1;
		displayName = "1000rnd M134";
		count=1000;
		ammo = "ej_762m240";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound="mgun";
	};
	class PylonWeapon_M134_mq17: 1000Rnd_762x51_M134
	{
		displayName="M134";
		descriptionShort="M134";
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M134_MQ17.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]={"M134_mq17"};
		pylonWeapon="M134_mq17";
		selectionFireAnim="muzzleflash";
		mass=100;
	};
	class CA_Magazine;
	class kuy_IR_Jammer_Magazine: CA_Magazine
	{
		count=120;
		ammo="kuy_IR_Jammer_Ammo";
		initSpeed=30;
	};
	class 5000Rnd_762x51_Belt;
	class 5000Rnd_762x51_Belt_Red: 5000Rnd_762x51_Belt
	{
		count = 5000;
		ammo = "ej_762m240";
		displaynameshort = "7.62x51 mm";
		displayName = "7.62x51 mm";
		descriptionShort = "7.62x51 mm";
		weight = 180;
		tracersEvery=3;
		muzzleImpulseFactor[] = {+0.6,0.5};
	};
	class 3000Rnd_762x51_Belt_Red: 5000Rnd_762x51_Belt
	{
		count = 3000;
		ammo = "ej_762m240";
		displaynameshort = "7.62x51 mm";
		displayName = "7.62x51 mm";
		descriptionShort = "7.62x51 mm";
		weight = 180;
		tracersEvery=3;
		muzzleImpulseFactor[] = {+0.6,0.5};
	};
	class 2000Rnd_762x51_Belt_Red: 5000Rnd_762x51_Belt
	{
		count = 2000;
		ammo = "ej_762m240";
		displaynameshort = "7.62x51 mm";
		displayName = "7.62x51 mm";
		descriptionShort = "7.62x51 mm";
		weight = 180;
		tracersEvery=3;
		muzzleImpulseFactor[] = {+0.6,0.5};
	};
	class 750Rnd_M197_MH60: VehicleMagazine
	{
		author="EricJ";
		scope=2;
		displayName="M197";
		displayNameShort="M197";
		ammo = "ej_B_20mm_AP";
		count=750;
		initSpeed=1030;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class PylonWeapon_M197: 750Rnd_M197_MH60
	{
		displayName="M197";
		descriptionShort="M197";
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M197_MH60.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]={"M197_MH60S"};
		pylonWeapon="M197_MH60";
		selectionFireAnim="muzzleflash";
		mass=200;
	};
	class PylonWeapon_M197_r: 750Rnd_M197_MH60
	{
		displayName="M197";
		descriptionShort="M197";
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M197_MH60_r.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]={"M197_MH60S_r"};
		pylonWeapon="M197_MH60";
		selectionFireAnim="muzzleflash";
		mass=200;
	};
	class 1100Rnd_30_uh60: VehicleMagazine
	{
		scope = 1;
		displayName = "1100Rnd 30x113mm M789 HEDP";
		ammo="B_30x113mm_M789_HEDP";
		count=1100;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed=500;
		nameSound="cannon";
		airLock=1;
	};
	class PylonWeapon_M230: 1100Rnd_30_uh60
	{
		displayName="M230";
		descriptionShort="M230";
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M230_MH60.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]={"M230_uh60"};
		pylonWeapon="M230_uh60";
		selectionFireAnim="muzzleflash";
		mass=200;
	};
	class PylonWeapon_M230_R: 1100Rnd_30_uh60
	{
		displayName="M230";
		descriptionShort="M230";
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M230_MH60_R.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]={"M230_uh60_r"};
		pylonWeapon="M230_uh60";
		selectionFireAnim="muzzleflash";
		mass=200;
	};
	class M151_Magazine_uh60: VehicleMagazine
	{
		ammo="Hydra_base";
		displaynameshort="M151 HE";
		displayName="M151 HE";
		descriptionShort="M151 HE";
		weight=10.5;
	};
	class PylonRack_7Rnd_Rockets: M151_Magazine_uh60
	{
		displayName="M260 HE";
		count=7;
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		hardpoints[]=
		{
			"B_AH6_Rocket"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="M260_ah6_rockets";
		mass=100;
	};
	class PylonRack_19Rnd_Rockets: M151_Magazine_uh60
	{
		displayName="M261 HE";
		count=19;
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M261.p3d";
		hardpoints[]=
		{
			"B_MH60_Rocket"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="M261_uh60_rockets";
		mass=150;
	};
	class M255A1_Magazine_uh60: VehicleMagazine
	{
		ammo="M255A1_Ammo";
		displaynameshort="M255A1 FL";
		displayName="M255A1 Flechette";
		descriptionShort="M255A1 FL";
		weight=10.5;
	};
	class PylonRack_7Rnd_M255A1: M255A1_Magazine_uh60
	{
		displayName="M255A1 Flechette";
		count=7;
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		hardpoints[]=
		{
			"B_AH6_Rocket"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="M260_ah6_rockets";
		mass=100;
	};
	class M229_Magazine_uh60: VehicleMagazine
	{
		ammo="M229_Ammo";
		displaynameshort="M229 HE";
		displayName="M229 HE";
		descriptionShort="M229 HE";
		weight=10.5;
	};
	class PylonRack_7Rnd_M229: M229_Magazine_uh60
	{
		displayName="M229 HE";
		count=7;
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		hardpoints[]=
		{
			"B_AH6_Rocket"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="M260_ah6_rockets";
		mass=100;
	};
	class M261_Magazine_uh60: VehicleMagazine
	{
		ammo="M261_Ammo";
		displaynameshort="M261 MPSM";
		displayName="M261 MPSM";
		descriptionShort="M261 MPSM";
		weight=10.5;
	};
	class PylonRack_7Rnd_M261: M261_Magazine_uh60
	{
		displayName="M261 MPSM";
		count=7;
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		hardpoints[]=
		{
			"B_AH6_Rocket"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="M260_ah6_rockets";
		mass=100;
	};
	class PylonFuelTank_ah96: VehicleMagazine
	{
		scope=2;
		ammo="DummyPylonAmmo";
		displayName="Fuel Tank";
		mass=200;
		count=1;
		initSpeed=0;
		sound[]={};
		reloadSound[]={};
		nameSound="";
		model="UH-60\Misc\Weapons\Fuel\PylonPod_Fuel_AH96.p3d";
		pylonweapon="Pylon_DummyLauncher_ah96";
		hardpoints[]=
		{
			"B_FUELTANK_HELI_AH96"
		};
	};
	class 8Rnd_82mm_Mo_Flare_white_illumination;
	class 16Rnd_105mm_Illum_white: 8Rnd_82mm_Mo_Flare_white_illumination
	{
		count=16;
		author="$STR_A3_Bohemia_Interactive";
		ammo="Flare_105mm_AMOS_White_Illumination";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_illumination0";
		displayNameShort="$STR_A3_CfgMagazines_FlareWhite_Illumination_F_dns";
		initSpeed=520;
	};
	class VehicleMagazine;
	class magazine_Missiles_Cruise_01_x4: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Missile_Cruise_HE_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_HE_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_HE_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01";
		initSpeed=12;
		maxLeadSpeed=1.38889;
		count=4;
		nameSound="missiles";
	};
	class 8Rnd_82mm_Mo_shells;
	class 100rd_105mm_Shells: 8Rnd_82mm_Mo_shells
	{
		author="EricJ";
		displayName="105mm HE Shells";
		displayNameShort="HE";
		count=100;
		ammo="105mm_HE";
		muzzleImpulseFactor[]={0,0};
		initSpeed=520;
	};
	class 32Rnd_105mm_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author="EricJ";
		count=32;
		ammo="Flare_105mm_White";
		displayName="White Flare";
		displayNameShort="Flare";
		initSpeed=520;
	};
	class 32Rnd_105mm_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author="EricJ";
		count=32;
		ammo="Smoke_105mm_White";
		displayName="White Smoke";
		displayNameShort="Smoke";
		initSpeed=520;
	};
	class 32Rnd_105mm_Guided: 8Rnd_82mm_Mo_shells
	{
		author="EricJ";
		count=32;
		ammo="105mm_Guided";
		displayName="Guided Round";
		displayNameShort="Guided";
		initSpeed=500;
	};
	class 12Rnd_230mm_rockets;
	class 2Rnd_ATACMS_rockets: 12Rnd_230mm_rockets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="ATACMS";
		displayNameMFDFormat="AG";
		ammo="R_ATACMS_HE";
		initSpeed=850;
		count=2;
	};

};

class SensorTemplateIR;
class SensorTemplateDataLink;
class SensorTemplateAntiRadiation;

class CfgAmmo
{
	class Default;
	class RocketCore;
	class MissileBase;
	class Missile_AA_04_F;
	class Missile_AGM_02_F: MissileBase
	{
		class Components;
	};
	class GrenadeBase;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class B_9x21_Ball;
	class B_762x51_Ball;
	class B_30mm_HE;
	class B_20mm;
	class FlareCore;
	class ShotDeployBase;
	class Sh_155mm_AMOS;
	class SubmunitionBase;
	class Flare_82mm_AMOS_White;
	class R_ATACMS_HE: SubmunitionBase
	{
		artilleryLock=1;
		cost=500;
		airFriction=0;
		muzzleEffect="";
		effectFly="Missile0";
		model = "\uh-60\Misc\Weapons\ATACMS\ej_ATACMS_fly.p3d";
		proxyShape = "\uh-60\Misc\Weapons\ATACMS\ej_ATACMS.p3d";
		hit=3000;
		indirecthit=1500;
		indirectHitRange=200;
		class CamShakeExplode
		{
			power=46;
			duration=3;
			frequency=20;
			distance=361.32599;
		};
		class CamShakeHit
		{
			power=230;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.89432;
			duration=3;
			frequency=20;
			distance=121.326;
		};
		class CamShakePlayerFire
		{
			power=5;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			0.56234133,
			1.9,
			500
		};
	};
	class Flare_105mm_AMOS_White_Illumination: Flare_82mm_AMOS_White
	{
		affectedByWind=1;
		flareAirFriction=-1.1;
		timeToLive=80;
		intensity=54000;
		typicalSpeed=800;
		smokeColor[]={1,1,1,0.30000001};
		class Attenuation
		{
			start=15;
			constant=0.1;
			linear=0.1;
			quadratic=0.02;
		};
	};
	class 105mm_HE: Sh_155mm_AMOS
	{
		hit=200;
		indirectHit=67;
		indirectHitRange=50;
		cost=200;
		muzzleEffect="";
		typicalSpeed=800;
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class Flare_105mm_White: FlareCore
	{
		timeToLive=45;
		model="\A3\weapons_f\ammo\shell";
		effectFlare="CounterMeasureFlare";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[]={0.94999999,0.94999999,1,0.5};
		smokeColor[]={1,1,1,0.5};
		intensity=15000;
	};
	class Smoke_105mm_White: ShotDeployBase
	{
		model="\A3\weapons_f\ammo\shell";
		submunitionAmmo="SmokeShellArty";
	};
	class 105mm_guided: SubmunitionBase
	{
		submunitionAmmo="M_Mo_82mm_AT";
		submunitionCount=1;
		submunitionConeAngle=0;
		laserLock=1;
		autoSeekTarget=1;
		cost=200;
		muzzleEffect="";
		triggerDistance=300;
		airFriction=0;
		hit=200;
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ammo_Missile_AntiRadiationBase;
	class EJ_ammo_Missile_AGM152: ammo_Missile_AntiRadiationBase
	{
			model = "\uh-60\Misc\Weapons\AGM152\Missile_AGM152_fly.p3d";
			proxyShape = "\uh-60\Misc\Weapons\AGM152\Missile_AGM152.p3d";
			maverickWeaponIndexOffset = 0;
			cost = 1000;
			hit = 850;
			indirectHit = 60;
			missileLockCone = 50;
			missileKeepLockedCone = 60;
			missileLockMaxDistance = 10000;
			missileLockMinDistance = 150;
			missileLockMaxSpeed = "130/3.6";
			maxControlRange = 10000;
			cmImmunity = 0.5;
			class LoalDistance
			{
				lockSeekDistanceFromParent = 150;
			};
			class Components: Components
			{
				class SensorsManagerComponent
				{
					class Components
					{
						class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
						{
							class AirTarget
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableATL = 50;
							maxTrackableSpeed = "130/3.6";
							angleRangeHorizontal = 45;
							angleRangeVertical = 45;
						};
					};
				};
			};
			thrust = 250;
			thrustTime = 6;
			airFriction = 0.14;
			sideAirFriction = 0.2;
			maxSpeed = 920;
			maneuvrability = 36;
			simulationStep = 0.002;
			fuseDistance = 500;
			timeToLive = 30;
			trackLead = 0.9;
			trackOversteer = 1;
			craterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			effectsMissileInit = "PylonBackEffects";
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			whistleDist = 8;
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1, 1500};
			class Hiteffects
			{
				hitWater = "ImpactEffectsSmall";
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class EJ_ammo_Missile_AGM145: ammo_Missile_AntiRadiationBase
	{
			model = "\uh-60\Misc\Weapons\AGM145\Missile_AGM145_fly.p3d";
			proxyShape = "\uh-60\Misc\Weapons\AGM145\Missile_AGM145.p3d";
			maverickWeaponIndexOffset = 0;
			cost = 1000;
			hit = 750;
			indirectHit = 35;
			missileLockCone = 30;
			missileKeepLockedCone = 45;
			missileLockMaxDistance = 8000;
			missileLockMinDistance = 150;
			missileLockMaxSpeed = "130/3.6";
			maxControlRange = 8000;
			cmImmunity = 0.5;
			class LoalDistance
			{
				lockSeekDistanceFromParent = 150;
			};
			class Components: Components
			{
				class SensorsManagerComponent
				{
					class Components
					{
						class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
						{
							class AirTarget
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget
							{
								minRange = 8000;
								maxRange = 8000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableATL = 50;
							maxTrackableSpeed = "130/3.6";
							angleRangeHorizontal = 45;
							angleRangeVertical = 45;
						};
					};
				};
			};
			thrust = 220;
			thrustTime = 5;
			airFriction = 0.14;
			sideAirFriction = 0.2;
			maxSpeed = 920;
			maneuvrability = 36;
			simulationStep = 0.002;
			fuseDistance = 500;
			timeToLive = 30;
			trackLead = 0.9;
			trackOversteer = 1;
			craterEffects = "ATRocketCrater";
			explosionEffects = "ATRocketExplosion";
			effectsMissileInit = "PylonBackEffects";
			muzzleEffect = "";
			soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
			soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
			soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
			multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
			whistleDist = 8;
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1, 1500};
			class Hiteffects
			{
				hitWater = "ImpactEffectsSmall";
			};
			SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class ej_B_20mm_AP: B_20mm
	{
		hit = 61.24248654;
		indirectHit = 15;
		indirectHitRange = 3;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000633942;
		caliber = 2.33;
	};
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit=70.39157703;
		indirectHit=15;
		indirectHitRange=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		airFriction = -0.0010785541;
		caliber=1.242236025;
		allowAgainstInfantry=1;
	};
	class Hydra_base: MissileBase
	{
		cost = 75;
		hit=220;
		indirectHit=30;
		indirectHitRange=10;
		manualControl = 0;
		maxControlRange = 0;
		maneuvrability = 0;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 0;
		cmimmunity = 1;
		aiAmmoUsageFlags = "64+128";
		suppressionRadiusHit = 15;
		dangerRadiusHit = 40;
		initTime = 0.02;
		maxSpeed=700;
		thrustTime=1.07;
		thrust = 1060;
		fuseDistance = 75;
		airFriction = 0.1;
		sideAirFriction = 0.005;
		timeToLive=15;
		whistleDist=24;
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		class CamShakeExplode
		{
			power = 16;
			duration = 1.8;
			frequency = 20;
			distance = 191.554;
		};
		class CamShakeHit
		{
			power = 80;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.9907;
			duration = 1.8;
			frequency = 20;
			distance = 71.5542;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M255A1_Ammo: Hydra_base
	{
		maxSpeed=600;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		submunitionAmmo="M255_Flechette";
		submunitionConeType[]=
		{
			"randomcenter",
			100
		};
		submunitionConeAngle=12;
		triggerTime=1;
		triggerSpeedCoef=1;
		soundHit1[]=
		{
			"A3\sounds_f\dummysound",
			2.5118864,
			1,
			5
		};
		multiSoundHit[]=
		{
			"soundHit1",
			1
		};
		CraterEffects="ATMissileCrater";
		explosionEffects="";
		aiAmmoUsageFlags=1;
		class CamShakeExplode
		{
			power=1;
			duration=1;
			frequency=20;
			distance=5;
		};
	};
	class M255_Flechette: B_9x21_Ball
	{
		hit=10;
		indirectHit=6;
		indirectHitRange=4;
		deflecting=0;
		cost=1;
	};
	class M229_Ammo: Hydra_base
	{
		indirectHitRange=15;
		suppressionRadiusHit=20;
	};
	class M261_Ammo: Hydra_base
	{
		maxSpeed=600;
		hit=30;
		indirectHit=5;
		indirectHitRange=5;
		submunitionAmmo="M261_SM";
		submunitionConeType[]=
		{
			"randomcenter",
			9
		};
		submunitionConeAngle=2;
		triggerTime=1;
		triggerSpeedCoef=0.69999999;
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class M261_SM: GrenadeBase
	{
		simulation="shotShell";
		model="\A3\weapons_f\ammo\UGL_slug";
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		explosionSoundEffect="DefaultExplosion";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		hit=300;
		indirectHit=70;
		indirectHitRange=20;
		visibleFire=1;
		audibleFire=30;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=30;
		explosive=1;
		cost=10;
		deflecting=0;
		airFriction=-0.001;
		fuseDistance=0.5;
		whistleDist=16;
		typicalSpeed=300;
		caliber=3.7;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=7.7459698;
			duration=1.6;
			frequency=20;
			distance=23.2379;
		};
		class CamShakeHit
		{
			power=60;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.5148699;
			duration=1.2;
			frequency=20;
			distance=50.596401;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class Missile_AIM9x_AA: Missile_AA_04_F
	{
		model="\uh-60\Misc\Weapons\AIM9x\Missile_AIM9X_AA_fly.p3d";
		proxyShape="\uh-60\Misc\Weapons\AIM9x\Missile_AIM9X_AA.p3d";
		hit=160;
		indirectHit=80;
		indirectHitRange=14;
		proximityExplosionDistance=19;
		maneuvrability=50;
		simulationStep=0.001;
		airLock=2;
		irLock=1;
		cost=1500;
		maxSpeed=1029;
		timeToLive=35;
		sideAirFriction=0.2;
		trackOversteer=0.94999999;
		trackLead=0.75;
		initTime=0;
		thrustTime=3;
		thrust=390;
		fuseDistance=300;
		explosionAngle=60;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		whistleDist=20;
		cmImmunity=0.95999998;
		missileLockMaxDistance=8000;
		missileLockMinDistance=300;
		missileLockMaxSpeed=555;
		missileLockCone=180;
		missileKeepLockedCone=180;
		weaponLockSystem="2 + 16";
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
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=-1;
						angleRangeHorizontal=120;
						angleRangeVertical=120;
						groundNoiseDistanceCoef=0.029999999;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=555;
						minTrackableATL=20;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};
	class Rattler_AT_NLOS: MissileBase
	{
			cameraViewAvailable = 1;
			model = "\UH-60\Misc\Weapons\AGM117\AGM117.p3d";
			hit = 130;
			indirectHit = 100;
			indirectHitRange = 10;
			explosive = 1;
			warheadName = "TandemHEAT";
			triggerOnImpact = 1;
			deleteParentWhenTriggered = 0;
			timeToLive = 205;
			initTime = 0.01;
			thrustTime = 200;
			thrust = 35;
			airFriction = 0.45;
			sideAirFriction = 1;
			maxSpeed = 194.444;
			maneuvrability = 16;
			trackOversteer = 1.5;
			trackLead = 0.9;
			fuseDistance = 300;
			cost = 1000;
			weaponLockSystem = "4 + 16";
			aiAmmoUsageFlags = "128 + 512";
			cmImmunity = 1;
			muzzleEffect = "";
			dangerRadiusHit = 200;
			suppressionRadiusHit = 20;
			effectsMissile = "missile2";
			effectsMissileInit = "RocketBackEffectsStaticRPG";
			CraterEffects = "ATMissileCrater";
			whistleDist = 4;
			explosionEffects = "ATMissileExplosion";
			autoSeekTarget = 0;
			lockSeekRadius = 1500;
			missileLockCone = 360;
			missileKeepLockedCone = 360;
			missileLockMaxSpeed = 35;
			missileLockMaxDistance = 32000;
			missileLockMinDistance = 50;
			flightProfiles[] = {"Cruise"};
			class Cruise
			{
				preferredFlightAltitude = 200;
				lockDistanceToTarget = 500;
			};
			class Components
			{
				class SensorsManagerComponent
				{
					class Components
					{
						class DataLinkSensorComponent: SensorTemplateDataLink
						{
							class AirTarget
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							class GroundTarget
							{
								minRange = 10000;
								maxRange = 10000;
								objectDistanceLimitCoef = -1;
								viewDistanceLimitCoef = -1;
							};
							maxTrackableSpeed = 35;
						};
					};
				};
			};
			class CamShakeExplode
			{
				power = 11;
				duration = 1.4;
				frequency = 20;
				distance = 91.3296;
			};
			class CamShakeHit
			{
				power = 110;
				duration = 0.6;
				frequency = 20;
				distance = 1;
			};
			class CamShakeFire
			{
				power = 2.78316;
				duration = 1.6;
				frequency = 20;
				distance = 61.9677;
			};
			class CamShakePlayerFire
			{
				power = 3;
				duration = 0.1;
				frequency = 20;
				distance = 1;
			};
	};
	class M_Hellfire_AT: MissileBase
	{
		hit=350;
		indirectHit=50;
		indirectHitRange=4;
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Scalpel";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_02",
			0.89125091,
			1,
			1900
		};
		model = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire.p3d";
		proxyShape = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire_proxy";
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		whistleDist=8;
		maneuvrability=15;
		simulationStep=0.0020000001;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		nvLock=1;
		laserLock=1;
		cost=300;
		maxSpeed=450;
		timeToLive=28;
		airFriction=0.103;
		sideAirFriction=0.18000001;
		trackLead=1;
		trackOversteer=1.5;
		initTime=0;
		thrustTime=3.5;
		thrust=168;
		fuseDistance=500;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		class Hiteffects
		{
			hitWater="ImpactEffectsSmall";
		};
		cameraViewAvailable=1;
		airLock=0;
		missileLockCone=30;
		missileKeepLockedCone=60;
		missileLockMaxDistance=6000;
		missileLockMinDistance=250;
		missileLockMaxSpeed=55;
		weaponLockSystem="2 + 4 + 16";
		cmImmunity=0.44999999;
		manualControl=1;
		maxControlRange=6000;
		missileManualControlCone=120;
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			0.56234133,
			1.5,
			700
		};
		flightProfiles[]=
		{
			"TopDown"
		};
		class TopDown
		{
			ascendHeight=400;
			descendDistance=800;
			minDistance=800;
			ascendAngle=20;
		};
		class ace_missileguidance
		{
        		manualControl = 0;
			enabled = 1;
			pitchRate = 30;
	                yawRate = 30;
		        canVanillaLock = 0;
	                defaultSeekerType = "SALH"; // Default seeker type
                        seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };
 
                        defaultSeekerLockMode = "LOAL"; // Default lock mode
                        seekerLockModes[] = { "LOAL", "LOBL" };

                        defaultNavigationType = "Direct"; // Default navigation type
                        navigationTypes[] = { "Direct", "ZeroEffortMiss" };
                        seekLastTargetPos = 1;
                        seekerAngle = 70;
                        seekerAccuracy = 1;
		
                        seekerMinRange = 1;
                        seekerMaxRange = 8000;
                        defaultAttackProfile = "hellfire"; // Default attack profile
                        attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
	
                        class navigationStates 
			{
                                  class initial {
                                  transitionCondition = "my_fnc_navigationTransition";
                                  navigationType = "Direct";
                        };
                        class terminal 
			{
                                   transitionCondition = "";
                                   navigationType = "ZeroEffortMiss";
                         };
                 
                        states[] = {"initial", "terminal"};
                     };
                };
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=55;
						angleRangeHorizontal=90;
						angleRangeVertical=70;
					};
				};
			};
		};
	};
	class M_Rattler_AT: MissileBase
	{
		hit=450;
		indirectHit=50;
		indirectHitRange=4;
		warheadName="TandemHEAT";
		submunitionAmmo="ammo_Penetrator_Scalpel";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_02",
			0.89125091,
			1,
			1900
		};
		model = "\UH-60\Misc\Weapons\AGM117\AGM117.p3d";
		proxyShape = "\UH-60\Misc\Weapons\AGM117\AGM117_proxy";
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		whistleDist=8;
		maneuvrability=15;
		simulationStep=0.0020000001;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		nvLock=1;
		laserLock=1;
		cost=300;
		maxSpeed=450;
		timeToLive=28;
		airFriction=0.103;
		sideAirFriction=0.18000001;
		trackLead=1;
		trackOversteer=1.5;
		initTime=0;
		thrustTime=3.5;
		thrust=168;
		fuseDistance=500;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		class Hiteffects
		{
			hitWater="ImpactEffectsSmall";
		};
		cameraViewAvailable=1;
		airLock=0;
		missileLockCone=30;
		missileKeepLockedCone=60;
		missileLockMaxDistance=6000;
		missileLockMinDistance=250;
		missileLockMaxSpeed=55;
		weaponLockSystem="2 + 4 + 16";
		cmImmunity=0.44999999;
		manualControl=1;
		maxControlRange=6000;
		missileManualControlCone=120;
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			0.56234133,
			1.5,
			700
		};
		flightProfiles[]=
		{
			"TopDown"
		};
		class TopDown
		{
			ascendHeight=400;
			descendDistance=800;
			minDistance=800;
			ascendAngle=20;
		};
		class ace_missileguidance
		{
        		manualControl = 0;
			enabled = 1;
			pitchRate = 30;
	                yawRate = 30;
		        canVanillaLock = 0;
	                defaultSeekerType = "SALH"; // Default seeker type
                        seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };
 
                        defaultSeekerLockMode = "LOAL"; // Default lock mode
                        seekerLockModes[] = { "LOAL", "LOBL" };

                        defaultNavigationType = "Direct"; // Default navigation type
                        navigationTypes[] = { "Direct", "ZeroEffortMiss" };
                        seekLastTargetPos = 1;
                        seekerAngle = 70;
                        seekerAccuracy = 1;
		
                        seekerMinRange = 1;
                        seekerMaxRange = 8000;
                        defaultAttackProfile = "hellfire"; // Default attack profile
                        attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
	
                        class navigationStates 
			{
                                  class initial {
                                  transitionCondition = "my_fnc_navigationTransition";
                                  navigationType = "Direct";
                        };
                        class terminal 
			{
                                   transitionCondition = "";
                                   navigationType = "ZeroEffortMiss";
                         };
                 
                        states[] = {"initial", "terminal"};
                     };
                };
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=55;
						angleRangeHorizontal=90;
						angleRangeVertical=70;
					};
				};
			};
		};
	};
	class ej_762m240: B_762x51_Ball
	{
		hit=10.119186;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=3;
		audibleFire=45;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=800;
		caliber=1.6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
		airFriction=-0.001;
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class kuy_IR_Jammer_Ammo: BulletBase
	{
		muzzleEffect="BIS_fnc_effectFiredSmokeLauncher";
		effectsSmoke="EmptyEffect";
		weaponLockSystem="1 + 2 + 4";
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=10;
		thrustTime=10;
		airFriction=-0.1;
		simulation="shotCM";
		model="\A3\weapons_f\empty";
		maxControlRange=-1;
		initTime=2;
		aiAmmoUsageFlags="4 + 8";
	};
};

class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAGM117: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM117\AGM117";
		simulation = "maverickweapon";
	};
	class ProxyPylonRack_2rnd_Hellfire_uh60: proxyWeapon
	{		
		model="\UH-60\Misc\Weapons\M299\M299x2h.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_4rnd_Hellfire_uh60: proxyWeapon
	{
		model = uh-60\Misc\Weapons\M299\M299.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonPod_1Rnd_AGM145_ah96: proxyWeapon
	{
		model = uh-60\Misc\Weapons\AGM145\PylonPod_AGM145Railx1.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_1rnd_Rattler_uh60: proxyWeapon
	{
		model = uh-60\Misc\Weapons\M299\M299xR_1rnd.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_2rnd_Rattler_uh60: proxyWeapon
	{
		model = uh-60\Misc\Weapons\M299\M299x2.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_4rnd_Rattler_uh60: proxyWeapon
	{
		model = uh-60\Misc\Weapons\M299\M299xR.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_4rnd_RNLOS_uh60: proxyWeapon
	{
		model = UH-60\Misc\Weapons\M299\M299xRNLOS.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonMissile_1Rnd_Missile_AIM9X_ah96: proxyWeapon
	{
		model = \uh-60\Misc\Weapons\AIM9X\PylonPod_Missile_AIM9X_AA.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonWeapon_M197: proxyWeapon
	{
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M197_MH60.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonWeapon_M197_r: proxyWeapon
	{
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M197_MH60_r.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonWeapon_M230: proxyWeapon
	{
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M230_MH60.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonWeapon_M230_R: proxyWeapon
	{
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M230_MH60_R.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonWeapon_M134_mq17: proxyWeapon
	{
		model="\uh-60\Misc\Weapons\Guns\PylonPod_M134_MQ17.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_7Rnd_Rockets: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_7Rnd_M255A1: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_7Rnd_M229: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_7Rnd_M261: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M260.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_19Rnd_Rockets: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\RocketPods\PylonPod_RocketPod_M261.p3d";
		simulation = pylonpod;
	};
	class proxyMissile_AGM145: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM145\Missile_AGM145.p3d";
		simulation = "maverickweapon";
	};
	class proxyMissile_AGM152: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM152\Missile_AGM152.p3d";
		simulation = "maverickweapon";
	};
	class ProxyPylonRack_2Rnd_Missile_AGM152_ah96: proxyWeapon
	{
		model = \uh-60\Misc\Weapons\M299\M299xAGM152.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_1rnd_Hellfire_uh60: proxyWeapon
	{
		model = UH-60\Misc\Weapons\M299\M299_1rndH.p3d;
		simulation = pylonpod;
	};
	class ProxyPylonRack_2rnd_Hellfire_AH6: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\M299\M299x2ah6.p3d";
		simulation = pylonpod;
	};
	class ProxyPylonRack_1rnd_Hellfire_AH6: proxyWeapon
	{
		model="\UH-60\Misc\Weapons\M299\M299x2ah61.p3d";
		simulation = pylonpod;
	};
};