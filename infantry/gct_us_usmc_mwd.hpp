	//Baza
	class gct_rhsusf_infantry_usmc_base : rhsusf_infantry_usmc_base {
		editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
		editorSubcategory = "gct_rhs_usmc_wdl";
		vehicleClass = "gct_rhs_usmc_wdl";
		uniformClass = "rhs_uniform_FROG01_wd";
		GCT_Author_Macro

		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag_compm4","Throw","Put"};
		magazines[] = 		{
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

		Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing"};

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};

		class EventHandlers;
	};
	//Rifleman
	class gct_rhsusf_usmc_marpat_wd_rifleman : gct_rhsusf_infantry_usmc_base {
		_generalMacro = "rhsusf_usmc_rifleman";
		scope = 2;
		GCT_Author_Macro
		displayName = "Strzelec (M16)";


        linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_pmag_compm4","Throw","Put"};
		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
    class gct_rhsusf_usmc_marpat_wd_rifleman_m4 : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_rifleman_m4";
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec (M4)";

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};

	};
	class gct_rhsusf_usmc_marpat_wd_riflemanat : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_rifleman_at4";
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec (M136)";

		class SpeechVariants
		{
			class Default
			{
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

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_rifleman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_rifleman", Standard_Equipment};

		weapons[] = {"rhs_m4_compm4","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","rhs_weap_M136","Throw","Put"};
		magazines[] = 		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_m136_mag"
		};

		secondaryAmmoCoef = 0.5;
	};
	class gct_rhsusf_usmc_marpat_wd_grenadier : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_grenadier";
		scope = 2;
		GCT_Author_Macro
		displayName= "Grenadier";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_carryhandle_M203_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203_compm4","Throw","Put"};
		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M433_HEDP",
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
     //MG's
	class gct_rhsusf_usmc_marpat_wd_m27 : gct_rhsusf_infantry_usmc_base {
		_generalMacro = "rhsusf_usmc_autorifleman";
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec (M27)";

		cost = 125000;
		threat[] = {1,0.1,0.3};


        linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_coy_m27";

		weapons[] = {"rhs_weap_m27iar_acog_pip","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m27iar_acog_pip","Throw","Put"};
		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
	class gct_rhsusf_usmc_marpat_wd_m249 : gct_rhsusf_usmc_marpat_wd_m27 {
		_generalMacro = "rhsusf_usmc_autorifleman_m249";
		scope = 2;
		GCT_Author_Macro
		displayName= "KM Celowniczy (M249)";

		class SpeechVariants
		{
			class Default
			{
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

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};

		backpack="GCT_B_WDL_M249";
		weapons[] = 
		{
			"rhs_weap_m249_pip_S_elcan_pip",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"rhs_weap_m249_pip_S_elcan_pip",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] = 		{
			"rhs_200rnd_556x45_T_SAW",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] = {
			"rhs_200rnd_556x45_T_SAW",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhs_mag_an_m8hc"
		};

	};
	class gct_rhsusf_usmc_marpat_wd_m249_ass : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_autorifleman_m249_ass";
		scope = 2;
		GCT_Author_Macro
		displayName= "KM Asystent (M249)";

		weapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		
		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};

		
		cost = 110000;
		camouflage = 1.5;

		backpack="GCT_B_WDL_M249";

	};
	class gct_rhsusf_usmc_marpat_wd_m240 : gct_rhsusf_usmc_marpat_wd_m27 {
		_generalMacro = "rhsusf_usmc_machinegunner";
		scope = 2;
		GCT_Author_Macro
		displayName= "KM Celowniczy (M240)";

		icon = "iconManMG";

		backpack="rhsusf_assault_eagleaiii_coy";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};

		weapons[] = {"rhs_weap_m240b_elcan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240b_elcan","Throw","Put"};
		magazines[] = 		{
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] = {
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51",
			"rhs_mag_an_m8hc"
		};

	};
    class gct_rhsusf_usmc_marpat_wd_m240_ass : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_machinegunner_ass";
		scope = 2;
		GCT_Author_Macro
		displayName= "KM Asystent (M240)";

		weapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
				
		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};

		
		cost = 110000;
		camouflage = 1.5;

		backpack="GCT_B_WDL_M240";

	};
	// Leaders
	class gct_rhsusf_usmc_marpat_wd_co : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_officer";
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Plutonu";
		
		Items[] = {"ACE_CableTie","ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

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

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_squadleader",Standard_Equipment};

		weapons[] = 
		{
			"rhs_m4a1_acog3",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put",
			"lerca_1200_tan"
		};
		respawnWeapons[] = 
		{
			"rhs_m4a1_acog3",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put",
			"lerca_1200_tan"
		};

		magazines[] = 		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
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
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
		};

	};
    class gct_rhsusf_usmc_marpat_wd_sl : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_squadleader";
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Druzyny";
		
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManOfficer";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};

		weapons[] = 
		{
			"rhs_weap_m4a1_m203_acog_pip",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"rhs_weap_m4a1_m203_acog_pip",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
			"rhs_mag_M713_red",			
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"		
		};
		respawnMagazines[] =
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
            "rhs_mag_M714_white",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",		
			"rhs_mag_M713_red",			
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",			
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"		
		};
        backpack="GCT_B_WDL_US_SL";
	};
    class gct_rhsusf_usmc_marpat_wd_tl : gct_rhsusf_infantry_usmc_base {

		_generalMacro = "rhsusf_usmc_teamleader";
		scope = 2;
		GCT_Author_Macro
		displayName= "Dowódca Sekcji";
		
		Items[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

        linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader",Standard_Equipment};

		weapons[] = {"rhs_weap_m4a1_m203_acog_pip","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_m203_acog_pip","Binocular","Throw","Put"};

		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",		
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",		
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"				
		};
		respawnMagazines[] =
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M441_HE",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",
			"rhs_mag_M713_red",		
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",		
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green"	
		};
		backpack="GCT_B_WDL_US_SL";

	};
	// Support
    class gct_rhsusf_usmc_marpat_wd_engineer : gct_rhsusf_usmc_marpat_wd_rifleman {
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

        linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		magazines[] = 		{
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
	};
 	class gct_rhsusf_usmc_marpat_wd_explosives : gct_rhsusf_usmc_marpat_wd_rifleman {
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
		
        linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",  Standard_Equipment};
		
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		magazines[] = 		{
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
	class gct_rhsusf_usmc_marpat_wd_uav : gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_uav";
		scope = 2;
		GCT_Author_Macro
		displayName= "Operator UAV";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_light",  Standard_Equipment};

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		magazines[] = 		{
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
    class gct_rhsusf_usmc_marpat_wd_medic : gct_rhsusf_usmc_marpat_wd_rifleman {

		GCT_Author_Macro
		displayName= "Medyk";

		weapons[] = {"rhs_weap_m4_carryhandle_pmag_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_pmag_compm4","Throw","Put"};
		magazines[] = 		{
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
		respawnMagazines[] =
		{
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
	class gct_rhsusf_usmc_marpat_wd_smaw : gct_rhsusf_usmc_marpat_wd_riflemanat {
		_generalMacro = "rhsusf_usmc_smaw";
		GCT_Author_Macro
		displayName= "AT Specjalista (SMAW)";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		class EventHandlers : EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				init = "_this call rhs_fnc_smaw_init;";
				respawn = "_this call rhs_fnc_smaw_init;";
			};
		};

		backpack="rhsusf_assault_eagleaiii_coy";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] = 
		{
			"rhs_m4_compm4",
			"rhs_weap_smaw_green",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"rhs_m4_compm4",
			"rhs_weap_smaw_green",
			"Throw",
			"Put"
		};

		magazines[] = 		
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_HEDP",
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
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_SR",
			"rhs_mag_smaw_HEDP",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
	};
	class gct_rhsusf_usmc_marpat_wd_smaw_ass : gct_rhsusf_usmc_marpat_wd_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "AT Asystent (SMAW)";

		weapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		
		cost = 110000;
		camouflage = 1.5;

		backpack="rhsusf_assault_eagleaiii_coy_assaultman";

	};
	class gct_rhsusf_usmc_marpat_wd_javelin : gct_rhsusf_usmc_marpat_wd_smaw {
		_generalMacro = "rhsusf_usmc_javelin";
		GCT_Author_Macro
		displayName= "AT Specjalista (Javelin)";

		backpack="rhsusf_assault_eagleaiii_coy";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] = 
		{
			"rhs_m4_compm4",
			"rhs_weap_fgm148",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"rhs_m4_compm4",
			"rhs_weap_fgm148",
			"Throw",
			"Put"
		};

		magazines[] = 		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_fgm148_magazine_AT",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_fgm148_magazine_AT",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc"
		};
	};
	class gct_rhsusf_usmc_marpat_wd_javelin_ass : gct_rhsusf_usmc_marpat_wd_rifleman {
		scope = 2;
		GCT_Author_Macro
		displayName= "AT Asystent (Javelin)";

		weapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put","Binocular"};
		
		cost = 110000;
		camouflage = 1.5;

		backpack="rhsusf_assault_eagleaiii_ocp_at";

	};
	class gct_rhsusf_usmc_marpat_wd_marksman: gct_rhsusf_usmc_marpat_wd_rifleman {
		_generalMacro = "rhsusf_usmc_marksman";
		scope = 2;
		GCT_Author_Macro
		displayName= "Strzelec Wyborowy";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";

		cost = 150000;
		sensitivity = 3.3;

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		magazines[] =
		{
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc"
		};

	};
	// Ground Crew
	class gct_rhsusf_usmc_marpat_wd_crewman : gct_rhsusf_infantry_usmc_base {
		_generalMacro = "rhsusf_usmc_crewman";
		scope = 2;
		GCT_Author_Macro
		displayName= "Zalogant";

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		engineer = 1;

		Items[] = {"ACE_CableTie","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing"};
		RespawnItems[] = {"ACE_CableTie", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing"};

        linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};

		weapons[] = {"rhs_weap_m4_carryhandle_pmag_compm4","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_pmag_compm4","rhsusf_weap_m9","Binocular","Throw","Put"};
		magazines[] = 		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

	};