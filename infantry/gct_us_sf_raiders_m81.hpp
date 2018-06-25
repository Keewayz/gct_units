//Baza
class gct_rhsusf_infantry_usmc_m81_base : rhsusf_infantry_usmc_base {
	editorSubcategory = "gct_rhs_usmc_m81";
	editorPreview = "\gct_extrastuff\data\icons\logo_gct.jpg";
	vehicleClass = "gct_rhs_usmc_m81";
	uniformClass = "rhs_uniform_FROG01_m81";
        GCT_Author_Macro

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","Throw","Put"};
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

	Items[] = {"ACE_CableTie","ACE_EarPlugs","rhsusf_acc_nt4_black","ACE_fieldDressing","ACE_fieldDressing"};
	RespawnItems[] = {"ACE_CableTie","ACE_EarPlugs","rhsusf_acc_nt4_black","ACE_fieldDressing","ACE_fieldDressing"};

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};

	class EventHandlers;
	};
//Rifleman
class gct_rhsusf_usmc_marpat_m81_rifleman : gct_rhsusf_infantry_usmc_m81_base {
	_generalMacro = "rhsusf_usmc_rifleman";
	scope = 2;
	GCT_Author_Macro
	displayName = "Operator (M4)";

    linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_rifleman","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_rifleman","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","Throw","Put"};
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
class gct_rhsusf_usmc_marpat_m81_riflemanat : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_rifleman_at4";
	GCT_Author_Macro
	displayName= "Operator (M136)";

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

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_rifleman","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_rifleman","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_eotech_soc","rhs_weap_M136","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","rhs_weap_M136","Throw","Put"};
	magazines[] = 	{
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
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_m136_mag"
	};

	secondaryAmmoCoef = 0.5;
	};
class gct_rhsusf_usmc_marpat_m81_grenadier : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_grenadier";
	GCT_Author_Macro
	displayName= "Operator (M203)";

	cost = 130000;
	threat[] = {1,0.3,0.1};

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","Throw","Put"};
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
		"rhs_mag_an_m8hc",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M433_HEDP",
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
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M433_HEDP",
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
		"rhs_mag_M441_HE",
		"rhs_mag_M713_red",
		"rhs_mag_M713_red"	
	};

	};
//MG's
class gct_rhsusf_usmc_marpat_m81_m249 : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_autorifleman_m249";
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

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_mg","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_mg","rhsusf_ANPVS_15",Standard_Equipment};

	backpack="GCT_B_M249";
	weapons[] = 
	{
		"rhs_weap_m249_pip_S_elcan_pip",
		"lerca_1200_tan",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"rhs_weap_m249_pip_S_elcan_pip",
		"lerca_1200_tan",
		"Throw",
		"Put"
	};

	magazines[] = 	{
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] = {
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_an_m8hc"
	};

	};
class gct_rhsusf_usmc_marpat_m81_m249_ass : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_autorifleman_m249_ass";
	GCT_Author_Macro
	displayName= "KM Asystent (M249)";

	weapons[] = {"rhs_m4a1_compm4","Throw","Put","lerca_1200_tan"};
	respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put","lerca_1200_tan"};
	
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

	backpack="GCT_B_M249";

	};
