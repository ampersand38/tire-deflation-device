class CfgMagazines {
    class CA_Magazine;
    class TDD_Talon_Mag: CA_Magazine {
    	author = "Ampersand";
    	scope = 2;
    	mass = 150;
    	displayName = "$STR_TDD_Main_Talon_DisplayName";
    	descriptionUse = "$STR_A3_cfgMagazines_ATMine_Range_Mag0";
    	picture = QPATHTOF(ui\talon_ca.paa);
    	model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_large_F.p3d";
    	useAction = 1;
    	useActionTitle = "$STR_ACTION_PUTBOMB";
    	type = "2*		256";
    	allowedSlots[] = {901};
    	value = 5;
    	ammo = "TDD_Talon_Ammo";
    	nameSoundWeapon = "mine";
    	nameSound = "mine";
    	count = 1;
    	initSpeed = 0;
    	maxLeadSpeed = 0;
    	descriptionShort = "$STR_TDD_Main_Talon_Description";
    	weaponPoolAvailable = 1;
    	sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
    	class Library {
    		libTextDesc = "$STR_TDD_Main_Talon_Library";
    	};
    };
};
