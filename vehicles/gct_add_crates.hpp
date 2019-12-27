class GCT_AmmoBox: Box_NATO_Wps_F {
	scope = 1;
	scopeCurator = 1;
	author = "Keeway";
	class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
	class TransportBackpacks {};
	transportMaxWeapons = 500;
    transportMaxMagazines = 5000;
	transportMaxBackpacks = 10;
	maximumLoad = 20000;
};
class GCT_US_VA: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";		
	displayName = "GCT USA (Arsenal)";
	class EventHandlers: EventHandlers {
		init = "[_this select 0,0] call RHS_fnc_VirtualAmmoBoxUSA";
	};
	SLX_XEH_DISABLED = 1;
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
};
class GCT_RU_VA: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";	
	displayName = "GCT Rosja (Arsenal)";
	class EventHandlers: EventHandlers {
		init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxRus;";
	};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
};
/*class GCT_PSZ_VA: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";		
	displayName = "GCT PSZ (Arsenal)";
	class EventHandlers: EventHandlers {
		init = "[_this select 0] call psz_fnc_VirtualArsenal";
	};
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
};*/
class GCT_A3_VA: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";		
	displayName = "GCT A3 (Arsenal)";
    class TransportMagazines {
	};
    class TransportWeapons {
	};
    class TransportItems {
	};
	class UserActions {
        class Menu {
            displayName = "Arsenal";
            position = "action";
            radius = 8;
            condition = "alive player";
            statement = "[""Open"",true] call BIS_fnc_arsenal;";
            onlyforplayer = 1;
        };
    };
};
class GCT_Equipment: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	displayName = "GCT Wyposazenie";	
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	class TransportItems {
		//Gogle
		class rhs_googles_black {
			name = "rhs_googles_black";
			count = 5;
		};	
		class rhs_googles_clear {
			name = "rhs_googles_clear";
			count = 5;
		};		
		class rhs_ess_black {
			name = "rhs_ess_black";
			count = 5; 
		};		
		//ACE
		class ACE_CableTie {
			name = "ACE_CableTie";
			count = 50; 
		};		
		class ACE_EarPlugs {
			name = "ACE_EarPlugs";
			count = 30; 
		};	
        class ACE_HuntIR_monitor {
			name = "ACE_HuntIR_monitor";
			count = 5; 
		};		
		class ACE_wirecutter {
			name = "ACE_wirecutter";
			count = 2; 
		};	
		class ACE_MapTools {
			name = "ACE_MapTools";
			count = 5; 
		};		
		class ACE_SpareBarrel {
			name = "ACE_SpareBarrel";
			count = 5; 
		};			
		class ACE_Clacker {
			name = "ACE_Clacker";
			count = 5; 
		};
		class ACE_DefusalKit {
			name = "ACE_DefusalKit";
			count = 5; 
		};
		class ACE_M26_Clacker {
			name = "ACE_M26_Clacker";
			count = 5; 
		};		
	    class ACE_DAGR {
			name = "ACE_DAGR";
			count = 5;
		};
	    class ACE_microDAGR {
			name = "ACE_microDAGR";
			count = 5;
		};	
		class ACE_Kestrel4500 {
			name = "ACE_Kestrel4500";
			count = 5;
		};	
	    class ACE_SpottingScope {
			name = "ACE_SpottingScope";
			count = 2;
		};
	    class ACE_IR_Strobe_Item {
			name = "ACE_IR_Strobe_Item";
			count = 30;
		};	
		class ACE_SpraypaintGreen {
			name = "ACE_SpraypaintGreen";
			count = 5; 
		};		
		class ACE_SpraypaintRed {
			name = "ACE_SpraypaintRed";
			count = 5; 
		};	
		class ACE_SpraypaintBlue {
			name = "ACE_SpraypaintBlue";
			count = 5; 
		};		
		class ACE_EntrenchingTool {
			name = "ACE_EntrenchingTool";
			count = 5; 			
		};
		class ACE_Flashlight_XL50 {
			name = "ACE_Flashlight_XL50";
			count = 5; 
		};		
		class ACE_Tripod {
			name = "ACE_Tripod";
			count = 5; 
		};	
		//Radia
		class ACRE_PRC343 {
			name = "ACRE_PRC343";
			count = 20;
		};
		class ACRE_PRC148 {
			name = "ACRE_PRC148";
			count = 10;
		};	
		class ACRE_PRC117F {
			name = "ACRE_PRC117F";
			count = 5;
		};
		//Dodatki US
		class rhsusf_acc_anpeq15A {
			name = "rhsusf_acc_anpeq15A";
			count = 10;
		};
		class rhsusf_acc_anpeq15 {
			name = "rhsusf_acc_anpeq15";
			count = 10;
		};		
		class rhsusf_acc_anpeq15_light {
			name = "rhsusf_acc_anpeq15_light";
			count = 10;
		};
		class rhsusf_acc_anpeq15side {
			name = "rhsusf_acc_anpeq15side";
			count = 5;
		};	
		class GVL_X2000_point {
			name = "GVL_X2000_point";
			count = 25;
		};
		//Tlumiki
		class rhsusf_acc_rotex5_grey {
			name = "rhsusf_acc_rotex5_grey";
			count = 5;
		};
		class rhsusf_acc_rotex5_tan {
			name = "rhsusf_acc_rotex5_tan";
			count = 5;
		};		
		class rhsusf_acc_nt4_black {
			name = "rhsusf_acc_nt4_black";
			count = 5;
		};
		class rhsusf_acc_nt4_tan {
			name = "rhsusf_acc_nt4_tan";
			count = 5;
		};
	    //Celowniki
		class rhsusf_acc_ELCAN {
			name = "rhsusf_acc_ELCAN";
			count = 5;
		};	
		class rhsusf_acc_ACOG {
			name = "rhsusf_acc_ACOG";
			count = 10;
		};
		class rhsusf_acc_ACOG_USMC {
			name = "rhsusf_acc_ACOG_USMC";
			count = 10;
		};		
		class rhsusf_acc_SpecterDR_CX_3D {
			name = "rhsusf_acc_SpecterDR_CX_3D";
			count = 30;
		};	
		//EOTechy	
		class rhsusf_acc_eotech_552{
			name = "rhsusf_acc_eotech_552";
			count = 10;
		};	
		class rhsusf_acc_eotech_552_d {
			name = "rhsusf_acc_eotech_552_d";
			count = 10;
		};	
		class rhsusf_acc_EOTECH {
			name = "rhsusf_acc_EOTECH";
			count = 10;
		};
		//Aimpointy
		class rhsusf_acc_compm4 {
			name = "rhsusf_acc_compm4";
			count = 10;
		};		
		class rhsusf_acc_T1_high {
			name = "rhsusf_acc_T1_high";
			count = 10;
		};	
		class rhsusf_acc_T1_low {
			name = "rhsusf_acc_T1_low";
			count = 10;
		};			
		//JTAC
		class Laserdesignator {
			name = "Laserdesignator";
			count = 5;
		};
		class ACE_Vector {
			name = "ACE_Vector";
			count = 5;			
		};
		class ACE_MX2A {
			name = "ACE_MX2A";
			count = 5;			
		};		
		class Leupold_Mk4 {
			name = "Leupold_Mk4";
			count = 5;			
		};		
		//Tablety
		/*class ItemcTab {
			name = "ItemcTab";
			count = 5;			
		};	*/	
		class ALIVE_Tablet {
			name = "ALIVE_Tablet";
			count = 1;	
		};	
		};
	class TransportMagazines {
		class ACE_M84 {
			magazine = "ACE_M84";
			count = 30;
		};
        class rhs_mag_m67 {
			magazine = "rhs_mag_m67";
			count = 30;
		};
        class rhs_mag_m18_red {
			magazine = "rhs_mag_m18_red";
			count = 30;
		};
		class rhs_mag_m18_green {
			magazine = "rhs_mag_m18_green";
			count = 30;
		};
		class rhs_mag_m18_yellow {
			magazine = "rhs_mag_m18_yellow";
			count = 30;
		};
		class rhs_mag_m18_purple {
			magazine = "rhs_mag_m18_purple";
			count = 30;
		};
		class rhs_mag_an_m8hc {
			magazine = "rhs_mag_an_m8hc";
			count = 30;
		};	
		class rhs_mag_mk84 {
			magazine = "rhs_mag_mk84";
			count = 30;
		};	
		class rhs_mag_an_m14_th3 {
			magazine = "rhs_mag_an_m14_th3";
			count = 10;			
		};
		class Chemlight_red {
			magazine = "Chemlight_red";
			count = 20;
		};	
		class Chemlight_yellow {
			magazine = "Chemlight_yellow";
			count = 20;
		};	
		class Chemlight_blue {
			magazine = "Chemlight_blue";
			count = 20;
		};	
        //KM
		class rhs_200rnd_556x45_M_SAW {
			magazine = "rhs_200rnd_556x45_M_SAW";
			count = 5;
		};	
        class rhs_200rnd_556x45_T_SAW {
			magazine = "rhs_200rnd_556x45_T_SAW";
			count = 5;
		};	
        class rhsusf_100Rnd_556x45_soft_pouch {
			magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			count = 5;
		};	
        class rhsusf_100Rnd_556x45_M200_soft_pouch {
			magazine = "rhsusf_100Rnd_556x45_M200_soft_pouch";
			count = 5;
		};	
        class rhsusf_50Rnd_762x51_m62_tracer {
			magazine = "rhsusf_50Rnd_762x51_m62_tracer";
			count = 10;
		};	
		//STANAG
	    class rhs_mag_30Rnd_556x45_M855A1_Stanag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = 200;
		};			
        class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange";
			count = 200;
		};		
		//M203
		class rhs_mag_M441_HE {
			magazine = "rhs_mag_M441_HE";
			count = 30;
		};
		class rhs_mag_M433_HEDP {
			magazine = "rhs_mag_M433_HEDP";
			count = 30;
		};		
		class rhs_mag_M585_white {
			magazine = "rhs_mag_M585_white";
			count = 30;
		};	
		class rhs_mag_m662_red {
			magazine = "rhs_mag_m662_red";
			count = 30;
		};		
		class rhs_mag_m661_green {
			magazine = "rhs_mag_m661_green";
			count = 30;
		};			
		class rhs_mag_M781_Practice {
			magazine = "rhs_mag_M781_Practice";
			count = 30;
		};					
		class ACE_HuntIR_M203 {
			magazine = "ACE_HuntIR_M203";
			count = 20;
		};	
		class Laserbatteries {
			magazine = "Laserbatteries";
			count = 5;
		};	
	};
	class TransportWeapons {};
};
class GCT_Backpacks: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	displayName = "GCT Plecaki";
	model = "\Ca\misc\Misc_Backpackheap.p3d";
	transportMaxBackpacks = 100;
	
	class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
	class TransportBackpacks {
        //uni
		class GCT_B_Explo {
			backpack = "GCT_B_Explo";
			count = 1;
		};
		//US Pustynne
		class GCT_B_US_Medic {
			backpack = "GCT_B_US_Medic";
			count = 1;
		};    
		class GCT_B_SL {
			backpack = "GCT_B_SL";
			count = 3;
		};
        class GCT_B_M249 {
			backpack = "GCT_B_M249";
			count = 2;
		};
        class GCT_B_M240 {
			backpack = "GCT_B_M240";
			count = 2;
		};		
        //US Lesne
		class GCT_B_WDL_US_Medic {
			backpack = "GCT_B_WDL_US_Medic";
			count = 1;
		};    
		class GCT_B_WDL_US_SL {
			backpack = "GCT_B_WDL_US_SL";
			count = 3;
		};
        class GCT_B_WDL_M249 {
			backpack = "GCT_B_WDL_M249";
			count = 2;
		};
        class GCT_B_WDL_M240 {
			backpack = "GCT_B_WDL_M240";
			count = 2;
		};			
/*
//PSZ
		class GCT_B_SL_PSZ {
			backpack = "GCT_B_SL_PSZ";
			count = 3;
		};
        class GCT_B_PSZ_Medic {
			backpack = "GCT_B_PSZ_Medic";
			count = 1;
		};
        class GCT_B_PKM {
			backpack = "GCT_B_PKM";
			count = 1;
		};	
        class GCT_B_RPG7 {
			backpack = "GCT_B_RPG7";
			count = 3;
		};
*/			
		//SOF
		class GCT_B_WDL_SEAL_SL {
			backpack = "GCT_B_WDL_SEAL_SL";
			count = 3;			
		};
		class GCT_B_DES_SEAL_SL {
			backpack = "GCT_B_DES_SEAL_SL";
			count = 3;			
		};		
		class GCT_B_WDL_SF_MAAWS {
			backpack = "GCT_B_WDL_SF_MAAWS";
			count = 1;			
		};			
		//USM
		class GCT_B_USM_SL {
			backpack = "GCT_B_USM_SL";
			count = 3;			
		};		
		class GCT_B_USM_ALICE_PRC119 {
			backpack = "GCT_B_USM_ALICE_PRC119";
			count = 1;			
		};		
		class GCT_B_USM_ST138_PRC77 {
			backpack = "GCT_B_USM_ST138_PRC77";
			count = 1;			
		};			
		class GCT_B_USM_M5_MEDIC {
			backpack = "GCT_B_USM_M5_MEDIC";
			count = 1;			
		};		
		class GCT_B_USM_762x51_BAND {
			backpack = "GCT_B_USM_762x51_BAND";
			count = 1;			
		};			
		class GCT_B_USM_556x45_BAND {
			backpack = "GCT_B_USM_556x45_BAND";
			count = 1;			
		};		
		class GCT_B_USM_762x51_TAS {
			backpack = "GCT_B_USM_762x51_TAS";
			count = 1;			
		};			
		//Raven
		class B_rhsusf_B_BACKPACK {
			backpack = "B_rhsusf_B_BACKPACK";
			count = 1;	
		};
		//statyki
        class rhs_M252_Gun_Bag {
			backpack = "rhs_M252_Gun_Bag";
			count = 1;
		};		
        class rhs_M252_Bipod_Bag {
			backpack = "rhs_M252_Bipod_Bag";
			count = 1;
		};			
        class RHS_Mk19_Gun_Bag {
			backpack = "RHS_Mk19_Gun_Bag";
			count = 1;
		};		
        class RHS_Mk19_Tripod_Bag {
			backpack = "RHS_Mk19_Tripod_Bag";
			count = 1;
		};		
        class rhs_Tow_Gun_Bag {
			backpack = "rhs_Tow_Gun_Bag";
			count = 1;
		};		
        class rhs_TOW_Tripod_Bag {
			backpack = "rhs_TOW_Tripod_Bag";
			count = 1;
		};			
	};
};
class GCT_Medical: ACE_medicalSupplyCrate_advanced {
	author = "Keeway";
	transportMaxWeapons = 500;
    transportMaxMagazines = 5000;
	maximumLoad = 20000;
	scope = 2;
	scopeCurator = 2;
	displayName = "GCT Medykamenty";	
	class TransportItems {

