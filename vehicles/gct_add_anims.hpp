/*extern*/ class Man;

	class CAManBase: Man {

		class ACE_SelfActions {

			class kka3_anim {
				displayName = "Animacje";
				icon = "\gct_extrastuff\data\anims\ui_A.paa";

				class kka3_poses {
					displayName = "Animacje";
					icon = "\gct_extrastuff\data\anims\ui_poses.paa";

					class kka3_pose1 {
						displayName = "Wyluzowany słuchacz";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_1_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p1.paa";
					};

					class kka3_pose2 {
						displayName = "Twardziel";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_3_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p2.paa";
					};

					class kka3_pose3 {
						displayName = "Sprawdź broń";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_5_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p3.paa";
					};

					class kka3_pose4 {
						displayName = "SlavSquat";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_6_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p4.paa";
					};

					class kka3_pose5 {
						displayName = "Taktyczne Kolanko";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_7_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p5.paa";
					};

					class kka3_pose6 {
						displayName = "Wyluzowane Taktyczne Kolanko";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSnonWnonDnon_warmup_8_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p6.paa";
					};

					class kka3_pose7 {
						displayName = "Podnies Reke";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_JetsMarshallingClear_loop'";
						icon = "\gct_extrastuff\data\anims\ui_p6.paa";
					};
				};

				class kka3_actions {
					displayName = "Akcje";
					icon = "\gct_extrastuff\data\anims\ui_actions.paa";

					class kka3_pissing {
						displayName = "Bio";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_AidlPercMstpSlowWrflDnon_pissing'";
						icon = "\gct_extrastuff\data\anims\ui_actions.paa";
					};

					class kka3_talking1 {
						displayName = "Mowa 1";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_CivilTalking_1'";
						icon = "\gct_extrastuff\data\anims\ui_actions.paa";
					};

					class kka3_talking2 {
						displayName = "Mowa 2";
						condition = "";
						exceptions[] = {};
						statement = "_player switchMove 'Acts_CivilTalking_2'";
						icon = "\gct_extrastuff\data\anims\ui_actions.paa";
					};
				};

				class kka3_cancel {
					displayName = "Anuluj animacje";
					icon = "\gct_extrastuff\data\anims\ui_cancel.paa";
					condition = "";
					exceptions[] = {};
					statement = "_player switchMove ''";
				};
			};
		};
	};	