class NATO_Box_Base;
class EAST_Box_Base;
class ReammoBox_F;

//crates
class Box_NATO_Wps_F: NATO_Box_Base {
	class EventHandlers;
	scope=1; scopecurator=1;
};
class Box_NATO_WpsSpecial_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_NATO_Ammo_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_NATO_AmmoOrd_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_NATO_Grenades_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_NATO_Support_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_Wps_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_WpsSpecial_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_Ammo_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_AmmoOrd_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_Grenades_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_Support_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_Ammo_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class Box_Wps_F: Box_Ammo_F {
scope=1; scopecurator=1;
};
class Land_Box_AmmoOld_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class IND_Box_Base: ReammoBox_F {
scope=1; scopecurator=1;
};
class Box_NATO_WpsLaunch_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_NATO_AmmoVeh_F: NATO_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_WpsLaunch_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_East_AmmoVeh_F: EAST_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_Wps_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_WpsSpecial_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_WpsLaunch_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_Ammo_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_AmmoOrd_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_Grenades_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_Support_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class Box_IND_AmmoVeh_F: IND_Box_Base {
scope=1; scopecurator=1;
};
class B_supplyCrate_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class O_supplyCrate_F: B_supplyCrate_F {
scope=1; scopecurator=1;
};
class I_supplyCrate_F: B_supplyCrate_F {
scope=1; scopecurator=1;
};
class IG_supplyCrate_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class C_supplyCrate_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class FIA_Box_Base_F: ReammoBox_F {
scope=1; scopecurator=1;
};
class Box_FIA_Wps_F: FIA_Box_Base_F {
scope=1; scopecurator=1;
};
class Box_FIA_Ammo_F: FIA_Box_Base_F {
scope=1; scopecurator=1;
};
class Box_FIA_Support_F: FIA_Box_Base_F {
scope=1; scopecurator=1;
};
//Infantry
class SoldierWB;
class B_Soldier_base_F;
class B_Soldier_03_f;
class B_Soldier_02_f;
class B_Soldier_04_f;
class B_Soldier_05_f;
class B_Soldier_diver_base_F;
class B_Soldier_recon_base;
class B_Soldier_sniper_base_F;
class B_Soldier_support_base_F;
class B_CTRG_Soldier_3_F;

