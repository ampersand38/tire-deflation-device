class CfgWeapons {
    class default;
    class Put: default {
        class ClassicMineRangeMuzzle;
        class TDD_Talon_Muzzle: ClassicMineRangeMuzzle
        {
        	magazines[] = {"TDD_Talon_Mag"};
        	displayName = "$STR_TDD_Main_Talon_DisplayName";
        };
        muzzles[] += {"TDD_Talon_Muzzle"};
    };
};
