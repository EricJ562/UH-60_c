class CfgPatches
{
	class ej_MLRSContainer_uh60
	{
		requiredaddons[]={"A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
		requiredversion=0.1;
		units[]={"MLRSContainer"};
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
	class MLRSContainer_base: StaticCannon
	{
		author="EricJ";
		_generalMacro="ArtyContainer";
		scope=0;
		displayname="ATACMS Container";
		transportSoldier=0;
		cargoAction[]={"Mortar_Gunner"};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		picture="\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
		icon="\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
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
				initCamElev=0;
				minCamElev=0;
				maxCamElev=75;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				turretInfoType="RscWeaponRangeArtilleryAuto";
				gunnerForceOptics=1;
				discreteDistance[]={100,200,300,400,500,700,1000,1600,2000,2400,2800,3000,3400,3800,4000,4200,4600};
				memoryPointGunnerOptics="computer";
				discreteDistanceInitIndex=5;
				elevationMode=3;
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
				minElev=5;
				maxElev=66;
				initElev=10;
				maxCamElev=30;
				weapons[]={"rockets_ATACMS"};
				magazines[]={"2Rnd_ATACMS_rockets"};
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
		model="uh-60\misc\MLRSContainer\MLRS_Container.p3d";
		artilleryScanner=1;
		laserScanner=1;
		slingLoadCargoMemoryPoints[]={"SlingLoad01","SlingLoad02","SlingLoad03","SlingLoad04"};
	};
	class MLRSContainer: MLRSContainer_base
	{
		author="EricJ";
		_generalMacro="ArtyContainer";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_support_Mort_F";
		availableForSupportTypes[]={"Artillery"};
	};
};