//NATO infantry
class B_Soldier_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_RangeMaster_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_Soldier_lite_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_Soldier_GL_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_AR_F: B_Soldier_02_f {
scope=1; scopecurator=1;
}; 
class B_Soldier_SL_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_Soldier_TL_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_soldier_M_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_LAT_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_medic_F: B_Soldier_02_f {
scope=1; scopecurator=1;
};
class B_soldier_repair_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_exp_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_Helipilot_F: B_Soldier_04_f {
scope=1; scopecurator=1;
};
class B_Soldier_A_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_AT_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_AA_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_engineer_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_crew_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_officer_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_Pilot_F: B_Soldier_05_f {
scope=1; scopecurator=1;
};
class B_soldier_PG_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_soldier_UAV_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_diver_F: B_Soldier_diver_base_F {
scope=1; scopecurator=1;
};
class B_diver_TL_F: B_Soldier_diver_base_F {
scope=1; scopecurator=1;
};
class B_diver_exp_F: B_Soldier_diver_base_F {
scope=1; scopecurator=1;
};
class B_recon_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_LAT_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_exp_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_medic_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_TL_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_M_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_recon_JTAC_F: B_Soldier_recon_base {
scope=1; scopecurator=1;
};
class B_spotter_F: B_Soldier_sniper_base_F {
scope=1; scopecurator=1;
};
class B_sniper_F: B_Soldier_sniper_base_F {
scope=1; scopecurator=1;
};
class B_Story_SF_Captain_F: B_Soldier_02_f {
scope=1; scopecurator=1;
};
class B_Story_Protagonist_F: B_Soldier_02_f {
scope=1; scopecurator=1;
};
class B_Story_Pilot_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F {
scope=1; scopecurator=1;
};
class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f {
scope=1; scopecurator=1;
};
class B_CTRG_soldier_M_medic_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_CTRG_soldier_AR_A_F: B_Soldier_03_f {
scope=1; scopecurator=1;
};
class B_soldier_AAR_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_soldier_AAT_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_soldier_AAA_F: B_soldier_AAT_F {
scope=1; scopecurator=1;
};
class B_support_MG_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_support_GMG_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_support_Mort_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_support_AMG_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_support_AMort_F: B_Soldier_support_base_F {
scope=1; scopecurator=1;
};
class B_HeavyGunner_F : B_Soldier_base_F {
scope=1; scopecurator=1;	
};
class B_Sharpshooter_F : B_Soldier_base_F {
scope=1; scopecurator=1;		
};
class B_CTRG_Sharphooter_F : B_Soldier_base_F {
scope=1; scopecurator=1;		
};
class B_Recon_Sharpshooter_F : B_Soldier_recon_base {
scope=1; scopecurator=1;		
};
class B_soldier_LAT2_F : B_Soldier_base_F {
scope=1; scopecurator=1;	
};
class B_Soldier_VR_F : B_Soldier_base_F {
scope=1; scopecurator=1;	
};
class B_Protagonist_VR_F : B_Soldier_base_F {
scope=1; scopecurator=1;	
}; 
class B_CTRG_Miller_F: B_CTRG_Soldier_3_F {
scope=1; scopecurator=1;	
};  
//FIA
class I_G_Soldier_A_F;
class I_G_Soldier_AR_F;
class I_G_medic_F;
class I_G_engineer_F;
class I_G_Soldier_exp_F;
class I_G_Soldier_GL_F;
class I_G_Soldier_M_F;
class I_G_officer_F;
class I_G_Soldier_F;
class I_G_Soldier_LAT_F;
class I_G_Soldier_LAT2_F;
class I_G_Soldier_lite_F;
class I_G_Sharpshooter_F;
class I_G_Soldier_SL_F;
class I_G_Soldier_TL_F;

class B_G_Soldier_A_F : I_G_Soldier_A_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_AR_F : I_G_Soldier_AR_F {
scope=1; scopecurator=1;	
};  
class B_G_medic_F : I_G_medic_F {
scope=1; scopecurator=1;	
};  
class B_G_engineer_F : I_G_engineer_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_exp_F : I_G_Soldier_exp_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_GL_F : I_G_Soldier_GL_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_M_F : I_G_Soldier_M_F {
scope=1; scopecurator=1;	
};  
class B_G_officer_F : I_G_officer_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_F : I_G_Soldier_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_LAT_F : I_G_Soldier_LAT_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_LAT2_F : I_G_Soldier_LAT2_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_lite_F : I_G_Soldier_lite_F {
scope=1; scopecurator=1;	
};  
class B_G_Sharpshooter_F : I_G_Sharpshooter_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_SL_F : I_G_Soldier_SL_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_TL_F : I_G_Soldier_TL_F {
scope=1; scopecurator=1;	
};  
class I_G_Story_Protagonist_F : B_G_Soldier_F {
scope=1; scopecurator=1;	
};  
class I_G_resistanceLeader_F : I_G_Story_Protagonist_F {
scope=1; scopecurator=1;	
};  
class  I_G_Story_SF_Captain_F : B_G_Soldier_F {
scope=1; scopecurator=1;	
};  
class B_G_Story_Guerilla_01_F : B_G_Soldier_F {
scope=1; scopecurator=1;	
};  
class B_G_Survivor_F : B_G_Soldier_F {
scope=1; scopecurator=1;	
};  
class B_G_Soldier_unarmed_F : B_G_Soldier_F {
scope=1; scopecurator=1;	
};  

//ghillie
class B_ghillie_base_F;
class B_ghillie_ard_F : B_ghillie_base_F {
scope=1; scopecurator=1;		
};
class B_ghillie_lsh_F : B_ghillie_base_F {
scope=1; scopecurator=1;		
};
class B_ghillie_sard_F : B_ghillie_base_F {
scope=1; scopecurator=1;		
};
class B_T_ghillie_tna_F : B_ghillie_base_F {
scope=1; scopecurator=1;		
};

