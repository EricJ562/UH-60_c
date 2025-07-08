class CfgPatches
{
	class Ej_Units
	{
		units[] = {"B_T_LSV_01_repair_F","ej_speedball","ej_skram","ej_skram_SOAR","ej_survivalbag","ej_lmgsparpack"};
		weapons[] = {};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class CfgVehicleClasses
{
	class RWG{displayName="Raven Warfare Group";};
	class TF160{displayName="160th SOAR";};
	class USA{displayName="US Army";};
	class USN{displayName="US Navy";};
	class USMC{displayName="USMC";};
	class RUSFED{displayName="Russian Federation";};
	class BRPMC{displayName="Black River PMC";};
};
class CfgFactionClasses
{
	class RUSFED
	{
		displayName="Russian Federation";
		priority=1;
		side=0;
		icon="\uh-60\data\cfgfactionclasses_raven.paa";
	};
	class RWG
	{
		displayName="Raven Warfare Group";
		priority=1;
		side=2;
		icon="\UH-60\data\cfgfactionclasses_raven.paa";
	};
	class TF160
	{
		displayName="160th SOAR";
		priority=1;
		side=1;
		icon="\UH-60\data\cfgfactionclasses_soar.paa";
	};
	class USA
	{
		displayName="US Army";
		priority=1;
		side=1;
		icon="\UH-60\data\cfgfactionclasses_USArmy.paa";
	};
	class USN
	{
		displayName="US Navy";
		priority=1;
		side=1;
		icon="\UH-60\data\cfgfactionclasses_USN.paa";
	};
	class USMC
	{
		displayName="USMC";
		priority=1;
		side=1;
		icon="\UH-60\data\cfgfactionclasses_USMC.paa";
	};
	class BRPMC
	{
		displayName="Black River PMC";
		priority=1;
		side=0;
		icon="\UH-60\data\cfgfactionclasses_blackriver.paa";
	};
};

class CfgWeapons
{
	class SMG_05_F;
	class SMG_05_F_Mk17B: SMG_05_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg_blk_F";
			};			
		}
	};
	class arifle_MX_F;
	class ej_MX_MK17_S_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
		};
	};
	class ej_MX_SA_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_MXM_F;
	class ej_MXM_S_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_AMS_snd";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
            		class LinkedItemsUnder
            		{
                		slot = "UnderBarrelSlot";
                		item = "bipod_01_F_snd";
            		};
		};
	};
	class arifle_MX_SW_F;
	class ej_SW_S_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
            		class LinkedItemsUnder
            		{
                		slot = "UnderBarrelSlot";
                		item = "bipod_01_F_snd";
            		};
		};
	};
	class arifle_MX_GL_F;
	class ej_MXGL_S_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
		};
	};

//Black River PMC

	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_01_blk_IR_ERCO_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ERCO_blk_F";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class SMG_05_F;
	class SMG_05_F_ACO_IR_F: SMG_05_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_SPAR_01_blk_IR_ACO_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_SPAR_02_blk_F;
	class arifle_SPAR_02_blk_IR_ARCO_F: arifle_SPAR_02_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco_blk_F";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
            		class LinkedItemsUnder
            		{
                		slot = "UnderBarrelSlot";
                		item = "bipod_01_F_blk";
            		};
		};
	};
	class arifle_SPAR_03_blk_F;
	class arifle_SPAR_03_blk_IR_NS_F: arifle_SPAR_03_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Nightstalker";
			};			
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
            		class LinkedItemsUnder
            		{
                		slot = "UnderBarrelSlot";
                		item = "bipod_01_F_blk";
            		};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};

};

class CfgVehicles
{
	class B_ViperLightHarness_blk_F;
	class ej_assaultpack_BRPMC: B_ViperLightHarness_blk_F	
	{
		scope=2;
		displayname="Black River Assault Ruck";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				count=10;
				magazine="30Rnd_556x45_Stanag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
		};
	};
	class ej_sniperpack_BRPMC: B_ViperLightHarness_blk_F	
	{
		dlc=uh60;
		scope=2;
		displayname="Black River Sniper Ruck";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				count=10;
				magazine="20Rnd_762x51_Mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
		};
	};
	class ej_lmgpack_BRPMC: B_ViperLightHarness_blk_F	
	{
		dlc=uh60;
		scope=2;
		displayname="Black River LMG Ruck";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				count=5;
				magazine="150Rnd_556x45_Drum_Mag_Tracer_F";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
		};
	};
	class B_Kitbag_mcamo;
	class ej_lmgsparpack: B_Kitbag_mcamo	
	{
		scope=2;
		displayname="TF562 MX LMG Bag";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				count=5;
				magazine="100Rnd_65x39_caseless_mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=2;
			};
		};
	};
	class ej_skram: B_Kitbag_mcamo	
	{
		dlc=uh60;
		scope=2;
		displayname="SKRAM Bag";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\uh-60\data\uniforms\backpack_fast_mcamej_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				count=6;
				magazine="30Rnd_65x39_caseless_mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=2;
			};
		};
	};
	class ej_survivalbag: B_Kitbag_mcamo
	{
		scope=2;
		displayname="Survival Bag";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=2;
			};
		};
	};
	class B_Carryall_mcamo;
	class ej_Speedball: B_Carryall_mcamo
	{
		dlc=uh60;
		scope=2;
		displayname="Speedball";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=20;
			};
			class _xx_Handgrenade
			{
				magazine="Handgrenade";
				count=20;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
			};
		};
	};
};
