class CfgVehicles {
	class rhsusf_airforce_jetpilot;	
	class rhsusf_army_ocp_rifleman;
	class rhsusf_infantry_army_base;
	class rhsusf_army_ocp_combatcrewman;
	class rhsusf_infantry_usmc_base: rhsusf_infantry_army_base {
		class EventHandlers;
	};
	//class PSZ_PL_Soldier_Rifleman;
	class ACE_medicalSupplyCrate_advanced;
	#define GCT_Author_Macro author=Keeway; faction = "gct_units";
	
	#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio
	
	#define GCT_Mac_Inf_Army_OCP editorSubcategory = "gct_rhs_us_wdl"; vehicleClass = "gct_rhs_us_wdl";\
		uniformClass = "rhs_uniform_cu_ocp";\
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		GCT_Author_Macro
	
	#define GCT_Mac_Inf_Army_UCP editorSubcategory = "gct_rhs_us_des"; vehicleClass = "gct_rhs_us_des";\
		uniformClass = "rhs_uniform_cu_ucp";\
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		GCT_Author_Macro
	
	#define GCT_Mac_Inf_Army_PSZ editorSubcategory = "gct_psz_des"; vehicleClass = "gct_psz_des";\
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing", "ACE_fieldDressing","ACE_morphine"};\
		GCT_Author_Macro
	
	#define GCT_Mac_Inf_Army_USM_base Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","usm_bdu_cap_wdl","rhsusf_ANPVS_14"}; \
		RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","usm_bdu_cap_wdl","rhsusf_ANPVS_14"};
	
	#define GCT_Mac_Inf_USMC_D editorSubcategory = "gct_rhs_usmc_des"; vehicleClass = "gct_rhs_usmc_des";\
		uniformClass = "rhs_uniform_FROG01_d";\
		GCT_Author_Macro	
	
	#define GCT_Mac_Inf_AOR2 editorSubcategory = "gct_seal_aor2"; vehicleClass = "gct_seal_aor2";\
		uniformClass = "Gen3_aor2";\
		headgearList[] = { \
			"rhsusf_opscore_aor2_pelt_nsw",0.25,\
			"rhsusf_opscore_aor2_pelt",0.25,\
			"rhsusf_opscore_aor2",0.25,\
			"rhsusf_opscore_mar_fg",0.15,\
			"rhsusf_opscore_mar_fg_pelt",0.15,\
			"rhsusf_opscore_fg_pelt",0.15,\
			"rhsusf_opscore_fg",0.15,\
			"rhsusf_bowman_cap",0.10,\
			"rhsusf_protech_helmet_rhino_ess",0.05,\
			"rhsusf_protech_helmet_rhino",0.05,\
			"rhsusf_protech_helmet_ess",0.05,\
			"rhsusf_protech_helmet",0.05,\
			"H_Cap_blk",0.01,\
			"H_Booniehat_oli",0.01\
		};\
		GCT_Author_Macro		
	//Chowa szeroko rozumiane gowno z a3
	#include "vehicles/gct_hide_a3_veh.hpp"
	//dodaje dodatkowe wersje mundury g3 (potrzeba wpisu zarówno w weapons jak i vehicles)
	#include "vehicles/gct_add_g3_extra.hpp"
	//dodaje plecaki 
	#include "vehicles/gct_add_packs.hpp"
	//chowa niezdatne plecaki z tryka
	#include "vehicles/gct_hide_tryk.hpp"
	//dodaje skrzynie GCT, chowa skrzynie PSZ
	#include "vehicles/gct_add_crates.hpp"
	//dodaje obiekty z moda map extension z A2
	#include "vehicles/gct_add_map_obj.hpp"
	//dodaje ryj winiego na jednym z targetow
	#include "vehicles/gct_add_target.hpp"
	//dodaje animacje do ACE
	#include "vehicles/gct_add_anims.hpp"	
	//standaryzacja nazw i wrzucenie do sekcji "pojazdy" - EWK HMMWV oraz MRAPow
	#include "vehicles/gct_fix_ewkmrap.hpp"	
	//Jednostki
	//SF GEN
    #include "infantry/gct_gen_sf_casu.hpp"		
	//JWK Las
	#include "infantry/gct_pl_sf_jwk_fg.hpp"	
	//GROM Camogrom
	#include "infantry/gct_pl_sf_grom.hpp"
	//USAF
    #include "infantry/gct_us_usaf.hpp"
	//US Army (OCP)
	#include "infantry/gct_us_army_ocp.hpp"
    //US Army (UCP)
	#include "infantry/gct_us_army_ucp.hpp"	
	//USMC (Marpat-WD)
	#include "infantry/gct_us_usmc_mwd.hpp"
	//USMC (Marpat-D)
	#include "infantry/gct_us_usmc_md.hpp"
	//Marine Raiders (M81)
	#include "infantry/gct_us_sf_raiders_m81.hpp"
	//SEALS AOR1
    #include "infantry/gct_us_sf_seals_aor1.hpp"		
	//SEALS AOR2
    #include "infantry/gct_us_sf_seals_aor2.hpp"	
	//Delta Force Mcam
	#include "infantry/gct_us_sf_sfod_mcam.hpp"
	//US Military Mod
	#include "infantry/gct_usm_workspace.hpp"
	//OPFOR
	#include "infantry/gct_opf_ziut.hpp"
	//PSZ (Pustynia)
    //#include "infantry/gct_pl_reg_des.hpp"		
	//PSZ (Las)
    //#include "infantry/gct_pl_reg_wdl.hpp"		
};