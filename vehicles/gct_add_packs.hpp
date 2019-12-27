class TRYK_B_Medbag_OD;
class TRYK_B_Medbag;
class B_Carryall_cbr;
class TRYK_B_BAF_BAG_CYT;
class TRYK_B_BAF_BAG_OD;
class TRYK_B_Coyotebackpack;
class TRYK_B_Coyotebackpack_OD;
class rhsusf_assault_eagleaiii_coy;
class rhs_rpg_empty;
class fatpack_od;
class fatpack_coy;

//Uniwersalne
class GCT_B_Explo: B_Carryall_cbr {
	scope = 2;
    scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak (EOD)";
	class TransportItems {
		class ACE_DefusalKit {
			name = "ACE_DefusalKit";
			count = 1;
		};
		class ACE_Clacker {
			name = "ACE_Clacker";
			count = 1;
		};
		class SatchelCharge_Remote_Mag {
			name = "SatchelCharge_Remote_Mag";
			count = 2;
		};
		class DemoCharge_Remote_Mag {
			name = "DemoCharge_Remote_Mag";
			count = 2;
		};
		class ClaymoreDirectionalMine_Remote_Mag {
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 3;
		};
		class 	AMP_Breaching_Charge_Mag {
			name = "AMP_Breaching_Charge_Mag";
			count = 3;
		};
	};
};
//US pustynne
class GCT_B_US_Medic: TRYK_B_Medbag {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak Pustynny US (Medyk)";
class TransportItems {

	class ACE_fieldDressing {
		name = "ACE_fieldDressing";
		count = 60;
	};	
	class ACE_morphine {
		name = "ACE_morphine";
		count = 25;
	};	
	class ACE_epinephrine {
		name = "ACE_epinephrine";
		count = 10;
	};
        class ACE_bloodIV_500 {
		name = "ACE_bloodIV_500";
		count = 4;
	};	
        class ACE_bloodIV {
		name = "ACE_bloodIV";
		count = 6;
	};		
};	
	class TransportMagazines {	
	class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
	class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
};
};
class GCT_B_SL: TRYK_B_BAF_BAG_CYT {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Pustynny US (Amunicyjny)";
	class TransportMagazines {
            class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		count = 3;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 10;
	};
            class rhs_mag_m67 {
		magazine = "rhs_mag_m67";
		count = 3;
	};
	class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
	class rhs_mag_m18_green {
		magazine = "rhs_mag_m18_green";
		count = 2;
	};	
	class rhs_mag_an_m14_th3 {
		magazine = "rhs_mag_an_m14_th3";
		count = 2;
	};		
};	
    };
class GCT_B_M249: TRYK_B_Coyotebackpack {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Pustynny (M249)";
	class TransportMagazines {
            class rhsusf_100Rnd_556x45_soft_pouch {
		magazine = "rhsusf_100Rnd_556x45_soft_pouch";
		count = 4;
	};
};
};
class GCT_B_M240: TRYK_B_Coyotebackpack {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Pustynny (M240)";
	class TransportMagazines {
            class rhsusf_50Rnd_762x51 {
		magazine = "rhsusf_50Rnd_762x51";
		count = 4;
	};
};
};
//US lesne
class GCT_B_WDL_US_Medic: TRYK_B_Medbag_OD {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak Lesny US (Medyk)";
	class TransportItems {
		class ACE_fieldDressing {
		name = "ACE_fieldDressing";
		count = 60;
	};	
		class ACE_morphine {
		name = "ACE_morphine";
		count = 25;
	};	
		class ACE_epinephrine {
		name = "ACE_epinephrine";
		count = 10;
	};
		class ACE_bloodIV_500 {
		name = "ACE_bloodIV_500";
		count = 4;
	};	
		class ACE_bloodIV {
		name = "ACE_bloodIV";
		count = 6;
	};		
	};	
	class TransportMagazines {	
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
		class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
	};
};
class GCT_B_WDL_US_SL: rhsusf_assault_eagleaiii_coy {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Lesny US (Amunicyjny)";
	class TransportMagazines {
            class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		count = 3;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
	class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 3;
	};	
	class rhs_mag_m18_green {
		magazine = "rhs_mag_m18_green";
		count = 2;
	};	
	class rhs_mag_an_m14_th3 {
		magazine = "rhs_mag_an_m14_th3";
		count = 1;
	};		
};	
    };
