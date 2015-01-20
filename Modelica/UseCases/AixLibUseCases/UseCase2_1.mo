within UseCases.AixLibUseCases;
model UseCase2_1
  import AixLib;
  Modelica.SIunits.Energy Year_Energy_Consumption;

  inner AixLib.HVAC.BaseParameters baseParameters(T0=567.3)
    annotation (Placement(transformation(extent={{-98,74},{-78,94}})));
  AixLibUseCases.Building.LowOrder.ThermalZone thermalZone(zoneParam=
        UseCase_Project_Final.AixLib.DataBase.VDI6007HeavyWeight_TestCase5())
    annotation (Placement(transformation(extent={{18,34},{52,68}})));
  AixLibUseCases.Building.Components.Weather.Weather weather(
    Outopt=1,
    Air_temp=true,
    Sky_rad=true,
    Ter_rad=true,
    SOD=UseCase_Project_Final.AixLib.DataBase.South(),
    Latitude=50.87,
    Longitude=7.17,
    fileName="D:/workspaces/TRY_5_Essen.txt")
    annotation (Placement(transformation(extent={{-48,68},{-10,94}})));
  Modelica.Blocks.Sources.Constant infiltrationRate(k=0.0)
    annotation (Placement(transformation(extent={{0,27},{10,38}})));
  AixLib.HVAC.HeatGeneration.HeatPump heatPump(tablePower=[0.0,273.15,283.15,288.15;
        308.15,203,212,217; 328.15,295,323,337], tableHeatFlowCondenser=[0.0,273.15,
        283.15,288.15; 308.15,885,1162,1300; 328.15,811,1060,1185])
    annotation (Placement(transformation(extent={{-28,-62},{-8,-42}})));
  AixLib.HVAC.Pumps.Pump pump_hot(
    Head_max=1,
    V_flow_max=0.1,
    ControlStrategy=1)
    annotation (Placement(transformation(extent={{16,-52},{30,-38}})));
  AixLib.HVAC.Pumps.Pump pump_cold(
    Head_max=1,
    V_flow_max=0.5,
    ControlStrategy=1)
    annotation (Placement(transformation(extent={{-32,-66},{-46,-52}})));
  AixLib.HVAC.Pipes.Pipe pipe1(dp(start=1)) annotation (Placement(
        transformation(
        extent={{10,10},{-10,-10}},
        rotation=-90,
        origin={-78,-50})));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature fixedTemperature(T=
       288.15)
    annotation (Placement(transformation(extent={{-98,-55},{-88,-45}})));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor temperatureSensor
    annotation (Placement(transformation(extent={{-90,-12},{-78,0}})));
  Modelica.Blocks.Logical.OnOffController onOffController(bandwidth=1,
      pre_y_start=false)
    annotation (Placement(transformation(extent={{-36,-13},{-22,-27}})));
  AixLib.HVAC.Sources.Boundary_p boundary_p(p=200000)
    annotation (Placement(transformation(extent={{-98,-38},{-86,-26}})));
  AixLib.HVAC.Sources.Boundary_p boundary_p1(p=200000)
    annotation (Placement(transformation(extent={{96,-81},{82,-67}})));
  AixLib.HVAC.Sensors.TemperatureSensor Temp_hot_vorl
    annotation (Placement(transformation(extent={{-4,-51},{8,-39}})));
  AixLib.HVAC.Valves.SimpleValve simpleValve1
    annotation (Placement(transformation(extent={{-50,-54},{-60,-64}})));
  Modelica.Blocks.Logical.Not not1
    annotation (Placement(transformation(extent={{-30,-44},{-38,-36}})));
  Modelica.Blocks.Continuous.LimPID PID(
    Td=10.5,
    yMin=0.0001,
    Ti=50,
    controllerType=Modelica.Blocks.Types.SimpleController.P,
    k=0.2,
    yMax=1)
    annotation (Placement(transformation(extent={{-54,-2},{-42,10}})));
  Modelica.Blocks.Sources.Constant set_valve_Borehole(k=0.26)
    annotation (Placement(transformation(extent={{-70,-82},{-60,-72}})));
  Modelica.Blocks.Sources.BooleanConstant pump_floorheating_night(k=false)
    annotation (Placement(transformation(extent={{2,-30},{12,-20}})));
  AixLib.HVAC.Pipes.StaticPipe
                         Pipe_flow(
    l=10,
    D=0.015,
    dp(start=100))
    annotation (Placement(transformation(extent={{34,-54},{54,-34}})));
  AixLib.HVAC.Pipes.StaticPipe
                         Pipe_return(
    l=10,
    D=0.015,
    dp(start=100))
    annotation (Placement(transformation(extent={{38,-69},{18,-49}})));
  Modelica.Blocks.Sources.Constant set_vorl_temp(k=308.15)
    annotation (Placement(transformation(extent={{-56,-29},{-46,-19}})));
  AixLib.HVAC.Radiators.Radiator radiator(RadiatorType=
        AixLibUseCases.DataBase.Radiators.ThermX2_ProfilV_979W(
          NominalPower=885.94,
          T_flow_nom=56.719,
          T_return_nom=53.984,
          T_room_nom=18.601,
          Exponent=1.2273,
          VolumeWater=8.3906,
          RadPercent=0.39922))
    annotation (Placement(transformation(extent={{79,-54},{99,-34}})));
  AixLib.HVAC.Valves.SimpleValve valve(                Kvs=1.3391, dp(start=
          100))
    annotation (Placement(transformation(extent={{58,-53},{72,-35}})));
  Modelica.Blocks.Sources.Constant setTemp(k=293.5)
    annotation (Placement(transformation(extent={{-72,-2},{-60,10}})));
  Modelica.Blocks.Sources.CombiTimeTable internalLoads(
    tableOnFile=true,
    tableName="InnerLoads",
    columns={2,3,4},
    fileName="InnerLoads.txt")
    annotation (Placement(transformation(extent={{90,16},{70,36}})));
