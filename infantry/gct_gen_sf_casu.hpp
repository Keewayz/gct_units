//Baza
class gct_sf_gen_infantry_base : rhsusf_infantry_usmc_base {
	editorSubcategory = "gct_pmc_gen";
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	vehicleClass = "gct_pmc_gen";
	uniformClass = "TRYK_U_B_PCUGs_OD";
    GCT_Author_Macro
	
	//weapons to do
	weapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Throw","Put"};
	magazines[] = {
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = {
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};

	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};
	RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs","ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};

	linkedItems[] = {"H_Cap_tan","lbt_operator_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_tan","lbt_operator_od", Standard_Equipment};

	//to do extend list
	headgearList[] = {
		"H_Bandanna_gry",0.15,
		"H_Watchcap_cbr",0.25,
		"H_Watchcap_camo",0.25,
		"H_Watchcap_blk",0.25,
		"H_Watchcap_khk",0.25,
		"rhsusf_bowman_cap",0.25,
		"H_Cap_oli_hs",0.25,
		"TRYK_H_woolhat_cu",0.25,
		"TRYK_H_woolhat_br",0.25,
		"TRYK_H_woolhat",0.25,
		"H_Cap_tan",0.25,
		"H_Cap_blk",0.25,
		"rhs_beanie_green",0.15
	};
	rds_randomCloths[] = {
		TRYK_U_B_Denim_T_WH,0.05,TRYK_U_B_Denim_T_BK,0.05,TRYK_U_B_Denim_T_BG_WH,0.05,TRYK_U_B_Denim_T_BG_BK,0.05,
		TRYK_U_B_BLK_T_WH,0.05,TRYK_U_B_RED_T_BR,0.05,TRYK_U_B_BLK_T_BK,0.05,TRYK_U_B_BLK_T_BG_WH,0.05,TRYK_U_B_RED_T_BG_BR,0.05,TRYK_U_B_BLK_T_BG_BK,0.05,
		TRYK_T_camo_tan,0.05,TRYK_U_pad_j_blk,0.05,TRYK_U_denim_jersey_blu,0.05,TRYK_U_denim_jersey_blk,0.05,
		TRYK_U_denim_hood_nc,0.05,TRYK_U_denim_hood_blk,0.05,TRYK_T_TAN_PAD,0.05,TRYK_T_OD_PAD,0.05,
		TRYK_T_BLK_PAD,0.05,TRYK_U_pad_hood_Cl,0.05,TRYK_U_pad_hood_odBK,0.05,TRYK_U_pad_hood_Blk,0.05,
		TRYK_U_pad_hood_Cl_blk,0.05,TRYK_U_pad_hood_Blod,0.05,
		TRYK_shirts_TAN_PAD_YEL,0.05,TRYK_shirts_OD_PAD_YEL,0.05,TRYK_shirts_BLK_PAD_YEL,0.05,
		TRYK_shirts_TAN_PAD_RED2,0.05,TRYK_shirts_OD_PAD_RED2,0.05,TRYK_shirts_BLK_PAD_RED2,0.05,
		TRYK_shirts_TAN_PAD,0.05,TRYK_shirts_OD_PAD,0.05,TRYK_shirts_BLK_PAD,0.05,
		TRYK_shirts_TAN_PAD_BLU3,0.05,TRYK_shirts_OD_PAD_BLU3,0.05,TRYK_shirts_BLK_PAD_BLU3,0.05,
		TRYK_shirts_TAN_PAD_BLW,0.05,TRYK_shirts_OD_PAD_BLW,0.05,TRYK_shirts_BLK_PAD_BLW,0.05,
		TRYK_shirts_TAN_PAD_BL,0.05,TRYK_shirts_OD_PAD_BL,0.05,TRYK_shirts_BLK_PAD_BL,0.05,		
		TRYK_shirts_TAN_PAD_BK,0.05,TRYK_shirts_OD_PAD_BK,0.05,TRYK_shirts_BLK_PAD_BK,0.05,	
		TRYK_shirts_DENIM_WHB_Sleeve,0.05,TRYK_shirts_DENIM_WH_Sleeve,0.05,TRYK_shirts_DENIM_RED2_Sleeve,0.05,TRYK_shirts_DENIM_R_Sleeve,0.05,
		TRYK_shirts_DENIM_BWH_Sleeve,0.05,TRYK_shirts_DENIM_BL_Sleeve,0.05,TRYK_shirts_DENIM_BK_Sleeve,0.05,TRYK_shirts_DENIM_ylb_Sleeve,0.05,
		TRYK_shirts_DENIM_od_Sleeve,0.05,
		TRYK_shirts_DENIM_WHB,0.05,TRYK_shirts_DENIM_WH,0.05,TRYK_shirts_DENIM_RED2,0.05,TRYK_shirts_DENIM_R,0.05,
		TRYK_shirts_DENIM_BWH,0.05,TRYK_shirts_DENIM_BL,0.05,TRYK_shirts_DENIM_BK,0.05,TRYK_shirts_DENIM_ylb,0.05,
		TRYK_shirts_DENIM_od,0.05,
		TRYK_U_B_PCUGs_OD,0.05,TRYK_U_B_PCUGs_gry,0.05,TRYK_U_B_PCUGs_BLK,0.05,TRYK_U_B_PCUGs_OD_R,0.05,TRYK_U_B_PCUGs_gry_R,0.05
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
class gct_sfgen_casu_operator_m4a1 : gct_sf_gen_infantry_base {
	scope = 2;
	GCT_Author_Macro
	displayName = "Operator (M4A1)";
};
class gct_sfgen_casu_operator_hk416d10 : gct_sfgen_casu_operator_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416A5D10)";
	
	uniformClass = "TRYK_U_B_PCUGs_BLK";
	linkedItems[] = {"H_Cap_blk","lbt_operator_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_blk","lbt_operator_od", Standard_Equipment};	
	
	weapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};	
};
class gct_sfgen_casu_operator_hk416d145 : gct_sfgen_casu_operator_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416A5D145)";
	
	uniformClass = "TRYK_U_pad_hood_Cl";
	linkedItems[] = {"H_Watchcap_khk","lbt_operator_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_khk","lbt_operator_od", Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};	
};
class gct_sfgen_casu_operator_hk416d145m320 : gct_sfgen_casu_operator_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416 M320)";
	
	uniformClass = "TRYK_U_pad_hood_Blk";
	linkedItems[] = {"H_Watchcap_cbr","lbt_weapons_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_cbr","lbt_weapons_od", Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d145_m320_eot552","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d145_m320_eot552","Throw","Put"};	
	backpack="fatpack_od";
	magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red"		
	};
	respawnMagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red"	
	};	
};
class gct_sfgen_casu_operator_m136 : gct_sfgen_casu_operator_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (M136)";
	
	class SpeechVariants {
	class Default {
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
	
	linkedItems[] = {"H_Cap_tan","lbt_light_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_tan","lbt_light_od", Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","rhs_weap_M136","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","rhs_weap_M136","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_m136_mag"
	};
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_m136_mag"
	};
	secondaryAmmoCoef = 0.5;
};
//MG's m249
class gct_sfgen_casu_operator_m249 : gct_sfgen_casu_operator_m4a1 {
	displayName = "Operator (M249)";
	
