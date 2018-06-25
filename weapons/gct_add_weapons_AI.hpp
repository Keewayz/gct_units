//Regular
class rhs_weap_m4;
class rhs_weap_m4_carryhandle_pmag;
class rhs_weap_m4a1_m203;
class rhs_weap_m4_m320;
class rhs_weap_m27iar;
class rhs_weap_m16a4_carryhandle_pmag;
class rhs_weap_m16a4_carryhandle_M203;
class rhs_weap_m16a4;
class rhs_weap_m249_pip_S;
class rhs_weap_m240B;
class Rifle_Base_F;
class PSZ_UKM;
class Rifle_Long_Base_F;
class arifle_MX_Base_F: Rifle_Base_F {};
class rhs_weap_m4_Base : arifle_MX_Base_F {};
class rhs_weap_m4a1 : rhs_weap_m4_Base {};
class rhs_weap_m4_m203 : rhs_weap_m4_m320 {};
//M4 PMAG COMP4
class rhs_weap_m4_carryhandle_pmag_compm4 : rhs_weap_m4_carryhandle_pmag {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };
//M4A1 M203
class rhs_weap_m4a1_m203_acog_pip : rhs_weap_m4a1_m203 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ACOG";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };
//M27 ACOG PIP
class rhs_weap_m27iar_acog_pip : rhs_weap_m27iar {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ACOG";
            };
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
		};
    };
//M16A4 PMAG COMP4
class rhs_weap_m16a4_carryhandle_pmag_compm4 : rhs_weap_m16a4_carryhandle_pmag {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };	
//M16A4 M203 COMP4
class rhs_weap_m16a4_carryhandle_M203_compm4 : rhs_weap_m16a4_carryhandle_M203 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };
//M16A4 ACOG PIP
class rhs_weap_m16a4_acog_pip : rhs_weap_m16a4 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ACOG";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };	
//M249 Short Elcan PIP 
class rhs_weap_m249_pip_S_elcan_pip : rhs_weap_m249_pip_S {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
        };
    };	
//M240B Elcan PIP
class rhs_weap_m240B_elcan_pip : rhs_weap_m240B {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ELCAN_pip";
            };
        };
    };	
//Kompatybilnosc ze starymi
class rhs_m4_acog_pip : rhs_weap_m4_carryhandle_pmag {
		class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_ACOG";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
	};
class rhs_m4a1_m320_compm4 : rhs_weap_m4a1_m203 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side";
            };
        };
    };
//Special Forces
class rhs_weap_m4a1_blockII;
class rhs_weap_m4a1_blockII_KAC;
class rhs_weap_m4a1_blockII_M203;
class rhs_weap_m4a1_blockII_bk;
class rhs_weap_m4a1_blockII_KAC_bk;
class rhs_weap_m4a1_blockII_M203_bk;
class rhs_weap_m4a1_blockII_wd;
class rhs_weap_m4a1_blockII_KAC_wd;
class rhs_weap_m4a1_blockII_M203_wd;
class rhs_weap_hk416d10;
class rhs_weap_hk416d10_LMT;
class rhs_weap_hk416d10_LMT_d;
class rhs_weap_hk416d10_LMT_wd;
class rhs_weap_hk416d10_m320;
class rhs_weap_hk416d145;
class rhs_weap_hk416d145_m320;
class rhsusf_weap_MP7A2;
class rhs_weap_m249_pip_S_para;
//M4A1 Block II
//Normalny
class gct_rhs_weap_m4a1_bII_eotech : rhs_weap_m4a1_blockII {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_kac_eotech : rhs_weap_m4a1_blockII_KAC {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_m203_eotech : rhs_weap_m4a1_blockII_M203 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
//Czarny
class gct_rhs_weap_m4a1_bII_bk_eotech : rhs_weap_m4a1_blockII_bk {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_KAC_bk_eotech : rhs_weap_m4a1_blockII_KAC_bk {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_m203_bk_eotech : rhs_weap_m4a1_blockII_M203_bk {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
//Las
class gct_rhs_weap_m4a1_bII_wd_eotech : rhs_weap_m4a1_blockII_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_KAC_wd_eotech : rhs_weap_m4a1_blockII_KAC_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
class gct_rhs_weap_m4a1_bII_m203_wd_eotech : rhs_weap_m4a1_blockII_M203_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_eotech_xps3";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15";
    };
  };
};
//HK416
//D10 Normal
class gct_rhs_weap_hk416d10_eotxps3 : rhs_weap_hk416d10 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_EOTECH";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_eot552 : rhs_weap_hk416d10 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_SU230 : rhs_weap_hk416d10 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D10 SOP-Mod Black
class gct_rhs_weap_hk416d10_LMT_eotxps3 : rhs_weap_hk416d10_LMT {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_EOTECH";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_LMT_eot552 : rhs_weap_hk416d10_LMT {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_LMT_SU230 : rhs_weap_hk416d10_LMT {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D10 SOP-Mod DES
class gct_rhs_weap_hk416d10_d_LMT_eotxps3 : rhs_weap_hk416d10_LMT_d {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_EOTECH";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_d_LMT_eot552 : rhs_weap_hk416d10_LMT_d {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_d_LMT_SU230 : rhs_weap_hk416d10_LMT_d {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D10 SOP-Mod WDL
class gct_rhs_weap_hk416d10_wd_LMT_eotxps3 : rhs_weap_hk416d10_LMT_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_EOTECH";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_wd_LMT_eot552 : rhs_weap_hk416d10_LMT_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_wd_LMT_SU230 : rhs_weap_hk416d10_LMT_wd {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_OD";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D10 M320
class gct_rhs_weap_hk416d10_m320_eotxps3 : rhs_weap_hk416d10_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_EOTECH";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_m320_eot552 : rhs_weap_hk416d10_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d10_m320_SU230 : rhs_weap_hk416d10_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D145 Normal
class gct_rhs_weap_hk416d145_eot552 : rhs_weap_hk416d145 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d145_SU230 : rhs_weap_hk416d145 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d145_ACOG : rhs_weap_hk416d145 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_ACOG_RMR";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//D145 M320
class gct_rhs_weap_hk416d145_m320_eot552 : rhs_weap_hk416d145_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "PSZ_AccO_EOT552";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d145_m320_SU230 : rhs_weap_hk416d145_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_SpecterDR_A";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
class gct_rhs_weap_hk416d145_m320_ACOG : rhs_weap_hk416d145_m320 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_ACOG_RMR";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//MP7A2
class gct_rhs_weap_MP7A2_compm4 : rhsusf_weap_MP7A2 {
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      slot = "CowsSlot";
      item = "rhsusf_acc_compm4";
    };
    class LinkedItemsAcc
    {
      slot = "PointerSlot";
      item = "rhsusf_acc_anpeq15_bk";
    };
  };
};
//M249
class gct_rhs_weap_m249_para_eot552 : rhs_weap_m249_pip_S_para {
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "PSZ_AccO_EOT552";
		};
	};
};