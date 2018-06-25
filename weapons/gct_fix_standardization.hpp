//M16 z CUP na GST
class gst_m16a2;
class CUP_arifle_M16A2 : gst_m16a2 {
	scope = 1;
};

class PSZ_AccO_Colimator;
class rhsusf_acc_sniper_base;
class rhs_acc_1p63;
//Aimpointy
class rhsusf_acc_compm4 : ItemCore{
	displayName = "Aimpoint M68";
};
//EOTech 552
class rhsusf_acc_eotech_552 : rhsusf_acc_compm4 {
	displayName = "EOTech 552 (Nowy)";
};
class rhsusf_acc_eotech_552_d : rhsusf_acc_eotech_552 {	
	displayName = "EOTech 552 (Pustynia)";
};
class rhsusf_acc_eotech_552_wd : rhsusf_acc_eotech_552 {	
	displayName = "EOTech 552 (Las)";
};
class PSZ_AccO_EOT552: PSZ_AccO_Colimator {
	displayName = "EOTech 552 (Uzywany)";
};
//EOTech EXPS2
class rhsusf_acc_EOTECH : optic_Holosight {
	displayName = "EOTech EXPS3 (Pustynia)";
};
//EOTech XP3
class rhsusf_acc_eotech_xps3 : optic_Holosight{
	displayName = "EOTech XPS3 (Nowy)";
	scope=2;
	scopearsenal=2;
};
//ACOGi
//M150
class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
	displayName = "ACOG (M150)";
};
class rhsusf_acc_ACOG2: rhsusf_acc_ACOG {
	displayName = "ACOG (M150/ARD)";
};
class rhsusf_acc_ACOG3: rhsusf_acc_ACOG {
	displayName = "ACOG (M150/ARD/Lens Cover)";
};
class rhsusf_acc_ACOG_anpvs27: rhsusf_acc_ACOG {
	displayName = "ACOG (M150 + AN/PVS-27)";
};
//M150 kolory
class rhsusf_acc_ACOG_d: rhsusf_acc_ACOG {
	displayName = "ACOG (M150/Pustynia)";
};
class rhsusf_acc_ACOG_wd: rhsusf_acc_ACOG {
	displayName = "ACOG (M150/Las)";
};
/*
class rhsusf_acc_ACOG_sa: rhsusf_acc_ACOG {
	displayName = "ACOG (M150/Pol-pustynny)";
};*/
//USMC
class rhsusf_acc_ACOG_USMC: rhsusf_acc_ACOG {
	displayName = "ACOG (AN/PVQ31)";
};
class rhsusf_acc_ACOG2_USMC: rhsusf_acc_ACOG2 {
	displayName = "ACOG (AN/PVQ31/ARD)";
};
class rhsusf_acc_ACOG3_USMC: rhsusf_acc_ACOG3 {
	displayName = "ACOG (AN/PVQ31/ARD/Lens Cover)";
};
//RMR
class rhsusf_acc_ACOG_RMR: rhsusf_acc_ACOG {
	displayName = "ACOG (TA31RCO-RMR)";
};
/*//Rakurs
class rhs_acc_rakursPM: rhs_acc_1p63{
	displayName = "Rakurs-PM 1P76";
};*/
//Fix latarki
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class acc_pointer_IR;
class rhsusf_acc_anpeq15 : acc_pointer_IR {
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		RMBhint="IR Laser";
		mass = 8;

		class Pointer
		{
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};

		class FlashLight{};
	};
};
class rhsusf_acc_anpeq15_light : rhsusf_acc_anpeq15 {
	class ItemInfo: ItemInfo
	{
		RMBhint="Flashlight";
		mass = 8;

		class Pointer {};

		class FlashLight {
				color[] = {1200, 1500, 1800};
				ambient[] = {10, 7.500000, 5};
				intensity = 300;
				size = 1;
				innerAngle = 20;
				outerAngle = 30;
				coneFadeCoef = 3;
				direction = "flash";
				position = "flash dir";
				dayLight = 1;
				useFlare = 1;
				flareSize = 3;
				flareMaxDistance = 300;
				scale[] = {0};

				class Attenuation {
					start = 15;
					constant = 100;
					linear = 70;
					quadratic = 15;
					hardLimitStart = 130;
					hardLimitEnd = 160;
				};
			};
	};
};
//UKM/PKM
/*class PSZ_PKM: PSZ_UKM {
		scope = 1;
		scopecurator =1;
	};*/
class rhs_pkp_base: Rifle_Long_Base_F {
		magazines[] = {
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR_green",
			"PSZ_762x54_Belt_100",
			"PSZ_762x54_Belt_100_T_R"
		};
	};
class UGL_F;
class PSZ_UGL: UGL_F {
	scope=1;
};