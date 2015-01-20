within UseCases.AixLibUseCases;
model UseCase1_2

  Modelica.SIunits.Energy Year_Energy_Consumption;
  inner AixLib.HVAC.BaseParameters baseParameters(
    mu_Water=4.7729e-4,
    rho_Water=983.83,
    cp_Water=4182.7,
    lambda_Water=0.65297)
    annotation (Placement(transformation(extent={{-96,74},{-76,94}})));
  AixLib.Building.LowOrder.ThermalZone thermalZone(zoneParam=
        UseCases.Utilities.AixLib.VDI6007HeavyWeight())
    annotation (Placement(transformation(extent={{18,40},{52,74}})));
  AixLib.Building.Components.Weather.Weather weather(
    Outopt=1,
    Air_temp=true,
    Sky_rad=true,
    Ter_rad=true,
    Latitude=50.87,
    Longitude=7.17,
    fileName="./Resources/TRY_5_Essen.txt",
    SOD=UseCases.Utilities.AixLib.South()) annotation (Placement(
        transformation(
        extent={{-19,-13},{19,13}},
        rotation=0,
        origin={-55,85})));
  Modelica.Blocks.Sources.Constant infiltrationRate(k=0)
    annotation (Placement(transformation(extent={{4,29},{14,40}})));
  AixLib.HVAC.Pumps.Pump pump
    annotation (Placement(transformation(extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-67,-43})));
  AixLib.HVAC.Valves.SimpleValve valve(dp(start=1000))
    annotation (Placement(transformation(extent={{21,-42},{41,-22}})));
  AixLib.HVAC.HeatGeneration.Boiler boiler(Q_flow_max=1300, boilerEfficiencyB=
        AixLib.DataBase.Boiler.BoilerEfficiencyBaseDataDefinition(
        boilerEfficiency=[0,1; 1,1]))
    annotation (Placement(transformation(extent={{-48,-42},{-28,-22}})));
  AixLib.HVAC.Pipes.StaticPipe flowPipe(dp(start=100))
    annotation (Placement(transformation(extent={{-10,10},{10,-10}},
        rotation=0,
        origin={6,-32})));
  AixLib.HVAC.Radiators.Radiator radiator
    annotation (Placement(transformation(extent={{57,-42},{77,-22}})));
  AixLib.HVAC.Pipes.StaticPipe returnPipe(dp(start=100))
                                          annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={92,-48})));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor temperatureSensor
    annotation (Placement(transformation(extent={{27,-22},{15,-10}})));
  Modelica.Blocks.Continuous.LimPID PID(
    yMax=1,
    yMin=0,
    Ti=360,
    Td=200,
    controllerType=Modelica.Blocks.Types.SimpleController.P,
    k=0.4)  annotation (Placement(transformation(extent={{6,-4},{18,8}})));
  AixLib.HVAC.Sources.Boundary_p expansionVessel(p=200000)
                                                 annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=90,
        origin={-66,-66})));
  AixLib.HVAC.Storage.Storage storage(
    n=6,
    d=0.71365,
    h=1,
    lambda_ins=0.04,
    s_ins=0.2,
    alpha_in=1500,
    alpha_out=15,
    V_HE=0.05,
    k_HE=1500,
    A_HE=20)
    annotation (Placement(transformation(extent={{-46,-104},{-26,-84}})));
  AixLib.HVAC.Valves.SimpleValve Valve_Radiator
    annotation (Placement(transformation(extent={{-22,-26},{-10,-38}})));
  AixLib.HVAC.Valves.SimpleValve tankeValve annotation (Placement(
        transformation(
        extent={{6,6},{-6,-6}},
        rotation=90,
        origin={-14,-74})));
  AixLib.HVAC.Sources.Boundary_p waterSink(p=100000) annotation (Placement(
        transformation(
        extent={{5,-5},{-5,5}},
        rotation=180,
        origin={-63,-78})));
  AixLib.HVAC.Sources.Boundary_ph wateSource(h=33598, p=400000) annotation (
      Placement(transformation(
        extent={{-4.5,-5},{4.5,5}},
        rotation=0,
        origin={-53.5,-109})));
  AixLib.HVAC.Valves.SimpleValve valveDHW annotation (Placement(transformation(
        extent={{6,6},{-6,-6}},
        rotation=0,
        origin={-46,-78})));
  Modelica.Blocks.Sources.BooleanPulse Wateruse_Active(
    period=86400,
    startTime=36000,
    width=(1/48)*100)
    annotation (Placement(transformation(extent={{-84,-102},{-76,-94}})));
  Modelica.Blocks.Math.BooleanToReal Nutzwasser_Ventil_Set(
      realFalse=0, realTrue=0.047156)
    annotation (Placement(transformation(extent={{-72,-102},{-64,-94}})));
  Modelica.Blocks.Logical.Hysteresis tankWarmHys(uLow=355, uHigh=360)
    annotation (Placement(transformation(extent={{-4,-102},{6,-92}})));
  Modelica.Blocks.Math.MultiSum multiSum(      k={1,-1}, nu=2)
    annotation (Placement(transformation(extent={{-44,-10},{-54,0}})));
  Modelica.Blocks.Logical.Hysteresis roomToColdHys(uLow=0.1, uHigh=0.3)
    annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=180,
        origin={-68,-5})));
  Modelica.Blocks.Logical.Not roomWarm annotation (Placement(transformation(
        extent={{5,-5},{-5,5}},
        rotation=0,
        origin={-84,-5})));
  Modelica.Blocks.Logical.Not tankNotWarm
    annotation (Placement(transformation(extent={{12,-102},{22,-92}})));
  Modelica.Blocks.Logical.And heatTank
    annotation (Placement(transformation(extent={{28,-102},{38,-92}})));
  Modelica.Blocks.Math.BooleanToReal tankValveSet(realFalse=0.000001, realTrue=0.0755)
    annotation (Placement(transformation(extent={{6,-78},{-2,-69}})));
  Modelica.Blocks.Math.BooleanToReal radiatorValveSet(realTrue=0.000001,
      realFalse=0.1)
    annotation (Placement(transformation(extent={{-4,-51},{-12,-42}})));
  AixLib.HVAC.Pipes.StaticPipe flowPipeStorage(dp(start=100)) annotation (
      Placement(transformation(
        extent={{5,6},{-5,-6}},
        rotation=180,
        origin={-20,-85})));
  AixLib.HVAC.Pipes.StaticPipe returnPipeStorage(dp(start=100)) annotation (
      Placement(transformation(
        extent={{-5,6},{5,-6}},
        rotation=0,
        origin={-20,-102})));
  Modelica.Blocks.Sources.CombiTimeTable internalLoads(
    tableName="InnerLoads",
    columns={2,3,4},
    fileName="./Resources/InnerLoads.txt",
    tableOnFile=true)
    annotation (Placement(transformation(extent={{82,24},{62,44}})));
  Modelica.Blocks.Sources.Constant setTemp(k=296.46)
    annotation (Placement(transformation(extent={{-22,-4},{-10,8}})));
  Modelica.Blocks.Sources.BooleanPulse nightSignal(
    width=45.8,
    period=86400,
    startTime=64800)
    annotation (Placement(transformation(extent={{-92,-48},{-82,-37}})));
  Modelica.Blocks.Sources.Constant flowTemp(k=331.82)
    annotation (Placement(transformation(extent={{-82,-31},{-70,-19}})));