	class SpeechVariants {
	class Default {
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
	
	linkedItems[] = {"H_Cap_tan","lbt_light_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_tan","lbt_light_od", Standard_Equipment};
	
	weapons[] = {"rhs_weap_m249_pip_S_para","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_S_para","Binocular","Throw","Put"};
	magazines[] = {
		"rhs_200rnd_556x45_T_SAW",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_an_m8hc"
		};
	respawnMagazines[] = {
		"rhs_200rnd_556x45_T_SAW",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_an_m8hc"
	};
	backpack="GCT_B_WDL_M249";
	secondaryAmmoCoef = 0.5;
};
class gct_sfgen_casu_operator_m249_ass : gct_sfgen_casu_operator_m4a1 {
	displayName = "Operator (Asystent M249)";
	
	linkedItems[] = {"TRYK_H_woolhat","lbt_light_od", Standard_Equipment};
	respawnLinkedItems[] = {"TRYK_H_woolhat","lbt_light_od", Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Binocular","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Binocular","Throw","Put"};	
	
	backpack="GCT_B_WDL_M249";
};
// Leaders
class gct_sfgen_casu_co : gct_sfgen_casu_operator_m4a1 {
	displayName= "Dowodca Elementu";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

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

	linkedItems[] = {"H_Cap_oli_hs","lbt_comms_od",Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_oli_hs","lbt_comms_od",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",		
		"rhs_mag_m18_green"
	};
	respawnMagazines[] = {
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",		
		"rhs_mag_m18_green"
	};
};
class gct_sfgen_casu_sl : gct_sfgen_casu_operator_m4a1 {
	displayName= "Dowodca Druzyny";
	
	Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_bowman_cap","lbt_tl_od",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_bowman_cap","lbt_tl_od",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
            "rhs_mag_M714_white",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red"	
		};
		respawnMagazines[] =
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
            "rhs_mag_M714_white",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red"	
		};
        backpack="GCT_B_WDL_US_SL";
};
class gct_sfgen_casu_tl : gct_sfgen_casu_operator_m4a1 {
	displayName= "Dowodca Sekcji";
	
	Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_bowman_cap","lbt_tl_od",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_bowman_cap","lbt_tl_od",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",	
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"		
		};
	respawnMagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",	
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"		
		};
	backpack="GCT_B_WDL_US_SL";
};
// Support
class gct_sfgen_casu_engineer : gct_sfgen_casu_operator_m4a1 {
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

        linkedItems[] = {"H_Watchcap_blk","lbt_medical_od", Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_blk","lbt_medical_od", Standard_Equipment};

	weapons[] = {"gct_rhs_weap_hk416d10_LMT_eot552","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_LMT_eot552","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
	};
class gct_sfgen_casu_explosives : gct_sfgen_casu_operator_m4a1 {
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
	
        linkedItems[] = {"H_Watchcap_camo","lbt_comms_od",  Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_camo","lbt_comms_od",  Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m4a1_bII_KAC_wd_eotech","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_KAC_wd_eotech","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"APERSMine_Range_Mag",
		"rhs_mag_m18_red"
	};
	respawnMagazines[] = 
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"APERSMine_Range_Mag",
		"rhs_mag_m18_red"
	};
	backpack="GCT_B_Explo";
};
class gct_sfgen_casu_uav : gct_sfgen_casu_operator_m4a1 {
	GCT_Author_Macro
	displayName= "Operator UAV";

	linkedItems[] = {"H_Watchcap_blk","lbt_comms_od",  Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_blk","lbt_comms_od",  Standard_Equipment};

	weapons[] = {"gct_rhs_weap_hk416d10_LMT_eotxps3","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_LMT_eotxps3","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};

	backpack="B_rhsusf_B_BACKPACK";
};
class gct_sfgen_casu_medic : gct_sfgen_casu_operator_m4a1 {

	GCT_Author_Macro
	displayName= "Medyk";

	weapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	attendant =1;
	icon="iconManMedic";
	backpack="GCT_B_WDL_US_Medic";
	picture="pictureHeal";
};