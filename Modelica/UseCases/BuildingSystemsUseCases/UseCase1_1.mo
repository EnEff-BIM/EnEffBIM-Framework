within UseCases.BuildingSystemsUseCases;
model UseCase1_1

BuildingSystems.Fluid.Movers.FlowMachine_dp pump(m_flow_nominal=7, redeclare
      package Medium = BuildingSystems.Media.Water.Simple)
    annotation (Placement(transformation(extent={{-82,-46},{-66,-30}})));
  BuildingSystems.Fluid.Actuators.Valves.TwoWayLinear simpleValve(
    m_flow_nominal=5,
    dpValve_nominal=1e4,
    redeclare package Medium = BuildingSystems.Media.Water.Simple)
    annotation (Placement(transformation(extent={{16,-46},{32,-30}})));
  BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM flowPipe(
    m_flow_nominal=5,
    dp_nominal=1e4,
    redeclare package Medium = BuildingSystems.Media.Water.Simple)
    annotation (Placement(transformation(extent={{-10,-46},{6,-30}})));
  BuildingSystems.Fluid.HeatExchangers.Radiators.RadiatorEN442_2 radiator(
    Q_flow_nominal=200,
    redeclare package Medium = BuildingSystems.Media.Water.Simple,
    T_a_nominal=313.15,
    T_b_nominal=298.15)
    annotation (Placement(transformation(extent={{44,-46},{60,-30}})));
  BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM returnPipe(
    m_flow_nominal=5,
    dp_nominal(displayUnit="Pa") = 1e4,
    redeclare package Medium = BuildingSystems.Media.Water.Simple)
    annotation (Placement(transformation(
        extent={{8,-8},{-8,8}},
        rotation=90,
        origin={84,-56})));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor temperatureSensor
    annotation (Placement(transformation(extent={{-24,-24},{-12,-12}})));
  Modelica.Blocks.Continuous.LimPID PID(
    yMax=1,
    yMin=0,
    k=0.1,
    controllerType=Modelica.Blocks.Types.SimpleController.P)
            annotation (Placement(transformation(extent={{-6,-4},{6,8}})));
  Modelica.Blocks.Sources.Constant setTemp(k=293.15)
    annotation (Placement(transformation(extent={{-24,-4},{-12,8}})));
  Modelica.Blocks.Sources.BooleanPulse nightSignal(
    width=45.8,
    period=86400,
    startTime=64800)
    annotation (Placement(transformation(extent={{-98,9},{-84,23}})));
  Modelica.Blocks.Sources.Constant dp_const(k=5e5)
    annotation (Placement(transformation(extent={{-98,32},{-84,46}})));
  Modelica.Blocks.Logical.Switch switch_dp annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=-90,
        origin={-74,-20})));
  Modelica.Blocks.Sources.Constant small(k=Modelica.Constants.small)
    annotation (Placement(transformation(extent={{-98,-14},{-84,0}})));
  BuildingSystems.Fluid.Storage.ExpansionVessel exp(
    V_start=1,
    redeclare package Medium = BuildingSystems.Media.Water.Simple,
    p=500000)
    annotation (Placement(transformation(extent={{-96,-102},{-76,-82}})));
  Modelica.Blocks.Sources.Constant setTemp1(k=40 + 273.15)
    annotation (Placement(transformation(extent={{-64,32},{-52,44}})));
  BuildingSystems.Fluid.HeatExchangers.HeaterCooler_T boiler(
    m_flow_nominal=5,
    dp_nominal=1e4,
    redeclare package Medium = BuildingSystems.Media.Water.Simple)
    annotation (Placement(transformation(extent={{-36,-46},{-22,-30}})));
  inner AixLib.HVAC.BaseParameters baseParameters(mu_Water=0.4e-3)
    annotation (Placement(transformation(extent={{-98,74},{-78,94}})));
  AixLib.Building.LowOrder.ThermalZone thermalZone(zoneParam=
        UseCases.Utilities.AixLib.VDI6007HeavyWeight())
    annotation (Placement(transformation(extent={{18,34},{52,68}})));
  AixLib.Building.Components.Weather.Weather weather(
    Outopt=1,
    Air_temp=true,
    Sky_rad=true,
    Ter_rad=true,
    SOD=UseCases.Utilities.AixLib.South(),
    fileName="./Resources/TRY_5_Essen.txt")
    annotation (Placement(transformation(extent={{-48,68},{-10,94}})));
  Modelica.Blocks.Sources.Constant infiltrationTemp(k=0)
    annotation (Placement(transformation(extent={{-10,38},{0,47}})));
  Modelica.Blocks.Sources.Constant infiltrationRate(k=0)
    annotation (Placement(transformation(extent={{0,21},{10,32}})));
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable(
    tableOnFile=true,
    tableName="InnerLoads",
    columns={2,3,4},
    fileName="./Resources/InnerLoads.txt")
    annotation (Placement(transformation(extent={{94,16},{74,36}})));
