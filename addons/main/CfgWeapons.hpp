class CfgWeapons {
    class default;
    class Put: default {
        class ClassicMineRangeMuzzle;
        class TDD_Talon_Muzzle: ClassicMineRangeMuzzle
        {
        	magazines[] = {"TDD_Talon_Mag"};
        	displayName = "Talon Spike Net";
        };
        muzzles[] += {"TDD_Talon_Muzzle"};
    };
};
