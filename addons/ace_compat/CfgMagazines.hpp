class CfgMagazines {
    class CA_Magazine;
    class TDD_Talon_Mag: CA_Magazine {
        useAction = 0;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "TDD_Talon_Place"; // CfgVehicle class for setup object.
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0;
            };
        };
    };
};
