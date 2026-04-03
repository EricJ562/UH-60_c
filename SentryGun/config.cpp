class CfgPatches
{
	class A3_Static_F_HMG_02
	{
		addonRootClass="A3_Static_F";
		requiredAddons[]=
		{
			"A3_Static_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class HMG_M2;
	class HMG_M2_Mounted: HMG_M2
	{
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="MachineGunEject";
			};
			class effect3
			{
				positionName="case_eject_pos";
				directionName="case_eject_dir";
				effectName="MachineGunCartridge2";
			};
		};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class kj_sentry_base_F: StaticMGWeapon
	{
		author="Flanker562";
		mapSize=2.49;
		scope=0;
		class Armory
		{
			description="$STR_A3_CfgVehicles_HMG_02_Base_Armory0";
		};
		editorSubcategory="EdSubcat_Turrets";
		model="\uh-60\Misc\SentryGun\kj_sentrygun.p3d";
		picture="\A3\Static_F\HMG_02\Data\UI\icon_HMG_02_ca.paa";
		UiPicture="\A3\Static_F\HMG_02\Data\UI\icon_HMG_02_ca.paa";
		cost=150000;
		isUAV=1;
		getInAction="";
		getOutAction="";
		armor=30;
		selectionFireAnim = "muzzleFlash";
		explosionShielding=4;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"uh-60\data\container_blue_co.paa",
			"uh-60\data\m134_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F\HMG_02\Data\Static_m2.rvmat",
				"A3\Static_F\HMG_02\Data\Static_m2_damage.rvmat",
				"A3\Static_F\HMG_02\Data\static_destroyed.rvmat",
				"A3\Static_F\HMG_02\Data\m2_combined.rvmat",
				"A3\Static_F\HMG_02\Data\m2_combined_damage.rvmat",
				"A3\Static_F\HMG_02\Data\static_destroyed.rvmat"
			};
		};
		minTotalDamageThreshold=0.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				gunnerOpticsModel="A3\weapons_f\reticle\optics_empty";
				turretInfoType="RscOptics_Offroad_01";
				minElev=-5;
				maxElev=15;
				minTurn=-20;
				maxTurn=20;
				initTurn=0;
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=1;
				weapons[]=
				{
					"ej_M134_minigun"
				};
				magazines[]=
				{
					"5000Rnd_762x51_Belt_Red",
				};
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				hasGunner=1;
				forceHideGunner=1;
				gunnerforceoptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				gunnerOpticsShowCursor=0;
				gunnerOutOpticsShowCursor=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				canUseScanners=1;
				uavCameraGunnerPos="pos_gunner_view";
				uavCameraGunnerDir="pos_gunner_view_dir";
				memoryPointGunnerOptics="pos_gunner_view";
				selectionFireAnim="Muzzleflash";
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				optics=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
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
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};

			};
		};
		class AnimationSources
		{
			class Gatling_1{source="revolving";weapon=ej_M134_minigun;};
			class mainmuzzleflashhide
			{
				source="ammorandom";
				weapon="ej_M134_minigun";
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
	};
	class kj_sentrygun: kj_sentry_base_F
	{
		author="Flanker562";
		mapSize=3.1600001;
		scope=2;
		side=1;
		faction="TF160";
		crew="B_UAV_AI";
		Displayname="UA-57 Sentry Gun";
	};
};