equation
  connect(temperatureSensor.T, PID.u_m) annotation (Line(
      points={{-12,-18},{0,-18},{0,-5.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(PID.u_s, setTemp.y) annotation (Line(
      points={{-7.2,2},{-11.4,2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(returnPipe.port_b, pump.port_a) annotation (Line(
      points={{84,-64},{84,-72},{-98,-72},{-98,-38},{-82,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(radiator.port_b, returnPipe.port_a) annotation (Line(
      points={{60,-38},{84,-38},{84,-48}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(simpleValve.port_b, radiator.port_a) annotation (Line(
      points={{32,-38},{44,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(flowPipe.port_b, simpleValve.port_a) annotation (Line(
      points={{6,-38},{16,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(switch_dp.y, pump.dp_in) annotation (Line(
      points={{-74,-24.4},{-74,-24.25},{-74.16,-24.25},{-74.16,-28.4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(dp_const.y, switch_dp.u1) annotation (Line(
      points={{-83.3,39},{-70.8,39},{-70.8,-15.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(nightSignal.y, switch_dp.u2) annotation (Line(
      points={{-83.3,16},{-74,16},{-74,-15.2}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(PID.y, simpleValve.y) annotation (Line(
      points={{6.6,2},{24,2},{24,-28.4}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(small.y, switch_dp.u3) annotation (Line(
      points={{-83.3,-7},{-77.2,-7},{-77.2,-15.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(exp.port_a, pump.port_a) annotation (Line(
      points={{-86,-102},{-52,-102},{-52,-72},{-98,-72},{-98,-38},{-82,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(boiler.port_b, flowPipe.port_a) annotation (Line(
      points={{-22,-38},{-10,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(setTemp1.y, boiler.TSet) annotation (Line(
      points={{-51.4,38},{-44,38},{-44,-33.2},{-37.4,-33.2}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(pump.port_b, boiler.port_a) annotation (Line(
      points={{-66,-38},{-36,-38}},
      color={0,127,255},
      smooth=Smooth.None));
  connect(weather.WeatherDataVector,thermalZone. weather) annotation (Line(
      points={{-29.1267,66.7},{-29.1267,51},{22.42,51}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(weather.SolarRadiation_OrientedSurfaces,thermalZone. solarRad_in)
    annotation (Line(
      points={{-38.88,66.7},{-38.88,61.2},{21.4,61.2}},
      color={255,128,0},
      smooth=Smooth.None));
  connect(infiltrationTemp.y,thermalZone. infiltrationTemperature) annotation (
      Line(
      points={{0.5,42.5},{8,42.5},{8,44.37},{22.25,44.37}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(infiltrationRate.y,thermalZone. infiltrationRate) annotation (Line(
      points={{10.5,26.5},{28.2,26.5},{28.2,36.04}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(thermalZone.internalGainsConv, temperatureSensor.port) annotation (
      Line(
      points={{35,35.7},{35,16},{-30,16},{-30,-18},{-24,-18}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(radiator.heatPortRad, thermalZone.internalGainsRad) annotation (Line(
      points={{53.6,-32.24},{53.6,4},{41.8,4},{41.8,35.7}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(radiator.heatPortCon, thermalZone.internalGainsConv) annotation (Line(
      points={{50.4,-32.24},{50.4,-20},{50,-20},{50,-6},{35,-6},{35,35.7}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(combiTimeTable.y, thermalZone.internalGains) annotation (Line(
      points={{73,26},{48.6,26},{48.6,36.04}},
      color={0,0,127},
      smooth=Smooth.None));
annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}}), graphics),
    experiment(StopTime=3.1536e+007, Interval=3600),
    __Dymola_experimentSetupOutput);

end UseCase1_1;
