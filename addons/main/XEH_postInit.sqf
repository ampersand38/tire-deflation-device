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
        isTouchingGround _this && {
            private _position = _this selectionPosition ((_this selectionNames "LandContact") # 0);
            _position set [0, 0];
            private _velocity = velocity _this;
            private _magnitude = vectorMagnitude _velocity;
            _this addForce [_velocity vectorMultiply (-2 * (_magnitude min 100)), _position];
            _magnitude < 1;
        }
    }, {
        _this setVelocity [0, 0, 0];
        _this forceSpeed -1;
        _this allowCrewInImmobile false;
    }, _vehicle, 10] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;
