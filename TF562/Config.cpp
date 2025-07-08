class CfgPatches
{
	class Ej_TF562
	{
		units[] = {TF562_Offroad_01_B,B_GMV_HMG,TF562_TL,TF562_Medic,TF562_JTAC,TF562_Grenadier,TF562_Rifleman,TF562_Engineer,TF562_Sharpshooter,TF562_LMG,TF562_UAV,TF562_UGV_MULE};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

class CfgFactionClasses
{
	class TF562
	{
		displayName="Task Force 562";
		priority=1;
		side=0;
		icon="\uh-60\data\cfgfactionclasses_blackriver.paa";
	};
};
class CfgVehicleClasses
{
	class TF562{displayName="Task Force 562";};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class Viewgunner;
class SensorTemplateLaser;
class SensorTemplateNV;
class Components;
class Turrets;
class CargoTurret_02;
class CargoTurret_03;
class ViewOptics;
class MainTurret;
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

class CfgVehicles
{
	class B_G_Offroad_01_armed_F;
	class TF562_Offroad_01_B: B_G_Offroad_01_armed_F
	{
		scope=2;
		side=1;
		Displayname="TF562 Offroad";
		faction="TF562";
		crew="TF562_Rifleman";
		author="EricJ";
	};
	class B_LSV_01_armed_F;
	class B_GMV_HMG: B_LSV_01_armed_F
	{
		author="EricJ";
		_generalMacro="B_GMV_HMG";
		scope=2;
		scopeCurator=2;
		DLC="Expansion";
		side=1;
		faction="TF562";
		displayName="GMV (HMG)";
		crew="TF562_Rifleman";
		ReportRemoteTargets = 1;
		ReceiveRemoteTargets = 1;
		typicalCargo[]=
		{
			"TF562_Rifleman"
		};
		class TransportBackpacks
		{
			class _xx_ej_ej_lmgsparpack
			{
				backpack="ej_lmgsparpack";
				count=2;
			};
			class _xx_B_AssaultPack_rgr_ReconMedic
			{
				backpack="B_AssaultPack_rgr_ReconMedic";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=50;
				magazine="30Rnd_65x39_caseless_mag";
			};
			class _xx_Handgrenade
			{
				magazine="Handgrenade";
				count=20;
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2300;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
		  					maxTrackableSpeed = 70;
							animDirection = "mainGun";
							angleRangeHorizontal = 46;
							angleRangeVertical = 34;
						};
						class LaserSensorComponent: SensorTemplateLaser
						{
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components: Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoAirborneMiniMap";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class UAVDisplay
						{
							componentType = "UAVFeedDisplayComponent";
						};
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {2000, 1000, 8000, 4000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components: Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoAirborneMiniMap";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class UAVDisplay
						{
							componentType = "UAVFeedDisplayComponent";
						};
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {2000, 1000, 8000, 4000};
							resource = "RscCustomInfoSensors";
						};
				};
			};
		};
	};
	class B_UGV_01_F;
	class TF562_UGV_MULE: B_UGV_01_F
	{
		author="EricJ";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UGV_01_F.jpg";
		_generalMacro="TF562_UGV_MULE";
		scope=2;
		crew="B_UAV_AI";
		typicalCargo[]={"TF562_Rifleman"};
		side=1;
		faction="TF562";
		displayName="TF 562 MULE UGV";
		transportMaxBackpacks = 16;
		class TransportBackpacks
		{
			class _xx_ej_ej_lmgsparpack
			{
				backpack="ej_lmgsparpack";
				count=2;
			};
			class _xx_B_AssaultPack_rgr_ReconMedic
			{
				backpack="B_AssaultPack_rgr_ReconMedic";
				count=1;
			};
			class _xx_B_UAV_01_backpack_F
			{
				backpack="B_UAV_01_backpack_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=50;
				magazine="30Rnd_65x39_caseless_mag";
			};
			class _xx_Handgrenade
			{
				magazine="Handgrenade";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
		};
		transportMaxMagazines = 100;
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"\A3\Data_F\Vehicles\Turret_co.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
	};
	class B_recon_F;
	class TF562_TL: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_TL";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Team Leader";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"Laserbatteries"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"Laserbatteries"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Rifleman";
		detectSkill=80;
	};
	class TF562_Medic: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_Medic";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Medic";
		attendant=1;
		backpack="B_AssaultPack_rgr_ReconMedic";
		icon="iconManMedic";
		role="CombatLifeSaver";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		detectSkill=60;
	};
	class TF562_JTAC: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_JTAC";
		scope=2;
		side=1;
		class AttributeValues
		{
			ReportRemoteTargets = 1;
		};
		ReportRemoteTargets = 1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 JTAC";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"Laserbatteries"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"Laserbatteries"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="SecialOperative";
		detectSkill=85;
	};
	class TF562_Rifleman: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_Rifleman";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Rifleman";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Rifleman";
		detectSkill=70;
	};	
	class TF562_Grenadier: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_Grenadier";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Grenadier";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MXGL_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MXGL_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellRed",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellRed",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell"

		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Rifleman";
		detectSkill=70;
		backpack="B_Kitbag_mcamo";
	};
	class TF562_UAV: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_UAV";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 UAV Operator";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Rifleman";
		detectSkill=70;
		backpack="B_UAV_01_backpack_F";
	};
	class TF562_Engineer: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_TL";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Engineer";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MX_MK17_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		canDeactivateMines=1;
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Sapper";
		detectSkill=80;
		backpack="B_AssaultPack_rgr_ReconExp";
	};
	class TF562_Sharpshooter: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_Sharpshooter";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 Marksman";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_MXM_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[]=
		{
			"ej_MXM_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"laserbatteries"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"laserbatteries"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Marksman";
		detectSkill=80;
	};
	class TF562_LMG: B_recon_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_infantry_pilot_s"};
				speechPlural[]={"veh_infantry_pilot_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		author="EricJ";
		_generalMacro="TF562_LMG";
		scope=2;
		side=1;
		faction="TF562";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 562 LMG Gunner";
		backpack="ej_lmgsparpack";
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB_light_desert",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ej_PVS15D"
		};
		weapons[]=
		{
			"ej_SW_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_SW_S_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Rifleman";
		detectSkill=80;
	};
};

class CfgGroups
{
    class West
    {
        class TF562_G_F
        {
            name = "Task Force 562";
            class Infantry
            {
		name="Special Forces";
                class TF562_Squad
                {
                    name = "TF562 A-Team";
                    side = 1;
                    faction = "TF562";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "TF562_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "TF562_Engineer";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "TF562_JTAC";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "TF562_Sharpshooter";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "TF562_LMG";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "TF562_UAV";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                    class Unit9
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "PRIVATE";
                        position[] = {25,-25,0};
                    };
                    class Unit10
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-25,-25,0};
                    };
                    class Unit11
                    {
                        side = 1;
                        vehicle = "TF562_Rifleman";
                        rank = "PRIVATE";
                        position[] = {30,-30,0};
                    };
                };
          };
      };
  };
};
