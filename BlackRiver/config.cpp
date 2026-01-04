#include "basicdefines_A3.hpp"

class CfgPatches
{
	class blackriverpmc
	{
		units[]={"BRPMC_UAV_F","BRPMC_UGV","BRMPC_PO30","BRPMC_Soldier","BRPMC_LMG","BRPMC_Sniper","BRPMC_SLeader","BRPMC_Helicrew","BRPMC_Pilot"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Structures_F"};
	};
};

class CfgVehicles
{
	class O_Heli_Light_02_dynamicLoadout_F;
	class BRMPC_PO30: O_Heli_Light_02_dynamicLoadout_F
	{
		author="Flanker562";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Heli_Light_02_dynamicLoadout_F.jpg";
		_generalMacro="BRMPC_PO30";
		scope=2;
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		displayName = PO-30 (Black River PMC);
		side=0;
		faction="BRPMC";
		crew="BRPMC_Pilot";
		accuracy=1.5;
		threat[]={0.80000001,1,0.80000001};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"BlackRiver",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"uh-60\data\Orca_BRMPC.paa"
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count=10;
				magazine="SmokeShellYellow";
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				count=14;
				magazine="30Rnd_9x21_Mag_SMG_02";
			};
			class _xx_SmokeShellPurple
			{
				count=10;
				magazine="SmokeShellPurple";
			};
			class _xx_FlareGreen_F
			{
				count=10;
				magazine="FlareGreen_F";
			};
			class _xx_FlareRed_F
			{
				count=10;
				magazine="FlareRed_F";
			};
			class _xx_FlareWhite_F
			{
				count=10;
				magazine="FlareWhite_F";
			};
			class _xx_FlareYellow_F
			{
				count=10;
				magazine="FlareYellow_F";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count=10;
				name="FirstAidKit";
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				count=2;
				name="ItemGPS";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon="ej_flaregun";
				count=2;
			};
			class _xx_SMG_05_F_ACO_IR_F
			{
				weapon="SMG_05_F_ACO_IR_F";
				count=2;
			};
		};
	};
	class B_Gen_soldier_F;
	class BRPMC_UAV_F: B_Gen_soldier_F
	{
		author="Flanker562";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_UAV_F.jpg";
		_generalMacro="O_soldier_UAV_F";
		scope=2;
		side=0;
		faction="BRPMC";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River UAV Operator";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"O_UavTerminal",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"O_UavTerminal",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		weapons[]={"arifle_SPAR_01_blk_IR_ACO_F","Throw","Put"};
		respawnWeapons[]={"arifle_SPAR_01_blk_IR_ACO_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		role="SpecialOperative";
		uavHacker=1;
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="O_UAV_01_backpack_F";
	};
	class BRPMC_Pilot: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_Pilot";
		scope=2;
		side=0;
		faction="BRPMC";
		role="Rifleman";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC Heli Pilot";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"SMG_05_F_ACO_IR_F","Throw","Put"};
		respawnWeapons[]={"SMG_05_F_ACO_IR_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="B_ViperLightHarness_blk_F";
	};
	class BRPMC_Helicrew: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_Pilot";
		scope=2;
		side=0;
		faction="BRPMC";
		role="Rifleman";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC Heli Crew";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"SMG_05_F","Throw","Put"};
		respawnWeapons[]={"SMG_05_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="B_ViperLightHarness_blk_F";
	};
	class BRPMC_Sniper: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_Soldier";
		scope=2;
		side=0;
		faction="BRPMC";
		role="Marksman";
		VehicleClass="Men";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC Sniper";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"arifle_SPAR_03_blk_IR_NS_F","Throw","Put"};
		respawnWeapons[]={"arifle_SPAR_03_blk_IR_NS_F","Throw","Put"};
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
		};
		respawnMagazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
		};
		cost=250000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="ej_sniperpack_BRPMC";
	};
	class BRPMC_Soldier: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_Soldier";
		scope=2;
		side=0;
		faction="BRPMC";
		role="Rifleman";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC Soldier";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"arifle_SPAR_01_blk_IR_ACO_F","Throw","Put"};
		respawnWeapons[]={"arifle_SPAR_01_blk_IR_ACO_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="ej_assaultpack_BRPMC";
	};
	class BRPMC_SLeader: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_SLeader";
		scope=2;
		side=0;
		faction="BRPMC";
		role="Rifleman";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC Squad Leader";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"arifle_SPAR_01_blk_IR_ERCO_F","Throw","Put"};
		respawnWeapons[]={"arifle_SPAR_01_blk_IR_ERCO_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=200000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="ej_assaultpack_BRPMC";
	};
	class BRPMC_LMG: B_Gen_Soldier_F
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
		_generalMacro="BRPMC_Soldier";
		scope=2;
		side=0;
		faction="BRPMC";
		role="MachineGunner";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="Black River PMC LMG";
		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Beret_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[]={"arifle_SPAR_02_blk_IR_ARCO_F","Throw","Put"};
		respawnWeapons[]={"arifle_SPAR_02_blk_IR_ARCO_F","Throw","Put"};
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		cost=200000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_B_GEN_Commander_F";
		backpack="ej_lmgpack_BRPMC";
	};
};

class CfgGroups
{
    class East
    {
        class BRPMC_G_F
        {
            name = "Black River PMC";
            class Infantry
            {
		name="Infantry";
                class BRPMC_Squad
                {
                    name = "Black River Infantry Squad";
                    side = 0;
                    faction = "BRPMC";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "BRPMC_SLeader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "BRPMC_Soldier";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "BRPMC_LMG";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "BRPMC_Sniper";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "BRPMC_Soldier";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "BRPMC_Sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "BRPMC_Soldier";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "BRPMC_LMG";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "BRPMC_UAV_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
          };
      };
  };
};