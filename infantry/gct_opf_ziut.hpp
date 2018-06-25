class LOP_AFR_Base_IND;
class gct_opf_ziut_favela_base : LOP_AFR_Base_IND {
	side = 0;
	faction = "gct_units_opf";	
	uniformClass = "U_C_Mechanic_01_F";
	modelSides[] = {3, 2, 1, 0};
	rds_randomCloths[] = {
            LOP_U_AFR_Civ_01,0.25,LOP_U_AFR_Civ_02,0.25,LOP_U_AFR_Civ_03,0.25,
			LOP_U_AFR_Civ_04,0.25,LOP_U_AFR_Civ_05,0.25,LOP_U_AFR_Civ_06,0.25,
            LOP_U_AFR_Civ_01S,0.25,LOP_U_AFR_Civ_02S,0.25,LOP_U_AFR_Civ_03S,0.25,
			LOP_U_AFR_Civ_04S,0.25,LOP_U_AFR_Civ_05S,0.25,LOP_U_AFR_Civ_06S,0.25,
			U_C_Mechanic_01_F,0.10
	};
	headgearList[] = {
            "", 0.9, 
		//Bonnie
            "PO_H_Booniehat_khk", 0.01,
            "PO_H_Booniehat_oli", 0.01,
            "PO_H_Booniehat_grn", 0.01,
            "PO_H_Booniehat_tan", 0.01,
            "PO_H_Booniehat_dirty", 0.01,
		//Bandana
            "PO_H_Bandanna_blu", 0.2,
            "PO_H_Bandanna_gry", 0.2,
            "PO_H_Bandanna_sand", 0.2,
			"PO_H_Bandanna_sgg",0.2,	
        //CAP
			"PO_H_Cap_blu", 0.01,
            "PO_H_Cap_red", 0.01,
			"PO_H_Cap_grn", 0.01, 
            "PO_H_Cap_oli", 0.01,
		//SHEMAG
			"LOP_H_Shemag_OLV",0.1
    };	
};
class gct_opf_ziut_favela_AKMS : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (AKMS)";
	weapons[] = {
		"rhs_weap_akm",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"rhs_weap_akm",
		"Throw",
		"Put"
	};
	magazines[] = {
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm"
	};
	respawnMagazines[] = {
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm"
	};
	linkedItems[] = {"V_TacChestrig_grn_F"};
	respawnLinkedItems[] = {"V_TacChestrig_grn_F"};
};
class gct_opf_ziut_favela_pompa : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (Pompka)";
	weapons[] = {
		"UK3CB_BAF_L128A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"UK3CB_BAF_L128A1",
		"Throw",
		"Put"
	};
	magazines[] = {
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs"	
	};
	respawnmagazines[] = {
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs",
		"UK3CB_BAF_12G_Slugs"	
	};
	linkedItems[] = {"V_LegStrapBag_black_F"};
	respawnLinkedItems[] = {"V_LegStrapBag_black_F"};
};
class gct_opf_ziut_favela_pm : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (PM)";
	weapons[] = {
		"rhs_weap_pp2000",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"rhs_weap_pp2000",
		"Throw",
		"Put"
	};
	magazines[] = {
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20"	
	};
	respawnmagazines[] = {
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n21_20"	
	};
	linkedItems[] = {"rds_pistol_holster"};
	respawnLinkedItems[] = {"rds_pistol_holster"};
};
class gct_opf_ziut_favela_mp5 : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (MP5)";
		weapons[] = {
		"UK3CB_BAF_L91A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"UK3CB_BAF_L91A1",
		"Throw",
		"Put"
	};
	magazines[] = {
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd"	
	};
	respawnmagazines[] = {
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_9_30Rnd"	
	};
	linkedItems[] = {"V_BandollierB_rgr"};
	respawnLinkedItems[] = {"V_BandollierB_rgr"};
};
class gct_opf_ziut_favela_makarov : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (Makarov)";
		weapons[] = {
		"rhs_weap_makarov_pm",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"rhs_weap_makarov_pm",
		"Throw",
		"Put"
	};
	magazines[] = {
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S"	
	};
	respawnmagazines[] = {
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S"	
	};
	linkedItems[] = {"rds_pistol_holster"};
	respawnLinkedItems[] = {"rds_pistol_holster"};
};
class gct_opf_ziut_favela_m16 : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (M16)";
		weapons[] = {
		"gst_m16a2",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"gst_m16a2",
		"Throw",
		"Put"
	};
	magazines[] = {
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag"	
	};
	respawnmagazines[] = {
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag"	
	};
	linkedItems[] = {"V_Chestrig_blk"};
	respawnLinkedItems[] = {"V_Chestrig_blk"};
};
class gct_opf_ziut_favela_m4 : gct_opf_ziut_favela_base {
	scope = 2;
	displayname = "Diler (M4)";
		weapons[] = {
		"rhs_weap_m4_carryhandle",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"rhs_weap_m4_carryhandle",
		"Throw",
		"Put"
	};
	magazines[] = {
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag"	
	};
	respawnmagazines[] = {
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag"	
	};
	linkedItems[] = {"V_Pocketed_black_F"};
	respawnLinkedItems[] = {"V_Pocketed_black_F"};
};