equation

  der(Year_Energy_Consumption)=boiler.prescribedHeatFlow.Q_flow;
  tankWarmHys.u=storage.layer[6].T;

  connect(weather.SolarRadiation_OrientedSurfaces, thermalZone.solarRad_in)
    annotation (Line(
      points={{-64.88,70.7},{-64.88,67.2},{21.4,67.2}},
      color={255,128,0},
      smooth=Smooth.None));
  connect(valve.port_a, flowPipe.port_b) annotation (Line(
      points={{21,-32},{16,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(radiator.convPort, thermalZone.internalGainsConv) annotation (Line(
      points={{62.8,-24.4},{62.8,-8},{35,-8},{35,41.7}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(thermalZone.internalGainsConv, temperatureSensor.port) annotation (
      Line(
      points={{35,41.7},{35,-16},{27,-16}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(PID.y, valve.opening) annotation (Line(
      points={{18.6,2},{31,2},{31,-24}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(thermalZone.internalGainsRad, radiator.radPort) annotation (Line(
      points={{41.8,41.7},{41.8,-6},{71,-6},{71,-24.2}},
      color={95,95,95},
      pattern=LinePattern.None,
      smooth=Smooth.None));
  connect(pump.port_a, expansionVessel.port_a) annotation (Line(
      points={{-67,-50},{-67,-60},{-66,-60}},
      color={0,127,255},
      smooth=Smooth.None));

  connect(Valve_Radiator.port_b, flowPipe.port_a) annotation (Line(
      points={{-10,-32},{-4,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(tankeValve.port_a, Valve_Radiator.port_a) annotation (Line(
      points={{-14,-68},{-14,-58},{-24,-58},{-24,-32},{-22,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(waterSink.port_a, valveDHW.port_b) annotation (Line(
      points={{-58,-78},{-52,-78}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(storage.port_b_consumer, valveDHW.port_a) annotation (Line(
      points={{-36,-84},{-36,-78},{-40,-78}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(Wateruse_Active.y, Nutzwasser_Ventil_Set.u) annotation (Line(
      points={{-75.6,-98},{-72.8,-98}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(Nutzwasser_Ventil_Set.y, valveDHW.opening) annotation (Line(
      points={{-63.6,-98},{-46,-98},{-46,-82.8}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(PID.u_m, temperatureSensor.T) annotation (Line(
      points={{12,-5.2},{12,-16},{15,-16}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(multiSum.y, roomToColdHys.u) annotation (Line(
      points={{-54.85,-5},{-62,-5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(roomToColdHys.y, roomWarm.u) annotation (Line(
      points={{-73.5,-5},{-78,-5}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(tankWarmHys.y, tankNotWarm.u) annotation (Line(
      points={{6.5,-97},{11,-97}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(tankNotWarm.y, heatTank.u1) annotation (Line(
      points={{22.5,-97},{27,-97}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(roomWarm.y, heatTank.u2) annotation (Line(
      points={{-89.5,-5},{-98,-5},{-98,-116},{24,-116},{24,-101},{27,-101}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(radiatorValveSet.y, Valve_Radiator.opening) annotation (Line(
      points={{-12.4,-46.5},{-16,-46.5},{-16,-36.8}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(radiatorValveSet.u, heatTank.y) annotation (Line(
      points={{-3.2,-46.5},{42,-46.5},{42,-97},{38.5,-97}},
      color={255,0,255},
      smooth=Smooth.None));

  connect(storage.port_a_consumer, wateSource.port_a) annotation (Line(
      points={{-36,-104},{-36,-110},{-49,-110},{-49,-109}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(tankValveSet.u, heatTank.y) annotation (Line(
      points={{6.8,-73.5},{42,-73.5},{42,-97},{38.5,-97}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(storage.port_b_heatGenerator, returnPipeStorage.port_a) annotation (
      Line(
      points={{-27.6,-102},{-25,-102}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(tankeValve.port_b, flowPipeStorage.port_b) annotation (Line(
      points={{-14,-80},{-14,-85},{-15,-85}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(storage.port_a_heatGenerator, flowPipeStorage.port_a) annotation (
      Line(
      points={{-27.6,-85.2},{-25,-85.2},{-25,-85}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(internalLoads.y, thermalZone.internalGains) annotation (Line(
      points={{61,34},{48.6,34},{48.6,42.04}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(PID.u_s, setTemp.y) annotation (Line(
      points={{4.8,2},{-9.4,2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(nightSignal.y, pump.IsNight) annotation (Line(
      points={{-81.5,-42.5},{-74.14,-42.5},{-74.14,-43}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(weather.WeatherDataVector, thermalZone.weather) annotation (Line(
      points={{-55.1267,70.7},{-55.1267,57},{22.42,57}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(weather.WeatherDataVector[1], thermalZone.infiltrationTemperature)
    annotation (Line(
      points={{-55.1267,70.7},{-55.1267,50.37},{22.25,50.37}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(infiltrationRate.y, thermalZone.infiltrationRate) annotation (Line(
      points={{14.5,34.5},{28.2,34.5},{28.2,42.04}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(setTemp.y, multiSum.u[1]) annotation (Line(
      points={{-9.4,2},{-2,2},{-2,-10},{-40,-10},{-40,-3.25},{-44,-3.25}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(temperatureSensor.T, multiSum.u[2]) annotation (Line(
      points={{15,-16},{-42,-16},{-42,-6},{-44,-6},{-44,-6.75}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(boiler.port_b, Valve_Radiator.port_a) annotation (Line(
      points={{-28,-32},{-22,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(expansionVessel.port_a, returnPipe.port_b) annotation (Line(
      points={{-66,-60},{92,-60},{92,-58}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(tankeValve.opening, tankValveSet.y) annotation (Line(
      points={{-9.2,-74},{-6,-74},{-6,-73.5},{-2.4,-73.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pump.port_b, boiler.port_a) annotation (Line(
      points={{-67,-36},{-66,-36},{-66,-32},{-48,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(returnPipeStorage.port_b, returnPipe.port_b) annotation (Line(
      points={{-15,-102},{-10,-102},{-10,-84},{92,-84},{92,-58}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(boiler.T_set, flowTemp.y) annotation (Line(
      points={{-48.8,-25},{-69.4,-25}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(valve.port_b, radiator.port_a) annotation (Line(
      points={{41,-32},{57.8,-32}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(radiator.port_b, returnPipe.port_a) annotation (Line(
      points={{76.2,-32},{92,-32},{92,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -120},{100,100}}), graphics),
    experiment(StopTime=3.1536e+007, Interval=3600),
    __Dymola_experimentSetupOutput,
    Icon(coordinateSystem(extent={{-100,-120},{100,100}})),
    Documentation(info="<html>
<p>This is the AixLib model for the EnEff:BIM Use Case: BoilerGasRadiatorDomesticHotWater 1.2</p>
<p><br>This model was developed to be used for parameter identification for SimModel to Modelica Mapping!</p>
<p>The model is strongly simplified and not tested at all, it might have wrong modelling assumptions and give senseless simulation results. </p>
</html>"));
end UseCase1_2;
