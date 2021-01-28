class CfgMagazines {
    class CA_Magazine;
    class TDD_Talon_Mag: CA_Magazine {
    	author = "Ampersand";
    	scope = 2;
    	mass = 150;
    	displayName = "Talon Spike Net";
    	descriptionUse = "Use mine";
    	picture = QPATHTOF(ui\talon_ca.paa);
    	model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_large_F.p3d";
    	useAction = 1;
    	useActionTitle = "Put %1 (%2 left)";
    	type = "2*		256";
    	allowedSlots[] = {901};
    	value = 5;
    	ammo = "TDD_Talon_Ammo";
    	nameSoundWeapon = "mine";
    	nameSound = "mine";
    	count = 1;
    	initSpeed = 0;
    	maxLeadSpeed = 0;
    	descriptionShort = "Type: Vehicle immobilization device <br />Rounds: 1<br />Used on: Ground";
    	weaponPoolAvailable = 1;
    	sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
    };
};
