class CfgPatches
{
	class Ej_containers
	{
		requiredAddons[]={"A3_Supplies_F_Heli_Slingload","A3_Data_F","A3_Weapons_F","A3_Weapons_F_Ammoboxes","A3_UI_F","A3_Characters_F_Common","A3_Characters_F_Proxies","A3_Supplies_F_Heli"};
		requiredVersion=0.1;
		units[]={			"ej_CheroContainerRepairAAF",
						"ej_CheroContainer_OPFOR",
						"ej_CheroContainerFuel",
						"ej_CheroContainerFuelOPFOR",
						"ej_CheroContainerFuelAAF", 
						"ej_CheroContainerAmmo",
						"ej_CheroContainerAmmoAAF",
						"ej_CheroContainerAmmoOPFOR",
						"ej_CheroContainerMedevac",
						"ej_CheroContainerMedevacAAF", 
						"ej_CheroContainerMedevacOPFOR",
						"ej_CheroContainerBlue",
						"ej_CheroContainerGreen",
						"ej_CheroContainerTan",
						"ej_CheroContainerRepair",
						"ej_CheroContainerRepairOPFOR",
						"ej_CheroContainerRepairAAF",
						"ej_CheroContainerCargo",
						"ej_CheroContainerCargoOPFOR",
						"ej_CheroContainerCargoAAF",
						"ej_CheroContainerOrange",
						"ej_CheroContainerGray",
						"ej_CheroContainerRed",
						"ej_CheroContainerDarkBlue",
						"ej_CheroContainerYellow",
						"ej_CheroContainerLightGreen"
		};
		weapons[]={};
	};
};
class CfgVehicleClasses
{
	class Ericj_container
	{
		displayName="EricJ Containers (Cherokee)";
		mapbuilder_filter="EricJ containers";
	};

};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class House_Small_F;
	class Slingload_base_F;
	class ej_CheroContainerBase: Slingload_base_F
	{
		author="EricJ";
		_generalMacro="ej_CheroContainer";
		scope=0;
		scopeCurator=0;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		vehicleClass="EricJ_Container";
		maximumLoad=2000;
		faction="TF160";
		supplyRadius=10;
		icon="iconObject_circle";
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		destrType="DestructBuilding";
		explosionEffect="";
		class DestructionEffects
		{
		};
		selectionDamage="DamT_1";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_damage.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_destruct.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_damage.rvmat",
				"A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_destruct.rvmat"
			};
		};
		class AnimationSources;
		hiddenSelections[]={"camo"};
		model="\UH-60\Misc\Containers\Container_Base.p3d";
		DLC="uh-60";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=5;
			};
		};
	};
	class ej_CheroContainerAmmo: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerFuel";
		scope=2;
		mapSize=6.1900001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Ammo_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Ammo Container";
		accuracy=0.5;
		faction="TF160";
		transportAmmo=1000000000000;
		secondaryExplosion=10000;
		explosionEffect="SupplyExplosion";
		damageTexDelay=1;
		disableInventory=1;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class ej_CheroContainerFuel: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerFuel";
		scope=2;
		mapSize=6.1900001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Fuel_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Fuel Container";
		accuracy=0.5;
		faction="TF160";
		transportFuel=1000000000000;
		secondaryExplosion=10000;
		explosionEffect="SupplyExplosion";
		damageTexDelay=1;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class ej_CheroContainerCargo: ej_CheroContainerBase
	{
		author="EricJ";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="ej_CheroContainerCargo";
		scope=2;
		scopeCurator=2;
		displayName="Cherokee Cargo Container";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_MilCommon_co.paa"};
		accuracy=0.5;
		faction="TF160";
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
				count=12;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=4;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
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
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=4;
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
	class ej_CheroContainerMedevac: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerMedevac";
		mapSize=6.3099999;
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"medicalhide",
					0
				}
			};
			hide[]={};
			verticalOffset=1.359;
			verticalOffsetWorld=0;
			init="''";
		};
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Medic_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Medic Container";
		faction="TF160";

		class ACE_Actions 
		{
            
            		class ACE_MainActions 
			{
                		class Medical_Menu 
				{
                    			displayName = CSTRING(OpenMenu);
                    			runOnHover = 0;
                    			exceptions[] = {"isNotInside"};
                    			condition = QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu));
                    			statement = QUOTE([_target] call DFUNC(openMenu));
                    			icon = PATHTOEF(medical,UI\icons\medical_cross.paa);
                		};
            		};
        	};
		accuracy=0.5;
		attendant=1;
		class AnimationSources: AnimationSources
		{
			class HideMedical
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=20;
			};
		};
	};
	class ej_CheroContainerBlue: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerBlue";
		mapSize=6.3099999;
		scope=2;
		class SimpleObject
		{
			animate[]=
			{
				
				{"Ammo_hide",0},
				{"AmmoOrd_hide",1},
				{"Grenades_hide",1},
				{"Support_hide",1}
			};
			hide[]={};
			verticalOffset=0;
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Blue_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Blue)";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=5;
			};
		};
	};
	class ej_CheroContainerGreen: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerGreen";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Green_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Green)";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=5;
			};
		};
	};
	class ej_CheroContainerTan: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerTan";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Tan_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Tan)";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=5;
			};
		};
	};
	class ej_CheroContainerOrange: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerBlue";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Orange_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Orange)";
	};
	class ej_CheroContainerGray: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerGray";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Gray_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Gray)";
	};
	class ej_CheroContainerRed: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerRed";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Red_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Red)";
	};
	class ej_CheroContainerDarkBlue: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerDarkBlue";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_DarkBlue_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Dark Blue)";
	};
	class ej_CheroContainerYellow: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerDarkBlue";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_Yellow_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Yellow)";
	};
	class ej_CheroContainerLightGreen: ej_CheroContainerBlue
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerDarkBlue";
		scope=2;
		scopeCurator=2;
		faction="CIV_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_LightGreen_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Container (Light Green)";
	};
	class ej_CheroContainerRepair: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerRepair";
		mapSize=6.3099999;
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.3609999;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenSelectionsTextures[]={"\uh-60\data\Container_repair_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Repair Container";
		accuracy=0.5;
		faction="TF160";
		transportRepair=1000000000000;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class ej_CheroContainerRepairOPFOR: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerRepair";
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.3609999;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenSelectionsTextures[]={"\uh-60\data\Container_repairOPFOR_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Repair Container (CSAT)";
		accuracy=0.5;
		faction="OPF_F";
		transportRepair=1000000000000;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class ej_CheroContainerRepairAAF: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerRepair";
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.3609999;
			verticalOffsetWorld=0;
			init="''";
		};
		hiddenSelectionsTextures[]={"\uh-60\data\Container_RepairAAF_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Repair Container (AAF)";
		accuracy=0.5;
		faction="IND_F";
		transportRepair=1000000000000;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class ej_CheroContainerFuelOPFOR: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerFuel";
		scope=2;
		class SimpleObject
		{
			animate[]=
			{
				
				{"Ammo_hide",0},
				{"AmmoOrd_hide",1},
				{"Grenades_hide",1},
				{"Support_hide",1}
			};
			hide[]={};
			verticalOffset=0;
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		transportFuel=100000000;
		faction="OPF_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_FuelOPFOR_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Fuel Container (CSAT)";
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=10;
			};
		};
	};
	class ej_CheroContainerFuelAAF: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerFuel";
		scope=2;
		class SimpleObject
		{
			animate[]=
			{
				
				{"Ammo_hide",0},
				{"AmmoOrd_hide",1},
				{"Grenades_hide",1},
				{"Support_hide",1}
			};
			hide[]={};
			verticalOffset=0;
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		faction="IND_F";
		transportFuel=1000000000;
		hiddenSelectionsTextures[]={"\uh-60\data\Container_FuelAAF_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Fuel Container (AAF)";
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=10;
			};
		};
	};
	class ej_CheroContainerCargoAAF: ej_CheroContainerBase
	{
		author="EricJ";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="B_Slingload_01_Cargo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cherokee Cargo Container (AAF)";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_MilCommonAAF_co.paa"};
		accuracy=0.5;
		faction="IND_F";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=48;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
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
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=6;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=12;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=4;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=2;
			};
			class _xx_arifle_Mk20_F
			{
				weapon="arifle_Mk20_F";
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
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=4;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_AssaultPack_dgtl
			{
				backpack="B_AssaultPack_dgtl";
				count=4;
			};
		};
	};
	class ej_CheroContainerCargoOPFOR: ej_CheroContainerBase
	{
		author="EricJ";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="B_Slingload_01_Cargo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cherokee Cargo Container (CSAT)";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_OPFORCommon_co.paa"};
		accuracy=0.5;
		faction="OPF_F";
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=48;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
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
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=6;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=12;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=4;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_O_Titan_short_F
			{
				weapon="launch_O_Titan_short_F";
				count=2;
			};
			class _xx_arifle_Katiba_F
			{
				weapon="arifle_Katiba_F";
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
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=4;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_ocamo
			{
				backpack="B_FieldPack_ocamo";
				count=4;
			};
		};
	};
	class ej_CheroContainerAmmoAAF: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerFuel";
		scope=2;
		mapSize=6.1900001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_MilCommonAAF_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Ammo Container (AAF)";
		accuracy=0.5;
		faction="IND_F";
		transportAmmo=1000000000000;
		secondaryExplosion=10000;
		explosionEffect="SupplyExplosion";
		damageTexDelay=1;
		disableInventory=1;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class ej_CheroContainerAmmoOPFOR: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerAmmoOPFOR";
		scope=2;
		mapSize=6.1900001;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=1.362;
			verticalOffsetWorld=0;
			init="''";
		};
		scopeCurator=2;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_OPFORCommon_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Ammo Container (CSAT)";
		accuracy=0.5;
		faction="OPF_F";
		transportAmmo=1000000000000;
		secondaryExplosion=10000;
		explosionEffect="SupplyExplosion";
		damageTexDelay=1;
		disableInventory=1;
		class DestructionEffects
		{
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="";
				intensity=0.001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="ObjectDestructionRefract";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="";
				intensity=0;
				interval=1;
				lifeTime=3;
			};
		};
	};
	class ej_CheroContainerMedevacAAF: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerMedevac";
		mapSize=6.3099999;
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"medicalhide",
					0
				}
			};
			hide[]={};
			verticalOffset=1.359;
			verticalOffsetWorld=0;
			init="''";
		};
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		attendant=1;
		faction="IND_F";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\uh-60\data\Container_MedicAAF_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Medic Container (AAF)";

		class ACE_Actions 
		{
            
            		class ACE_MainActions 
			{
                		class Medical_Menu 
				{
                    			displayName = CSTRING(OpenMenu);
                    			runOnHover = 0;
                    			exceptions[] = {"isNotInside"};
                    			condition = QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu));
                    			statement = QUOTE([_target] call DFUNC(openMenu));
                    			icon = PATHTOEF(medical,UI\icons\medical_cross.paa);
                		};
            		};
        	};
		accuracy=0.5;
		attendant=1;
		class AnimationSources: AnimationSources
		{
			class HideMedical
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class ej_CheroContainerMedevacOPFOR: ej_CheroContainerBase
	{
		author="EricJ";
		_generalMacro="ej_CheroContainerMedevacOPFOR";
		mapSize=6.3099999;
		scope=2;
		scopeCurator=2;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"medicalhide",
					0
				}
			};
			hide[]={};
			verticalOffset=1.359;
			verticalOffsetWorld=0;
			init="''";
		};
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		attendant=1;
		faction="OPF_F";
		hiddenSelectionsTextures[]={"\uh-60\data\Container_MedicOPFOR_co.paa"};
		hiddenSelectionsMaterials[]={"\uh-60\data\Mat\Container.rvmat"};
		displayName="Cherokee Medic Container (CSAT)";

		class ACE_Actions 
		{
            
            		class ACE_MainActions 
			{
                		class Medical_Menu 
				{
                    			displayName = CSTRING(OpenMenu);
                    			runOnHover = 0;
                    			exceptions[] = {"isNotInside"};
                    			condition = QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu));
                    			statement = QUOTE([_target] call DFUNC(openMenu));
                    			icon = PATHTOEF(medical,UI\icons\medical_cross.paa);
                		};
            		};
        	};
		accuracy=0.5;
		attendant=1;
		class AnimationSources: AnimationSources
		{
			class HideMedical
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=20;
			};
		};
	};
};
