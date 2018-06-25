class gct_rhsusf_usaf_pilot_kha : rhsusf_airforce_jetpilot {
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	scope = 2;
	backpack="";
	editorSubcategory = "gct_rhs_usaf";
	vehicleclass ="gct_rhs_usaf";
	displayName= "Helicopter Pilot (Khaki)";
	uniformClass = "TRYK_OVERALL_SAGE";
    GCT_Author_Macro
	
	Items[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	RespawnItems[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	
	linkedItems[] = {"PSZ_H_THL5","lbt_pouchless_od","TRYK_ShemaghESSOD_NV","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	respawnLinkedItems[] = {"PSZ_H_THL5","lbt_pouchless_od","TRYK_ShemaghESSOD_NV","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	};
class gct_rhsusf_usaf_pilot_coy : rhsusf_airforce_jetpilot {
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	scope = 2;
	backpack="";
	editorSubcategory = "gct_rhs_usaf";
	vehicleclass ="gct_rhs_usaf";
	displayName= "Helicopter Pilot (Coyote)";
	uniformClass = "TRYK_OVERALL_nok_flesh";
	GCT_Author_Macro
	
	Items[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	RespawnItems[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	
	linkedItems[] = {"PSZ_H_THL5","lbt_pouchless_coy","TRYK_ShemaghESSOD_NV","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	respawnLinkedItems[] = {"PSZ_H_THL5","lbt_pouchless_coy","TRYK_ShemaghESSOD_NV","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	};
class gct_rhsusf_usaf_pilot_ucp : rhsusf_airforce_jetpilot {
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	scope = 2;
	backpack="";
	editorSubcategory = "gct_rhs_usaf";
	vehicleclass ="gct_rhs_usaf";
	displayName= "Helicopter Pilot (UCP)";
	uniformClass = "TRYK_U_B_fleece_UCP";
    GCT_Author_Macro
	
	Items[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	RespawnItems[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACRE_PRC148"};
	
	linkedItems[] = {"PSZ_H_THL5","lbt_pouchless_od","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	respawnLinkedItems[] = {"PSZ_H_THL5","lbt_pouchless_od","ItemGPS","ItemMap","ItemCompass","ItemWatch"};
	};
class gct_rhsusf_airforce_jetpilot : rhsusf_airforce_jetpilot {
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	scope = 2;
	editorSubcategory = "gct_rhs_usaf";
	vehicleclass ="gct_rhs_usaf";
	displayName= "Jet Pilot";
    GCT_Author_Macro
	magazines[] = 	{
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhs_mag_m18_purple",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhs_mag_m18_purple",
		"rhs_mag_an_m8hc"
	};
	
	Items[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACRE_PRC148"};
	RespawnItems[] = {"ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACRE_PRC148"};
};
//SOAR
class gct_rhsusf_airforce_soar : rhsusf_airforce_jetpilot {
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	scope = 2;
	editorSubcategory = "gct_rhs_usaf";
	vehicleclass ="gct_rhs_usaf";
	displayName= "Helicopter Pilot (SOAR)";
    GCT_Author_Macro
	
	uniformClass = "rhs_uniform_g3_mc";
	
	magazines[] = 	{
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"Chemlight_red",
		"Chemlight_red",
		"Chemlight_green",
		"Chemlight_green",
		"SmokeShellRed",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = {
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"Chemlight_red",
		"Chemlight_red",
		"Chemlight_green",
		"Chemlight_green",
		"SmokeShellRed",
		"rhs_mag_an_m8hc"
	};
	
	Items[] = {
		"ACE_EarPlugs",
		"ACE_quikclot",
		"ACE_Flashlight_XL50",
		"ACRE_PRC148",
		"ACE_HandFlare_Red",
		"ACE_IR_Strobe_Item",
		"ACE_tourniquet",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_morphine",
		"ACE_adenosine",
		"ACE_epinephrine",
		"ACE_atropine",
		"ACE_personalAidKit"
	};
	
	RespawnItems[] = {		
		"ACE_EarPlugs",
		"ACE_quikclot",
		"ACE_Flashlight_XL50",
		"ACRE_PRC148",
		"ACE_HandFlare_Red",
		"ACE_IR_Strobe_Item",
		"ACE_tourniquet",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_morphine",
		"ACE_adenosine",
		"ACE_epinephrine",
		"ACE_atropine",
		"ACE_personalAidKit"
	};
	
	linkedItems[] = {"rhsusf_hgu56p_black","lbt_tl_coy","A3_GPNVG18b_REC_F","ItemGPS",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_hgu56p_black","lbt_tl_coy","A3_GPNVG18b_REC_F","ItemGPS",Standard_Equipment};

	weapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","Rangefinder","Throw","Put"};
	respawnWeapons[] = {"gct_rhs_weap_m4a1_bII_KAC_bk_eotech","Rangefinder","Throw","Put"};
	
};
class gct_rhsusf_airforce_7weds : gct_rhsusf_airforce_SOAR {
	displayName = "Absolete";
	scope = 1;
};