#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"TDD_Talon","TDD_Talon_ModuleMine"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F_Explosives","cba_main"};
        author = "Ampersand";
        authors[] = {"Ampersand"};
        authorUrl = "https://github.com/ampersand38/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMineTriggers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "TDD_Talon_Effects.hpp"
