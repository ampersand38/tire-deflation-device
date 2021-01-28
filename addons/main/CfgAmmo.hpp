class CfgAmmo {
    class MineBase;
    class TDD_Talon_Ammo: MineBase {
    	hit = 0;
    	indirectHit = 1;
    	indirectHitRange = 3;
    	model = "\a3\Props_F_Enoch\Military\Decontamination\Tarp_01_Large_Black_F.p3d";
    	mineModelDisabled = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_large_F.p3d";
    	defaultMagazine = "TDD_Talon_Mag";
    	soundHit1[] = {};
    	soundHit2[] = {};
    	multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
    	soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Deactivate_01", 1.99526, 1, 20};
    	explosionEffects = "TDD_Talon_Effects";
    	CraterEffects = "";
    	whistleDist = 8;
    	mineInconspicuousness = 40;
    	mineTrigger = "TDD_Talon_RangeTrigger";
        SoundSetExplosion[] = {};
    	soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Placement_01", 1, 1, 20};
    };

};
