class hct_driver {
    class interaction {
        class engineOnConditionalGroup {
            condition = "isEngineOn hct_vehicle"; 
            class engineOffButton {
                positionType = "static";
                position = "Engine_Switch";
                label = "Engine Off";
                radius = 0.3;
                buttonDown = action ["EngineOff", hct_vehicle];

            };
        };
        class engineOffConditionalGroup {
            condition = "!(isEngineOn hct_vehicle)";
            class engineOnButton { // name class for the button  
                positionType = "static";
                position= "Engine_Switch";
                label = "Engine On";
                radius = 0.3;
                buttonDown = "hct_vehicle engineOn true;";
            };
        };
    };
};