			class ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 50;
			};

			class ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 50;
			};
			
			class ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 50;
			};

			class ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 50;
			};		
			
			class ACE_morphine {
				name = "ACE_morphine";
				count = 50;
			};

			class ACE_atropine {
				name = "ACE_atropine";
				count = 50;
			};	
			class ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 50;
			};

			class ACE_bloodIV_500 {
				name = "ACE_bloodIV_500";
				count = 50;
			};		
			
			class ACE_bloodIV {
				name = "ACE_bloodIV";
				count = 50;
			};

			class ACE_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 50;
			};		
			class ACE_personalAidKit {
				name = "ACE_personalAidKit";
				count = 50;
			};

			class ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 50;
			};			
    };
};
class GCT_Boot_Camp: GCT_AmmoBox {
	scope = 2;
	scopeCurator = 2;
	displayName = "GCT Szkolenie";
	class TransportItems {};
	class TransportMagazines {
        //Magazynki
		class Laserbatteries {
			magazine = "Laserbatteries";
			count = 5;
		};	
		//Granaty
        class rhs_mag_m69 {
			magazine = "rhs_mag_m69";
			count = 30;
		};	
        class rhs_mag_m18_red {
			magazine = "rhs_mag_m18_red";
			count = 30;
		};
		class rhs_mag_m18_green {
			magazine = "rhs_mag_m18_green";
			count = 30;
		};
		class rhs_mag_m18_yellow {
			magazine = "rhs_mag_m18_yellow";
			count = 30;
		};
		class rhs_mag_m18_purple {
			magazine = "rhs_mag_m18_purple";
			count = 30;
		};		
	};
	class TransportWeapons {};
	
};
//Hide Crates
/*
class PSZ_AmmoBox;
class PSZ_AmmoBox_Rifles: PSZ_AmmoBox {
	scope = 1;
	scopeCurator = 1;
	};
class PSZ_AmmoBox_Machineguns: PSZ_AmmoBox {
	scope = 1;
	scopeCurator = 1;
};
class PSZ_AmmoBox_SniperRifles: Box_NATO_WpsSpecial_F {
	scope = 1;
	scopeCurator = 1;
};
class PSZ_AmmoBox_Launchers: Box_NATO_WpsLaunch_F {
	scope = 1;
	scopeCurator = 1;
};
class PSZ_AmmoBox_Ammo: PSZ_AmmoBox {
	scope = 1;
	scopeCurator = 1;
};
class PSZ_VirtualAmmoBox: B_supplyCrate_F {
	scope = 1;
	scopeCurator = 1;
};
*/