//Tanoa CTRG
class B_CTRG_Soldier_F;
class B_CTRG_Soldier_AR_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
};
class B_CTRG_Soldier_Exp_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
};
class B_CTRG_Soldier_JTAC_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_M_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_Medic_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_LAT2_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_LAT_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
}; 
class B_CTRG_Soldier_TL_tna_F : B_CTRG_Soldier_F {
scope=1; scopecurator=1;		
};  

//Gendarmerie
class B_GEN_Soldier_base_F;
class B_GEN_Soldier_F : B_GEN_Soldier_base_F {
scope=1; scopecurator=1;		
};  
class B_GEN_Commander_F : B_GEN_Soldier_base_F {
scope=1; scopecurator=1;		
};  

//Backpacks
class Weapon_Bag_Base;
class Bag_Base;
class Static_Designator_02_base_F;
class AA_01_base_F;
class AT_01_base_F;
class B_AssaultPack_Base;
class B_Carryall_Base;
class B_FieldPack_Base;
class B_TacticalPack_Base;

class B_HMG_01_weapon_F : Weapon_Bag_Base {
scope = 1;
};
class B_Mortar_01_support_F : Bag_Base {
scope=1;
 };
class B_Mortar_01_weapon_F : Weapon_Bag_Base {
scope=1;
 };
class B_HMG_01_support_F : Bag_Base {
scope=1;
 };
class O_Static_Designator_02_F : Static_Designator_02_base_F {
scope = 1;
};
class O_Static_Designator_02_weapon_F : Weapon_Bag_Base {
scope = 1;
};
class B_static_AA_F : AA_01_base_F {
 scope = 1;
};
class O_static_AA_F : AA_01_base_F {
 scope = 1;
};
class I_static_AA_F : AA_01_base_F {
scope = 1;
};
class B_AA_01_weapon_F : Weapon_Bag_Base {

 scope = 1;
};
class O_AA_01_weapon_F : Weapon_Bag_Base {
 scope = 1;
};
class I_AA_01_weapon_F : Weapon_Bag_Base {
 scope = 1;
};
class B_static_AT_F : AT_01_base_F {
 scope = 1;
};
class O_static_AT_F : AT_01_base_F {
 scope = 1;
};
class I_static_AT_F : AT_01_base_F {
scope = 1;
};
class B_AT_01_weapon_F : Weapon_Bag_Base {
 scope = 1;
};
class O_AT_01_weapon_F : Weapon_Bag_Base {
 scope = 1;
};
class I_AT_01_weapon_F : Weapon_Bag_Base {
 scope = 1;
};
class B_UAV_01_backpack_F : Weapon_Bag_Base {
scope=1;
};
class B_AssaultPack_dgtl : B_AssaultPack_Base {
scope = 1;
};
class B_AssaultPack_mcamo : B_AssaultPack_Base {
scope = 1;
};
class B_AssaultPack_ocamo : B_AssaultPack_Base {
scope = 1;
};
class B_Carryall_ocamo : B_Carryall_Base {
 scope = 1;
};
class B_Carryall_oucamo : B_Carryall_Base {
 scope = 1;
};
class B_Carryall_mcamo : B_Carryall_Base {
 scope = 1;
};
class B_FieldPack_ocamo : B_FieldPack_Base {
 scope = 1;
};
class B_FieldPack_oucamo : B_FieldPack_Base {
 scope = 1;
};
class B_TacticalPack_mcamo : B_TacticalPack_Base {
 scope = 1;
};
class B_TacticalPack_ocamo : B_TacticalPack_Base {
 scope = 1;
};

