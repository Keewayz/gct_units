//g3
class UniformItem: ItemCore {
		/*extern*/ class ItemInfo;
	};
class Gen3_Multicam: Uniform_Base {
		scope = 1;
		displayName = "G3 Uniform (Multicam)";
		//hiddenSelections = {"Camo", "Camo2", "Gloves", "insignia", "clan"};
		//hiddenSelectionsTextures = {"Crye_Gen3\data\gen3_aor2_co.paa", "Crye_Gen3\data\fer_co.paa", "Crye_Gen3\data\Mechanix_mc_co.paa"};
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Operator_Mcam";
			containerClass = "Supply40";
			mass = 40;
		};
	};
class Gen3_aor1: Gen3_Multicam {
		scope = 2;
		displayName = "G3 Uniform (AOR1)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Operator_aor1";
			containerClass = "Supply40";
			mass = 40;
		};
	};
class Gen3_aor2: Gen3_Multicam {
		scope = 2;
		displayName = "G3 Uniform (AOR2)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Operator_aor2";
			containerClass = "Supply40";
			mass = 40;
		};
	};
class Gen3_cce: Gen3_Multicam {
		scope = 1;
		displayName = "G3 Uniform (CCE)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Operator_cce";
			containerClass = "Supply40";
			mass = 40;
		};
	};	
class Gen3_3c: Gen3_Multicam {
		scope = 2;
		displayName = "G3 Uniform (3C)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "Operator_3c";
			containerClass = "Supply40";
			mass = 40;
		};
	};		