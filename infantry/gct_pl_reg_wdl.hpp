/* //Szkolenie
 class GCT_PSZ_PL_wdl10_Instructor: PSZ_PL_Soldier_Rifleman {
		scope = 2;
		scopeCurator = 2;
		GCT_Author_Macro
		editorSubcategory = "gct_psz_wdl";
		vehicleclass = "gct_psz_wdl";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";
		displayName = "Szkoleniowiec";
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		linkedItems[] = {"PSZ_H_Beret_GroundForces", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"PSZ_H_Beret_GroundForces", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {};
		respawnMagazines[] = {};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
	};
	
class GCT_PSZ_PL_wdl10_Boot: PSZ_PL_Soldier_Rifleman {
		scope = 2;
		scopeCurator = 2;
		GCT_Author_Macro
		editorSubcategory = "gct_psz_wdl";
		vehicleclass = "gct_psz_wdl";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Crye";
		displayName = "Kursant";
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		linkedItems[] = {"PSZ_V_UKO_L_WDL", "PSZ_H_wz2005_SAND_ESS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_WDL", "PSZ_H_wz2005_SAND_ESS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {};
		respawnMagazines[] = {};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
	};
	
class GCT_PSZ_PL_wdl10_Boot_Fold: PSZ_PL_Soldier_Rifleman {
		scope = 2;
		scopeCurator = 2;
		GCT_Author_Macro
		editorSubcategory = "gct_psz_wdl";
		vehicleclass = "gct_psz_wdl";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Crye_Folded";
		displayName = "Kursant (rekaw)";
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
		linkedItems[] = {"PSZ_V_UKO_L_WDL", "PSZ_H_wz2005_SAND_ESS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_WDL", "PSZ_H_wz2005_SAND_ESS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {};
		respawnMagazines[] = {};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
	};*/
//Baza
class gct_psz_infantry_wdl10_base : rhsusf_infantry_usmc_base {
	editorSubcategory = "gct_psz_wdl";
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	vehicleclass = "gct_psz_wdl";
	GCT_Author_Macro
	
	genericNames = "PSZ_PolishMen";
	identityTypes[] = {"PSZ_Man"};
    weapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put"};
	respawnWeapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put"};
	magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
	respawnMagazines[] =
	{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};

	Items[] = {"ACE_CableTie","ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
	RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};

    linkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};
	respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};

	headgearList[] = {
		"PSZ_H_wz2005_CAMO",0.35,
		"PSZ_H_wz2005_CAMO_ESS",0.30,
		"PSZ_H_wz2005_OLIVE",0.35,
		"PSZ_H_wz2005_OLIVE_ESS",0.30,
		"PSZ_H_wz2005_WDL",0.35,
		"PSZ_H_wz2005_WDL_ESS",0.30
	};
	rds_randomCloths[] = {
		PSZ_U_PL_WDL_wz2010_Crye,0.25,PSZ_U_PL_WDL_wz2010_Crye_Folded,0.25,PSZ_U_PL_WDL_wz2010_Polar,0.15
	};
	
class EventHandlers: EventHandlers {
		class PO_RandomizeHats {
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		class LOP_CIV_EH {
			init = "_this call lop_fnc_randomUniform";
		};
	};
};
//Rifleman
class gct_psz_wdl10_rifleman : gct_psz_infantry_wdl10_base {
		scope = 2;
		GCT_Author_Macro
		displayName = "Strzelec (Beryl)";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Crye";


        linkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};

		weapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put"};
		magazines[] = 		
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30_T_R",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30_T_R",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};

	};
class gct_psz_wdl10_rifleman_mini : gct_psz_wdl10_rifleman {
		_generalMacro = "psz_usmc_rifleman_m4";
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec (Mini Beryl)";

		weapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};

	};
class gct_psz_wdl10_riflemanat : gct_psz_wdl10_rifleman {
		_generalMacro = "psz_usmc_rifleman_at4";
		scope = 1;
		GCT_Author_Macro
		displayName= "Strzelec (RPG-76)";

	class SpeechVariants
		{
		class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

	cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";

		linkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_R", "PSZ_H_wz2005_wdl", Standard_Equipment};

		weapons[] = {"PSZ_Beryl04_G_EOT","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"PSZ_Beryl04_G_EOT","rhs_weap_M136","Throw","Put"};
		magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_m136_mag"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_m136_mag"
		};

		secondaryAmmoCoef = 0.5;
	};
class gct_psz_wdl10_grenadier : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "Grenadier";

	cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"PSZ_V_UKO_H_WDL_GL_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_GL_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};

