class CfgVehicles {
    class MineBase;
    class TDD_Talon: MineBase {
    	author = "Ampersand";
    	mapSize = 10.00;
    	editorPreview = QPATHTOF(data\TDD_Talon_editorPreview.jpg);
    	_generalMacro = "TDD_Talon";
    	scope = 2;
    	ammo = "TDD_Talon_Ammo";
    	displayName = "$STR_TDD_Main_Talon_DisplayName";
    	icon = "iconExplosiveAT";
    	picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\a3\Props_F_Enoch\Military\Decontamination\Tarp_01_Large_Black_F.p3d";
    	descriptionShort = "$STR_TDD_Main_Talon_Description";
    	class Library {
    		libTextDesc = "$STR_TDD_Main_Talon_Library";
    	};
    };

    class ModuleMine_F;
    class TDD_Talon_ModuleMine: ModuleMine_F {
    	author = "Ampersand";
    	_generalMacro = "TDD_Talon_ModuleMine";
    	scopeCurator = 2;
    	displayName = "$STR_TDD_Main_Talon_DisplayName";
    	explosive = "TDD_Talon_Ammo";
    	icon = "iconExplosiveAT";
    };
};
