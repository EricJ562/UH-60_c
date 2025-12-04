class CfgPatches
{
	class ej_Mortar_Container
	{
		requiredaddons[]={};
		requiredversion=0.1;
		units[]={"ej_Mortar_Container"};
		weapons[]={};
		magazines[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets{class MainTurret;};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{class ViewOptics;};
		};
	};
	class ej_Mortar_base: StaticMortar
	{
		author="Flanker562";
		_generalMacro="ej_Mortar_Base";
		scope=0;
		displayname="81mm Mortar Container";
		class Library{libTextDesc="$STR_A3_CfgVehicles_Mortar_01_Base_Library0";};
		transportSoldier=0;
		cargoAction[]={"Mortar_Gunner"};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		picture="\UH-60\data\UI\Mortar_01_ca.paa";
		icon="\UH-60\data\UI\CMC_01_icon_ca.paa";
		cost=200000;
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		accuracy=0.25;
		threat[]={1,0.30000001,0.1};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_f\Mortar_01\data\Mortar_01.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_damage.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction="Mortar_Gunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				weapons[]={"mortar_81mm"};
				elevationMode=1;
				initCamElev=0;
				minCamElev=-35;
				maxCamElev=35;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				discreteDistance[]={100,200,300,400,500,700,1000,1600,2000,2400,2800,3000,3400,3800,4000,4200,4600};
				discreteDistanceCameraPoint[]={"eye"};
				discreteDistanceInitIndex=5;
				turretInfoType="RscWeaponRangeArtillery";
				gunnerForceOptics=1;
				memoryPointGunnerOptics="eye";
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.17399999;
					minFov=0.0077777999;
					maxFov=0.14;
					visionMode[]={"Normal","NVG"};
				};
				minelev=-30;
				maxelev=85;
				magazines[]=
				{
					"56Rnd_82mm_Mo_shells",
					"16Rnd_82mm_Mo_Flare_white",
					"8Rnd_82mm_Mo_Smoke_white",
					"8rd_82mm_Laser_Shell",
					"16Rnd_82mm_Mo_Flare_white_illumination"
				};
			};
		};
		class Eventhandlers{fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation="particles";
				type="WeaponWreckSmoke";
				position="destructionEffect";
				intensity=1;
				interval=1;
				lifeTime=5;
			};
		};
		model="uh-60\Misc\MortarContainer\Mortar_Container.p3d";
		artilleryScanner=1;
		laserScanner=1;
		Armor=100;
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"uh-60\data\Container_MilCommon_co.paa"};
	};
	class ej_Mortar_Container: ej_Mortar_base
	{
		author="Flanker562";
		_generalMacro="Mortar_Container";
		scope=2;
		scopeCurator=2;
		crew="B_Soldier_F";
		side=1;
		faction="BLU_F";
		availableForSupportTypes[]={"Artillery"};
	};
};

class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 56Rnd_82mm_Mo_shells: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells0";
		displayNameShort="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count=56;
		ammo="Sh_82mm_AMOS";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
	};
	class 8Rnd_82mm_Mo_Flare_white;
	class 16Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_Flare_white
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Flare_82mm_AMOS_White";
		count=16;
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_dns";
	};
	class 8Rnd_82mm_Mo_Flare_white_illumination;
	class 16Rnd_82mm_Mo_Flare_white_illumination: 8Rnd_82mm_Mo_Flare_white_illumination
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Flare_82mm_AMOS_White_Illumination";
		count=16;
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_illumination0";
		displayNameShort="$STR_A3_CfgMagazines_FlareWhite_Illumination_F_dns";
	};
	class 8Rnd_82mm_Mo_shells;
	class 8rd_82mm_Laser_Shell: 8Rnd_82mm_Mo_shells
	{
		author="Flanker562";
		displayName=":82mm Laser Guided rounds";
		displayNameShort="Laser Guided";
		count=8;
		ammo="82mm_LG";
		initSpeed=200;
	};
};

class CfgAmmo
{
	class Sh_82mm_AMOS;
	class 82mm_LG: Sh_82mm_AMOS
	{
		hit=200;
		indirectHit=54;
		indirectHitRange=4;
		cost=200;
		muzzleEffect="";
		laserLock=1;
		irLock=0;
		caliber=3;
		class CamShakeExplode
		{
			power="(82*0.2)";
			duration="((round (82^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((18 + 82^0.5)*8)";
		};
		class CamShakeHit
		{
			power=82;
			duration="((round (82^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(82^0.25)";
			duration="((round (82^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((82^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
};