class UAV_06_medical_backpack_base_F;
class UAV_06_backpack_base_F;
//plecaki-UAV
class C_IDAP_UAV_01_backpack_F : Weapon_Bag_Base {
 scope = 1;
};
class C_UAV_06_medical_backpack_F : UAV_06_medical_backpack_base_F {
 scope = 1;
};
class C_IDAP_UAV_06_backpack_F : UAV_06_backpack_base_F {
 scope = 1;
};
class C_UAV_06_backpack_F : UAV_06_backpack_base_F {
 scope = 1;
};
class C_IDAP_UAV_06_antimine_backpack_F : C_IDAP_UAV_06_backpack_F {
 scope = 1;
};
class C_IDAP_UAV_06_medical_backpack_F : UAV_06_medical_backpack_base_F{
 scope = 1;	
};
class B_UAV_06_medical_backpack_F : C_IDAP_UAV_06_medical_backpack_F {
 scope = 1;
};
class O_UAV_06_medical_backpack_F : C_IDAP_UAV_06_medical_backpack_F {
 scope = 1;
};
class I_UAV_06_medical_backpack_F : C_IDAP_UAV_06_medical_backpack_F {
 scope = 1;
};
class B_UAV_06_backpack_F : UAV_06_backpack_base_F {
 scope = 1;
};
class O_UAV_06_backpack_F : UAV_06_backpack_base_F {
 scope = 1;
};
class I_UAV_06_backpack_F : UAV_06_backpack_base_F {
 scope = 1;
};

//Backpacks
class B_ViperLightHarness_khk_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperLightHarness_blk_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperLightHarness_hex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperLightHarness_oli_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperLightHarness_ghex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperHarness_oli_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperHarness_khk_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperHarness_ghex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperHarness_blk_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_FieldPack_ghex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_AssaultPack_tna_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_Carryall_ghex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_Bergen_tna_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_Bergen_hex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_Bergen_dgtl_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_Bergen_mcamo_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};
class B_ViperHarness_hex_F: B_TacticalPack_Base {scope = 1; scopecurator=1;};

//Air Assets
class Heli_Transport_04_base_F;
class Heli_Transport_03_base_F;
class Heli_Light_01_armed_base_F;
class Heli_Light_01_civil_base_F;
class O_Heli_Transport_04_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_ammo_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_bench_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_box_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_covered_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_fuel_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_medevac_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class O_Heli_Transport_04_repair_F : Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class B_Heli_Transport_03_F : Heli_Transport_03_base_F {
scope = 1;
scopeCurator = 1;	
forceInGarage = 0;
};
class Heli_Transport_03_unarmed_base_F : Heli_Transport_03_base_F {
scope = 1;
scopeCurator = 1;	
forceInGarage = 0;
};
 class B_Heli_Transport_03_unarmed_F : Heli_Transport_03_unarmed_base_F {
scope = 1;
scopeCurator = 1;	
forceInGarage = 0;
};
class B_Heli_Light_01_armed_F : Heli_Light_01_armed_base_F {
    scope = 1;
};
class C_Heli_Light_01_civil_F : Heli_Light_01_civil_base_F {
    scope = 1;
};

//static 
class Pod_Heli_Transport_04_base_F;
class Pod_Heli_Transport_04_crewed_base_F;
class I_G_Mortar_01_F;
class Land_Pod_Heli_Transport_04_ammo_F : Pod_Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_bench_F : Pod_Heli_Transport_04_crewed_base_F {
	scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_box_F : Pod_Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_covered_F : Pod_Heli_Transport_04_crewed_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_fuel_F : Pod_Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_medevac_F : Pod_Heli_Transport_04_crewed_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class Land_Pod_Heli_Transport_04_repair_F : Pod_Heli_Transport_04_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
};
class B_G_Mortar_01_F : I_G_Mortar_01_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;
}; 

