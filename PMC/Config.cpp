class CfgPatches
{
	class Ej_Units_PMC
	{
		units[] = {"RWG_Helipilot_F","RWG_Helicrew_F","CIV_Helipilot_F","RWG_Repair_F","Raven_Offroad_01_F"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

class CfgVehicles
{
	class I_helipilot_F;
	class RWG_Helipilot_F: I_helipilot_F
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
		author="Flanker562";
		faction="RWG";
		_generalMacro="RWG_Helipilot_F";
		scope=2;
		side=2;
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[]={3,1};
		uniformClass="U_B_RWGPilotCoveralls";
		displayName="Raven Helicopter Pilot";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]={"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[]={"SMG_01_Holo_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		role="Crewman";
	};
	class RWG_Helicrew_F: I_helipilot_F
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
		author="Flanker562";
		faction="RWG";
		_generalMacro="RWG_Helicrew_F";
		scope=2;
		side=2;
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[]={3,1};
		uniformClass="U_B_RWGPilotCoveralls";
		displayName="Raven Helicopter Crew";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]={"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[]={"SMG_01_Holo_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		role="Crewman";
	};
	class CIV_Helipilot_F: I_helipilot_F
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
		author="Flanker562";
		faction="CIV_F";
		_generalMacro="CIV_Helipilot_F";
		scope=2;
		side=3;
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		uniformClass="U_B_HeliPilotCoveralls";
		displayName="Civilian Helicopter Pilot";
		linkedItems[]=
		{
			"H_Headset_white_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"H_Headset_white_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[]={"Throw","Put"};
		respawnWeapons[]={"Throw","Put"};
		magazines[]=
		{
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		role="Crewman";
	};
	class I_Soldier_repair_F;
	class RWG_repair_F: I_Soldier_repair_F
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
		author="Flanker562";
		faction="RWG";
		_generalMacro="RWG_Helipilot_F";
		scope=2;
		side=2;
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[]={3,1};
		uniformClass="U_B_RWGPilotCoveralls";
		displayName="Raven Repair Tech";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_HelmetSpecB_paint2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_HelmetSpecB_paint2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]={"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[]={"SMG_01_Holo_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		role="Crewman";
	};
	class C_Offroad_01_repair_F;
	class Raven_Offroad_01_F: C_Offroad_01_repair_F
	{
		dlc=u100;
		scope=2;
		side=2;
		Displayname="Raven PMC Repair Truck";
		faction="RWG";
		forceInGarage=1;
		crew="RWG_Repair_F";
		author="Flanker562";
		class textureSources
		{
			class Raven
			{
				displayName="Raven";
				author="Flanker562";
				textures[]={"\UH-60\data\offroad_Raven_co.paa","\UH-60\data\offroad_Raven_co.paa"};
				factions[]={"RWG"};
			};
		};
		textureList[]={"Raven",1};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
};
