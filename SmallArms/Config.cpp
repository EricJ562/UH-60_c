#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Ej_UH60M_smallarms
	{
		units[] = {};
		weapons[] = {"Ej_Flaregun"};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class asdg_SlotInfo;
class SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticSideMount;
class asdg_UnderSlot;

class CfgWeapons
{
	class Default;

	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ej_flaregun_base: Pistol_Base_F
	{
		scope=0;
		displayname="Flare Gun";
		dexterity=1;
		recoil="recoil_pistol_4five";
		magazines[]={"FlareGreen_F","FlareWhite_F","FlareRed_F","FlareYellow_F"};
		model="\uh-60\Misc\Weapons\FlareGun\ej_FlareGun.p3d";
		modes[]={"Single"};
		muzzles[]={"this","securite"};
		class securite: Default
		{
			displayName="$STR_R3F_SAFE";
			magazines[]={"R3F_securite_mag"};
			begin1[]={"",1,1,1};
			soundBegin[]={"begin1",1};
			reloadMagazineSound[]={"",1,1,1};
			drySound[]={"",1,1,1};
			optics="true";
			modelOptics="-";
			opticsZoomMin=0.375;
			opticsZoomMax=1.1;
			opticsZoomInit=0.75;
			memoryPointCamera="eye";
		};
		picture="\uh-60\data\ui\flaregun_x_ca.paa";
		reloadaction="GestureReloadPistol";
		class Library{libtextdesc="Flare Gun";};
		drySound[]={"",1,1,1};
		caseless[]={"",1,1,1};
		soundBullet[]={"caseless",1};
		reloadMagazineSound[]={"A3\Sounds_F\weapons\Pistols\p07_reload",0.56234133,1,30};
		class WeaponSlotsInfo{};

		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="caselessstart";
				directionName="caselessend";
				effectName="CaselessAmmoCloud";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[]={"closure1",0.5,"closure2",0.5};
			};

			class StandardSound: BaseSoundModeType
			{
				begin1[]={"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_01",2.5118864,1,1400};
				begin2[]={"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_02",2.5118864,1,1400};
				begin3[]={"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_03",2.5118864,1,1400};
				soundBegin[]={"begin1",0.33000001,"begin2",0.33000001,"begin3",0.34};
			};

			reloadTime=0.030000001;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
	};
	class Ej_Flaregun: ej_flaregun_base
	{
		scope=2;
		scopeCurator=2;
		descriptionshort="Flare Gun";
		picture="\uh-60\data\UI\flaregun_x_ca.paa";
		displayname="Flare Gun";
	};
};
