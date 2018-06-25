//Baza
class gct_sf_pl_grom_cgm_base : rhsusf_infantry_usmc_base {
	editorSubcategory = "gct_grom_cgm";
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	vehicleClass = "gct_grom_cgm";
	uniformClass = "psf_uniform_g3_cgm_wb";
	GCT_Author_Macro
	asr_ai_level = 8;
	camouflage = 1.2;	
	
	genericNames = "PSZ_PolishMen";
	identityTypes[] = {"PSZ_Man"};	
	
	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","Throw","Put"};
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

	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","rhsusf_acc_nt4_black"};

	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

	headgearList[] = {
		"PSF_helm_opscore_cgm_cover",0.15,
		"PSF_helm_opscore_cgm_cover_pelt",0.15,
		"PSF_helm_opscore_cgm_cover_pelt_cam",0.15,
		"PSF_helm_opscore_cgm_cover_pelt_nsw",0.15,	
		"PSF_helm_opscore_cgm",0.05,
		"PSF_helm_opscore_cgm_pelt",0.05,
		"PSF_helm_opscore_cgm_pelt_nsw",0.05,
		"rhsusf_opscore_mar_ut",0.15,
		"rhsusf_opscore_mar_ut_pelt",0.15,
		"rhsusf_opscore_ut_pelt",0.15,
		"rhsusf_opscore_ut",0.15
	};
	rds_randomCloths[] = {
		psf_uniform_g3_cgm_wr,0.05,psf_uniform_g3_cgm_od,0.25,psf_uniform_g3_cgm_wb,0.15,psf_uniform_g3_cgm_cb,0.05
	};
	
	class EventHandlers: EventHandlers {
		class PO_RandomizeHats {
			init = "if (local (_this select 0)) then {[(_this select 0),[],[]] call BIS_fnc_unitHeadgear;};";
		};
		class LOP_CIV_EH {
			init = "_this call lop_fnc_randomUniform";
		};
	};
};
//Rifleman
class gct_sf_pl_grom_cgm_hk416d10 : gct_sf_pl_grom_cgm_base {
	scope = 2;
	GCT_Author_Macro
	displayName = "Operator (HK416A5D10)";
	
	uniformClass = "psf_uniform_g3_cgm_wb";
	linkedItems[] = {"PSF_helm_opscore_cgm_cover","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};	
	
	weapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_eotxps3","Throw","Put"};	
};
class gct_sf_pl_grom_cgm_hk416d145 : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName = "Operator (HK416A5D145)";
	
	uniformClass = "psf_uniform_g3_cgm_wb";
	linkedItems[] = {"PSF_helm_opscore_cgm_pelt","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_pelt","lbt_operator_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d145_SU230","Throw","Put"};	
};
class gct_sf_pl_grom_cgm_hk416d145m320 : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName = "Operator (HK416 M320)";
	
	uniformClass = "psf_uniform_g3_cgm_wb";
	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_cam","lbt_weapons_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_cam","lbt_weapons_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
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
//RPG-7
class gct_sf_pl_grom_cgm_rpg : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName = "Operator (RPG-7)";
	
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
	
	linkedItems[] = {"PSF_helm_opscore_cgm","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","rhs_weap_rpg7_pgo","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","rhs_weap_rpg7_pgo","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
		"rhs_mag_an_m8hc"
	};
	secondaryAmmoCoef = 0.5;
	backpack = "GCT_B_RPG7";
};
class gct_sf_pl_grom_cgm_rpg_ass : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName = "Operator (Asystent RPG-7)";
	backpack = "GCT_B_RPG7";
};
//MAAWS
class gct_sf_pl_grom_cgm_MAAWS : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName = "Operator (Carl Gustaf)";
	
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
	
	linkedItems[] = {"PSF_helm_opscore_cgm","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","rhs_weap_maaws_optic","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","rhs_weap_maaws_optic","Throw","Put"};
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
		"rhs_mag_an_m8hc"
	};
	secondaryAmmoCoef = 0.5;
	backpack = "GCT_B_WDL_SF_MAAWS";
};
//MG's m249
class gct_sf_pl_grom_cgm_m249 : gct_sf_pl_grom_cgm_hk416d10 {
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
	
	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
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
	backpack="GCT_B_WDL_M249";
	secondaryAmmoCoef = 0.5;
};
class gct_sf_pl_grom_cgm_m249_ass : gct_sf_pl_grom_cgm_hk416d10 {
	displayName = "Operator (Asystent M249)";
	
	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt","lbt_light_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	
	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","ACE_Vector","Throw","Put"};	
	
	backpack="GCT_B_WDL_M249";
};
// Leaders
class gct_sf_pl_grom_cgm_co : gct_sf_pl_grom_cgm_hk416d10 {
	displayName= "Dowodca Elementu";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};

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

	linkedItems[] = {"PSF_helm_opscore_cgm_cover","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

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
class gct_sf_pl_grom_cgm_sl : gct_sf_pl_grom_cgm_hk416d10 {
	displayName= "Dowodca Druzyny";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_tl_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_tl_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

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
    backpack="GCT_B_WDL_SEAL_SL";
};
class gct_sf_pl_grom_cgm_tl : gct_sf_pl_grom_cgm_hk416d10 {
	displayName= "Dowodca Sekcji";
	
	Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_MapTools","ACRE_PRC148","rhsusf_acc_nt4_black"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"PSF_helm_opscore_cgm","lbt_tl_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm","lbt_tl_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

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
	backpack="GCT_B_WDL_SEAL_SL";
};
// Support
class gct_sf_pl_grom_cgm_engineer : gct_sf_pl_grom_cgm_hk416d10 {
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

  linkedItems[] = {"PSF_helm_opscore_cgm_pelt","lbt_medical_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_pelt","lbt_medical_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

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
class gct_sf_pl_grom_cgm_explosives : gct_sf_pl_grom_cgm_hk416d10 {
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
	
  linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_cam","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_cam","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	uniformClass = "psf_uniform_g3_cgm_od_eod";
	rds_randomCloths[] = {
		psf_uniform_g3_cgm_od_eod,0.25,psf_uniform_g3_cgm_wb,0.05
	};
	
	
	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eotxps3","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eotxps3","Throw","Put"};
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
class gct_sf_pl_grom_cgm_uav : gct_sf_pl_grom_cgm_hk416d10 {
	GCT_Author_Macro
	displayName= "Operator UAV";

	linkedItems[] = {"rhsusf_opscore_rg_cover","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_rg_cover","lbt_comms_coy","A3_GPNVG18b_REC_F",Standard_Equipment};

	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_SU230","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_SU230","Throw","Put"};
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
class gct_sf_pl_grom_cgm_medic : gct_sf_pl_grom_cgm_hk416d10 {

	GCT_Author_Macro
	displayName= "Medyk";

	weapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_hk416d10_wd_LMT_eot552","Throw","Put"};
	linkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_medical_coy","A3_GPNVG18b_REC_F",Standard_Equipment};
	respawnLinkedItems[] = {"PSF_helm_opscore_cgm_cover_pelt_nsw","lbt_medical_coy","A3_GPNVG18b_REC_F",Standard_Equipment};	
	uniformClass = "psf_uniform_g3_cgm_od_med";
	rds_randomCloths[] = {
		psf_uniform_g3_cgm_od_med,0.25,psf_uniform_g3_cgm_wb,0.05
	};
	
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
	backpack="GCT_B_WDL_US_Medic";
	picture="pictureHeal";
};