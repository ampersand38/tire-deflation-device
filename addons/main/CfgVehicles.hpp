class CfgVehicles {
    class MineBase;
    class TDD_Talon: MineBase {
    	author = "Ampersand";
    	mapSize = 10.00;
    	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Tarp_01_Large_Black_F.jpg";
    	_generalMacro = "TDD_Talon";
    	scope = 2;
    	ammo = "TDD_Talon_Ammo";
    	displayName = "Talon Spike Net";
    	icon = "iconExplosiveAT";
    	picture = "\A3\Weapons_F\Data\clear_empty.paa";
    	model = "\a3\Props_F_Enoch\Military\Decontamination\Tarp_01_Large_Black_F.p3d";
    	descriptionShort = "Type: Vehicle immobilization device<br />Rounds: 1<br />Used on: Ground";
    	class Library
    	{
    		libTextDesc = "A spiked net laid over a road that can stop wheeled vehicles.";
    	};
    };

    class ModuleMine_F;
    class TDD_Talon_ModuleMine: ModuleMine_F {
    	author = "Ampersand";
    	_generalMacro = "TDD_Talon_ModuleMine";
    	scopeCurator = 2;
    	displayName = "Talon Spike Net";
    	explosive = "TDD_Talon_Ammo";
    	icon = "iconExplosiveAT";
    };

};
