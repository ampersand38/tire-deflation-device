#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tdd_main", "ace_explosives"};
        skipWhenMissingDependencies = 1;
        author = "Ampersand";
        authors[] = {"Ampersand"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
