#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Items_ej
	{
		units[] = {};
		weapons[] = {"SF762MX_ej"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items"};
	};
};

class Muzzleslot;
class MuzzleSlot_65: MuzzleSlot 
{
	class compatibleItems 
	{
		SF762MX_ej = 1;
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
				recoilCoef="0.9f";
				recoilProneCoef="0.9f";
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
