//bazowane na frameowrku od ALiVE

#include "script_component.hpp"

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscPicture;

class cfgScriptPaths
{
	alive = "\alive_ui\";
};
class RscDisplayStart: RscStandardDisplay {
	//onLoad = "[""onLoad"",_this,""RscDisplayLoadingALIVE"",'Loading'] call compile preprocessfilelinenumbers ""\x\alive\addons\UI\initDisplay.sqf""";
	class controls {
		class LoadingStart: RscControlsGroup {
			class controls {
				class Logo: RscPictureKeepAspect {
					idc = 1200;
					// text = "\gct_extrastuff\data\gct_ins.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
				};
				class Noise: RscPicture {
					text = "\gct_units\data\gct_bg.paa";
				};
			};
		};
	};
};