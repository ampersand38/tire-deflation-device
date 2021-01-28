#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

["Car", "hitPart", {call FUNC(handleExplosion)}] call CBA_fnc_addClassEventHandler;

ADDON = true;
