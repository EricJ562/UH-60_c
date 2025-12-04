class CfgPatches
{
	class Ej_MH80
	{
		units[] = {"B_LSV_01_Medic_F","B_LSV_01_Repair_F","B_LSV_01_Rearm_F","B_LSV_01_Refuel_F","160th_SOAR_Pilot","160th_SOAR_Crew","ej_MH80","ej_MH67","B_Helipilot_160_Early","B_helicrew_160_Early"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F_Exp","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

class Turrets;
class MainTurret;
class CopilotTurret;

class CfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_Multicam_ej: Uniform_Base
	{
		dlc=u100;
		author="Flanker562";
		scope=2;
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		displayName="Multicam Flight Suit";
		hiddenSelections[]={"camo","Insignia"};
		hiddenSelectionsTextures[]={"\uh-60\data\uniforms\mcamfs_co.paa"};
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="160th_SOAR_Pilot";
			containerClass="Supply60";
			mass=60;
		};
	};
};
class CfgVehicles
{
	class B_Helipilot_F;
	class B_Helipilot_160_Early: B_Helipilot_F
	{
		author="Flanker562";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_pilot_s"
				};
				speechPlural[]=
				{
					"veh_infantry_pilot_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Helipilot_F.jpg";
		scope=2;
		cost=160000;
		detectSkill=90;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_pilot"
		};
		modelSides[]={3,1};
		uniformClass="U_B_HeliPilotCoveralls";
		displayName="TF160 Pilot (Early)";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		weapons[]=
		{
			"SMG_05_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_05_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
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
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		role="Crewman";
		camouflage=2;
		faction="TF160";
	};
	class B_helicrew_160_Early: B_Helipilot_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_helicrew_F.jpg";
		_generalMacro="B_helicrew_F";
		displayName="TF160 Crew (Early)";
		modelSides[]={3,1};
		uniformClass="U_B_HeliPilotCoveralls";
		role="Crewman";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		weapons[]=
		{
			"SMG_05_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_05_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
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
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		faction="TF160";
	};
	class 160th_SOAR_Pilot: B_Helipilot_F
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
		_generalMacro="160th_SOAR_Pilot";
		scope=2;
		side=1;
		faction="TF160";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 160 SOAR PIlot";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"160th_ANVIS"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"160th_ANVIS"
		};
		weapons[]={"ej_MX_SA_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[]={"ej_MX_SA_F","hgun_ACPC2_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_Multicam_ej";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\Mcamfs_co.paa"};
		role="Crewman";
		detectSkill=90;
	};
	class 160th_SOAR_Crew: B_Helipilot_F
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
		_generalMacro="160th_SOAR_Crew";
		scope=2;
		side=1;
		faction="TF160";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 160 SOAR Crew";
		linkedItems[]=
		{
			"V_TacVest_blk",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"160th_ANVIS"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk",
			"H_CrewHelmetHeli_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"160th_ANVIS"
		};
		weapons[]={"ej_MX_SA_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[]={"ej_MX_SA_F","hgun_ACPC2_F","Throw","Put"};
		magazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		cost=160000;
		camouflage=2;
		modelSides[]={3,1};
		uniformClass="U_Multicam_ej";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\uh-60\Data\Uniforms\Mcamfs_co.paa"};
		role="Crewman";
		detectSkill=70;
	};
	class B_Soldier_F;
	class 160th_SOAR_Medic: B_Soldier_F
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
		_generalMacro="160th_SOAR_Medic";
		scope=2;
		side=1;
		faction="TF160";
		identityTypes[]={"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName="TF 160 SOAR Medic";
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
			"160th_ANVIS"
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
			"160th_ANVIS"
		};
		weapons[]=
		{
			"ej_MX_SA_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"ej_MX_SA_F",
			"Throw",
			"Put",
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"30Rnd_65x39_caseless_FMJBT",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
	class B_Heli_Transport_03_F;
	class ej_MH67: B_Heli_Transport_03_F
	{
		displayName="MH-67 Huron [TF 160]";
		author="Flanker562";
		vehicleClass="Air";
		side=1;
		scope=2;
		slingLoadMaxCargoMass=12700;
		receiveRemoteTargets=1;
		reportOwnPosition=1;
		forceInGarage=1;
		faction="TF160";
		washDownStrength="1.7f";
		class textureSources
		{
			class SOAR
			{
				displayName="SOAR";
				author="Flanker562";
				textures[]={"UH-60\data\Heli_Transport_03_SOAR_CO.paa","UH-60\data\Heli_Transport2_03_SOAR_CO.paa"};
				factions[]={"TF160"};
			};
		};
		weapons[]={"Flanker562_CMFlareLauncher"};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine"};
		textureList[]={"SOAR",1};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count=10;
				magazine="SmokeShellYellow";
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
		class TransportBackpacks
		{
			class _xx_ej_skram
			{
				backpack="ej_skram_SOAR";
				count=4;
			};
			class _xx_ej_speedball
			{
				backpack="ej_speedball";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count=20;
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
			class _xx_160th_ANVIS
			{
				count=2;
				name="160th_ANVIS";
			};
		};
	};
	class B_Heli_Transport_01_F;
	class ej_MH80: B_Heli_Transport_01_F
	{
		#include "sounds.hpp"
		author="Flanker562";
		_generalMacro="B_Heli_Transport_01_F";
		scope=2;
		side=1;
		Armor=50;
		ForceinGarage=1;
		faction="TF160";
		mainBladeRadius = 8.18;
		crew="160th_SOAR_Pilot";
		typicalCargo[]={"160th_SOAR_Pilot"};
		availableForSupportTypes[]={"Drop","Transport"};
		irtarget=0;
		cost=100;
		receiveRemoteTargets=1;
		reportOwnPosition=1;
		washDownStrength="1.2f";
		camouflage=18;
		radarTargetSize=0.39999999;
		hiddenSelectionsTextures[]={"\UH-60\Data\Heli_Transport_01_ext01_160th_CO.paa","\UH-60\Data\Heli_Transport_01_ext02_160th_CO.paa"};
		slingLoadMaxCargoMass=3800;
		displayName="MH-80 (TF160)";
		weapons[]={"Flanker562_CMFlareLauncher"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine"};

		class TransportBackpacks
		{
			class _xx_ej_skram_SOAR
			{
				backpack="ej_skram_SOAR";
				count=4;
			};
			class _xx_ej_speedball
			{
				backpack="ej_speedball";
				count=4;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count=10;
				magazine="SmokeShellYellow";
			};
			class _xx_30Rnd_65x39_caseless_FMJBT
			{
				count=14;
				magazine="30Rnd_65x39_caseless_FMJBT";
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
			class _xx_ej_160th_ANVIS
			{
				count=2;
				name="160th_ANVIS";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon="ej_flaregun";
				count=2;
			};
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				proxyIndex=3;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				weapons[]={"Flanker562_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[]={"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				gunnerCompartments="Compartment3";
				commanding=-3;
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				gunnerType="B_helicrew_F";
				minElev=-50;
				maxElev=2;
				initElev="--15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="Eye";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]={"LMG_Minigun_Transport"};
				magazines[]={"2000Rnd_65x39_Belt_Tracer_Red"};
				commanding=-2;
				primaryGunner=1;
				class ViewOptics
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
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
				playerPosition=3;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="mainTurret2";
				gun="mainGun2";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				proxyIndex=2;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]={"LMG_Minigun_Transport2"};
				magazines[]={"2000Rnd_65x39_Belt_Tracer_Red"};
				commanding=-3;
				gunBeg="muzzle_beg_2";
				gunEnd="muzzle_end_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="Eye2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerDoor="";
				turretCanSee="1 + 2 + 4 + 8 + 16";
			};
		};
	};
	class B_LSV_01_unarmed_F;
	class B_LSV_01_Rearm_F: B_LSV_01_unarmed_F
	{
		scope=2;
		ScopeCurator=2;
		displayname="Prowler (Ammo)";
		transportAmmo=1000000000000;
		supplyRadius=6;
		vehicleClass="Support";
		faction="TF160";
		Side=1;
		ForceInGarage=1;
		author="Flanker562";
        	hiddenSelectionsTextures[] = 
        	{
            		"\UH-60\Data\NATO_LSV_01_ammo_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
        	};
		class TextureSources
		{
			class LSVRearm
			{
				displayName="TF160 Ammo";
				author="Flanker562";
				textures[]=
				{
					"\UH-60\Data\NATO_LSV_01_ammo_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
				};
				factions[]=
				{
					"TF160"
				};
			};
		};
		textureList[]=
		{
			"LSVRearm",
			0,
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_FMJBT
			{
				count=12;
				magazine="30Rnd_65x39_caseless_FMJBT";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=12;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=4;
			};
		};
	};
	class B_LSV_01_Refuel_F: B_LSV_01_unarmed_F
	{
		scope=2;
		ScopeCurator=2;
		displayname="Prowler (Refuel)";
		transportFuel=1000000000000;
		supplyRadius=6;
		vehicleClass="Support";
		faction="TF160";
		Side=1;
        	hiddenSelectionsTextures[] = 
        	{
            		"\UH-60\Data\NATO_LSV_01_fuel_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
        	};
		class TextureSources
		{
			class LSVFuel
			{
				displayName="TF160 Fuel";
				author="Flanker562";
				textures[]=
				{
					"\UH-60\Data\NATO_LSV_01_fuel_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
				};
				factions[]=
				{
					"TF160"
				};
			};
		};
		ForceInGarage=1;
		author="Flanker562";
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_FMJBT
			{
				count=12;
				magazine="30Rnd_65x39_caseless_FMJBT";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=12;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=4;
			};
		};
	};
	class B_LSV_01_Repair_F: B_LSV_01_unarmed_F
	{
		scope=2;
		ScopeCurator=2;
		displayname="Prowler (Repair)";
		transportRepair=200000000;
		supplyRadius=6;
		vehicleClass="Support";
		faction="TF160";
		Side=1;
		ForceInGarage=1;
		author="Flanker562";
        	hiddenSelectionsTextures[] = 
        	{
            		"\UH-60\Data\NATO_LSV_01_repair_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
        	};
		class TextureSources
		{
			class LSVFuel
			{
				displayName="TF160 Fuel";
				author="Flanker562";
				textures[]=
				{
					"\UH-60\Data\NATO_LSV_01_repair_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
				};
				factions[]=
				{
					"TF160"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_FMJBT
			{
				count=12;
				magazine="30Rnd_65x39_caseless_FMJBT";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=12;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=4;
			};
		};
	};
	class B_LSV_01_Medic_F: B_LSV_01_unarmed_F
	{
		scope=2;
		ScopeCurator=2;
		displayname="Prowler (Medevac)";
		attendant=1;
		supplyRadius=6;
		vehicleClass="Support";
		faction="TF160";
		Side=1;
		ForceInGarage=1;
		author="Flanker562";
        	hiddenSelectionsTextures[] = 
        	{
            		"\UH-60\Data\NATO_LSV_01_medevac_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
            		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
        	};
		class TextureSources
		{
			class LSVMedevac
			{
				displayName="TF160 Medevac";
				author="Flanker562";
				textures[]=
				{
					"\UH-60\Data\NATO_LSV_01_medevac_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
				};
				factions[]=
				{
					"TF160"
				};
			};
		};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=12;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_ej_MX_SA_F
			{
				weapon="ej_MX_SA_F";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=4;
			};
		};
	};

};
