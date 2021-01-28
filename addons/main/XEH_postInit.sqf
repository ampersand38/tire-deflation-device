#include "script_component.hpp"

[QGVAR(talon_damage), {
    (getAllHitPointsDamage _this) params ["_hitPointNames"];
    _this forceSpeed 0;
    _this setHitPointDamage ["hitengine", 1];
    if ("hitlfwheel" in _hitPointNames && {"hitrfwheel" in _hitPointNames}) then {
        _this setHitPointDamage ["hitlfwheel", 1];
        _this setHitPointDamage ["hitrfwheel", 1];
    } else {
        private _isDamaged = false;
        {
            if ("fwheel" in _x) then {
                _isDamaged = true;
                _this setHitPointDamage [_x, 1];
            };
        } forEach _hitPointNames;
        if (!_isDamaged) then {
            {
                if ("wheel" in _x) then {
                    _this setHitPointDamage [_x, 1];
                };
            } forEach _hitPointNames;
        };
    };
    [{
        speed _this < 5
    }, {
        _this forceSpeed -1;
        _this allowCrewInImmobile false;
    }, _vehicle, 10] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;
