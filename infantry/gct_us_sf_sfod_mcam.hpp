//Baza
class gct_sf_sfod_infantry_base : rhsusf_infantry_usmc_base {
	editorSubcategory = "gct_sfod_mcam";
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	vehicleClass = "gct_sfod_mcam";
	uniformClass = "rhs_uniform_g3_mc";
	GCT_Author_Macro
	asr_ai_level = 9;
	camouflage = 1.2;	
	
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

	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","rhsusf_acc_nt4_tan"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","rhsusf_acc_nt4_tan"};

	linkedItems[] = {"rhsusf_opscore_mc_pelt","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mc_pelt","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

	//to do extend list
	headgearList[] = {
		"rhsusf_opscore_mc_pelt_nsw",0.25,
		"rhsusf_opscore_mc_pelt",0.25,
		"rhsusf_opscore_mc",0.25,
		"rhsusf_opscore_mc_cover",0.20,
		"rhsusf_opscore_mc_cover_pelt",0.20,
		"rhsusf_opscore_ut",0.15,
		"rhsusf_opscore_ut_pelt",0.15,
		"rhsusf_protech_helmet_rhino_ess",0.10,
		"rhsusf_protech_helmet_rhino",0.10,
		"rhsusf_protech_helmet_ess",0.10,
		"rhsusf_protech_helmet",0.10,
		"H_Booniehat_khk",0.01
	};
	
	class EventHandlers: EventHandlers {
		class PO_RandomizeHats {
			init = "if (local (_this select 0)) then {[(_this select 0),[],[]] call BIS_fnc_unitHeadgear;};";
		};
		/*class LOP_CIV_EH {
			init = "_this call lop_fnc_randomUniform";
		};*/
	};
};
//Rifleman
class gct_sf_sfod_mcam_m4a1 : gct_sf_sfod_infantry_base {
	scope = 2;
	GCT_Author_Macro
	displayName = "Operator (M4A1)";
};
class gct_sf_sfod_mcam_hk416d10 : gct_sf_sfod_mcam_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416A5D10)";
	
	uniformClass = "rhs_uniform_g3_mc";
	linkedItems[] = {"rhsusf_opscore_mc","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mc","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};	
	
	weapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};	
};
class gct_sf_sfod_mcam_hk416d145 : gct_sf_sfod_mcam_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416A5D145)";
	
	uniformClass = "rhs_uniform_g3_mc";
	linkedItems[] = {"rhsusf_opscore_ut_pelt","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_ut_pelt","lbt_operator_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};	
};
class gct_sf_sfod_mcam_hk416d145m320 : gct_sf_sfod_mcam_m4a1 {
	GCT_Author_Macro
	displayName = "Operator (HK416 M320)";
	
	uniformClass = "rhs_uniform_g3_mc";
	linkedItems[] = {"rhsusf_protech_helmet_rhino_ess","lbt_weapons_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_protech_helmet_rhino_ess","lbt_weapons_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d145_m320_eot552","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d145_m320_eot552","Throw","Put"};	
	//backpack="fatpack_coy";
	magazines[] = {
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
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
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
class gct_sf_sfod_mcam_m136 : gct_sf_sfod_mcam_m4a1 {
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
	
	linkedItems[] = {"H_Cap_tan","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_tan","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
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
class gct_sf_sfod_mcam_m249 : gct_sf_sfod_mcam_m4a1 {
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
	
	linkedItems[] = {"rhsusf_opscore_mc_pelt_nsw","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mc_pelt_nsw","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m249_para_eot552","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m249_para_eot552","ACE_Vector","Throw","Put"};
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
	backpack="GCT_B_M249";
	secondaryAmmoCoef = 0.5;
};
class gct_sf_sfod_mcam_m249_ass : gct_sf_sfod_mcam_m4a1 {
	displayName = "Operator (Asystent M249)";
	
	linkedItems[] = {"rhsusf_protech_helmet","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_protech_helmet","lbt_light_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_kac_eotech","ACE_Vector","Throw","Put"};	
	
	backpack="GCT_B_M249";
};
// Leaders
class gct_sf_sfod_mcam_co : gct_sf_sfod_mcam_m4a1 {
	displayName= "Dowodca Elementu";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};

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

	linkedItems[] = {"rhsusf_opscore_mc","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mc","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
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
class gct_sf_sfod_mcam_sl : gct_sf_sfod_mcam_m4a1 {
	displayName= "Dowodca Druzyny";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_opscore_mc_pelt","lbt_tl_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mc_pelt","lbt_tl_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
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
    backpack="GCT_B_DES_SEAL_SL";
};
class gct_sf_sfod_mcam_tl : gct_sf_sfod_mcam_m4a1 {
	displayName= "Dowodca Sekcji";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_tan"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_opscore_ut","lbt_tl_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_ut","lbt_tl_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

	weapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
	};
	respawnWeapons[] = {
		"gct_rhs_weap_hk416d145_m320_SU230",
		"Throw",
		"Put",
		"ACE_Vector"
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
	backpack="GCT_B_DES_SEAL_SL";
};
// Support
class gct_sf_sfod_mcam_engineer : gct_sf_sfod_mcam_m4a1 {
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

  linkedItems[] = {"H_Watchcap_blk","lbt_medical_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_blk","lbt_medical_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

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
};
class gct_sf_sfod_mcam_explosives : gct_sf_sfod_mcam_m4a1 {
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
	
  linkedItems[] = {"H_Watchcap_camo","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_camo","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","Throw","Put"};
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
class gct_sf_sfod_mcam_uav : gct_sf_sfod_mcam_m4a1 {
	GCT_Author_Macro
	displayName= "Operator UAV";

	linkedItems[] = {"H_Watchcap_blk","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"H_Watchcap_blk","lbt_comms_mc","A3_GPNVG18b_REC_F",Standard_Equipment};

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
class gct_sf_sfod_mcam_medic : gct_sf_sfod_mcam_m4a1 {

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
	respawnMagazines[] = {
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
	backpack="GCT_B_US_Medic";
	picture="pictureHeal";
};