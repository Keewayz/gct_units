//G3
class Operator_aor1: B_Soldier_F {
		faction = "BLU_F";
		vehicleClass = "Spec4";
		displayName = "Operator (AOR1)";
		hiddenSelections[] = {"Camo", "Camo2", "Gloves", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"gct_extrastuff\data\g3\gen3_aor1_co.paa", "gct_extrastuff\data\g3\fer_co.paa", "gct_extrastuff\data\g3\Mechanix_tan_co.paa"};
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "Gen3_aor1";
		linkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
class Operator_aor2: B_Soldier_F {
		faction = "BLU_F";
		vehicleClass = "Spec4";
		displayName = "Operator (AOR2)";
		hiddenSelections[] = {"Camo", "Camo2", "Gloves", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"gct_extrastuff\data\g3\gen3_aor2_co.paa", "gct_extrastuff\data\g3\fer_blk_co.paa", "gct_extrastuff\data\g3\Mechanix_green_co.paa"};
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "Gen3_aor2";
		linkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	/*
class Operator_cce: B_Soldier_F {
		faction = "BLU_F";
		vehicleClass = "Spec4";
		displayName = "Operator (CCE)";
		hiddenSelections[] = {"Camo", "Camo2", "Gloves", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"gct_extrastuff\data\g3\gen3_fr_co.paa", "gct_extrastuff\data\g3\fer_blk_co.paa", "gct_extrastuff\data\g3\Mechanix_green_co.paa"};
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "Gen3_cce";
		linkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	*/
class Operator_3c: B_Soldier_F {
		faction = "BLU_F";
		vehicleClass = "Spec4";
		displayName = "Operator (3C)";
		hiddenSelections[] = {"Camo", "Camo2", "Gloves", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"gct_extrastuff\data\g3\gen3_3c_co.paa", "gct_extrastuff\data\g3\fer_co.paa", "gct_extrastuff\data\g3\Mechanix_tan_co.paa"};
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "Gen3_aor1";
		linkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetB_light", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	
//Nomexy
class B_OVERALL_SAGEBLK_Zabb_2_F;
class GCT_grom_Nomex_olv: B_OVERALL_SAGEBLK_Zabb_2_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\NomexZB_olv_co.paa","tryk_unit\data\Nomex_grove_blk.paa"};
};
class GCT_grom_Nomex_gran: B_OVERALL_SAGEBLK_Zabb_2_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\NomexZB_gran_co.paa","tryk_unit\data\Nomex_grove_blk.paa"};
};
//Fleece
class B_fleece_UCP_F;
class GCT_grom_Fleece_wz: B_fleece_UCP_F {
	scope = 1;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa"};
};
//PCU
class B_PCU_UCP_F;
class GCT_grom_PCU_GRY_WZ: B_PCU_UCP_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_Grey_co.paa"};
};
class GCT_grom_PCU_OD_WZ: B_PCU_UCP_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_OD_co.paa"};
};
class GCT_grom_PCU_BLK_WZ: B_PCU_UCP_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_co.paa"};
};
class B_PCU_UCP_R_F;
class GCT_grom_PCU2_GRY_WZ: B_PCU_UCP_R_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_Grey_co.paa"};
};
class GCT_grom_PCU2_OD_WZ: B_PCU_UCP_R_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_OD_co.paa"};
};
class GCT_grom_PCU2_BLK_WZ: B_PCU_UCP_R_F {
	scope = 1;
	hiddenSelections[] = {"camo","camo3"};
	hiddenSelectionsTextures[] = {"gct_extrastuff\data\grom\do_1_wz_co.paa","tryk_unit\data\flecktarn_co.paa"};
};