		weapons[] = {"PSZ_Beryl96_Pallad_G_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_Beryl96_Pallad_G_EOT","Throw","Put"};
	magazines[] = {
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30_T_R",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE"
	};
	respawnMagazines[] = {
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30_T_R",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE"
	};
};
//MG's
class gct_psz_wdl10_pkm : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "KM Celowniczy (PKM)";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";

	class SpeechVariants
		{
		class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		
	cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		linkedItems[] = {"PSZ_V_UKO_H_wdl_MG_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_wdl_MG_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};

		backpack = "GCT_B_PKM";
		weapons[] = 
		{
			"rhs_weap_pkm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"rhs_weap_pkm",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] = 		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};
		respawnMagazines[] = {
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

	};
class gct_psz_wdl10_pkm_ass : gct_psz_wdl10_rifleman {
	_generalMacro = "psz_usmc_autorifleman_m249_ass";
	scope = 2;
	GCT_Author_Macro
	displayName= "KM Asystent (PKM)";

	linkedItems[] = {"PSZ_V_UKO_L_WDL_R", "PSZ_H_wz2005_CAMO_ESS", Standard_Equipment};
	respawnLinkedItems[] = {"PSZ_V_UKO_L_WDL_R", "PSZ_H_wz2005_CAMO_ESS", Standard_Equipment};
		
	weapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
	respawnWeapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
		
	magazines[] = {
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = {
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};	
	cost = 110000;
	camouflage = 1.5;
	
	backpack = "GCT_B_PKM";
};
// Leaders
class gct_psz_wdl10_co : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Plutonu";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";
		
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	class SpeechVariants
		{
		class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";

	cost = 600000;
	camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";

		linkedItems[] = {"PSZ_V_UKO_H_wdl_CO_Headset", "PSZ_H_wz2005_wdl_ESS",Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_wdl_CO_Headset", "PSZ_H_wz2005_wdl_ESS",Standard_Equipment};

		weapons[] = 
		{
			"PSZ_Beryl04_G_EOT",
			"PSZ_P99",
			"Throw",
			"Put",
			"lerca_1200_tan"
		};
		respawnWeapons[] = 
		{
			"PSZ_Beryl04_G_EOT",
			"PSZ_P99",
			"Throw",
			"Put",
			"lerca_1200_tan"
		};

		magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_9x19_P99_16",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_9x19_P99_16",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
		};

	};
class gct_psz_wdl10_sl : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Druzyny";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";
		
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine", "ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 500000;
	camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManOfficer";

		linkedItems[] = {"PSZ_V_UKO_H_wdl_CO_Headset", "PSZ_H_wz2005_wdl_ESS",  Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_wdl_CO_Headset", "PSZ_H_wz2005_wdl_ESS",  Standard_Equipment};

		weapons[] = 
		{
			"PSZ_Beryl96_Pallad_G_EOT",
			"PSZ_P99",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"PSZ_Beryl96_Pallad_G_EOT",
			"PSZ_P99",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] = 		
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30_T_R",
			"PSZ_556x45_Beryl_30_T_R",
			"PSZ_40x47_NGO74_HE",
			"PSZ_40x47_NGO74_HE",
			"PSZ_40x47_NGO74_HE",	
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30_T_R",
			"PSZ_556x45_Beryl_30_T_R",
			"PSZ_40x47_NGO74_HE",
			"PSZ_40x47_NGO74_HE",
			"PSZ_40x47_NGO74_HE",	
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"		
		};
        backpack="GCT_B_SL_PSZ";
	};
class gct_psz_wdl10_tl : gct_psz_infantry_wdl10_base {
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Sekcji";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";
		
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine", "ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine", "ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 450000;
	camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

        linkedItems[] = {"PSZ_V_UKO_L_wdl_CO_Headset", "PSZ_H_wz2005_OLIVE_ESS",Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_wdl_CO_Headset", "PSZ_H_wz2005_OLIVE_ESS",Standard_Equipment};

		weapons[] = {"PSZ_Beryl96_Pallad_G_EOT","Binocular","Throw","Put"};
		respawnWeapons[] = {"PSZ_Beryl96_Pallad_G_EOT","Binocular","Throw","Put"};

	magazines[] = 	{
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",	
		"PSZ_556x45_Beryl_30_T_R",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",	
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green"	
	};
	respawnMagazines[] = {
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",	
		"PSZ_556x45_Beryl_30_T_R",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"PSZ_40x47_NGO74_HE",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",	
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green"	
	};
	backpack="GCT_B_SL_PSZ";

	};
// Support
class gct_psz_wdl10_engineer : gct_psz_wdl10_rifleman {
		GCT_Author_Macro
		displayName= "Inzynier";

	cost = 220000;
	camouflage = 1.6;
		sensitivity = 2.5;
	canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";

        linkedItems[] = {"PSZ_V_UKO_H_WDL_R_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_R_Headset", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};

		weapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
	};
class gct_psz_wdl10_explosives : gct_psz_wdl10_rifleman {
		GCT_Author_Macro
		displayName= "Technik EOD";

	cost = 115000;
	camouflage = 1.6;
		sensitivity = 2.5;

	canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};

		icon = "iconManExplosive";
		picture = "pictureExplosive";
		
        linkedItems[] = {"PSZ_V_UKO_H_WDL_R_Headset", "PSZ_H_wz2005_wdl_ESS",  Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_R_Headset", "PSZ_H_wz2005_wdl_ESS",  Standard_Equipment};
		
		weapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
	magazines[] = 	{
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30_T_R",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = 
	{
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30_T_R",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};

		backpack="GCT_B_PL_Explo";
	};
class gct_psz_wdl10_medic : gct_psz_wdl10_rifleman {

		GCT_Author_Macro
		displayName= "Medyk";
        uniformClass = "PSZ_U_PL_wdl_wz2010_Crye_Folded";
		linkedItems[] = {"PSZ_V_UKO_H_WDL_M", "PSZ_H_wz2005_wdl", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_H_WDL_M", "PSZ_H_wz2005_wdl", Standard_Equipment};
		
		weapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		respawnWeapons[] = {"PSZ_BerylMini04_EOT","Throw","Put"};
		magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_mag_an_m8hc"
		};

		attendant =1;
		icon="iconManMedic";
		backpack="GCT_B_PSZ_Medic";
		picture="pictureHeal";
	};
class gct_psz_wdl10_rpg : gct_psz_wdl10_riflemanat {
		GCT_Author_Macro
		scope=2;
		displayName= "AT Specjalista (RPG-7)";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Crye_Folded";

	class SpeechVariants
		{
		class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

	cost = 190000;
		threat[] = {1,1,0.8};
	camouflage = 1.5;
		icon = "iconManAT";

	class EventHandlers : EventHandlers
		{
		class psz_EventHandlers
			{
				init = "_this call rhs_fnc_smaw_init;";
				respawn = "_this call rhs_fnc_smaw_init;";
			};
		};

		backpack = "GCT_B_RPG7";

		linkedItems[] = {"PSZ_V_UKO_L_WDL_R", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_WDL_R", "PSZ_H_wz2005_OLIVE_ESS", Standard_Equipment};

		weapons[] = 
		{
			"PSZ_BerylMini04_EOT",
			"rhs_weap_rpg7_pgo",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"PSZ_BerylMini04_EOT",
			"rhs_weap_rpg7_pgo",
			"Throw",
			"Put"
		};

		magazines[] = 		
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
	};
class gct_psz_wdl10_rpg_ass : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "AT Asystent (RPG-7)";

		weapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
		respawnWeapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
		
	cost = 110000;
	camouflage = 1.5;

		backpack = "GCT_B_RPG7";

	};
class gct_psz_wdl10_spike : gct_psz_wdl10_rpg {
		GCT_Author_Macro
		displayName= "AT Specjalista (Spike)";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Crye_Folded";

		//backpack = "PSZ_B_wz97_wdl";

		linkedItems[] = {"PSZ_V_UKO_L_WDL_R_Headset", "PSZ_H_wz2005_wdl_ESS", Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_WDL_R_Headset", "PSZ_H_wz2005_wdl_ESS", Standard_Equipment};

		weapons[] = 
		{
			"PSZ_BerylMini04_EOT",
			"PSZ_Spike_LR",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"PSZ_BerylMini04_EOT",
			"PSZ_Spike_LR",
			"Throw",
			"Put"
		};

		magazines[] = 	{
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_Spike_THEAT",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = 	{
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_556x45_Beryl_30",
		"PSZ_Spike_THEAT",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};
};
class gct_psz_wdl10_spike_ass : gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "AT Asystent (Spike)";

		weapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
		respawnWeapons[] = {"PSZ_Beryl04_G_EOT","Throw","Put","Binocular"};
		
	cost = 110000;
	camouflage = 1.5;

		backpack = "PSZ_B_wz97_AT_Spike_wdl";

	};
class gct_psz_wdl10_marksman: gct_psz_wdl10_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec Wyborowy";
		uniformClass = "PSZ_U_PL_wdl_wz2010_Polar";

	class SpeechVariants
		{
		class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";

	cost = 150000;
		sensitivity = 3.3;

		linkedItems[] = {"PSZ_V_UKO_L_wdl_R", "PSZ_H_wz2005_wdl",Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_UKO_L_wdl_R", "PSZ_H_wz2005_wdl",Standard_Equipment};

		weapons[] = {"PSZ_Bor_Leu_M3","Binocular","Throw","Put"};
		respawnWeapons[] = {"PSZ_Bor_Leu_M3","Binocular","Throw","Put"};
		magazines[] =
		{
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"PSZ_762x51_Bor_10",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};

	};
// Ground Crew
class gct_psz_wdl10_crewman : gct_psz_infantry_wdl10_base {
		scope = 2;
		GCT_Author_Macro
		displayName= "Zalogant";
        uniformClass = "PSZ_U_PL_wdl_wz2010_Crye_Folded";
		
	cost = 90000;
	camouflage = 1.6;
		sensitivity = 2.5;

		engineer = 1;

		Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};

        linkedItems[] = {"PSZ_V_Kontraktor_WDL", "PSZ_H_wz2005_wdl","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"PSZ_V_Kontraktor_WDL", "PSZ_H_wz2005_wdl","ItemGPS",Standard_Equipment};

		weapons[] = {"PSZ_BerylMini04_EOT","Binocular","Throw","Put"};
		respawnWeapons[] = {"PSZ_BerylMini04_EOT","Binocular","Throw","Put"};
		magazines[] = 		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",			
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green"
		};
		respawnMagazines[] =
		{
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",
			"PSZ_556x45_Beryl_30",			
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green"
		};

	};