class GCT_B_WDL_M249: TRYK_B_Coyotebackpack_OD {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Lesny (M249)";
	class TransportMagazines {
            class rhsusf_100Rnd_556x45_soft_pouch {
		magazine = "rhsusf_100Rnd_556x45_soft_pouch";
		count = 4;
	};
};
};
class GCT_B_WDL_M240: TRYK_B_Coyotebackpack_OD {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
        GCT_Author_Macro
	displayName = "[GCT]Plecak Lesny (M240)";
	class TransportMagazines {
            class rhsusf_50Rnd_762x51 {
		magazine = "rhsusf_50Rnd_762x51";
		count = 4;
	};
};
};
class GCT_B_RPG7: rhs_rpg_empty {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak RPG-7";
class TransportMagazines {
        class rhs_rpg7_PG7V_mag {
		magazine = "rhs_rpg7_PG7V_mag";
		count = 1;
};
	class rhs_rpg7_PG7VL_mag {
		magazine = "rhs_rpg7_PG7VL_mag";
		count = 2;
};
	class rhs_rpg7_OG7V_mag {
		magazine = "rhs_rpg7_OG7V_mag";
		count = 1;
};
};
};
/*	
//PSZ
class PSZ_B_wz93_WDL;
class PSZ_B_wz93_Medical_WDL;
class PSZ_B_wz93_MG_PKM_WDL;
class PSZ_B_wz97_WDL;
class GCT_B_SL_PSZ: PSZ_B_wz93_WDL {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak PL (SL/FL)";
	class TransportMagazines {
        class PSZ_556x45_Beryl_30_T_R {
			magazine = "PSZ_556x45_Beryl_30_T_R";
			count = 3;
		};
		class PSZ_556x45_Beryl_30 {
			magazine = "PSZ_556x45_Beryl_30";
			count = 10;
		};
        class rhs_mag_m67 {
			magazine = "rhs_mag_m67";
			count = 3;
		};
		class rhs_mag_an_m8hc {
			magazine = "rhs_mag_an_m8hc";
			count = 4;
		};	
		class rhs_mag_m18_green {
			magazine = "rhs_mag_m18_green";
			count = 2;
		};		
	};	
};
class GCT_B_PSZ_Medic: PSZ_B_wz93_Medical_WDL {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak PL (medykamenty)";
	class TransportItems {
		class ACE_fieldDressing {
			name = "ACE_fieldDressing";
			count = 60;
		};	
		class ACE_morphine {
			name = "ACE_morphine";
			count = 25;
		};	
		class ACE_epinephrine {
			name = "ACE_epinephrine";
			count = 10;
		};
        class ACE_bloodIV_500 {
			name = "ACE_bloodIV_500";
			count = 12;
		};	
	};	
	class TransportMagazines {	
		class PSZ_556x45_Beryl_30 {
			magazine = "PSZ_556x45_Beryl_30";
			count = 7;
		};
		class rhs_mag_an_m8hc {
			magazine = "rhs_mag_an_m8hc";
			count = 4;
		};	
	};
};
class GCT_B_PKM: PSZ_B_wz93_MG_PKM_WDL {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak PL (PKM)";
		class TransportMagazines {
            class rhs_100Rnd_762x54mmR {
			magazine = "rhs_100Rnd_762x54mmR";
			count = 4;
		};
	};
};

class GCT_B_PL_Explo: PSZ_B_wz97_WDL {
	scope = 2;
    scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak PL (EOD)";
class TransportItems {
	class ACE_DefusalKit {
		name = "ACE_DefusalKit";
		count = 1;
};
	class ACE_Clacker {
		name = "ACE_Clacker";
		count = 1;
};
	class SatchelCharge_Remote_Mag {
		name = "SatchelCharge_Remote_Mag";
		count = 2;
};
	class DemoCharge_Remote_Mag {
		name = "DemoCharge_Remote_Mag";
		count = 2;
};
	class ClaymoreDirectionalMine_Remote_Mag {
		name = "ClaymoreDirectionalMine_Remote_Mag";
		count = 1;
};
		class 	AMP_Breaching_Charge_Mag {
			name = "AMP_Breaching_Charge_Mag";
			count = 3;
		};
	class rhs_mine_pmn2_mag {
		name = "rhs_mine_pmn2_mag";
		count = 2;
};	
};	
};
*/
//SF
class GCT_B_WDL_SEAL_SL: fatpack_od {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak Lesny SF (Amunicyjny)";
class TransportMagazines {
        class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		count = 3;
};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
};
	class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 3;
};	
	class rhs_mag_m18_green {
		magazine = "rhs_mag_m18_green";
		count = 2;
};	
	class rhs_mag_an_m14_th3 {
		magazine = "rhs_mag_an_m14_th3";
		count = 1;
};		
};	
};
class GCT_B_DES_SEAL_SL: fatpack_coy {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak Pustynny SF (Amunicyjny)";
class TransportMagazines {
        class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		count = 3;
};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
};
	class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 3;
};	
	class rhs_mag_m18_green {
		magazine = "rhs_mag_m18_green";
		count = 2;
};	
	class rhs_mag_an_m14_th3 {
		magazine = "rhs_mag_an_m14_th3";
		count = 1;
};		
};	
};
class GCT_B_WDL_SF_MAAWS: fatpack_od {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak Carl Gustaf (Amunicyjny)";
class TransportMagazines {
        class rhs_mag_maaws_HEAT {
		magazine = "rhs_mag_maaws_HEAT";
		count = 3;
};	
};	
};
//USM
class usm_pack_alice;
class GCT_B_USM_SL: usm_pack_alice {
	scope = 2;
	scopeCurator = 1; scopeArsenal = 1;
    GCT_Author_Macro
	displayName = "[GCT]Plecak US Alice (Amunicyjny)";
	class TransportMagazines {
        class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
			count = 3;
		};
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = 10;
		};
		class rhs_mag_m67 {
			magazine = "rhs_mag_m67";
			count = 3;
		};
		class rhs_mag_an_m8hc {
			magazine = "rhs_mag_an_m8hc";
			count = 4;
		};	
		class rhs_mag_m18_green {
			magazine = "rhs_mag_m18_green";
			count = 2;
		};	
		class rhs_mag_an_m14_th3 {
			magazine = "rhs_mag_an_m14_th3";
			count = 2;
		};		
	};		
};
class usm_pack_alice_medic: usm_pack_alice {
	scope=1;
};
class GCT_B_USM_ALICE_MEDIC: usm_pack_alice_medic {
	author = "Keeway";
	displayName = "[GCT]Plecak US Alice (Medyk)";
	scope = 2;
	class TransportItems {
		class ACE_fieldDressing {
		name = "ACE_fieldDressing";
		count = 60;
	};	
		class ACE_morphine {
		name = "ACE_morphine";
		count = 25;
	};	
		class ACE_epinephrine {
		name = "ACE_epinephrine";
		count = 10;
	};
		class ACE_bloodIV_500 {
		name = "ACE_bloodIV_500";
		count = 4;
	};	
		class ACE_bloodIV {
		name = "ACE_bloodIV";
		count = 6;
	};		
	};	
	class TransportMagazines {	
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
		class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
	};
	
};
class usm_pack_alice_prc119: Bag_Base {
	scope = 1;
};
class GCT_B_USM_ALICE_PRC119: usm_pack_alice_prc119 {
	author = "Keeway";
	displayName = "[GCT]Plecak RTO US (PRC119)";
	scope = 2;
	class TransportMagazines {	
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
		class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
	};
};
class usm_pack_alice_prc77: Bag_Base {
	scope = 1;
};
class GCT_B_USM_ALICE_PRC77: usm_pack_alice_prc77 {
	author = "Keeway";
	displayName = "[GCT]Plecak RTO US (PRC119)";
	scope = 2;
	class TransportMagazines {	
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = 7;
		};
		class rhs_mag_an_m8hc {
			magazine = "rhs_mag_an_m8hc";
			count = 4;
		};	
	};
};
class usm_pack_m5_medic: Bag_Base {
	scope = 1;
};
class GCT_B_USM_M5_MEDIC: usm_pack_m5_medic {
	author = "Keeway";
	displayName = "[GCT]Plecak M5 US (Medyk)";
	scope = 2;
	class TransportItems {
		class ACE_fieldDressing {
		name = "ACE_fieldDressing";
		count = 60;
	};	
		class ACE_morphine {
		name = "ACE_morphine";
		count = 25;
	};	
		class ACE_epinephrine {
		name = "ACE_epinephrine";
		count = 10;
	};
		class ACE_bloodIV_500 {
		name = "ACE_bloodIV_500";
		count = 4;
	};	
		class ACE_bloodIV {
		name = "ACE_bloodIV";
		count = 6;
	};		
	};	
	class TransportMagazines {	
		class rhs_mag_30Rnd_556x45_M855A1_Stanag {
		magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		count = 7;
	};
		class rhs_mag_an_m8hc {
		magazine = "rhs_mag_an_m8hc";
		count = 4;
	};	
	};
};
class usm_pack_st138_prc77: Bag_Base {
	scope = 1;
};
class GCT_B_USM_ST138_PRC77: usm_pack_st138_prc77 {
	scope = 2;
};
class usm_pack_762x51_bandoliers: Bag_Base {
	scope = 1;
	class TransportMagazines {
		class rhsusf_100Rnd_762x51 {
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
		class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {
			magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
			count = 0;
		};		
	};	
};
class GCT_B_USM_762x51_BAND: usm_pack_762x51_bandoliers {
	author = "Keeway";
	scope = 2;
	displayName = "[GCT] Bandoliera 7.62x51mm 100rnd x4";	
	class TransportMagazines {
		class rhsusf_100Rnd_762x51 {
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};	
};
class usm_pack_200rnd_556_bandoliers: Bag_Base {
	scope = 1;
};
class GCT_B_USM_556x45_BAND: usm_pack_200rnd_556_bandoliers {
	author = "Keeway";
	scope = 2;
	displayName = "[GCT] Bandoliera 5.56x45mm 200rnd x2";	
	
	class TransportMagazines {
        class rhsusf_200Rnd_556x45_soft_pouch {
			magazine = "rhsusf_200Rnd_556x45_soft_pouch";
			count = 2;
	};	
};
};
class usm_pack_762x51_ammobelts: Bag_Base {
	scope = 1;
};
class GCT_B_USM_762x51_TAS: usm_pack_762x51_ammobelts {
	author = "Keeway";
	scope = 2;
	displayName = "[GCT] Taśma 7.62x51mm 100rnd x4";
	class TransportMagazines {
        class rhsusf_100Rnd_762x51 {
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};	
};
class usm_pack_abag_m60: Bag_Base {
	scope = 2;
	displayName = "[GCT]Torba na lufe";
	class TransportMagazines {};		
};