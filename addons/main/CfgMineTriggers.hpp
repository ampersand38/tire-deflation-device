class CfgMineTriggers {
    class RangeTrigger;
	class TDD_Talon_RangeTrigger: RangeTrigger {
		mineTriggerRange = 3;
		mineTriggerMass = 250;
		mineMagnetic = 1;
	};
    class WireTrigger;
    class TDD_WireTrigger: WireTrigger {
    	mineTriggerRange = 0;
    	mineTriggerMass = 250;
    	mineMagnetic = 1;
    	mineWireStart[] = {0, -4.9612, 0.5};
    	mineWireEnd[] = {0, 4.9612, 0.5};
    	restrictZoneCenter[] = {0, 0, 0};
    	restrictZoneRadius = 5;
    };
    class TDD_WireTrigger2: WireTrigger {
    	mineTriggerMass = 250;
    	mineMagnetic = 1;
    	mineWireStart[] = {0, -4.9612, 0.5};
    	mineWireEnd[] = {0, 4.9612, 0.5};
    };
};
