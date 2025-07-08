class CfgPatches
{
	class Kimi_UI
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class RscControlsGroup;
class RscText;
class RangeText: RscText
{
};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscControlsGroupNoScrollbars;
class RscIGUIValue;
class RscIGUIText;
class RscVehicleToggles;
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfo_Kimi: RscUnitInfo
	{
		class CA_VehicleTogglesBackground_Kimi: RscText
		{
			idc=-1;
			x="0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]=
			{
				"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
			};
		};
		class CA_VehicleToggles_Kimi: RscVehicleToggles
		{
			idc=112;
			x="0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w="9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_TextFlaresMode_Kimi: RscIGUIText
		{
			idc=152;
			style=0;
			sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x="0.012 + SafeZoneX";
			y="0.012 + SafeZoneY";
			w="0.161*SafezoneW";
		};
		class CA_TextFlares_Kimi: RscIGUIValue
		{
			idc=151;
			style=1;
			sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x="0.012  + SafeZoneX";
			y="0.012 + SafeZoneY";
			w="0.161*SafezoneW";
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_Turret: RscUnitInfo_Kimi
	{
		idd=300;
		controls[]=
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group",
			"CA_VehicleToggles_Kimi"
		};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=151;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					x="24.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc=188;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="120";
					x="14.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc=189;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="3825";
					x="34.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=152;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="12.58 * 		(0.01875 * SafezoneH)";
					y="8 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc=153;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="BHOT";
					x="15.78 * 		(0.01875 * SafezoneH)";
					y="8 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc=172;
					font="EtelkaMonospacePro";
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="12.20 * 		(0.01875 * SafezoneH)";
					y="3.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextTADS: RangeText
				{
					idc=1010;
					text="TADS";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x="12.30 * 		(0.01875 * SafezoneH)";
					y="5 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc=190;
					text="20:28:35";
					font="EtelkaMonospacePro";
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="12.1 * 		(0.01875 * SafezoneH)";
					y="6.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="\uh-60_c\Kimi_UI\data\Apache_LaserOn.paa";
					x="20.45 * 		(0.01875 * SafezoneH)";
					y="14.1 * 		(0.025 * SafezoneH)";
					w="12.5 * 		(0.01875 * SafezoneH)";
					h="12 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="023";
					x="24.83 * 		(0.01875 * SafezoneH)";
					y="6 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_Turret_MX15: RscUnitInfo_Kimi
	{
		idd=300;
		controls[]=
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group",
			"CA_VehicleToggles_Kimi"
		};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Heading: RscText
				{
					idc=148;
					style=2;
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
					};
					text=" 359";
					x="1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx="0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DATE: RangeText
				{
					idc=112;
					text="0000";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.125;
					y=0.1;
					w=0.22499999;
					h=0.2;
				};
				class TIME: RangeText
				{
					idc=190;
					text="0505";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.125;
					y=0.15000001;
					w=0.22499999;
					h=0.25;
				};
				class UTC: RangeText
				{
					idc=1010;
					text="UTC";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.1;
					y=0.2;
					w=0.2;
					h=0.30000001;
				};
				class ONE_DOT_ZERO: RangeText
				{
					idc=1010;
					text="+1.0";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.15000001;
					y=0.2;
					w=0.25;
					h=0.30000001;
				};
				class AUTO_1: RangeText
				{
					idc=1010;
					text="AUTO";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.2;
					y=0.1;
					w=0.30000001;
					h=0.2;
				};
				class VIC: RangeText
				{
					idc=1010;
					text="VIC";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.30000001;
					y=0.1;
					w=0.40000001;
					h=0.2;
				};
				class SCENE: RangeText
				{
					idc=1010;
					text="SCENE";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.30000001;
					y=0.15000001;
					w=0.40000001;
					h=0.25;
				};
				class SPA: RangeText
				{
					idc=1010;
					text="SPA";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.40000001;
					y=0.1;
					w=0.5;
					h=0.2;
				};
				class VISION_MODE: RangeText
				{
					idc=152;
					text="4040";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.44999999;
					y=0.1;
					w=0.55000001;
					h=0.2;
				};
				class FLIR_MODE: RangeText
				{
					idc=153;
					text="4545";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.44999999;
					y=0.15000001;
					w=0.55000001;
					h=0.25;
				};
				class NUMBER_1: RangeText
				{
					idc=1010;
					text="number?";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.5;
					y=0.1;
					w=0.60000002;
					h=0.2;
				};
				class DFLT: RangeText
				{
					idc=1010;
					text="DFLT";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.60000002;
					y=0.15000001;
					w=0.69999999;
					h=0.25;
				};
				class AUTO_2: RangeText
				{
					idc=1010;
					text="AUTO";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.69999999;
					y=0.1;
					w=0.80000001;
					h=0.2;
				};
				class AUTO_3: RangeText
				{
					idc=1010;
					text="AUTO";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.69999999;
					y=0.15000001;
					w=0.80000001;
					h=0.25;
				};
				class INFINITE: RangeText
				{
					idc=1010;
					text="OO";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.80000001;
					y=0.1;
					w=0.89999998;
					h=0.2;
				};
				class ACFT: RangeText
				{
					idc=1010;
					text="ACFT";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.1;
					y=0.69999999;
					w=0.2;
					h=0.80000001;
				};
				class DATUM_1: RangeText
				{
					idc=1010;
					text="35S";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.1;
					y=0.75;
					w=0.2;
					h=0.85000002;
				};
				class OWN_GRID: RangeText
				{
					idc=171;
					text="8585";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.1;
					y=0.80000001;
					w=0.2;
					h=0.89999998;
				};
				class METERS_1: RangeText
				{
					idc=1010;
					text="Meters";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.15000001;
					y=0.75;
					w=0.25;
					h=0.85000002;
				};
				class ALT_AGL_1: RangeText
				{
					idc=168;
					text="9595";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.15000001;
					y=0.80000001;
					w=0.25;
					h=0.89999998;
				};
				class GPS_HEADING: RangeText
				{
					idc=155;
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.25;
					y=0.75;
					w=0.34999999;
					h=0.85000002;
				};
				class ALT_AGL_2: RangeText
				{
					idc=168;
					text="9595";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.25;
					y=0.80000001;
					w=0.34999999;
					h=0.89999998;
				};
				class NUMBER_2: RangeText
				{
					idc=1010;
					text="-number?";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.44999999;
					y=0.80000001;
					w=0.55000001;
					h=0.89999998;
				};
				class TGT_HEADING: RangeText
				{
					idc=1010;
					text="heading?";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.64999998;
					y=0.75;
					w=0.75;
					h=0.85000002;
				};
				class TGT_DISTANCE: RangeText
				{
					idc=183;
					text="0000";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.64999998;
					y=0.80000001;
					w=0.75;
					h=0.85000002;
				};
				class TGT_1: RangeText
				{
					idc=1010;
					text="TGT";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.75;
					y=0.69999999;
					w=0.85000002;
					h=0.80000001;
				};
				class LOS: RangeText
				{
					idc=1010;
					text="LOS";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.80000001;
					y=0.80000001;
					w=0.89999998;
					h=0.80000001;
				};
				class DATUM_2: RangeText
				{
					idc=1010;
					text="35S";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.75;
					y=0.75;
					w=0.85000002;
					h=0.85000002;
				};
				class TGT_GRID: RangeText
				{
					idc=172;
					text="0000";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.75;
					y=0.80000001;
					w=0.85000002;
					h=0.89999998;
				};
				class METERS_2: RangeText
				{
					idc=1010;
					text="Meters";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.80000001;
					y=0.75;
					w=0.89999998;
					h=0.85000002;
				};
				class TGT_ELEVATION: RangeText
				{
					idc=175;
					text="Meters";
					font="EtelkaMonospacePro";
					style=2;
					shadow=0;
					x=0.80000001;
					y=0.80000001;
					w=0.89999998;
					h=0.89999998;
				};
			};
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_01: RscUnitInfo_Kimi
	{
		controls[]=
		{
			"WeaponInfoControlsGroupRight",
			"CA_TextFlaresMode_Kimi",
			"CA_TextFlares_Kimi",
			"CA_VehicleToggles_Kimi"
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_02: RscUnitInfo_Kimi
	{
		controls[]=
		{
			"CA_TextFlaresMode_Kimi",
			"CA_TextFlares_Kimi",
			"CA_VehicleToggles_Kimi"
		};
	};
};
