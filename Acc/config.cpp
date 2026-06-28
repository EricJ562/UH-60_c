#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Items_kj
	{
		units[] = {};
		weapons[] = {"SF762MX_ej","SF762MXS_kj","EOTech_kj","CompM4_kj"};
		requiredVersion = 0.1;
		requiredAddons[] = {"KJ_UH_60","A3_Weapons_F","A3_Weapons_F_Items"};
	};
};

class Muzzleslot;
class MuzzleSlot_65: MuzzleSlot 
{
	class compatibleItems 
	{
		SF762MX_ej = 1;
		SF762MXS_kj = 1;
	};
};

class asdg_OpticRail;
class CowsSlot_Rail: asdg_OpticRail 
{
	class compatibleItems 
	{
		EOTech_kj = 1;
		CompM4_kj = 1;
	};
};

class asdg_OpticRail1913: asdg_OpticRail 
{
	class compatibleItems 
	{
		EOTech_kj = 1;
		CompM4_kj = 1;
	};
};


class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
 	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	class acc_pointer_IR;
	class acc_flashlight;
	class EOTech_kj: ItemCore
	{
		dlc=u100;
		scope = 2;
		author="Flanker562";
		displayName = "EOTech 553 (Rifle)";
		picture = "\uh-60\data\UI\EOTechinv.paa";
		model = "\UH-60\Misc\Item\kj_EOTech2.p3d";
		descriptionShort = "Reflex Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			modelOptics = "\UH-60\Misc\Item\kj_EOTech2.p3d";
			optics = 1;
			class OpticsModes
			{
				class m68_ej
				{
					opticsID = 2;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					useModelOptics = 0;
					memoryPointCamera = "OpticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.67;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};

			};
		};
		inertia = 0.1;
	};
	class CompM4_kj: ItemCore
	{
		dlc=u100;
		scope = 2;
		author="Flanker562";
		displayName = "Aimpoint CompM4";
		picture = "\uh-60\data\UI\CompM4inv.paa";
		model = "\UH-60\Misc\Item\kj_compm4.p3d";
		descriptionShort = "Reflex Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			modelOptics = "\UH-60\Misc\Item\kj_compm4.p3d";
			optics = 1;
			class OpticsModes
			{
				class m68_ej
				{
					opticsID = 2;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					useModelOptics = 0;
					memoryPointCamera = "OpticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.67;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};

			};
		};
		inertia = 0.1;
	};
	class SF762MX_ej: ItemCore
	{
		scope=2;
		author = "Flanker562";
		displayName="SureFire MX Tan Suppressor";
		picture="\uh-60\data\ui\sf556Tminiinv.paa";
		model="\uh-60\Misc\Item\SureFireMX.p3d";
		
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed = 1.03;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.1;
				audibleFire=0.5;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=0;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				dispersionCoef="0.9f";
				recoilCoef="0.8f";
				recoilProneCoef="0.7f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.12;
	};
	class SF762MXS_kj: ItemCore
	{
		scope=2;
		author = "Flanker562";
		displayName="SureFire MX Sand Suppressor";
		picture="\uh-60\data\ui\MXSinv.paa";
		model="\uh-60\Misc\Item\SureFireMXS.p3d";
		
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed = 1.03;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.1;
				audibleFire=0.5;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=0;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				dispersionCoef="0.9f";
				recoilCoef="0.8f";
				recoilProneCoef="0.7f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.12;
	};
};
