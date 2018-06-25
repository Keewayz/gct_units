class EWK_HMMWV_Base;
class EWK_M997A2_Ambulance_Base;
class EWK_M997A2_Ambulance_NoBackLights_Base;
class EWK_HMMWV_SOV_Base;
class HMMWV_Base;
//EWK + HAFM
class EWK_m1151_TOW_deployment: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
	displayname = "HMMWV M1151 TOW (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="EWK";
};
class EWK_m1151_m2_deployment: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1151 M2 Deploy (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";	
};
class EWK_HMMWV_Light: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M998A1 (D)";	
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="EWK";
};
class EWK_HMMWV_Medevac: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1114 Medevac (D)";	
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="EWK";
};
class EWK_M997A2_Ambulance: EWK_M997A2_Ambulance_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M997A2 (W)";	
	crew = "gct_rhsusf_usmc_marpat_wd_rifleman";
	author="EWK";
};
class EWK_M997A2_Ambulance_Tan: EWK_M997A2_Ambulance {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M997A2 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";	
};
class EWK_M997A2_Ambulance_NoBackLights: EWK_M997A2_Ambulance_NoBackLights_Base {
	displayname = "HMMWV M997A2 (W)";
	crew = "gct_rhsusf_usmc_marpat_wd_rifleman";
    author="EWK";
	scope=1;
	scopecurator=0;
};
class EWK_M997A2_Ambulance_Tan_NoBackLights: EWK_M997A2_Ambulance_NoBackLights {
	displayname = "HMMWV M997A2 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";
	scope=1;
	scopecurator=0;
};
class EWK_M1114_Armored: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1114 M240 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="EWK";
};
class EWK_m1151_m240_deployment: EWK_HMMWV_Base {
 	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1151 M240 Deploy (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="EWK";
};
class EWK_M998A2_sov: EWK_HMMWV_SOV_Base {
	displayname = "HMMWV M998A2 Mk19";
	author="EWK";
	scope=1;
	scopecurator=0;
};
class EWK_M998A2_sov_M2: EWK_HMMWV_SOV_Base {
	displayname = "HMMWV M998A2 M2";
	author="EWK";
	scope=1;
	scopecurator=0;
};
class EWK_m1151_m2_deployment_Bumper: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1151 M2 Frag6 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";	
};
class EWK_m1151_m2_deployment_Jtac: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1151 M2 JTAC (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";	
};
class EWK_m1151_m2_deployment_AT4: EWK_HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1151 M2 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
    author="EWK";	
};
class HMMWV_M2: HMMWV_Base {
	scope=1;
	scopecurator=0;	
};
class HMMWV_TOW: HMMWV_Base {
	scope=1;
	scopecurator=0;	
};
class HMMWV_MK19: HMMWV_Base {
	scope=1;
	scopecurator=0;	
};
class HMMWV: HMMWV_Base {
	scope=1;
	scopecurator=0;
};
class HMMWV2_M2: HMMWV_M2 {
	scope=1;
	scopecurator=0;
};
class HMMWV2_TOW: HMMWV_TOW {
	scope=1;
	scopecurator=0;
};
class HMMWV2_MK19: HMMWV_MK19 {
	scope=1;
	scopecurator=0;
};
class HMMWV2: HMMWV_Base {
	scope=1;
	scopecurator=0;
};
class HMMWV_M1035: HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV M1035 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
	author="HAFM";
};
class HMMWV_M1151_M2: HMMWV_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	author="HAFM";
	displayname = "HMMWV M1151 M2 (D)";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
};
class M1114_AGS_ACR: HMMWV_M1151_M2 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	author="HAFM";	
	displayname = "HMMWV M1114 AGS";
	crew = "gct_rhsusf_usmc_marpat_d_rifleman";
};
//MRAPy
/*class DAR_MaxxPro_Base;
class DAR_MaxxPro : DAR_MaxxPro_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV MaxxPro M2";	
};
class DAR_MaxxPro_MK19 : DAR_MaxxPro_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV MaxxPro Mk19";	
}; 
class DAR_MaxxProDeploy : DAR_MaxxPro_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV MaxxPro Dash Deploy M2";	
}; 
class DAR_MaxxProDXM : DAR_MaxxPro_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV MaxxPro Dash M2";	
}; 
class DAR_MaxxProPlus : DAR_MaxxPro_Base {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	displayname = "HMMWV MaxxPro Plus M2";	
};*/