class hct_driver 
{
class modules 
{
    class engineManagement 
    {
        startOnEnter = 1; // this makes it so the module is automatically started when the vehicle is entered
        setup = "_this call ej_engine_fnc_setup"; // this is run when the module is started
        shutDown = "_this call ej_engine_fnc_shutDown"; // this is called on shutdown, for example, when the player leaves the vehicle, or the module is turned off
    };
};
    class interaction {
        class engineOnConditionalGroup {
            condition = "isEngineOn hct_vehicle"; 
            class engineOffButton {
                positionType = "static";
                position = "Engine_Switch";
                label = "Engine Off";
                radius = 0.3;
                buttonDown = "hatchet_Start = true; player action ['EngineOff', hct_vehicle]; hatchet_Start = false;";
            };
        };
        class engineOffConditionalGroup {
            condition = "!(isEngineOn hct_vehicle)";
            class engineOnButton { // name class for the button  
                positionType = "static";
                position= "Engine_Switch";
                label = "Engine On";
                radius = 0.3;
                buttonDown = "hatchet_Start = true; hct_vehicle engineOn true; hatchet_Start = false;";
            };
        };
    };
};
