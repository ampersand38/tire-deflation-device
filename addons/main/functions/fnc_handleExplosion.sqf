#include "script_component.hpp"
/*
Author: Ampersand
Handle explosion

* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* -

* Example:
* [ACE_Player] call tdd_main_fnc_handleExplosion
*/

if ((_this select 0 select 6 select 4) == "TDD_Talon_Ammo") then {
    private _vehicle = _this select 0 select 0;
    _vehicle allowCrewInImmobile true;
    [QGVAR(talon_damage), _vehicle, _vehicle] call CBA_fnc_targetEvent;
};
