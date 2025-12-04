class CfgPatches
{
	class ej_ArtyContainer_uh60
	{
		requiredaddons[]={"A3_Static_F"};
		requiredversion=0.1;
		units[]={"ArtyContainer"};
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
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{class ViewOptics;};
		};
	};
	class ArtyContainer_base: StaticCannon
	{
		author="Flanker562";
		_generalMacro="ArtyContainer";
		scope=0;
		displayname="Light Howitzer Container";
		transportSoldier=0;
		cargoAction[]={"Mortar_Gunner"};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		picture="\UH-60\data\UI\Arty_Container_Icon.paa";
		icon="\UH-60\data\UI\CMC_01_icon_ca.paa";
		cost=200000;
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
				weapons[]={"mortar_105mm"};
				elevationMode=1;
				initCamElev=0;
				minCamElev=0;
				maxCamElev=75;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				discreteDistanceCameraPoint[]={"eye"};
				gunnerForceOptics=1;
				turretInfoType="RscWeaponRangeArtillery";
				discreteDistance[]={100,200,300,400,500,700,1000,1600,2000,2400,2800,3000,3400,3800,4000,4200,4600};
				memoryPointGunnerOptics="eye";
				discreteDistanceInitIndex=5;
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=55;
					initAngleY=0;
					minAngleY=-55;
					maxAngleY=55;
					initFov=0.17399999;
					minFov=0.0077777999;
					maxFov=0.14;
					visionMode[]={"Normal","NVG"};
				};
				minelev=-30;
				maxelev=80;
				magazines[]=
				{
					"50rd_105mm_Shells",
					"32Rnd_105mm_Smoke_white",
					"32Rnd_105mm_Guided",
					"32Rnd_105mm_Flare_white",
					"16Rnd_105mm_Illum_white"
				};
			};
		};
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
		model="uh-60\misc\ArtyContainer\Arty_Container.p3d";
		artilleryScanner=1;
		laserScanner=1;
		slingLoadCargoMemoryPoints[]={"SlingLoad01","SlingLoad02","SlingLoad03","SlingLoad04"};
	};
	class ArtyContainer: ArtyContainer_base
	{
		author="Flanker562";
		_generalMacro="ArtyContainer";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_support_Mort_F";
		availableForSupportTypes[]={"Artillery"};
	};
};