//NATO
class B_APC_Tracked_01_base_F;
class B_MBT_01_mlrs_base_F;
class B_MBT_01_arty_base_F;
class B_APC_Wheeled_01_base_F;
class Boat_Armed_01_minigun_base_F;
class Rubber_duck_base_F;
class SDV_01_base_F;
class Truck_01_base_F;
class MRAP_01_base_F;
class MRAP_01_gmg_base_F;
class MRAP_01_hmg_base_F;
class LSV_01_armed_base_F;
class LSV_01_unarmed_base_F;
class Quadbike_01_base_F;
class UAV_01_base_F;
class UGV_01_base_F;
class UGV_01_rcws_base_F;
class UAV_02_base_F;
class UAV_02_CAS_base_F;
class Heli_Light_01_unarmed_base_F;
class Heli_Attack_01_base_F;
class Heli_Transport_01_base_F;
class Plane_CAS_01_base_F;
class B_MBT_01_base_F;
class LSV_01_light_base_F;
class I_G_Van_01_fuel_F;
class I_G_Offroad_01_F;
class I_G_Offroad_01_AT_F;
class I_G_Offroad_01_armed_F;
class I_G_Offroad_01_repair_F;
class I_G_Quadbike_01_F;
class I_G_Van_01_transport_F;
class Van_02_vehicle_base_F;
class Van_02_transport_base_F;
class LSV_01_AT_base_F;
class AFV_Wheeled_01_base_F;
class AFV_Wheeled_01_up_base_F;
class Offroad_01_civil_base_F;

//Tracked
class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;	
};
class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_MBT_01_mlrs_F : B_MBT_01_mlrs_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_MBT_01_arty_F : B_MBT_01_arty_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};

//Rosomak
class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F {
	faction = "gct_units";
	displayName = "Rosomak";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";
	scope = 2;
	scopeCurator = 2;
	forceInGarage = 1;		
};
class GCT_Rosomak_WDL : B_APC_Wheeled_01_cannon_F {
	displayName = "Rosomak (Las)";
	//crew = "gct_psz_wdl10_crewman";
	hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"gct_extrastuff\data\roso\apc_wheeled_01_base_olv_co.paa",
			"gct_extrastuff\data\roso\apc_wheeled_01_adds_olv_co.paa",
			"gct_extrastuff\data\roso\apc_wheeled_01_tows_olv_co.paa"
		};	
};
class GCT_Rosomak_Tan : B_APC_Wheeled_01_cannon_F {
	displayName = "Rosomak (Pustynia)";
	//crew = "gct_psz_desl10_crewman";
	hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"gct_extrastuff\data\roso\apc_wheeled_01_base_tan_co.paa",
			"gct_extrastuff\data\roso\apc_wheeled_01_adds_tan_co.paa",
			"gct_extrastuff\data\roso\apc_wheeled_01_tows_tan_co.paa"
		};	
};
/*
//Polaki
class PSZ_PL_Tumak2_UKM;
class PSZ_PL_Tumak2;
class PSZ_PL_Star_944;
class PSZ_PL_MATV;
class PSZ_PL_Zbik_M96;
class PSZ_PL_Zbik_M97;
class PSZ_PL_Tumak2_UKM_W : PSZ_PL_Tumak2_UKM {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Tumak2_UKM_D : PSZ_PL_Tumak2_UKM {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Tumak2_W : PSZ_PL_Tumak2 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Tumak2_D : PSZ_PL_Tumak2 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Star_944_W : PSZ_PL_Star_944 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Star_944_D : PSZ_PL_Star_944 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_MATV_W : PSZ_PL_MATV {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_MATV_D : PSZ_PL_MATV {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Zbik_M96_D : PSZ_PL_Zbik_M96 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Zbik_M96_W : PSZ_PL_Zbik_M96 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Zbik_M97_D : PSZ_PL_Zbik_M97 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class PSZ_PL_Zbik_M97_W : PSZ_PL_Zbik_M97 {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
*/
//Boats
class I_G_Boat_Transport_01_F;
class B_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
}; 
class B_Boat_Transport_01_F : Rubber_duck_base_F {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class B_Lifeboat : Rubber_duck_base_F {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class B_SDV_01_F : SDV_01_base_F {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class B_G_Boat_Transport_01_F : I_G_Boat_Transport_01_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
}; 

//Cars
class B_Truck_01_transport_F : Truck_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
}; 
class B_Truck_01_mover_F : B_Truck_01_transport_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_ammo_F : B_Truck_01_mover_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_box_F : B_Truck_01_mover_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_fuel_F : B_Truck_01_mover_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_medical_F : B_Truck_01_transport_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_Repair_F : B_Truck_01_mover_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Truck_01_covered_F : B_Truck_01_transport_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_MRAP_01_F : MRAP_01_base_F {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
	scope = 2;
	scopeCurator = 2;
	forceInGarage = 1;		
};
class B_MRAP_01_gmg_F : MRAP_01_gmg_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_MRAP_01_hmg_F : MRAP_01_hmg_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_LSV_01_armed_F : LSV_01_armed_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_LSV_01_unarmed_F : LSV_01_unarmed_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Quadbike_01_F : Quadbike_01_base_F {
	faction = "gct_units";
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";		
};
class B_CTRG_LSV_01_light_F : LSV_01_light_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
}; 
class B_G_Offroad_01_F : I_G_Offroad_01_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Offroad_01_AT_F : I_G_Offroad_01_AT_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Offroad_01_repair_F : I_G_Offroad_01_repair_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Quadbike_01_F : I_G_Quadbike_01_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Van_01_fuel_F : I_G_Van_01_fuel_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Van_01_transport_F : I_G_Van_01_transport_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Van_02_vehicle_F : Van_02_vehicle_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_G_Van_02_transport_F : Van_02_transport_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_GEN_Van_02_vehicle_F: Van_02_vehicle_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_GEN_Van_02_transport_F : Van_02_transport_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_GEN_Offroad_01_gen_F : Offroad_01_civil_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_LSV_01_AT_F : LSV_01_AT_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_AFV_Wheeled_01_cannon_F : AFV_Wheeled_01_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_AFV_Wheeled_01_up_cannon_F : AFV_Wheeled_01_up_base_F  {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
}; 