// Leaders
class gct_rhsusf_usmc_marpat_m81_co : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_officer";
	GCT_Author_Macro
	displayName= "Dowodca Elementu";
	
	Items[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

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

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = 
	{
		"rhs_weap_m4a1_blockII_M203_SU230",
		"rhsusf_weap_m9",
		"lerca_1200_tan",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};
	respawnWeapons[] = 
	{
		"rhs_weap_m4a1_blockII_M203_SU230",
		"rhsusf_weap_m9",
		"lerca_1200_tan",
		"Throw",
		"Put",
		"lerca_1200_tan"
	};

	magazines[] = 	{
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
class gct_rhsusf_usmc_marpat_m81_sl : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_squadleader";
	GCT_Author_Macro
	displayName= "Dowodca Druzyny";
	
	Items[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = 
	{
		"rhs_weap_m4a1_blockII_M203_SU230",
		"rhsusf_weap_m9",
		"lerca_1200_tan",
		"Throw",
		"Put"
	};
	respawnWeapons[] = 
	{
		"rhs_weap_m4a1_blockII_M203_SU230",
		"rhsusf_weap_m9",
		"lerca_1200_tan",
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
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
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
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
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
        backpack="GCT_B_SL";
	};
class gct_rhsusf_usmc_marpat_m81_tl : gct_rhsusf_infantry_usmc_m81_base {

	_generalMacro = "rhsusf_usmc_teamleader";
	GCT_Author_Macro
	displayName= "Dowodca Sekcji";
	
	Items[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};
	RespawnItems[] = {"ACE_CableTie","ACE_CableTie","rhsusf_acc_nt4_black", "ACE_EarPlugs", "ACE_fieldDressing", "ACE_fieldDressing","ACE_Flashlight_XL50","ACE_microDAGR","ACE_MapTools","ACRE_PRC148"};

	cost = 450000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

        linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_grenadier","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","lerca_1200_tan","Throw","Put"};

	magazines[] = 	
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",		
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
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
	respawnMagazines[] =
	{
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",		
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
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
	backpack="GCT_B_SL";

	};
// Support
class gct_rhsusf_usmc_marpat_m81_engineer : gct_rhsusf_usmc_marpat_m81_rifleman {
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

        linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
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
	};
class gct_rhsusf_usmc_marpat_m81_explosives : gct_rhsusf_usmc_marpat_m81_rifleman {
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
	
        linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	
	weapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
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
class gct_rhsusf_usmc_marpat_m81_uav : gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_uav";
	GCT_Author_Macro
	displayName= "Operator UAV";

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","Throw","Put"};
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
class gct_rhsusf_usmc_marpat_m81_medic : gct_rhsusf_usmc_marpat_m81_rifleman {

	GCT_Author_Macro
	displayName= "Medyk";

	weapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","Throw","Put"};
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

	linkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_M81","rhsusf_mbav_light","rhsusf_ANPVS_15",Standard_Equipment};
	
	attendant =1;
	icon="iconManMedic";
	backpack="GCT_B_US_Medic";
	picture="pictureHeal";
	};
class gct_rhsusf_usmc_marpat_m81_marksman: gct_rhsusf_usmc_marpat_m81_rifleman {
	_generalMacro = "rhsusf_usmc_marksman";
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

	linkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_mg",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_mg",Standard_Equipment};

	weapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","lerca_1200_tan","Throw","Put"};
	magazines[] =
	{
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
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
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc"
	};

	};
// Scope=1;
class gct_rhsusf_usmc_marpat_m81_crewman : gct_rhsusf_infantry_usmc_m81_base {
	scope=1;
	};
class gct_rhsusf_usmc_marpat_m81_smaw : gct_rhsusf_usmc_marpat_m81_riflemanat {
	scope=1;
	};
class gct_rhsusf_usmc_marpat_m81_smaw_ass : gct_rhsusf_usmc_marpat_m81_rifleman {
	scope=1;
	};
class gct_rhsusf_usmc_marpat_m81_javelin : gct_rhsusf_usmc_marpat_m81_smaw {
	scope=1;
	};
class gct_rhsusf_usmc_marpat_m81_javelin_ass : gct_rhsusf_usmc_marpat_m81_rifleman {
	scope=1;
	};	
class gct_rhsusf_usmc_marpat_m81_m27 : gct_rhsusf_infantry_usmc_m81_base {
	scope=1;
};	
class gct_rhsusf_usmc_marpat_m81_m240 : gct_rhsusf_usmc_marpat_m81_m249 {
	scope=1;
	};
class gct_rhsusf_usmc_marpat_m81_m240_ass : gct_rhsusf_usmc_marpat_m81_rifleman {
	scope=1;
	};