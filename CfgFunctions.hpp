class CfgFunctions {
	class GCT {
		project = "GCT";
		tag     = "GCT";
		class functions
		{
			class GCT_virtualAmmoBoxUSA
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxUSA, make a object virtual ammo box with american gear inside";
			};
			class GCT_virtualAmmoBoxRus
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxRus, make a object virtual ammo box with russian gear inside";
			};
            class GCT_randomUniform {
                file = "\gct_units\data\scripts\rds_randomUniform.sqf";
                description = "Add random uniform";
            };
		};
	};
};