//UAV
class UAV_06_base_F;
class UAV_06_medical_base_F;
class B_UAV_01_F : UAV_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_UGV_01_F : UGV_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_UGV_01_rcws_F : UGV_01_rcws_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_UAV_02_F : UAV_02_base_F {
	faction = "gct_units";	
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";
}; 
class B_UAV_02_CAS_F : UAV_02_CAS_base_F {
	faction = "gct_units";	
	vehicleClass = "gct_veh"; editorSubcategory = "gct_veh";	
};
class B_UAV_06_F : UAV_06_base_F {
   scope=1; scopecurator=1;	
};
class B_UAV_06_medical_F : UAV_06_medical_base_F {
   scope=1; scopecurator=1;	
};

//heli
class B_Heli_Light_01_F : Heli_Light_01_unarmed_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Heli_Attack_01_F : Heli_Attack_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Heli_Transport_01_F : Heli_Transport_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_Heli_Transport_01_camo_F : B_Heli_Transport_01_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};
class B_CTRG_Heli_Transport_01_sand_F : Heli_Transport_01_base_F {
   scope=1; scopecurator=1;	
};
class B_CTRG_Heli_Transport_01_tropic_F : Heli_Transport_01_base_F {
   scope=1; scopecurator=1;	
};
class Heli_Light_01_dynamicLoadout_base_F;
class Heli_Attack_01_dynamicLoadout_base_F;
class Plane_CAS_01_dynamicLoadout_base_F;
class B_Heli_Light_01_dynamicLoadout_F : Heli_Light_01_dynamicLoadout_base_F {
   scope=1; scopecurator=1;	
};
class B_Heli_Attack_01_dynamicLoadout_F : Heli_Attack_01_dynamicLoadout_base_F {
   scope=1; scopecurator=1;	
};
class B_Plane_CAS_01_dynamicLoadout_F : Plane_CAS_01_dynamicLoadout_base_F {
   scope=1; scopecurator=1;	
};

//Plane
class B_Plane_CAS_01_F : Plane_CAS_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};

//tanki
class B_MBT_01_cannon_F : B_MBT_01_base_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;	
};
class B_MBT_01_TUSK_F : B_MBT_01_cannon_F {
scope = 1;
scopeCurator = 1;
forceInGarage = 0;		
};

//static

