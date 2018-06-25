
#define ItemMacro(nameN,dispName,classN,EdClassN,EdSubClassN) \
	class Item_##nameN## : Item_Base_F {\
			scope = 2;\
			scopeCurator = 2;\
			displayName = ##dispName##;\
			author=Keeway;\
			vehicleClass = ##classN##;\
			editorCategory = ##EdClassN##;\
			editorSubcategory = ##EdSubClassN##;\
			model = \A3\Weapons_f\dummyweapon.p3d;\
			class TransportItems {\
				class ##nameN## {\
				name = ##nameN##;\
				count = 1;\
			};\
		};\
	};
/*
WeaponAccessories
ItemsUniforms
ItemsHeadgear
ItemsVests

regex:
	(ItemMacro\()"(.*?)(",)
	\1\2,
*/
class Item_Base_F;

ItemMacro(A3_GPNVG18b_BLK_F,"GPNVG-18 BLK (Battery)","ItemsHeadgear","EdCat_Equipment","EdSubcat_Helmets")
//przykład ItemMacro(classname,"nazwaedytorowa","ItemsHeadgear","EdCat_Equipment","EdSubcat_Helmets") 