equation
der(Year_Energy_Consumption)=heatPump.Power;
  connect(weather.WeatherDataVector, thermalZone.weather) annotation (Line(
      points={{-29.1267,66.7},{-29.1267,51},{22.42,51}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(weather.SolarRadiation_OrientedSurfaces, thermalZone.solarRad_in)
    annotation (Line(
      points={{-38.88,66.7},{-38.88,61.2},{21.4,61.2}},
      color={255,128,0},
      smooth=Smooth.None));
  connect(infiltrationRate.y, thermalZone.infiltrationRate) annotation (Line(
      points={{10.5,32.5},{28.2,32.5},{28.2,36.04}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pump_cold.port_a, heatPump.port_b_source) annotation (Line(
      points={{-32,-59},{-27,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(pipe1.heatport, fixedTemperature.port) annotation (Line(
      points={{-83,-50},{-88,-50}},
      color={191,0,0},
      smooth=Smooth.None));

  connect(pipe1.port_b, boundary_p.port_a) annotation (Line(
      points={{-78,-40},{-78,-32},{-86,-32}},
      color={0,127,255},
      smooth=Smooth.None));

  connect(not1.u, heatPump.OnOff) annotation (Line(
      points={{-29.2,-40},{-18,-40},{-18,-44}},
      color={255,0,255},
      smooth=Smooth.None));

  connect(thermalZone.internalGainsConv, temperatureSensor.port)
    annotation (Line(
      points={{35,35.7},{35,24},{-98,24},{-98,-6},{-90,-6}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(set_valve_Borehole.y, simpleValve1.opening) annotation (Line(
      points={{-59.5,-77},{-55,-77},{-55,-63}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(not1.y, pump_cold.IsNight) annotation (Line(
      points={{-38.4,-40},{-39,-40},{-39,-51.86}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(pump_floorheating_night.y, pump_hot.IsNight) annotation (Line(
      points={{12.5,-25},{23,-25},{23,-37.86}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(simpleValve1.port_a, pump_cold.port_b) annotation (Line(
      points={{-50,-59},{-48,-59},{-48,-59},{-46,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(onOffController.y, heatPump.OnOff) annotation (Line(
      points={{-21.3,-20},{-18,-20},{-18,-44}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(temperatureSensor.T, PID.u_m) annotation (Line(
      points={{-78,-6},{-48,-6},{-48,-3.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(heatPump.port_b_sink, Temp_hot_vorl.port_a) annotation (Line(
      points={{-9,-45},{-4,-45}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(Temp_hot_vorl.signal, onOffController.u) annotation (Line(
      points={{2,-39},{2,-36},{-16,-36},{-16,-12},{-40,-12},{-40,-15.8},{-37.4,-15.8}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(set_vorl_temp.y, onOffController.reference) annotation (Line(
      points={{-45.5,-24},{-41.75,-24},{-41.75,-24.2},{-37.4,-24.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(heatPump.port_a_sink, Pipe_return.port_b) annotation (Line(
      points={{-9,-59},{4.5,-59},{4.5,-59},{18,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(pipe1.port_a, simpleValve1.port_b) annotation (Line(
      points={{-78,-60},{-70,-60},{-70,-59},{-60,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(pipe1.port_b, heatPump.port_a_source) annotation (Line(
      points={{-78,-40},{-54,-40},{-54,-45},{-27,-45}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(weather.WeatherDataVector[1], thermalZone.infiltrationTemperature)
    annotation (Line(
      points={{-29.1267,66.7},{-29.1267,44.37},{22.25,44.37}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Temp_hot_vorl.port_b, pump_hot.port_a) annotation (Line(
      points={{8,-45},{16,-45}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(pump_hot.port_b, Pipe_flow.port_a) annotation (Line(
      points={{30,-45},{32,-45},{32,-44},{34,-44}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(radiator.convPort, thermalZone.internalGainsConv) annotation (Line(
      points={{84.8,-36.4},{84.8,10},{35,10},{35,35.7}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(radiator.radPort, thermalZone.internalGainsRad) annotation (Line(
      points={{93,-36.2},{93,16},{41.8,16},{41.8,35.7}},
      color={0,0,0},
      smooth=Smooth.None));
  connect(Pipe_flow.port_b, valve.port_a) annotation (Line(
      points={{54,-44},{58,-44}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(radiator.port_a, valve.port_b) annotation (Line(
      points={{79.8,-44},{72,-44}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(PID.y, valve.opening) annotation (Line(
      points={{-41.4,4},{65,4},{65,-36.8}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(radiator.port_b, Pipe_return.port_a) annotation (Line(
      points={{98.2,-44},{98,-44},{98,-59},{38,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(boundary_p1.port_a, Pipe_return.port_b) annotation (Line(
      points={{82,-74},{18,-74},{18,-59}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(PID.u_s, setTemp.y) annotation (Line(
      points={{-55.2,4},{-59.4,4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(internalLoads.y, thermalZone.internalGains) annotation (Line(
      points={{69,26},{48.6,26},{48.6,36.04}},
      color={0,0,127},
      smooth=Smooth.None));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics),
    experiment(StopTime=3.1536e+007, Interval=60),
    __Dymola_experimentSetupOutput,
    Documentation(info="<html>
<p>This is the AixLib model for the EnEff:BIM Use Case: HeatPumpRadiator 2.1</p>
<p><br>This model was developed to be used for parameter identification for SimModel to Modelica Mapping!</p>
<p>The model is strongly simplified and not tested at all, it might have wrong modelling assumptions and give senseless simulation results. </p>
</html>"));
end UseCase2_1;
