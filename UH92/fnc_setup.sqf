ej_eh_engine = hct_vehicle addEventHandler ["Engine", {
    params ["_vehicle", "_engineState"];
    if (hatchet_Start) exitWith {};
    if (_engineState) then {
        player action ["EngineOff", hct_vehicle];
    } else {
        hct_vehicle engineOn true;
    };
}];
