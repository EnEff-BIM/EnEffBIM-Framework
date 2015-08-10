package ModelicaServices
  "(version = 3.2.1, target = \"Dymola\") Models and functions used in the Modelica Standard Library requiring a tool specific implementation"

package Machine

  final constant Real eps=1.e-15 "Biggest number such that 1.0 + eps = 1.0";

  final constant Real small=1.e-60
  "Smallest number such that small and -small are representable on the machine";
  annotation (Documentation(info="<html>
<p>
Package in which processor specific constants are defined that are needed
by numerical algorithms. Typically these constants are not directly used,
but indirectly via the alias definition in
<a href=\"modelica://Modelica.Constants\">Modelica.Constants</a>.
</p>
</html>"));
end Machine;
annotation (
  Protection(access=Access.hide),
  preferredView="info",
  version="3.2.1",
  versionDate="2013-01-17",
  versionBuild=1,
  uses(Modelica(version="3.2.1")),
  conversion(
    noneFromVersion="1.0",
    noneFromVersion="1.1",
    noneFromVersion="1.2"),
  Documentation(info="<html>
<p>
This package contains a set of functions and models to be used in the
Modelica Standard Library that requires a tool specific implementation.
These are:
</p>

<ul>
<li> <a href=\"modelica://ModelicaServices.Animation.Shape\">Shape</a>
     provides a 3-dim. visualization of elementary
     mechanical objects. It is used in
<a href=\"modelica://Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape\">Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape</a>
     via inheritance.</li>

<li> <a href=\"modelica://ModelicaServices.Animation.Surface\">Surface</a>
     provides a 3-dim. visualization of
     moveable parameterized surface. It is used in
<a href=\"modelica://Modelica.Mechanics.MultiBody.Visualizers.Advanced.Surface\">Modelica.Mechanics.MultiBody.Visualizers.Advanced.Surface</a>
     via inheritance.</li>

<li> <a href=\"modelica://ModelicaServices.ExternalReferences.loadResource\">loadResource</a>
     provides a function to return the absolute path name of an URI or a local file name. It is used in
<a href=\"modelica://Modelica.Utilities.Files.loadResource\">Modelica.Utilities.Files.loadResource</a>
     via inheritance.</li>

<li> <a href=\"modelica://ModelicaServices.Machine\">ModelicaServices.Machine</a>
     provides a package of machine constants. It is used in
<a href=\"modelica://Modelica.Constants\">Modelica.Constants</a>.</li>

<li> <a href=\"modelica://ModelicaServices.Types.SolverMethod\">Types.SolverMethod</a>
     provides a string defining the integration method to solve differential equations in
     a clocked discretized continuous-time partition (see Modelica 3.3 language specification).
     It is not yet used in the Modelica Standard Library, but in the Modelica_Synchronous library
     that provides convenience blocks for the clock operators of Modelica version &ge; 3.3.</li>
</ul>

<p>
This implementation is targeted for Dymola.
</p>

<p>
<b>Licensed by DLR and Dassault Syst&egrave;mes AB under the Modelica License 2</b><br>
Copyright &copy; 2009-2013, DLR and Dassault Syst&egrave;mes AB.
</p>

<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"http://www.modelica.org/licenses/ModelicaLicense2\"> http://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>

</html>"));
end ModelicaServices;

package Modelica "Modelica Standard Library - Version 3.2.1 (Build 2)"
extends Modelica.Icons.Package;

  package Blocks
  "Library of basic input/output control blocks (continuous, discrete, logical, table blocks)"
  import SI = Modelica.SIunits;
  extends Modelica.Icons.Package;

    package Continuous
    "Library of continuous control blocks with internal states"
      import Modelica.Blocks.Interfaces;
      import Modelica.SIunits;
      extends Modelica.Icons.Package;

      block Integrator "Output the integral of the input signal"
        import Modelica.Blocks.Types.Init;
        parameter Real k(unit="1")=1 "Integrator gain";

        /* InitialState is the default, because it was the default in Modelica 2.2
     and therefore this setting is backward compatible
  */
        parameter Modelica.Blocks.Types.Init initType=Modelica.Blocks.Types.Init.InitialState
        "Type of initialization (1: no init, 2: steady state, 3,4: initial output)"
                                                                                          annotation(Evaluate=true,
            Dialog(group="Initialization"));
        parameter Real y_start=0 "Initial or guess value of output (= state)"
          annotation (Dialog(group="Initialization"));
        extends Interfaces.SISO(y(start=y_start));

      initial equation
        if initType == Init.SteadyState then
           der(y) = 0;
        elseif initType == Init.InitialState or
               initType == Init.InitialOutput then
          y = y_start;
        end if;
      equation
        der(y) = k*u;
        annotation (
          Documentation(info="<html>
<p>
This blocks computes output <b>y</b> (element-wise) as
<i>integral</i> of the input <b>u</b> multiplied with
the gain <i>k</i>:
</p>
<pre>
         k
     y = - u
         s
</pre>

<p>
It might be difficult to initialize the integrator in steady state.
This is discussed in the description of package
<a href=\"modelica://Modelica.Blocks.Continuous#info\">Continuous</a>.
</p>

</html>"),       Icon(coordinateSystem(
                preserveAspectRatio=true,
                extent={{-100.0,-100.0},{100.0,100.0}},
                initialScale=0.1),
              graphics={
                Line(
                  visible=true,
                  points={{-80.0,78.0},{-80.0,-90.0}},
                  color={192,192,192}),
                Polygon(
                  visible=true,
                  lineColor={192,192,192},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Solid,
                  points={{-80.0,90.0},{-88.0,68.0},{-72.0,68.0},{-80.0,90.0}}),
                Line(
                  visible=true,
                  points={{-90.0,-80.0},{82.0,-80.0}},
                  color={192,192,192}),
                Polygon(
                  visible=true,
                  lineColor={192,192,192},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Solid,
                  points={{90.0,-80.0},{68.0,-72.0},{68.0,-88.0},{90.0,-80.0}}),
                Text(
                  visible=true,
                  lineColor={192,192,192},
                  extent={{0.0,-70.0},{60.0,-10.0}},
                  textString="I"),
                Text(
                  visible=true,
                  extent={{-150.0,-150.0},{150.0,-110.0}},
                  textString="k=%k"),
                Line(
                  visible=true,
                  points={{-80.0,-80.0},{80.0,80.0}},
                  color={0,0,127})}),
          Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Rectangle(extent={{-60,60},{60,-60}}, lineColor={0,0,255}),
              Line(points={{-100,0},{-60,0}}, color={0,0,255}),
              Line(points={{60,0},{100,0}}, color={0,0,255}),
              Text(
                extent={{-36,60},{32,2}},
                lineColor={0,0,0},
                textString="k"),
              Text(
                extent={{-32,0},{36,-58}},
                lineColor={0,0,0},
                textString="s"),
              Line(points={{-46,0},{46,0}}, color={0,0,0})}));
      end Integrator;

      block Derivative "Approximated derivative block"
        import Modelica.Blocks.Types.Init;
        parameter Real k(unit="1")=1 "Gains";
        parameter SIunits.Time T(min=Modelica.Constants.small) = 0.01
        "Time constants (T>0 required; T=0 is ideal derivative block)";
        parameter Modelica.Blocks.Types.Init initType=Modelica.Blocks.Types.Init.NoInit
        "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output)"
                                                                                          annotation(Evaluate=true,
            Dialog(group="Initialization"));
        parameter Real x_start=0 "Initial or guess value of state"
          annotation (Dialog(group="Initialization"));
        parameter Real y_start=0 "Initial value of output (= state)"
          annotation(Dialog(enable=initType == Init.InitialOutput, group=
                "Initialization"));
        extends Interfaces.SISO;

        output Real x(start=x_start) "State of block";

    protected
        parameter Boolean zeroGain = abs(k) < Modelica.Constants.eps;
      initial equation
        if initType == Init.SteadyState then
          der(x) = 0;
        elseif initType == Init.InitialState then
          x = x_start;
        elseif initType == Init.InitialOutput then
          if zeroGain then
             x = u;
          else
             y = y_start;
          end if;
        end if;
      equation
        der(x) = if zeroGain then 0 else (u - x)/T;
        y = if zeroGain then 0 else (k/T)*(u - x);
        annotation (
          Documentation(info="<html>
<p>
This blocks defines the transfer function between the
input u and the output y
(element-wise) as <i>approximated derivative</i>:
</p>
<pre>
             k * s
     y = ------------ * u
            T * s + 1
</pre>
<p>
If you would like to be able to change easily between different
transfer functions (FirstOrder, SecondOrder, ... ) by changing
parameters, use the general block <b>TransferFunction</b> instead
and model a derivative block with parameters<br>
b = {k,0}, a = {T, 1}.
</p>

<p>
If k=0, the block reduces to y=0.
</p>
</html>"),       Icon(
          coordinateSystem(preserveAspectRatio=true,
              extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Line(visible=true,
              points={{-80.0,78.0},{-80.0,-90.0}},
            color={192,192,192}),
        Polygon(visible=true,
            lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid,
          points={{-80.0,90.0},{-88.0,68.0},{-72.0,68.0},{-80.0,90.0}}),
        Line(visible=true,
            points={{-90.0,-80.0},{82.0,-80.0}},
          color={192,192,192}),
        Polygon(visible=true,
            lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid,
          points={{90.0,-80.0},{68.0,-72.0},{68.0,-88.0},{90.0,-80.0}}),
        Line(visible=  true,
          origin=  {-24.667,-27.333},
          points=  {{-55.333,87.333},{-19.333,-40.667},{86.667,-52.667}},
          color=  {0,0,127},
          smooth=  Smooth.Bezier),
        Text(visible=true,
            lineColor={192,192,192},
          extent={{-30.0,14.0},{86.0,60.0}},
          textString="DT1"),
        Text(visible=true,
            extent={{-150.0,-150.0},{150.0,-110.0}},
          textString="k=%k")}),
          Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Text(
                extent={{-54,52},{50,10}},
                lineColor={0,0,0},
                textString="k s"),
              Text(
                extent={{-54,-6},{52,-52}},
                lineColor={0,0,0},
                textString="T s + 1"),
              Line(points={{-50,0},{50,0}}, color={0,0,0}),
              Rectangle(extent={{-60,60},{60,-60}}, lineColor={0,0,255}),
              Line(points={{-100,0},{-60,0}}, color={0,0,255}),
              Line(points={{60,0},{100,0}}, color={0,0,255})}));
      end Derivative;

      block LimPID
      "P, PI, PD, and PID controller with limited output, anti-windup compensation and setpoint weighting"
        import Modelica.Blocks.Types.InitPID;
        import Modelica.Blocks.Types.Init;
        import Modelica.Blocks.Types.SimpleController;
        extends Interfaces.SVcontrol;
        output Real controlError = u_s - u_m
        "Control error (set point - measurement)";

        parameter .Modelica.Blocks.Types.SimpleController controllerType=
               .Modelica.Blocks.Types.SimpleController.PID "Type of controller";
        parameter Real k(min=0, unit="1") = 1 "Gain of controller";
        parameter SIunits.Time Ti(min=Modelica.Constants.small)=0.5
        "Time constant of Integrator block"
           annotation(Dialog(enable=controllerType==.Modelica.Blocks.Types.SimpleController.PI or
                                    controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter SIunits.Time Td(min=0)= 0.1
        "Time constant of Derivative block"
             annotation(Dialog(enable=controllerType==.Modelica.Blocks.Types.SimpleController.PD or
                                      controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter Real yMax(start=1) "Upper limit of output";
        parameter Real yMin=-yMax "Lower limit of output";
        parameter Real wp(min=0) = 1
        "Set-point weight for Proportional block (0..1)";
        parameter Real wd(min=0) = 0
        "Set-point weight for Derivative block (0..1)"
             annotation(Dialog(enable=controllerType==.Modelica.Blocks.Types.SimpleController.PD or
                                      controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter Real Ni(min=100*Modelica.Constants.eps) = 0.9
        "Ni*Ti is time constant of anti-windup compensation"
           annotation(Dialog(enable=controllerType==.Modelica.Blocks.Types.SimpleController.PI or
                                    controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter Real Nd(min=100*Modelica.Constants.eps) = 10
        "The higher Nd, the more ideal the derivative block"
             annotation(Dialog(enable=controllerType==.Modelica.Blocks.Types.SimpleController.PD or
                                      controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter .Modelica.Blocks.Types.InitPID initType= .Modelica.Blocks.Types.InitPID.DoNotUse_InitialIntegratorState
        "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output)"
                                           annotation(Evaluate=true,
            Dialog(group="Initialization"));
        parameter Boolean limitsAtInit = true
        "= false, if limits are ignored during initialization"
          annotation(Evaluate=true, Dialog(group="Initialization"));
        parameter Real xi_start=0
        "Initial or guess value value for integrator output (= integrator state)"
          annotation (Dialog(group="Initialization",
                      enable=controllerType==.Modelica.Blocks.Types.SimpleController.PI or
                             controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter Real xd_start=0
        "Initial or guess value for state of derivative block"
          annotation (Dialog(group="Initialization",
                               enable=controllerType==.Modelica.Blocks.Types.SimpleController.PD or
                                      controllerType==.Modelica.Blocks.Types.SimpleController.PID));
        parameter Real y_start=0 "Initial value of output"
          annotation(Dialog(enable=initType == .Modelica.Blocks.Types.InitPID.InitialOutput, group=
                "Initialization"));
        parameter Boolean strict=false
        "= true, if strict limits with noEvent(..)"
          annotation (Evaluate=true, choices(checkBox=true), Dialog(tab="Advanced"));
        constant SI.Time unitTime=1  annotation(HideResult=true);
        Blocks.Math.Add addP(k1=wp, k2=-1)
          annotation (Placement(transformation(extent={{-80,40},{-60,60}}, rotation=
                 0)));
        Blocks.Math.Add addD(k1=wd, k2=-1) if with_D
          annotation (Placement(transformation(extent={{-80,-10},{-60,10}},
                rotation=0)));
        Blocks.Math.Gain P(k=1)
                           annotation (Placement(transformation(extent={{-40,40},{
                  -20,60}}, rotation=0)));
        Blocks.Continuous.Integrator I(k=unitTime/Ti, y_start=xi_start,
          initType=if initType==InitPID.SteadyState then
                      Init.SteadyState else
                   if initType==InitPID.InitialState or
                      initType==InitPID.DoNotUse_InitialIntegratorState then
                      Init.InitialState else Init.NoInit) if with_I
          annotation (Placement(transformation(extent={{-40,-60},{-20,-40}},
                rotation=0)));
        Blocks.Continuous.Derivative D(k=Td/unitTime, T=max([Td/Nd, 1.e-14]), x_start=xd_start,
          initType=if initType==InitPID.SteadyState or
                      initType==InitPID.InitialOutput then Init.SteadyState else
                   if initType==InitPID.InitialState then Init.InitialState else
                      Init.NoInit) if with_D
          annotation (Placement(transformation(extent={{-40,-10},{-20,10}},
                rotation=0)));
        Blocks.Math.Gain gainPID(k=k) annotation (Placement(transformation(extent={
                  {30,-10},{50,10}}, rotation=0)));
        Blocks.Math.Add3 addPID annotation (Placement(transformation(
                extent={{0,-10},{20,10}}, rotation=0)));
        Blocks.Math.Add3 addI(k2=-1) if with_I annotation (Placement(
              transformation(extent={{-80,-60},{-60,-40}}, rotation=0)));
        Blocks.Math.Add addSat(k1=+1, k2=-1) if
                                         with_I
          annotation (Placement(transformation(
              origin={80,-50},
              extent={{-10,-10},{10,10}},
              rotation=270)));
        Blocks.Math.Gain gainTrack(k=1/(k*Ni)) if with_I
          annotation (Placement(transformation(extent={{40,-80},{20,-60}}, rotation=
                 0)));
        Blocks.Nonlinear.Limiter limiter(uMax=yMax, uMin=yMin, strict=strict, limitsAtInit=limitsAtInit)
          annotation (Placement(transformation(extent={{70,-10},{90,10}}, rotation=
                  0)));
    protected
        parameter Boolean with_I = controllerType==SimpleController.PI or
                                   controllerType==SimpleController.PID annotation(Evaluate=true, HideResult=true);
        parameter Boolean with_D = controllerType==SimpleController.PD or
                                   controllerType==SimpleController.PID annotation(Evaluate=true, HideResult=true);
    public
        Sources.Constant Dzero(k=0) if not with_D
          annotation (Placement(transformation(extent={{-30,20},{-20,30}}, rotation=
                 0)));
        Sources.Constant Izero(k=0) if not with_I
          annotation (Placement(transformation(extent={{10,-55},{0,-45}}, rotation=
                  0)));
      initial equation
        if initType==InitPID.InitialOutput then
           gainPID.y = y_start;
        end if;
      equation
        assert(yMax >= yMin, "LimPID: Limits must be consistent. However, yMax (=" + String(yMax) +
                             ") < yMin (=" + String(yMin) + ")");
        if initType == InitPID.InitialOutput and (y_start < yMin or y_start > yMax) then
            Modelica.Utilities.Streams.error("LimPID: Start value y_start (=" + String(y_start) +
               ") is outside of the limits of yMin (=" + String(yMin) +") and yMax (=" + String(yMax) + ")");
        end if;
        assert(limitsAtInit or not limitsAtInit and y >= yMin and y <= yMax,
               "LimPID: During initialization the limits have been switched off.\n" +
               "After initialization, the output y (=" + String(y) +
               ") is outside of the limits of yMin (=" + String(yMin) +") and yMax (=" + String(yMax) + ")");

        connect(u_s, addP.u1) annotation (Line(points={{-120,0},{-96,0},{-96,56},{
                -82,56}}, color={0,0,127}));
        connect(u_s, addD.u1) annotation (Line(points={{-120,0},{-96,0},{-96,6},{
                -82,6}}, color={0,0,127}));
        connect(u_s, addI.u1) annotation (Line(points={{-120,0},{-96,0},{-96,-42},{
                -82,-42}}, color={0,0,127}));
        connect(addP.y, P.u) annotation (Line(points={{-59,50},{-42,50}}, color={0,
                0,127}));
        connect(addD.y, D.u)
          annotation (Line(points={{-59,0},{-42,0}}, color={0,0,127}));
        connect(addI.y, I.u) annotation (Line(points={{-59,-50},{-42,-50}}, color={
                0,0,127}));
        connect(P.y, addPID.u1) annotation (Line(points={{-19,50},{-10,50},{-10,8},
                {-2,8}}, color={0,0,127}));
        connect(D.y, addPID.u2)
          annotation (Line(points={{-19,0},{-2,0}}, color={0,0,127}));
        connect(I.y, addPID.u3) annotation (Line(points={{-19,-50},{-10,-50},{-10,
                -8},{-2,-8}}, color={0,0,127}));
        connect(addPID.y, gainPID.u)
          annotation (Line(points={{21,0},{28,0}}, color={0,0,127}));
        connect(gainPID.y, addSat.u2) annotation (Line(points={{51,0},{60,0},{60,
                -20},{74,-20},{74,-38}}, color={0,0,127}));
        connect(gainPID.y, limiter.u)
          annotation (Line(points={{51,0},{68,0}}, color={0,0,127}));
        connect(limiter.y, addSat.u1) annotation (Line(points={{91,0},{94,0},{94,
                -20},{86,-20},{86,-38}}, color={0,0,127}));
        connect(limiter.y, y)
          annotation (Line(points={{91,0},{110,0}}, color={0,0,127}));
        connect(addSat.y, gainTrack.u) annotation (Line(points={{80,-61},{80,-70},{
                42,-70}}, color={0,0,127}));
        connect(gainTrack.y, addI.u3) annotation (Line(points={{19,-70},{-88,-70},{
                -88,-58},{-82,-58}}, color={0,0,127}));
        connect(u_m, addP.u2) annotation (Line(
            points={{0,-120},{0,-92},{-92,-92},{-92,44},{-82,44}},
            color={0,0,127},
            thickness=0.5));
        connect(u_m, addD.u2) annotation (Line(
            points={{0,-120},{0,-92},{-92,-92},{-92,-6},{-82,-6}},
            color={0,0,127},
            thickness=0.5));
        connect(u_m, addI.u2) annotation (Line(
            points={{0,-120},{0,-92},{-92,-92},{-92,-50},{-82,-50}},
            color={0,0,127},
            thickness=0.5));
        connect(Dzero.y, addPID.u2) annotation (Line(points={{-19.5,25},{-14,25},{
                -14,0},{-2,0}}, color={0,0,127}));
        connect(Izero.y, addPID.u3) annotation (Line(points={{-0.5,-50},{-10,-50},{
                -10,-8},{-2,-8}}, color={0,0,127}));
        annotation (defaultComponentName="PID",
          Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Line(points={{-80,78},{-80,-90}}, color={192,192,192}),
              Polygon(
                points={{-80,90},{-88,68},{-72,68},{-80,90}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-90,-80},{82,-80}}, color={192,192,192}),
              Polygon(
                points={{90,-80},{68,-72},{68,-88},{90,-80}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,-80},{-80,-20},{30,60},{80,60}}, color={0,0,127}),
              Text(
                extent={{-20,-20},{80,-60}},
                lineColor={192,192,192},
                textString="%controllerType"),
              Line(
                visible=strict,
                points={{30,60},{81,60}},
                color={255,0,0},
                smooth=Smooth.None)}),
          Documentation(info="<HTML>
<p>
Via parameter <b>controllerType</b> either <b>P</b>, <b>PI</b>, <b>PD</b>,
or <b>PID</b> can be selected. If, e.g., PI is selected, all components belonging to the
D-part are removed from the block (via conditional declarations).
The example model
<a href=\"modelica://Modelica.Blocks.Examples.PID_Controller\">Modelica.Blocks.Examples.PID_Controller</a>
demonstrates the usage of this controller.
Several practical aspects of PID controller design are incorporated
according to chapter 3 of the book:
</p>

<dl>
<dt>&Aring;str&ouml;m K.J., and H&auml;gglund T.:</dt>
<dd> <b>PID Controllers: Theory, Design, and Tuning</b>.
     Instrument Society of America, 2nd edition, 1995.
</dd>
</dl>

<p>
Besides the additive <b>proportional, integral</b> and <b>derivative</b>
part of this controller, the following features are present:
</p>
<ul>
<li> The output of this controller is limited. If the controller is
     in its limits, anti-windup compensation is activated to drive
     the integrator state to zero. </li>
<li> The high-frequency gain of the derivative part is limited
     to avoid excessive amplification of measurement noise.</li>
<li> Setpoint weighting is present, which allows to weight
     the setpoint in the proportional and the derivative part
     independently from the measurement. The controller will respond
     to load disturbances and measurement noise independently of this setting
     (parameters wp, wd). However, setpoint changes will depend on this
     setting. For example, it is useful to set the setpoint weight wd
     for the derivative part to zero, if steps may occur in the
     setpoint signal.</li>
</ul>

<p>
The parameters of the controller can be manually adjusted by performing
simulations of the closed loop system (= controller + plant connected
together) and using the following strategy:
</p>

<ol>
<li> Set very large limits, e.g., yMax = Modelica.Constants.inf</li>
<li> Select a <b>P</b>-controller and manually enlarge parameter <b>k</b>
     (the total gain of the controller) until the closed-loop response
     cannot be improved any more.</li>
<li> Select a <b>PI</b>-controller and manually adjust parameters
     <b>k</b> and <b>Ti</b> (the time constant of the integrator).
     The first value of Ti can be selected, such that it is in the
     order of the time constant of the oscillations occurring with
     the P-controller. If, e.g., vibrations in the order of T=10 ms
     occur in the previous step, start with Ti=0.01 s.</li>
<li> If you want to make the reaction of the control loop faster
     (but probably less robust against disturbances and measurement noise)
     select a <b>PID</b>-Controller and manually adjust parameters
     <b>k</b>, <b>Ti</b>, <b>Td</b> (time constant of derivative block).</li>
<li> Set the limits yMax and yMin according to your specification.</li>
<li> Perform simulations such that the output of the PID controller
     goes in its limits. Tune <b>Ni</b> (Ni*Ti is the time constant of
     the anti-windup compensation) such that the input to the limiter
     block (= limiter.u) goes quickly enough back to its limits.
     If Ni is decreased, this happens faster. If Ni=infinity, the
     anti-windup compensation is switched off and the controller works bad.</li>
</ol>

<p>
<b>Initialization</b>
</p>

<p>
This block can be initialized in different
ways controlled by parameter <b>initType</b>. The possible
values of initType are defined in
<a href=\"modelica://Modelica.Blocks.Types.InitPID\">Modelica.Blocks.Types.InitPID</a>.
This type is identical to
<a href=\"modelica://Modelica.Blocks.Types.Init\">Types.Init</a>,
with the only exception that the additional option
<b>DoNotUse_InitialIntegratorState</b> is added for
backward compatibility reasons (= integrator is initialized with
InitialState whereas differential part is initialized with
NoInit which was the initialization in version 2.2 of the Modelica
standard library).
</p>

<p>
Based on the setting of initType, the integrator (I) and derivative (D)
blocks inside the PID controller are initialized according to the following table:
</p>

<table border=1 cellspacing=0 cellpadding=2>
  <tr><td valign=\"top\"><b>initType</b></td>
      <td valign=\"top\"><b>I.initType</b></td>
      <td valign=\"top\"><b>D.initType</b></td></tr>

  <tr><td valign=\"top\"><b>NoInit</b></td>
      <td valign=\"top\">NoInit</td>
      <td valign=\"top\">NoInit</td></tr>

  <tr><td valign=\"top\"><b>SteadyState</b></td>
      <td valign=\"top\">SteadyState</td>
      <td valign=\"top\">SteadyState</td></tr>

  <tr><td valign=\"top\"><b>InitialState</b></td>
      <td valign=\"top\">InitialState</td>
      <td valign=\"top\">InitialState</td></tr>

  <tr><td valign=\"top\"><b>InitialOutput</b><br>
          and initial equation: y = y_start</td>
      <td valign=\"top\">NoInit</td>
      <td valign=\"top\">SteadyState</td></tr>

  <tr><td valign=\"top\"><b>DoNotUse_InitialIntegratorState</b></td>
      <td valign=\"top\">InitialState</td>
      <td valign=\"top\">NoInit</td></tr>
</table>

<p>
In many cases, the most useful initial condition is
<b>SteadyState</b> because initial transients are then no longer
present. If initType = InitPID.SteadyState, then in some
cases difficulties might occur. The reason is the
equation of the integrator:
</p>

<pre>
   <b>der</b>(y) = k*u;
</pre>

<p>
The steady state equation \"der(x)=0\" leads to the condition that the input u to the
integrator is zero. If the input u is already (directly or indirectly) defined
by another initial condition, then the initialization problem is <b>singular</b>
(has none or infinitely many solutions). This situation occurs often
for mechanical systems, where, e.g., u = desiredSpeed - measuredSpeed and
since speed is both a state and a derivative, it is natural to
initialize it with zero. As sketched this is, however, not possible.
The solution is to not initialize u_m or the variable that is used
to compute u_m by an algebraic equation.
</p>

<p>
If parameter <b>limitAtInit</b> = <b>false</b>, the limits at the
output of this controller block are removed from the initialization problem which
leads to a much simpler equation system. After initialization has been
performed, it is checked via an assert whether the output is in the
defined limits. For backward compatibility reasons
<b>limitAtInit</b> = <b>true</b>. In most cases it is best
to use <b>limitAtInit</b> = <b>false</b>.
</p>
</html>"));
      end LimPID;
      annotation (
        Documentation(info="<html>
<p>
This package contains basic <b>continuous</b> input/output blocks
described by differential equations.
</p>

<p>
All blocks of this package can be initialized in different
ways controlled by parameter <b>initType</b>. The possible
values of initType are defined in
<a href=\"modelica://Modelica.Blocks.Types.Init\">Modelica.Blocks.Types.Init</a>:
</p>

<table border=1 cellspacing=0 cellpadding=2>
  <tr><td valign=\"top\"><b>Name</b></td>
      <td valign=\"top\"><b>Description</b></td></tr>

  <tr><td valign=\"top\"><b>Init.NoInit</b></td>
      <td valign=\"top\">no initialization (start values are used as guess values with fixed=false)</td></tr>

  <tr><td valign=\"top\"><b>Init.SteadyState</b></td>
      <td valign=\"top\">steady state initialization (derivatives of states are zero)</td></tr>

  <tr><td valign=\"top\"><b>Init.InitialState</b></td>
      <td valign=\"top\">Initialization with initial states</td></tr>

  <tr><td valign=\"top\"><b>Init.InitialOutput</b></td>
      <td valign=\"top\">Initialization with initial outputs (and steady state of the states if possible)</td></tr>
</table>

<p>
For backward compatibility reasons the default of all blocks is
<b>Init.NoInit</b>, with the exception of Integrator and LimIntegrator
where the default is <b>Init.InitialState</b> (this was the initialization
defined in version 2.2 of the Modelica standard library).
</p>

<p>
In many cases, the most useful initial condition is
<b>Init.SteadyState</b> because initial transients are then no longer
present. The drawback is that in combination with a non-linear
plant, non-linear algebraic equations occur that might be
difficult to solve if appropriate guess values for the
iteration variables are not provided (i.e., start values with fixed=false).
However, it is often already useful to just initialize
the linear blocks from the Continuous blocks library in SteadyState.
This is uncritical, because only linear algebraic equations occur.
If Init.NoInit is set, then the start values for the states are
interpreted as <b>guess</b> values and are propagated to the
states with fixed=<b>false</b>.
</p>

<p>
Note, initialization with Init.SteadyState is usually difficult
for a block that contains an integrator
(Integrator, LimIntegrator, PI, PID, LimPID).
This is due to the basic equation of an integrator:
</p>

<pre>
  <b>initial equation</b>
     <b>der</b>(y) = 0;   // Init.SteadyState
  <b>equation</b>
     <b>der</b>(y) = k*u;
</pre>

<p>
The steady state equation leads to the condition that the input to the
integrator is zero. If the input u is already (directly or indirectly) defined
by another initial condition, then the initialization problem is <b>singular</b>
(has none or infinitely many solutions). This situation occurs often
for mechanical systems, where, e.g., u = desiredSpeed - measuredSpeed and
since speed is both a state and a derivative, it is always defined by
Init.InitialState or Init.SteadyState initialization.
</p>

<p>
In such a case, <b>Init.NoInit</b> has to be selected for the integrator
and an additional initial equation has to be added to the system
to which the integrator is connected. E.g., useful initial conditions
for a 1-dim. rotational inertia controlled by a PI controller are that
<b>angle</b>, <b>speed</b>, and <b>acceleration</b> of the inertia are zero.
</p>

</html>"),     Icon(graphics={Line(
              origin={0.061,4.184},
              points={{81.939,36.056},{65.362,36.056},{14.39,-26.199},{-29.966,
                  113.485},{-65.374,-61.217},{-78.061,-78.184}},
              color={95,95,95},
              smooth=Smooth.Bezier)}));
    end Continuous;

    package Interfaces
    "Library of connectors and partial models for input/output blocks"
      import Modelica.SIunits;
      extends Modelica.Icons.InterfacesPackage;

      connector RealInput = input Real "'input Real' as connector" annotation (
        defaultComponentName="u",
        Icon(graphics={
          Polygon(
            lineColor={0,0,127},
            fillColor={0,0,127},
            fillPattern=FillPattern.Solid,
            points={{-100.0,100.0},{100.0,0.0},{-100.0,-100.0}})},
          coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}},
            preserveAspectRatio=true,
            initialScale=0.2)),
        Diagram(
          coordinateSystem(preserveAspectRatio=true,
            initialScale=0.2,
            extent={{-100.0,-100.0},{100.0,100.0}}),
            graphics={
          Polygon(
            lineColor={0,0,127},
            fillColor={0,0,127},
            fillPattern=FillPattern.Solid,
            points={{0.0,50.0},{100.0,0.0},{0.0,-50.0},{0.0,50.0}}),
          Text(
            lineColor={0,0,127},
            extent={{-10.0,60.0},{-10.0,85.0}},
            textString="%name")}),
        Documentation(info="<html>
<p>
Connector with one input signal of type Real.
</p>
</html>"));

      connector RealOutput = output Real "'output Real' as connector" annotation (
        defaultComponentName="y",
        Icon(
          coordinateSystem(preserveAspectRatio=true,
            extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Polygon(
            lineColor={0,0,127},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid,
            points={{-100.0,100.0},{100.0,0.0},{-100.0,-100.0}})}),
        Diagram(
          coordinateSystem(preserveAspectRatio=true,
            extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Polygon(
            lineColor={0,0,127},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid,
            points={{-100.0,50.0},{0.0,0.0},{-100.0,-50.0}}),
          Text(
            lineColor={0,0,127},
            extent={{30.0,60.0},{30.0,110.0}},
            textString="%name")}),
        Documentation(info="<html>
<p>
Connector with one output signal of type Real.
</p>
</html>"));

      connector BooleanOutput = output Boolean "'output Boolean' as connector"
        annotation (
        defaultComponentName="y",
        Icon(coordinateSystem(
            preserveAspectRatio=true,
            extent={{-100,-100},{100,100}}), graphics={Polygon(
              points={{-100,100},{100,0},{-100,-100},{-100,100}},
              lineColor={255,0,255},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid)}),
        Diagram(coordinateSystem(
            preserveAspectRatio=true,
            extent={{-100,-100},{100,100}}), graphics={Polygon(
              points={{-100,50},{0,0},{-100,-50},{-100,50}},
              lineColor={255,0,255},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid), Text(
              extent={{30,110},{30,60}},
              lineColor={255,0,255},
              textString="%name")}),
        Documentation(info="<html>
<p>
Connector with one output signal of type Boolean.
</p>
</html>"));

      partial block SO "Single Output continuous control block"
        extends Modelica.Blocks.Icons.Block;

        RealOutput y "Connector of Real output signal" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));
        annotation (Documentation(info="<html>
<p>
Block has one continuous Real output signal.
</p>
</html>"));

      end SO;

      partial block MO "Multiple Output continuous control block"
        extends Modelica.Blocks.Icons.Block;

        parameter Integer nout(min=1) = 1 "Number of outputs";
        RealOutput y[nout] "Connector of Real output signals" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));
        annotation (Documentation(info="<html>
<p>
Block has one continuous Real output signal vector.
</p>
</html>"));

      end MO;

      partial block SISO "Single Input Single Output continuous control block"
        extends Modelica.Blocks.Icons.Block;

        RealInput u "Connector of Real input signal" annotation (Placement(
              transformation(extent={{-140,-20},{-100,20}}, rotation=0)));
        RealOutput y "Connector of Real output signal" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));
        annotation (Documentation(info="<html>
<p>
Block has one continuous Real input and one continuous Real output signal.
</p>
</html>"));
      end SISO;

      partial block SI2SO
      "2 Single Input / 1 Single Output continuous control block"
        extends Modelica.Blocks.Icons.Block;

        RealInput u1 "Connector of Real input signal 1" annotation (Placement(
              transformation(extent={{-140,40},{-100,80}}, rotation=0)));
        RealInput u2 "Connector of Real input signal 2" annotation (Placement(
              transformation(extent={{-140,-80},{-100,-40}}, rotation=0)));
        RealOutput y "Connector of Real output signal" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));

        annotation (Documentation(info="<html>
<p>
Block has two continuous Real input signals u1 and u2 and one
continuous Real output signal y.
</p>
</html>"));

      end SI2SO;

      partial block SIMO
      "Single Input Multiple Output continuous control block"
        extends Modelica.Blocks.Icons.Block;
        parameter Integer nout=1 "Number of outputs";
        RealInput u "Connector of Real input signal" annotation (Placement(
              transformation(extent={{-140,-20},{-100,20}}, rotation=0)));
        RealOutput y[nout] "Connector of Real output signals" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));

        annotation (Documentation(info="<HTML>
<p> Block has one continuous Real input signal and a
    vector of continuous Real output signals.</p>

</html>"));
      end SIMO;

      partial block MISO
      "Multiple Input Single Output continuous control block"

        extends Modelica.Blocks.Icons.Block;
        parameter Integer nin=1 "Number of inputs";
        RealInput u[nin] "Connector of Real input signals" annotation (Placement(
              transformation(extent={{-140,-20},{-100,20}}, rotation=0)));
        RealOutput y "Connector of Real output signal" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));
        annotation (Documentation(info="<HTML>
<p>
Block has a vector of continuous Real input signals and
one continuous Real output signal.
</p>
</html>"));
      end MISO;

      partial block SVcontrol "Single-Variable continuous controller"
        extends Modelica.Blocks.Icons.Block;

        RealInput u_s "Connector of setpoint input signal" annotation (Placement(
              transformation(extent={{-140,-20},{-100,20}}, rotation=0)));
        RealInput u_m "Connector of measurement input signal" annotation (Placement(
              transformation(
              origin={0,-120},
              extent={{20,-20},{-20,20}},
              rotation=270)));
        RealOutput y "Connector of actuator output signal" annotation (Placement(
              transformation(extent={{100,-10},{120,10}}, rotation=0)));
        annotation (Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={Text(
                  extent={{-102,34},{-142,24}},
                  textString="(setpoint)",
                  lineColor={0,0,255}),Text(
                  extent={{100,24},{140,14}},
                  textString="(actuator)",
                  lineColor={0,0,255}),Text(
                  extent={{-83,-112},{-33,-102}},
                  textString=" (measurement)",
                  lineColor={0,0,255})}), Documentation(info="<html>
<p>
Block has two continuous Real input signals and one
continuous Real output signal. The block is designed
to be used as base class for a corresponding controller.
</p>
</html>"));
      end SVcontrol;

      partial block BlockIcon
      "This icon will be removed in future Modelica versions, use Modelica.Blocks.Icons.Block instead."
        // extends Modelica.Icons.ObsoleteModel;

        annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                  {100,100}}), graphics={Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,127},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid), Text(
                extent={{-150,150},{150,110}},
                textString="%name",
                lineColor={0,0,255})}), Documentation(info="<html>
<p>
This icon will be removed in future versions of the Modelica Standard Library.
Instead the icon <a href=\"modelica://Modelica.Blocks.Icons.Block\">Modelica.Blocks.Icons.Block</a> shall be used.
</p>
</html>"));

      end BlockIcon;

      partial block partialBooleanBlockIcon
      "This icon will be removed in future Modelica versions, use Modelica.Blocks.Icons.PartialBooleanBlock instead."
        // extends Modelica.Icons.ObsoleteModel;

        annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                  {100,100}}), graphics={Rectangle(
                extent={{-100,100},{100,-100}},
                lineColor={0,0,0},
                lineThickness=5.0,
                fillColor={210,210,210},
                fillPattern=FillPattern.Solid,
                borderPattern=BorderPattern.Raised), Text(
                extent={{-150,150},{150,110}},
                textString="%name",
                lineColor={0,0,255})}), Documentation(info="<html>
<p>
This icon will be removed in future versions of the Modelica Standard Library.
Instead the icon <a href=\"modelica://Modelica.Blocks.Icons.PartialBooleanBlock\">Modelica.Blocks.Icons.PartialBooleanBlock</a> shall be used.
</p>
</html>"));
      end partialBooleanBlockIcon;
      annotation (Documentation(info="<HTML>
<p>
This package contains interface definitions for
<b>continuous</b> input/output blocks with Real,
Integer and Boolean signals. Furthermore, it contains
partial models for continuous and discrete blocks.
</p>

</html>",     revisions="<html>
<ul>
<li><i>Oct. 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       Added several new interfaces.
<li><i>Oct. 24, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       RealInputSignal renamed to RealInput. RealOutputSignal renamed to
       output RealOutput. GraphBlock renamed to BlockIcon. SISOreal renamed to
       SISO. SOreal renamed to SO. I2SOreal renamed to M2SO.
       SignalGenerator renamed to SignalSource. Introduced the following
       new models: MIMO, MIMOs, SVcontrol, MVcontrol, DiscreteBlockIcon,
       DiscreteBlock, DiscreteSISO, DiscreteMIMO, DiscreteMIMOs,
       BooleanBlockIcon, BooleanSISO, BooleanSignalSource, MI2BooleanMOs.</li>
<li><i>June 30, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized a first version, based on an existing Dymola library
       of Dieter Moormann and Hilding Elmqvist.</li>
</ul>
</html>"));
    end Interfaces;

    package Math
    "Library of Real mathematical functions as input/output blocks"
      import Modelica.SIunits;
      import Modelica.Blocks.Interfaces;
      extends Modelica.Icons.Package;

          block Gain "Output the product of a gain value with the input signal"

            parameter Real k(start=1, unit="1")
        "Gain value multiplied with input signal";
    public
            Interfaces.RealInput u "Input signal connector"
              annotation (Placement(transformation(extent={{-140,-20},{-100,20}},
                rotation=0)));
            Interfaces.RealOutput y "Output signal connector"
              annotation (Placement(transformation(extent={{100,-10},{120,10}},
                rotation=0)));

          equation
            y = k*u;
            annotation (
              Documentation(info="<html>
<p>
This block computes output <i>y</i> as
<i>product</i> of gain <i>k</i> with the
input <i>u</i>:
</p>
<pre>
    y = k * u;
</pre>

</html>"),           Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Polygon(
                points={{-100,-100},{-100,100},{100,0},{-100,-100}},
                lineColor={0,0,127},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-150,-140},{150,-100}},
                lineColor={0,0,0},
                textString="k=%k"),
              Text(
                extent={{-150,140},{150,100}},
                textString="%name",
                lineColor={0,0,255})}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={Polygon(
                points={{-100,-100},{-100,100},{100,0},{-100,-100}},
                lineColor={0,0,127},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid), Text(
                extent={{-76,38},{0,-34}},
                textString="k",
                lineColor={0,0,255})}));
          end Gain;

          block Sum "Output the sum of the elements of the input vector"
            extends Interfaces.MISO;
            parameter Real k[nin]=ones(nin) "Optional: sum coefficients";
          equation
            y = k*u;
            annotation (defaultComponentName="sum1",
              Documentation(info="<html>
<p>
This blocks computes output <b>y</b> as
<i>sum</i> of the elements of the input signal vector
<b>u</b>:
</p>
<pre>
    <b>y</b> = <b>u</b>[1] + <b>u</b>[2] + ...;
</pre>
<p>
Example:
</p>
<pre>
     parameter:   nin = 3;

  results in the following equations:

     y = u[1] + u[2] + u[3];
</pre>

</html>"),           Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={Line(
                points={{26,42},{-34,42},{6,2},{-34,-38},{26,-38}},
                color={0,0,0},
                thickness=0.25), Text(
                extent={{-150,150},{150,110}},
                textString="%name",
                lineColor={0,0,255})}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,255},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid), Line(
                points={{26,42},{-34,42},{6,2},{-34,-38},{26,-38}},
                color={0,0,0},
                thickness=0.25)}));
          end Sum;

          block Add "Output the sum of the two inputs"
            extends Interfaces.SI2SO;

            parameter Real k1=+1 "Gain of upper input";
            parameter Real k2=+1 "Gain of lower input";

          equation
            y = k1*u1 + k2*u2;
            annotation (
              Documentation(info="<html>
<p>
This blocks computes output <b>y</b> as <i>sum</i> of the
two input signals <b>u1</b> and <b>u2</b>:
</p>
<pre>
    <b>y</b> = k1*<b>u1</b> + k2*<b>u2</b>;
</pre>
<p>
Example:
</p>
<pre>
     parameter:   k1= +2, k2= -3

  results in the following equations:

     y = 2 * u1 - 3 * u2
</pre>

</html>"),           Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100,-100},{100,100}}, initialScale = 0.1), graphics = {
                Text(
                  lineColor=  {0,0,255},
                  extent=  {{-150,110},{150,150}},
                  textString=  "%name"),
                Line(
                  points=  {{-100,60},{-74,24},{-44,24}},
                  color=  {0,0,127}),
                Line(
                  points=  {{-100,-60},{-74,-28},{-42,-28}},
                  color=  {0,0,127}),
                Ellipse(
                  lineColor=  {0,0,127},
                  extent=  {{-50,-50},{50,50}}),
                Line(
                  points=  {{50,0},{100,0}},
                  color=  {0,0,127}),
                Text(
                  extent=  {{-38,-34},{38,34}},
                  textString=  "+"),
                Text(
                  extent=  {{-100,52},{5,92}},
                  textString=  "%k1"),
                Text(
                  extent=  {{-100,-92},{5,-52}},
                  textString=  "%k2")}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,127},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Line(points={{50,0},{100,0}}, color={0,0,255}),
              Line(points={{-100,60},{-74,24},{-44,24}}, color={0,0,127}),
              Line(points={{-100,-60},{-74,-28},{-42,-28}}, color={0,0,127}),
              Ellipse(extent={{-50,50},{50,-50}}, lineColor={0,0,127}),
              Line(points={{50,0},{100,0}}, color={0,0,127}),
              Text(
                extent={{-36,38},{40,-30}},
                lineColor={0,0,0},
                textString="+"),
              Text(
                extent={{-100,52},{5,92}},
                lineColor={0,0,0},
                textString="k1"),
              Text(
                extent={{-100,-52},{5,-92}},
                lineColor={0,0,0},
                textString="k2")}));
          end Add;

          block Add3 "Output the sum of the three inputs"
            extends Modelica.Blocks.Icons.Block;

            parameter Real k1=+1 "Gain of upper input";
            parameter Real k2=+1 "Gain of middle input";
            parameter Real k3=+1 "Gain of lower input";
            Interfaces.RealInput u1 "Connector 1 of Real input signals"
              annotation (Placement(transformation(extent={{-140,60},{-100,100}},
                rotation=0)));
            Interfaces.RealInput u2 "Connector 2 of Real input signals"
              annotation (Placement(transformation(extent={{-140,-20},{-100,20}},
                rotation=0)));
            Interfaces.RealInput u3 "Connector 3 of Real input signals"
              annotation (Placement(transformation(extent={{-140,-100},{-100,-60}},
                rotation=0)));
            Interfaces.RealOutput y "Connector of Real output signals"
              annotation (Placement(transformation(extent={{100,-10},{120,10}},
                rotation=0)));

          equation
            y = k1*u1 + k2*u2 + k3*u3;
            annotation (
              Documentation(info="<html>
<p>
This blocks computes output <b>y</b> as <i>sum</i> of the
three input signals <b>u1</b>, <b>u2</b> and <b>u3</b>:
</p>
<pre>
    <b>y</b> = k1*<b>u1</b> + k2*<b>u2</b> + k3*<b>u3</b>;
</pre>
<p>
Example:
</p>
<pre>
     parameter:   k1= +2, k2= -3, k3=1;

  results in the following equations:

     y = 2 * u1 - 3 * u2 + u3;
</pre>

</html>"),           Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Text(
                extent={{-100,50},{5,90}},
                lineColor={0,0,0},
                textString="%k1"),
              Text(
                extent={{-100,-20},{5,20}},
                lineColor={0,0,0},
                textString="%k2"),
              Text(
                extent={{-100,-50},{5,-90}},
                lineColor={0,0,0},
                textString="%k3"),
              Text(
                extent={{2,36},{100,-44}},
                lineColor={0,0,0},
                textString="+")}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,255},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-100,50},{5,90}},
                lineColor={0,0,0},
                textString="k1"),
              Text(
                extent={{-100,-20},{5,20}},
                lineColor={0,0,0},
                textString="k2"),
              Text(
                extent={{-100,-50},{5,-90}},
                lineColor={0,0,0},
                textString="k3"),
              Text(
                extent={{2,46},{100,-34}},
                lineColor={0,0,0},
                textString="+")}));
          end Add3;

          block Product "Output product of the two inputs"
            extends Interfaces.SI2SO;

          equation
            y = u1*u2;
            annotation (
              Documentation(info="<html>
<p>
This blocks computes the output <b>y</b> (element-wise)
as <i>product</i> of the corresponding elements of
the two inputs <b>u1</b> and <b>u2</b>:
</p>
<pre>
    y = u1 * u2;
</pre>

</html>"),           Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100,-100},{100,100}}, initialScale = 0.1), graphics = {
                Line(
                  points=  {{-100,60},{-40,60},{-30,40}},
                  color=  {0,0,127}),
                Line(
                  points=  {{-100,-60},{-40,-60},{-30,-40}},
                  color=  {0,0,127}),
                Line(
                  points=  {{50,0},{100,0}},
                  color=  {0,0,127}),
                Line(
                  points=  {{-30,0},{30,0}}),
                Line(
                  points=  {{-15,25.99},{15,-25.99}}),
                Line(
                  points=  {{-15,-25.99},{15,25.99}}),
                Ellipse(
                  lineColor=  {0,0,127},
                  extent=  {{-50,-50},{50,50}})}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,255},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Line(points={{-100,60},{-40,60},{-30,40}}, color={0,0,255}),
              Line(points={{-100,-60},{-40,-60},{-30,-40}}, color={0,0,255}),
              Line(points={{50,0},{100,0}}, color={0,0,255}),
              Line(points={{-30,0},{30,0}}, color={0,0,0}),
              Line(points={{-15,25.99},{15,-25.99}}, color={0,0,0}),
              Line(points={{-15,-25.99},{15,25.99}}, color={0,0,0}),
              Ellipse(extent={{-50,50},{50,-50}}, lineColor={0,0,255})}));
          end Product;
      annotation (
        Documentation(info="<html>
<p>
This package contains basic <b>mathematical operations</b>,
such as summation and multiplication, and basic <b>mathematical
functions</b>, such as <b>sqrt</b> and <b>sin</b>, as
input/output blocks. All blocks of this library can be either
connected with continuous blocks or with sampled-data blocks.
</p>
</html>",     revisions="<html>
<ul>
<li><i>October 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       New blocks added: RealToInteger, IntegerToReal, Max, Min, Edge, BooleanChange, IntegerChange.</li>
<li><i>August 7, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized (partly based on an existing Dymola library
       of Dieter Moormann and Hilding Elmqvist).
</li>
</ul>
</html>"),     Icon(graphics={Line(
              points={{-80,-2},{-68.7,32.2},{-61.5,51.1},{-55.1,64.4},{-49.4,72.6},
                  {-43.8,77.1},{-38.2,77.8},{-32.6,74.6},{-26.9,67.7},{-21.3,57.4},
                  {-14.9,42.1},{-6.83,19.2},{10.1,-32.8},{17.3,-52.2},{23.7,-66.2},
                  {29.3,-75.1},{35,-80.4},{40.6,-82},{46.2,-79.6},{51.9,-73.5},{
                  57.5,-63.9},{63.9,-49.2},{72,-26.8},{80,-2}},
              color={95,95,95},
              smooth=Smooth.Bezier)}));
    end Math;

    package Nonlinear
    "Library of discontinuous or non-differentiable algebraic control blocks"
      import Modelica.Blocks.Interfaces;
      extends Modelica.Icons.Package;

          block Limiter "Limit the range of a signal"
            parameter Real uMax(start=1) "Upper limits of input signals";
            parameter Real uMin= -uMax "Lower limits of input signals";
            parameter Boolean strict=false
        "= true, if strict limits with noEvent(..)"
              annotation (Evaluate=true, choices(checkBox=true), Dialog(tab="Advanced"));
            parameter Boolean limitsAtInit=true
        "= false, if limits are ignored during initialization (i.e., y=u)"
              annotation (Evaluate=true, choices(checkBox=true), Dialog(tab="Advanced"));
            extends Interfaces.SISO;

          equation
            assert(uMax >= uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(uMax) +
                                 ") < uMin (=" + String(uMin) + ")");
            if initial() and not limitsAtInit then
               y = u;
               assert(u >= uMin - 0.01*abs(uMin) and
                      u <= uMax + 0.01*abs(uMax),
                     "Limiter: During initialization the limits have been ignored.\n"+
                     "However, the result is that the input u is not within the required limits:\n"+
                     "  u = " + String(u) + ", uMin = " + String(uMin) + ", uMax = " + String(uMax));
            elseif strict then
               y = smooth(0, noEvent(if u > uMax then uMax else if u < uMin then uMin else u));
            else
               y = smooth(0,if u > uMax then uMax else if u < uMin then uMin else u);
            end if;
            annotation (
              Documentation(info="<html>
<p>
The Limiter block passes its input signal as output signal
as long as the input is within the specified upper and lower
limits. If this is not the case, the corresponding limits are passed
as output.
</p>
</html>"),           Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Line(points={{0,-90},{0,68}}, color={192,192,192}),
              Polygon(
                points={{0,90},{-8,68},{8,68},{0,90}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-90,0},{68,0}}, color={192,192,192}),
              Polygon(
                points={{90,0},{68,-8},{68,8},{90,0}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,-70},{-50,-70},{50,70},{80,70}}, color={0,0,0}),
              Text(
                extent={{-150,-150},{150,-110}},
                lineColor={0,0,0},
                textString="uMax=%uMax"),
              Text(
                extent={{-150,150},{150,110}},
                textString="%name",
                lineColor={0,0,255}),
              Line(
                visible=strict,
                points={{50,70},{80,70}},
                color={255,0,0},
                smooth=Smooth.None),
              Line(
                visible=strict,
                points={{-80,-70},{-50,-70}},
                color={255,0,0},
                smooth=Smooth.None)}),
              Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Line(points={{0,-60},{0,50}}, color={192,192,192}),
              Polygon(
                points={{0,60},{-5,50},{5,50},{0,60}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-60,0},{50,0}}, color={192,192,192}),
              Polygon(
                points={{60,0},{50,-5},{50,5},{60,0}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-50,-40},{-30,-40},{30,40},{50,40}}, color={0,0,0}),
              Text(
                extent={{46,-6},{68,-18}},
                lineColor={128,128,128},
                textString="u"),
              Text(
                extent={{-30,70},{-5,50}},
                lineColor={128,128,128},
                textString="y"),
              Text(
                extent={{-58,-54},{-28,-42}},
                lineColor={128,128,128},
                textString="uMin"),
              Text(
                extent={{26,40},{66,56}},
                lineColor={128,128,128},
                textString="uMax")}));
          end Limiter;
          annotation (
            Documentation(info="<html>
<p>
This package contains <b>discontinuous</b> and
<b>non-differentiable, algebraic</b> input/output blocks.
</p>
</html>",     revisions="<html>
<ul>
<li><i>October 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       New block VariableLimiter added.
<li><i>August 22, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized, based on an existing Dymola library
       of Dieter Moormann and Hilding Elmqvist.
</li>
</ul>
</html>"),     Icon(graphics={Line(points={{-80,-66},{-26,-66},{28,52},{88,52}},
                color={95,95,95})}));
    end Nonlinear;

    package Sources
    "Library of signal source blocks generating Real and Boolean signals"
      import Modelica.Blocks.Interfaces;
      import Modelica.SIunits;
      extends Modelica.Icons.SourcesPackage;

      block Constant "Generate constant signal of type Real"
        parameter Real k(start=1) "Constant output value";
        extends Interfaces.SO;

      equation
        y = k;
        annotation (
          defaultComponentName="const",
          Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Line(points={{-80,68},{-80,-80}}, color={192,192,192}),
              Polygon(
                points={{-80,90},{-88,68},{-72,68},{-80,90}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-90,-70},{82,-70}}, color={192,192,192}),
              Polygon(
                points={{90,-70},{68,-62},{68,-78},{90,-70}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,0},{80,0}}, color={0,0,0}),
              Text(
                extent={{-150,-150},{150,-110}},
                lineColor={0,0,0},
                textString="k=%k")}),
          Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Polygon(
                points={{-80,90},{-86,68},{-74,68},{-80,90}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,68},{-80,-80}}, color={95,95,95}),
              Line(
                points={{-80,0},{80,0}},
                color={0,0,255},
                thickness=0.5),
              Line(points={{-90,-70},{82,-70}}, color={95,95,95}),
              Polygon(
                points={{90,-70},{68,-64},{68,-76},{90,-70}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-83,92},{-30,74}},
                lineColor={0,0,0},
                textString="y"),
              Text(
                extent={{70,-80},{94,-100}},
                lineColor={0,0,0},
                textString="time"),
              Text(
                extent={{-101,8},{-81,-12}},
                lineColor={0,0,0},
                textString="k")}),
          Documentation(info="<html>
<p>
The Real output y is a constant signal:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Sources/Constant.png\"
     alt=\"Constant.png\">
</p>
</html>"));
      end Constant;

      block Pulse "Generate pulse signal of type Real"
        parameter Real amplitude=1 "Amplitude of pulse";
        parameter Real width(
          final min=Modelica.Constants.small,
          final max=100) = 50 "Width of pulse in % of period";
        parameter Modelica.SIunits.Time period(final min=Modelica.Constants.small,
            start=1) "Time for one period";
        parameter Integer nperiod=-1
        "Number of periods (< 0 means infinite number of periods)";
        parameter Real offset=0 "Offset of output signals";
        parameter Modelica.SIunits.Time startTime=0
        "Output = offset for time < startTime";
        extends Modelica.Blocks.Interfaces.SO;
    protected
        Modelica.SIunits.Time T_width=period*width/100;
        Modelica.SIunits.Time T_start "Start time of current period";
        Integer count "Period count";
      initial algorithm
        count := integer((time - startTime)/period);
        T_start := startTime + count*period;
      equation
        when integer((time - startTime)/period) > pre(count) then
          count = pre(count) + 1;
          T_start = time;
        end when;
        y = offset + (if (time < startTime or nperiod == 0 or (nperiod > 0 and
          count >= nperiod)) then 0 else if time < T_start + T_width then amplitude
           else 0);
        annotation (
          Icon(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Line(points={{-80,68},{-80,-80}}, color={192,192,192}),
              Polygon(
                points={{-80,90},{-88,68},{-72,68},{-80,90}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-90,-70},{82,-70}}, color={192,192,192}),
              Polygon(
                points={{90,-70},{68,-62},{68,-78},{90,-70}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,-70},{-40,-70},{-40,44},{0,44},{0,-70},{40,-70},{40,
                    44},{79,44}}, color={0,0,0}),
              Text(
                extent={{-147,-152},{153,-112}},
                lineColor={0,0,0},
                textString="period=%period")}),
          Diagram(coordinateSystem(
              preserveAspectRatio=true,
              extent={{-100,-100},{100,100}}), graphics={
              Polygon(
                points={{-80,90},{-85,68},{-75,68},{-80,90}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,68},{-80,-80}}, color={95,95,95}),
              Line(points={{-90,-70},{82,-70}}, color={95,95,95}),
              Polygon(
                points={{90,-70},{68,-65},{68,-75},{90,-70}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-34,0},{-37,-13},{-31,-13},{-34,0}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(points={{-34,0},{-34,-70}},  color={95,95,95}),
              Polygon(
                points={{-34,-70},{-37,-57},{-31,-57},{-34,-70},{-34,-70}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-78,-24},{-35,-36}},
                lineColor={0,0,0},
                textString="offset"),
              Text(
                extent={{-30,-72},{16,-81}},
                lineColor={0,0,0},
                textString="startTime"),
              Text(
                extent={{-82,96},{-49,79}},
                lineColor={0,0,0},
                textString="y"),
              Text(
                extent={{66,-80},{87,-90}},
                lineColor={0,0,0},
                textString="time"),
              Line(points={{-10,0},{-10,-70}}, color={95,95,95}),
              Line(
                points={{-80,0},{-10,0},{-10,50},{30,50},{30,0},{50,0},{50,50},{90,
                    50}},
                color={0,0,255},
                thickness=0.5),
              Line(points={{-10,88},{-10,50}}, color={95,95,95}),
              Line(points={{30,74},{30,50}}, color={95,95,95}),
              Line(points={{50,88},{50,50}}, color={95,95,95}),
              Line(points={{-10,83},{50,83}}, color={95,95,95}),
              Line(points={{-10,69},{30,69}}, color={95,95,95}),
              Text(
                extent={{-3,93},{39,84}},
                lineColor={0,0,0},
                textString="period"),
              Text(
                extent={{-7,78},{30,69}},
                lineColor={0,0,0},
                textString="width"),
              Line(points={{-43,50},{-10,50}}, color={95,95,95}),
              Line(points={{-34,50},{-34,0}}, color={95,95,95}),
              Text(
                extent={{-77,30},{-37,21}},
                lineColor={0,0,0},
                textString="amplitude"),
              Polygon(
                points={{-34,50},{-37,37},{-31,37},{-34,50}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-34,0},{-37,13},{-31,13},{-34,0},{-34,0}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(
                points={{90,50},{90,0},{100,0}},
                color={0,0,255},
                thickness=0.5),
              Polygon(
                points={{-10,69},{-1,71},{-1,67},{-10,69}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{30,69},{22,71},{22,67},{30,69}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-10,83},{-1,85},{-1,81},{-10,83}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{50,83},{42,85},{42,81},{50,83}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid)}),
          Documentation(info="<html>
<p>
The Real output y is a pulse signal:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Sources/Pulse.png\"
     alt=\"Pulse.png\">
</p>
</html>"));
      end Pulse;

      block CombiTimeTable
      "Table look-up with respect to time and linear/periodic extrapolation methods (data from matrix/file)"
        extends Modelica.Blocks.Interfaces.MO(final nout=max([size(columns, 1);
              size(offset, 1)]));
        parameter Boolean tableOnFile=false
        "= true, if table is defined on file or in function usertab"
          annotation (Dialog(group="Table data definition"));
        parameter Real table[:, :] = fill(0.0, 0, 2)
        "Table matrix (time = first column; e.g., table=[0,2])"
          annotation (Dialog(group="Table data definition",enable=not tableOnFile));
        parameter String tableName="NoName"
        "Table name on file or in function usertab (see docu)"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter String fileName="NoName" "File where matrix is stored"
          annotation (Dialog(
            group="Table data definition",
            enable=tableOnFile,
            loadSelector(filter="Text files (*.txt);;MATLAB MAT-files (*.mat)",
                caption="Open file in which table is present")));
        parameter Boolean verboseRead=true
        "= true, if info message that file is loading is to be printed"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter Integer columns[:]=2:size(table, 2)
        "Columns of table to be interpolated"
          annotation (Dialog(group="Table data interpretation"));
        parameter Modelica.Blocks.Types.Smoothness smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments
        "Smoothness of table interpolation"
          annotation (Dialog(group="Table data interpretation"));
        parameter Modelica.Blocks.Types.Extrapolation extrapolation=Modelica.Blocks.Types.Extrapolation.LastTwoPoints
        "Extrapolation of data outside the definition range"
          annotation (Dialog(group="Table data interpretation"));
        parameter Real offset[:]={0} "Offsets of output signals"
          annotation (Dialog(group="Table data interpretation"));
        parameter Modelica.SIunits.Time startTime=0
        "Output = offset for time < startTime"
          annotation (Dialog(group="Table data interpretation"));
        final parameter Modelica.SIunits.Time t_min(fixed=false)
        "Minimum abscissa value defined in table";
        final parameter Modelica.SIunits.Time t_max(fixed=false)
        "Maximum abscissa value defined in table";
    protected
        final parameter Real p_offset[nout]=(if size(offset, 1) == 1 then ones(nout)*offset[1] else offset)
        "Offsets of output signals";
        Modelica.Blocks.Types.ExternalCombiTimeTable tableID=
            Modelica.Blocks.Types.ExternalCombiTimeTable(
              if tableOnFile then tableName else "NoName",
              if tableOnFile and fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(fileName) then fileName else "NoName",
              table,
              startTime,
              columns,
              smoothness,
              extrapolation) "External table object";
        discrete Modelica.SIunits.Time nextTimeEvent(start=0, fixed=true)
        "Next time event instant";
        parameter Real tableOnFileRead(fixed=false)
        "= 1, if table was successfully read from file";

        function readTableData
        "Read table data from ASCII text or MATLAB MAT-file"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Boolean forceRead = false
          "= true: Force reading of table data; = false: Only read, if not yet read.";
          output Real readSuccess "Table read success";
          input Boolean verboseRead
          "= true: Print info message; = false: No info message";
          external"C" readSuccess = ModelicaStandardTables_CombiTimeTable_read(tableID, forceRead, verboseRead)
            annotation (Library={"ModelicaStandardTables"});
        end readTableData;

        function getTableValue
        "Interpolate 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Integer icol;
          input Modelica.SIunits.Time timeIn;
          discrete input Modelica.SIunits.Time nextTimeEvent;
          discrete input Modelica.SIunits.Time pre_nextTimeEvent;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTimeTable_getValue(tableID, icol, timeIn, nextTimeEvent, pre_nextTimeEvent)
            annotation (Library={"ModelicaStandardTables"});
          annotation (derivative(
              noDerivative=nextTimeEvent,
              noDerivative=pre_nextTimeEvent,
              noDerivative=tableAvailable) = getDerTableValue);
        end getTableValue;

        function getTableValueNoDer
        "Interpolate 1-dim. table where first column is time (but do not provide a derivative function)"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Integer icol;
          input Modelica.SIunits.Time timeIn;
          discrete input Modelica.SIunits.Time nextTimeEvent;
          discrete input Modelica.SIunits.Time pre_nextTimeEvent;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTimeTable_getValue(tableID, icol, timeIn, nextTimeEvent, pre_nextTimeEvent)
            annotation (Library={"ModelicaStandardTables"});
        end getTableValueNoDer;

        function getDerTableValue
        "Derivative of interpolated 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Integer icol;
          input Modelica.SIunits.Time timeIn;
          discrete input Modelica.SIunits.Time nextTimeEvent;
          discrete input Modelica.SIunits.Time pre_nextTimeEvent;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          input Real der_timeIn;
          output Real der_y;
          external"C" der_y = ModelicaStandardTables_CombiTimeTable_getDerValue(tableID, icol, timeIn, nextTimeEvent, pre_nextTimeEvent, der_timeIn)
            annotation (Library={"ModelicaStandardTables"});
        end getDerTableValue;

        function getTableTimeTmin
        "Return minimum time value of 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Modelica.SIunits.Time timeMin "Minimum time value in table";
          external"C" timeMin = ModelicaStandardTables_CombiTimeTable_minimumTime(tableID)
            annotation (Library={"ModelicaStandardTables"});
        end getTableTimeTmin;

        function getTableTimeTmax
        "Return maximum time value of 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Modelica.SIunits.Time timeMax "Maximum time value in table";
          external"C" timeMax = ModelicaStandardTables_CombiTimeTable_maximumTime(tableID)
            annotation (Library={"ModelicaStandardTables"});
        end getTableTimeTmax;

        function getNextTimeEvent
        "Return next time event value of 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
          input Modelica.SIunits.Time timeIn;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Modelica.SIunits.Time nextTimeEvent "Next time event in table";
          external"C" nextTimeEvent = ModelicaStandardTables_CombiTimeTable_nextTimeEvent(tableID, timeIn)
            annotation (Library={"ModelicaStandardTables"});
        end getNextTimeEvent;

      initial algorithm
        if tableOnFile then
          tableOnFileRead := readTableData(tableID, false, verboseRead);
        else
          tableOnFileRead := 1.;
        end if;
        t_min := getTableTimeTmin(tableID, tableOnFileRead);
        t_max := getTableTimeTmax(tableID, tableOnFileRead);
      equation
        if tableOnFile then
          assert(tableName <> "NoName",
            "tableOnFile = true and no table name given");
        else
          assert(size(table, 1) > 0 and size(table, 2) > 0,
            "tableOnFile = false and parameter table is an empty matrix");
        end if;
        when {time >= pre(nextTimeEvent),initial()} then
          nextTimeEvent = getNextTimeEvent(tableID, time, tableOnFileRead);
        end when;
        if smoothness == Modelica.Blocks.Types.Smoothness.ConstantSegments then
          for i in 1:nout loop
            y[i] = p_offset[i] + getTableValueNoDer(tableID, i, time, nextTimeEvent, pre(nextTimeEvent), tableOnFileRead);
          end for;
        else
          for i in 1:nout loop
            y[i] = p_offset[i] + getTableValue(tableID, i, time, nextTimeEvent, pre(nextTimeEvent), tableOnFileRead);
          end for;
        end if;
        annotation (
          Documentation(info="<HTML>
<p>
This block generates an output signal y[:] by <b>linear interpolation</b> in
a table. The time points and function values are stored in a matrix
<b>table[i,j]</b>, where the first column table[:,1] contains the
time points and the other columns contain the data to be interpolated.
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Sources/CombiTimeTable.png\"
     alt=\"CombiTimeTable.png\">
</p>

<p>
Via parameter <b>columns</b> it can be defined which columns of the
table are interpolated. If, e.g., columns={2,4}, it is assumed that
2 output signals are present and that the first output is computed
by interpolation of column 2 and the second output is computed
by interpolation of column 4 of the table matrix.
The table interpolation has the following properties:
</p>
<ul>
<li>The time points need to be <b>strictly increasing</b> if smoothness
    is ContinuousDerivative, otherwise <b>monotonically increasing</b>.</li>
<li><b>Discontinuities</b> are allowed, by providing the same
    time point twice in the table. </li>
<li>Values <b>outside</b> of the table range, are computed by
    extrapolation according to the setting of parameter
    <b>extrapolation</b>:
<pre>
  extrapolation = 1: hold the first or last value of the table,
                     if outside of the table scope.
                = 2: extrapolate by using the derivative at the first/last table
                     points if outside of the table scope.
                     (If smoothness is LinearSegments or ConstantSegments
                     this means to extrapolate linearly through the first/last
                     two table points.).
                = 3: periodically repeat the table data
                     (periodical function).
                = 4: no extrapolation, i.e. extrapolation triggers an error
</pre></li>
<li>Via parameter <b>smoothness</b> it is defined how the data is interpolated:
<pre>
  smoothness = 1: linear interpolation
             = 2: smooth interpolation with Akima-splines such
                  that der(y) is continuous, also if extrapolated.
             = 3: constant segments
</pre></li>
<li>If the table has only <b>one row</b>, no interpolation is performed and
    the table values of this row are just returned.</li>
<li>Via parameters <b>startTime</b> and <b>offset</b> the curve defined
    by the table can be shifted both in time and in the ordinate value.
    The time instants stored in the table are therefore <b>relative</b>
    to <b>startTime</b>.
    If time &lt; startTime, no interpolation is performed and the offset
    is used as ordinate value for all outputs.</li>
<li>The table is implemented in a numerically sound way by
    generating <b>time events</b> at interval boundaries.
    This generates continuously differentiable values for the integrator.</li>
<li>For special applications it is sometimes needed to know the minimum
    and maximum time instant defined in the table as a parameter. For this
    reason parameters <b>t_min</b> and <b>t_max</b> are provided and can be
    accessed from the outside of the table object.</li>
</ul>
<p>
Example:
</p>
<pre>
   table = [0  0
            1  0
            1  1
            2  4
            3  9
            4 16]; extrapolation = 3 (default)
If, e.g., time = 1.0, the output y =  0.0 (before event), 1.0 (after event)
    e.g., time = 1.5, the output y =  2.5,
    e.g., time = 2.0, the output y =  4.0,
    e.g., time = 5.0, the output y = 23.0 (i.e., extrapolation via last 2 points).
</pre>
<p>
The table matrix can be defined in the following ways:
</p>
<ol>
<li> Explicitly supplied as <b>parameter matrix</b> \"table\",
     and the other parameters have the following values:
<pre>
   tableName is \"NoName\" or has only blanks,
   fileName  is \"NoName\" or has only blanks.
</pre></li>
<li> <b>Read</b> from a <b>file</b> \"fileName\" where the matrix is stored as
      \"tableName\". Both ASCII and MAT-file format is possible.
      (The ASCII format is described below).
      The MAT-file format comes in four different versions: v4, v6, v7 and v7.3.
      The library supports at least v4, v6 and v7 whereas v7.3 is optional.
      It is most convenient to generate the MAT-file from FreeMat or MATLAB&reg;
      by command
<pre>
   save tables.mat tab1 tab2 tab3
</pre>
      or Scilab by command
<pre>
   savematfile tables.mat tab1 tab2 tab3
</pre>
      when the three tables tab1, tab2, tab3 should be used from the model.<br>
      Note, a fileName can be defined as URI by using the helper function
      <a href=\"modelica://Modelica.Utilities.Files.loadResource\">loadResource</a>.</li>
<li>  Statically stored in function \"usertab\" in file \"usertab.c\".
      The matrix is identified by \"tableName\". Parameter
      fileName = \"NoName\" or has only blanks. Row-wise storage is always to be
      preferred as otherwise the table is reallocated and transposed.</li>
</ol>
<p>
When the constant \"NO_FILE_SYSTEM\" is defined, all file I/O related parts of the
source code are removed by the C-preprocessor, such that no access to files takes place.
</p>
<p>
If tables are read from an ASCII-file, the file needs to have the
following structure (\"-----\" is not part of the file content):
</p>
<pre>
-----------------------------------------------------
#1
double tab1(6,2)   # comment line
  0   0
  1   0
  1   1
  2   4
  3   9
  4  16
double tab2(6,2)   # another comment line
  0   0
  2   0
  2   2
  4   8
  6  18
  8  32
-----------------------------------------------------
</pre>
<p>
Note, that the first two characters in the file need to be
\"#1\" (a line comment defining the version number of the file format).
Afterwards, the corresponding matrix has to be declared
with type (= \"double\" or \"float\"), name and actual dimensions.
Finally, in successive rows of the file, the elements of the matrix
have to be given. The elements have to be provided as a sequence of
numbers in row-wise order (therefore a matrix row can span several
lines in the file and need not start at the beginning of a line).
Numbers have to be given according to C syntax (such as 2.3, -2, +2.e4).
Number separators are spaces, tab (\t), comma (,), or semicolon (;).
Several matrices may be defined one after another. Line comments start
with the hash symbol (#) and can appear everywhere.
Other characters, like trailing non comments, are not allowed in the file.
</p>
<p>
MATLAB is a registered trademark of The MathWorks, Inc.
</p>
</html>",     revisions="<html>
<p><b>Release Notes:</b></p>
<ul>
<li><i>April 09, 2013</i>
       by Thomas Beutlich:<br>
       Implemented as external object.</li>
<li><i>March 31, 2001</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Used CombiTableTime as a basis and added the
       arguments <b>extrapolation, columns, startTime</b>.
       This allows periodic function definitions.</li>
</ul>
</html>"),Icon(
          coordinateSystem(preserveAspectRatio=true,
            extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Polygon(visible=true,
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid,
            points={{-80.0,90.0},{-88.0,68.0},{-72.0,68.0},{-80.0,90.0}}),
          Line(visible=true,
            points={{-80.0,68.0},{-80.0,-80.0}},
            color={192,192,192}),
          Line(visible=true,
            points={{-90.0,-70.0},{82.0,-70.0}},
            color={192,192,192}),
          Polygon(visible=true,
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid,
            points={{90.0,-70.0},{68.0,-62.0},{68.0,-78.0},{90.0,-70.0}}),
          Rectangle(visible=true,
            lineColor={255,255,255},
            fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-48.0,-50.0},{2.0,70.0}}),
          Line(visible=true,
            points={{-48.0,-50.0},{-48.0,70.0},{52.0,70.0},{52.0,-50.0},{-48.0,-50.0},{-48.0,-20.0},{52.0,-20.0},{52.0,10.0},{-48.0,10.0},{-48.0,40.0},{52.0,40.0},{52.0,70.0},{2.0,70.0},{2.0,-51.0}})}),
          Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                  100,100}}), graphics={
              Polygon(
                points={{-80,90},{-88,68},{-72,68},{-80,90}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(points={{-80,68},{-80,-80}}, color={95,95,95}),
              Line(points={{-90,-70},{82,-70}}, color={95,95,95}),
              Polygon(
                points={{90,-70},{68,-62},{68,-78},{90,-70}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-20,90},{20,-30}},
                lineColor={255,255,255},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),
              Line(points={{-20,-30},{-20,90},{80,90},{80,-30},{-20,-30},{-20,0},{
                    80,0},{80,30},{-20,30},{-20,60},{80,60},{80,90},{20,90},{20,-30}},
                  color={0,0,0}),
              Text(
                extent={{-71,-42},{-32,-54}},
                lineColor={0,0,0},
                textString="offset"),
              Polygon(
                points={{-31,-30},{-33,-40},{-28,-40},{-31,-30}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-31,-70},{-34,-60},{-29,-60},{-31,-70},{-31,-70}},
                lineColor={95,95,95},
                fillColor={95,95,95},
                fillPattern=FillPattern.Solid),
              Line(points={{-31,-31},{-31,-70}}, color={95,95,95}),
              Line(points={{-20,-30},{-20,-70}}, color={95,95,95}),
              Text(
                extent={{-42,-74},{6,-84}},
                lineColor={0,0,0},
                textString="startTime"),
              Line(points={{-20,-30},{-80,-30}}, color={95,95,95}),
              Text(
                extent={{-73,93},{-44,74}},
                lineColor={0,0,0},
                textString="y"),
              Text(
                extent={{66,-81},{92,-92}},
                lineColor={0,0,0},
                textString="time"),
              Text(
                extent={{-19,83},{20,68}},
                lineColor={0,0,0},
                textString="time"),
              Text(
                extent={{21,82},{50,68}},
                lineColor={0,0,0},
                textString="y[1]"),
              Line(points={{50,90},{50,-30}}, color={0,0,0}),
              Line(points={{80,0},{100,0}}, color={0,0,255}),
              Text(
                extent={{34,-30},{71,-42}},
                textString="columns",
                lineColor={0,0,255}),
              Text(
                extent={{51,82},{80,68}},
                lineColor={0,0,0},
                textString="y[2]")}));
      end CombiTimeTable;
      annotation (Documentation(info="<HTML>
<p>
This package contains <b>source</b> components, i.e., blocks which
have only output signals. These blocks are used as signal generators
for Real, Integer and Boolean signals.
</p>

<p>
All Real source signals (with the exception of the Constant source)
have at least the following two parameters:
</p>

<table border=1 cellspacing=0 cellpadding=2>
  <tr><td valign=\"top\"><b>offset</b></td>
      <td valign=\"top\">Value which is added to the signal</td>
  </tr>
  <tr><td valign=\"top\"><b>startTime</b></td>
      <td valign=\"top\">Start time of signal. For time &lt; startTime,
                the output y is set to offset.</td>
  </tr>
</table>

<p>
The <b>offset</b> parameter is especially useful in order to shift
the corresponding source, such that at initial time the system
is stationary. To determine the corresponding value of offset,
usually requires a trimming calculation.
</p>
</html>",     revisions="<html>
<ul>
<li><i>October 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       Integer sources added. Step, TimeTable and BooleanStep slightly changed.</li>
<li><i>Nov. 8, 1999</i>
       by <a href=\"mailto:clauss@eas.iis.fhg.de\">Christoph Clau&szlig;</a>,
       <a href=\"mailto:Andre.Schneider@eas.iis.fraunhofer.de\">Andre.Schneider@eas.iis.fraunhofer.de</a>,
       <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       New sources: Exponentials, TimeTable. Trapezoid slightly enhanced
       (nperiod=-1 is an infinite number of periods).</li>
<li><i>Oct. 31, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       <a href=\"mailto:clauss@eas.iis.fhg.de\">Christoph Clau&szlig;</a>,
       <a href=\"mailto:Andre.Schneider@eas.iis.fraunhofer.de\">Andre.Schneider@eas.iis.fraunhofer.de</a>,
       All sources vectorized. New sources: ExpSine, Trapezoid,
       BooleanConstant, BooleanStep, BooleanPulse, SampleTrigger.
       Improved documentation, especially detailed description of
       signals in diagram layer.</li>
<li><i>June 29, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized a first version, based on an existing Dymola library
       of Dieter Moormann and Hilding Elmqvist.</li>
</ul>
</html>"));
    end Sources;

    package Tables
    "Library of blocks to interpolate in one and two-dimensional tables"
      extends Modelica.Icons.Package;

      block CombiTable1Ds
      "Table look-up in one dimension (matrix/file) with one input and n outputs"
        extends Modelica.Blocks.Interfaces.SIMO(final nout=size(columns, 1));
        parameter Boolean tableOnFile=false
        "= true, if table is defined on file or in function usertab"
          annotation (Dialog(group="Table data definition"));
        parameter Real table[:, :] = fill(0.0, 0, 2)
        "Table matrix (grid = first column; e.g., table=[0,2])"
          annotation (Dialog(group="Table data definition",enable=not tableOnFile));
        parameter String tableName="NoName"
        "Table name on file or in function usertab (see docu)"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter String fileName="NoName" "File where matrix is stored"
          annotation (Dialog(
            group="Table data definition",
            enable=tableOnFile,
            loadSelector(filter="Text files (*.txt);;MATLAB MAT-files (*.mat)",
                caption="Open file in which table is present")));
        parameter Boolean verboseRead=true
        "= true, if info message that file is loading is to be printed"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter Integer columns[:]=2:size(table, 2)
        "Columns of table to be interpolated"
          annotation (Dialog(group="Table data interpretation"));
        parameter Modelica.Blocks.Types.Smoothness smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments
        "Smoothness of table interpolation"
          annotation (Dialog(group="Table data interpretation"));
    protected
        Modelica.Blocks.Types.ExternalCombiTable1D tableID=
            Modelica.Blocks.Types.ExternalCombiTable1D(
              if tableOnFile then tableName else "NoName",
              if tableOnFile and fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(fileName) then fileName else "NoName",
              table,
              columns,
              smoothness) "External table object";
        parameter Real tableOnFileRead(fixed=false)
        "= 1, if table was successfully read from file";

        function readTableData
        "Read table data from ASCII text or MATLAB MAT-file"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable1D tableID;
          input Boolean forceRead = false
          "= true: Force reading of table data; = false: Only read, if not yet read.";
          input Boolean verboseRead
          "= true: Print info message; = false: No info message";
          output Real readSuccess "Table read success";
          external"C" readSuccess = ModelicaStandardTables_CombiTable1D_read(tableID, forceRead, verboseRead)
            annotation (Library={"ModelicaStandardTables"});
        end readTableData;

        function getTableValue "Interpolate 1-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable1D tableID;
          input Integer icol;
          input Real u;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTable1D_getValue(tableID, icol, u)
            annotation (Library={"ModelicaStandardTables"});
          annotation (derivative(noDerivative=tableAvailable) = getDerTableValue);
        end getTableValue;

        function getTableValueNoDer
        "Interpolate 1-dim. table defined by matrix (but do not provide a derivative function)"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable1D tableID;
          input Integer icol;
          input Real u;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTable1D_getValue(tableID, icol, u)
            annotation (Library={"ModelicaStandardTables"});
        end getTableValueNoDer;

        function getDerTableValue
        "Derivative of interpolated 1-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable1D tableID;
          input Integer icol;
          input Real u;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          input Real der_u;
          output Real der_y;
          external"C" der_y = ModelicaStandardTables_CombiTable1D_getDerValue(tableID, icol, u, der_u)
            annotation (Library={"ModelicaStandardTables"});
        end getDerTableValue;

      initial algorithm
        if tableOnFile then
          tableOnFileRead := readTableData(tableID, false, verboseRead);
        else
          tableOnFileRead := 1.;
        end if;
      equation
        if tableOnFile then
          assert(tableName <> "NoName",
            "tableOnFile = true and no table name given");
        else
          assert(size(table, 1) > 0 and size(table, 2) > 0,
            "tableOnFile = false and parameter table is an empty matrix");
        end if;
        if smoothness == Modelica.Blocks.Types.Smoothness.ConstantSegments then
          for i in 1:nout loop
            y[i] = getTableValueNoDer(tableID, i, u, tableOnFileRead);
          end for;
        else
          for i in 1:nout loop
            y[i] = getTableValue(tableID, i, u, tableOnFileRead);
          end for;
        end if;
        annotation (
          Documentation(info="<html>
<p>
<b>Linear interpolation</b> in <b>one</b> dimension of a <b>table</b>.
Via parameter <b>columns</b> it can be defined how many columns of the
table are interpolated. If, e.g., icol={2,4}, it is assumed that one input
and 2 output signals are present and that the first output interpolates
via column 2 and the second output interpolates via column 4 of the
table matrix.
</p>
<p>
The grid points and function values are stored in a matrix \"table[i,j]\",
where the first column \"table[:,1]\" contains the grid points and the
other columns contain the data to be interpolated. Example:
</p>
<pre>
   table = [0,  0;
            1,  1;
            2,  4;
            4, 16]
   If, e.g., the input u = 1.0, the output y =  1.0,
       e.g., the input u = 1.5, the output y =  2.5,
       e.g., the input u = 2.0, the output y =  4.0,
       e.g., the input u =-1.0, the output y = -1.0 (i.e., extrapolation).
</pre>
<ul>
<li> The interpolation is <b>efficient</b>, because a search for a new interpolation
     starts at the interval used in the last call.</li>
<li> If the table has only <b>one row</b>, the table value is returned,
     independent of the value of the input signal.</li>
<li> If the input signal <b>u</b> is <b>outside</b> of the defined <b>interval</b>, i.e.,
     u &gt; table[size(table,1),1] or u &lt; table[1,1], the corresponding
     value is also determined by linear
     interpolation through the last or first two points of the table.</li>
<li> The grid values (first column) have to be strictly increasing.</li>
</ul>
<p>
The table matrix can be defined in the following ways:
</p>
<ol>
<li> Explicitly supplied as <b>parameter matrix</b> \"table\",
     and the other parameters have the following values:
<pre>
   tableName is \"NoName\" or has only blanks,
   fileName  is \"NoName\" or has only blanks.
</pre></li>
<li> <b>Read</b> from a <b>file</b> \"fileName\" where the matrix is stored as
      \"tableName\". Both ASCII and MAT-file format is possible.
      (The ASCII format is described below).
      The MAT-file format comes in four different versions: v4, v6, v7 and v7.3.
      The library supports at least v4, v6 and v7 whereas v7.3 is optional.
      It is most convenient to generate the MAT-file from FreeMat or MATLAB&reg;
      by command
<pre>
   save tables.mat tab1 tab2 tab3
</pre>
      or Scilab by command
<pre>
   savematfile tables.mat tab1 tab2 tab3
</pre>
      when the three tables tab1, tab2, tab3 should be used from the model.<br>
      Note, a fileName can be defined as URI by using the helper function
      <a href=\"modelica://Modelica.Utilities.Files.loadResource\">loadResource</a>.</li>
<li>  Statically stored in function \"usertab\" in file \"usertab.c\".
      The matrix is identified by \"tableName\". Parameter
      fileName = \"NoName\" or has only blanks. Row-wise storage is always to be
      preferred as otherwise the table is reallocated and transposed.
      See the <a href=\"modelica://Modelica.Blocks.Tables\">Tables</a> package
      documentation for more details.</li>
</ol>
<p>
When the constant \"NO_FILE_SYSTEM\" is defined, all file I/O related parts of the
source code are removed by the C-preprocessor, such that no access to files takes place.
</p>
<p>
If tables are read from an ASCII-file, the file needs to have the
following structure (\"-----\" is not part of the file content):
</p>
<pre>
-----------------------------------------------------
#1
double tab1(5,2)   # comment line
  0   0
  1   1
  2   4
  3   9
  4  16
double tab2(5,2)   # another comment line
  0   0
  2   2
  4   8
  6  18
  8  32
-----------------------------------------------------
</pre>
<p>
Note, that the first two characters in the file need to be
\"#1\" (a line comment defining the version number of the file format).
Afterwards, the corresponding matrix has to be declared
with type (= \"double\" or \"float\"), name and actual dimensions.
Finally, in successive rows of the file, the elements of the matrix
have to be given. The elements have to be provided as a sequence of
numbers in row-wise order (therefore a matrix row can span several
lines in the file and need not start at the beginning of a line).
Numbers have to be given according to C syntax (such as 2.3, -2, +2.e4).
Number separators are spaces, tab (\t), comma (,), or semicolon (;).
Several matrices may be defined one after another. Line comments start
with the hash symbol (#) and can appear everywhere.
Other characters, like trailing non comments, are not allowed in the file.
</p>
<p>
MATLAB is a registered trademark of The MathWorks, Inc.
</p>
</html>"),Icon(
          coordinateSystem(preserveAspectRatio=true,
            extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Line(points={{-60.0,40.0},{-60.0,-40.0},{60.0,-40.0},{60.0,40.0},{30.0,40.0},{30.0,-40.0},{-30.0,-40.0},{-30.0,40.0},{-60.0,40.0},{-60.0,20.0},{60.0,20.0},{60.0,0.0},{-60.0,0.0},{-60.0,-20.0},{60.0,-20.0},{60.0,-40.0},{-60.0,-40.0},{-60.0,40.0},{60.0,40.0},{60.0,-40.0}}),
          Line(points={{0.0,40.0},{0.0,-40.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-60.0,20.0},{-30.0,40.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-60.0,0.0},{-30.0,20.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-60.0,-20.0},{-30.0,0.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-60.0,-40.0},{-30.0,-20.0}})}),
          Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                  100,100}}), graphics={
              Rectangle(
                extent={{-60,60},{60,-60}},
                fillColor={235,235,235},
                fillPattern=FillPattern.Solid,
                lineColor={0,0,255}),
              Line(points={{-100,0},{-58,0}}, color={0,0,255}),
              Line(points={{60,0},{100,0}}, color={0,0,255}),
              Text(
                extent={{-100,100},{100,64}},
                textString="1 dimensional linear table interpolation",
                lineColor={0,0,255}),
              Line(points={{-54,40},{-54,-40},{54,-40},{54,40},{28,40},{28,-40},{-28,
                    -40},{-28,40},{-54,40},{-54,20},{54,20},{54,0},{-54,0},{-54,-20},
                    {54,-20},{54,-40},{-54,-40},{-54,40},{54,40},{54,-40}}, color={
                    0,0,0}),
              Line(points={{0,40},{0,-40}}, color={0,0,0}),
              Rectangle(
                extent={{-54,40},{-28,20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-54,20},{-28,0}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-54,0},{-28,-20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-54,-20},{-28,-40}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-52,56},{-34,44}},
                textString="u",
                lineColor={0,0,255}),
              Text(
                extent={{-22,54},{2,42}},
                textString="y[1]",
                lineColor={0,0,255}),
              Text(
                extent={{4,54},{28,42}},
                textString="y[2]",
                lineColor={0,0,255}),
              Text(
                extent={{0,-40},{32,-54}},
                textString="columns",
                lineColor={0,0,255})}));
      end CombiTable1Ds;

      block CombiTable2D "Table look-up in two dimensions (matrix/file)"
        extends Modelica.Blocks.Interfaces.SI2SO;
        parameter Boolean tableOnFile=false
        "= true, if table is defined on file or in function usertab"
          annotation (Dialog(group="Table data definition"));
        parameter Real table[:, :] = fill(0.0, 0, 2)
        "Table matrix (grid u1 = first column, grid u2 = first row; e.g., table=[0,0;0,1])"
          annotation (Dialog(group="Table data definition",enable=not tableOnFile));
        parameter String tableName="NoName"
        "Table name on file or in function usertab (see docu)"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter String fileName="NoName" "File where matrix is stored"
          annotation (Dialog(
            group="Table data definition",
            enable=tableOnFile,
            loadSelector(filter="Text files (*.txt);;MATLAB MAT-files (*.mat)",
                caption="Open file in which table is present")));
        parameter Boolean verboseRead=true
        "= true, if info message that file is loading is to be printed"
          annotation (Dialog(group="Table data definition",enable=tableOnFile));
        parameter Modelica.Blocks.Types.Smoothness smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments
        "Smoothness of table interpolation"
          annotation (Dialog(group="Table data interpretation"));
    protected
        Modelica.Blocks.Types.ExternalCombiTable2D tableID=
            Modelica.Blocks.Types.ExternalCombiTable2D(
              if tableOnFile then tableName else "NoName",
              if tableOnFile and fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(fileName) then fileName else "NoName",
              table,
              smoothness) "External table object";
        parameter Real tableOnFileRead(fixed=false)
        "= 1, if table was successfully read from file";

        function readTableData
        "Read table data from ASCII text or MATLAB MAT-file"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable2D tableID;
          input Boolean forceRead = false
          "= true: Force reading of table data; = false: Only read, if not yet read.";
          input Boolean verboseRead
          "= true: Print info message; = false: No info message";
          output Real readSuccess "Table read success";
          external"C" readSuccess = ModelicaStandardTables_CombiTable2D_read(tableID, forceRead, verboseRead)
            annotation (Library={"ModelicaStandardTables"});
        end readTableData;

        function getTableValue "Interpolate 2-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable2D tableID;
          input Real u1;
          input Real u2;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTable2D_getValue(tableID, u1, u2)
            annotation (Library={"ModelicaStandardTables"});
          annotation (derivative(noDerivative=tableAvailable) = getDerTableValue);
        end getTableValue;

        function getTableValueNoDer
        "Interpolate 2-dim. table defined by matrix (but do not provide a derivative function)"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable2D tableID;
          input Real u1;
          input Real u2;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          output Real y;
          external"C" y = ModelicaStandardTables_CombiTable2D_getValue(tableID, u1, u2)
            annotation (Library={"ModelicaStandardTables"});
        end getTableValueNoDer;

        function getDerTableValue
        "Derivative of interpolated 2-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input Modelica.Blocks.Types.ExternalCombiTable2D tableID;
          input Real u1;
          input Real u2;
          input Real tableAvailable
          "Dummy input to ensure correct sorting of function calls";
          input Real der_u1;
          input Real der_u2;
          output Real der_y;
          external"C" der_y = ModelicaStandardTables_CombiTable2D_getDerValue(tableID, u1, u2, der_u1, der_u2)
            annotation (Library={"ModelicaStandardTables"});
        end getDerTableValue;

      initial algorithm
        if tableOnFile then
          tableOnFileRead := readTableData(tableID, false, verboseRead);
        else
          tableOnFileRead := 1.;
        end if;
      equation
        if tableOnFile then
          assert(tableName <> "NoName",
            "tableOnFile = true and no table name given");
        else
          assert(size(table, 1) > 0 and size(table, 2) > 0,
            "tableOnFile = false and parameter table is an empty matrix");
        end if;
        if smoothness == Modelica.Blocks.Types.Smoothness.ConstantSegments then
          y = getTableValueNoDer(tableID, u1, u2, tableOnFileRead);
        else
          y = getTableValue(tableID, u1, u2, tableOnFileRead);
        end if;
        annotation (
          Documentation(info="<html>
<p>
<b>Linear interpolation</b> in <b>two</b> dimensions of a <b>table</b>.
The grid points and function values are stored in a matrix \"table[i,j]\",
where:
</p>
<ul>
<li> the first column \"table[2:,1]\" contains the u[1] grid points,</li>
<li> the first row \"table[1,2:]\" contains the u[2] grid points,</li>
<li> the other rows and columns contain the data to be interpolated.</li>
</ul>
<p>
Example:
</p>
<pre>
           |       |       |       |
           |  1.0  |  2.0  |  3.0  |  // u2
       ----*-------*-------*-------*
       1.0 |  1.0  |  3.0  |  5.0  |
       ----*-------*-------*-------*
       2.0 |  2.0  |  4.0  |  6.0  |
       ----*-------*-------*-------*
     // u1
   is defined as
      table = [0.0,   1.0,   2.0,   3.0;
               1.0,   1.0,   3.0,   5.0;
               2.0,   2.0,   4.0,   6.0]
   If, e.g., the input u is [1.0;1.0], the output y is 1.0,
       e.g., the input u is [2.0;1.5], the output y is 3.0.
</pre>
<ul>
<li> The interpolation is <b>efficient</b>, because a search for a new
     interpolation starts at the interval used in the last call.</li>
<li> If the table has only <b>one element</b>, the table value is returned,
     independent of the value of the input signal.</li>
<li> If the input signal <b>u1</b> or <b>u2</b> is <b>outside</b> of the defined
     <b>interval</b>, the corresponding value is also determined by linear
     interpolation through the last or first two points of the table.</li>
<li> The grid values (first column and first row) have to be strictly
     increasing.</li>
</ul>
<p>
The table matrix can be defined in the following ways:
</p>
<ol>
<li> Explicitly supplied as <b>parameter matrix</b> \"table\",
     and the other parameters have the following values:
<pre>
   tableName is \"NoName\" or has only blanks,
   fileName  is \"NoName\" or has only blanks.
</pre></li>
<li> <b>Read</b> from a <b>file</b> \"fileName\" where the matrix is stored as
      \"tableName\". Both ASCII and MAT-file format is possible.
      (The ASCII format is described below).
      The MAT-file format comes in four different versions: v4, v6, v7 and v7.3.
      The library supports at least v4, v6 and v7 whereas v7.3 is optional.
      It is most convenient to generate the MAT-file from FreeMat or MATLAB&reg;
      by command
<pre>
   save tables.mat tab1 tab2 tab3
</pre>
      or Scilab by command
<pre>
   savematfile tables.mat tab1 tab2 tab3
</pre>
      when the three tables tab1, tab2, tab3 should be used from the model.<br>
      Note, a fileName can be defined as URI by using the helper function
      <a href=\"modelica://Modelica.Utilities.Files.loadResource\">loadResource</a>.</li>
<li>  Statically stored in function \"usertab\" in file \"usertab.c\".
      The matrix is identified by \"tableName\". Parameter
      fileName = \"NoName\" or has only blanks. Row-wise storage is always to be
      preferred as otherwise the table is reallocated and transposed.
      See the <a href=\"modelica://Modelica.Blocks.Tables\">Tables</a> package
      documentation for more details.</li>
</ol>
<p>
When the constant \"NO_FILE_SYSTEM\" is defined, all file I/O related parts of the
source code are removed by the C-preprocessor, such that no access to files takes place.
</p>
<p>
If tables are read from an ASCII-file, the file needs to have the
following structure (\"-----\" is not part of the file content):
</p>
<pre>
-----------------------------------------------------
#1
double table2D_1(3,4)   # comment line
0.0  1.0  2.0  3.0  # u[2] grid points
1.0  1.0  3.0  5.0
2.0  2.0  4.0  6.0

double table2D_2(4,4)   # comment line
0.0  1.0  2.0  3.0  # u[2] grid points
1.0  1.0  3.0  5.0
2.0  2.0  4.0  6.0
3.0  3.0  5.0  7.0
-----------------------------------------------------
</pre>
<p>
Note, that the first two characters in the file need to be
\"#1\" (a line comment defining the version number of the file format).
Afterwards, the corresponding matrix has to be declared
with type (= \"double\" or \"float\"), name and actual dimensions.
Finally, in successive rows of the file, the elements of the matrix
have to be given. The elements have to be provided as a sequence of
numbers in row-wise order (therefore a matrix row can span several
lines in the file and need not start at the beginning of a line).
Numbers have to be given according to C syntax (such as 2.3, -2, +2.e4).
Number separators are spaces, tab (\t), comma (,), or semicolon (;).
Several matrices may be defined one after another. Line comments start
with the hash symbol (#) and can appear everywhere.
Other characters, like trailing non comments, are not allowed in the file.
The matrix elements are interpreted in exactly the same way
as if the matrix is given as a parameter. For example, the first
column \"table2D_1[2:,1]\" contains the u[1] grid points,
and the first row \"table2D_1[1,2:]\" contains the u[2] grid points.
</p>

<p>
MATLAB is a registered trademark of The MathWorks, Inc.
</p>
</html>"),Icon(
          coordinateSystem(preserveAspectRatio=true,
            extent={{-100.0,-100.0},{100.0,100.0}},
            initialScale=0.1),
            graphics={
          Line(points={{-60.0,40.0},{-60.0,-40.0},{60.0,-40.0},{60.0,40.0},{30.0,40.0},{30.0,-40.0},{-30.0,-40.0},{-30.0,40.0},{-60.0,40.0},{-60.0,20.0},{60.0,20.0},{60.0,0.0},{-60.0,0.0},{-60.0,-20.0},{60.0,-20.0},{60.0,-40.0},{-60.0,-40.0},{-60.0,40.0},{60.0,40.0},{60.0,-40.0}}),
          Line(points={{0.0,40.0},{0.0,-40.0}}),
          Line(points={{-60.0,40.0},{-30.0,20.0}}),
          Line(points={{-30.0,40.0},{-60.0,20.0}}),
          Rectangle(origin={2.3077,-0.0},
            fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-62.3077,0.0},{-32.3077,20.0}}),
          Rectangle(origin={2.3077,-0.0},
            fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-62.3077,-20.0},{-32.3077,0.0}}),
          Rectangle(origin={2.3077,-0.0},
            fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-62.3077,-40.0},{-32.3077,-20.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{-30.0,20.0},{0.0,40.0}}),
          Rectangle(fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{0.0,20.0},{30.0,40.0}}),
          Rectangle(origin={-2.3077,-0.0},
            fillColor={255,215,136},
            fillPattern=FillPattern.Solid,
            extent={{32.3077,20.0},{62.3077,40.0}})}),
          Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                  100,100}}), graphics={
              Rectangle(
                extent={{-60,60},{60,-60}},
                fillColor={235,235,235},
                fillPattern=FillPattern.Solid,
                lineColor={0,0,255}),
              Line(points={{60,0},{100,0}}, color={0,0,255}),
              Text(
                extent={{-100,100},{100,64}},
                textString="2 dimensional linear table interpolation",
                lineColor={0,0,255}),
              Line(points={{-54,40},{-54,-40},{54,-40},{54,40},{28,40},{28,-40},{-28,
                    -40},{-28,40},{-54,40},{-54,20},{54,20},{54,0},{-54,0},{-54,-20},
                    {54,-20},{54,-40},{-54,-40},{-54,40},{54,40},{54,-40}}, color={
                    0,0,0}),
              Line(points={{0,40},{0,-40}}, color={0,0,0}),
              Rectangle(
                extent={{-54,20},{-28,0}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-54,0},{-28,-20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-54,-20},{-28,-40}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{-28,40},{0,20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{0,40},{28,20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Rectangle(
                extent={{28,40},{54,20}},
                lineColor={0,0,0},
                fillColor={255,255,0},
                fillPattern=FillPattern.Solid),
              Line(points={{-54,40},{-28,20}}, color={0,0,0}),
              Line(points={{-28,40},{-54,20}}, color={0,0,0}),
              Text(
                extent={{-54,-40},{-30,-56}},
                textString="u1",
                lineColor={0,0,255}),
              Text(
                extent={{28,58},{52,44}},
                textString="u2",
                lineColor={0,0,255}),
              Text(
                extent={{-2,12},{32,-22}},
                textString="y",
                lineColor={0,0,255})}));
      end CombiTable2D;
      annotation (Documentation(info="<html>
<p>This package contains blocks for one- and two-dimensional interpolation in tables. </p>
<h4>Special interest topic: Statically stored tables for real-time simulation targets</h4>
<p>Especially for use on real-time platform targets (e.g., HIL-simulators) with <b>no file system</b>, it is possible to statically
store tables using a function &quot;usertab&quot; in a file conventionally named &quot;usertab.c&quot;. This can be more efficient than providing the tables as Modelica parameter arrays.</p>
<p>This is achieved by providing the tables in a specific structure as C-code and compiling that C-code together with the rest of the simulation model into a binary
that can be executed on the target platform. The &quot;Resources/Data/Tables/&quot; subdirectory of the MSL installation directory contains the files
<a href=\"modelica://Modelica/Resources/Data/Tables/usertab.c\">&quot;usertab.c&quot;</a> and <a href=\"modelica://Modelica/Resources/Data/Tables/usertab.h\">&quot;usertab.h&quot;</a>
that can be used as a template for own developments. While &quot;usertab.c&quot; would be typically used unmodified, the
&quot;usertab.h&quot; needs to adapted for the own needs.</p>
<p>In order to work it is necessary that the compiler pulls in the &quot;usertab.c&quot; file. Different Modelica tools might provide different mechanisms to do so.
Please consult the respective documentation/support for your Modelica tool.</p>
<p>A possible (though a bit &quot;hackish&quot;) Modelica standard conformant approach is to pull in the required files by utilizing a &quot;dummy&quot;-function that uses the Modelica external function
interface to pull in the required &quot;usertab.c&quot;. An example how this can be done is given below.</p>
<pre>
model Test25_usertab \"Test utilizing the usertab.c interface\"
  extends Modelica.Icons.Example;
public
  Modelica.Blocks.Sources.RealExpression realExpression(y=getUsertab(t_new.y))
    annotation (Placement(transformation(extent={{-40,-34},{-10,-14}})));
  Modelica.Blocks.Tables.CombiTable1D t_new(tableOnFile=true, tableName=\"TestTable_1D_a\")
    annotation (Placement(transformation(extent={{-40,0},{-20,20}})));
  Modelica.Blocks.Sources.Clock clock
    annotation (Placement(transformation(extent={{-80,0},{-60,20}})));
protected
  encapsulated function getUsertab
    input Real dummy_u[:];
    output Real dummy_y;
    external \"C\" dummy_y=  mydummyfunc(dummy_u);
    annotation(IncludeDirectory=\"modelica://Modelica/Resources/Data/Tables\",
           Include = \"#include \"usertab.c\"
 double mydummyfunc(const double* dummy_in) {
        return 0;
}
\");
  end getUsertab;
equation
  connect(clock.y,t_new. u[1]) annotation (Line(
      points={{-59,10},{-42,10}},
      color={0,0,127},
      smooth=Smooth.None));
  annotation (experiment(StartTime=0, StopTime=5), uses(Modelica(version=\"3.2.1\")));
end Test25_usertab;
</pre>
</html>"),     Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
                {100,100}}), graphics={
            Rectangle(
              extent={{-76,-26},{80,-76}},
              lineColor={95,95,95},
              fillColor={235,235,235},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{-76,24},{80,-26}},
              lineColor={95,95,95},
              fillColor={235,235,235},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{-76,74},{80,24}},
              lineColor={95,95,95},
              fillColor={235,235,235},
              fillPattern=FillPattern.Solid),
            Line(
              points={{-28,74},{-28,-76}},
              color={95,95,95}),
            Line(
              points={{24,74},{24,-76}},
              color={95,95,95})}));
    end Tables;

    package Types
    "Library of constants and types with choices, especially to build menus"
      extends Modelica.Icons.TypesPackage;

      type Smoothness = enumeration(
        LinearSegments "Table points are linearly interpolated",
        ContinuousDerivative
          "Table points are interpolated such that the first derivative is continuous",

        ConstantSegments
          "Table points are not interpolated, but the value from the previous abscissa point is returned")
      "Enumeration defining the smoothness of table interpolation";

      type Extrapolation = enumeration(
        HoldLastPoint
          "Hold the first/last table point outside of the table scope",
        LastTwoPoints
          "Extrapolate by using the derivative at the first/last table points outside of the table scope",

        Periodic "Repeat the table scope periodically",
        NoExtrapolation "Extrapolation triggers an error")
      "Enumeration defining the extrapolation of time table interpolation";

      type Init = enumeration(
        NoInit
          "No initialization (start values are used as guess values with fixed=false)",

        SteadyState
          "Steady state initialization (derivatives of states are zero)",
        InitialState "Initialization with initial states",
        InitialOutput
          "Initialization with initial outputs (and steady state of the states if possible)")
      "Enumeration defining initialization of a block"   annotation (Evaluate=true,
        Documentation(info="<html>
  <p>The following initialization alternatives are available:</p>
  <dl>
    <dt><code><strong>NoInit</strong></code></dt>
      <dd>No initialization (start values are used as guess values with <code>fixed=false</code>)</dd>
    <dt><code><strong>SteadyState</strong></code></dt>
      <dd>Steady state initialization (derivatives of states are zero)</dd>
    <dt><code><strong>InitialState</strong></code></dt>
      <dd>Initialization with initial states</dd>
    <dt><code><strong>InitialOutput</strong></code></dt>
      <dd>Initialization with initial outputs (and steady state of the states if possible)</dd>
  </dl>
</html>"));

      type InitPID = enumeration(
        NoInit
          "No initialization (start values are used as guess values with fixed=false)",

        SteadyState
          "Steady state initialization (derivatives of states are zero)",
        InitialState "Initialization with initial states",
        InitialOutput
          "Initialization with initial outputs (and steady state of the states if possible)",

        DoNotUse_InitialIntegratorState
          "Don not use, only for backward compatibility (initialize only integrator state)")
      "Enumeration defining initialization of PID and LimPID blocks"   annotation (
          Evaluate=true, Documentation(info="<html>
<p>
This initialization type is identical to <a href=\"modelica://Modelica.Blocks.Types.Init\">Types.Init</a> and has just one
additional option <strong><code>DoNotUse_InitialIntegratorState</code></strong>. This option
is introduced in order that the default initialization for the
<code>Continuous.PID</code> and <code>Continuous.LimPID</code> blocks are backward
compatible. In Modelica 2.2, the integrators have been initialized
with their given states where as the D-part has not been initialized.
The option <strong><code>DoNotUse_InitialIntegratorState</code></strong> leads to this
initialization definition.
</p>

 <p>The following initialization alternatives are available:</p>
  <dl>
    <dt><code><strong>NoInit</strong></code></dt>
      <dd>No initialization (start values are used as guess values with <code>fixed=false</code>)</dd>
    <dt><code><strong>SteadyState</strong></code></dt>
      <dd>Steady state initialization (derivatives of states are zero)</dd>
    <dt><code><strong>InitialState</strong></code></dt>
      <dd>Initialization with initial states</dd>
    <dt><code><strong>InitialOutput</strong></code></dt>
      <dd>Initialization with initial outputs (and steady state of the states if possible)</dd>
    <dt><code><strong>DoNotUse_InitialIntegratorState</strong></code></dt>
      <dd>Don not use, only for backward compatibility (initialize only integrator state)</dd>
  </dl>
</html>"));

      type SimpleController = enumeration(
        P "P controller",
        PI "PI controller",
        PD "PD controller",
        PID "PID controller")
      "Enumeration defining P, PI, PD, or PID simple controller type"   annotation (
         Evaluate=true);

      class ExternalCombiTimeTable
      "External object of 1-dim. table where first column is time"
        extends ExternalObject;

        function constructor
        "Initialize 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input String tableName "Table name";
          input String fileName "File name";
          input Real table[:, :];
          input Modelica.SIunits.Time startTime;
          input Integer columns[:];
          input Modelica.Blocks.Types.Smoothness smoothness;
          input Modelica.Blocks.Types.Extrapolation extrapolation;
          output ExternalCombiTimeTable externalCombiTimeTable;
        external"C" externalCombiTimeTable =
            ModelicaStandardTables_CombiTimeTable_init(
                tableName,
                fileName,
                table,
                size(table, 1),
                size(table, 2),
                startTime,
                columns,
                size(columns, 1),
                smoothness,
                extrapolation) annotation (Library={"ModelicaStandardTables"});
        end constructor;

        function destructor "Terminate 1-dim. table where first column is time"
          extends Modelica.Icons.Function;
          input ExternalCombiTimeTable externalCombiTimeTable;
        external"C" ModelicaStandardTables_CombiTimeTable_close(
            externalCombiTimeTable) annotation (Library={"ModelicaStandardTables"});
        end destructor;

      end ExternalCombiTimeTable;

      class ExternalCombiTable1D
      "External object of 1-dim. table defined by matrix"
        extends ExternalObject;

        function constructor "Initialize 1-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input String tableName "Table name";
          input String fileName "File name";
          input Real table[:, :];
          input Integer columns[:];
          input Modelica.Blocks.Types.Smoothness smoothness;
          output ExternalCombiTable1D externalCombiTable1D;
        external"C" externalCombiTable1D = ModelicaStandardTables_CombiTable1D_init(
                tableName,
                fileName,
                table,
                size(table, 1),
                size(table, 2),
                columns,
                size(columns, 1),
                smoothness) annotation (Library={"ModelicaStandardTables"});
        end constructor;

        function destructor "Terminate 1-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input ExternalCombiTable1D externalCombiTable1D;
        external"C" ModelicaStandardTables_CombiTable1D_close(externalCombiTable1D)
            annotation (Library={"ModelicaStandardTables"});
        end destructor;

      end ExternalCombiTable1D;

      class ExternalCombiTable2D
      "External object of 2-dim. table defined by matrix"
        extends ExternalObject;

        function constructor "Initialize 2-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input String tableName "Table name";
          input String fileName "File name";
          input Real table[:, :];
          input Modelica.Blocks.Types.Smoothness smoothness;
          output ExternalCombiTable2D externalCombiTable2D;
        external"C" externalCombiTable2D = ModelicaStandardTables_CombiTable2D_init(
                tableName,
                fileName,
                table,
                size(table, 1),
                size(table, 2),
                smoothness) annotation (Library={"ModelicaStandardTables"});
        end constructor;

        function destructor "Terminate 2-dim. table defined by matrix"
          extends Modelica.Icons.Function;
          input ExternalCombiTable2D externalCombiTable2D;
        external"C" ModelicaStandardTables_CombiTable2D_close(externalCombiTable2D)
            annotation (Library={"ModelicaStandardTables"});
        end destructor;

      end ExternalCombiTable2D;
      annotation (Documentation(info="<HTML>
<p>
In this package <b>types</b>, <b>constants</b> and <b>external objects</b> are defined that are used
in library Modelica.Blocks. The types have additional annotation choices
definitions that define the menus to be built up in the graphical
user interface when the type is used as parameter in a declaration.
</p>
</HTML>"));
    end Types;

    package Icons "Icons for Blocks"
        extends Modelica.Icons.IconsPackage;

        partial block Block "Basic graphical layout of input/output block"

          annotation (
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                  100,100}}), graphics={Rectangle(
                extent={{-100,-100},{100,100}},
                lineColor={0,0,127},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid), Text(
                extent={{-150,150},{150,110}},
                textString="%name",
                lineColor={0,0,255})}),
          Documentation(info="<html>
<p>
Block that has only the basic icon for an input/output
block (no declarations, no equations). Most blocks
of package Modelica.Blocks inherit directly or indirectly
from this block.
</p>
</html>"));

        end Block;
    end Icons;
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100.0,-100.0},{100.0,100.0}}, initialScale=0.1), graphics={
        Rectangle(
          origin={0.0,35.1488},
          fillColor={255,255,255},
          extent={{-30.0,-20.1488},{30.0,20.1488}}),
        Rectangle(
          origin={0.0,-34.8512},
          fillColor={255,255,255},
          extent={{-30.0,-20.1488},{30.0,20.1488}}),
        Line(
          origin={-51.25,0.0},
          points={{21.25,-35.0},{-13.75,-35.0},{-13.75,35.0},{6.25,35.0}}),
        Polygon(
          origin={-40.0,35.0},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{10.0,0.0},{-5.0,5.0},{-5.0,-5.0}}),
        Line(
          origin={51.25,0.0},
          points={{-21.25,35.0},{13.75,35.0},{13.75,-35.0},{-6.25,-35.0}}),
        Polygon(
          origin={40.0,-35.0},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{-10.0,0.0},{5.0,5.0},{5.0,-5.0}})}), Documentation(info="<html>
<p>
This library contains input/output blocks to build up block diagrams.
</p>

<dl>
<dt><b>Main Author:</b>
<dd><a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a><br>
    Deutsches Zentrum f&uuml;r Luft und Raumfahrt e. V. (DLR)<br>
    Oberpfaffenhofen<br>
    Postfach 1116<br>
    D-82230 Wessling<br>
    email: <A HREF=\"mailto:Martin.Otter@dlr.de\">Martin.Otter@dlr.de</A><br>
</dl>
<p>
Copyright &copy; 1998-2013, Modelica Association and DLR.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</html>",   revisions="<html>
<ul>
<li><i>June 23, 2004</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Introduced new block connectors and adapted all blocks to the new connectors.
       Included subpackages Continuous, Discrete, Logical, Nonlinear from
       package ModelicaAdditions.Blocks.
       Included subpackage ModelicaAdditions.Table in Modelica.Blocks.Sources
       and in the new package Modelica.Blocks.Tables.
       Added new blocks to Blocks.Sources and Blocks.Logical.
       </li>
<li><i>October 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       New subpackage Examples, additional components.
       </li>
<li><i>June 20, 2000</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a> and
       Michael Tiller:<br>
       Introduced a replaceable signal type into
       Blocks.Interfaces.RealInput/RealOutput:
<pre>
   replaceable type SignalType = Real
</pre>
       in order that the type of the signal of an input/output block
       can be changed to a physical type, for example:
<pre>
   Sine sin1(outPort(redeclare type SignalType=Modelica.SIunits.Torque))
</pre>
      </li>
<li><i>Sept. 18, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Renamed to Blocks. New subpackages Math, Nonlinear.
       Additional components in subpackages Interfaces, Continuous
       and Sources. </li>
<li><i>June 30, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized a first version, based on an existing Dymola library
       of Dieter Moormann and Hilding Elmqvist.</li>
</ul>
</html>"));
  end Blocks;

  package Media "Library of media property models"
  extends Modelica.Icons.Package;
  import SI = Modelica.SIunits;
  import Cv = Modelica.SIunits.Conversions;

  package Interfaces "Interfaces for media models"
    extends Modelica.Icons.InterfacesPackage;

    partial package PartialMedium
    "Partial medium properties (base package of all media packages)"
      extends Modelica.Media.Interfaces.Types;
      extends Modelica.Icons.MaterialPropertiesPackage;

      // Constants to be set in Medium
      constant Modelica.Media.Interfaces.Choices.IndependentVariables
        ThermoStates "Enumeration type for independent variables";
      constant String mediumName="unusablePartialMedium" "Name of the medium";
      constant String substanceNames[:]={mediumName}
      "Names of the mixture substances. Set substanceNames={mediumName} if only one substance.";
      constant String extraPropertiesNames[:]=fill("", 0)
      "Names of the additional (extra) transported properties. Set extraPropertiesNames=fill(\"\",0) if unused";
      constant Boolean singleState
      "= true, if u and d are not a function of pressure";
      constant Boolean reducedX=true
      "= true if medium contains the equation sum(X) = 1.0; set reducedX=true if only one substance (see docu for details)";
      constant Boolean fixedX=false
      "= true if medium contains the equation X = reference_X";
      constant AbsolutePressure reference_p=101325
      "Reference pressure of Medium: default 1 atmosphere";
      constant Temperature reference_T=298.15
      "Reference temperature of Medium: default 25 deg Celsius";
      constant MassFraction reference_X[nX]=fill(1/nX, nX)
      "Default mass fractions of medium";
      constant AbsolutePressure p_default=101325
      "Default value for pressure of medium (for initialization)";
      constant Temperature T_default=Modelica.SIunits.Conversions.from_degC(20)
      "Default value for temperature of medium (for initialization)";
      constant SpecificEnthalpy h_default=specificEnthalpy_pTX(
              p_default,
              T_default,
              X_default)
      "Default value for specific enthalpy of medium (for initialization)";
      constant MassFraction X_default[nX]=reference_X
      "Default value for mass fractions of medium (for initialization)";

      final constant Integer nS=size(substanceNames, 1) "Number of substances"
        annotation (Evaluate=true);
      constant Integer nX=nS "Number of mass fractions" annotation (Evaluate=true);
      constant Integer nXi=if fixedX then 0 else if reducedX then nS - 1 else nS
      "Number of structurally independent mass fractions (see docu for details)"
        annotation (Evaluate=true);

      final constant Integer nC=size(extraPropertiesNames, 1)
      "Number of extra (outside of standard mass-balance) transported properties"
        annotation (Evaluate=true);
      constant Real C_nominal[nC](min=fill(Modelica.Constants.eps, nC)) = 1.0e-6*
        ones(nC) "Default for the nominal values for the extra properties";
      replaceable record FluidConstants =
          Modelica.Media.Interfaces.Types.Basic.FluidConstants
      "Critical, triple, molecular and other standard data of fluid";

      replaceable record ThermodynamicState
      "Minimal variable set that is available as input argument to every medium function"
        extends Modelica.Icons.Record;
      end ThermodynamicState;

      replaceable partial model BaseProperties
      "Base properties (p, d, T, h, u, R, MM and, if applicable, X and Xi) of a medium"
        InputAbsolutePressure p "Absolute pressure of medium";
        InputMassFraction[nXi] Xi(start=reference_X[1:nXi])
        "Structurally independent mass fractions";
        InputSpecificEnthalpy h "Specific enthalpy of medium";
        Density d "Density of medium";
        Temperature T "Temperature of medium";
        MassFraction[nX] X(start=reference_X)
        "Mass fractions (= (component mass)/total mass  m_i/m)";
        SpecificInternalEnergy u "Specific internal energy of medium";
        SpecificHeatCapacity R "Gas constant (of mixture if applicable)";
        MolarMass MM "Molar mass (of mixture or single fluid)";
        ThermodynamicState state
        "Thermodynamic state record for optional functions";
        parameter Boolean preferredMediumStates=false
        "= true if StateSelect.prefer shall be used for the independent property variables of the medium"
          annotation (Evaluate=true, Dialog(tab="Advanced"));
        parameter Boolean standardOrderComponents=true
        "If true, and reducedX = true, the last element of X will be computed from the other ones";
        SI.Conversions.NonSIunits.Temperature_degC T_degC=
            Modelica.SIunits.Conversions.to_degC(T)
        "Temperature of medium in [degC]";
        SI.Conversions.NonSIunits.Pressure_bar p_bar=
            Modelica.SIunits.Conversions.to_bar(p)
        "Absolute pressure of medium in [bar]";

        // Local connector definition, used for equation balancing check
        connector InputAbsolutePressure = input SI.AbsolutePressure
        "Pressure as input signal connector";
        connector InputSpecificEnthalpy = input SI.SpecificEnthalpy
        "Specific enthalpy as input signal connector";
        connector InputMassFraction = input SI.MassFraction
        "Mass fraction as input signal connector";

      equation
        if standardOrderComponents then
          Xi = X[1:nXi];

          if fixedX then
            X = reference_X;
          end if;
          if reducedX and not fixedX then
            X[nX] = 1 - sum(Xi);
          end if;
          for i in 1:nX loop
            assert(X[i] >= -1.e-5 and X[i] <= 1 + 1.e-5, "Mass fraction X[" +
              String(i) + "] = " + String(X[i]) + "of substance " +
              substanceNames[i] + "\nof medium " + mediumName +
              " is not in the range 0..1");
          end for;

        end if;

        assert(p >= 0.0, "Pressure (= " + String(p) + " Pa) of medium \"" +
          mediumName + "\" is negative\n(Temperature = " + String(T) + " K)");
        annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={Rectangle(
                extent={{-100,100},{100,-100}},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid,
                lineColor={0,0,255}), Text(
                extent={{-152,164},{152,102}},
                textString="%name",
                lineColor={0,0,255})}), Documentation(info="<html>
<p>
Model <b>BaseProperties</b> is a model within package <b>PartialMedium</b>
and contains the <b>declarations</b> of the minimum number of
variables that every medium model is supposed to support.
A specific medium inherits from model <b>BaseProperties</b> and provides
the equations for the basic properties.</p>
<p>
The BaseProperties model contains the following <b>7+nXi variables</b>
(nXi is the number of independent mass fractions defined in package
PartialMedium):
</p>
<table border=1 cellspacing=0 cellpadding=2>
  <tr><td valign=\"top\"><b>Variable</b></td>
      <td valign=\"top\"><b>Unit</b></td>
      <td valign=\"top\"><b>Description</b></td></tr>
  <tr><td valign=\"top\">T</td>
      <td valign=\"top\">K</td>
      <td valign=\"top\">temperature</td></tr>
  <tr><td valign=\"top\">p</td>
      <td valign=\"top\">Pa</td>
      <td valign=\"top\">absolute pressure</td></tr>
  <tr><td valign=\"top\">d</td>
      <td valign=\"top\">kg/m3</td>
      <td valign=\"top\">density</td></tr>
  <tr><td valign=\"top\">h</td>
      <td valign=\"top\">J/kg</td>
      <td valign=\"top\">specific enthalpy</td></tr>
  <tr><td valign=\"top\">u</td>
      <td valign=\"top\">J/kg</td>
      <td valign=\"top\">specific internal energy</td></tr>
  <tr><td valign=\"top\">Xi[nXi]</td>
      <td valign=\"top\">kg/kg</td>
      <td valign=\"top\">independent mass fractions m_i/m</td></tr>
  <tr><td valign=\"top\">R</td>
      <td valign=\"top\">J/kg.K</td>
      <td valign=\"top\">gas constant</td></tr>
  <tr><td valign=\"top\">M</td>
      <td valign=\"top\">kg/mol</td>
      <td valign=\"top\">molar mass</td></tr>
</table>
<p>
In order to implement an actual medium model, one can extend from this
base model and add <b>5 equations</b> that provide relations among
these variables. Equations will also have to be added in order to
set all the variables within the ThermodynamicState record state.</p>
<p>
If standardOrderComponents=true, the full composition vector X[nX]
is determined by the equations contained in this base class, depending
on the independent mass fraction vector Xi[nXi].</p>
<p>Additional <b>2 + nXi</b> equations will have to be provided
when using the BaseProperties model, in order to fully specify the
thermodynamic conditions. The input connector qualifier applied to
p, h, and nXi indirectly declares the number of missing equations,
permitting advanced equation balance checking by Modelica tools.
Please note that this doesn't mean that the additional equations
should be connection equations, nor that exactly those variables
should be supplied, in order to complete the model.
For further information, see the Modelica.Media User's guide, and
Section 4.7 (Balanced Models) of the Modelica 3.0 specification.</p>
</html>"));
      end BaseProperties;

      replaceable partial function setState_pTX
      "Return thermodynamic state as function of p, T and composition X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        input MassFraction X[:]=reference_X "Mass fractions";
        output ThermodynamicState state "Thermodynamic state record";
      end setState_pTX;

      replaceable partial function setState_phX
      "Return thermodynamic state as function of p, h and composition X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output ThermodynamicState state "Thermodynamic state record";
      end setState_phX;

      replaceable partial function setState_psX
      "Return thermodynamic state as function of p, s and composition X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output ThermodynamicState state "Thermodynamic state record";
      end setState_psX;

      replaceable partial function setState_dTX
      "Return thermodynamic state as function of d, T and composition X or Xi"
        extends Modelica.Icons.Function;
        input Density d "Density";
        input Temperature T "Temperature";
        input MassFraction X[:]=reference_X "Mass fractions";
        output ThermodynamicState state "Thermodynamic state record";
      end setState_dTX;

      replaceable partial function setSmoothState
      "Return thermodynamic state so that it smoothly approximates: if x > 0 then state_a else state_b"
        extends Modelica.Icons.Function;
        input Real x "m_flow or dp";
        input ThermodynamicState state_a "Thermodynamic state if x > 0";
        input ThermodynamicState state_b "Thermodynamic state if x < 0";
        input Real x_small(min=0)
        "Smooth transition in the region -x_small < x < x_small";
        output ThermodynamicState state
        "Smooth thermodynamic state for all x (continuous and differentiable)";
        annotation (Documentation(info="<html>
<p>
This function is used to approximate the equation
</p>
<pre>
    state = <b>if</b> x &gt; 0 <b>then</b> state_a <b>else</b> state_b;
</pre>

<p>
by a smooth characteristic, so that the expression is continuous and differentiable:
</p>

<pre>
   state := <b>smooth</b>(1, <b>if</b> x &gt;  x_small <b>then</b> state_a <b>else</b>
                      <b>if</b> x &lt; -x_small <b>then</b> state_b <b>else</b> f(state_a, state_b));
</pre>

<p>
This is performed by applying function <b>Media.Common.smoothStep</b>(..)
on every element of the thermodynamic state record.
</p>

<p>
If <b>mass fractions</b> X[:] are approximated with this function then this can be performed
for all <b>nX</b> mass fractions, instead of applying it for nX-1 mass fractions and computing
the last one by the mass fraction constraint sum(X)=1. The reason is that the approximating function has the
property that sum(state.X) = 1, provided sum(state_a.X) = sum(state_b.X) = 1.
This can be shown by evaluating the approximating function in the abs(x) &lt; x_small
region (otherwise state.X is either state_a.X or state_b.X):
</p>

<pre>
    X[1]  = smoothStep(x, X_a[1] , X_b[1] , x_small);
    X[2]  = smoothStep(x, X_a[2] , X_b[2] , x_small);
       ...
    X[nX] = smoothStep(x, X_a[nX], X_b[nX], x_small);
</pre>

<p>
or
</p>

<pre>
    X[1]  = c*(X_a[1]  - X_b[1])  + (X_a[1]  + X_b[1])/2
    X[2]  = c*(X_a[2]  - X_b[2])  + (X_a[2]  + X_b[2])/2;
       ...
    X[nX] = c*(X_a[nX] - X_b[nX]) + (X_a[nX] + X_b[nX])/2;
    c     = (x/x_small)*((x/x_small)^2 - 3)/4
</pre>

<p>
Summing all mass fractions together results in
</p>

<pre>
    sum(X) = c*(sum(X_a) - sum(X_b)) + (sum(X_a) + sum(X_b))/2
           = c*(1 - 1) + (1 + 1)/2
           = 1
</pre>

</html>"));
      end setSmoothState;

      replaceable partial function dynamicViscosity "Return dynamic viscosity"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output DynamicViscosity eta "Dynamic viscosity";
      end dynamicViscosity;

      replaceable partial function thermalConductivity
      "Return thermal conductivity"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output ThermalConductivity lambda "Thermal conductivity";
      end thermalConductivity;

      replaceable function prandtlNumber "Return the Prandtl number"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output PrandtlNumber Pr "Prandtl number";
      algorithm
        Pr := dynamicViscosity(state)*specificHeatCapacityCp(state)/
          thermalConductivity(state);
      end prandtlNumber;

      replaceable partial function pressure "Return pressure"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output AbsolutePressure p "Pressure";
      end pressure;

      replaceable partial function temperature "Return temperature"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output Temperature T "Temperature";
      end temperature;

      replaceable partial function density "Return density"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output Density d "Density";
      end density;

      replaceable partial function specificEnthalpy "Return specific enthalpy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificEnthalpy h "Specific enthalpy";
      end specificEnthalpy;

      replaceable partial function specificInternalEnergy
      "Return specific internal energy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificEnergy u "Specific internal energy";
      end specificInternalEnergy;

      replaceable partial function specificEntropy "Return specific entropy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificEntropy s "Specific entropy";
      end specificEntropy;

      replaceable partial function specificGibbsEnergy
      "Return specific Gibbs energy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificEnergy g "Specific Gibbs energy";
      end specificGibbsEnergy;

      replaceable partial function specificHelmholtzEnergy
      "Return specific Helmholtz energy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificEnergy f "Specific Helmholtz energy";
      end specificHelmholtzEnergy;

      replaceable partial function specificHeatCapacityCp
      "Return specific heat capacity at constant pressure"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificHeatCapacity cp
        "Specific heat capacity at constant pressure";
      end specificHeatCapacityCp;

      function heatCapacity_cp = specificHeatCapacityCp
      "Alias for deprecated name";

      replaceable partial function specificHeatCapacityCv
      "Return specific heat capacity at constant volume"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SpecificHeatCapacity cv
        "Specific heat capacity at constant volume";
      end specificHeatCapacityCv;

      function heatCapacity_cv = specificHeatCapacityCv
      "Alias for deprecated name";

      replaceable partial function isentropicExponent
      "Return isentropic exponent"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output IsentropicExponent gamma "Isentropic exponent";
      end isentropicExponent;

      replaceable partial function isentropicEnthalpy
      "Return isentropic enthalpy"
        extends Modelica.Icons.Function;
        input AbsolutePressure p_downstream "Downstream pressure";
        input ThermodynamicState refState "Reference state for entropy";
        output SpecificEnthalpy h_is "Isentropic enthalpy";
        annotation (Documentation(info="<html>
<p>
This function computes an isentropic state transformation:
</p>
<ol>
<li> A medium is in a particular state, refState.</li>
<li> The enthalpy at another state (h_is) shall be computed
     under the assumption that the state transformation from refState to h_is
     is performed with a change of specific entropy ds = 0 and the pressure of state h_is
     is p_downstream and the composition X upstream and downstream is assumed to be the same.</li>
</ol>

</html>"));
      end isentropicEnthalpy;

      replaceable partial function velocityOfSound "Return velocity of sound"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output VelocityOfSound a "Velocity of sound";
      end velocityOfSound;

      replaceable partial function isobaricExpansionCoefficient
      "Return overall the isobaric expansion coefficient beta"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output IsobaricExpansionCoefficient beta
        "Isobaric expansion coefficient";
        annotation (Documentation(info="<html>
<pre>
beta is defined as  1/v * der(v,T), with v = 1/d, at constant pressure p.
</pre>
</html>"));
      end isobaricExpansionCoefficient;

      function beta = isobaricExpansionCoefficient
      "Alias for isobaricExpansionCoefficient for user convenience";

      replaceable partial function isothermalCompressibility
      "Return overall the isothermal compressibility factor"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output SI.IsothermalCompressibility kappa "Isothermal compressibility";
        annotation (Documentation(info="<html>
<pre>

kappa is defined as - 1/v * der(v,p), with v = 1/d at constant temperature T.

</pre>
</html>"));
      end isothermalCompressibility;

      function kappa = isothermalCompressibility
      "Alias of isothermalCompressibility for user convenience";

      // explicit derivative functions for finite element models
      replaceable partial function density_derp_h
      "Return density derivative w.r.t. pressure at const specific enthalpy"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output DerDensityByPressure ddph "Density derivative w.r.t. pressure";
      end density_derp_h;

      replaceable partial function density_derh_p
      "Return density derivative w.r.t. specific enthalpy at constant pressure"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output DerDensityByEnthalpy ddhp
        "Density derivative w.r.t. specific enthalpy";
      end density_derh_p;

      replaceable partial function density_derp_T
      "Return density derivative w.r.t. pressure at const temperature"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output DerDensityByPressure ddpT "Density derivative w.r.t. pressure";
      end density_derp_T;

      replaceable partial function density_derT_p
      "Return density derivative w.r.t. temperature at constant pressure"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output DerDensityByTemperature ddTp
        "Density derivative w.r.t. temperature";
      end density_derT_p;

      replaceable partial function density_derX
      "Return density derivative w.r.t. mass fraction"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output Density[nX] dddX "Derivative of density w.r.t. mass fraction";
      end density_derX;

      replaceable partial function molarMass
      "Return the molar mass of the medium"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state record";
        output MolarMass MM "Mixture molar mass";
      end molarMass;

      replaceable function specificEnthalpy_pTX
      "Return specific enthalpy from p, T, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        input MassFraction X[:]=reference_X "Mass fractions";
        output SpecificEnthalpy h "Specific enthalpy";
      algorithm
        h := specificEnthalpy(setState_pTX(
                p,
                T,
                X));
        annotation (inverse(T=temperature_phX(
                      p,
                      h,
                      X)));
      end specificEnthalpy_pTX;

      replaceable function specificEntropy_pTX
      "Return specific enthalpy from p, T, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        input MassFraction X[:]=reference_X "Mass fractions";
        output SpecificEntropy s "Specific entropy";
      algorithm
        s := specificEntropy(setState_pTX(
                p,
                T,
                X));

        annotation (inverse(T=temperature_psX(
                      p,
                      s,
                      X)));
      end specificEntropy_pTX;

      replaceable function density_pTX "Return density from p, T, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        input MassFraction X[:] "Mass fractions";
        output Density d "Density";
      algorithm
        d := density(setState_pTX(
                p,
                T,
                X));
      end density_pTX;

      replaceable function temperature_phX
      "Return temperature from p, h, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output Temperature T "Temperature";
      algorithm
        T := temperature(setState_phX(
                p,
                h,
                X));
      end temperature_phX;

      replaceable function density_phX "Return density from p, h, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output Density d "Density";
      algorithm
        d := density(setState_phX(
                p,
                h,
                X));
      end density_phX;

      replaceable function temperature_psX
      "Return temperature from p,s, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output Temperature T "Temperature";
      algorithm
        T := temperature(setState_psX(
                p,
                s,
                X));
        annotation (inverse(s=specificEntropy_pTX(
                      p,
                      T,
                      X)));
      end temperature_psX;

      replaceable function density_psX "Return density from p, s, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output Density d "Density";
      algorithm
        d := density(setState_psX(
                p,
                s,
                X));
      end density_psX;

      replaceable function specificEnthalpy_psX
      "Return specific enthalpy from p, s, and X or Xi"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        input MassFraction X[:]=reference_X "Mass fractions";
        output SpecificEnthalpy h "Specific enthalpy";
      algorithm
        h := specificEnthalpy(setState_psX(
                p,
                s,
                X));
      end specificEnthalpy_psX;

      type MassFlowRate = SI.MassFlowRate (
          quantity="MassFlowRate." + mediumName,
          min=-1.0e5,
          max=1.e5) "Type for mass flow rate with medium specific attributes";

      // Only for backwards compatibility to version 3.2 (
      // (do not use these definitions in new models, but use Modelica.Media.Interfaces.Choices instead)
      package Choices = Modelica.Media.Interfaces.Choices annotation (obsolete=
            "Use Modelica.Media.Interfaces.Choices");

      annotation (Documentation(info="<html>
<p>
<b>PartialMedium</b> is a package and contains all <b>declarations</b> for
a medium. This means that constants, models, and functions
are defined that every medium is supposed to support
(some of them are optional). A medium package
inherits from <b>PartialMedium</b> and provides the
equations for the medium. The details of this package
are described in
<a href=\"modelica://Modelica.Media.UsersGuide\">Modelica.Media.UsersGuide</a>.
</p>
</html>",   revisions="<html>

</html>"));
    end PartialMedium;

    partial package PartialPureSubstance
    "Base class for pure substances of one chemical substance"
      extends PartialMedium(final reducedX=true, final fixedX=true);

      replaceable function setState_pT
      "Return thermodynamic state from p and T"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        output ThermodynamicState state "Thermodynamic state record";
      algorithm
        state := setState_pTX(
                p,
                T,
                fill(0, 0));
      end setState_pT;

      replaceable function setState_ph
      "Return thermodynamic state from p and h"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        output ThermodynamicState state "Thermodynamic state record";
      algorithm
        state := setState_phX(
                p,
                h,
                fill(0, 0));
      end setState_ph;

      replaceable function setState_ps
      "Return thermodynamic state from p and s"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        output ThermodynamicState state "Thermodynamic state record";
      algorithm
        state := setState_psX(
                p,
                s,
                fill(0, 0));
      end setState_ps;

      replaceable function setState_dT
      "Return thermodynamic state from d and T"
        extends Modelica.Icons.Function;
        input Density d "Density";
        input Temperature T "Temperature";
        output ThermodynamicState state "Thermodynamic state record";
      algorithm
        state := setState_dTX(
                d,
                T,
                fill(0, 0));
      end setState_dT;

      replaceable function density_ph "Return density from p and h"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        output Density d "Density";
      algorithm
        d := density_phX(
                p,
                h,
                fill(0, 0));
      end density_ph;

      replaceable function temperature_ph "Return temperature from p and h"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEnthalpy h "Specific enthalpy";
        output Temperature T "Temperature";
      algorithm
        T := temperature_phX(
                p,
                h,
                fill(0, 0));
      end temperature_ph;

      replaceable function pressure_dT "Return pressure from d and T"
        extends Modelica.Icons.Function;
        input Density d "Density";
        input Temperature T "Temperature";
        output AbsolutePressure p "Pressure";
      algorithm
        p := pressure(setState_dTX(
                d,
                T,
                fill(0, 0)));
      end pressure_dT;

      replaceable function specificEnthalpy_dT
      "Return specific enthalpy from d and T"
        extends Modelica.Icons.Function;
        input Density d "Density";
        input Temperature T "Temperature";
        output SpecificEnthalpy h "Specific enthalpy";
      algorithm
        h := specificEnthalpy(setState_dTX(
                d,
                T,
                fill(0, 0)));
      end specificEnthalpy_dT;

      replaceable function specificEnthalpy_ps
      "Return specific enthalpy from p and s"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        output SpecificEnthalpy h "Specific enthalpy";
      algorithm
        h := specificEnthalpy_psX(
                p,
                s,
                fill(0, 0));
      end specificEnthalpy_ps;

      replaceable function temperature_ps "Return temperature from p and s"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        output Temperature T "Temperature";
      algorithm
        T := temperature_psX(
                p,
                s,
                fill(0, 0));
      end temperature_ps;

      replaceable function density_ps "Return density from p and s"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input SpecificEntropy s "Specific entropy";
        output Density d "Density";
      algorithm
        d := density_psX(
                p,
                s,
                fill(0, 0));
      end density_ps;

      replaceable function specificEnthalpy_pT
      "Return specific enthalpy from p and T"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        output SpecificEnthalpy h "Specific enthalpy";
      algorithm
        h := specificEnthalpy_pTX(
                p,
                T,
                fill(0, 0));
      end specificEnthalpy_pT;

      replaceable function density_pT "Return density from p and T"
        extends Modelica.Icons.Function;
        input AbsolutePressure p "Pressure";
        input Temperature T "Temperature";
        output Density d "Density";
      algorithm
        d := density(setState_pTX(
                p,
                T,
                fill(0, 0)));
      end density_pT;

      redeclare replaceable partial model extends BaseProperties(final
          standardOrderComponents=true)
      end BaseProperties;
    end PartialPureSubstance;

    partial package PartialMixtureMedium
    "Base class for pure substances of several chemical substances"
      extends PartialMedium(redeclare replaceable record FluidConstants =
            Modelica.Media.Interfaces.Types.IdealGas.FluidConstants);

      redeclare replaceable record extends ThermodynamicState
      "Thermodynamic state variables"
        AbsolutePressure p "Absolute pressure of medium";
        Temperature T "Temperature of medium";
        MassFraction X[nX]
        "Mass fractions (= (component mass)/total mass  m_i/m)";
      end ThermodynamicState;

      constant FluidConstants[nS] fluidConstants "Constant data for the fluid";

      replaceable function gasConstant
      "Return the gas constant of the mixture (also for liquids)"
        extends Modelica.Icons.Function;
        input ThermodynamicState state "Thermodynamic state";
        output SI.SpecificHeatCapacity R "Mixture gas constant";
      end gasConstant;

      function moleToMassFractions
      "Return mass fractions X from mole fractions"
        extends Modelica.Icons.Function;
        input SI.MoleFraction moleFractions[:] "Mole fractions of mixture";
        input MolarMass[:] MMX "Molar masses of components";
        output SI.MassFraction X[size(moleFractions, 1)]
        "Mass fractions of gas mixture";
    protected
        MolarMass Mmix=moleFractions*MMX "Molar mass of mixture";
      algorithm
        for i in 1:size(moleFractions, 1) loop
          X[i] := moleFractions[i]*MMX[i]/Mmix;
        end for;
        annotation (smoothOrder=5);
      end moleToMassFractions;

      function massToMoleFractions
      "Return mole fractions from mass fractions X"
        extends Modelica.Icons.Function;
        input SI.MassFraction X[:] "Mass fractions of mixture";
        input SI.MolarMass[:] MMX "Molar masses of components";
        output SI.MoleFraction moleFractions[size(X, 1)]
        "Mole fractions of gas mixture";
    protected
        Real invMMX[size(X, 1)] "Inverses of molar weights";
        SI.MolarMass Mmix "Molar mass of mixture";
      algorithm
        for i in 1:size(X, 1) loop
          invMMX[i] := 1/MMX[i];
        end for;
        Mmix := 1/(X*invMMX);
        for i in 1:size(X, 1) loop
          moleFractions[i] := Mmix*X[i]/MMX[i];
        end for;
        annotation (smoothOrder=5);
      end massToMoleFractions;

    end PartialMixtureMedium;

    partial package PartialCondensingGases
    "Base class for mixtures of condensing and non-condensing gases"
      extends PartialMixtureMedium(ThermoStates=Modelica.Media.Interfaces.Choices.IndependentVariables.pTX);

      replaceable partial function saturationPressure
      "Return saturation pressure of condensing fluid"
        extends Modelica.Icons.Function;
        input Temperature Tsat "Saturation temperature";
        output AbsolutePressure psat "Saturation pressure";
      end saturationPressure;

      replaceable partial function enthalpyOfVaporization
      "Return vaporization enthalpy of condensing fluid"
        extends Modelica.Icons.Function;
        input Temperature T "Temperature";
        output SpecificEnthalpy r0 "Vaporization enthalpy";
      end enthalpyOfVaporization;

      replaceable partial function enthalpyOfLiquid
      "Return liquid enthalpy of condensing fluid"
        extends Modelica.Icons.Function;
        input Temperature T "Temperature";
        output SpecificEnthalpy h "Liquid enthalpy";
      end enthalpyOfLiquid;

      replaceable partial function enthalpyOfGas
      "Return enthalpy of non-condensing gas mixture"
        extends Modelica.Icons.Function;
        input Temperature T "Temperature";
        input MassFraction[:] X "Vector of mass fractions";
        output SpecificEnthalpy h "Specific enthalpy";
      end enthalpyOfGas;

      replaceable partial function enthalpyOfCondensingGas
      "Return enthalpy of condensing gas (most often steam)"
        extends Modelica.Icons.Function;
        input Temperature T "Temperature";
        output SpecificEnthalpy h "Specific enthalpy";
      end enthalpyOfCondensingGas;

      replaceable partial function enthalpyOfNonCondensingGas
      "Return enthalpy of the non-condensing species"
        extends Modelica.Icons.Function;
        input Temperature T "Temperature";
        output SpecificEnthalpy h "Specific enthalpy";
      end enthalpyOfNonCondensingGas;
    end PartialCondensingGases;

    package Choices "Types, constants to define menu choices"
      extends Modelica.Icons.Package;

      type IndependentVariables = enumeration(
        T "Temperature",
        pT "Pressure, Temperature",
        ph "Pressure, Specific Enthalpy",
        phX "Pressure, Specific Enthalpy, Mass Fraction",
        pTX "Pressure, Temperature, Mass Fractions",
        dTX "Density, Temperature, Mass Fractions")
      "Enumeration defining the independent variables of a medium";

      type ReferenceEnthalpy = enumeration(
        ZeroAt0K
          "The enthalpy is 0 at 0 K (default), if the enthalpy of formation is excluded",

        ZeroAt25C
          "The enthalpy is 0 at 25 degC, if the enthalpy of formation is excluded",

        UserDefined
          "The user-defined reference enthalpy is used at 293.15 K (25 degC)")
      "Enumeration defining the reference enthalpy of a medium"   annotation (
          Evaluate=true);
      annotation (Documentation(info="<html>
<p>
Enumerations and data types for all types of fluids
</p>

<p>
Note: Reference enthalpy might have to be extended with enthalpy of formation.
</p>
</html>"));
    end Choices;

    package Types "Types to be used in fluid models"
      extends Modelica.Icons.Package;

      type AbsolutePressure = SI.AbsolutePressure (
          min=0,
          max=1.e8,
          nominal=1.e5,
          start=1.e5)
      "Type for absolute pressure with medium specific attributes";

      type Density = SI.Density (
          min=0,
          max=1.e5,
          nominal=1,
          start=1) "Type for density with medium specific attributes";

      type DynamicViscosity = SI.DynamicViscosity (
          min=0,
          max=1.e8,
          nominal=1.e-3,
          start=1.e-3)
      "Type for dynamic viscosity with medium specific attributes";

      type MassFraction = Real (
          quantity="MassFraction",
          final unit="kg/kg",
          min=0,
          max=1,
          nominal=0.1) "Type for mass fraction with medium specific attributes";

      type MoleFraction = Real (
          quantity="MoleFraction",
          final unit="mol/mol",
          min=0,
          max=1,
          nominal=0.1) "Type for mole fraction with medium specific attributes";

      type MolarMass = SI.MolarMass (
          min=0.001,
          max=0.25,
          nominal=0.032) "Type for molar mass with medium specific attributes";

      type MolarVolume = SI.MolarVolume (
          min=1e-6,
          max=1.0e6,
          nominal=1.0) "Type for molar volume with medium specific attributes";

      type IsentropicExponent = SI.RatioOfSpecificHeatCapacities (
          min=1,
          max=500000,
          nominal=1.2,
          start=1.2)
      "Type for isentropic exponent with medium specific attributes";

      type SpecificEnergy = SI.SpecificEnergy (
          min=-1.0e8,
          max=1.e8,
          nominal=1.e6)
      "Type for specific energy with medium specific attributes";

      type SpecificInternalEnergy = SpecificEnergy
      "Type for specific internal energy with medium specific attributes";

      type SpecificEnthalpy = SI.SpecificEnthalpy (
          min=-1.0e10,
          max=1.e10,
          nominal=1.e6)
      "Type for specific enthalpy with medium specific attributes";

      type SpecificEntropy = SI.SpecificEntropy (
          min=-1.e7,
          max=1.e7,
          nominal=1.e3)
      "Type for specific entropy with medium specific attributes";

      type SpecificHeatCapacity = SI.SpecificHeatCapacity (
          min=0,
          max=1.e7,
          nominal=1.e3,
          start=1.e3)
      "Type for specific heat capacity with medium specific attributes";

      type Temperature = SI.Temperature (
          min=1,
          max=1.e4,
          nominal=300,
          start=300) "Type for temperature with medium specific attributes";

      type ThermalConductivity = SI.ThermalConductivity (
          min=0,
          max=500,
          nominal=1,
          start=1)
      "Type for thermal conductivity with medium specific attributes";

      type PrandtlNumber = SI.PrandtlNumber (
          min=1e-3,
          max=1e5,
          nominal=1.0)
      "Type for Prandtl number with medium specific attributes";

      type VelocityOfSound = SI.Velocity (
          min=0,
          max=1.e5,
          nominal=1000,
          start=1000)
      "Type for velocity of sound with medium specific attributes";

      type IsobaricExpansionCoefficient = Real (
          min=0,
          max=1.0e8,
          unit="1/K")
      "Type for isobaric expansion coefficient with medium specific attributes";

      type DipoleMoment = Real (
          min=0.0,
          max=2.0,
          unit="debye",
          quantity="ElectricDipoleMoment")
      "Type for dipole moment with medium specific attributes";

      type DerDensityByPressure = SI.DerDensityByPressure
      "Type for partial derivative of density with respect to pressure with medium specific attributes";

      type DerDensityByEnthalpy = SI.DerDensityByEnthalpy
      "Type for partial derivative of density with respect to enthalpy with medium specific attributes";

      type DerDensityByTemperature = SI.DerDensityByTemperature
      "Type for partial derivative of density with respect to temperature with medium specific attributes";

      package Basic
      "The most basic version of a record used in several degrees of detail"
        extends Icons.Package;

        record FluidConstants
        "Critical, triple, molecular and other standard data of fluid"
          extends Modelica.Icons.Record;
          String iupacName
          "Complete IUPAC name (or common name, if non-existent)";
          String casRegistryNumber
          "Chemical abstracts sequencing number (if it exists)";
          String chemicalFormula
          "Chemical formula, (brutto, nomenclature according to Hill";
          String structureFormula "Chemical structure formula";
          MolarMass molarMass "Molar mass";
        end FluidConstants;
      end Basic;

      package IdealGas
      "The ideal gas version of a record used in several degrees of detail"
        extends Icons.Package;

        record FluidConstants "Extended fluid constants"
          extends Modelica.Media.Interfaces.Types.Basic.FluidConstants;
          Temperature criticalTemperature "Critical temperature";
          AbsolutePressure criticalPressure "Critical pressure";
          MolarVolume criticalMolarVolume "Critical molar Volume";
          Real acentricFactor "Pitzer acentric factor";
          //   Temperature triplePointTemperature "Triple point temperature";
          //   AbsolutePressure triplePointPressure "Triple point pressure";
          Temperature meltingPoint "Melting point at 101325 Pa";
          Temperature normalBoilingPoint "Normal boiling point (at 101325 Pa)";
          DipoleMoment dipoleMoment
          "Dipole moment of molecule in Debye (1 debye = 3.33564e10-30 C.m)";
          Boolean hasIdealGasHeatCapacity=false
          "True if ideal gas heat capacity is available";
          Boolean hasCriticalData=false "True if critical data are known";
          Boolean hasDipoleMoment=false "True if a dipole moment known";
          Boolean hasFundamentalEquation=false "True if a fundamental equation";
          Boolean hasLiquidHeatCapacity=false
          "True if liquid heat capacity is available";
          Boolean hasSolidHeatCapacity=false
          "True if solid heat capacity is available";
          Boolean hasAccurateViscosityData=false
          "True if accurate data for a viscosity function is available";
          Boolean hasAccurateConductivityData=false
          "True if accurate data for thermal conductivity is available";
          Boolean hasVapourPressureCurve=false
          "True if vapour pressure data, e.g., Antoine coefficents are known";
          Boolean hasAcentricFactor=false
          "True if Pitzer accentric factor is known";
          SpecificEnthalpy HCRIT0=0.0
          "Critical specific enthalpy of the fundamental equation";
          SpecificEntropy SCRIT0=0.0
          "Critical specific entropy of the fundamental equation";
          SpecificEnthalpy deltah=0.0
          "Difference between specific enthalpy model (h_m) and f.eq. (h_f) (h_m - h_f)";
          SpecificEntropy deltas=0.0
          "Difference between specific enthalpy model (s_m) and f.eq. (s_f) (s_m - s_f)";
        end FluidConstants;
      end IdealGas;
    end Types;
    annotation (Documentation(info="<HTML>
<p>
This package provides basic interfaces definitions of media models for different
kind of media.
</p>
</HTML>"));
  end Interfaces;

  package Common
    "Data structures and fundamental functions for fluid properties"
    extends Modelica.Icons.Package;

    function smoothStep
    "Approximation of a general step, such that the characteristic is continuous and differentiable"
      extends Modelica.Icons.Function;
      input Real x "Abscissa value";
      input Real y1 "Ordinate value for x > 0";
      input Real y2 "Ordinate value for x < 0";
      input Real x_small(min=0) = 1e-5
      "Approximation of step for -x_small <= x <= x_small; x_small > 0 required";
      output Real y
      "Ordinate value to approximate y = if x > 0 then y1 else y2";
    algorithm
      y := smooth(1, if x > x_small then y1 else if x < -x_small then y2 else if
        abs(x_small) > 0 then (x/x_small)*((x/x_small)^2 - 3)*(y2 - y1)/4 + (y1
         + y2)/2 else (y1 + y2)/2);

      annotation (
        Inline=true,
        smoothOrder=1,
        Documentation(revisions="<html>
<ul>
<li><i>April 29, 2008</i>
    by <a href=\"mailto:Martin.Otter@DLR.de\">Martin Otter</a>:<br>
    Designed and implemented.</li>
<li><i>August 12, 2008</i>
    by <a href=\"mailto:Michael.Sielemann@dlr.de\">Michael Sielemann</a>:<br>
    Minor modification to cover the limit case <code>x_small -> 0</code> without division by zero.</li>
</ul>
</html>",   info="<html>
<p>
This function is used to approximate the equation
</p>
<pre>
    y = <b>if</b> x &gt; 0 <b>then</b> y1 <b>else</b> y2;
</pre>

<p>
by a smooth characteristic, so that the expression is continuous and differentiable:
</p>

<pre>
   y = <b>smooth</b>(1, <b>if</b> x &gt;  x_small <b>then</b> y1 <b>else</b>
                 <b>if</b> x &lt; -x_small <b>then</b> y2 <b>else</b> f(y1, y2));
</pre>

<p>
In the region -x_small &lt; x &lt; x_small a 2nd order polynomial is used
for a smooth transition from y1 to y2.
</p>

<p>
If <b>mass fractions</b> X[:] are approximated with this function then this can be performed
for all <b>nX</b> mass fractions, instead of applying it for nX-1 mass fractions and computing
the last one by the mass fraction constraint sum(X)=1. The reason is that the approximating function has the
property that sum(X) = 1, provided sum(X_a) = sum(X_b) = 1
(and y1=X_a[i], y2=X_b[i]).
This can be shown by evaluating the approximating function in the abs(x) &lt; x_small
region (otherwise X is either X_a or X_b):
</p>

<pre>
    X[1]  = smoothStep(x, X_a[1] , X_b[1] , x_small);
    X[2]  = smoothStep(x, X_a[2] , X_b[2] , x_small);
       ...
    X[nX] = smoothStep(x, X_a[nX], X_b[nX], x_small);
</pre>

<p>
or
</p>

<pre>
    X[1]  = c*(X_a[1]  - X_b[1])  + (X_a[1]  + X_b[1])/2
    X[2]  = c*(X_a[2]  - X_b[2])  + (X_a[2]  + X_b[2])/2;
       ...
    X[nX] = c*(X_a[nX] - X_b[nX]) + (X_a[nX] + X_b[nX])/2;
    c     = (x/x_small)*((x/x_small)^2 - 3)/4
</pre>

<p>
Summing all mass fractions together results in
</p>

<pre>
    sum(X) = c*(sum(X_a) - sum(X_b)) + (sum(X_a) + sum(X_b))/2
           = c*(1 - 1) + (1 + 1)/2
           = 1
</pre>
</html>"));
    end smoothStep;

    package OneNonLinearEquation
    "Determine solution of a non-linear algebraic equation in one unknown without derivatives in a reliable and efficient way"
      extends Modelica.Icons.Package;

      replaceable record f_nonlinear_Data
      "Data specific for function f_nonlinear"
        extends Modelica.Icons.Record;
      end f_nonlinear_Data;

      replaceable partial function f_nonlinear
      "Nonlinear algebraic equation in one unknown: y = f_nonlinear(x,p,X)"
        extends Modelica.Icons.Function;
        input Real x "Independent variable of function";
        input Real p=0.0
        "Disregarded variables (here always used for pressure)";
        input Real[:] X=fill(0, 0)
        "Disregarded variables (her always used for composition)";
        input f_nonlinear_Data f_nonlinear_data
        "Additional data for the function";
        output Real y "= f_nonlinear(x)";
        // annotation(derivative(zeroDerivative=y)); // this must hold for all replaced functions
      end f_nonlinear;

      replaceable function solve
      "Solve f_nonlinear(x_zero)=y_zero; f_nonlinear(x_min) - y_zero and f_nonlinear(x_max)-y_zero must have different sign"
        import Modelica.Utilities.Streams.error;
        extends Modelica.Icons.Function;
        input Real y_zero
        "Determine x_zero, such that f_nonlinear(x_zero) = y_zero";
        input Real x_min "Minimum value of x";
        input Real x_max "Maximum value of x";
        input Real pressure=0.0
        "Disregarded variables (here always used for pressure)";
        input Real[:] X=fill(0, 0)
        "Disregarded variables (here always used for composition)";
        input f_nonlinear_Data f_nonlinear_data
        "Additional data for function f_nonlinear";
        input Real x_tol=100*Modelica.Constants.eps
        "Relative tolerance of the result";
        output Real x_zero "f_nonlinear(x_zero) = y_zero";
    protected
        constant Real eps=Modelica.Constants.eps "Machine epsilon";
        constant Real x_eps=1e-10
        "Slight modification of x_min, x_max, since x_min, x_max are usually exactly at the borders T_min/h_min and then small numeric noise may make the interval invalid";
        Real x_min2=x_min - x_eps;
        Real x_max2=x_max + x_eps;
        Real a=x_min2 "Current best minimum interval value";
        Real b=x_max2 "Current best maximum interval value";
        Real c "Intermediate point a <= c <= b";
        Real d;
        Real e "b - a";
        Real m;
        Real s;
        Real p;
        Real q;
        Real r;
        Real tol;
        Real fa "= f_nonlinear(a) - y_zero";
        Real fb "= f_nonlinear(b) - y_zero";
        Real fc;
        Boolean found=false;
      algorithm
        // Check that f(x_min) and f(x_max) have different sign
        fa := f_nonlinear(
                x_min2,
                pressure,
                X,
                f_nonlinear_data) - y_zero;
        fb := f_nonlinear(
                x_max2,
                pressure,
                X,
                f_nonlinear_data) - y_zero;
        fc := fb;
        if fa > 0.0 and fb > 0.0 or fa < 0.0 and fb < 0.0 then
          error(
            "The arguments x_min and x_max to OneNonLinearEquation.solve(..)\n"
             + "do not bracket the root of the single non-linear equation:\n" +
            "  x_min  = " + String(x_min2) + "\n" + "  x_max  = " + String(x_max2)
             + "\n" + "  y_zero = " + String(y_zero) + "\n" +
            "  fa = f(x_min) - y_zero = " + String(fa) + "\n" +
            "  fb = f(x_max) - y_zero = " + String(fb) + "\n" +
            "fa and fb must have opposite sign which is not the case");
        end if;

        // Initialize variables
        c := a;
        fc := fa;
        e := b - a;
        d := e;

        // Search loop
        while not found loop
          if abs(fc) < abs(fb) then
            a := b;
            b := c;
            c := a;
            fa := fb;
            fb := fc;
            fc := fa;
          end if;

          tol := 2*eps*abs(b) + x_tol;
          m := (c - b)/2;

          if abs(m) <= tol or fb == 0.0 then
            // root found (interval is small enough)
            found := true;
            x_zero := b;
          else
            // Determine if a bisection is needed
            if abs(e) < tol or abs(fa) <= abs(fb) then
              e := m;
              d := e;
            else
              s := fb/fa;
              if a == c then
                // linear interpolation
                p := 2*m*s;
                q := 1 - s;
              else
                // inverse quadratic interpolation
                q := fa/fc;
                r := fb/fc;
                p := s*(2*m*q*(q - r) - (b - a)*(r - 1));
                q := (q - 1)*(r - 1)*(s - 1);
              end if;

              if p > 0 then
                q := -q;
              else
                p := -p;
              end if;

              s := e;
              e := d;
              if 2*p < 3*m*q - abs(tol*q) and p < abs(0.5*s*q) then
                // interpolation successful
                d := p/q;
              else
                // use bi-section
                e := m;
                d := e;
              end if;
            end if;

            // Best guess value is defined as "a"
            a := b;
            fa := fb;
            b := b + (if abs(d) > tol then d else if m > 0 then tol else -tol);
            fb := f_nonlinear(
                    b,
                    pressure,
                    X,
                    f_nonlinear_data) - y_zero;

            if fb > 0 and fc > 0 or fb < 0 and fc < 0 then
              // initialize variables
              c := a;
              fc := fa;
              e := b - a;
              d := e;
            end if;
          end if;
        end while;
      end solve;

      annotation (Documentation(info="<html>
<p>
This function should currently only be used in Modelica.Media,
since it might be replaced in the future by another strategy,
where the tool is responsible for the solution of the non-linear
equation.
</p>

<p>
This library determines the solution of one non-linear algebraic equation \"y=f(x)\"
in one unknown \"x\" in a reliable way. As input, the desired value y of the
non-linear function has to be given, as well as an interval x_min, x_max that
contains the solution, i.e., \"f(x_min) - y\" and \"f(x_max) - y\" must
have a different sign. If possible, a smaller interval is computed by
inverse quadratic interpolation (interpolating with a quadratic polynomial
through the last 3 points and computing the zero). If this fails,
bisection is used, which always reduces the interval by a factor of 2.
The inverse quadratic interpolation method has superlinear convergence.
This is roughly the same convergence rate as a globally convergent Newton
method, but without the need to compute derivatives of the non-linear
function. The solver function is a direct mapping of the Algol 60 procedure
\"zero\" to Modelica, from:
</p>

<dl>
<dt> Brent R.P.:</dt>
<dd> <b>Algorithms for Minimization without derivatives</b>.
     Prentice Hall, 1973, pp. 58-59.</dd>
</dl>

<p>
Due to current limitations of the
Modelica language (not possible to pass a function reference to a function),
the construction to use this solver on a user-defined function is a bit
complicated (this method is from Hans Olsson, Dassault Syst&egrave;mes AB). A user has to
provide a package in the following way:
</p>

<pre>
  <b>package</b> MyNonLinearSolver
    <b>extends</b> OneNonLinearEquation;

    <b>redeclare record extends</b> Data
      // Define data to be passed to user function
      ...
    <b>end</b> Data;

    <b>redeclare function extends</b> f_nonlinear
    <b>algorithm</b>
       // Compute the non-linear equation: y = f(x, Data)
    <b>end</b> f_nonlinear;

    // Dummy definition that has to be present for current Dymola
    <b>redeclare function extends</b> solve
    <b>end</b> solve;
  <b>end</b> MyNonLinearSolver;

  x_zero = MyNonLinearSolver.solve(y_zero, x_min, x_max, data=data);
</pre>
</html>"));
    end OneNonLinearEquation;
    annotation (Documentation(info="<HTML><h4>Package description</h4>
      <p>Package Modelica.Media.Common provides records and functions shared by many of the property sub-packages.
      High accuracy fluid property models share a lot of common structure, even if the actual models are different.
      Common data structures and computations shared by these property models are collected in this library.
   </p>

</html>",   revisions="<html>
      <ul>
      <li>First implemented: <i>July, 2000</i>
      by <a href=\"http://www.control.lth.se/~hubertus/\">Hubertus Tummescheit</a>
      for the ThermoFluid Library with help from Jonas Eborn and Falko Jens Wagner
      </li>
      <li>Code reorganization, enhanced documentation, additional functions: <i>December, 2002</i>
      by <a href=\"http://www.control.lth.se/~hubertus/\">Hubertus Tummescheit</a> and move to Modelica
                            properties library.</li>
      <li>Inclusion into Modelica.Media: September 2003 </li>
      </ul>

      <address>Author: Hubertus Tummescheit, <br>
      Lund University<br>
      Department of Automatic Control<br>
      Box 118, 22100 Lund, Sweden<br>
      email: hubertus@control.lth.se
      </address>
</html>"));
  end Common;

    package Air "Medium models for air"
        extends Modelica.Icons.VariantsPackage;

        package MoistAir "Air: Moist air model (190 ... 647 K)"
          extends Interfaces.PartialCondensingGases(
            mediumName="Moist air",
            substanceNames={"water","air"},
            final reducedX=true,
            final singleState=false,
            reference_X={0.01,0.99},
            fluidConstants={IdealGases.Common.FluidData.H2O,IdealGases.Common.FluidData.N2},
            Temperature(min=190, max=647));
          import Modelica.Media.IdealGases.Common.Functions;

          constant Integer Water=1
          "Index of water (in substanceNames, massFractions X, etc.)";

          constant Integer Air=2
          "Index of air (in substanceNames, massFractions X, etc.)";

          constant Real k_mair=steam.MM/dryair.MM "Ratio of molar weights";

          constant IdealGases.Common.DataRecord dryair=IdealGases.Common.SingleGasesData.Air;

          constant IdealGases.Common.DataRecord steam=IdealGases.Common.SingleGasesData.H2O;

          constant SI.MolarMass[2] MMX={steam.MM,dryair.MM}
          "Molar masses of components";
          import Modelica.Media.Interfaces;
          import Modelica.Math;
          import Modelica.Constants;
          import Modelica.Media.IdealGases.Common.SingleGasNasa;
          import Modelica.Media.Interfaces.Choices.ReferenceEnthalpy;

          redeclare record extends ThermodynamicState
          "ThermodynamicState record for moist air"
          end ThermodynamicState;

          redeclare replaceable model extends BaseProperties(
            T(stateSelect=if preferredMediumStates then StateSelect.prefer else
                  StateSelect.default),
            p(stateSelect=if preferredMediumStates then StateSelect.prefer else
                  StateSelect.default),
            Xi(each stateSelect=if preferredMediumStates then StateSelect.prefer
                   else StateSelect.default),
            final standardOrderComponents=true)
          "Moist air base properties record"

            /* p, T, X = X[Water] are used as preferred states, since only then all
     other quantities can be computed in a recursive sequence.
     If other variables are selected as states, static state selection
     is no longer possible and non-linear algebraic equations occur.
      */
            MassFraction x_water "Mass of total water/mass of dry air";
            Real phi "Relative humidity";

        protected
            MassFraction X_liquid "Mass fraction of liquid or solid water";
            MassFraction X_steam "Mass fraction of steam water";
            MassFraction X_air "Mass fraction of air";
            MassFraction X_sat
            "Steam water mass fraction of saturation boundary in kg_water/kg_moistair";
            MassFraction x_sat
            "Steam water mass content of saturation boundary in kg_water/kg_dryair";
            AbsolutePressure p_steam_sat "partial saturation pressure of steam";
          equation
            assert(T >= 190 and T <= 647, "
Temperature T is not in the allowed range
190.0 K <= (T ="       + String(T) + " K) <= 647.0 K
required from medium model \""       + mediumName + "\".");
            MM = 1/(Xi[Water]/MMX[Water] + (1.0 - Xi[Water])/MMX[Air]);

            p_steam_sat = min(saturationPressure(T), 0.999*p);
            X_sat = min(p_steam_sat*k_mair/max(100*Constants.eps, p - p_steam_sat)*(1
               - Xi[Water]), 1.0)
            "Water content at saturation with respect to actual water content";
            X_liquid = max(Xi[Water] - X_sat, 0.0);
            X_steam = Xi[Water] - X_liquid;
            X_air = 1 - Xi[Water];

            h = specificEnthalpy_pTX(
                  p,
                  T,
                  Xi);
            R = dryair.R*(X_air/(1 - X_liquid)) + steam.R*X_steam/(1 - X_liquid);
            //
            u = h - R*T;
            d = p/(R*T);
            /* Note, u and d are computed under the assumption that the volume of the liquid
         water is negligible with respect to the volume of air and of steam
      */
            state.p = p;
            state.T = T;
            state.X = X;

            // these x are per unit mass of DRY air!
            x_sat = k_mair*p_steam_sat/max(100*Constants.eps, p - p_steam_sat);
            x_water = Xi[Water]/max(X_air, 100*Constants.eps);
            phi = p/p_steam_sat*Xi[Water]/(Xi[Water] + k_mair*X_air);
            annotation (Documentation(info="<html>
<p>This model computes thermodynamic properties of moist air from three independent (thermodynamic or/and numerical) state variables. Preferred numerical states are temperature T, pressure p and the reduced composition vector Xi, which contains the water mass fraction only. As an EOS the <b>ideal gas law</b> is used and associated restrictions apply. The model can also be used in the <b>fog region</b>, when moisture is present in its liquid state. However, it is assumed that the liquid water volume is negligible compared to that of the gas phase. Computation of thermal properties is based on property data of <a href=\"modelica://Modelica.Media.Air.DryAirNasa\"> dry air</a> and water (source: VDI-W&auml;rmeatlas), respectively. Besides the standard thermodynamic variables <b>absolute and relative humidity</b>, x_water and phi, respectively, are given by the model. Upper case X denotes absolute humidity with respect to mass of moist air while absolute humidity with respect to mass of dry air only is denoted by a lower case x throughout the model. See <a href=\"modelica://Modelica.Media.Air.MoistAir\">package description</a> for further information.</p>
</html>"));
          end BaseProperties;

          redeclare function setState_pTX
          "Return thermodynamic state as function of pressure p, temperature T and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input Temperature T "Temperature";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state "Thermodynamic state";
          algorithm
            state := if size(X, 1) == nX then ThermodynamicState(
                  p=p,
                  T=T,
                  X=X) else ThermodynamicState(
                  p=p,
                  T=T,
                  X=cat(
                    1,
                    X,
                    {1 - sum(X)}));
            annotation (smoothOrder=2, Documentation(info="<html>
The <a href=\"modelica://Modelica.Media.Air.MoistAir.ThermodynamicState\">thermodynamic state record</a> is computed from pressure p, temperature T and composition X.
</html>"));
          end setState_pTX;

          redeclare function setState_phX
          "Return thermodynamic state as function of pressure p, specific enthalpy h and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input SpecificEnthalpy h "Specific enthalpy";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state "Thermodynamic state";
          algorithm
            state := if size(X, 1) == nX then ThermodynamicState(
                  p=p,
                  T=T_phX(
                    p,
                    h,
                    X),
                  X=X) else ThermodynamicState(
                  p=p,
                  T=T_phX(
                    p,
                    h,
                    X),
                  X=cat(
                    1,
                    X,
                    {1 - sum(X)}));
            annotation (smoothOrder=2, Documentation(info="<html>
The <a href=\"modelica://Modelica.Media.Air.MoistAir.ThermodynamicState\">thermodynamic state record</a> is computed from pressure p, specific enthalpy h and composition X.
</html>"));
          end setState_phX;

          redeclare function setState_dTX
          "Return thermodynamic state as function of density d, temperature T and composition X"
            extends Modelica.Icons.Function;
            input Density d "Density";
            input Temperature T "Temperature";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state "Thermodynamic state";
          algorithm
            state := if size(X, 1) == nX then ThermodynamicState(
                  p=d*({steam.R,dryair.R}*X)*T,
                  T=T,
                  X=X) else ThermodynamicState(
                  p=d*({steam.R,dryair.R}*cat(
                    1,
                    X,
                    {1 - sum(X)}))*T,
                  T=T,
                  X=cat(
                    1,
                    X,
                    {1 - sum(X)}));
            annotation (smoothOrder=2, Documentation(info="<html>
The <a href=\"modelica://Modelica.Media.Air.MoistAir.ThermodynamicState\">thermodynamic state record</a> is computed from density d, temperature T and composition X.
</html>"));
          end setState_dTX;

          redeclare function extends setSmoothState
          "Return thermodynamic state so that it smoothly approximates: if x > 0 then state_a else state_b"
          algorithm
            state := ThermodynamicState(
                  p=Media.Common.smoothStep(
                    x,
                    state_a.p,
                    state_b.p,
                    x_small),
                  T=Media.Common.smoothStep(
                    x,
                    state_a.T,
                    state_b.T,
                    x_small),
                  X=Media.Common.smoothStep(
                    x,
                    state_a.X,
                    state_b.X,
                    x_small));
          end setSmoothState;

          redeclare function extends gasConstant
          "Return ideal gas constant as a function from thermodynamic state, only valid for phi<1"

          algorithm
            R := dryair.R*(1 - state.X[Water]) + steam.R*state.X[Water];
            annotation (smoothOrder=2, Documentation(info="<html>
The ideal gas constant for moist air is computed from <a href=\"modelica://Modelica.Media.Air.MoistAir.ThermodynamicState\">thermodynamic state</a> assuming that all water is in the gas phase.
</html>"));
          end gasConstant;

          function saturationPressureLiquid
          "Return saturation pressure of water as a function of temperature T in the range of 273.16 to 647.096 K"

            extends Modelica.Icons.Function;
            input SI.Temperature Tsat "Saturation temperature";
            output SI.AbsolutePressure psat "Saturation pressure";
        protected
            SI.Temperature Tcritical=647.096 "Critical temperature";
            SI.AbsolutePressure pcritical=22.064e6 "Critical pressure";
            Real r1=(1 - Tsat/Tcritical) "Common subexpression";
            Real a[:]={-7.85951783,1.84408259,-11.7866497,22.6807411,-15.9618719,
                1.80122502} "Coefficients a[:]";
            Real n[:]={1.0,1.5,3.0,3.5,4.0,7.5} "Coefficients n[:]";
          algorithm
            psat := exp(((a[1]*r1^n[1] + a[2]*r1^n[2] + a[3]*r1^n[3] + a[4]*r1^n[4]
               + a[5]*r1^n[5] + a[6]*r1^n[6])*Tcritical)/Tsat)*pcritical;
            annotation (
              derivative=saturationPressureLiquid_der,
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
<p>Saturation pressure of water above the triple point temperature is computed from temperature. </p>
<p>Source: A Saul, W Wagner: &quot;International equations for the saturation properties of ordinary water substance&quot;, equation 2.1 </p>
</html>"));
          end saturationPressureLiquid;

          function saturationPressureLiquid_der
          "Derivative function for 'saturationPressureLiquid'"

            extends Modelica.Icons.Function;
            input SI.Temperature Tsat "Saturation temperature";
            input Real dTsat(unit="K/s") "Saturation temperature derivative";
            output Real psat_der(unit="Pa/s") "Saturation pressure derivative";
        protected
            SI.Temperature Tcritical=647.096 "Critical temperature";
            SI.AbsolutePressure pcritical=22.064e6 "Critical pressure";
            Real r1=(1 - Tsat/Tcritical) "Common subexpression 1";
            Real r1_der=-1/Tcritical*dTsat
            "Derivative of common subexpression 1";
            Real a[:]={-7.85951783,1.84408259,-11.7866497,22.6807411,-15.9618719,
                1.80122502} "Coefficients a[:]";
            Real n[:]={1.0,1.5,3.0,3.5,4.0,7.5} "Coefficients n[:]";
            Real r2=(a[1]*r1^n[1] + a[2]*r1^n[2] + a[3]*r1^n[3] + a[4]*r1^n[4] + a[5]
                *r1^n[5] + a[6]*r1^n[6]) "Common subexpression 2";
          algorithm
            // Approach used here is based on Baehr: "Thermodynamik", 12th edition p.204ff, "Method of Wagner"
            //psat := exp(((a[1]*r1^n[1] + a[2]*r1^n[2] + a[3]*r1^n[3] + a[4]*r1^n[4] + a[5]*r1^n[5] + a[6]*r1^n[6])*Tcritical)/Tsat) * pcritical;
            psat_der := exp((r2*Tcritical)/Tsat)*pcritical*((a[1]*(r1^(n[1] - 1)*n[1]
              *r1_der) + a[2]*(r1^(n[2] - 1)*n[2]*r1_der) + a[3]*(r1^(n[3] - 1)*n[3]*
              r1_der) + a[4]*(r1^(n[4] - 1)*n[4]*r1_der) + a[5]*(r1^(n[5] - 1)*n[5]*
              r1_der) + a[6]*(r1^(n[6] - 1)*n[6]*r1_der))*Tcritical/Tsat - r2*
              Tcritical*dTsat/Tsat^2);
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
<p>Saturation pressure of water above the triple point temperature is computed from temperature. </p>
<p>Source: A Saul, W Wagner: &quot;International equations for the saturation properties of ordinary water substance&quot;, equation 2.1 </p>
</html>"));
          end saturationPressureLiquid_der;

          function sublimationPressureIce
          "Return sublimation pressure of water as a function of temperature T between 190 and 273.16 K"

            extends Modelica.Icons.Function;
            input SI.Temperature Tsat "Sublimation temperature";
            output SI.AbsolutePressure psat "Sublimation pressure";
        protected
            SI.Temperature Ttriple=273.16 "Triple point temperature";
            SI.AbsolutePressure ptriple=611.657 "Triple point pressure";
            Real r1=Tsat/Ttriple "Common subexpression";
            Real a[:]={-13.9281690,34.7078238} "Coefficients a[:]";
            Real n[:]={-1.5,-1.25} "Coefficients n[:]";
          algorithm
            psat := exp(a[1] - a[1]*r1^n[1] + a[2] - a[2]*r1^n[2])*ptriple;
            annotation (
              Inline=false,
              smoothOrder=5,
              derivative=sublimationPressureIce_der,
              Documentation(info="<html>
<p>Sublimation pressure of water below the triple point temperature is computed from temperature.</p>
<p>Source: W Wagner, A Saul, A Pruss: &quot;International equations for the pressure along the melting and along the sublimation curve of ordinary water substance&quot;, equation 3.5</p>
</html>"));
          end sublimationPressureIce;

          function sublimationPressureIce_der
          "Derivative function for 'sublimationPressureIce'"

            extends Modelica.Icons.Function;
            input SI.Temperature Tsat "Sublimation temperature";
            input Real dTsat(unit="K/s") "Sublimation temperature derivative";
            output Real psat_der(unit="Pa/s") "Sublimation pressure derivative";
        protected
            SI.Temperature Ttriple=273.16 "Triple point temperature";
            SI.AbsolutePressure ptriple=611.657 "Triple point pressure";
            Real r1=Tsat/Ttriple "Common subexpression 1";
            Real r1_der=dTsat/Ttriple "Derivative of common subexpression 1";
            Real a[:]={-13.9281690,34.7078238} "Coefficients a[:]";
            Real n[:]={-1.5,-1.25} "Coefficients n[:]";
          algorithm
            //psat := exp(a[1] - a[1]*r1^n[1] + a[2] - a[2]*r1^n[2]) * ptriple;
            psat_der := exp(a[1] - a[1]*r1^n[1] + a[2] - a[2]*r1^n[2])*ptriple*(-(a[1]
              *(r1^(n[1] - 1)*n[1]*r1_der)) - (a[2]*(r1^(n[2] - 1)*n[2]*r1_der)));
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
<p>Sublimation pressure of water below the triple point temperature is computed from temperature.</p>
<p>Source: W Wagner, A Saul, A Pruss: &quot;International equations for the pressure along the melting and along the sublimation curve of ordinary water substance&quot;, equation 3.5</p>
</html>"));
          end sublimationPressureIce_der;

          redeclare function extends saturationPressure
          "Return saturation pressure of water as a function of temperature T between 190 and 647.096 K"

          algorithm
            psat := Utilities.spliceFunction(
                  saturationPressureLiquid(Tsat),
                  sublimationPressureIce(Tsat),
                  Tsat - 273.16,
                  1.0);
            annotation (
              Inline=false,
              smoothOrder=5,
              derivative=saturationPressure_der,
              Documentation(info="<html>
Saturation pressure of water in the liquid and the solid region is computed using correlations. Functions for the
<a href=\"modelica://Modelica.Media.Air.MoistAir.sublimationPressureIce\">solid</a> and the <a href=\"modelica://Modelica.Media.Air.MoistAir.saturationPressureLiquid\"> liquid</a> region, respectively, are combined using the first derivative continuous <a href=\"modelica://Modelica.Media.Air.MoistAir.Utilities.spliceFunction\">spliceFunction</a>. This functions range of validity is from 190 to 647.096 K. For more information on the type of correlation used, see the documentation of the linked functions.
</html>"));
          end saturationPressure;

          function saturationPressure_der
          "Derivative function for 'saturationPressure'"
            extends Modelica.Icons.Function;
            input Temperature Tsat "Saturation temperature";
            input Real dTsat(unit="K/s")
            "Time derivative of saturation temperature";
            output Real psat_der(unit="Pa/s") "Saturation pressure";

          algorithm
            /*psat := Utilities.spliceFunction(saturationPressureLiquid(Tsat),sublimationPressureIce(Tsat),Tsat-273.16,1.0);*/
            psat_der := Utilities.spliceFunction_der(
                  saturationPressureLiquid(Tsat),
                  sublimationPressureIce(Tsat),
                  Tsat - 273.16,
                  1.0,
                  saturationPressureLiquid_der(Tsat=Tsat, dTsat=dTsat),
                  sublimationPressureIce_der(Tsat=Tsat, dTsat=dTsat),
                  dTsat,
                  0);
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
Derivative function of <a href=\"modelica://Modelica.Media.Air.MoistAir.saturationPressure\">saturationPressure</a>
</html>"));
          end saturationPressure_der;

          redeclare function extends enthalpyOfVaporization
          "Return enthalpy of vaporization of water as a function of temperature T, 273.16 to 647.096 K"

        protected
            Real Tcritical=647.096 "Critical temperature";
            Real dcritical=322 "Critical density";
            Real pcritical=22.064e6 "Critical pressure";
            Real n[:]={1,1.5,3,3.5,4,7.5} "Powers in equation (1)";
            Real a[:]={-7.85951783,1.84408259,-11.7866497,22.6807411,-15.9618719,
                1.80122502} "Coefficients in equation (1) of [1]";
            Real m[:]={1/3,2/3,5/3,16/3,43/3,110/3} "Powers in equation (2)";
            Real b[:]={1.99274064,1.09965342,-0.510839303,-1.75493479,-45.5170352,-6.74694450e5}
            "Coefficients in equation (2) of [1]";
            Real o[:]={2/6,4/6,8/6,18/6,37/6,71/6} "Powers in equation (3)";
            Real c[:]={-2.03150240,-2.68302940,-5.38626492,-17.2991605,-44.7586581,-63.9201063}
            "Coefficients in equation (3) of [1]";
            Real tau=1 - T/Tcritical "Temperature expression";
            Real r1=(a[1]*Tcritical*tau^n[1])/T + (a[2]*Tcritical*tau^n[2])/T + (a[3]
                *Tcritical*tau^n[3])/T + (a[4]*Tcritical*tau^n[4])/T + (a[5]*
                Tcritical*tau^n[5])/T + (a[6]*Tcritical*tau^n[6])/T
            "Expression 1";
            Real r2=a[1]*n[1]*tau^n[1] + a[2]*n[2]*tau^n[2] + a[3]*n[3]*tau^n[3] + a[
                4]*n[4]*tau^n[4] + a[5]*n[5]*tau^n[5] + a[6]*n[6]*tau^n[6]
            "Expression 2";
            Real dp=dcritical*(1 + b[1]*tau^m[1] + b[2]*tau^m[2] + b[3]*tau^m[3] + b[
                4]*tau^m[4] + b[5]*tau^m[5] + b[6]*tau^m[6])
            "Density of saturated liquid";
            Real dpp=dcritical*exp(c[1]*tau^o[1] + c[2]*tau^o[2] + c[3]*tau^o[3] + c[
                4]*tau^o[4] + c[5]*tau^o[5] + c[6]*tau^o[6])
            "Density of saturated vapor";
          algorithm
            r0 := -(((dp - dpp)*exp(r1)*pcritical*(r2 + r1*tau))/(dp*dpp*tau))
            "Difference of equations (7) and (6)";
            annotation (
              smoothOrder=2,
              Documentation(info="<html>
<p>Enthalpy of vaporization of water is computed from temperature in the region of 273.16 to 647.096 K.</p>
<p>Source: W Wagner, A Pruss: \"International equations for the saturation properties of ordinary water substance. Revised according to the international temperature scale of 1990\" (1993).</p>
</html>"));
          end enthalpyOfVaporization;

          redeclare function extends enthalpyOfLiquid
          "Return enthalpy of liquid water as a function of temperature T(use enthalpyOfWater instead)"

          algorithm
            h := (T - 273.15)*1e3*(4.2166 - 0.5*(T - 273.15)*(0.0033166 + 0.333333*(T
               - 273.15)*(0.00010295 - 0.25*(T - 273.15)*(1.3819e-6 + 0.2*(T - 273.15)
              *7.3221e-9))));
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
Specific enthalpy of liquid water is computed from temperature using a polynomial approach. Kept for compatibility reasons, better use <a href=\"modelica://Modelica.Media.Air.MoistAir.enthalpyOfWater\">enthalpyOfWater</a> instead.
</html>"));
          end enthalpyOfLiquid;

          redeclare function extends enthalpyOfGas
          "Return specific enthalpy of gas (air and steam) as a function of temperature T and composition X"

          algorithm
            h := Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5)*X[Water] +
              Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684)*(1.0 - X[Water]);
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
Specific enthalpy of moist air is computed from temperature, provided all water is in the gaseous state. The first entry in the composition vector X must be the mass fraction of steam. For a function that also covers the fog region please refer to <a href=\"modelica://Modelica.Media.Air.MoistAir.h_pTX\">h_pTX</a>.
</html>"));
          end enthalpyOfGas;

          redeclare function extends enthalpyOfCondensingGas
          "Return specific enthalpy of steam as a function of temperature T"

          algorithm
            h := Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5);
            annotation (
              Inline=false,
              smoothOrder=5,
              Documentation(info="<html>
Specific enthalpy of steam is computed from temperature.
</html>"));
          end enthalpyOfCondensingGas;

          redeclare function extends enthalpyOfNonCondensingGas
          "Return specific enthalpy of dry air as a function of temperature T"

          algorithm
            h := Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684);
            annotation (
              Inline=false,
              smoothOrder=1,
              Documentation(info="<html>
Specific enthalpy of dry air is computed from temperature.
</html>"));
          end enthalpyOfNonCondensingGas;

          function enthalpyOfWater
          "Computes specific enthalpy of water (solid/liquid) near atmospheric pressure from temperature T"
            extends Modelica.Icons.Function;
            input SIunits.Temperature T "Temperature";
            output SIunits.SpecificEnthalpy h "Specific enthalpy of water";
          algorithm
            /*simple model assuming constant properties:
  heat capacity of liquid water:4200 J/kg
  heat capacity of solid water: 2050 J/kg
  enthalpy of fusion (liquid=>solid): 333000 J/kg*/

            h := Utilities.spliceFunction(
                  4200*(T - 273.15),
                  2050*(T - 273.15) - 333000,
                  T - 273.16,
                  0.1);
            annotation (derivative=enthalpyOfWater_der, Documentation(info="<html>
Specific enthalpy of water (liquid and solid) is computed from temperature using constant properties as follows:<br>
<ul>
<li>  heat capacity of liquid water:4200 J/kg
<li>  heat capacity of solid water: 2050 J/kg
<li>  enthalpy of fusion (liquid=>solid): 333000 J/kg
</ul>
Pressure is assumed to be around 1 bar. This function is usually used to determine the specific enthalpy of the liquid or solid fraction of moist air.
</html>"));
          end enthalpyOfWater;

          function enthalpyOfWater_der "Derivative function of enthalpyOfWater"
            extends Modelica.Icons.Function;
            input SIunits.Temperature T "Temperature";
            input Real dT(unit="K/s") "Time derivative of temperature";
            output Real dh(unit="J/(kg.s)")
            "Time derivative of specific enthalpy";
          algorithm
            /*simple model assuming constant properties:
  heat capacity of liquid water:4200 J/kg
  heat capacity of solid water: 2050 J/kg
  enthalpy of fusion (liquid=>solid): 333000 J/kg*/

            //h:=Utilities.spliceFunction(4200*(T-273.15),2050*(T-273.15)-333000,T-273.16,0.1);
            dh := Utilities.spliceFunction_der(
                  4200*(T - 273.15),
                  2050*(T - 273.15) - 333000,
                  T - 273.16,
                  0.1,
                  4200*dT,
                  2050*dT,
                  dT,
                  0);
            annotation (Documentation(info="<html>
Derivative function for <a href=\"modelica://Modelica.Media.Air.MoistAir.enthalpyOfWater\">enthalpyOfWater</a>.

</html>"));
          end enthalpyOfWater_der;

          redeclare function extends pressure
          "Returns pressure of ideal gas as a function of the thermodynamic state record"

          algorithm
            p := state.p;
            annotation (smoothOrder=2, Documentation(info="<html>
Pressure is returned from the thermodynamic state record input as a simple assignment.
</html>"));
          end pressure;

          redeclare function extends temperature
          "Return temperature of ideal gas as a function of the thermodynamic state record"

          algorithm
            T := state.T;
            annotation (smoothOrder=2, Documentation(info="<html>
Temperature is returned from the thermodynamic state record input as a simple assignment.
</html>"));
          end temperature;

          function T_phX
          "Return temperature as a function of pressure p, specific enthalpy h and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input SpecificEnthalpy h "Specific enthalpy";
            input MassFraction[:] X "Mass fractions of composition";
            output Temperature T "Temperature";

        protected
            package Internal
            "Solve h(data,T) for T with given h (use only indirectly via temperature_phX)"
              extends Modelica.Media.Common.OneNonLinearEquation;
              redeclare record extends f_nonlinear_Data
              "Data to be passed to non-linear function"
                extends Modelica.Media.IdealGases.Common.DataRecord;
              end f_nonlinear_Data;

              redeclare function extends f_nonlinear
              algorithm
                y := h_pTX(
                          p,
                          x,
                          X);
              end f_nonlinear;

              // Dummy definition has to be added for current Dymola
              redeclare function extends solve
              end solve;
            end Internal;

          algorithm
            T := Internal.solve(
                  h,
                  190,
                  647,
                  p,
                  X[1:nXi],
                  steam);
            annotation (Documentation(info="<html>
Temperature is computed from pressure, specific enthalpy and composition via numerical inversion of function <a href=\"modelica://Modelica.Media.Air.MoistAir.h_pTX\">h_pTX</a>.
</html>"));
          end T_phX;

          redeclare function extends density
          "Returns density of ideal gas as a function of the thermodynamic state record"

          algorithm
            d := state.p/(gasConstant(state)*state.T);
            annotation (smoothOrder=2, Documentation(info="<html>
Density is computed from pressure, temperature and composition in the thermodynamic state record applying the ideal gas law.
</html>"));
          end density;

          redeclare function extends specificEnthalpy
          "Return specific enthalpy of moist air as a function of the thermodynamic state record"

          algorithm
            h := h_pTX(
                  state.p,
                  state.T,
                  state.X);
            annotation (smoothOrder=2, Documentation(info="<html>
Specific enthalpy of moist air is computed from the thermodynamic state record. The fog region is included for both, ice and liquid fog.
</html>"));
          end specificEnthalpy;

          function h_pTX
          "Return specific enthalpy of moist air as a function of pressure p, temperature T and composition X"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            output SI.SpecificEnthalpy h "Specific enthalpy at p, T, X";
        protected
            SI.AbsolutePressure p_steam_sat
            "partial saturation pressure of steam";
            SI.MassFraction X_sat
            "Absolute humidity per unit mass of moist air";
            SI.MassFraction X_liquid "Mass fraction of liquid water";
            SI.MassFraction X_steam "Mass fraction of steam water";
            SI.MassFraction X_air "Mass fraction of air";
          algorithm
            p_steam_sat := saturationPressure(T);
            //p_steam_sat :=min(saturationPressure(T), 0.999*p);
            X_sat := min(p_steam_sat*k_mair/max(100*Constants.eps, p - p_steam_sat)*(
              1 - X[Water]), 1.0);
            X_liquid := max(X[Water] - X_sat, 0.0);
            X_steam := X[Water] - X_liquid;
            X_air := 1 - X[Water];
            /* h        := {SingleGasNasa.h_Tlow(data=steam,  T=T, refChoice=ReferenceEnthalpy.UserDefined, h_off=46479.819+2501014.5),
               SingleGasNasa.h_Tlow(data=dryair, T=T, refChoice=ReferenceEnthalpy.UserDefined, h_off=25104.684)}*
    {X_steam, X_air} + enthalpyOfLiquid(T)*X_liquid;*/
            h := {Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5),
              Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684)}*{X_steam,X_air} + enthalpyOfWater(T)*X_liquid;
            annotation (
              derivative=h_pTX_der,
              Inline=false,
              Documentation(info="<html>
Specific enthalpy of moist air is computed from pressure, temperature and composition with X[1] as the total water mass fraction. The fog region is included for both, ice and liquid fog.
</html>"));
          end h_pTX;

          function h_pTX_der "Derivative function of h_pTX"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            input Real dp(unit="Pa/s") "Pressure derivative";
            input Real dT(unit="K/s") "Temperature derivative";
            input Real dX[:](each unit="1/s") "Composition derivative";
            output Real h_der(unit="J/(kg.s)")
            "Time derivative of specific enthalpy";
        protected
            SI.AbsolutePressure p_steam_sat
            "partial saturation pressure of steam";
            SI.MassFraction X_sat
            "Absolute humidity per unit mass of moist air";
            SI.MassFraction X_liquid "Mass fraction of liquid water";
            SI.MassFraction X_steam "Mass fraction of steam water";
            SI.MassFraction X_air "Mass fraction of air";
            SI.MassFraction x_sat
            "Absolute humidity per unit mass of dry air at saturation";
            Real dX_steam(unit="1/s") "Time derivative of steam mass fraction";
            Real dX_air(unit="1/s") "Time derivative of dry air mass fraction";
            Real dX_liq(unit="1/s")
            "Time derivative of liquid/solid water mass fraction";
            Real dps(unit="Pa/s") "Time derivative of saturation pressure";
            Real dx_sat(unit="1/s")
            "Time derivative of absolute humidity per unit mass of dry air";
          algorithm
            p_steam_sat := saturationPressure(T);
            x_sat := p_steam_sat*k_mair/max(100*Modelica.Constants.eps, p -
              p_steam_sat);
            X_sat := min(x_sat*(1 - X[Water]), 1.0);
            X_liquid := Utilities.smoothMax(
                  X[Water] - X_sat,
                  0.0,
                  1e-5);
            X_steam := X[Water] - X_liquid;
            X_air := 1 - X[Water];

            dX_air := -dX[Water];
            dps := saturationPressure_der(Tsat=T, dTsat=dT);
            dx_sat := k_mair*(dps*(p - p_steam_sat) - p_steam_sat*(dp - dps))/(p -
              p_steam_sat)/(p - p_steam_sat);
            dX_liq := Utilities.smoothMax_der(
                  X[Water] - X_sat,
                  0.0,
                  1e-5,
                  (1 + x_sat)*dX[Water] - (1 - X[Water])*dx_sat,
                  0,
                  0);
            dX_steam := dX[Water] - dX_liq;

            h_der := X_steam*Modelica.Media.IdealGases.Common.Functions.h_Tlow_der(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5,
                  dT=dT) + dX_steam*Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5) + X_air*
              Modelica.Media.IdealGases.Common.Functions.h_Tlow_der(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684,
                  dT=dT) + dX_air*Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684) + X_liquid*enthalpyOfWater_der(T=T, dT=dT) +
              dX_liq*enthalpyOfWater(T);

            annotation (
              Inline=false,
              smoothOrder=1,
              Documentation(info="<html>
Derivative function for <a href=\"modelica://Modelica.Media.Air.MoistAir.h_pTX\">h_pTX</a>.
</html>"));
          end h_pTX_der;

          redeclare function extends isentropicExponent
          "Return isentropic exponent (only for gas fraction!)"
          algorithm
            gamma := specificHeatCapacityCp(state)/specificHeatCapacityCv(state);
          end isentropicExponent;

          redeclare function extends specificInternalEnergy
          "Return specific internal energy of moist air as a function of the thermodynamic state record"
            extends Modelica.Icons.Function;
            output SI.SpecificInternalEnergy u "Specific internal energy";
          algorithm
            u := specificInternalEnergy_pTX(
                  state.p,
                  state.T,
                  state.X);

            annotation (smoothOrder=2, Documentation(info="<html>
Specific internal energy is determined from the thermodynamic state record, assuming that the liquid or solid water volume is negligible.
</html>"));
          end specificInternalEnergy;

          function specificInternalEnergy_pTX
          "Return specific internal energy of moist air as a function of pressure p, temperature T and composition X"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            output SI.SpecificInternalEnergy u "Specific internal energy";
        protected
            SI.AbsolutePressure p_steam_sat
            "partial saturation pressure of steam";
            SI.MassFraction X_liquid "Mass fraction of liquid water";
            SI.MassFraction X_steam "Mass fraction of steam water";
            SI.MassFraction X_air "Mass fraction of air";
            SI.MassFraction X_sat
            "Absolute humidity per unit mass of moist air";
            Real R_gas "Ideal gas constant";
          algorithm
            p_steam_sat := saturationPressure(T);
            X_sat := min(p_steam_sat*k_mair/max(100*Constants.eps, p - p_steam_sat)*(
              1 - X[Water]), 1.0);
            X_liquid := max(X[Water] - X_sat, 0.0);
            X_steam := X[Water] - X_liquid;
            X_air := 1 - X[Water];
            R_gas := dryair.R*X_air/(1 - X_liquid) + steam.R*X_steam/(1 - X_liquid);
            u := X_steam*Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5) + X_air*
              Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684) + enthalpyOfWater(T)*X_liquid - R_gas*T;

            annotation (derivative=specificInternalEnergy_pTX_der, Documentation(info=
                   "<html>
Specific internal energy is determined from pressure p, temperature T and composition X, assuming that the liquid or solid water volume is negligible.
</html>"));
          end specificInternalEnergy_pTX;

          function specificInternalEnergy_pTX_der
          "Derivative function for specificInternalEnergy_pTX"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            input Real dp(unit="Pa/s") "Pressure derivative";
            input Real dT(unit="K/s") "Temperature derivative";
            input Real dX[:](each unit="1/s") "Mass fraction derivatives";
            output Real u_der(unit="J/(kg.s)")
            "Specific internal energy derivative";
        protected
            SI.AbsolutePressure p_steam_sat
            "partial saturation pressure of steam";
            SI.MassFraction X_liquid "Mass fraction of liquid water";
            SI.MassFraction X_steam "Mass fraction of steam water";
            SI.MassFraction X_air "Mass fraction of air";
            SI.MassFraction X_sat
            "Absolute humidity per unit mass of moist air";
            SI.SpecificHeatCapacity R_gas "Ideal gas constant";

            SI.MassFraction x_sat
            "Absolute humidity per unit mass of dry air at saturation";
            Real dX_steam(unit="1/s") "Time derivative of steam mass fraction";
            Real dX_air(unit="1/s") "Time derivative of dry air mass fraction";
            Real dX_liq(unit="1/s")
            "Time derivative of liquid/solid water mass fraction";
            Real dps(unit="Pa/s") "Time derivative of saturation pressure";
            Real dx_sat(unit="1/s")
            "Time derivative of absolute humidity per unit mass of dry air";
            Real dR_gas(unit="J/(kg.K.s)")
            "Time derivative of ideal gas constant";
          algorithm
            p_steam_sat := saturationPressure(T);
            x_sat := p_steam_sat*k_mair/max(100*Modelica.Constants.eps, p -
              p_steam_sat);
            X_sat := min(x_sat*(1 - X[Water]), 1.0);
            X_liquid := Utilities.spliceFunction(
                  X[Water] - X_sat,
                  0.0,
                  X[Water] - X_sat,
                  1e-6);
            X_steam := X[Water] - X_liquid;
            X_air := 1 - X[Water];
            R_gas := steam.R*X_steam/(1 - X_liquid) + dryair.R*X_air/(1 - X_liquid);

            dX_air := -dX[Water];
            dps := saturationPressure_der(Tsat=T, dTsat=dT);
            dx_sat := k_mair*(dps*(p - p_steam_sat) - p_steam_sat*(dp - dps))/(p -
              p_steam_sat)/(p - p_steam_sat);
            dX_liq := Utilities.spliceFunction_der(
                  X[Water] - X_sat,
                  0.0,
                  X[Water] - X_sat,
                  1e-6,
                  (1 + x_sat)*dX[Water] - (1 - X[Water])*dx_sat,
                  0.0,
                  (1 + x_sat)*dX[Water] - (1 - X[Water])*dx_sat,
                  0.0);
            dX_steam := dX[Water] - dX_liq;
            dR_gas := (steam.R*(dX_steam*(1 - X_liquid) + dX_liq*X_steam) + dryair.R*
              (dX_air*(1 - X_liquid) + dX_liq*X_air))/(1 - X_liquid)/(1 - X_liquid);

            u_der := X_steam*Modelica.Media.IdealGases.Common.Functions.h_Tlow_der(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5,
                  dT=dT) + dX_steam*Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=steam,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=46479.819 + 2501014.5) + X_air*
              Modelica.Media.IdealGases.Common.Functions.h_Tlow_der(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684,
                  dT=dT) + dX_air*Modelica.Media.IdealGases.Common.Functions.h_Tlow(
                  data=dryair,
                  T=T,
                  refChoice=ReferenceEnthalpy.UserDefined,
                  h_off=25104.684) + X_liquid*enthalpyOfWater_der(T=T, dT=dT) +
              dX_liq*enthalpyOfWater(T) - dR_gas*T - R_gas*dT;
            annotation (Documentation(info="<html>
Derivative function for <a href=\"modelica://Modelica.Media.Air.MoistAir.specificInternalEnergy_pTX\">specificInternalEnergy_pTX</a>.
</html>"));
          end specificInternalEnergy_pTX_der;

          redeclare function extends specificEntropy
          "Return specific entropy from thermodynamic state record, only valid for phi<1"

          algorithm
            s := s_pTX(
                  state.p,
                  state.T,
                  state.X);
            annotation (
              Inline=false,
              smoothOrder=2,
              Documentation(info="<html>
Specific entropy is calculated from the thermodynamic state record, assuming ideal gas behavior and including entropy of mixing. Liquid or solid water is not taken into account, the entire water content X[1] is assumed to be in the vapor state (relative humidity below 1.0).
</html>"));
          end specificEntropy;

          redeclare function extends specificGibbsEnergy
          "Return specific Gibbs energy as a function of the thermodynamic state record, only valid for phi<1"
            extends Modelica.Icons.Function;
          algorithm
            g := h_pTX(
                  state.p,
                  state.T,
                  state.X) - state.T*specificEntropy(state);
            annotation (smoothOrder=2, Documentation(info="<html>
The Gibbs Energy is computed from the thermodynamic state record for moist air with a water content below saturation.
</html>"));
          end specificGibbsEnergy;

          redeclare function extends specificHelmholtzEnergy
          "Return specific Helmholtz energy as a function of the thermodynamic state record, only valid for phi<1"
            extends Modelica.Icons.Function;
          algorithm
            f := h_pTX(
                  state.p,
                  state.T,
                  state.X) - gasConstant(state)*state.T - state.T*specificEntropy(
              state);
            annotation (smoothOrder=2, Documentation(info="<html>
The Specific Helmholtz Energy is computed from the thermodynamic state record for moist air with a water content below saturation.
</html>"));
          end specificHelmholtzEnergy;

          redeclare function extends specificHeatCapacityCp
          "Return specific heat capacity at constant pressure as a function of the thermodynamic state record"

        protected
            Real dT(unit="s/K") = 1.0;
          algorithm
            cp := h_pTX_der(
                  state.p,
                  state.T,
                  state.X,
                  0.0,
                  1.0,
                  zeros(size(state.X, 1)))*dT
            "Definition of cp: dh/dT @ constant p";
            //      cp:= SingleGasNasa.cp_Tlow(dryair, state.T)*(1-state.X[Water])
            //        + SingleGasNasa.cp_Tlow(steam, state.T)*state.X[Water];
            annotation (
              Inline=false,
              smoothOrder=2,
              Documentation(info="<html>
The specific heat capacity at constant pressure <b>cp</b> is computed from temperature and composition for a mixture of steam (X[1]) and dry air. All water is assumed to be in the vapor state.
</html>"));
          end specificHeatCapacityCp;

          redeclare function extends specificHeatCapacityCv
          "Return specific heat capacity at constant volume as a function of the thermodynamic state record"

          algorithm
            cv := Modelica.Media.IdealGases.Common.Functions.cp_Tlow(dryair, state.T)
              *(1 - state.X[Water]) +
              Modelica.Media.IdealGases.Common.Functions.cp_Tlow(steam, state.T)*
              state.X[Water] - gasConstant(state);
            annotation (
              Inline=false,
              smoothOrder=2,
              Documentation(info="<html>
The specific heat capacity at constant density <b>cv</b> is computed from temperature and composition for a mixture of steam (X[1]) and dry air. All water is assumed to be in the vapor state.
</html>"));
          end specificHeatCapacityCv;

        redeclare function extends dynamicViscosity
          "Return dynamic viscosity as a function of the thermodynamic state record, valid from 123.15 K to 1273.15 K"

          import Modelica.Media.Incompressible.TableBased.Polynomials_Temp;
        algorithm
          eta := 1e-6*Polynomials_Temp.evaluateWithRange(
              {9.7391102886305869E-15,-3.1353724870333906E-11,4.3004876595642225E-08,
              -3.8228016291758240E-05,5.0427874367180762E-02,1.7239260139242528E+01},
              Cv.to_degC(123.15),
              Cv.to_degC(1273.15),
              Cv.to_degC(state.T));
          annotation (smoothOrder=2, Documentation(info="<html>
<p>Dynamic viscosity is computed from temperature using a simple polynomial for dry air. Range of validity is from 123.15 K to 1273.15 K. The influence of pressure and moisture is neglected. </p>
<p>Source: VDI Waermeatlas, 8th edition. </p>
</html>"));
        end dynamicViscosity;

        redeclare function extends thermalConductivity
          "Return thermal conductivity as a function of the thermodynamic state record, valid from 123.15 K to 1273.15 K"
          import Modelica.Media.Incompressible.TableBased.Polynomials_Temp;
          import Cv = Modelica.SIunits.Conversions;
        algorithm
          lambda := 1e-3*Polynomials_Temp.evaluateWithRange(
              {6.5691470817717812E-15,-3.4025961923050509E-11,5.3279284846303157E-08,
              -4.5340839289219472E-05,7.6129675309037664E-02,2.4169481088097051E+01},
              Cv.to_degC(123.15),
              Cv.to_degC(1273.15),
              Cv.to_degC(state.T));

          annotation (smoothOrder=2, Documentation(info="<html>
<p>Thermal conductivity is computed from temperature using a simple polynomial for dry air. Range of validity is from 123.15 K to 1273.15 K. The influence of pressure and moisture is neglected. </p>
<p>Source: VDI Waermeatlas, 8th edition. </p>
</html>"));
        end thermalConductivity;

          package Utilities "Utility functions"
            extends Modelica.Icons.UtilitiesPackage;

            function spliceFunction "Spline interpolation of two functions"
              extends Modelica.Icons.Function;
              input Real pos "Returned value for x-deltax >= 0";
              input Real neg "Returned value for x+deltax <= 0";
              input Real x "Function argument";
              input Real deltax=1 "Region around x with spline interpolation";
              output Real out;
          protected
              Real scaledX;
              Real scaledX1;
              Real y;
            algorithm
              scaledX1 := x/deltax;
              scaledX := scaledX1*Modelica.Math.asin(1);
              if scaledX1 <= -0.999999999 then
                y := 0;
              elseif scaledX1 >= 0.999999999 then
                y := 1;
              else
                y := (Modelica.Math.tanh(Modelica.Math.tan(scaledX)) + 1)/2;
              end if;
              out := pos*y + (1 - y)*neg;
              annotation (derivative=spliceFunction_der);
            end spliceFunction;

            function spliceFunction_der "Derivative of spliceFunction"
              extends Modelica.Icons.Function;
              input Real pos;
              input Real neg;
              input Real x;
              input Real deltax=1;
              input Real dpos;
              input Real dneg;
              input Real dx;
              input Real ddeltax=0;
              output Real out;
          protected
              Real scaledX;
              Real scaledX1;
              Real dscaledX1;
              Real y;
            algorithm
              scaledX1 := x/deltax;
              scaledX := scaledX1*Modelica.Math.asin(1);
              dscaledX1 := (dx - scaledX1*ddeltax)/deltax;
              if scaledX1 <= -0.99999999999 then
                y := 0;
              elseif scaledX1 >= 0.9999999999 then
                y := 1;
              else
                y := (Modelica.Math.tanh(Modelica.Math.tan(scaledX)) + 1)/2;
              end if;
              out := dpos*y + (1 - y)*dneg;
              if (abs(scaledX1) < 1) then
                out := out + (pos - neg)*dscaledX1*Modelica.Math.asin(1)/2/(
                  Modelica.Math.cosh(Modelica.Math.tan(scaledX))*Modelica.Math.cos(
                  scaledX))^2;
              end if;
            end spliceFunction_der;

            function smoothMax
              extends Modelica.Icons.Function;
              import Modelica.Math;

              input Real x1 "First argument of smooth max operator";
              input Real x2 "Second argument of smooth max operator";
              input Real dx
              "Approximate difference between x1 and x2, below which regularization starts";
              output Real y "Result of smooth max operator";
            algorithm
              y := max(x1, x2) + Math.log((exp((4/dx)*(x1 - max(x1, x2)))) + (exp((4/
                dx)*(x2 - max(x1, x2)))))/(4/dx);
              annotation (smoothOrder=2, Documentation(info="<html>
<p>An implementation of Kreisselmeier Steinhauser smooth maximum</p>
</html>"));
            end smoothMax;

            function smoothMax_der
              extends Modelica.Icons.Function;

              import Modelica.Math.exp;
              import Modelica.Math.log;

              input Real x1 "First argument of smooth max operator";
              input Real x2 "Second argument of smooth max operator";
              input Real dx
              "Approximate difference between x1 and x2, below which regularization starts";
              input Real dx1;
              input Real dx2;
              input Real ddx;
              output Real dy "Derivative of smooth max operator";
            algorithm
              dy := (if x1 > x2 then dx1 else dx2) + 0.25*(((4*(dx1 - (if x1 > x2
                 then dx1 else dx2))/dx - 4*(x1 - max(x1, x2))*ddx/dx^2)*exp(4*(x1 -
                max(x1, x2))/dx) + (4*(dx2 - (if x1 > x2 then dx1 else dx2))/dx - 4*(
                x2 - max(x1, x2))*ddx/dx^2)*exp(4*(x2 - max(x1, x2))/dx))*dx/(exp(4*(
                x1 - max(x1, x2))/dx) + exp(4*(x2 - max(x1, x2))/dx)) + log(exp(4*(x1
                 - max(x1, x2))/dx) + exp(4*(x2 - max(x1, x2))/dx))*ddx);

              annotation (Documentation(info="<html>
<p>An implementation of Kreisselmeier Steinhauser smooth maximum</p>
</html>"));
            end smoothMax_der;
          end Utilities;

          redeclare function extends velocityOfSound
          algorithm
            a := sqrt(isentropicExponent(state)*gasConstant(state)*temperature(state));
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end velocityOfSound;

          redeclare function extends isobaricExpansionCoefficient

          algorithm
            beta := 1/temperature(state);
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end isobaricExpansionCoefficient;

          redeclare function extends isothermalCompressibility

          algorithm
            kappa := 1/pressure(state);
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end isothermalCompressibility;

          redeclare function extends density_derp_h

          algorithm
            ddph := 1/(gasConstant(state)*temperature(state));

            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end density_derp_h;

          redeclare function extends density_derh_p

          algorithm
            ddhp := -density(state)/(specificHeatCapacityCp(state)*temperature(state));
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end density_derh_p;

          redeclare function extends density_derp_T

          algorithm
            ddpT := 1/(gasConstant(state)*temperature(state));

            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end density_derp_T;

          redeclare function extends density_derT_p

          algorithm
            ddTp := -density(state)/temperature(state);
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end density_derT_p;

          redeclare function extends density_derX

          algorithm
            dddX[Water] := pressure(state)*(steam.R - dryair.R)/((steam.R - dryair.R)
              *state.X[Water]*temperature(state) + dryair.R*temperature(state))^2;
            dddX[Air] := pressure(state)*(dryair.R - steam.R)/((dryair.R - steam.R)*
              state.X[Air]*temperature(state) + steam.R*temperature(state))^2;

            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end density_derX;

          redeclare function extends molarMass
          algorithm
            MM := Modelica.Media.Air.MoistAir.gasConstant(state)/Modelica.Constants.R;
            annotation (Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end molarMass;

          function T_psX
          "Return temperature as a function of pressure p, specific entropy s and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input SpecificEntropy s "Specific entropy";
            input MassFraction[:] X "Mass fractions of composition";
            output Temperature T "Temperature";

        protected
            package Internal "Solve s(data,T) for T with given s"
              extends Modelica.Media.Common.OneNonLinearEquation;
              redeclare record extends f_nonlinear_Data
              "Data to be passed to non-linear function"
                extends Modelica.Media.IdealGases.Common.DataRecord;
              end f_nonlinear_Data;

              redeclare function extends f_nonlinear
              algorithm
                y := s_pTX(
                          p,
                          x,
                          X);
              end f_nonlinear;

              // Dummy definition has to be added for current Dymola
              redeclare function extends solve
              end solve;
            end Internal;

          algorithm
            T := Internal.solve(
                  s,
                  190,
                  647,
                  p,
                  X[1:nX],
                  steam);
            annotation (Documentation(info="<html>
Temperature is computed from pressure, specific entropy and composition via numerical inversion of function <a href=\"modelica://Modelica.Media.Air.MoistAir.specificEntropy\">specificEntropy</a>.
</html>",       revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end T_psX;

          redeclare function extends setState_psX
          algorithm
            state := if size(X, 1) == nX then ThermodynamicState(
                  p=p,
                  T=T_psX(
                    p,
                    s,
                    X),
                  X=X) else ThermodynamicState(
                  p=p,
                  T=T_psX(
                    p,
                    s,
                    X),
                  X=cat(
                    1,
                    X,
                    {1 - sum(X)}));
            annotation (smoothOrder=2, Documentation(info="<html>
The <a href=\"modelica://Modelica.Media.Air.MoistAir.ThermodynamicState\">thermodynamic state record</a> is computed from pressure p, specific enthalpy h and composition X.
</html>",       revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end setState_psX;

          function s_pTX
          "Return specific entropy of moist air as a function of pressure p, temperature T and composition X (only valid for phi<1)"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            output SI.SpecificEntropy s "Specific entropy at p, T, X";
        protected
            MoleFraction[2] Y=massToMoleFractions(X, {steam.MM,dryair.MM})
            "Molar fraction";

          algorithm
            s := Modelica.Media.IdealGases.Common.Functions.s0_Tlow(dryair, T)*(1 - X[
              Water]) + Modelica.Media.IdealGases.Common.Functions.s0_Tlow(steam, T)*
              X[Water] - Modelica.Constants.R*(Utilities.smoothMax(
                  X[Water]/MMX[Water]*Modelica.Math.log(max(Y[Water], Modelica.Constants.eps)
                *p/reference_p),
                  0.0,
                  1e-9) - Utilities.smoothMax(
                  (1 - X[Water])/MMX[Air]*Modelica.Math.log(max(Y[Air], Modelica.Constants.eps)
                *p/reference_p),
                  0.0,
                  1e-9));
            annotation (
              derivative=s_pTX_der,
              Inline=false,
              Documentation(info="<html>
Specific entropy of moist air is computed from pressure, temperature and composition with X[1] as the total water mass fraction.
</html>",       revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"),    Icon(graphics={Text(
                    extent={{-100,100},{100,-100}},
                    lineColor={255,127,0},
                    textString="f")}));
          end s_pTX;

          function s_pTX_der
          "Return specific entropy of moist air as a function of pressure p, temperature T and composition X (only valid for phi<1)"
            extends Modelica.Icons.Function;
            input SI.Pressure p "Pressure";
            input SI.Temperature T "Temperature";
            input SI.MassFraction X[:] "Mass fractions of moist air";
            input Real dp(unit="Pa/s") "Derivative of pressure";
            input Real dT(unit="K/s") "Derivative of temperature";
            input Real dX[nX](unit="1/s") "Derivative of mass fractions";
            output Real ds(unit="J/(kg.K.s)") "Specific entropy at p, T, X";
        protected
            MoleFraction[2] Y=massToMoleFractions(X, {steam.MM,dryair.MM})
            "Molar fraction";

          algorithm
            ds := Modelica.Media.IdealGases.Common.Functions.s0_Tlow_der(
                  dryair,
                  T,
                  dT)*(1 - X[Water]) +
              Modelica.Media.IdealGases.Common.Functions.s0_Tlow_der(
                  steam,
                  T,
                  dT)*X[Water] + Modelica.Media.IdealGases.Common.Functions.s0_Tlow(
              dryair, T)*dX[Air] + Modelica.Media.IdealGases.Common.Functions.s0_Tlow(
              steam, T)*dX[Water] - Modelica.Constants.R*(1/MMX[Water]*
              Utilities.smoothMax_der(
                  X[Water]*Modelica.Math.log(max(Y[Water], Modelica.Constants.eps)*p/
                reference_p),
                  0.0,
                  1e-9,
                  (Modelica.Math.log(max(Y[Water], Modelica.Constants.eps)*p/
                reference_p) + (X[Water]/Y[Water]*(X[Air]*MMX[Water]/(X[Air]*MMX[
                Water] + X[Water]*MMX[Air])^2)))*dX[Water] + X[Water]*reference_p/p*
                dp,
                  0,
                  0) - 1/MMX[Air]*Utilities.smoothMax_der(
                  (1 - X[Water])*Modelica.Math.log(max(Y[Air], Modelica.Constants.eps)
                *p/reference_p),
                  0.0,
                  1e-9,
                  (Modelica.Math.log(max(Y[Air], Modelica.Constants.eps)*p/
                reference_p) + (X[Air]/Y[Air]*(X[Water]*MMX[Air]/(X[Air]*MMX[Water]
                 + X[Water]*MMX[Air])^2)))*dX[Air] + X[Air]*reference_p/p*dp,
                  0,
                  0));
            annotation (
              Inline=false,
              smoothOrder=1,
              Documentation(info="<html>
Specific entropy of moist air is computed from pressure, temperature and composition with X[1] as the total water mass fraction.
</html>",       revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"),    Icon(graphics={Text(
                    extent={{-100,100},{100,-100}},
                    lineColor={255,127,0},
                    textString="f")}));
          end s_pTX_der;

          redeclare function extends isentropicEnthalpy
          "Isentropic enthalpy (only valid for phi<1)"
            extends Modelica.Icons.Function;
          algorithm
            h_is := Modelica.Media.Air.MoistAir.h_pTX(
                  p_downstream,
                  Modelica.Media.Air.MoistAir.T_psX(
                    p_downstream,
                    Modelica.Media.Air.MoistAir.specificEntropy(refState),
                    refState.X),
                  refState.X);

            annotation (Icon(graphics={Text(
                    extent={{-100,100},{100,-100}},
                    lineColor={255,127,0},
                    textString="f")}), Documentation(revisions="<html>
<p>2012-01-12        Stefan Wischhusen: Initial Release.</p>
</html>"));
          end isentropicEnthalpy;
          annotation (Documentation(info="<html>
<h4>Thermodynamic Model</h4>
<p>This package provides a full thermodynamic model of moist air including the fog region and temperatures below zero degC.
The governing assumptions in this model are:</p>
<ul>
<li>the perfect gas law applies</li>
<li>water volume other than that of steam is neglected</li></ul>
<p>All extensive properties are expressed in terms of the total mass in order to comply with other media in this library. However, for moist air it is rather common to express the absolute humidity in terms of mass of dry air only, which has advantages when working with charts. In addition, care must be taken, when working with mass fractions with respect to total mass, that all properties refer to the same water content when being used in mathematical operations (which is always the case if based on dry air only). Therefore two absolute humidities are computed in the <b>BaseProperties</b> model: <b>X</b> denotes the absolute humidity in terms of the total mass while <b>x</b> denotes the absolute humidity per unit mass of dry air. In addition, the relative humidity <b>phi</b> is also computed.</p>
<p>At the triple point temperature of water of 0.01 &deg;C or 273.16 K and a relative humidity greater than 1 fog may be present as liquid and as ice resulting in a specific enthalpy somewhere between those of the two isotherms for solid and liquid fog, respectively. For numerical reasons a coexisting mixture of 50% solid and 50% liquid fog is assumed in the fog region at the triple point in this model.</p>

<h4>Range of validity</h4>
<p>From the assumptions mentioned above it follows that the <b>pressure</b> should be in the region around <b>atmospheric</b> conditions or below (a few bars may still be fine though). Additionally a very high water content at low temperatures would yield incorrect densities, because the volume of the liquid or solid phase would not be negligible anymore. The model does not provide information on limits for water drop size in the fog region or transport information for the actual condensation or evaporation process in combination with surfaces. All excess water which is not in its vapour state is assumed to be still present in the air regarding its energy but not in terms of its spatial extent.<br><br>
The thermodynamic model may be used for <b>temperatures</b> ranging from <b>190 ... 647 K</b>. This holds for all functions unless otherwise stated in their description. However, although the model works at temperatures above the saturation temperature it is questionable to use the term \"relative humidity\" in this region. Please note, that although several functions compute pure water properties, they are designed to be used within the moist air medium model where properties are dominated by air and steam in their vapor states, and not for pure liquid water applications.</p>

<h4>Transport Properties</h4>
<p>Several additional functions that are not needed to describe the thermodynamic system, but are required to model transport processes, like heat and mass transfer, may be called. They usually neglect the moisture influence unless otherwise stated.</p>

<h4>Application</h4>
<p>The model's main area of application is all processes that involve moist air cooling under near atmospheric pressure with possible moisture condensation. This is the case in all domestic and industrial air conditioning applications. Another large domain of moist air applications covers all processes that deal with dehydration of bulk material using air as a transport medium. Engineering tasks involving moist air are often performed (or at least visualized) by using charts that contain all relevant thermodynamic data for a moist air system. These so called psychrometric charts can be generated from the medium properties in this package. The model <a href=\"modelica://Modelica.Media.Air.MoistAir.PsychrometricData\">PsychrometricData</a> may be used for this purpose in order to obtain data for figures like those below (the plotting itself is not part of the model though).</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Media/Air/Mollier.png\"><br>
<img src=\"modelica://Modelica/Resources/Images/Media/Air/PsycroChart.png\">
</p>

<p>
<b>Legend:</b> blue - constant specific enthalpy, red - constant temperature, black - constant relative humidity</p>

</html>"));
        end MoistAir;
      annotation (Documentation(info="<html>
  <p>This package contains different medium models for air:</p>
<ul>
<li><b>SimpleAir</b><br>
    Simple dry air medium in a limited temperature range.</li>
<li><b>DryAirNasa</b><br>
    Dry air as an ideal gas from Media.IdealGases.MixtureGases.Air.</li>
<li><b>MoistAir</b><br>
    Moist air as an ideal gas mixture of steam and dry air with fog below and above the triple point temperature.</li>
</ul>
</html>"));
    end Air;

    package IdealGases
    "Data and models of ideal gases (single, fixed and dynamic mixtures) from NASA source"
      extends Modelica.Icons.VariantsPackage;

      package Common "Common packages and data for the ideal gas models"
      extends Modelica.Icons.Package;

      record DataRecord
        "Coefficient data record for properties of ideal gases based on NASA source"
        extends Modelica.Icons.Record;
        String name "Name of ideal gas";
        SI.MolarMass MM "Molar mass";
        SI.SpecificEnthalpy Hf "Enthalpy of formation at 298.15K";
        SI.SpecificEnthalpy H0 "H0(298.15K) - H0(0K)";
        SI.Temperature Tlimit
          "Temperature limit between low and high data sets";
        Real alow[7] "Low temperature coefficients a";
        Real blow[2] "Low temperature constants b";
        Real ahigh[7] "High temperature coefficients a";
        Real bhigh[2] "High temperature constants b";
        SI.SpecificHeatCapacity R "Gas constant";
        annotation (Documentation(info="<HTML>
<p>
This data record contains the coefficients for the
ideal gas equations according to:
</p>
<blockquote>
  <p>McBride B.J., Zehe M.J., and Gordon S. (2002): <b>NASA Glenn Coefficients
  for Calculating Thermodynamic Properties of Individual Species</b>. NASA
  report TP-2002-211556</p>
</blockquote>
<p>
The equations have the following structure:
</p>
<IMG src=\"modelica://Modelica/Resources/Images/Media/IdealGases/singleEquations.png\">
<p>
The polynomials for h(T) and s0(T) are derived via integration from the one for cp(T)  and contain the integration constants b1, b2 that define the reference specific enthalpy and entropy. For entropy differences the reference pressure p0 is arbitrary, but not for absolute entropies. It is chosen as 1 standard atmosphere (101325 Pa).
</p>
<p>
For most gases, the region of validity is from 200 K to 6000 K.
The equations are split into two regions that are separated
by Tlimit (usually 1000 K). In both regions the gas is described
by the data above. The two branches are continuous and in most
gases also differentiable at Tlimit.
</p>
</HTML>"));
      end DataRecord;

        package Functions
        "Basic Functions for ideal gases: cp, h, s, thermal conductivity, viscosity"
          extends Modelica.Icons.Package;

          constant Boolean excludeEnthalpyOfFormation=true
          "If true, enthalpy of formation Hf is not included in specific enthalpy h";

          constant Modelica.Media.Interfaces.Choices.ReferenceEnthalpy referenceChoice=Modelica.Media.Interfaces.Choices.ReferenceEnthalpy.ZeroAt0K
          "Choice of reference enthalpy";

          constant Modelica.Media.Interfaces.Types.SpecificEnthalpy h_offset=0.0
          "User defined offset for reference enthalpy, if referenceChoice = UserDefined";

          constant Integer methodForThermalConductivity(min=1,max=2)=1;

          function cp_T
          "Compute specific heat capacity at constant pressure from temperature and gas data"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            output SI.SpecificHeatCapacity cp
            "Specific heat capacity at temperature T";
          algorithm
            cp := smooth(0,if T < data.Tlimit then data.R*(1/(T*T)*(data.alow[1] + T*(
              data.alow[2] + T*(1.*data.alow[3] + T*(data.alow[4] + T*(data.alow[5] + T
              *(data.alow[6] + data.alow[7]*T))))))) else data.R*(1/(T*T)*(data.ahigh[1]
               + T*(data.ahigh[2] + T*(1.*data.ahigh[3] + T*(data.ahigh[4] + T*(data.
              ahigh[5] + T*(data.ahigh[6] + data.ahigh[7]*T))))))));
            annotation (Inline=true,smoothOrder=2);
          end cp_T;

          function cp_Tlow
          "Compute specific heat capacity at constant pressure, low T region"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            output SI.SpecificHeatCapacity cp
            "Specific heat capacity at temperature T";
          algorithm
            cp := data.R*(1/(T*T)*(data.alow[1] + T*(
              data.alow[2] + T*(1.*data.alow[3] + T*(data.alow[4] + T*(data.alow[5] + T
              *(data.alow[6] + data.alow[7]*T)))))));
            annotation (Inline=false, derivative(zeroDerivative=data) = cp_Tlow_der);
          end cp_Tlow;

          function cp_Tlow_der
          "Compute specific heat capacity at constant pressure, low T region"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            input Real dT "Temperature derivative";
            output Real cp_der "Derivative of specific heat capacity";
          algorithm
            cp_der := dT*data.R/(T*T*T)*(-2*data.alow[1] + T*(
              -data.alow[2] + T*T*(data.alow[4] + T*(2.*data.alow[5] + T
              *(3.*data.alow[6] + 4.*data.alow[7]*T)))));
            annotation(smoothOrder=2);
          end cp_Tlow_der;

          function h_T "Compute specific enthalpy from temperature and gas data; reference is decided by the
    refChoice input, or by the referenceChoice package constant by default"
            import Modelica.Media.Interfaces.Choices;
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            input Boolean exclEnthForm=excludeEnthalpyOfFormation
            "If true, enthalpy of formation Hf is not included in specific enthalpy h";
            input Modelica.Media.Interfaces.Choices.ReferenceEnthalpy
                                            refChoice=referenceChoice
            "Choice of reference enthalpy";
            input SI.SpecificEnthalpy h_off=h_offset
            "User defined offset for reference enthalpy, if referenceChoice = UserDefined";
            output SI.SpecificEnthalpy h "Specific enthalpy at temperature T";

          algorithm
            h := smooth(0,(if T < data.Tlimit then data.R*((-data.alow[1] + T*(data.
              blow[1] + data.alow[2]*Math.log(T) + T*(1.*data.alow[3] + T*(0.5*data.
              alow[4] + T*(1/3*data.alow[5] + T*(0.25*data.alow[6] + 0.2*data.alow[7]*T))))))
              /T) else data.R*((-data.ahigh[1] + T*(data.bhigh[1] + data.ahigh[2]*
              Math.log(T) + T*(1.*data.ahigh[3] + T*(0.5*data.ahigh[4] + T*(1/3*data.
              ahigh[5] + T*(0.25*data.ahigh[6] + 0.2*data.ahigh[7]*T))))))/T)) + (if
              exclEnthForm then -data.Hf else 0.0) + (if (refChoice
               == Choices.ReferenceEnthalpy.ZeroAt0K) then data.H0 else 0.0) + (if
              refChoice == Choices.ReferenceEnthalpy.UserDefined then h_off else
                    0.0));
            annotation (Inline=false,smoothOrder=2);
          end h_T;

          function h_Tlow "Compute specific enthalpy, low T region; reference is decided by the
    refChoice input, or by the referenceChoice package constant by default"
            import Modelica.Media.Interfaces.Choices;
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            input Boolean exclEnthForm=excludeEnthalpyOfFormation
            "If true, enthalpy of formation Hf is not included in specific enthalpy h";
            input Modelica.Media.Interfaces.Choices.ReferenceEnthalpy
                                            refChoice=referenceChoice
            "Choice of reference enthalpy";
            input SI.SpecificEnthalpy h_off=h_offset
            "User defined offset for reference enthalpy, if referenceChoice = UserDefined";
            output SI.SpecificEnthalpy h "Specific enthalpy at temperature T";

          algorithm
            h := data.R*((-data.alow[1] + T*(data.
              blow[1] + data.alow[2]*Math.log(T) + T*(1.*data.alow[3] + T*(0.5*data.
              alow[4] + T*(1/3*data.alow[5] + T*(0.25*data.alow[6] + 0.2*data.alow[7]*T))))))
              /T) + (if
              exclEnthForm then -data.Hf else 0.0) + (if (refChoice
               == Choices.ReferenceEnthalpy.ZeroAt0K) then data.H0 else 0.0) + (if
              refChoice == Choices.ReferenceEnthalpy.UserDefined then h_off else
                    0.0);
            annotation(Inline=false,smoothOrder=2);
          end h_Tlow;

          function h_Tlow_der "Compute specific enthalpy, low T region; reference is decided by the
    refChoice input, or by the referenceChoice package constant by default"
            import Modelica.Media.Interfaces.Choices;
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            input Boolean exclEnthForm=excludeEnthalpyOfFormation
            "If true, enthalpy of formation Hf is not included in specific enthalpy h";
            input Modelica.Media.Interfaces.Choices.ReferenceEnthalpy
                                            refChoice=referenceChoice
            "Choice of reference enthalpy";
            input SI.SpecificEnthalpy h_off=h_offset
            "User defined offset for reference enthalpy, if referenceChoice = UserDefined";
            input Real dT(unit="K/s") "Temperature derivative";
            output Real h_der(unit="J/(kg.s)")
            "Derivative of specific enthalpy at temperature T";
          algorithm
            h_der := dT*Modelica.Media.IdealGases.Common.Functions.cp_Tlow(
                                data,T);
            annotation(Inline=true,smoothOrder=2);
          end h_Tlow_der;

          function s0_T
          "Compute specific entropy from temperature and gas data"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            output SI.SpecificEntropy s "Specific entropy at temperature T";
          algorithm
            s := if T < data.Tlimit then data.R*(data.blow[2] - 0.5*data.alow[
              1]/(T*T) - data.alow[2]/T + data.alow[3]*Math.log(T) + T*(
              data.alow[4] + T*(0.5*data.alow[5] + T*(1/3*data.alow[6] + 0.25*data.alow[
              7]*T)))) else data.R*(data.bhigh[2] - 0.5*data.ahigh[1]/(T*T) - data.
              ahigh[2]/T + data.ahigh[3]*Math.log(T) + T*(data.ahigh[4]
               + T*(0.5*data.ahigh[5] + T*(1/3*data.ahigh[6] + 0.25*data.ahigh[7]*T))));
            annotation (Inline=true, smoothOrder=2);
          end s0_T;

          function s0_Tlow "Compute specific entropy, low T region"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            output SI.SpecificEntropy s "Specific entropy at temperature T";
          algorithm
            s := data.R*(data.blow[2] - 0.5*data.alow[
              1]/(T*T) - data.alow[2]/T + data.alow[3]*Math.log(T) + T*(
              data.alow[4] + T*(0.5*data.alow[5] + T*(1/3*data.alow[6] + 0.25*data.alow[
              7]*T))));
            annotation (Inline=true);
          end s0_Tlow;

          function s0_Tlow_der
          "Compute derivative of specific entropy, low T region"
            extends Modelica.Icons.Function;
            input IdealGases.Common.DataRecord data "Ideal gas data";
            input SI.Temperature T "Temperature";
            input Real T_der "Temperature derivative";
            output SI.SpecificEntropy s "Specific entropy at temperature T";
          algorithm
            s := data.R*(data.blow[2] - 0.5*data.alow[
              1]/(T*T) - data.alow[2]/T + data.alow[3]*Math.log(T) + T*(
              data.alow[4] + T*(0.5*data.alow[5] + T*(1/3*data.alow[6] + 0.25*data.alow[
              7]*T))));
            annotation (Inline=true);
          end s0_Tlow_der;

          function dynamicViscosityLowPressure
          "Dynamic viscosity of low pressure gases"
            extends Modelica.Icons.Function;
            input SI.Temp_K T "Gas temperature";
            input SI.Temp_K Tc "Critical temperature of gas";
            input SI.MolarMass M "Molar mass of gas";
            input SI.MolarVolume Vc "Critical molar volume of gas";
            input Real w "Acentric factor of gas";
            input Interfaces.PartialMedium.DipoleMoment mu
            "Dipole moment of gas molecule";
            input Real k =  0.0
            "Special correction for highly polar substances";
            output SI.DynamicViscosity eta "Dynamic viscosity of gas";
        protected
            parameter Real Const1_SI=40.785*10^(-9.5)
            "Constant in formula for eta converted to SI units";
            parameter Real Const2_SI=131.3/1000.0
            "Constant in formula for mur converted to SI units";
            Real mur=Const2_SI*mu/sqrt(Vc*Tc)
            "Dimensionless dipole moment of gas molecule";
            Real Fc=1 - 0.2756*w + 0.059035*mur^4 + k
            "Factor to account for molecular shape and polarities of gas";
            Real Tstar "Dimensionless temperature defined by equation below";
            Real Ov "Viscosity collision integral for the gas";

          algorithm
            Tstar := 1.2593*T/Tc;
            Ov := 1.16145*Tstar^(-0.14874) + 0.52487*Modelica.Math.exp(-0.7732*Tstar) + 2.16178*Modelica.Math.exp(-2.43787
              *Tstar);
            eta := Const1_SI*Fc*sqrt(M*T)/(Vc^(2/3)*Ov);
            annotation (smoothOrder=2,
                        Documentation(info="<html>
<p>
The used formula are based on the method of Chung et al (1984, 1988) referred to in ref [1] chapter 9.
The formula 9-4.10 is the one being used. The Formula is given in non-SI units, the following conversion constants were used to
transform the formula to SI units:
</p>

<ul>
<li> <b>Const1_SI:</b> The factor 10^(-9.5) =10^(-2.5)*1e-7 where the
     factor 10^(-2.5) originates from the conversion of g/mol->kg/mol + cm^3/mol->m^3/mol
      and the factor 1e-7 is due to conversion from microPoise->Pa.s.</li>
<li>  <b>Const2_SI:</b> The factor 1/3.335641e-27 = 1e-3/3.335641e-30
      where the factor 3.335641e-30 comes from debye->C.m and
      1e-3 is due to conversion from cm^3/mol->m^3/mol</li>
</ul>

<h4>References:</h4>
<p>
[1] Bruce E. Poling, John E. Prausnitz, John P. O'Connell, \"The Properties of Gases and Liquids\" 5th Ed. Mc Graw Hill.
</p>

<h4>Author</h4>
<p>T. Skoglund, Lund, Sweden, 2004-08-31</p>

</html>"));
          end dynamicViscosityLowPressure;

          function thermalConductivityEstimate
          "Thermal conductivity of polyatomic gases(Eucken and Modified Eucken correlation)"
            extends Modelica.Icons.Function;
            input Interfaces.PartialMedium.SpecificHeatCapacity Cp
            "Constant pressure heat capacity";
            input Interfaces.PartialMedium.DynamicViscosity eta
            "Dynamic viscosity";
            input Integer method(min=1,max=2)=1
            "1: Eucken Method, 2: Modified Eucken Method";
            input IdealGases.Common.DataRecord data "Ideal gas data";
            output Interfaces.PartialMedium.ThermalConductivity lambda
            "Thermal conductivity [W/(m.k)]";
          algorithm
            lambda := if method == 1 then eta*(Cp - data.R + (9/4)*data.R) else eta*(Cp
               - data.R)*(1.32 + 1.77/((Cp/Modelica.Constants.R) - 1.0));
            annotation (smoothOrder=2,
                        Documentation(info="<html>
<p>
This function provides two similar methods for estimating the
thermal conductivity of polyatomic gases.
The Eucken method (input method == 1) gives good results for low temperatures,
but it tends to give an underestimated value of the thermal conductivity
(lambda) at higher temperatures.<br>
The Modified Eucken method (input method == 2) gives good results for
high-temperatures, but it tends to give an overestimated value of the
thermal conductivity (lambda) at low temperatures.
</p>
</html>"));
          end thermalConductivityEstimate;
        end Functions;

      partial package SingleGasNasa
        "Medium model of an ideal gas based on NASA source"

        extends Interfaces.PartialPureSubstance(
           ThermoStates=Modelica.Media.Interfaces.Choices.IndependentVariables.pT,
           redeclare final record FluidConstants =
              Modelica.Media.Interfaces.Types.IdealGas.FluidConstants,
           mediumName=data.name,
           substanceNames={data.name},
           singleState=false,
           Temperature(min=200, max=6000, start=500, nominal=500),
           SpecificEnthalpy(start=if Functions.referenceChoice==ReferenceEnthalpy.ZeroAt0K then data.H0 else
              if Functions.referenceChoice==ReferenceEnthalpy.UserDefined then Functions.h_offset else 0, nominal=1.0e5),
           Density(start=10, nominal=10),
           AbsolutePressure(start=10e5, nominal=10e5));

        redeclare record extends ThermodynamicState
          "Thermodynamic state variables for ideal gases"
          AbsolutePressure p "Absolute pressure of medium";
          Temperature T "Temperature of medium";
        end ThermodynamicState;

        import Modelica.Math;
        import Modelica.Media.Interfaces.Choices.ReferenceEnthalpy;

        constant IdealGases.Common.DataRecord data
          "Data record of ideal gas substance";

        constant FluidConstants[nS] fluidConstants
          "Constant data for the fluid";

        redeclare model extends BaseProperties(
         T(stateSelect=if preferredMediumStates then StateSelect.prefer else StateSelect.default),
         p(stateSelect=if preferredMediumStates then StateSelect.prefer else StateSelect.default))
          "Base properties of ideal gas medium"
        equation
          assert(T >= 200 and T <= 6000, "
Temperature T (= "       + String(T) + " K) is not in the allowed range
200 K <= T <= 6000 K required from medium model \""       + mediumName + "\".
");
          MM = data.MM;
          R = data.R;
          h = Modelica.Media.IdealGases.Common.Functions.h_T(
                  data, T,
                  Modelica.Media.IdealGases.Common.Functions.excludeEnthalpyOfFormation,
                  Modelica.Media.IdealGases.Common.Functions.referenceChoice,
                  Modelica.Media.IdealGases.Common.Functions.h_offset);
          u = h - R*T;

          // Has to be written in the form d=f(p,T) in order that static
          // state selection for p and T is possible
          d = p/(R*T);
          // connect state with BaseProperties
          state.T = T;
          state.p = p;
        end BaseProperties;

          redeclare function setState_pTX
          "Return thermodynamic state as function of p, T and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input Temperature T "Temperature";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state;
          algorithm
            state := ThermodynamicState(p=p,T=T);
            annotation(Inline=true,smoothOrder=2);
          end setState_pTX;

          redeclare function setState_phX
          "Return thermodynamic state as function of p, h and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input SpecificEnthalpy h "Specific enthalpy";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state;
          algorithm
            state := ThermodynamicState(p=p,T=T_h(h));
            annotation(Inline=true,smoothOrder=2);
          end setState_phX;

          redeclare function setState_psX
          "Return thermodynamic state as function of p, s and composition X"
            extends Modelica.Icons.Function;
            input AbsolutePressure p "Pressure";
            input SpecificEntropy s "Specific entropy";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state;
          algorithm
            state := ThermodynamicState(p=p,T=T_ps(p,s));
            annotation(Inline=true,smoothOrder=2);
          end setState_psX;

          redeclare function setState_dTX
          "Return thermodynamic state as function of d, T and composition X"
            extends Modelica.Icons.Function;
            input Density d "Density";
            input Temperature T "Temperature";
            input MassFraction X[:]=reference_X "Mass fractions";
            output ThermodynamicState state;
          algorithm
            state := ThermodynamicState(p=d*data.R*T,T=T);
            annotation(Inline=true,smoothOrder=2);
          end setState_dTX;

            redeclare function extends setSmoothState
          "Return thermodynamic state so that it smoothly approximates: if x > 0 then state_a else state_b"
            algorithm
              state := ThermodynamicState(p=Media.Common.smoothStep(x, state_a.p, state_b.p, x_small),
                                          T=Media.Common.smoothStep(x, state_a.T, state_b.T, x_small));
              annotation(Inline=true,smoothOrder=2);
            end setSmoothState;

        redeclare function extends pressure "Return pressure of ideal gas"
        algorithm
          p := state.p;
          annotation(Inline=true,smoothOrder=2);
        end pressure;

        redeclare function extends temperature
          "Return temperature of ideal gas"
        algorithm
          T := state.T;
          annotation(Inline=true,smoothOrder=2);
        end temperature;

        redeclare function extends density "Return density of ideal gas"
        algorithm
          d := state.p/(data.R*state.T);
          annotation(Inline=true,smoothOrder=2);
        end density;

        redeclare function extends specificEnthalpy "Return specific enthalpy"
          extends Modelica.Icons.Function;
        algorithm
          h := Modelica.Media.IdealGases.Common.Functions.h_T(
                   data,state.T);
          annotation(Inline=true,smoothOrder=2);
        end specificEnthalpy;

        redeclare function extends specificInternalEnergy
          "Return specific internal energy"
          extends Modelica.Icons.Function;
        algorithm
          u := Modelica.Media.IdealGases.Common.Functions.h_T(
                   data,state.T) - data.R*state.T;
          annotation(Inline=true,smoothOrder=2);
        end specificInternalEnergy;

        redeclare function extends specificEntropy "Return specific entropy"
          extends Modelica.Icons.Function;
        algorithm
          s := Modelica.Media.IdealGases.Common.Functions.s0_T(
                    data, state.T) - data.R*Modelica.Math.log(state.p/reference_p);
          annotation(Inline=true,smoothOrder=2);
        end specificEntropy;

        redeclare function extends specificGibbsEnergy
          "Return specific Gibbs energy"
          extends Modelica.Icons.Function;
        algorithm
          g := Modelica.Media.IdealGases.Common.Functions.h_T(
                   data,state.T) - state.T*specificEntropy(state);
          annotation(Inline=true,smoothOrder=2);
        end specificGibbsEnergy;

        redeclare function extends specificHelmholtzEnergy
          "Return specific Helmholtz energy"
          extends Modelica.Icons.Function;
        algorithm
          f := Modelica.Media.IdealGases.Common.Functions.h_T(
                   data,state.T) - data.R*state.T - state.T*specificEntropy(state);
          annotation(Inline=true,smoothOrder=2);
        end specificHelmholtzEnergy;

        redeclare function extends specificHeatCapacityCp
          "Return specific heat capacity at constant pressure"
        algorithm
          cp := Modelica.Media.IdealGases.Common.Functions.cp_T(
                     data, state.T);
          annotation(Inline=true,smoothOrder=2);
        end specificHeatCapacityCp;

        redeclare function extends specificHeatCapacityCv
          "Compute specific heat capacity at constant volume from temperature and gas data"
        algorithm
          cv := Modelica.Media.IdealGases.Common.Functions.cp_T(
                     data, state.T) - data.R;
          annotation(Inline=true,smoothOrder=2);
        end specificHeatCapacityCv;

        redeclare function extends isentropicExponent
          "Return isentropic exponent"
        algorithm
          gamma := specificHeatCapacityCp(state)/specificHeatCapacityCv(state);
          annotation(Inline=true,smoothOrder=2);
        end isentropicExponent;

        redeclare function extends velocityOfSound "Return velocity of sound"
          extends Modelica.Icons.Function;
        algorithm
          a := sqrt(max(0,data.R*state.T*Modelica.Media.IdealGases.Common.Functions.cp_T(
                                              data, state.T)/specificHeatCapacityCv(state)));
          annotation(Inline=true,smoothOrder=2);
        end velocityOfSound;

        function isentropicEnthalpyApproximation
          "Approximate method of calculating h_is from upstream properties and downstream pressure"
          extends Modelica.Icons.Function;
          input SI.Pressure p2 "Downstream pressure";
          input ThermodynamicState state "Properties at upstream location";
          input Boolean exclEnthForm=Functions.excludeEnthalpyOfFormation
            "If true, enthalpy of formation Hf is not included in specific enthalpy h";
          input ReferenceEnthalpy refChoice=Functions.referenceChoice
            "Choice of reference enthalpy";
          input SpecificEnthalpy h_off=Functions.h_offset
            "User defined offset for reference enthalpy, if referenceChoice = UserDefined";
          output SI.SpecificEnthalpy h_is "Isentropic enthalpy";
        protected
          IsentropicExponent gamma =  isentropicExponent(state)
            "Isentropic exponent";
        algorithm
          h_is := Modelica.Media.IdealGases.Common.Functions.h_T(
                      data,state.T,exclEnthForm,refChoice,h_off) +
            gamma/(gamma - 1.0)*state.p/density(state)*((p2/state.p)^((gamma - 1)/gamma) - 1.0);
          annotation(Inline=true,smoothOrder=2);
        end isentropicEnthalpyApproximation;

        redeclare function extends isentropicEnthalpy
          "Return isentropic enthalpy"
        input Boolean exclEnthForm=Functions.excludeEnthalpyOfFormation
            "If true, enthalpy of formation Hf is not included in specific enthalpy h";
        input ReferenceEnthalpy refChoice=Functions.referenceChoice
            "Choice of reference enthalpy";
        input SpecificEnthalpy h_off=Functions.h_offset
            "User defined offset for reference enthalpy, if referenceChoice = UserDefined";
        algorithm
          h_is := isentropicEnthalpyApproximation(p_downstream,refState,exclEnthForm,refChoice,h_off);
          annotation(Inline=true,smoothOrder=2);
        end isentropicEnthalpy;

        redeclare function extends isobaricExpansionCoefficient
          "Returns overall the isobaric expansion coefficient beta"
        algorithm
          beta := 1/state.T;
          annotation(Inline=true,smoothOrder=2);
        end isobaricExpansionCoefficient;

        redeclare function extends isothermalCompressibility
          "Returns overall the isothermal compressibility factor"
        algorithm
          kappa := 1.0/state.p;
          annotation(Inline=true,smoothOrder=2);
        end isothermalCompressibility;

        redeclare function extends density_derp_T
          "Returns the partial derivative of density with respect to pressure at constant temperature"
        algorithm
          ddpT := 1/(state.T*data.R);
          annotation(Inline=true,smoothOrder=2);
        end density_derp_T;

        redeclare function extends density_derT_p
          "Returns the partial derivative of density with respect to temperature at constant pressure"
        algorithm
          ddTp := -state.p/(state.T*state.T*data.R);
          annotation(Inline=true,smoothOrder=2);
        end density_derT_p;

        redeclare function extends density_derX
          "Returns the partial derivative of density with respect to mass fractions at constant pressure and temperature"
        algorithm
          dddX := fill(0,nX);
          annotation(Inline=true,smoothOrder=2);
        end density_derX;

        redeclare replaceable function extends dynamicViscosity
          "Dynamic viscosity"
        algorithm
          assert(fluidConstants[1].hasCriticalData,
          "Failed to compute dynamicViscosity: For the species \"" + mediumName + "\" no critical data is available.");
          assert(fluidConstants[1].hasDipoleMoment,
          "Failed to compute dynamicViscosity: For the species \"" + mediumName + "\" no critical data is available.");
          eta := Modelica.Media.IdealGases.Common.Functions.dynamicViscosityLowPressure(
                                             state.T,
                             fluidConstants[1].criticalTemperature,
                             fluidConstants[1].molarMass,
                             fluidConstants[1].criticalMolarVolume,
                             fluidConstants[1].acentricFactor,
                             fluidConstants[1].dipoleMoment);
          annotation (smoothOrder=2);
        end dynamicViscosity;

        redeclare replaceable function extends thermalConductivity
          "Thermal conductivity of gas"
        //  input IdealGases.Common.DataRecord data "Ideal gas data";
          input Integer method=Functions.methodForThermalConductivity
            "1: Eucken Method, 2: Modified Eucken Method";
        algorithm
          assert(fluidConstants[1].hasCriticalData,
          "Failed to compute thermalConductivity: For the species \"" + mediumName + "\" no critical data is available.");
          lambda := Modelica.Media.IdealGases.Common.Functions.thermalConductivityEstimate(
                                                specificHeatCapacityCp(state),
            dynamicViscosity(state), method=method,data=data);
          annotation (smoothOrder=2);
        end thermalConductivity;

        redeclare function extends molarMass
          "Return the molar mass of the medium"
        algorithm
          MM := data.MM;
          annotation(Inline=true,smoothOrder=2);
        end molarMass;

        function T_h "Compute temperature from specific enthalpy"
          extends Modelica.Icons.Function;
          input SpecificEnthalpy h "Specific enthalpy";
          output Temperature T "Temperature";

        protected
        package Internal
            "Solve h(data,T) for T with given h (use only indirectly via temperature_phX)"
          extends Modelica.Media.Common.OneNonLinearEquation;
          redeclare record extends f_nonlinear_Data
              "Data to be passed to non-linear function"
            extends Modelica.Media.IdealGases.Common.DataRecord;
          end f_nonlinear_Data;

          redeclare function extends f_nonlinear
          algorithm
              y := Modelica.Media.IdealGases.Common.Functions.h_T(
                       f_nonlinear_data,x);
          end f_nonlinear;

          // Dummy definition has to be added for current Dymola
          redeclare function extends solve
          end solve;
        end Internal;

        algorithm
          T := Internal.solve(h, 200, 6000, 1.0e5, {1}, data);
        end T_h;

        function T_ps "Compute temperature from pressure and specific entropy"
          extends Modelica.Icons.Function;
          input AbsolutePressure p "Pressure";
          input SpecificEntropy s "Specific entropy";
          output Temperature T "Temperature";

        protected
        package Internal
            "Solve h(data,T) for T with given h (use only indirectly via temperature_phX)"
          extends Modelica.Media.Common.OneNonLinearEquation;
          redeclare record extends f_nonlinear_Data
              "Data to be passed to non-linear function"
            extends Modelica.Media.IdealGases.Common.DataRecord;
          end f_nonlinear_Data;

          redeclare function extends f_nonlinear
          algorithm
              y := Modelica.Media.IdealGases.Common.Functions.s0_T(
                        f_nonlinear_data,x)- data.R*Modelica.Math.log(p/reference_p);
          end f_nonlinear;

          // Dummy definition has to be added for current Dymola
          redeclare function extends solve
          end solve;
        end Internal;

        algorithm
          T := Internal.solve(s, 200, 6000, p, {1}, data);
        end T_ps;

      // the functions below are not strictly necessary, there are just here for compatibility reasons

        function dynamicViscosityLowPressure
          "Dynamic viscosity of low pressure gases"
          extends Modelica.Icons.Function;
          input SI.Temp_K T "Gas temperature";
          input SI.Temp_K Tc "Critical temperature of gas";
          input SI.MolarMass M "Molar mass of gas";
          input SI.MolarVolume Vc "Critical molar volume of gas";
          input Real w "Acentric factor of gas";
          input DipoleMoment mu "Dipole moment of gas molecule";
          input Real k =  0.0 "Special correction for highly polar substances";
          output SI.DynamicViscosity eta "Dynamic viscosity of gas";
        protected
          parameter Real Const1_SI=40.785*10^(-9.5)
            "Constant in formula for eta converted to SI units";
          parameter Real Const2_SI=131.3/1000.0
            "Constant in formula for mur converted to SI units";
          Real mur=Const2_SI*mu/sqrt(Vc*Tc)
            "Dimensionless dipole moment of gas molecule";
          Real Fc=1 - 0.2756*w + 0.059035*mur^4 + k
            "Factor to account for molecular shape and polarities of gas";
          Real Tstar "Dimensionless temperature defined by equation below";
          Real Ov "Viscosity collision integral for the gas";

        algorithm
          eta := Functions.dynamicViscosityLowPressure(T,Tc,M,Vc,w,mu,k);
          annotation (smoothOrder=2,
                      Documentation(info="<html>
<p>
The used formula are based on the method of Chung et al (1984, 1988) referred to in ref [1] chapter 9.
The formula 9-4.10 is the one being used. The Formula is given in non-SI units, the following conversion constants were used to
transform the formula to SI units:
</p>

<ul>
<li> <b>Const1_SI:</b> The factor 10^(-9.5) =10^(-2.5)*1e-7 where the
     factor 10^(-2.5) originates from the conversion of g/mol->kg/mol + cm^3/mol->m^3/mol
      and the factor 1e-7 is due to conversion from microPoise->Pa.s.</li>
<li>  <b>Const2_SI:</b> The factor 1/3.335641e-27 = 1e-3/3.335641e-30
      where the factor 3.335641e-30 comes from debye->C.m and
      1e-3 is due to conversion from cm^3/mol->m^3/mol</li>
</ul>

<h4>References:</h4>
<p>
[1] Bruce E. Poling, John E. Prausnitz, John P. O'Connell, \"The Properties of Gases and Liquids\" 5th Ed. Mc Graw Hill.
</p>

<h4>Author</h4>
<p>T. Skoglund, Lund, Sweden, 2004-08-31</p>

</html>"));
        end dynamicViscosityLowPressure;

        function thermalConductivityEstimate
          "Thermal conductivity of polyatomic gases(Eucken and Modified Eucken correlation)"
          extends Modelica.Icons.Function;
          input Interfaces.PartialMedium.SpecificHeatCapacity Cp
            "Constant pressure heat capacity";
          input Interfaces.PartialMedium.DynamicViscosity eta
            "Dynamic viscosity";
          input Integer method(min=1,max=2)=1
            "1: Eucken Method, 2: Modified Eucken Method";
          input IdealGases.Common.DataRecord data "Ideal gas data";
          output Interfaces.PartialMedium.ThermalConductivity lambda
            "Thermal conductivity [W/(m.k)]";
        algorithm
          lambda := Functions.thermalConductivityEstimate(Cp,eta,method,data);
          annotation (smoothOrder=2,
                      Documentation(info="<html>
<p>
This function provides two similar methods for estimating the
thermal conductivity of polyatomic gases.
The Eucken method (input method == 1) gives good results for low temperatures,
but it tends to give an underestimated value of the thermal conductivity
(lambda) at higher temperatures.<br>
The Modified Eucken method (input method == 2) gives good results for
high-temperatures, but it tends to give an overestimated value of the
thermal conductivity (lambda) at low temperatures.
</p>
</html>"));
        end thermalConductivityEstimate;

        annotation (
          Documentation(info="<HTML>
<p>
This model calculates medium properties
for an ideal gas of a single substance, or for an ideal
gas consisting of several substances where the
mass fractions are fixed. Independent variables
are temperature <b>T</b> and pressure <b>p</b>.
Only density is a function of T and p. All other quantities
are solely a function of T. The properties
are valid in the range:
</p>
<pre>
   200 K &le; T &le; 6000 K
</pre>
<p>
The following quantities are always computed:
</p>
<table border=1 cellspacing=0 cellpadding=2>
  <tr><td valign=\"top\"><b>Variable</b></td>
      <td valign=\"top\"><b>Unit</b></td>
      <td valign=\"top\"><b>Description</b></td></tr>
  <tr><td valign=\"top\">h</td>
      <td valign=\"top\">J/kg</td>
      <td valign=\"top\">specific enthalpy h = h(T)</td></tr>
  <tr><td valign=\"top\">u</td>
      <td valign=\"top\">J/kg</td>
      <td valign=\"top\">specific internal energy u = u(T)</td></tr>
  <tr><td valign=\"top\">d</td>
      <td valign=\"top\">kg/m^3</td>
      <td valign=\"top\">density d = d(p,T)</td></tr>
</table>
<p>
For the other variables, see the functions in
Modelica.Media.IdealGases.Common.SingleGasNasa.
Note, dynamic viscosity and thermal conductivity are only provided
for gases that use a data record from Modelica.Media.IdealGases.FluidData.
Currently these are the following gases:
</p>
<pre>
  Ar
  C2H2_vinylidene
  C2H4
  C2H5OH
  C2H6
  C3H6_propylene
  C3H7OH
  C3H8
  C4H8_1_butene
  C4H9OH
  C4H10_n_butane
  C5H10_1_pentene
  C5H12_n_pentane
  C6H6
  C6H12_1_hexene
  C6H14_n_heptane
  C7H14_1_heptene
  C8H10_ethylbenz
  CH3OH
  CH4
  CL2
  CO
  CO2
  F2
  H2
  H2O
  He
  N2
  N2O
  NH3
  NO
  O2
  SO2
  SO3
</pre>
<p>
<b>Sources for model and literature:</b><br>
Original Data: Computer program for calculation of complex chemical
equilibrium compositions and applications. Part 1: Analysis
Document ID: 19950013764 N (95N20180) File Series: NASA Technical Reports
Report Number: NASA-RP-1311  E-8017  NAS 1.61:1311
Authors: Gordon, Sanford (NASA Lewis Research Center)
 Mcbride, Bonnie J. (NASA Lewis Research Center)
Published: Oct 01, 1994.
</p>
<p><b>Known limits of validity:</b></br>
The data is valid for
temperatures between 200K and 6000K.  A few of the data sets for
monatomic gases have a discontinuous 1st derivative at 1000K, but
this never caused problems so far.
</p>
<p>
This model has been copied from the ThermoFluid library
and adapted to the Modelica.Media package.
</p>
</HTML>"));
      end SingleGasNasa;

        package FluidData "Critical data, dipole moments and related data"
          extends Modelica.Icons.Package;
          import Modelica.Media.Interfaces.PartialMixtureMedium;
          import Modelica.Media.IdealGases.Common.SingleGasesData;

          constant Modelica.Media.Interfaces.Types.IdealGas.FluidConstants N2(
                               chemicalFormula =        "N2",
                               iupacName =              "unknown",
                               structureFormula =       "unknown",
                               casRegistryNumber =      "7727-37-9",
                               meltingPoint =            63.15,
                               normalBoilingPoint =      77.35,
                               criticalTemperature =    126.20,
                               criticalPressure =        33.98e5,
                               criticalMolarVolume =     90.10e-6,
                               acentricFactor =           0.037,
                               dipoleMoment =             0.0,
                               molarMass =              SingleGasesData.N2.MM,
                               hasDipoleMoment =       true,
                               hasIdealGasHeatCapacity=true,
                               hasCriticalData =       true,
                               hasAcentricFactor =     true);

          constant Modelica.Media.Interfaces.Types.IdealGas.FluidConstants H2O(
                               chemicalFormula =        "H2O",
                               iupacName =              "oxidane",
                               structureFormula =       "H2O",
                               casRegistryNumber =      "7732-18-5",
                               meltingPoint =           273.15,
                               normalBoilingPoint =     373.124,
                               criticalTemperature =    647.096,
                               criticalPressure =       220.64e5,
                               criticalMolarVolume =     55.95e-6,
                               acentricFactor =           0.344,
                               dipoleMoment =             1.8,
                               molarMass =              SingleGasesData.H2O.MM,
                               hasDipoleMoment =       true,
                               hasIdealGasHeatCapacity=true,
                               hasCriticalData =       true,
                               hasAcentricFactor =     true);
          annotation (Documentation(info="<html>
<p>
This package contains FluidConstants data records for the following 37 gases
(see also the description in
<a href=\"modelica://Modelica.Media.IdealGases\">Modelica.Media.IdealGases</a>):
</p>
<pre>
Argon             Methane          Methanol       Carbon Monoxide  Carbon Dioxide
Acetylene         Ethylene         Ethanol        Ethane           Propylene
Propane           1-Propanol       1-Butene       N-Butane         1-Pentene
N-Pentane         Benzene          1-Hexene       N-Hexane         1-Heptane
N-Heptane         Ethylbenzene     N-Octane       Chlorine         Fluorine
Hydrogen          Steam            Helium         Ammonia          Nitric Oxide
Nitrogen Dioxide  Nitrogen         Nitrous        Oxide            Neon Oxygen
Sulfur Dioxide    Sulfur Trioxide
</pre>

</html>"));
        end FluidData;

        package SingleGasesData
        "Ideal gas data based on the NASA Glenn coefficients"
          extends Modelica.Icons.Package;

          constant IdealGases.Common.DataRecord Air(
            name="Air",
            MM=0.0289651159,
            Hf=-4333.833858403446,
            H0=298609.6803431054,
            Tlimit=1000,
            alow={10099.5016,-196.827561,5.00915511,-0.00576101373,1.06685993e-005,-7.94029797e-009,
                2.18523191e-012},
            blow={-176.796731,-3.921504225},
            ahigh={241521.443,-1257.8746,5.14455867,-0.000213854179,7.06522784e-008,-1.07148349e-011,
                6.57780015e-016},
            bhigh={6462.26319,-8.147411905},
            R=287.0512249529787);

          constant IdealGases.Common.DataRecord H2O(
            name="H2O",
            MM=0.01801528,
            Hf=-13423382.81725291,
            H0=549760.6476280135,
            Tlimit=1000,
            alow={-39479.6083,575.573102,0.931782653,0.00722271286,-7.34255737e-006,
                4.95504349e-009,-1.336933246e-012},
            blow={-33039.7431,17.24205775},
            ahigh={1034972.096,-2412.698562,4.64611078,0.002291998307,-6.836830479999999e-007,
                9.426468930000001e-011,-4.82238053e-015},
            bhigh={-13842.86509,-7.97814851},
            R=461.5233290850878);

          constant IdealGases.Common.DataRecord N2(
            name="N2",
            MM=0.0280134,
            Hf=0,
            H0=309498.4543111511,
            Tlimit=1000,
            alow={22103.71497,-381.846182,6.08273836,-0.00853091441,1.384646189e-005,-9.62579362e-009,
                2.519705809e-012},
            blow={710.846086,-10.76003744},
            ahigh={587712.406,-2239.249073,6.06694922,-0.00061396855,1.491806679e-007,-1.923105485e-011,
                1.061954386e-015},
            bhigh={12832.10415,-15.86640027},
            R=296.8033869505308);
          annotation ( Documentation(info="<HTML>
<p>This package contains ideal gas models for the 1241 ideal gases from</p>
<blockquote>
  <p>McBride B.J., Zehe M.J., and Gordon S. (2002): <b>NASA Glenn Coefficients
  for Calculating Thermodynamic Properties of Individual Species</b>. NASA
  report TP-2002-211556</p>
</blockquote>

<pre>
 Ag        BaOH+           C2H4O_ethylen_o DF      In2I4    Nb      ScO2
 Ag+       Ba_OH_2         CH3CHO_ethanal  DOCl    In2I6    Nb+     Sc2O
 Ag-       BaS             CH3COOH         DO2     In2O     Nb-     Sc2O2
 Air       Ba2             OHCH2COOH       DO2-    K        NbCl5   Si
 Al        Be              C2H5            D2      K+       NbO     Si+
 Al+       Be+             C2H5Br          D2+     K-       NbOCl3  Si-
 Al-       Be++            C2H6            D2-     KAlF4    NbO2    SiBr
 AlBr      BeBr            CH3N2CH3        D2O     KBO2     Ne      SiBr2
 AlBr2     BeBr2           C2H5OH          D2O2    KBr      Ne+     SiBr3
 AlBr3     BeCl            CH3OCH3         D2S     KCN      Ni      SiBr4
 AlC       BeCl2           CH3O2CH3        e-      KCl      Ni+     SiC
 AlC2      BeF             CCN             F       KF       Ni-     SiC2
 AlCl      BeF2            CNC             F+      KH       NiCl    SiCl
 AlCl+     BeH             OCCN            F-      KI       NiCl2   SiCl2
 AlCl2     BeH+            C2N2            FCN     Kli      NiO     SiCl3
 AlCl3     BeH2            C2O             FCO     KNO2     NiS     SiCl4
 AlF       BeI             C3              FO      KNO3     O       SiF
 AlF+      BeI2            C3H3_1_propynl  FO2_FOO KNa      O+      SiFCl
 AlFCl     BeN             C3H3_2_propynl  FO2_OFO KO       O-      SiF2
 AlFCl2    BeO             C3H4_allene     F2      KOH      OD      SiF3
 AlF2      BeOH            C3H4_propyne    F2O     K2       OD-     SiF4
 AlF2-     BeOH+           C3H4_cyclo      F2O2    K2+      OH      SiH
 AlF2Cl    Be_OH_2         C3H5_allyl      FS2F    K2Br2    OH+     SiH+
 AlF3      BeS             C3H6_propylene  Fe      K2CO3    OH-     SiHBr3
 AlF4-     Be2             C3H6_cyclo      Fe+     K2C2N2   O2      SiHCl
 AlH       Be2Cl4          C3H6O_propylox  Fe_CO_5 K2Cl2    O2+     SiHCl3
 AlHCl     Be2F4           C3H6O_acetone   FeCl    K2F2     O2-     SiHF
 AlHCl2    Be2O            C3H6O_propanal  FeCl2   K2I2     O3      SiHF3
 AlHF      Be2OF2          C3H7_n_propyl   FeCl3   K2O      P       SiHI3
 AlHFCl    Be2O2           C3H7_i_propyl   FeO     K2O+     P+      SiH2
 AlHF2     Be3O3           C3H8            Fe_OH_2 K2O2     P-      SiH2Br2
 AlH2      Be4O4           C3H8O_1propanol Fe2Cl4  K2O2H2   PCl     SiH2Cl2
 AlH2Cl    Br              C3H8O_2propanol Fe2Cl6  K2SO4    PCl2    SiH2F2
 AlH2F     Br+             CNCOCN          Ga      Kr       PCl2-   SiH2I2
 AlH3      Br-             C3O2            Ga+     Kr+      PCl3    SiH3
 AlI       BrCl            C4              GaBr    li       PCl5    SiH3Br
 AlI2      BrF             C4H2_butadiyne  GaBr2   li+      PF      SiH3Cl
 AlI3      BrF3            C4H4_1_3-cyclo  GaBr3   li-      PF+     SiH3F
 AlN       BrF5            C4H6_butadiene  GaCl    liAlF4   PF-     SiH3I
 AlO       BrO             C4H6_1butyne    GaCl2   liBO2    PFCl    SiH4
 AlO+      OBrO            C4H6_2butyne    GaCl3   liBr     PFCl-   SiI
 AlO-      BrOO            C4H6_cyclo      GaF     liCl     PFCl2   SiI2
 AlOCl     BrO3            C4H8_1_butene   GaF2    liF      PFCl4   SiN
 AlOCl2    Br2             C4H8_cis2_buten GaF3    liH      PF2     SiO
 AlOF      BrBrO           C4H8_isobutene  GaH     liI      PF2-    SiO2
 AlOF2     BrOBr           C4H8_cyclo      GaI     liN      PF2Cl   SiS
 AlOF2-    C               C4H9_n_butyl    GaI2    liNO2    PF2Cl3  SiS2
 AlOH      C+              C4H9_i_butyl    GaI3    liNO3    PF3     Si2
 AlOHCl    C-              C4H9_s_butyl    GaO     liO      PF3Cl2  Si2C
 AlOHCl2   CBr             C4H9_t_butyl    GaOH    liOF     PF4Cl   Si2F6
 AlOHF     CBr2            C4H10_n_butane  Ga2Br2  liOH     PF5     Si2N
 AlOHF2    CBr3            C4H10_isobutane Ga2Br4  liON     PH      Si3
 AlO2      CBr4            C4N2            Ga2Br6  li2      PH2     Sn
 AlO2-     CCl             C5              Ga2Cl2  li2+     PH2-    Sn+
 Al_OH_2   CCl2            C5H6_1_3cyclo   Ga2Cl4  li2Br2   PH3     Sn-
 Al_OH_2Cl CCl2Br2         C5H8_cyclo      Ga2Cl6  li2F2    PN      SnBr
 Al_OH_2F  CCl3            C5H10_1_pentene Ga2F2   li2I2    PO      SnBr2
 Al_OH_3   CCl3Br          C5H10_cyclo     Ga2F4   li2O     PO-     SnBr3
 AlS       CCl4            C5H11_pentyl    Ga2F6   li2O+    POCl3   SnBr4
 AlS2      CF              C5H11_t_pentyl  Ga2I2   li2O2    POFCl2  SnCl
 Al2       CF+             C5H12_n_pentane Ga2I4   li2O2H2  POF2Cl  SnCl2
 Al2Br6    CFBr3           C5H12_i_pentane Ga2I6   li2SO4   POF3    SnCl3
 Al2C2     CFCl            CH3C_CH3_2CH3   Ga2O    li3+     PO2     SnCl4
 Al2Cl6    CFClBr2         C6D5_phenyl     Ge      li3Br3   PO2-    SnF
 Al2F6     CFCl2           C6D6            Ge+     li3Cl3   PS      SnF2
 Al2I6     CFCl2Br         C6H2            Ge-     li3F3    P2      SnF3
 Al2O      CFCl3           C6H5_phenyl     GeBr    li3I3    P2O3    SnF4
 Al2O+     CF2             C6H5O_phenoxy   GeBr2   Mg       P2O4    SnI
 Al2O2     CF2+            C6H6            GeBr3   Mg+      P2O5    SnI2
 Al2O2+    CF2Br2          C6H5OH_phenol   GeBr4   MgBr     P3      SnI3
 Al2O3     CF2Cl           C6H10_cyclo     GeCl    MgBr2    P3O6    SnI4
 Al2S      CF2ClBr         C6H12_1_hexene  GeCl2   MgCl     P4      SnO
 Al2S2     CF2Cl2          C6H12_cyclo     GeCl3   MgCl+    P4O6    SnO2
 Ar        CF3             C6H13_n_hexyl   GeCl4   MgCl2    P4O7    SnS
 Ar+       CF3+            C6H14_n_hexane  GeF     MgF      P4O8    SnS2
 B         CF3Br           C7H7_benzyl     GeF2    MgF+     P4O9    Sn2
 B+        CF3Cl           C7H8            GeF3    MgF2     P4O10   Sr
 B-        CF4             C7H8O_cresol_mx GeF4    MgF2+    Pb      Sr+
 BBr       CH+             C7H14_1_heptene GeH4    MgH      Pb+     SrBr
 BBr2      CHBr3           C7H15_n_heptyl  GeI     MgI      Pb-     SrBr2
 BBr3      CHCl            C7H16_n_heptane GeO     MgI2     PbBr    SrCl
 BC        CHClBr2         C7H16_2_methylh GeO2    MgN      PbBr2   SrCl+
 BC2       CHCl2           C8H8_styrene    GeS     MgO      PbBr3   SrCl2
 BCl       CHCl2Br         C8H10_ethylbenz GeS2    MgOH     PbBr4   SrF
 BCl+      CHCl3           C8H16_1_octene  Ge2     MgOH+    PbCl    SrF+
 BClOH     CHF             C8H17_n_octyl   H       Mg_OH_2  PbCl2   SrF2
 BCl_OH_2  CHFBr2          C8H18_n_octane  H+      MgS      PbCl3   SrH
 BCl2      CHFCl           C8H18_isooctane H-      Mg2      PbCl4   SrI
 BCl2+     CHFClBr         C9H19_n_nonyl   HAlO    Mg2F4    PbF     SrI2
 BCl2OH    CHFCl2          C10H8_naphthale HAlO2   Mn       PbF2    SrO
 BF        CHF2            C10H21_n_decyl  HBO     Mn+      PbF3    SrOH
 BFCl      CHF2Br          C12H9_o_bipheny HBO+    Mo       PbF4    SrOH+
 BFCl2     CHF2Cl          C12H10_biphenyl HBO2    Mo+      PbI     Sr_OH_2
 BFOH      CHF3            Ca              HBS     Mo-      PbI2    SrS
 BF_OH_2   CHI3            Ca+             HBS+    MoO      PbI3    Sr2
 BF2       CH2             CaBr            HCN     MoO2     PbI4    Ta
 BF2+      CH2Br2          CaBr2           HCO     MoO3     PbO     Ta+
 BF2-      CH2Cl           CaCl            HCO+    MoO3-    PbO2    Ta-
 BF2Cl     CH2ClBr         CaCl+           HCCN    Mo2O6    PbS     TaCl5
 BF2OH     CH2Cl2          CaCl2           HCCO    Mo3O9    PbS2    TaO
 BF3       CH2F            CaF             HCl     Mo4O12   Rb      TaO2
 BF4-      CH2FBr          CaF+            HD      Mo5O15   Rb+     Ti
 BH        CH2FCl          CaF2            HD+     N        Rb-     Ti+
 BHCl      CH2F2           CaH             HDO     N+       RbBO2   Ti-
 BHCl2     CH2I2           CaI             HDO2    N-       RbBr    TiCl
 BHF       CH3             CaI2            HF      NCO      RbCl    TiCl2
 BHFCl     CH3Br           CaO             HI      ND       RbF     TiCl3
 BHF2      CH3Cl           CaO+            HNC     ND2      RbH     TiCl4
 BH2       CH3F            CaOH            HNCO    ND3      RbI     TiO
 BH2Cl     CH3I            CaOH+           HNO     NF       RbK     TiO+
 BH2F      CH2OH           Ca_OH_2         HNO2    NF2      Rbli    TiOCl
 BH3       CH2OH+          CaS             HNO3    NF3      RbNO2   TiOCl2
 BH3NH3    CH3O            Ca2             HOCl    NH       RbNO3   TiO2
 BH4       CH4             Cd              HOF     NH+      RbNa    U
 BI        CH3OH           Cd+             HO2     NHF      RbO     UF
 BI2       CH3OOH          Cl              HO2-    NHF2     RbOH    UF+
 BI3       CI              Cl+             HPO     NH2      Rb2Br2  UF-
 BN        CI2             Cl-             HSO3F   NH2F     Rb2Cl2  UF2
 BO        CI3             ClCN            H2      NH3      Rb2F2   UF2+
 BO-       CI4             ClF             H2+     NH2OH    Rb2I2   UF2-
 BOCl      CN              ClF3            H2-     NH4+     Rb2O    UF3
 BOCl2     CN+             ClF5            HBOH    NO       Rb2O2   UF3+
 BOF       CN-             ClO             HCOOH   NOCl     Rb2O2H2 UF3-
 BOF2      CNN             ClO2            H2F2    NOF      Rb2SO4  UF4
 BOH       CO              Cl2             H2O     NOF3     Rn      UF4+
 BO2       CO+             Cl2O            H2O+    NO2      Rn+     UF4-
 BO2-      COCl            Co              H2O2    NO2-     S       UF5
 B_OH_2    COCl2           Co+             H2S     NO2Cl    S+      UF5+
 BS        COFCl           Co-             H2SO4   NO2F     S-      UF5-
 BS2       COF2            Cr              H2BOH   NO3      SCl     UF6
 B2        COHCl           Cr+             HB_OH_2 NO3-     SCl2    UF6-
 B2C       COHF            Cr-             H3BO3   NO3F     SCl2+   UO
 B2Cl4     COS             CrN             H3B3O3  N2       SD      UO+
 B2F4      CO2             CrO             H3B3O6  N2+      SF      UOF
 B2H       CO2+            CrO2            H3F3    N2-      SF+     UOF2
 B2H2      COOH            CrO3            H3O+    NCN      SF-     UOF3
 B2H3      CP              CrO3-           H4F4    N2D2_cis SF2     UOF4
 B2H3_db   CS              Cs              H5F5    N2F2     SF2+    UO2
 B2H4      CS2             Cs+             H6F6    N2F4     SF2-    UO2+
 B2H4_db   C2              Cs-             H7F7    N2H2     SF3     UO2-
 B2H5      C2+             CsBO2           He      NH2NO2   SF3+    UO2F
 B2H5_db   C2-             CsBr            He+     N2H4     SF3-    UO2F2
 B2H6      C2Cl            CsCl            Hg      N2O      SF4     UO3
 B2O       C2Cl2           CsF             Hg+     N2O+     SF4+    UO3-
 B2O2      C2Cl3           CsH             HgBr2   N2O3     SF4-    V
 B2O3      C2Cl4           CsI             I       N2O4     SF5     V+
 B2_OH_4   C2Cl6           Csli            I+      N2O5     SF5+    V-
 B2S       C2F             CsNO2           I-      N3       SF5-    VCl4
 B2S2      C2FCl           CsNO3           IF5     N3H      SF6     VN
 B2S3      C2FCl3          CsNa            IF7     Na       SF6-    VO
 B3H7_C2v  C2F2            CsO             I2      Na+      SH      VO2
 B3H7_Cs   C2F2Cl2         CsOH            In      Na-      SH-     V4O10
 B3H9      C2F3            CsRb            In+     NaAlF4   SN      W
 B3N3H6    C2F3Cl          Cs2             InBr    NaBO2    SO      W+
 B3O3Cl3   C2F4            Cs2Br2          InBr2   NaBr     SO-     W-
 B3O3FCl2  C2F6            Cs2CO3          InBr3   NaCN     SOF2    WCl6
 B3O3F2Cl  C2H             Cs2Cl2          InCl    NaCl     SO2     WO
 B3O3F3    C2HCl           Cs2F2           InCl2   NaF      SO2-    WOCl4
 B4H4      C2HCl3          Cs2I2           InCl3   NaH      SO2Cl2  WO2
 B4H10     C2HF            Cs2O            InF     NaI      SO2FCl  WO2Cl2
 B4H12     C2HFCl2         Cs2O+           InF2    Nali     SO2F2   WO3
 B5H9      C2HF2Cl         Cs2O2           InF3    NaNO2    SO3     WO3-
 Ba        C2HF3           Cs2O2H2         InH     NaNO3    S2      Xe
 Ba+       C2H2_vinylidene Cs2SO4          InI     NaO      S2-     Xe+
 BaBr      C2H2Cl2         Cu              InI2    NaOH     S2Cl2   Zn
 BaBr2     C2H2FCl         Cu+             InI3    NaOH+    S2F2    Zn+
 BaCl      C2H2F2          Cu-             InO     Na2      S2O     Zr
 BaCl+     CH2CO_ketene    CuCl            InOH    Na2Br2   S3      Zr+
 BaCl2     O_CH_2O         CuF             In2Br2  Na2Cl2   S4      Zr-
 BaF       HO_CO_2OH       CuF2            In2Br4  Na2F2    S5      ZrN
 BaF+      C2H3_vinyl      CuO             In2Br6  Na2I2    S6      ZrO
 BaF2      CH2Br-COOH      Cu2             In2Cl2  Na2O     S7      ZrO+
 BaH       C2H3Cl          Cu3Cl3          In2Cl4  Na2O+    S8      ZrO2
 BaI       CH2Cl-COOH      D               In2Cl6  Na2O2    Sc
 BaI2      C2H3F           D+              In2F2   Na2O2H2  Sc+
 BaO       CH3CN           D-              In2F4   Na2SO4   Sc-
 BaO+      CH3CO_acetyl    DBr             In2F6   Na3Cl3   ScO
 BaOH      C2H4            DCl             In2I2   Na3F3    ScO+
</pre>
</HTML>"));
        end SingleGasesData;
      annotation (Documentation(info="<html>

</html>"));
      end Common;
    annotation (Documentation(info="<HTML>
<p>This package contains data for the 1241 ideal gases from</p>
<blockquote>
  <p>McBride B.J., Zehe M.J., and Gordon S. (2002): <b>NASA Glenn Coefficients
  for Calculating Thermodynamic Properties of Individual Species</b>. NASA
  report TP-2002-211556</p>
</blockquote>
<p>Medium models for some of these gases are available in package
<a href=\"modelica://Modelica.Media.IdealGases.SingleGases\">IdealGases.SingleGases</a>
and some examples for mixtures are available in package <a href=\"modelica://Modelica.Media.IdealGases.MixtureGases\">IdealGases.MixtureGases</a>
</p>
<h4>Using and Adapting Medium Models</h4>
<p>
The data records allow computing the ideal gas specific enthalpy, specific entropy and heat capacity of the substances listed below. From them, even the Gibbs energy and equilibrium constants for reactions can be computed. Critical data that is needed for computing the viscosity and thermal conductivity is not included. In order to add mixtures or single substance medium packages that are
subtypes of
<a href=\"modelica://Modelica.Media.Interfaces.PartialMedium\">Interfaces.PartialMedium</a>
(i.e., can be utilized at all places where PartialMedium is defined),
a few additional steps have to be performed:
</p>
<ol>
<li>
All single gas media need to define a constant instance of record
<a href=\"modelica://Modelica.Media.Interfaces.PartialMedium.FluidConstants\">IdealGases.Common.SingleGasNasa.FluidConstants</a>.
For 37 ideal gases such records are provided in package
<a href=\"modelica://Modelica.Media.IdealGases.Common.FluidData\">IdealGases.Common.FluidData</a>.
For the other gases, such a record instance has to be provided by the user, e.g., by getting
the data from a commercial or public data base. A public source of the needed data is for example the <a href=\"http://webbook.nist.gov/chemistry/\"> NIST Chemistry WebBook</a></li>

<li>When the data is available, and a user has an instance of a
<a href=\"modelica://Modelica.Media.Interfaces.PartialMedium.FluidConstants\">FluidConstants</a> record filled with data, a medium package has to be written. Note that only the dipole moment, the accentric factor and critical data are necessary for the viscosity and thermal conductivity functions.</li>
<li><ul>
<li>For single components, a new package following the pattern in
<a href=\"modelica://Modelica.Media.IdealGases.SingleGases\">IdealGases.SingleGases</a> has to be created, pointing both to a data record for cp and to a user-defined fluidContants record.</li>
<li>For mixtures of several components, a new package following the pattern in
<a href=\"modelica://Modelica.Media.IdealGases.MixtureGases\">IdealGases.MixtureGases</a> has to be created, building an array of data records for cp and an array of (partly) user-defined fluidContants records.</li>
</ul></li>
</ol>
<p>Note that many properties can computed for the full set of 1241 gases listed below, but due to the missing viscosity and thermal conductivity functions, no fully Modelica.Media-compliant media can be defined.</p>
<p>
Data records for heat capacity, specific enthalpy and specific entropy exist for the following substances and ions:
</p>
<pre>
 Ag        BaOH+           C2H4O_ethylen_o DF      In2I4    Nb      ScO2
 Ag+       Ba_OH_2         CH3CHO_ethanal  DOCl    In2I6    Nb+     Sc2O
 Ag-       BaS             CH3COOH         DO2     In2O     Nb-     Sc2O2
 Air       Ba2             OHCH2COOH       DO2-    K        NbCl5   Si
 Al        Be              C2H5            D2      K+       NbO     Si+
 Al+       Be+             C2H5Br          D2+     K-       NbOCl3  Si-
 Al-       Be++            C2H6            D2-     KAlF4    NbO2    SiBr
 AlBr      BeBr            CH3N2CH3        D2O     KBO2     Ne      SiBr2
 AlBr2     BeBr2           C2H5OH          D2O2    KBr      Ne+     SiBr3
 AlBr3     BeCl            CH3OCH3         D2S     KCN      Ni      SiBr4
 AlC       BeCl2           CH3O2CH3        e-      KCl      Ni+     SiC
 AlC2      BeF             CCN             F       KF       Ni-     SiC2
 AlCl      BeF2            CNC             F+      KH       NiCl    SiCl
 AlCl+     BeH             OCCN            F-      KI       NiCl2   SiCl2
 AlCl2     BeH+            C2N2            FCN     Kli      NiO     SiCl3
 AlCl3     BeH2            C2O             FCO     KNO2     NiS     SiCl4
 AlF       BeI             C3              FO      KNO3     O       SiF
 AlF+      BeI2            C3H3_1_propynl  FO2_FOO KNa      O+      SiFCl
 AlFCl     BeN             C3H3_2_propynl  FO2_OFO KO       O-      SiF2
 AlFCl2    BeO             C3H4_allene     F2      KOH      OD      SiF3
 AlF2      BeOH            C3H4_propyne    F2O     K2       OD-     SiF4
 AlF2-     BeOH+           C3H4_cyclo      F2O2    K2+      OH      SiH
 AlF2Cl    Be_OH_2         C3H5_allyl      FS2F    K2Br2    OH+     SiH+
 AlF3      BeS             C3H6_propylene  Fe      K2CO3    OH-     SiHBr3
 AlF4-     Be2             C3H6_cyclo      Fe+     K2C2N2   O2      SiHCl
 AlH       Be2Cl4          C3H6O_propylox  Fe_CO_5 K2Cl2    O2+     SiHCl3
 AlHCl     Be2F4           C3H6O_acetone   FeCl    K2F2     O2-     SiHF
 AlHCl2    Be2O            C3H6O_propanal  FeCl2   K2I2     O3      SiHF3
 AlHF      Be2OF2          C3H7_n_propyl   FeCl3   K2O      P       SiHI3
 AlHFCl    Be2O2           C3H7_i_propyl   FeO     K2O+     P+      SiH2
 AlHF2     Be3O3           C3H8            Fe_OH_2 K2O2     P-      SiH2Br2
 AlH2      Be4O4           C3H8O_1propanol Fe2Cl4  K2O2H2   PCl     SiH2Cl2
 AlH2Cl    Br              C3H8O_2propanol Fe2Cl6  K2SO4    PCl2    SiH2F2
 AlH2F     Br+             CNCOCN          Ga      Kr       PCl2-   SiH2I2
 AlH3      Br-             C3O2            Ga+     Kr+      PCl3    SiH3
 AlI       BrCl            C4              GaBr    li       PCl5    SiH3Br
 AlI2      BrF             C4H2_butadiyne  GaBr2   li+      PF      SiH3Cl
 AlI3      BrF3            C4H4_1_3-cyclo  GaBr3   li-      PF+     SiH3F
 AlN       BrF5            C4H6_butadiene  GaCl    liAlF4   PF-     SiH3I
 AlO       BrO             C4H6_1butyne    GaCl2   liBO2    PFCl    SiH4
 AlO+      OBrO            C4H6_2butyne    GaCl3   liBr     PFCl-   SiI
 AlO-      BrOO            C4H6_cyclo      GaF     liCl     PFCl2   SiI2
 AlOCl     BrO3            C4H8_1_butene   GaF2    liF      PFCl4   SiN
 AlOCl2    Br2             C4H8_cis2_buten GaF3    liH      PF2     SiO
 AlOF      BrBrO           C4H8_isobutene  GaH     liI      PF2-    SiO2
 AlOF2     BrOBr           C4H8_cyclo      GaI     liN      PF2Cl   SiS
 AlOF2-    C               C4H9_n_butyl    GaI2    liNO2    PF2Cl3  SiS2
 AlOH      C+              C4H9_i_butyl    GaI3    liNO3    PF3     Si2
 AlOHCl    C-              C4H9_s_butyl    GaO     liO      PF3Cl2  Si2C
 AlOHCl2   CBr             C4H9_t_butyl    GaOH    liOF     PF4Cl   Si2F6
 AlOHF     CBr2            C4H10_n_butane  Ga2Br2  liOH     PF5     Si2N
 AlOHF2    CBr3            C4H10_isobutane Ga2Br4  liON     PH      Si3
 AlO2      CBr4            C4N2            Ga2Br6  li2      PH2     Sn
 AlO2-     CCl             C5              Ga2Cl2  li2+     PH2-    Sn+
 Al_OH_2   CCl2            C5H6_1_3cyclo   Ga2Cl4  li2Br2   PH3     Sn-
 Al_OH_2Cl CCl2Br2         C5H8_cyclo      Ga2Cl6  li2F2    PN      SnBr
 Al_OH_2F  CCl3            C5H10_1_pentene Ga2F2   li2I2    PO      SnBr2
 Al_OH_3   CCl3Br          C5H10_cyclo     Ga2F4   li2O     PO-     SnBr3
 AlS       CCl4            C5H11_pentyl    Ga2F6   li2O+    POCl3   SnBr4
 AlS2      CF              C5H11_t_pentyl  Ga2I2   li2O2    POFCl2  SnCl
 Al2       CF+             C5H12_n_pentane Ga2I4   li2O2H2  POF2Cl  SnCl2
 Al2Br6    CFBr3           C5H12_i_pentane Ga2I6   li2SO4   POF3    SnCl3
 Al2C2     CFCl            CH3C_CH3_2CH3   Ga2O    li3+     PO2     SnCl4
 Al2Cl6    CFClBr2         C6D5_phenyl     Ge      li3Br3   PO2-    SnF
 Al2F6     CFCl2           C6D6            Ge+     li3Cl3   PS      SnF2
 Al2I6     CFCl2Br         C6H2            Ge-     li3F3    P2      SnF3
 Al2O      CFCl3           C6H5_phenyl     GeBr    li3I3    P2O3    SnF4
 Al2O+     CF2             C6H5O_phenoxy   GeBr2   Mg       P2O4    SnI
 Al2O2     CF2+            C6H6            GeBr3   Mg+      P2O5    SnI2
 Al2O2+    CF2Br2          C6H5OH_phenol   GeBr4   MgBr     P3      SnI3
 Al2O3     CF2Cl           C6H10_cyclo     GeCl    MgBr2    P3O6    SnI4
 Al2S      CF2ClBr         C6H12_1_hexene  GeCl2   MgCl     P4      SnO
 Al2S2     CF2Cl2          C6H12_cyclo     GeCl3   MgCl+    P4O6    SnO2
 Ar        CF3             C6H13_n_hexyl   GeCl4   MgCl2    P4O7    SnS
 Ar+       CF3+            C6H14_n_hexane  GeF     MgF      P4O8    SnS2
 B         CF3Br           C7H7_benzyl     GeF2    MgF+     P4O9    Sn2
 B+        CF3Cl           C7H8            GeF3    MgF2     P4O10   Sr
 B-        CF4             C7H8O_cresol_mx GeF4    MgF2+    Pb      Sr+
 BBr       CH+             C7H14_1_heptene GeH4    MgH      Pb+     SrBr
 BBr2      CHBr3           C7H15_n_heptyl  GeI     MgI      Pb-     SrBr2
 BBr3      CHCl            C7H16_n_heptane GeO     MgI2     PbBr    SrCl
 BC        CHClBr2         C7H16_2_methylh GeO2    MgN      PbBr2   SrCl+
 BC2       CHCl2           C8H8_styrene    GeS     MgO      PbBr3   SrCl2
 BCl       CHCl2Br         C8H10_ethylbenz GeS2    MgOH     PbBr4   SrF
 BCl+      CHCl3           C8H16_1_octene  Ge2     MgOH+    PbCl    SrF+
 BClOH     CHF             C8H17_n_octyl   H       Mg_OH_2  PbCl2   SrF2
 BCl_OH_2  CHFBr2          C8H18_n_octane  H+      MgS      PbCl3   SrH
 BCl2      CHFCl           C8H18_isooctane H-      Mg2      PbCl4   SrI
 BCl2+     CHFClBr         C9H19_n_nonyl   HAlO    Mg2F4    PbF     SrI2
 BCl2OH    CHFCl2          C10H8_naphthale HAlO2   Mn       PbF2    SrO
 BF        CHF2            C10H21_n_decyl  HBO     Mn+      PbF3    SrOH
 BFCl      CHF2Br          C12H9_o_bipheny HBO+    Mo       PbF4    SrOH+
 BFCl2     CHF2Cl          C12H10_biphenyl HBO2    Mo+      PbI     Sr_OH_2
 BFOH      CHF3            Ca              HBS     Mo-      PbI2    SrS
 BF_OH_2   CHI3            Ca+             HBS+    MoO      PbI3    Sr2
 BF2       CH2             CaBr            HCN     MoO2     PbI4    Ta
 BF2+      CH2Br2          CaBr2           HCO     MoO3     PbO     Ta+
 BF2-      CH2Cl           CaCl            HCO+    MoO3-    PbO2    Ta-
 BF2Cl     CH2ClBr         CaCl+           HCCN    Mo2O6    PbS     TaCl5
 BF2OH     CH2Cl2          CaCl2           HCCO    Mo3O9    PbS2    TaO
 BF3       CH2F            CaF             HCl     Mo4O12   Rb      TaO2
 BF4-      CH2FBr          CaF+            HD      Mo5O15   Rb+     Ti
 BH        CH2FCl          CaF2            HD+     N        Rb-     Ti+
 BHCl      CH2F2           CaH             HDO     N+       RbBO2   Ti-
 BHCl2     CH2I2           CaI             HDO2    N-       RbBr    TiCl
 BHF       CH3             CaI2            HF      NCO      RbCl    TiCl2
 BHFCl     CH3Br           CaO             HI      ND       RbF     TiCl3
 BHF2      CH3Cl           CaO+            HNC     ND2      RbH     TiCl4
 BH2       CH3F            CaOH            HNCO    ND3      RbI     TiO
 BH2Cl     CH3I            CaOH+           HNO     NF       RbK     TiO+
 BH2F      CH2OH           Ca_OH_2         HNO2    NF2      Rbli    TiOCl
 BH3       CH2OH+          CaS             HNO3    NF3      RbNO2   TiOCl2
 BH3NH3    CH3O            Ca2             HOCl    NH       RbNO3   TiO2
 BH4       CH4             Cd              HOF     NH+      RbNa    U
 BI        CH3OH           Cd+             HO2     NHF      RbO     UF
 BI2       CH3OOH          Cl              HO2-    NHF2     RbOH    UF+
 BI3       CI              Cl+             HPO     NH2      Rb2Br2  UF-
 BN        CI2             Cl-             HSO3F   NH2F     Rb2Cl2  UF2
 BO        CI3             ClCN            H2      NH3      Rb2F2   UF2+
 BO-       CI4             ClF             H2+     NH2OH    Rb2I2   UF2-
 BOCl      CN              ClF3            H2-     NH4+     Rb2O    UF3
 BOCl2     CN+             ClF5            HBOH    NO       Rb2O2   UF3+
 BOF       CN-             ClO             HCOOH   NOCl     Rb2O2H2 UF3-
 BOF2      CNN             ClO2            H2F2    NOF      Rb2SO4  UF4
 BOH       CO              Cl2             H2O     NOF3     Rn      UF4+
 BO2       CO+             Cl2O            H2O+    NO2      Rn+     UF4-
 BO2-      COCl            Co              H2O2    NO2-     S       UF5
 B_OH_2    COCl2           Co+             H2S     NO2Cl    S+      UF5+
 BS        COFCl           Co-             H2SO4   NO2F     S-      UF5-
 BS2       COF2            Cr              H2BOH   NO3      SCl     UF6
 B2        COHCl           Cr+             HB_OH_2 NO3-     SCl2    UF6-
 B2C       COHF            Cr-             H3BO3   NO3F     SCl2+   UO
 B2Cl4     COS             CrN             H3B3O3  N2       SD      UO+
 B2F4      CO2             CrO             H3B3O6  N2+      SF      UOF
 B2H       CO2+            CrO2            H3F3    N2-      SF+     UOF2
 B2H2      COOH            CrO3            H3O+    NCN      SF-     UOF3
 B2H3      CP              CrO3-           H4F4    N2D2_cis SF2     UOF4
 B2H3_db   CS              Cs              H5F5    N2F2     SF2+    UO2
 B2H4      CS2             Cs+             H6F6    N2F4     SF2-    UO2+
 B2H4_db   C2              Cs-             H7F7    N2H2     SF3     UO2-
 B2H5      C2+             CsBO2           He      NH2NO2   SF3+    UO2F
 B2H5_db   C2-             CsBr            He+     N2H4     SF3-    UO2F2
 B2H6      C2Cl            CsCl            Hg      N2O      SF4     UO3
 B2O       C2Cl2           CsF             Hg+     N2O+     SF4+    UO3-
 B2O2      C2Cl3           CsH             HgBr2   N2O3     SF4-    V
 B2O3      C2Cl4           CsI             I       N2O4     SF5     V+
 B2_OH_4   C2Cl6           Csli            I+      N2O5     SF5+    V-
 B2S       C2F             CsNO2           I-      N3       SF5-    VCl4
 B2S2      C2FCl           CsNO3           IF5     N3H      SF6     VN
 B2S3      C2FCl3          CsNa            IF7     Na       SF6-    VO
 B3H7_C2v  C2F2            CsO             I2      Na+      SH      VO2
 B3H7_Cs   C2F2Cl2         CsOH            In      Na-      SH-     V4O10
 B3H9      C2F3            CsRb            In+     NaAlF4   SN      W
 B3N3H6    C2F3Cl          Cs2             InBr    NaBO2    SO      W+
 B3O3Cl3   C2F4            Cs2Br2          InBr2   NaBr     SO-     W-
 B3O3FCl2  C2F6            Cs2CO3          InBr3   NaCN     SOF2    WCl6
 B3O3F2Cl  C2H             Cs2Cl2          InCl    NaCl     SO2     WO
 B3O3F3    C2HCl           Cs2F2           InCl2   NaF      SO2-    WOCl4
 B4H4      C2HCl3          Cs2I2           InCl3   NaH      SO2Cl2  WO2
 B4H10     C2HF            Cs2O            InF     NaI      SO2FCl  WO2Cl2
 B4H12     C2HFCl2         Cs2O+           InF2    Nali     SO2F2   WO3
 B5H9      C2HF2Cl         Cs2O2           InF3    NaNO2    SO3     WO3-
 Ba        C2HF3           Cs2O2H2         InH     NaNO3    S2      Xe
 Ba+       C2H2_vinylidene Cs2SO4          InI     NaO      S2-     Xe+
 BaBr      C2H2Cl2         Cu              InI2    NaOH     S2Cl2   Zn
 BaBr2     C2H2FCl         Cu+             InI3    NaOH+    S2F2    Zn+
 BaCl      C2H2F2          Cu-             InO     Na2      S2O     Zr
 BaCl+     CH2CO_ketene    CuCl            InOH    Na2Br2   S3      Zr+
 BaCl2     O_CH_2O         CuF             In2Br2  Na2Cl2   S4      Zr-
 BaF       HO_CO_2OH       CuF2            In2Br4  Na2F2    S5      ZrN
 BaF+      C2H3_vinyl      CuO             In2Br6  Na2I2    S6      ZrO
 BaF2      CH2Br-COOH      Cu2             In2Cl2  Na2O     S7      ZrO+
 BaH       C2H3Cl          Cu3Cl3          In2Cl4  Na2O+    S8      ZrO2
 BaI       CH2Cl-COOH      D               In2Cl6  Na2O2    Sc
 BaI2      C2H3F           D+              In2F2   Na2O2H2  Sc+
 BaO       CH3CN           D-              In2F4   Na2SO4   Sc-
 BaO+      CH3CO_acetyl    DBr             In2F6   Na3Cl3   ScO
 BaOH      C2H4            DCl             In2I2   Na3F3    ScO+
</pre></HTML>"));
    end IdealGases;

    package Incompressible
    "Medium model for T-dependent properties, defined by tables or polynomials"
      extends Modelica.Icons.VariantsPackage;
      import Modelica.Constants;
      import Modelica.Math;

      package Common "Common data structures"
        extends Modelica.Icons.Package;

        record BaseProps_Tpoly "Fluid state record"
          extends Modelica.Icons.Record;
          SI.Temperature T "Temperature";
          SI.Pressure p "Pressure";
          //    SI.Density d "Density";
        end BaseProps_Tpoly;
      end Common;

      package TableBased "Incompressible medium properties based on tables"
        import Poly = Modelica.Media.Incompressible.TableBased.Polynomials_Temp;
        extends Modelica.Media.Interfaces.PartialMedium(
           ThermoStates = if enthalpyOfT then Modelica.Media.Interfaces.Choices.IndependentVariables.T
                                                                             else Modelica.Media.Interfaces.Choices.IndependentVariables.pT,
           final reducedX=true,
           final fixedX = true,
           mediumName="tableMedium",
           redeclare record ThermodynamicState=Common.BaseProps_Tpoly,
           singleState=true,
           reference_p = 1.013e5,
           Temperature(min = T_min, max = T_max));

        constant Boolean enthalpyOfT=true
        "True if enthalpy is approximated as a function of T only, (p-dependence neglected)";

        constant Boolean densityOfT = size(tableDensity,1) > 1
        "True if density is a function of temperature";

        constant Temperature T_min "Minimum temperature valid for medium model";

        constant Temperature T_max "Maximum temperature valid for medium model";

        constant Temperature T0=273.15 "Reference Temperature";

        constant SpecificEnthalpy h0=0 "Reference enthalpy at T0, reference_p";

        constant SpecificEntropy s0=0 "Reference entropy at T0, reference_p";

        constant MolarMass MM_const=0.1 "Molar mass";

        constant Integer npol=2 "Degree of polynomial used for fitting";

        constant Integer npolDensity=npol
        "Degree of polynomial used for fitting rho(T)";

        constant Integer npolHeatCapacity=npol
        "Degree of polynomial used for fitting Cp(T)";

        constant Integer npolViscosity=npol
        "Degree of polynomial used for fitting eta(T)";

        constant Integer npolConductivity=npol
        "Degree of polynomial used for fitting lambda(T)";

        constant Integer neta=size(tableViscosity,1)
        "Number of data points for viscosity";

        constant Real[:,2] tableDensity "Table for rho(T)";

        constant Real[:,2] tableHeatCapacity "Table for Cp(T)";

        constant Real[:,2] tableViscosity "Table for eta(T)";

        constant Real[:,2] tableConductivity "Table for lambda(T)";

        constant Boolean TinK "True if T[K],Kelvin used for table temperatures";

        constant Boolean hasDensity = not (size(tableDensity,1)==0)
        "True if table tableDensity is present";

        constant Boolean hasHeatCapacity = not (size(tableHeatCapacity,1)==0)
        "True if table tableHeatCapacity is present";

        constant Boolean hasViscosity = not (size(tableViscosity,1)==0)
        "True if table tableViscosity is present";

        final constant Real invTK[neta] = if size(tableViscosity,1) > 0 then
            (if TinK then 1 ./ tableViscosity[:,1] else 1 ./ Cv.from_degC(tableViscosity[:,1])) else fill(0,neta);

        final constant Real poly_rho[:] = if hasDensity then
                                             Poly.fitting(tableDensity[:,1],tableDensity[:,2],npolDensity) else
                                               zeros(npolDensity+1);

        final constant Real poly_Cp[:] = if hasHeatCapacity then
                                             Poly.fitting(tableHeatCapacity[:,1],tableHeatCapacity[:,2],npolHeatCapacity) else
                                               zeros(npolHeatCapacity+1);

        final constant Real poly_eta[:] = if hasViscosity then
                                             Poly.fitting(invTK, Math.log(tableViscosity[:,2]),npolViscosity) else
                                               zeros(npolViscosity+1);

        final constant Real poly_lam[:] = if size(tableConductivity,1)>0 then
                                             Poly.fitting(tableConductivity[:,1],tableConductivity[:,2],npolConductivity) else
                                               zeros(npolConductivity+1);

        redeclare model extends BaseProperties(
          final standardOrderComponents=true,
          p_bar=Cv.to_bar(p),
          T_degC(start = T_start-273.15)=Cv.to_degC(T),
          T(start = T_start,
            stateSelect=if preferredMediumStates then StateSelect.prefer else StateSelect.default))
        "Base properties of T dependent medium"
        //  redeclare parameter SpecificHeatCapacity R=Modelica.Constants.R,

          SI.SpecificHeatCapacity cp "Specific heat capacity";
          parameter SI.Temperature T_start = 298.15 "Initial temperature";
        equation
          assert(hasDensity,"Medium " + mediumName +
                            " can not be used without assigning tableDensity.");
          assert(T >= T_min and T <= T_max, "Temperature T (= " + String(T) +
                 " K) is not in the allowed range (" + String(T_min) +
                 " K <= T <= " + String(T_max) + " K) required from medium model \""
                 + mediumName + "\".");
          R = Modelica.Constants.R;
          cp = Poly.evaluate(poly_Cp,if TinK then T else T_degC);
          h = if enthalpyOfT then h_T(T) else  h_pT(p,T,densityOfT);
          u = h - (if singleState then  reference_p/d else state.p/d);
          d = Poly.evaluate(poly_rho,if TinK then T else T_degC);
          state.T = T;
          state.p = p;
          MM = MM_const;
          annotation(Documentation(info="<html>
<p>
Note that the inner energy neglects the pressure dependence, which is only
true for an incompressible medium with d = constant. The neglected term is
p-reference_p)/rho*(T/rho)*(partial rho /partial T). This is very small for
liquids due to proportionality to 1/d^2, but can be problematic for gases that are
modeled incompressible.
</p>
<p>It should be noted that incompressible media only have 1 state per control volume (usually T),
but have both T and p as inputs for fully correct properties. The error of using only T-dependent
properties is small, therefore a Boolean flag enthalpyOfT exists. If it is true, the
enumeration Choices.independentVariables  is set to  Choices.independentVariables.T otherwise
it is set to Choices.independentVariables.pT.</p>
<p>
Enthalpy is never a function of T only (h = h(T) + (p-reference_p)/d), but the
error is also small and non-linear systems can be avoided. In particular,
non-linear systems are small and local as opposed to large and over all volumes.
</p>

<p>
Entropy is calculated as
</p>
<pre>
  s = s0 + integral(Cp(T)/T,dt)
</pre>
<p>
which is only exactly true for a fluid with constant density d=d0.
</p>
</html>"));
        end BaseProperties;

        redeclare function extends setState_pTX
        "Returns state record, given pressure and temperature"
        algorithm
          state := ThermodynamicState(p=p,T=T);
          annotation(smoothOrder=3);
        end setState_pTX;

        redeclare function extends setState_dTX
        "Returns state record, given pressure and temperature"
        algorithm
          assert(false, "For incompressible media with d(T) only, state can not be set from density and temperature");
        end setState_dTX;

        redeclare function extends setState_phX
        "Returns state record, given pressure and specific enthalpy"
        algorithm
          state :=ThermodynamicState(p=p,T=T_ph(p,h));
          annotation(Inline=true,smoothOrder=3);
        end setState_phX;

        redeclare function extends setState_psX
        "Returns state record, given pressure and specific entropy"
        algorithm
          state :=ThermodynamicState(p=p,T=T_ps(p,s));
          annotation(Inline=true,smoothOrder=3);
        end setState_psX;

            redeclare function extends setSmoothState
        "Return thermodynamic state so that it smoothly approximates: if x > 0 then state_a else state_b"
            algorithm
              state :=ThermodynamicState(p=Media.Common.smoothStep(x, state_a.p, state_b.p, x_small),
                                         T=Media.Common.smoothStep(x, state_a.T, state_b.T, x_small));
              annotation(Inline=true,smoothOrder=3);
            end setSmoothState;

        redeclare function extends specificHeatCapacityCv
        "Specific heat capacity at constant volume (or pressure) of medium"

        algorithm
          assert(hasHeatCapacity,"Specific Heat Capacity, Cv, is not defined for medium "
                                                 + mediumName + ".");
          cv := Poly.evaluate(poly_Cp,if TinK then state.T else state.T - 273.15);
         annotation(smoothOrder=2);
        end specificHeatCapacityCv;

        redeclare function extends specificHeatCapacityCp
        "Specific heat capacity at constant volume (or pressure) of medium"

        algorithm
          assert(hasHeatCapacity,"Specific Heat Capacity, Cv, is not defined for medium "
                                                 + mediumName + ".");
          cp := Poly.evaluate(poly_Cp,if TinK then state.T else state.T - 273.15);
         annotation(smoothOrder=2);
        end specificHeatCapacityCp;

        redeclare function extends dynamicViscosity
        "Return dynamic viscosity as a function of the thermodynamic state record"

        algorithm
          assert(size(tableViscosity,1)>0,"DynamicViscosity, eta, is not defined for medium "
                                                 + mediumName + ".");
          eta := Math.exp(Poly.evaluate(poly_eta, 1/state.T));
         annotation(smoothOrder=2);
        end dynamicViscosity;

        redeclare function extends thermalConductivity
        "Return thermal conductivity as a function of the thermodynamic state record"

        algorithm
          assert(size(tableConductivity,1)>0,"ThermalConductivity, lambda, is not defined for medium "
                                                 + mediumName + ".");
          lambda := Poly.evaluate(poly_lam,if TinK then state.T else Cv.to_degC(state.T));
         annotation(smoothOrder=2);
        end thermalConductivity;

        function s_T "Compute specific entropy"
          extends Modelica.Icons.Function;
          input Temperature T "Temperature";
          output SpecificEntropy s "Specific entropy";
        algorithm
          s := s0 + (if TinK then
            Poly.integralValue(poly_Cp[1:npol],T, T0) else
            Poly.integralValue(poly_Cp[1:npol],Cv.to_degC(T),Cv.to_degC(T0)))
            + Modelica.Math.log(T/T0)*
            Poly.evaluate(poly_Cp,if TinK then 0 else Modelica.Constants.T_zero);
         annotation(Inline=true,smoothOrder=2);
        end s_T;

        redeclare function extends specificEntropy "Return specific entropy
 as a function of the thermodynamic state record"

      protected
          Integer npol=size(poly_Cp,1)-1;
        algorithm
          assert(hasHeatCapacity,"Specific Entropy, s(T), is not defined for medium "
                                                 + mediumName + ".");
          s := s_T(state.T);
         annotation(smoothOrder=2);
        end specificEntropy;

        function h_T "Compute specific enthalpy from temperature"
          import Modelica.SIunits.Conversions.to_degC;
          extends Modelica.Icons.Function;
          input SI.Temperature T "Temperature";
          output SI.SpecificEnthalpy h "Specific enthalpy at p, T";
        algorithm
          h :=h0 + Poly.integralValue(poly_Cp, if TinK then T else Cv.to_degC(T), if TinK then
          T0 else Cv.to_degC(T0));
         annotation(derivative=h_T_der);
        end h_T;

        function h_T_der "Compute specific enthalpy from temperature"
          import Modelica.SIunits.Conversions.to_degC;
          extends Modelica.Icons.Function;
          input SI.Temperature T "Temperature";
          input Real dT "Temperature derivative";
          output Real dh "Derivative of Specific enthalpy at T";
        algorithm
          dh :=Poly.evaluate(poly_Cp, if TinK then T else Cv.to_degC(T))*dT;
         annotation(smoothOrder=1);
        end h_T_der;

        function h_pT "Compute specific enthalpy from pressure and temperature"
          import Modelica.SIunits.Conversions.to_degC;
          extends Modelica.Icons.Function;
          input SI.Pressure p "Pressure";
          input SI.Temperature T "Temperature";
          input Boolean densityOfT = false
          "Include or neglect density derivative dependence of enthalpy"   annotation(Evaluate);
          output SI.SpecificEnthalpy h "Specific enthalpy at p, T";
        algorithm
          h :=h0 + Poly.integralValue(poly_Cp, if TinK then T else Cv.to_degC(T), if TinK then
          T0 else Cv.to_degC(T0)) + (p - reference_p)/Poly.evaluate(poly_rho, if TinK then
                  T else Cv.to_degC(T))
            *(if densityOfT then (1 + T/Poly.evaluate(poly_rho, if TinK then T else Cv.to_degC(T))
          *Poly.derivativeValue(poly_rho,if TinK then T else Cv.to_degC(T))) else 1.0);
         annotation(smoothOrder=2);
        end h_pT;

        redeclare function extends temperature
        "Return temperature as a function of the thermodynamic state record"
        algorithm
         T := state.T;
         annotation(Inline=true,smoothOrder=2);
        end temperature;

        redeclare function extends pressure
        "Return pressure as a function of the thermodynamic state record"
        algorithm
         p := state.p;
         annotation(Inline=true,smoothOrder=2);
        end pressure;

        redeclare function extends density
        "Return density as a function of the thermodynamic state record"
        algorithm
          d := Poly.evaluate(poly_rho,if TinK then state.T else Cv.to_degC(state.T));
         annotation(Inline=true,smoothOrder=2);
        end density;

        redeclare function extends specificEnthalpy
        "Return specific enthalpy as a function of the thermodynamic state record"
        algorithm
          h := if enthalpyOfT then h_T(state.T) else h_pT(state.p,state.T);
         annotation(Inline=true,smoothOrder=2);
        end specificEnthalpy;

        redeclare function extends specificInternalEnergy
        "Return specific internal energy as a function of the thermodynamic state record"
        algorithm
          u := (if enthalpyOfT then h_T(state.T) else h_pT(state.p,state.T)) - (if singleState then  reference_p else state.p)/density(state);
         annotation(Inline=true,smoothOrder=2);
        end specificInternalEnergy;

        function T_ph "Compute temperature from pressure and specific enthalpy"
          extends Modelica.Icons.Function;
          input AbsolutePressure p "Pressure";
          input SpecificEnthalpy h "Specific enthalpy";
          output Temperature T "Temperature";
      protected
          package Internal
          "Solve h(T) for T with given h (use only indirectly via temperature_phX)"
            extends Modelica.Media.Common.OneNonLinearEquation;

            redeclare record extends f_nonlinear_Data
            "Superfluous record, fix later when better structure of inverse functions exists"
                constant Real[5] dummy = {1,2,3,4,5};
            end f_nonlinear_Data;

            redeclare function extends f_nonlinear
            "P is smuggled in via vector"
            algorithm
              y := if singleState then h_T(x) else h_pT(p,x);
            end f_nonlinear;

            // Dummy definition (has to be added for one tool)
            redeclare function extends solve
            end solve;
          end Internal;
        algorithm
         T := Internal.solve(h, T_min, T_max, p, {1}, Internal.f_nonlinear_Data());
          annotation(Inline=false, LateInline=true, inverse(h=h_pT(p,T)));
        end T_ph;

        function T_ps "Compute temperature from pressure and specific enthalpy"
          extends Modelica.Icons.Function;

          input AbsolutePressure p "Pressure";
          input SpecificEntropy s "Specific entropy";
          output Temperature T "Temperature";
      protected
          package Internal
          "Solve h(T) for T with given h (use only indirectly via temperature_phX)"
            extends Modelica.Media.Common.OneNonLinearEquation;

            redeclare record extends f_nonlinear_Data
            "Superfluous record, fix later when better structure of inverse functions exists"
                constant Real[5] dummy = {1,2,3,4,5};
            end f_nonlinear_Data;

            redeclare function extends f_nonlinear
            "P is smuggled in via vector"
            algorithm
              y := s_T(x);
            end f_nonlinear;

            // Dummy definition (has to be added for one tool)
            redeclare function extends solve
            end solve;
          end Internal;
        algorithm
         T := Internal.solve(s, T_min, T_max, p, {1}, Internal.f_nonlinear_Data());
        end T_ps;

        package Polynomials_Temp
        "Temporary Functions operating on polynomials (including polynomial fitting); only to be used in Modelica.Media.Incompressible.TableBased"
          extends Modelica.Icons.Package;

          function evaluate "Evaluate polynomial at a given abscissa value"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real u "Abscissa value";
            output Real y "Value of polynomial at u";
          algorithm
            y := p[1];
            for j in 2:size(p, 1) loop
              y := p[j] + u*y;
            end for;
            annotation(derivative(zeroDerivative=p)=evaluate_der);
          end evaluate;

          function evaluateWithRange
          "Evaluate polynomial at a given abscissa value with linear extrapolation outside of the defined range"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real uMin "Polynomial valid in the range uMin .. uMax";
            input Real uMax "Polynomial valid in the range uMin .. uMax";
            input Real u "Abscissa value";
            output Real y
            "Value of polynomial at u. Outside of uMin,uMax, linear extrapolation is used";
          algorithm
            if u < uMin then
              y := evaluate(p, uMin) - evaluate_der(
                      p,
                      uMin,
                      uMin - u);
            elseif u > uMax then
              y := evaluate(p, uMax) + evaluate_der(
                      p,
                      uMax,
                      u - uMax);
            else
              y := evaluate(p, u);
            end if;
            annotation (derivative(
                zeroDerivative=p,
                zeroDerivative=uMin,
                zeroDerivative=uMax) = evaluateWithRange_der);
          end evaluateWithRange;

          function derivativeValue
          "Value of derivative of polynomial at abscissa value u"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real u "Abscissa value";
            output Real y "Value of derivative of polynomial at u";
        protected
            Integer n=size(p, 1);
          algorithm
            y := p[1]*(n - 1);
            for j in 2:size(p, 1)-1 loop
              y := p[j]*(n - j) + u*y;
            end for;
            annotation(derivative(zeroDerivative=p)=derivativeValue_der);
          end derivativeValue;

          function secondDerivativeValue
          "Value of 2nd derivative of polynomial at abscissa value u"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real u "Abscissa value";
            output Real y "Value of 2nd derivative of polynomial at u";
        protected
            Integer n=size(p, 1);
          algorithm
            y := p[1]*(n - 1)*(n - 2);
            for j in 2:size(p, 1)-2 loop
              y := p[j]*(n - j)*(n - j - 1) + u*y;
            end for;
          end secondDerivativeValue;

          function integralValue
          "Integral of polynomial p(u) from u_low to u_high"
            extends Modelica.Icons.Function;
            input Real p[:] "Polynomial coefficients";
            input Real u_high "High integrand value";
            input Real u_low=0 "Low integrand value, default 0";
            output Real integral=0.0
            "Integral of polynomial p from u_low to u_high";
        protected
            Integer n=size(p, 1) "Degree of integrated polynomial";
            Real y_low=0 "Value at lower integrand";
          algorithm
            for j in 1:n loop
              integral := u_high*(p[j]/(n - j + 1) + integral);
              y_low := u_low*(p[j]/(n - j + 1) + y_low);
            end for;
            integral := integral - y_low;
            annotation(derivative(zeroDerivative=p)=integralValue_der);
          end integralValue;

          function fitting
          "Computes the coefficients of a polynomial that fits a set of data points in a least-squares sense"
            extends Modelica.Icons.Function;
            input Real u[:] "Abscissa data values";
            input Real y[size(u, 1)] "Ordinate data values";
            input Integer n(min=1)
            "Order of desired polynomial that fits the data points (u,y)";
            output Real p[n + 1]
            "Polynomial coefficients of polynomial that fits the date points";
        protected
            Real V[size(u, 1), n + 1] "Vandermonde matrix";
          algorithm
            // Construct Vandermonde matrix
            V[:, n + 1] := ones(size(u, 1));
            for j in n:-1:1 loop
              V[:, j] := {u[i] * V[i, j + 1] for i in 1:size(u,1)};
            end for;

            // Solve least squares problem
            p :=Modelica.Math.Matrices.leastSquares(V, y);
            annotation (Documentation(info="<HTML>
<p>
Polynomials.fitting(u,y,n) computes the coefficients of a polynomial
p(u) of degree \"n\" that fits the data \"p(u[i]) - y[i]\"
in a least squares sense. The polynomial is
returned as a vector p[n+1] that has the following definition:
</p>
<pre>
  p(u) = p[1]*u^n + p[2]*u^(n-1) + ... + p[n]*u + p[n+1];
</pre>
</HTML>"));
          end fitting;

          function evaluate_der
          "Evaluate derivative of polynomial at a given abscissa value"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real u "Abscissa value";
            input Real du "Delta of abscissa value";
            output Real dy "Value of derivative of polynomial at u";
        protected
            Integer n=size(p, 1);
          algorithm
            dy := p[1]*(n - 1);
            for j in 2:size(p, 1)-1 loop
              dy := p[j]*(n - j) + u*dy;
            end for;
            dy := dy*du;
          end evaluate_der;

          function evaluateWithRange_der
          "Evaluate derivative of polynomial at a given abscissa value with extrapolation outside of the defined range"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real uMin "Polynomial valid in the range uMin .. uMax";
            input Real uMax "Polynomial valid in the range uMin .. uMax";
            input Real u "Abscissa value";
            input Real du "Delta of abscissa value";
            output Real dy "Value of derivative of polynomial at u";
          algorithm
            if u < uMin then
              dy := evaluate_der(
                      p,
                      uMin,
                      du);
            elseif u > uMax then
              dy := evaluate_der(
                      p,
                      uMax,
                      du);
            else
              dy := evaluate_der(
                      p,
                      u,
                      du);
            end if;
          end evaluateWithRange_der;

          function integralValue_der
          "Time derivative of integral of polynomial p(u) from u_low to u_high, assuming only u_high as time-dependent (Leibnitz rule)"
            extends Modelica.Icons.Function;
            input Real p[:] "Polynomial coefficients";
            input Real u_high "High integrand value";
            input Real u_low=0 "Low integrand value, default 0";
            input Real du_high "High integrand value";
            input Real du_low=0 "Low integrand value, default 0";
            output Real dintegral=0.0
            "Integral of polynomial p from u_low to u_high";
          algorithm
            dintegral := evaluate(p,u_high)*du_high;
          end integralValue_der;

          function derivativeValue_der
          "Time derivative of derivative of polynomial"
            extends Modelica.Icons.Function;
            input Real p[:]
            "Polynomial coefficients (p[1] is coefficient of highest power)";
            input Real u "Abscissa value";
            input Real du "Delta of abscissa value";
            output Real dy
            "Time-derivative of derivative of polynomial w.r.t. input variable at u";
        protected
            Integer n=size(p, 1);
          algorithm
            dy := secondDerivativeValue(p,u)*du;
          end derivativeValue_der;
          annotation (Documentation(info="<HTML>
<p>
This package contains functions to operate on polynomials,
in particular to determine the derivative and the integral
of a polynomial and to use a polynomial to fit a given set
of data points.
</p>

<p><b>Copyright &copy; 2004-2013, Modelica Association and DLR.</b></p>

<p><i>
This package is <b>free</b> software. It can be redistributed and/or modified
under the terms of the <b>Modelica license</b>, see the license conditions
and the accompanying <b>disclaimer</b> in the documentation of package
Modelica in file \"Modelica/package.mo\".
</i>
</p>

</html>",         revisions="<html>
<ul>
<li><i>Oct. 22, 2004</i> by Martin Otter (DLR):<br>
       Renamed functions to not have abbreviations.<br>
       Based fitting on LAPACK<br>
       New function to return the polynomial of an indefinite integral</li>
<li><i>Sept. 3, 2004</i> by Jonas Eborn (Scynamics):<br>
       polyderval, polyintval added</li>
<li><i>March 1, 2004</i> by Martin Otter (DLR):<br>
       first version implemented</li>
</ul>
</html>"));
        end Polynomials_Temp;
      annotation(Documentation(info="<HTML>
<p>
This is the base package for medium models of incompressible fluids based on
tables. The minimal data to provide for a useful medium description is tables
of density and heat capacity as functions of temperature.
</p>

<p>It should be noted that incompressible media only have 1 state per control volume (usually T),
but have both T and p as inputs for fully correct properties. The error of using only T-dependent
properties is small, therefore a Boolean flag enthalpyOfT exists. If it is true, the
enumeration Choices.independentVariables  is set to  Choices.independentVariables.T otherwise
it is set to Choices.independentVariables.pT.</p>

<h4>Using the package TableBased</h4>
<p>
To implement a new medium model, create a package that <b>extends</b> TableBased
and provides one or more of the constant tables:
</p>

<pre>
tableDensity        = [T, d];
tableHeatCapacity   = [T, Cp];
tableConductivity   = [T, lam];
tableViscosity      = [T, eta];
tableVaporPressure  = [T, pVap];
</pre>

<p>
The table data is used to fit constant polynomials of order <b>npol</b>, the
temperature data points do not need to be same for different properties. Properties
like enthalpy, inner energy and entropy are calculated consistently from integrals
and derivatives of d(T) and Cp(T). The minimal
data for a useful medium model is thus density and heat capacity. Transport
properties and vapor pressure are optional, if the data tables are empty the corresponding
function calls can not be used.
</p>
</HTML>"));
      end TableBased;
      annotation (
        Documentation(info="<HTML>
<h4>Incompressible media package</h4>
<p>
This package provides a structure and examples of how to create simple
medium models of incompressible fluids, meaning fluids with very little
pressure influence on density. The medium properties is typically described
in terms of tables, functions or polynomial coefficients.
</p>
<h4>Definitions</h4>
<p>
The common meaning of <em>incompressible</em> is that properties like density
and enthalpy are independent of pressure. Thus properties are conveniently
described as functions of temperature, e.g., as polynomials density(T) and cp(T).
However, enthalpy can not be independent of pressure since h = u - p/d. For liquids
it is anyway
common to neglect this dependence since for constant density the neglected term
is (p - p0)/d, which in comparison with cp is very small for most liquids. For
water, the equivalent change of temperature to increasing pressure 1 bar is
0.025 Kelvin.
</p>
<p>
Two Boolean flags are used to choose how enthalpy and inner energy is calculated:
</p>
<ul>
<li><b>enthalpyOfT</b>=true, means assuming that enthalpy is only a function
of temperature, neglecting the pressure dependent term.</li>
<li><b>singleState</b>=true, means also neglect the pressure influence on inner
energy, which makes all medium properties pure functions of temperature.</li>
</ul>
<p>
The default setting for both these flags is true, which enables the simulation tool
to choose temperature as the only medium state and avoids non-linear equation
systems, see the section about
<a href=\"modelica://Modelica.Media.UsersGuide.MediumDefinition.StaticStateSelection\">Static
state selection</a> in the Modelica.Media User's Guide.
</p>

<h4>Contents</h4>
<p>
Currently, the package contains the following parts:
</p>
<ol>
<li> <a href=\"modelica://Modelica.Media.Incompressible.TableBased\">
      Table based medium models</a></li>
<li> <a href=\"modelica://Modelica.Media.Incompressible.Examples\">
      Example medium models</a></li>
</ol>

<p>
A few examples are given in the Examples package. The model
<a href=\"modelica://Modelica.Media.Incompressible.Examples.Glycol47\">
Examples.Glycol47</a> shows how the medium models can be used. For more
realistic examples of how to implement volume models with medium properties
look in the <a href=\"modelica://Modelica.Media.UsersGuide.MediumUsage\">Medium
usage section</a> of the User's Guide.
</p>

</HTML>"));
    end Incompressible;
  annotation (preferredView="info",Documentation(info="<HTML>
<p>
This library contains <a href=\"modelica://Modelica.Media.Interfaces\">interface</a>
definitions for media and the following <b>property</b> models for
single and multiple substance fluids with one and multiple phases:
</p>
<ul>
<li> <a href=\"modelica://Modelica.Media.IdealGases\">Ideal gases:</a><br>
     1241 high precision gas models based on the
     NASA Glenn coefficients, plus ideal gas mixture models based
     on the same data.</li>
<li> <a href=\"modelica://Modelica.Media.Water\">Water models:</a><br>
     ConstantPropertyLiquidWater, WaterIF97 (high precision
     water model according to the IAPWS/IF97 standard)</li>
<li> <a href=\"modelica://Modelica.Media.Air\">Air models:</a><br>
     SimpleAir, DryAirNasa, ReferenceAir, MoistAir, ReferenceMoistAir.</li>
<li> <a href=\"modelica://Modelica.Media.Incompressible\">
     Incompressible media:</a><br>
     TableBased incompressible fluid models (properties are defined by tables rho(T),
     HeatCapacity_cp(T), etc.)</li>
<li> <a href=\"modelica://Modelica.Media.CompressibleLiquids\">
     Compressible liquids:</a><br>
     Simple liquid models with linear compressibility</li>
<li> <a href=\"modelica://Modelica.Media.R134a\">Refrigerant Tetrafluoroethane (R134a)</a>.</li>
</ul>
<p>
The following parts are useful, when newly starting with this library:
<ul>
<li> <a href=\"modelica://Modelica.Media.UsersGuide\">Modelica.Media.UsersGuide</a>.</li>
<li> <a href=\"modelica://Modelica.Media.UsersGuide.MediumUsage\">Modelica.Media.UsersGuide.MediumUsage</a>
     describes how to use a medium model in a component model.</li>
<li> <a href=\"modelica://Modelica.Media.UsersGuide.MediumDefinition\">
     Modelica.Media.UsersGuide.MediumDefinition</a>
     describes how a new fluid medium model has to be implemented.</li>
<li> <a href=\"modelica://Modelica.Media.UsersGuide.ReleaseNotes\">Modelica.Media.UsersGuide.ReleaseNotes</a>
     summarizes the changes of the library releases.</li>
<li> <a href=\"modelica://Modelica.Media.Examples\">Modelica.Media.Examples</a>
     contains examples that demonstrate the usage of this library.</li>
</ul>
<p>
Copyright &copy; 1998-2013, Modelica Association.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",   revisions="<html>
<ul>
<li><i>May 16, 2013</i> by Stefan Wischhusen (XRG Simulation):<br/>
    Added new media models Air.ReferenceMoistAir, Air.ReferenceAir, R134a.</li>
<li><i>May 25, 2011</i> by Francesco Casella:<br/>Added min/max attributes to Water, TableBased, MixtureGasNasa, SimpleAir and MoistAir local types.</li>
<li><i>May 25, 2011</i> by Stefan Wischhusen:<br/>Added individual settings for polynomial fittings of properties.</li>
</ul>
</html>"),
      Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
          graphics={
          Line(
            points=  {{-76,-80},{-62,-30},{-32,40},{4,66},{48,66},{73,45},{62,-8},{48,-50},{38,-80}},
            color={64,64,64},
            smooth=Smooth.Bezier),
          Line(
            points={{-40,20},{68,20}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{-40,20},{-44,88},{-44,88}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{68,20},{86,-58}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{-60,-28},{56,-28}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{-60,-28},{-74,84},{-74,84}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{56,-28},{70,-80}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{-76,-80},{38,-80}},
            color={175,175,175},
            smooth=Smooth.None),
          Line(
            points={{-76,-80},{-94,-16},{-94,-16}},
            color={175,175,175},
            smooth=Smooth.None)}));
  end Media;

  package Thermal
  "Library of thermal system components to model heat transfer and simple thermo-fluid pipe flow"
    extends Modelica.Icons.Package;

    package FluidHeatFlow
    "Simple components for 1-dimensional incompressible thermo-fluid flow models"
      extends Modelica.Icons.Package;

      package Media "Medium properties"
        extends Modelica.Icons.MaterialPropertiesPackage;

        record Medium "Record containing media properties"
          extends Modelica.Icons.Record;
          parameter Modelica.SIunits.Density rho = 1 "Density";
          parameter Modelica.SIunits.SpecificHeatCapacity cp = 1
          "Specific heat capacity at constant pressure";
          parameter Modelica.SIunits.SpecificHeatCapacity cv = 1
          "Specific heat capacity at constant volume";
          parameter Modelica.SIunits.ThermalConductivity lamda = 1
          "Thermal conductivity";
          parameter Modelica.SIunits.KinematicViscosity nue = 1
          "Kinematic viscosity";
          annotation (Documentation(info="<html>
Record containing (constant) medium properties.
</html>"));
        end Medium;
      annotation (Documentation(info="<HTML>
This package contains definitions of medium properties.<br>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  <p>
  Dr. Christian Kral<br>
  <a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a><br>
  Giefinggasse 2<br>
  A-1210 Vienna, Austria
</p>
  </dd>
</dl>
<p>
Copyright &copy; 1998-2013, Modelica Association, Anton Haumer and Austrian Institute of Technology, AIT.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",     revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.11 2005/02/18 Anton Haumer<br>
       corrected usage of cv and cp</li>
  </ul>
</html>"));
      end Media;

      package Interfaces "Connectors and partial models"
        extends Modelica.Icons.InterfacesPackage;

        connector FlowPort "Connector flow port"

          parameter FluidHeatFlow.Media.Medium medium "Medium in the connector";
          Modelica.SIunits.Pressure p;
          flow Modelica.SIunits.MassFlowRate m_flow;
          Modelica.SIunits.SpecificEnthalpy h;
          flow Modelica.SIunits.EnthalpyFlowRate H_flow;
        annotation (Documentation(info="<HTML>
Basic definition of the connector.<br>
<b>Variables:</b>
<ul>
<li>Pressure p</li>
<li>flow MassFlowRate m_flow</li>
<li>Specific Enthalpy h</li>
<li>flow EnthaplyFlowRate H_flow</li>
</ul>
If ports with different media are connected, the simulation is asserted due to the check of parameter.
</HTML>"));
        end FlowPort;
      annotation (Documentation(info="<HTML>
This package contains connectors and partial models:
<ul>
<li>FlowPort: basic definition of the connector.</li>
<li>FlowPort_a &amp; FlowPort_b: same as FlowPort with different icons to differentiate direction of flow</li>
<li>package Partials (defining basic thermodynamic equations)</li>
</ul>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  <p>
  Dr. Christian Kral<br>
  <a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a><br>
  Giefinggasse 2<br>
  A-1210 Vienna, Austria
</p>
  </dd>
</dl>
<p>
Copyright &copy; 1998-2013, Modelica Association, Anton Haumer and Austrian Institute of Technology, AIT.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",     revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.10 2005/02/15 Anton Haumer<br>
       moved Partials into Interfaces</li>
  <li> v1.11 2005/02/18 Anton Haumer<br>
       corrected usage of cv and cp</li>
  <li> v1.30 Beta 2005/06/02 Anton Haumer<br>
       friction losses are fed to medium</li>
  <li> v1.33 Beta 2005/06/07 Anton Haumer<br>
       corrected usage of simpleFlow</li>
  <li> v1.43 Beta 2005/06/20 Anton Haumer<br>
       Test of mixing / semiLinear</li>
  <li> v1.50 2005/09/07 Anton Haumer<br>
       semiLinear works fine</li>
  </ul>
</html>"));
      end Interfaces;
      annotation (
        Documentation(info="<HTML>
This package contains very simple-to-use components to model coolant flows as needed to simulate cooling e.g., of electric machines:
<ul>
<li>Components: components like different types of pipe models</li>
<li>Examples: some test examples</li>
<li>Interfaces: definition of connectors and partial models
(containing the core thermodynamic equations)</li>
<li>Media: definition of media properties</li>
<li>Sensors: various sensors for pressure, temperature, volume and enthalpy flow</li>
<li>Sources: various flow sources</li>
</ul>
<b>Variables used in connectors:</b>
<ul>
<li>Pressure p</li>
<li>flow MassFlowRate m_flow</li>
<li>SpecificEnthalpy h</li>
<li>flow EnthalpyFlowRate H_flow</li>
</ul>
EnthalpyFlowRate means the Enthalpy = cp<sub>constant</sub> * m * T that is carried by the medium's flow.<br><br>
<b>Limitations and assumptions:</b>
<ul>
<li>Splitting and mixing of coolant flows (media with the same cp) is possible.</li>
<li>Reversing the direction of flow is possible.</li>
<li>The medium is considered to be incompressible.</li>
<li>No mixtures of media is taken into consideration.</li>
<li>The medium may not change its phase.</li>
<li>Medium properties are kept constant.</li>
<li>Pressure changes are only due to pressure drop and geodetic height difference rho*g*h (if h > 0).</li>
<li>A user-defined part (0..1) of the friction losses (V_flow*dp) are fed to the medium.</li>
<li><b>Note:</b> Connected flowPorts have the same temperature (mixing temperature)!<br>
Since mixing may occur, the outlet temperature may be different from the connector's temperature.<br>
Outlet temperature is defined by variable T of the corresponding component.</li>
</ul>
<b>Further development:</b>
<ul>
<li>Additional components like tanks (if needed)</li>
</ul>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  <p>
  Dr. Christian Kral<br>
  <a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a><br>
  Giefinggasse 2<br>
  A-1210 Vienna, Austria
</p>
  </dd>
</dl>
<p>
Copyright &copy; 1998-2013, Modelica Association, Anton Haumer and AIT.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",     revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.10 2005/02/15 Anton Haumer<br>
       reorganisation of the package</li>
  <li> v1.11 2005/02/18 Anton Haumer<br>
       corrected usage of cv and cp</li>
  <li> v1.20 Beta 2005/02/18 Anton Haumer<br>
       introduced geodetic height in Components.Pipes<br>
       <i>new models: Components.Valve, Sources.IdealPump</i></li>
  <li> v1.30 Beta 2005/06/02 Anton Haumer<br>
       friction losses are fed to medium</li>
  <li> v1.31 Beta 2005/06/04 Anton Haumer<br>
       <i>new example: PumpAndValve</i><br>
       <i>new example: PumpDropOut</i></li>
  <li> v1.33 Beta 2005/06/07 Anton Haumer<br>
       corrected usage of simpleFlow</li>
  <li> v1.40 2005/06/13 Anton Haumer<br>
       stable release</li>
  <li> v1.42 Beta 2005/06/18 Anton Haumer<br>
       <i>new test example: ParallelPumpDropOut</i></li>
  <li> v1.43 Beta 2005/06/20 Anton Haumer<br>
       Test of mixing / semiLinear<br>
       <i>new test example: OneMass</i><br>
       <i>new test example: TwoMass</i></li>
  <li> v1.50 2005/09/07 Anton Haumer<br>
       semiLinear works fine</li>
  <li> v1.60 2007/01/23 Anton Haumer<br>
       new parameter tapT defining Temperature of heatPort </li>
  <li> v1.6.1 2007/08/12 Anton Haumer<br>
       improved documentation<br>
       removed type TemperatureDifference since this is defined in Modelica.SIunits</li>
  <li> v1.6.2 2007/08/20 Anton Haumer<br>
       improved documentation</li>
  <li> v1.6.3 2007/08/21 Anton Haumer<br>
       improved documentation</li>
  <li> v1.6.4 2007/08/24 Anton Haumer<br>
       removed redeclare type SignalType</li>
  <li> v1.6.5 2007/08/26 Anton Haumer<br>
       fixed unit bug in SimpleFriction</li>
  <li> v1.6.6 2007/11/13 Anton Haumer<br>
       replaced all nonSIunits<br>
       some renaming to be more concise</li>
  <li> v1.6.7 2010/06/25 Christian Kral<br>
       changed company name to AIT</li>
  </ul>
</html>"),     Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100,-100},{100,100}}), graphics = {
          Polygon(
            origin=  {11.533,37.938},
            lineColor=  {0,128,255},
            fillColor=  {0,128,255},
            fillPattern=  FillPattern.Solid,
            points=  {{-80,10},{-60,-10},{-80,-30},{-20,-30},{0,-10},{-20,10},{-80,10}}),
          Polygon(
            origin=  {11.533,37.938},
            lineColor=  {255,0,0},
            fillColor=  {255,0,0},
            fillPattern=  FillPattern.Solid,
            points=  {{-40,-90},{-20,-70},{0,-90},{0,-50},{-20,-30},{-40,-50},{-40,-90}}),
          Polygon(
            origin=  {11.533,37.938},
            lineColor=  {255,128,0},
            fillColor=  {255,128,0},
            fillPattern=  FillPattern.Solid,
            points=  {{-20,10},{0,-10},{-20,-30},{40,-30},{60,-10},{40,10},{-20,10}})}));
    end FluidHeatFlow;

    package HeatTransfer
    "Library of 1-dimensional heat transfer with lumped elements"
      extends Modelica.Icons.Package;

      package Components "Lumped thermal components"
      extends Modelica.Icons.Package;

        model HeatCapacitor "Lumped thermal element storing heat"
          parameter Modelica.SIunits.HeatCapacity C
          "Heat capacity of element (= cp*m)";
          Modelica.SIunits.Temperature T(start=293.15, displayUnit="degC")
          "Temperature of element";
          Modelica.SIunits.TemperatureSlope der_T(start=0)
          "Time derivative of temperature (= der(T))";
          Interfaces.HeatPort_a port annotation (Placement(transformation(
                origin={0,-100},
                extent={{-10,-10},{10,10}},
                rotation=90)));
        equation
          T = port.T;
          der_T = der(T);
          C*der(T) = port.Q_flow;
          annotation (
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={
                Text(
                  extent={{-150,110},{150,70}},
                  textString="%name",
                  lineColor={0,0,255}),
                Polygon(
                  points={{0,67},{-20,63},{-40,57},{-52,43},{-58,35},{-68,25},{-72,
                      13},{-76,-1},{-78,-15},{-76,-31},{-76,-43},{-76,-53},{-70,-65},
                      {-64,-73},{-48,-77},{-30,-83},{-18,-83},{-2,-85},{8,-89},{22,
                      -89},{32,-87},{42,-81},{54,-75},{56,-73},{66,-61},{68,-53},{
                      70,-51},{72,-35},{76,-21},{78,-13},{78,3},{74,15},{66,25},{54,
                      33},{44,41},{36,57},{26,65},{0,67}},
                  lineColor={160,160,164},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{-58,35},{-68,25},{-72,13},{-76,-1},{-78,-15},{-76,-31},{
                      -76,-43},{-76,-53},{-70,-65},{-64,-73},{-48,-77},{-30,-83},{-18,
                      -83},{-2,-85},{8,-89},{22,-89},{32,-87},{42,-81},{54,-75},{42,
                      -77},{40,-77},{30,-79},{20,-81},{18,-81},{10,-81},{2,-77},{-12,
                      -73},{-22,-73},{-30,-71},{-40,-65},{-50,-55},{-56,-43},{-58,-35},
                      {-58,-25},{-60,-13},{-60,-5},{-60,7},{-58,17},{-56,19},{-52,
                      27},{-48,35},{-44,45},{-40,57},{-58,35}},
                  lineColor={0,0,0},
                  fillColor={160,160,164},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-69,7},{71,-24}},
                  lineColor={0,0,0},
                  textString="%C")}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {100,100}}), graphics={
                Polygon(
                  points={{0,67},{-20,63},{-40,57},{-52,43},{-58,35},{-68,25},{-72,
                      13},{-76,-1},{-78,-15},{-76,-31},{-76,-43},{-76,-53},{-70,-65},
                      {-64,-73},{-48,-77},{-30,-83},{-18,-83},{-2,-85},{8,-89},{22,
                      -89},{32,-87},{42,-81},{54,-75},{56,-73},{66,-61},{68,-53},{
                      70,-51},{72,-35},{76,-21},{78,-13},{78,3},{74,15},{66,25},{54,
                      33},{44,41},{36,57},{26,65},{0,67}},
                  lineColor={160,160,164},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{-58,35},{-68,25},{-72,13},{-76,-1},{-78,-15},{-76,-31},{
                      -76,-43},{-76,-53},{-70,-65},{-64,-73},{-48,-77},{-30,-83},{-18,
                      -83},{-2,-85},{8,-89},{22,-89},{32,-87},{42,-81},{54,-75},{42,
                      -77},{40,-77},{30,-79},{20,-81},{18,-81},{10,-81},{2,-77},{-12,
                      -73},{-22,-73},{-30,-71},{-40,-65},{-50,-55},{-56,-43},{-58,-35},
                      {-58,-25},{-60,-13},{-60,-5},{-60,7},{-58,17},{-56,19},{-52,
                      27},{-48,35},{-44,45},{-40,57},{-58,35}},
                  lineColor={0,0,0},
                  fillColor={160,160,164},
                  fillPattern=FillPattern.Solid),
                Ellipse(
                  extent={{-6,-1},{6,-12}},
                  lineColor={255,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{11,13},{50,-25}},
                  lineColor={0,0,0},
                  textString="T"),
                Line(points={{0,-12},{0,-96}}, color={255,0,0})}),
            Documentation(info="<HTML>
<p>
This is a generic model for the heat capacity of a material.
No specific geometry is assumed beyond a total volume with
uniform temperature for the entire volume.
Furthermore, it is assumed that the heat capacity
is constant (independent of temperature).
</p>
<p>
The temperature T [Kelvin] of this component is a <b>state</b>.
A default of T = 25 degree Celsius (= SIunits.Conversions.from_degC(25))
is used as start value for initialization.
This usually means that at start of integration the temperature of this
component is 25 degrees Celsius. You may, of course, define a different
temperature as start value for initialization. Alternatively, it is possible
to set parameter <b>steadyStateStart</b> to <b>true</b>. In this case
the additional equation '<b>der</b>(T) = 0' is used during
initialization, i.e., the temperature T is computed in such a way that
the component starts in <b>steady state</b>. This is useful in cases,
where one would like to start simulation in a suitable operating
point without being forced to integrate for a long time to arrive
at this point.
</p>
<p>
Note, that parameter <b>steadyStateStart</b> is not available in
the parameter menu of the simulation window, because its value
is utilized during translation to generate quite different
equations depending on its setting. Therefore, the value of this
parameter can only be changed before translating the model.
</p>
<p>
This component may be used for complicated geometries where
the heat capacity C is determined my measurements. If the component
consists mainly of one type of material, the <b>mass m</b> of the
component may be measured or calculated and multiplied with the
<b>specific heat capacity cp</b> of the component material to
compute C:
</p>
<pre>
   C = cp*m.
   Typical values for cp at 20 degC in J/(kg.K):
      aluminium   896
      concrete    840
      copper      383
      iron        452
      silver      235
      steel       420 ... 500 (V2A)
      wood       2500
</pre>
</html>"));
        end HeatCapacitor;

        model ThermalConductor
        "Lumped thermal element transporting heat without storing it"
          extends Interfaces.Element1D;
          parameter Modelica.SIunits.ThermalConductance G
          "Constant thermal conductance of material";

        equation
          Q_flow = G*dT;
          annotation (
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={
                Rectangle(
                  extent={{-90,70},{90,-70}},
                  lineColor={0,0,0},
                  pattern=LinePattern.None,
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward),
                Line(
                  points={{-90,70},{-90,-70}},
                  color={0,0,0},
                  thickness=0.5),
                Line(
                  points={{90,70},{90,-70}},
                  color={0,0,0},
                  thickness=0.5),
                Text(
                  extent={{-150,115},{150,75}},
                  textString="%name",
                  lineColor={0,0,255}),
                Text(
                  extent={{-150,-75},{150,-105}},
                  lineColor={0,0,0},
                  textString="G=%G")}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {100,100}}), graphics={
                Line(
                  points={{-80,0},{80,0}},
                  color={255,0,0},
                  thickness=0.5,
                  arrow={Arrow.None,Arrow.Filled}),
                Text(
                  extent={{-100,-20},{100,-40}},
                  lineColor={255,0,0},
                  textString="Q_flow"),
                Text(
                  extent={{-100,40},{100,20}},
                  lineColor={0,0,0},
                  textString="dT = port_a.T - port_b.T")}),
            Documentation(info="<HTML>
<p>
This is a model for transport of heat without storing it; see also:
<a href=\"modelica://Modelica.Thermal.HeatTransfer.Components.ThermalResistor\">ThermalResistor</a>.
It may be used for complicated geometries where
the thermal conductance G (= inverse of thermal resistance)
is determined by measurements and is assumed to be constant
over the range of operations. If the component consists mainly of
one type of material and a regular geometry, it may be calculated,
e.g., with one of the following equations:
</p>
<ul>
<li><p>
    Conductance for a <b>box</b> geometry under the assumption
    that heat flows along the box length:</p>
    <pre>
    G = k*A/L
    k: Thermal conductivity (material constant)
    A: Area of box
    L: Length of box
    </pre>
    </li>
<li><p>
    Conductance for a <b>cylindrical</b> geometry under the assumption
    that heat flows from the inside to the outside radius
    of the cylinder:</p>
    <pre>
    G = 2*pi*k*L/log(r_out/r_in)
    pi   : Modelica.Constants.pi
    k    : Thermal conductivity (material constant)
    L    : Length of cylinder
    log  : Modelica.Math.log;
    r_out: Outer radius of cylinder
    r_in : Inner radius of cylinder
    </pre>
    </li>
</ul>
<pre>
    Typical values for k at 20 degC in W/(m.K):
      aluminium   220
      concrete      1
      copper      384
      iron         74
      silver      407
      steel        45 .. 15 (V2A)
      wood         0.1 ... 0.2
</pre>
</html>"));
        end ThermalConductor;
        annotation (Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100,-100},{100,100}}), graphics = {
          Rectangle(
            origin=  {12,40},
            fillColor=  {192,192,192},
            fillPattern=  FillPattern.Backward,
            extent=  {{-100,-100},{-70,18}}),
          Line(
            origin=  {12,40},
            points=  {{-44,16},{-44,-100}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-4,16},{-4,-100}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{30,18},{30,-100}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{66,18},{66,-100}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{66,-100},{76,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{66,-100},{56,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{30,-100},{40,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{30,-100},{20,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-4,-100},{6,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-4,-100},{-14,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-44,-100},{-34,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-44,-100},{-54,-80}},
            color=  {0,127,255}),
          Line(
            origin=  {12,40},
            points=  {{-70,-60},{66,-60}},
            color=  {191,0,0}),
          Line(
            origin=  {12,40},
            points=  {{46,-70},{66,-60}},
            color=  {191,0,0}),
          Line(
            origin=  {12,40},
            points=  {{46,-50},{66,-60}},
            color=  {191,0,0}),
          Line(
            origin=  {12,40},
            points=  {{46,-30},{66,-20}},
            color=  {191,0,0}),
          Line(
            origin=  {12,40},
            points=  {{46,-10},{66,-20}},
            color=  {191,0,0}),
          Line(
            origin=  {12,40},
            points=  {{-70,-20},{66,-20}},
            color=  {191,0,0})}), Documentation(
              info="<html>

</html>"));
      end Components;

      package Sensors "Thermal sensors"
        extends Modelica.Icons.SensorsPackage;

        model TemperatureSensor "Absolute temperature sensor in Kelvin"

          Modelica.Blocks.Interfaces.RealOutput T(unit="K")
          "Absolute temperature as output signal"
            annotation (Placement(transformation(extent={{90,-10},{110,10}}, rotation=0)));
          Interfaces.HeatPort_a port annotation (Placement(transformation(extent={{
                    -110,-10},{-90,10}}, rotation=0)));
        equation
          T = port.T;
          port.Q_flow = 0;
          annotation (
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={
                Ellipse(
                  extent={{-20,-98},{20,-60}},
                  lineColor={0,0,0},
                  lineThickness=0.5,
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Rectangle(
                  extent={{-12,40},{12,-68}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Line(points={{12,0},{90,0}}, color={0,0,255}),
                Line(points={{-94,0},{-14,0}}, color={191,0,0}),
                Polygon(
                  points={{-12,40},{-12,80},{-10,86},{-6,88},{0,90},{6,88},{10,86},{
                      12,80},{12,40},{-12,40}},
                  lineColor={0,0,0},
                  lineThickness=0.5),
                Line(
                  points={{-12,40},{-12,-64}},
                  color={0,0,0},
                  thickness=0.5),
                Line(
                  points={{12,40},{12,-64}},
                  color={0,0,0},
                  thickness=0.5),
                Line(points={{-40,-20},{-12,-20}}, color={0,0,0}),
                Line(points={{-40,20},{-12,20}}, color={0,0,0}),
                Line(points={{-40,60},{-12,60}}, color={0,0,0}),
                Text(
                  extent={{102,-28},{60,-78}},
                  lineColor={0,0,0},
                  textString="K")}),
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={
                Ellipse(
                  extent={{-20,-98},{20,-60}},
                  lineColor={0,0,0},
                  lineThickness=0.5,
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Rectangle(
                  extent={{-12,40},{12,-68}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Line(points={{12,0},{90,0}}, color={0,0,255}),
                Line(points={{-90,0},{-12,0}}, color={191,0,0}),
                Polygon(
                  points={{-12,40},{-12,80},{-10,86},{-6,88},{0,90},{6,88},{10,86},
                      {12,80},{12,40},{-12,40}},
                  lineColor={0,0,0},
                  lineThickness=0.5),
                Line(
                  points={{-12,40},{-12,-64}},
                  color={0,0,0},
                  thickness=0.5),
                Line(
                  points={{12,40},{12,-64}},
                  color={0,0,0},
                  thickness=0.5),
                Line(points={{-40,-20},{-12,-20}}, color={0,0,0}),
                Line(points={{-40,20},{-12,20}}, color={0,0,0}),
                Line(points={{-40,60},{-12,60}}, color={0,0,0}),
                Text(
                  extent={{126,-20},{26,-120}},
                  lineColor={0,0,0},
                  textString="K"),
                Text(
                  extent={{-150,130},{150,90}},
                  textString="%name",
                  lineColor={0,0,255})}),
            Documentation(info="<HTML>
<p>
This is an ideal absolute temperature sensor which returns
the temperature of the connected port in Kelvin as an output
signal.  The sensor itself has no thermal interaction with
whatever it is connected to.  Furthermore, no
thermocouple-like lags are associated with this
sensor model.
</p>
</html>"));
        end TemperatureSensor;
        annotation (   Documentation(info="<html>

</html>"));
      end Sensors;

      package Sources "Thermal sources"
      extends Modelica.Icons.SourcesPackage;

        model PrescribedHeatFlow "Prescribed heat flow boundary condition"
          parameter Modelica.SIunits.Temperature T_ref=293.15
          "Reference temperature";
          parameter Modelica.SIunits.LinearTemperatureCoefficient alpha=0
          "Temperature coefficient of heat flow rate";
          Modelica.Blocks.Interfaces.RealInput Q_flow(unit="W")
                annotation (Placement(transformation(
                origin={-100,0},
                extent={{20,-20},{-20,20}},
                rotation=180)));
          Interfaces.HeatPort_b port annotation (Placement(transformation(extent={{90,
                    -10},{110,10}}, rotation=0)));
        equation
          port.Q_flow = -Q_flow*(1 + alpha*(port.T - T_ref));
          annotation (
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={
                Line(
                  points={{-60,-20},{40,-20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-60,20},{40,20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-80,0},{-60,-20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-80,0},{-60,20}},
                  color={191,0,0},
                  thickness=0.5),
                Polygon(
                  points={{40,0},{40,40},{70,20},{40,0}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{40,-40},{40,0},{70,-20},{40,-40}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Rectangle(
                  extent={{70,40},{90,-40}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-150,100},{150,60}},
                  textString="%name",
                  lineColor={0,0,255})}),
            Documentation(info="<HTML>
<p>
This model allows a specified amount of heat flow rate to be \"injected\"
into a thermal system at a given port.  The amount of heat
is given by the input signal Q_flow into the model. The heat flows into the
component to which the component PrescribedHeatFlow is connected,
if the input signal is positive.
</p>
<p>
If parameter alpha is &lt;&gt; 0, the heat flow is multiplied by (1 + alpha*(port.T - T_ref))
in order to simulate temperature dependent losses (which are given with respect to reference temperature T_ref).
</p>
</html>"),         Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {100,100}}), graphics={
                Line(
                  points={{-60,-20},{68,-20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-60,20},{68,20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-80,0},{-60,-20}},
                  color={191,0,0},
                  thickness=0.5),
                Line(
                  points={{-80,0},{-60,20}},
                  color={191,0,0},
                  thickness=0.5),
                Polygon(
                  points={{60,0},{60,40},{90,20},{60,0}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{60,-40},{60,0},{90,-20},{60,-40}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid)}));
        end PrescribedHeatFlow;
        annotation (   Documentation(info="<html>

</html>"));
      end Sources;

      package Interfaces "Connectors and partial models"
        extends Modelica.Icons.InterfacesPackage;

        partial connector HeatPort "Thermal port for 1-dim. heat transfer"
          Modelica.SIunits.Temperature T "Port temperature";
          flow Modelica.SIunits.HeatFlowRate Q_flow
          "Heat flow rate (positive if flowing from outside into the component)";
          annotation (Documentation(info="<html>

</html>"));
        end HeatPort;

        connector HeatPort_a
        "Thermal port for 1-dim. heat transfer (filled rectangular icon)"

          extends HeatPort;

          annotation(defaultComponentName = "port_a",
            Documentation(info="<HTML>
<p>This connector is used for 1-dimensional heat flow between components.
The variables in the connector are:</p>
<pre>
   T       Temperature in [Kelvin].
   Q_flow  Heat flow rate in [Watt].
</pre>
<p>According to the Modelica sign convention, a <b>positive</b> heat flow
rate <b>Q_flow</b> is considered to flow <b>into</b> a component. This
convention has to be used whenever this connector is used in a model
class.</p>
<p>Note, that the two connector classes <b>HeatPort_a</b> and
<b>HeatPort_b</b> are identical with the only exception of the different
<b>icon layout</b>.</p></html>"),         Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={Rectangle(
                  extent={{-100,100},{100,-100}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid)}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {100,100}}), graphics={Rectangle(
                  extent={{-50,50},{50,-50}},
                  lineColor={191,0,0},
                  fillColor={191,0,0},
                  fillPattern=FillPattern.Solid), Text(
                  extent={{-120,120},{100,60}},
                  lineColor={191,0,0},
                  textString="%name")}));
        end HeatPort_a;

        connector HeatPort_b
        "Thermal port for 1-dim. heat transfer (unfilled rectangular icon)"

          extends HeatPort;

          annotation(defaultComponentName = "port_b",
            Documentation(info="<HTML>
<p>This connector is used for 1-dimensional heat flow between components.
The variables in the connector are:</p>
<pre>
   T       Temperature in [Kelvin].
   Q_flow  Heat flow rate in [Watt].
</pre>
<p>According to the Modelica sign convention, a <b>positive</b> heat flow
rate <b>Q_flow</b> is considered to flow <b>into</b> a component. This
convention has to be used whenever this connector is used in a model
class.</p>
<p>Note, that the two connector classes <b>HeatPort_a</b> and
<b>HeatPort_b</b> are identical with the only exception of the different
<b>icon layout</b>.</p></html>"),         Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {100,100}}), graphics={Rectangle(
                  extent={{-50,50},{50,-50}},
                  lineColor={191,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid), Text(
                  extent={{-100,120},{120,60}},
                  lineColor={191,0,0},
                  textString="%name")}),
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                    100,100}}), graphics={Rectangle(
                  extent={{-100,100},{100,-100}},
                  lineColor={191,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid)}));
        end HeatPort_b;

        partial model Element1D
        "Partial heat transfer element with two HeatPort connectors that does not store energy"

          Modelica.SIunits.HeatFlowRate Q_flow
          "Heat flow rate from port_a -> port_b";
          Modelica.SIunits.TemperatureDifference dT "port_a.T - port_b.T";
      public
          HeatPort_a port_a annotation (Placement(transformation(extent={{-110,-10},
                    {-90,10}}, rotation=0)));
          HeatPort_b port_b annotation (Placement(transformation(extent={{90,-10},{
                    110,10}}, rotation=0)));
        equation
          dT = port_a.T - port_b.T;
          port_a.Q_flow = Q_flow;
          port_b.Q_flow = -Q_flow;
          annotation (Documentation(info="<HTML>
<p>
This partial model contains the basic connectors and variables to
allow heat transfer models to be created that <b>do not store energy</b>,
This model defines and includes equations for the temperature
drop across the element, <b>dT</b>, and the heat flow rate
through the element from port_a to port_b, <b>Q_flow</b>.
</p>
<p>
By extending this model, it is possible to write simple
constitutive equations for many types of heat transfer components.
</p>
</html>"));
        end Element1D;
        annotation (                               Documentation(info="<html>

</html>"));
      end Interfaces;
      annotation (
         Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100,-100},{100,100}}), graphics = {
          Polygon(
            origin=  {13.758,27.517},
            lineColor=  {128,128,128},
            fillColor=  {192,192,192},
            fillPattern=  FillPattern.Solid,
            points=  {{-54,-6},{-61,-7},{-75,-15},{-79,-24},{-80,-34},{-78,-42},{-73,-49},{-64,-51},{-57,-51},{-47,-50},{-41,-43},{-38,-35},{-40,-27},{-40,-20},{-42,-13},{-47,-7},{-54,-5},{-54,-6}}),
        Polygon(
            origin=  {13.758,27.517},
            fillColor=  {160,160,164},
            fillPattern=  FillPattern.Solid,
            points=  {{-75,-15},{-79,-25},{-80,-34},{-78,-42},{-72,-49},{-64,-51},{-57,-51},{-47,-50},{-57,-47},{-65,-45},{-71,-40},{-74,-33},{-76,-23},{-75,-15},{-75,-15}}),
          Polygon(
            origin=  {13.758,27.517},
            lineColor=  {160,160,164},
            fillColor=  {192,192,192},
            fillPattern=  FillPattern.Solid,
            points=  {{39,-6},{32,-7},{18,-15},{14,-24},{13,-34},{15,-42},{20,-49},{29,-51},{36,-51},{46,-50},{52,-43},{55,-35},{53,-27},{53,-20},{51,-13},{46,-7},{39,-5},{39,-6}}),
          Polygon(
            origin=  {13.758,27.517},
            fillColor=  {160,160,164},
            fillPattern=  FillPattern.Solid,
            points=  {{18,-15},{14,-25},{13,-34},{15,-42},{21,-49},{29,-51},{36,-51},{46,-50},{36,-47},{28,-45},{22,-40},{19,-33},{17,-23},{18,-15},{18,-15}}),
          Polygon(
            origin=  {13.758,27.517},
            lineColor=  {191,0,0},
            fillColor=  {191,0,0},
            fillPattern=  FillPattern.Solid,
            points=  {{-9,-23},{-9,-10},{18,-17},{-9,-23}}),
          Line(
            origin=  {13.758,27.517},
            points=  {{-41,-17},{-9,-17}},
            color=  {191,0,0},
            thickness=  0.5),
          Line(
            origin=  {13.758,27.517},
            points=  {{-17,-40},{15,-40}},
            color=  {191,0,0},
            thickness=  0.5),
          Polygon(
            origin=  {13.758,27.517},
            lineColor=  {191,0,0},
            fillColor=  {191,0,0},
            fillPattern=  FillPattern.Solid,
            points=  {{-17,-46},{-17,-34},{-40,-40},{-17,-46}})}),
                                Documentation(info="<HTML>
<p>
This package contains components to model <b>1-dimensional heat transfer</b>
with lumped elements. This allows especially to model heat transfer in
machines provided the parameters of the lumped elements, such as
the heat capacity of a part, can be determined by measurements
(due to the complex geometries and many materials used in machines,
calculating the lumped element parameters from some basic analytic
formulas is usually not possible).
</p>
<p>
Example models how to use this library are given in subpackage <b>Examples</b>.<br>
For a first simple example, see <b>Examples.TwoMasses</b> where two masses
with different initial temperatures are getting in contact to each
other and arriving after some time at a common temperature.<br>
<b>Examples.ControlledTemperature</b> shows how to hold a temperature
within desired limits by switching on and off an electric resistor.<br>
A more realistic example is provided in <b>Examples.Motor</b> where the
heating of an electrical motor is modelled, see the following screen shot
of this example:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Thermal/HeatTransfer/driveWithHeatTransfer.png\" ALT=\"driveWithHeatTransfer\">
</p>

<p>
The <b>filled</b> and <b>non-filled red squares</b> at the left and
right side of a component represent <b>thermal ports</b> (connector HeatPort).
Drawing a line between such squares means that they are thermally connected.
The variables of a HeatPort connector are the temperature <b>T</b> at the port
and the heat flow rate <b>Q_flow</b> flowing into the component (if Q_flow is positive,
the heat flows into the element, otherwise it flows out of the element):
</p>
<pre>   Modelica.SIunits.Temperature  T  \"absolute temperature at port in Kelvin\";
   Modelica.SIunits.HeatFlowRate Q_flow  \"flow rate at the port in Watt\";
</pre>
<p>
Note, that all temperatures of this package, including initial conditions,
are given in Kelvin. For convenience, in subpackages <b>HeatTransfer.Celsius</b>,
 <b>HeatTransfer.Fahrenheit</b> and <b>HeatTransfer.Rankine</b> components are provided such that source and
sensor information is available in degree Celsius, degree Fahrenheit, or degree Rankine,
respectively. Additionally, in package <b>SIunits.Conversions</b> conversion
functions between the units Kelvin and Celsius, Fahrenheit, Rankine are
provided. These functions may be used in the following way:
</p>
<pre>  <b>import</b> SI=Modelica.SIunits;
  <b>import</b> Modelica.SIunits.Conversions.*;
     ...
  <b>parameter</b> SI.Temperature T = from_degC(25);  // convert 25 degree Celsius to Kelvin
</pre>

<p>
There are several other components available, such as AxialConduction (discretized PDE in
axial direction), which have been temporarily removed from this library. The reason is that
these components reference material properties, such as thermal conductivity, and currently
the Modelica design group is discussing a general scheme to describe material properties.
</p>
<p>
For technical details in the design of this library, see the following reference:<br>
<b>Michael Tiller (2001)</b>: <a href=\"http://www.amazon.de\">
Introduction to Physical Modeling with Modelica</a>.
Kluwer Academic Publishers Boston.
</p>
<p>
<b>Acknowledgements:</b><br>
Several helpful remarks from the following persons are acknowledged:
John Batteh, Ford Motors, Dearborn, U.S.A;
<a href=\"http://www.haumer.at/\">Anton Haumer</a>, Technical Consulting &amp; Electrical Engineering, Austria;
Ludwig Marvan, VA TECH ELIN EBG Elektronik GmbH, Wien, Austria;
Hans Olsson, Dassault Syst&egrave;mes AB, Sweden;
Hubertus Tummescheit, Lund Institute of Technology, Lund, Sweden.
</p>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  </dd>
</dl>
<p><b>Copyright &copy; 2001-2013, Modelica Association, Michael Tiller and DLR.</b></p>

<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</html>",     revisions="<html>
<ul>
<li><i>July 15, 2002</i>
       by Michael Tiller, <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and Nikolaus Sch&uuml;rmann:<br>
       Implemented.
</li>
<li><i>June 13, 2005</i>
       by <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
       Refined placing of connectors (cosmetic).<br>
       Refined all Examples; removed Examples.FrequencyInverter, introducing Examples.Motor<br>
       Introduced temperature dependent correction (1 + alpha*(T - T_ref)) in Fixed/PrescribedHeatFlow<br>
</li>
  <li> v1.1.1 2007/11/13 Anton Haumer<br>
       components moved to sub-packages</li>
  <li> v1.2.0 2009/08/26 Anton Haumer<br>
       added component ThermalCollector</li>

</ul>
</html>"));
    end HeatTransfer;
    annotation (
     Icon(coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}}), graphics={
      Line(
      origin={-47.5,11.6667},
      points={{-2.5,-91.6667},{17.5,-71.6667},{-22.5,-51.6667},{17.5,-31.6667},{-22.5,-11.667},{17.5,8.3333},{-2.5,28.3333},{-2.5,48.3333}},
        smooth=Smooth.Bezier),
      Polygon(
      origin={-50.0,68.333},
      pattern=LinePattern.None,
      fillPattern=FillPattern.Solid,
        points={{0.0,21.667},{-10.0,-8.333},{10.0,-8.333}}),
      Line(
      origin={2.5,11.6667},
      points={{-2.5,-91.6667},{17.5,-71.6667},{-22.5,-51.6667},{17.5,-31.6667},{-22.5,-11.667},{17.5,8.3333},{-2.5,28.3333},{-2.5,48.3333}},
        smooth=Smooth.Bezier),
      Polygon(
      origin={0.0,68.333},
      pattern=LinePattern.None,
      fillPattern=FillPattern.Solid,
        points={{0.0,21.667},{-10.0,-8.333},{10.0,-8.333}}),
      Line(
      origin={52.5,11.6667},
      points={{-2.5,-91.6667},{17.5,-71.6667},{-22.5,-51.6667},{17.5,-31.6667},{-22.5,-11.667},{17.5,8.3333},{-2.5,28.3333},{-2.5,48.3333}},
        smooth=Smooth.Bezier),
      Polygon(
      origin={50.0,68.333},
      pattern=LinePattern.None,
      fillPattern=FillPattern.Solid,
        points={{0.0,21.667},{-10.0,-8.333},{10.0,-8.333}})}),
      Documentation(info="<html>
<p>
This package contains libraries to model heat transfer
and fluid heat flow.
</p>
</html>"));
  end Thermal;

  package Math
  "Library of mathematical functions (e.g., sin, cos) and of functions operating on vectors and matrices"
  import SI = Modelica.SIunits;
  extends Modelica.Icons.Package;

  package Icons "Icons for Math"
    extends Modelica.Icons.IconsPackage;

    partial function AxisLeft
    "Basic icon for mathematical function with y-axis on left side"

      annotation (
        Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                100}}), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Line(points={{-80,-80},{-80,68}}, color={192,192,192}),
            Polygon(
              points={{-80,90},{-88,68},{-72,68},{-80,90}},
              lineColor={192,192,192},
              fillColor={192,192,192},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-150,150},{150,110}},
              textString="%name",
              lineColor={0,0,255})}),
        Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{
                100,100}}), graphics={Line(points={{-80,80},{-88,80}}, color={95,
              95,95}),Line(points={{-80,-80},{-88,-80}}, color={95,95,95}),Line(
              points={{-80,-90},{-80,84}}, color={95,95,95}),Text(
                  extent={{-75,104},{-55,84}},
                  lineColor={95,95,95},
                  textString="y"),Polygon(
                  points={{-80,98},{-86,82},{-74,82},{-80,98}},
                  lineColor={95,95,95},
                  fillColor={95,95,95},
                  fillPattern=FillPattern.Solid)}),
        Documentation(info="<html>
<p>
Icon for a mathematical function, consisting of an y-axis on the left side.
It is expected, that an x-axis is added and a plot of the function.
</p>
</html>"));
    end AxisLeft;

    partial function AxisCenter
    "Basic icon for mathematical function with y-axis in the center"

      annotation (
        Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                100}}), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={0,0,0},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Line(points={{0,-80},{0,68}}, color={192,192,192}),
            Polygon(
              points={{0,90},{-8,68},{8,68},{0,90}},
              lineColor={192,192,192},
              fillColor={192,192,192},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-150,150},{150,110}},
              textString="%name",
              lineColor={0,0,255})}),
        Diagram(graphics={Line(points={{0,80},{-8,80}}, color={95,95,95}),Line(
              points={{0,-80},{-8,-80}}, color={95,95,95}),Line(points={{0,-90},{
              0,84}}, color={95,95,95}),Text(
                  extent={{5,104},{25,84}},
                  lineColor={95,95,95},
                  textString="y"),Polygon(
                  points={{0,98},{-6,82},{6,82},{0,98}},
                  lineColor={95,95,95},
                  fillColor={95,95,95},
                  fillPattern=FillPattern.Solid)}),
        Documentation(info="<html>
<p>
Icon for a mathematical function, consisting of an y-axis in the middle.
It is expected, that an x-axis is added and a plot of the function.
</p>
</html>"));
    end AxisCenter;
  end Icons;

  package Vectors "Library of functions operating on vectors"
    extends Modelica.Icons.Package;

    function interpolate "Interpolate in a vector"
      extends Modelica.Icons.Function;
      input Real x[:]
      "Abscissa table vector (strict monotonically increasing values required)";
      input Real y[size(x, 1)] "Ordinate table vector";
      input Real xi "Desired abscissa value";
      input Integer iLast=1 "Index used in last search";
      output Real yi "Ordinate value corresponding to xi";
      output Integer iNew=1 "xi is in the interval x[iNew] <= xi < x[iNew+1]";
  protected
      Integer i;
      Integer nx=size(x, 1);
      Real x1;
      Real x2;
      Real y1;
      Real y2;
    algorithm
      assert(nx > 0, "The table vectors must have at least 1 entry.");
      if nx == 1 then
        yi := y[1];
      else
        // Search interval
        i := min(max(iLast, 1), nx - 1);
        if xi >= x[i] then
          // search forward
          while i < nx and xi >= x[i] loop
            i := i + 1;
          end while;
          i := i - 1;
        else
          // search backward
          while i > 1 and xi < x[i] loop
            i := i - 1;
          end while;
        end if;

        // Get interpolation data
        x1 := x[i];
        x2 := x[i + 1];
        y1 := y[i];
        y2 := y[i + 1];

        assert(x2 > x1, "Abscissa table vector values must be increasing");
        // Interpolate
        yi := y1 + (y2 - y1)*(xi - x1)/(x2 - x1);
        iNew := i;
      end if;

      annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
// Real    x[:], y[:], xi, yi;
// Integer iLast, iNew;
        yi = Vectors.<b>interpolate</b>(x,y,xi);
(yi, iNew) = Vectors.<b>interpolate</b>(x,y,xi,iLast=1);
</pre></blockquote>
<h4>Description</h4>
<p>
The function call \"<code>Vectors.interpolate(x,y,xi)</code>\" interpolates in vectors
(x,y) and returns the value yi that corresponds to xi. Vector x[:] must consist
of strictly monotonically increasing values. If xi &lt; x[1] or &gt; x[end], then
extrapolation takes places through the first or last two x[:] values, respectively.
The search for the interval x[iNew] &le; xi &lt; x[iNew+1] starts at the optional
input argument \"iLast\". The index \"iNew\" is returned as output argument.
The usage of \"iLast\" and \"iNew\" is useful to increase the efficiency of the call,
if many interpolations take place.
</p>

<h4>Example</h4>

<blockquote><pre>
  Real x[:] = { 0,  2,  4,  6,  8, 10};
  Real y[:] = {10, 20, 30, 40, 50, 60};
<b>algorithm</b>
  (yi, iNew) := Vectors.interpolate(x,y,5);  // yi = 35, iNew=3
</pre></blockquote>

</html>"));
    end interpolate;
    annotation (preferredView="info", Documentation(info="<HTML>
<h4>Library content</h4>
<p>
This library provides functions operating on vectors:
</p>

<ul>
<li> <a href=\"modelica://Modelica.Math.Vectors.toString\">toString</a>(v)
     - returns the string representation of vector v.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.isEqual\">isEqual</a>(v1, v2)
     - returns true if vectors v1 and v2 have the same size and the same elements.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.norm\">norm</a>(v,p)
     - returns the p-norm of vector v.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.length\">length</a>(v)
     - returns the length of vector v (= norm(v,2), but inlined and therefore usable in
       symbolic manipulations)</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.normalize\">normalize</a>(v)
     - returns vector in direction of v with lenght = 1 and prevents
       zero-division for zero vector.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.reverse\">reverse</a>(v)
     - reverses the vector elements of v. </li>

<li> <a href=\"modelica://Modelica.Math.Vectors.sort\">sort</a>(v)
     - sorts the elements of vector v in ascending or descending order.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.find\">find</a>(e, v)
     - returns the index of the first occurrence of scalar e in vector v.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.interpolate\">interpolate</a>(x, y, xi)
     - returns the interpolated value in (x,y) that corresponds to xi.</li>

<li> <a href=\"modelica://Modelica.Math.Vectors.relNodePositions\">relNodePositions</a>(nNodes)
     - returns a vector of relative node positions (0..1).</li>
</ul>

<h4>See also</h4>
<a href=\"modelica://Modelica.Math.Matrices\">Matrices</a>
</HTML>"));
  end Vectors;

  package Matrices "Library of functions operating on matrices"
    extends Modelica.Icons.Package;

    function leastSquares
    "Solve linear equation A*x = b (exactly if possible, or otherwise in a least square sense; A may be non-square and may be rank deficient)"
      extends Modelica.Icons.Function;
      input Real A[:, :] "Matrix A";
      input Real b[size(A, 1)] "Vector b";
      input Real rcond=100*Modelica.Constants.eps
      "Reciprocal condition number to estimate the rank of A";
      output Real x[size(A, 2)]
      "Vector x such that min|A*x-b|^2 if size(A,1) >= size(A,2) or min|x|^2 and A*x=b, if size(A,1) < size(A,2)";
      output Integer rank "Rank of A";
  protected
      Integer info;
      Real xx[max(size(A, 1), size(A, 2))];
    algorithm
      if min(size(A)) > 0 then
        (xx,info,rank) := LAPACK.dgelsx_vec(
              A,
              b,
              rcond);
        x := xx[1:size(A, 2)];
        assert(info == 0,
          "Solving an overdetermined or underdetermined linear system\n" +
          "of equations with function \"Matrices.leastSquares\" failed.");
      else
        x := fill(0.0, size(A, 2));
      end if;
      annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
x = Matrices.<b>leastSquares</b>(A,b);
</pre></blockquote>
<h4>Description</h4>
<p>
Returns a solution of equation A*x = b in a least
square sense (A may be rank deficient):
</p>
<pre>
  minimize | A*x - b |
</pre>

<p>
Several different cases can be distinguished (note, <b>rank</b> is an
output argument of this function):
</p>

<p>
<b>size(A,1) = size(A,2)</b>
</p>

<p> A solution is returned for a regular, as well as a singular matrix A:
</p>

<ul>
<li> <b>rank</b> = size(A,1):<br>
     A is <b>regular</b> and the returned solution x fulfills the equation
     A*x = b uniquely.</li>

<li> <b>rank</b> &lt; size(A,1):<br>
     A is <b>singular</b> and no unique solution for equation A*x = b exists.
     <ul>
     <li>  If an infinite number of solutions exists, the one is selected that fulfills
           the equation and at the same time has the minimum norm |x| for all solution
           vectors that fulfill the equation.</li>
     <li>  If no solution exists, x is selected such that |A*x - b| is as small as
           possible (but A*x - b is not zero).</li>
     </ul>
</ul>

<p>
<b>size(A,1) &gt; size(A,2):</b>
</p>

<p>
The equation A*x = b has no unique solution. The solution x is selected such that
|A*x - b| is as small as possible. If rank = size(A,2), this minimum norm solution is
unique. If rank &lt; size(A,2), there are an infinite number of solutions leading to the
same minimum value of |A*x - b|. From these infinite number of solutions, the one with the
minimum norm |x| is selected. This gives a unique solution that minimizes both
|A*x - b| and |x|.
</p>

<p>
<b>size(A,1) &lt; size(A,2):</b>
</p>

<ul>
<li> <b>rank</b> = size(A,1):<br>
     There are an infinite number of solutions that fulfill the equation A*x = b.
     From this infinite number, the unique solution is selected that minimizes |x|.
     </li>

<li> <b>rank</b> &lt; size(A,1):<br>
     There is either no solution of equation A*x = b, or there are again an infinite
     number of solutions. The unique solution x is returned that minimizes
      both |A*x - b| and |x|.</li>
</ul>

<p>
Note, the solution is computed with the LAPACK function \"dgelsx\",
i.e., QR or LQ factorization of A with column pivoting.
</p>

<h4>Algorithmic details</h4>

<p>
The function first computes a QR factorization with column pivoting:
</p>

<pre>
      A * P = Q * [ R11 R12 ]
                  [  0  R22 ]
</pre>

<p>
with R11 defined as the largest leading submatrix whose estimated
condition number is less than 1/rcond.  The order of R11, <b>rank</b>,
is the effective rank of A.
</p>

<p>
Then, R22 is considered to be negligible, and R12 is annihilated
by orthogonal transformations from the right, arriving at the
complete orthogonal factorization:
</p>

<pre>
     A * P = Q * [ T11 0 ] * Z
                 [  0  0 ]
</pre>

<p>
The minimum-norm solution is then
</p>

<pre>
     x = P * Z' [ inv(T11)*Q1'*b ]
                [        0       ]
</pre>

<p>
where Q1 consists of the first \"rank\" columns of Q.
</p>

<h4>See also</h4>

<p>
<a href=\"modelica://Modelica.Math.Matrices.leastSquares2\">Matrices.leastSquares2</a>
(same as leastSquares, but with a right hand side matrix), <br>
<a href=\"modelica://Modelica.Math.Matrices.solve\">Matrices.solve</a>
(for square, regular matrices A)
</p>

</html>"));
    end leastSquares;

    package LAPACK
    "Interface to LAPACK library (should usually not directly be used but only indirectly via Modelica.Math.Matrices)"
      extends Modelica.Icons.Package;

      function dgelsx_vec
      "Computes the minimum-norm solution to a real linear least squares problem with rank deficient A"

        extends Modelica.Icons.Function;
        input Real A[:, :];
        input Real b[size(A, 1)];
        input Real rcond=0.0 "Reciprocal condition number to estimate rank";
        output Real x[max(size(A, 1), size(A, 2))]=cat(
                  1,
                  b,
                  zeros(max(nrow, ncol) - nrow))
        "solution is in first size(A,2) rows";
        output Integer info;
        output Integer rank "Effective rank of A";
    protected
        Integer nrow=size(A, 1);
        Integer ncol=size(A, 2);
        Integer nx=max(nrow, ncol);
        Integer lwork=max(min(nrow, ncol) + 3*ncol, 2*min(nrow, ncol) + 1);
        Real work[max(min(size(A, 1), size(A, 2)) + 3*size(A, 2), 2*min(size(A, 1),
          size(A, 2)) + 1)];
        Real Awork[size(A, 1), size(A, 2)]=A;
        Integer jpvt[size(A, 2)]=zeros(ncol);
      external"FORTRAN 77" dgelsx(
                nrow,
                ncol,
                1,
                Awork,
                nrow,
                x,
                nx,
                jpvt,
                rcond,
                rank,
                work,
                lwork,
                info) annotation (Library="lapack");
        annotation (Documentation(info="Lapack documentation
    Purpose
    =======

    DGEEV computes for an N-by-N real nonsymmetric matrix A, the
    eigenvalues and, optionally, the left and/or right eigenvectors.

    The right eigenvector v(j) of A satisfies
                     A * v(j) = lambda(j) * v(j)
    where lambda(j) is its eigenvalue.
    The left eigenvector u(j) of A satisfies
                  u(j)**H * A = lambda(j) * u(j)**H
    where u(j)**H denotes the conjugate transpose of u(j).

    The computed eigenvectors are normalized to have Euclidean norm
    equal to 1 and largest component real.

    Arguments
    =========

    JOBVL   (input) CHARACTER*1
            = 'N': left eigenvectors of A are not computed;
            = 'V': left eigenvectors of A are computed.

    JOBVR   (input) CHARACTER*1
            = 'N': right eigenvectors of A are not computed;
            = 'V': right eigenvectors of A are computed.

    N       (input) INTEGER
            The order of the matrix A. N >= 0.

    A       (input/output) DOUBLE PRECISION array, dimension (LDA,N)
            On entry, the N-by-N matrix A.
            On exit, A has been overwritten.

    LDA     (input) INTEGER
            The leading dimension of the array A.  LDA >= max(1,N).

    WR      (output) DOUBLE PRECISION array, dimension (N)
    WI      (output) DOUBLE PRECISION array, dimension (N)
            WR and WI contain the real and imaginary parts,
            respectively, of the computed eigenvalues.  Complex
            conjugate pairs of eigenvalues appear consecutively
            with the eigenvalue having the positive imaginary part
            first.

    VL      (output) DOUBLE PRECISION array, dimension (LDVL,N)
            If JOBVL = 'V', the left eigenvectors u(j) are stored one
            after another in the columns of VL, in the same order
            as their eigenvalues.
            If JOBVL = 'N', VL is not referenced.
            If the j-th eigenvalue is real, then u(j) = VL(:,j),
            the j-th column of VL.
            If the j-th and (j+1)-st eigenvalues form a complex
            conjugate pair, then u(j) = VL(:,j) + i*VL(:,j+1) and
            u(j+1) = VL(:,j) - i*VL(:,j+1).

    LDVL    (input) INTEGER
            The leading dimension of the array VL.  LDVL >= 1; if
            JOBVL = 'V', LDVL >= N.

    VR      (output) DOUBLE PRECISION array, dimension (LDVR,N)
            If JOBVR = 'V', the right eigenvectors v(j) are stored one
            after another in the columns of VR, in the same order
            as their eigenvalues.
            If JOBVR = 'N', VR is not referenced.
            If the j-th eigenvalue is real, then v(j) = VR(:,j),
            the j-th column of VR.
            If the j-th and (j+1)-st eigenvalues form a complex
            conjugate pair, then v(j) = VR(:,j) + i*VR(:,j+1) and
            v(j+1) = VR(:,j) - i*VR(:,j+1).

    LDVR    (input) INTEGER
            The leading dimension of the array VR.  LDVR >= 1; if
            JOBVR = 'V', LDVR >= N.

    WORK    (workspace/output) DOUBLE PRECISION array, dimension (MAX(1,LWORK))
            On exit, if INFO = 0, WORK(1) returns the optimal LWORK.

    LWORK   (input) INTEGER
            The dimension of the array WORK.  LWORK >= max(1,3*N), and
            if JOBVL = 'V' or JOBVR = 'V', LWORK >= 4*N.  For good
            performance, LWORK must generally be larger.

            If LWORK = -1, then a workspace query is assumed; the routine
            only calculates the optimal size of the WORK array, returns
            this value as the first entry of the WORK array, and no error
            message related to LWORK is issued by XERBLA.

    INFO    (output) INTEGER
            = 0:  successful exit
            < 0:  if INFO = -i, the i-th argument had an illegal value.
            > 0:  if INFO = i, the QR algorithm failed to compute all the
                  eigenvalues, and no eigenvectors have been computed;
                  elements i+1:N of WR and WI contain eigenvalues which
                  have converged.
"));
      end dgelsx_vec;
      annotation (Documentation(info="<html>
<p>
This package contains external Modelica functions as interface to the
LAPACK library
(<a href=\"http://www.netlib.org/lapack\">http://www.netlib.org/lapack</a>)
that provides FORTRAN subroutines to solve linear algebra
tasks. Usually, these functions are not directly called, but only via
the much more convenient interface of
<a href=\"modelica://Modelica.Math.Matrices\">Modelica.Math.Matrices</a>.
The documentation of the LAPACK functions is a copy of the original
FORTRAN code. The details of LAPACK are described in:
</p>

<dl>
<dt>Anderson E., Bai Z., Bischof C., Blackford S., Demmel J., Dongarra J.,
    Du Croz J., Greenbaum A., Hammarling S., McKenney A., and Sorensen D.:</dt>
<dd> <a href=\"http://www.netlib.org/lapack/lug/lapack_lug.html\">Lapack Users' Guide</a>.
     Third Edition, SIAM, 1999.</dd>
</dl>

<p>
See also <a href=\"http://en.wikipedia.org/wiki/Lapack\">http://en.wikipedia.org/wiki/Lapack</a>.
</p>

<p>
This package contains a direct interface to the LAPACK subroutines
</p>

</html>"));
    end LAPACK;
    annotation (Documentation(info="<HTML>
<h4>Library content</h4>
<p>
This library provides functions operating on matrices. Below, the
functions are ordered according to categories and a typical
call of the respective function is shown.
Most functions are solely an interface to the external
<a href=\"modelica://Modelica.Math.Matrices.LAPACK\">LAPACK</a> library.
</p>

<p>
Note: A' is a short hand notation of transpose(A):
</p>

<p><b>Basic Information</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.toString\">toString</a>(A)
     - returns the string representation of matrix A.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.isEqual\">isEqual</a>(M1, M2)
     - returns true if matrices M1 and M2 have the same size and the same elements.</li>
</ul>

<p><b>Linear Equations</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.solve\">solve</a>(A,b)
     - returns solution x of the linear equation A*x=b (where b is a vector,
       and A is a square matrix that must be regular).</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.solve2\">solve2</a>(A,B)
     - returns solution X of the linear equation A*X=B (where B is a matrix,
       and A is a square matrix that must be regular)</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.leastSquares\">leastSquares</a>(A,b)
     - returns solution x of the linear equation A*x=b in a least squares sense
       (where b is a vector and A may be non-square and may be rank deficient)</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.leastSquares2\">leastSquares2</a>(A,B)
     - returns solution X of the linear equation A*X=B in a least squares sense
       (where B is a matrix and A may be non-square and may be rank deficient)</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.equalityLeastSquares\">equalityLeastSquares</a>(A,a,B,b)
     - returns solution x of a linear equality constrained least squares problem:
       min|A*x-a|^2 subject to B*x=b</<li>

<li> (LU,p,info) = <a href=\"modelica://Modelica.Math.Matrices.LU\">LU</a>(A)
     - returns the LU decomposition with row pivoting of a rectangular matrix A.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.LU_solve\">LU_solve</a>(LU,p,b)
     - returns solution x of the linear equation L*U*x[p]=b with a b
       vector and an LU decomposition from \"LU(..)\".</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.LU_solve2\">LU_solve2</a>(LU,p,B)
     - returns solution X of the linear equation L*U*X[p,:]=B with a B
       matrix and an LU decomposition from \"LU(..)\".</li>
</ul>

<p><b>Matrix Factorizations</b></p>
<ul>
<li> (eval,evec) = <a href=\"modelica://Modelica.Math.Matrices.eigenValues\">eigenValues</a>(A)
     - returns eigen values \"eval\" and eigen vectors \"evec\" for a real,
       nonsymmetric matrix A in a Real representation.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.eigenValueMatrix\">eigenValueMatrix</a>(eval)
     - returns real valued block diagonal matrix of the eigenvalues \"eval\" of matrix A.</li>

<li> (sigma,U,VT) = <a href=\"modelica://Modelica.Math.Matrices.singularValues\">singularValues</a>(A)
     - returns singular values \"sigma\" and left and right singular vectors U and VT
       of a rectangular matrix A.</li>

<li> (Q,R,p) = <a href=\"modelica://Modelica.Math.Matrices.QR\">QR</a>(A)
     - returns the QR decomposition with column pivoting of a rectangular matrix A
       such that Q*R = A[:,p].</li>

<li> (H,U) = <a href=\"modelica://Modelica.Math.Matrices.hessenberg\">hessenberg</a>(A)
     - returns the upper Hessenberg form H and the orthogonal transformation matrix U
       of a square matrix A such that H = U'*A*U.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.realSchur\">realSchur</a>(A)
     - returns the real Schur form of a square matrix A.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.cholesky\">cholesky</a>(A)
     - returns the cholesky factor H of a real symmetric positive definite matrix A so that A = H'*H.</li>

<li> (D,Aimproved) = <a href=\"modelica://Modelica.Math.Matrices.balance\">balance</a>(A)
     - returns an improved form Aimproved of a square matrix A that has a smaller condition as A,
       with Aimproved = inv(diagonal(D))*A*diagonal(D).</li>
</ul>

<p><b>Matrix Properties</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.trace\">trace</a>(A)
     - returns the trace of square matrix A, i.e., the sum of the diagonal elements.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.det\">det</a>(A)
     - returns the determinant of square matrix A (using LU decomposition; try to avoid det(..))</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.inv\">inv</a>(A)
     - returns the inverse of square matrix A (try to avoid, use instead \"solve2(..) with B=identity(..))</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.rank\">rank</a>(A)
     - returns the rank of square matrix A (computed with singular value decomposition)</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.conditionNumber\">conditionNumber</a>(A)
     - returns the condition number norm(A)*norm(inv(A)) of a square matrix A in the range 1..&infin;.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.rcond\">rcond</a>(A)
     - returns the reciprocal condition number 1/conditionNumber(A) of a square matrix A in the range 0..1.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.norm\">norm</a>(A)
     - returns the 1-, 2-, or infinity-norm of matrix A.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.frobeniusNorm\">frobeniusNorm</a>(A)
     - returns the Frobenius norm of matrix A.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.nullSpace\">nullSpace</a>(A)
     - returns the null space of matrix A.</li>
</ul>

<p><b>Matrix Exponentials</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.exp\">exp</a>(A)
     - returns the exponential e^A of a matrix A by adaptive Taylor series
       expansion with scaling and balancing</li>

<li> (phi, gamma) = <a href=\"modelica://Modelica.Math.Matrices.integralExp\">integralExp</a>(A,B)
     - returns the exponential phi=e^A and the integral gamma=integral(exp(A*t)*dt)*B as needed
       for a discretized system with zero order hold.</li>

<li> (phi, gamma, gamma1) = <a href=\"modelica://Modelica.Math.Matrices.integralExpT\">integralExpT</a>(A,B)
     - returns the exponential phi=e^A, the integral gamma=integral(exp(A*t)*dt)*B,
       and the time-weighted integral gamma1 = integral((T-t)*exp(A*t)*dt)*B as needed
       for a discretized system with first order hold.</li>
</ul>

<p><b>Matrix Equations</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.continuousLyapunov\">continuousLyapunov</a>(A,C)
     - returns solution X of the continuous-time Lyapunov equation X*A + A'*X = C</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.continuousSylvester\">continuousSylvester</a>(A,B,C)
     - returns solution X of the continuous-time Sylvester equation A*X + X*B = C</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.continuousRiccati\">continuousRiccati</a>(A,B,R,Q)
     - returns solution X of the continuous-time algebraic Riccati equation
       A'*X + X*A - X*B*inv(R)*B'*X + Q = 0</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.discreteLyapunov\">discreteLyapunov</a>(A,C)
     - returns solution X of the discrete-time Lyapunov equation A'*X*A + sgn*X = C</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.discreteSylvester\">discreteSylvester</a>(A,B,C)
     - returns solution X of the discrete-time Sylvester equation A*X*B + sgn*X = C</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.discreteRiccati\">discreteRiccati</a>(A,B,R,Q)
     - returns solution X of the discrete-time algebraic Riccati equation
       A'*X*A - X - A'*X*B*inv(R + B'*X*B)*B'*X*A + Q = 0</li>
</ul>

<p><b>Matrix Manipulation</b></p>
<ul>
<li> <a href=\"modelica://Modelica.Math.Matrices.sort\">sort</a>(M)
     - returns the sorted rows or columns of matrix M in ascending or descending order.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.flipLeftRight\">flipLeftRight</a>(M)
     - returns matrix M so that the columns of M are flipped in left/right direction.</li>

<li> <a href=\"modelica://Modelica.Math.Matrices.flipUpDown\">flipUpDown</a>(M)
     - returns matrix M so that the rows of M are flipped in up/down direction.</li>
</ul>

<h4>See also</h4>
<a href=\"modelica://Modelica.Math.Vectors\">Vectors</a>

</html>"));
  end Matrices;

  function sin "Sine"
    extends Modelica.Math.Icons.AxisLeft;
    input Modelica.SIunits.Angle u;
    output Real y;

  external "builtin" y=  sin(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,0},{-68.7,34.2},{-61.5,53.1},{-55.1,66.4},{-49.4,74.6},
                {-43.8,79.1},{-38.2,79.8},{-32.6,76.6},{-26.9,69.7},{-21.3,59.4},
                {-14.9,44.1},{-6.83,21.2},{10.1,-30.8},{17.3,-50.2},{23.7,-64.2},
                {29.3,-73.1},{35,-78.4},{40.6,-80},{46.2,-77.6},{51.9,-71.5},{
                57.5,-61.9},{63.9,-47.2},{72,-24.8},{80,0}}, color={0,0,0}),
          Text(
            extent={{12,84},{84,36}},
            lineColor={192,192,192},
            textString="sin")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Line(points={{-100,0},{84,0}}, color={95,95,95}),
            Polygon(
              points={{100,0},{84,6},{84,-6},{100,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,0},{-68.7,34.2},{-61.5,53.1},{-55.1,66.4},{-49.4,74.6},
              {-43.8,79.1},{-38.2,79.8},{-32.6,76.6},{-26.9,69.7},{-21.3,59.4},{-14.9,
              44.1},{-6.83,21.2},{10.1,-30.8},{17.3,-50.2},{23.7,-64.2},{29.3,-73.1},
              {35,-78.4},{40.6,-80},{46.2,-77.6},{51.9,-71.5},{57.5,-61.9},{63.9,
              -47.2},{72,-24.8},{80,0}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{-105,72},{-85,88}},
              textString="1",
              lineColor={0,0,255}),Text(
              extent={{70,25},{90,5}},
              textString="2*pi",
              lineColor={0,0,255}),Text(
              extent={{-103,-72},{-83,-88}},
              textString="-1",
              lineColor={0,0,255}),Text(
              extent={{82,-6},{102,-26}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{-80,80},{-28,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{-80,-80},{50,-80}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = sin(u), with -&infin; &lt; u &lt; &infin;:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/sin.png\">
</p>
</html>"));
  end sin;

  function cos "Cosine"
    extends Modelica.Math.Icons.AxisLeft;
    input SI.Angle u;
    output Real y;

  external "builtin" y=  cos(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,80},{-74.4,78.1},{-68.7,72.3},{-63.1,63},{-56.7,48.7},
                {-48.6,26.6},{-29.3,-32.5},{-22.1,-51.7},{-15.7,-65.3},{-10.1,-73.8},
                {-4.42,-78.8},{1.21,-79.9},{6.83,-77.1},{12.5,-70.6},{18.1,-60.6},
                {24.5,-45.7},{32.6,-23},{50.3,31.3},{57.5,50.7},{63.9,64.6},{69.5,
                73.4},{75.2,78.6},{80,80}}, color={0,0,0}),
          Text(
            extent={{-36,82},{36,34}},
            lineColor={192,192,192},
            textString="cos")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Text(
              extent={{-103,72},{-83,88}},
              textString="1",
              lineColor={0,0,255}),Text(
              extent={{-103,-72},{-83,-88}},
              textString="-1",
              lineColor={0,0,255}),Text(
              extent={{70,25},{90,5}},
              textString="2*pi",
              lineColor={0,0,255}),Line(points={{-100,0},{84,0}}, color={95,95,95}),
            Polygon(
              points={{98,0},{82,6},{82,-6},{98,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,80},{-74.4,78.1},{-68.7,72.3},{-63.1,63},{-56.7,48.7},
              {-48.6,26.6},{-29.3,-32.5},{-22.1,-51.7},{-15.7,-65.3},{-10.1,-73.8},
              {-4.42,-78.8},{1.21,-79.9},{6.83,-77.1},{12.5,-70.6},{18.1,-60.6},{
              24.5,-45.7},{32.6,-23},{50.3,31.3},{57.5,50.7},{63.9,64.6},{69.5,
              73.4},{75.2,78.6},{80,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{78,-6},{98,-26}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{-80,-80},{18,-80}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = cos(u), with -&infin; &lt; u &lt; &infin;:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/cos.png\">
</p>
</html>"));
  end cos;

  function tan "Tangent (u shall not be -pi/2, pi/2, 3*pi/2, ...)"
    extends Modelica.Math.Icons.AxisCenter;
    input SI.Angle u;
    output Real y;

  external "builtin" y=  tan(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,-80},{-78.4,-68.4},{-76.8,-59.7},{-74.4,-50},{-71.2,-40.9},
                {-67.1,-33},{-60.7,-24.8},{-51.1,-17.2},{-35.8,-9.98},{-4.42,-1.07},
                {33.4,9.12},{49.4,16.2},{59.1,23.2},{65.5,30.6},{70.4,39.1},{73.6,
                47.4},{76,56.1},{77.6,63.8},{80,80}}, color={0,0,0}),
          Text(
            extent={{-90,72},{-18,24}},
            lineColor={192,192,192},
            textString="tan")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Text(
              extent={{-37,-72},{-17,-88}},
              textString="-5.8",
              lineColor={0,0,255}),Text(
              extent={{-33,86},{-13,70}},
              textString=" 5.8",
              lineColor={0,0,255}),Text(
              extent={{68,-13},{88,-33}},
              textString="1.4",
              lineColor={0,0,255}),Line(points={{-100,0},{84,0}}, color={95,95,95}),
            Polygon(
              points={{98,0},{82,6},{82,-6},{98,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,-80},{-78.4,-68.4},{-76.8,-59.7},{-74.4,-50},{-71.2,-40.9},
              {-67.1,-33},{-60.7,-24.8},{-51.1,-17.2},{-35.8,-9.98},{-4.42,-1.07},
              {33.4,9.12},{49.4,16.2},{59.1,23.2},{65.5,30.6},{70.4,39.1},{73.6,
              47.4},{76,56.1},{77.6,63.8},{80,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{82,22},{102,2}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{0,80},{86,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{80,88},{80,-16}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = tan(u), with -&infin; &lt; u &lt; &infin;
(if u is a multiple of (2n-1)*pi/2, y = tan(u) is +/- infinity).
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/tan.png\">
</p>
</html>"));
  end tan;

  function asin "Inverse sine (-1 <= u <= 1)"
    extends Modelica.Math.Icons.AxisCenter;
    input Real u;
    output SI.Angle y;

  external "builtin" y=  asin(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,-80},{-79.2,-72.8},{-77.6,-67.5},{-73.6,-59.4},{-66.3,
                -49.8},{-53.5,-37.3},{-30.2,-19.7},{37.4,24.8},{57.5,40.8},{68.7,
                52.7},{75.2,62.2},{77.6,67.5},{80,80}}, color={0,0,0}),
          Text(
            extent={{-88,78},{-16,30}},
            lineColor={192,192,192},
            textString="asin")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Text(
              extent={{-40,-72},{-15,-88}},
              textString="-pi/2",
              lineColor={0,0,255}),Text(
              extent={{-38,88},{-13,72}},
              textString=" pi/2",
              lineColor={0,0,255}),Text(
              extent={{68,-9},{88,-29}},
              textString="+1",
              lineColor={0,0,255}),Text(
              extent={{-90,21},{-70,1}},
              textString="-1",
              lineColor={0,0,255}),Line(points={{-100,0},{84,0}}, color={95,95,95}),
            Polygon(
              points={{98,0},{82,6},{82,-6},{98,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,-80},{-79.2,-72.8},{-77.6,-67.5},{-73.6,-59.4},{-66.3,
              -49.8},{-53.5,-37.3},{-30.2,-19.7},{37.4,24.8},{57.5,40.8},{68.7,
              52.7},{75.2,62.2},{77.6,67.5},{80,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{82,24},{102,4}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{0,80},{86,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{80,86},{80,-10}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = asin(u), with -1 &le; u &le; +1:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/asin.png\">
</p>
</html>"));
  end asin;

  function cosh "Hyperbolic cosine"
    extends Modelica.Math.Icons.AxisCenter;
    input Real u;
    output Real y;

  external "builtin" y=  cosh(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,-86.083},{68,-86.083}}, color={192,192,192}),
          Polygon(
            points={{90,-86.083},{68,-78.083},{68,-94.083},{90,-86.083}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,80},{-77.6,61.1},{-74.4,39.3},{-71.2,20.7},{-67.1,
                1.29},{-63.1,-14.6},{-58.3,-29.8},{-52.7,-43.5},{-46.2,-55.1},{-39,
                -64.3},{-30.2,-71.7},{-18.9,-77.1},{-4.42,-79.9},{10.9,-79.1},{
                23.7,-75.2},{34.2,-68.7},{42.2,-60.6},{48.6,-51.2},{54.3,-40},{
                59.1,-27.5},{63.1,-14.6},{67.1,1.29},{71.2,20.7},{74.4,39.3},{
                77.6,61.1},{80,80}}, color={0,0,0}),
          Text(
            extent={{4,66},{66,20}},
            lineColor={192,192,192},
            textString="cosh")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Line(points={{-100,-84.083},{84,-84.083}}, color=
             {95,95,95}),Polygon(
              points={{98,-84.083},{82,-78.083},{82,-90.083},{98,-84.083}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,80},{-77.6,61.1},{-74.4,39.3},{-71.2,20.7},{-67.1,1.29},
              {-63.1,-14.6},{-58.3,-29.8},{-52.7,-43.5},{-46.2,-55.1},{-39,-64.3},
              {-30.2,-71.7},{-18.9,-77.1},{-4.42,-79.9},{10.9,-79.1},{23.7,-75.2},
              {34.2,-68.7},{42.2,-60.6},{48.6,-51.2},{54.3,-40},{59.1,-27.5},{
              63.1,-14.6},{67.1,1.29},{71.2,20.7},{74.4,39.3},{77.6,61.1},{80,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{-31,72},{-11,88}},
              textString="27",
              lineColor={0,0,255}),Text(
              extent={{64,-83},{84,-103}},
              textString="4",
              lineColor={0,0,255}),Text(
              extent={{-94,-63},{-74,-83}},
              textString="-4",
              lineColor={0,0,255}),Text(
              extent={{80,-60},{100,-80}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{0,80},{88,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{80,84},{80,-90}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = cosh(u), with -&infin; &lt; u &lt; &infin;:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/cosh.png\">
</p>
</html>"));
  end cosh;

  function tanh "Hyperbolic tangent"
    extends Modelica.Math.Icons.AxisCenter;
    input Real u;
    output Real y;

  external "builtin" y=  tanh(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,-80},{-47.8,-78.7},{-35.8,-75.7},{-27.7,-70.6},{-22.1,
                -64.2},{-17.3,-55.9},{-12.5,-44.3},{-7.64,-29.2},{-1.21,-4.82},{
                6.83,26.3},{11.7,42},{16.5,54.2},{21.3,63.1},{26.9,69.9},{34.2,75},
                {45.4,78.4},{72,79.9},{80,80}}, color={0,0,0}),
          Text(
            extent={{-88,72},{-16,24}},
            lineColor={192,192,192},
            textString="tanh")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Line(points={{-100,0},{84,0}}, color={95,95,
            95}),Polygon(
              points={{96,0},{80,6},{80,-6},{96,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,-80.5},{-47.8,-79.2},{-35.8,-76.2},{-27.7,-71.1},{-22.1,
              -64.7},{-17.3,-56.4},{-12.5,-44.8},{-7.64,-29.7},{-1.21,-5.32},{
              6.83,25.8},{11.7,41.5},{16.5,53.7},{21.3,62.6},{26.9,69.4},{34.2,
              74.5},{45.4,77.9},{72,79.4},{80,79.5}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{-29,72},{-9,88}},
              textString="1",
              lineColor={0,0,255}),Text(
              extent={{3,-72},{23,-88}},
              textString="-1",
              lineColor={0,0,255}),Text(
              extent={{82,-2},{102,-22}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{0,80},{88,80}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = tanh(u), with -&infin; &lt; u &lt; &infin;:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/tanh.png\">
</p>
</html>"));
  end tanh;

  function exp "Exponential, base e"
    extends Modelica.Math.Icons.AxisCenter;
    input Real u;
    output Real y;

  external "builtin" y=  exp(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,-80.3976},{68,-80.3976}}, color={192,192,192}),
          Polygon(
            points={{90,-80.3976},{68,-72.3976},{68,-88.3976},{90,-80.3976}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,-80},{-31,-77.9},{-6.03,-74},{10.9,-68.4},{23.7,-61},
                {34.2,-51.6},{43,-40.3},{50.3,-27.8},{56.7,-13.5},{62.3,2.23},{
                67.1,18.6},{72,38.2},{76,57.6},{80,80}}, color={0,0,0}),
          Text(
            extent={{-86,50},{-14,2}},
            lineColor={192,192,192},
            textString="exp")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Line(points={{-100,-80.3976},{84,-80.3976}},
            color={95,95,95}),Polygon(
              points={{98,-80.3976},{82,-74.3976},{82,-86.3976},{98,-80.3976}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-80,-80},{-31,-77.9},{-6.03,-74},{10.9,-68.4},{23.7,-61},{
              34.2,-51.6},{43,-40.3},{50.3,-27.8},{56.7,-13.5},{62.3,2.23},{67.1,
              18.6},{72,38.2},{76,57.6},{80,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{-31,72},{-11,88}},
              textString="20",
              lineColor={0,0,255}),Text(
              extent={{-92,-81},{-72,-101}},
              textString="-3",
              lineColor={0,0,255}),Text(
              extent={{66,-81},{86,-101}},
              textString="3",
              lineColor={0,0,255}),Text(
              extent={{2,-69},{22,-89}},
              textString="1",
              lineColor={0,0,255}),Text(
              extent={{78,-54},{98,-74}},
              lineColor={95,95,95},
              textString="u"),Line(
              points={{0,80},{88,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{80,84},{80,-84}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = exp(u), with -&infin; &lt; u &lt; &infin;:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/exp.png\">
</p>
</html>"));
  end exp;

  function log "Natural (base e) logarithm (u shall be > 0)"
    extends Modelica.Math.Icons.AxisLeft;
    input Real u;
    output Real y;

  external "builtin" y=  log(u);
    annotation (
      Icon(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={
          Line(points={{-90,0},{68,0}}, color={192,192,192}),
          Polygon(
            points={{90,0},{68,8},{68,-8},{90,0}},
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid),
          Line(points={{-80,-80},{-79.2,-50.6},{-78.4,-37},{-77.6,-28},{-76.8,-21.3},
                {-75.2,-11.4},{-72.8,-1.31},{-69.5,8.08},{-64.7,17.9},{-57.5,28},
                {-47,38.1},{-31.8,48.1},{-10.1,58},{22.1,68},{68.7,78.1},{80,80}},
              color={0,0,0}),
          Text(
            extent={{-6,-24},{66,-72}},
            lineColor={192,192,192},
            textString="log")}),
      Diagram(coordinateSystem(
          preserveAspectRatio=true,
          extent={{-100,-100},{100,100}}), graphics={Line(points={{-100,0},{84,0}}, color={95,95,95}),
            Polygon(
              points={{100,0},{84,6},{84,-6},{100,0}},
              lineColor={95,95,95},
              fillColor={95,95,95},
              fillPattern=FillPattern.Solid),Line(
              points={{-78,-80},{-77.2,-50.6},{-76.4,-37},{-75.6,-28},{-74.8,-21.3},
              {-73.2,-11.4},{-70.8,-1.31},{-67.5,8.08},{-62.7,17.9},{-55.5,28},{-45,
              38.1},{-29.8,48.1},{-8.1,58},{24.1,68},{70.7,78.1},{82,80}},
              color={0,0,255},
              thickness=0.5),Text(
              extent={{-105,72},{-85,88}},
              textString="3",
              lineColor={0,0,255}),Text(
              extent={{60,-3},{80,-23}},
              textString="20",
              lineColor={0,0,255}),Text(
              extent={{-78,-7},{-58,-27}},
              textString="1",
              lineColor={0,0,255}),Text(
              extent={{84,26},{104,6}},
              lineColor={95,95,95},
              textString="u"),Text(
              extent={{-100,9},{-80,-11}},
              textString="0",
              lineColor={0,0,255}),Line(
              points={{-80,80},{84,80}},
              color={175,175,175},
              smooth=Smooth.None),Line(
              points={{82,82},{82,-6}},
              color={175,175,175},
              smooth=Smooth.None)}),
      Documentation(info="<html>
<p>
This function returns y = log(10) (the natural logarithm of u),
with u &gt; 0:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Math/log.png\">
</p>
</html>"));
  end log;
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
            {100,100}}), graphics={Line(points={{-80,0},{-68.7,34.2},{-61.5,53.1},
              {-55.1,66.4},{-49.4,74.6},{-43.8,79.1},{-38.2,79.8},{-32.6,76.6},{
              -26.9,69.7},{-21.3,59.4},{-14.9,44.1},{-6.83,21.2},{10.1,-30.8},{17.3,
              -50.2},{23.7,-64.2},{29.3,-73.1},{35,-78.4},{40.6,-80},{46.2,-77.6},
              {51.9,-71.5},{57.5,-61.9},{63.9,-47.2},{72,-24.8},{80,0}}, color={
              0,0,0}, smooth=Smooth.Bezier)}), Documentation(info="<HTML>
<p>
This package contains <b>basic mathematical functions</b> (such as sin(..)),
as well as functions operating on
<a href=\"modelica://Modelica.Math.Vectors\">vectors</a>,
<a href=\"modelica://Modelica.Math.Matrices\">matrices</a>,
<a href=\"modelica://Modelica.Math.Nonlinear\">nonlinear functions</a>, and
<a href=\"modelica://Modelica.Math.BooleanVectors\">Boolean vectors</a>.
</p>

<dl>
<dt><b>Main Authors:</b>
<dd><a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a> and
    Marcus Baur<br>
    Deutsches Zentrum f&uuml;r Luft und Raumfahrt e.V. (DLR)<br>
    Institut f&uuml;r Robotik und Mechatronik<br>
    Postfach 1116<br>
    D-82230 Wessling<br>
    Germany<br>
    email: <A HREF=\"mailto:Martin.Otter@dlr.de\">Martin.Otter@dlr.de</A><br>
</dl>

<p>
Copyright &copy; 1998-2013, Modelica Association and DLR.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</html>",   revisions="<html>
<ul>
<li><i>October 21, 2002</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>
       and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       Function tempInterpol2 added.</li>
<li><i>Oct. 24, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Icons for icon and diagram level introduced.</li>
<li><i>June 30, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized.</li>
</ul>

</html>"));
  end Math;

  package Utilities
  "Library of utility functions dedicated to scripting (operating on files, streams, strings, system)"
    extends Modelica.Icons.Package;

    package Streams "Read from files and write to files"
      extends Modelica.Icons.Package;

      function error "Print error message and cancel all actions"
        extends Modelica.Icons.Function;
        input String string "String to be printed to error message window";
        external "C" ModelicaError(string) annotation(Library="ModelicaExternalC");
        annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
Streams.<b>error</b>(string);
</pre></blockquote>
<h4>Description</h4>
<p>
Print the string \"string\" as error message and
cancel all actions. Line breaks are characterized
by \"\\n\" in the string.
</p>
<h4>Example</h4>
<blockquote><pre>
  Streams.error(\"x (= \" + String(x) + \")\\nhas to be in the range 0 .. 1\");
</pre></blockquote>
<h4>See also</h4>
<p>
<a href=\"modelica://Modelica.Utilities.Streams\">Streams</a>,
<a href=\"modelica://Modelica.Utilities.Streams.print\">Streams.print</a>,
<a href=\"modelica://ModelicaReference.Operators.'String()'\">ModelicaReference.Operators.'String()'</a>
</p>
</html>"));
      end error;
      annotation (
        Documentation(info="<HTML>
<h4>Library content</h4>
<p>
Package <b>Streams</b> contains functions to input and output strings
to a message window or on files. Note that a string is interpreted
and displayed as html text (e.g., with print(..) or error(..))
if it is enclosed with the Modelica html quotation, e.g.,
</p>
<center>
string = \"&lt;html&gt; first line &lt;br&gt; second line &lt;/html&gt;\".
</center>
<p>
It is a quality of implementation, whether (a) all tags of html are supported
or only a subset, (b) how html tags are interpreted if the output device
does not allow to display formatted text.
</p>
<p>
In the table below an example call to every function is given:
</p>
<table border=1 cellspacing=0 cellpadding=2>
  <tr><th><b><i>Function/type</i></b></th><th><b><i>Description</i></b></th></tr>
  <tr><td valign=\"top\"><a href=\"modelica://Modelica.Utilities.Streams.print\">print</a>(string)<br>
          <a href=\"modelica://Modelica.Utilities.Streams.print\">print</a>(string,fileName)</td>
      <td valign=\"top\"> Print string \"string\" or vector of strings to message window or on
           file \"fileName\".</td>
  </tr>
  <tr><td valign=\"top\">stringVector =
         <a href=\"modelica://Modelica.Utilities.Streams.readFile\">readFile</a>(fileName)</td>
      <td valign=\"top\"> Read complete text file and return it as a vector of strings.</td>
  </tr>
  <tr><td valign=\"top\">(string, endOfFile) =
         <a href=\"modelica://Modelica.Utilities.Streams.readLine\">readLine</a>(fileName, lineNumber)</td>
      <td valign=\"top\">Returns from the file the content of line lineNumber.</td>
  </tr>
  <tr><td valign=\"top\">lines =
         <a href=\"modelica://Modelica.Utilities.Streams.countLines\">countLines</a>(fileName)</td>
      <td valign=\"top\">Returns the number of lines in a file.</td>
  </tr>
  <tr><td valign=\"top\"><a href=\"modelica://Modelica.Utilities.Streams.error\">error</a>(string)</td>
      <td valign=\"top\"> Print error message \"string\" to message window
           and cancel all actions</td>
  </tr>
  <tr><td valign=\"top\"><a href=\"modelica://Modelica.Utilities.Streams.close\">close</a>(fileName)</td>
      <td valign=\"top\"> Close file if it is still open. Ignore call if
           file is already closed or does not exist. </td>
  </tr>
</table>
<p>
Use functions <b>scanXXX</b> from package
<a href=\"modelica://Modelica.Utilities.Strings\">Strings</a>
to parse a string.
</p>
<p>
If Real, Integer or Boolean values shall be printed
or used in an error message, they have to be first converted
to strings with the builtin operator
<a href=\"modelica://ModelicaReference.Operators.'String()'\">ModelicaReference.Operators.'String()'</a>(...).
Example:
</p>
<pre>
  <b>if</b> x &lt; 0 <b>or</b> x &gt; 1 <b>then</b>
     Streams.error(\"x (= \" + String(x) + \") has to be in the range 0 .. 1\");
  <b>end if</b>;
</pre>
</html>"));
    end Streams;

    package Strings "Operations on strings"
      extends Modelica.Icons.Package;

      function length "Returns length of string"
        extends Modelica.Icons.Function;
        input String string;
        output Integer result "Number of characters of string";
      external "C" result = ModelicaStrings_length(string) annotation(Library="ModelicaExternalC");
        annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
Strings.<b>length</b>(string);
</pre></blockquote>
<h4>Description</h4>
<p>
Returns the number of characters of \"string\".
</p>
</html>"));
      end length;

      function compare "Compare two strings lexicographically"
        extends Modelica.Icons.Function;
        input String string1;
        input String string2;
        input Boolean caseSensitive=true
        "= false, if case of letters is ignored";
        output Modelica.Utilities.Types.Compare result "Result of comparison";
      external "C" result = ModelicaStrings_compare(string1, string2, caseSensitive) annotation(Library="ModelicaExternalC");
        annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
result = Strings.<b>compare</b>(string1, string2);
result = Strings.<b>compare</b>(string1, string2, caseSensitive=true);
</pre></blockquote>
<h4>Description</h4>
<p>
Compares two strings. If the optional argument caseSensitive=false,
upper case letters are treated as if they would be lower case letters.
The result of the comparison is returned as:
</p>
<pre>
  result = Modelica.Utilities.Types.Compare.Less     // string1 &lt; string2
         = Modelica.Utilities.Types.Compare.Equal    // string1 = string2
         = Modelica.Utilities.Types.Compare.Greater  // string1 &gt; string2
</pre>
<p>
Comparison is with regards to lexicographical order,
e.g., \"a\" &lt; \"b\";
</p>
</html>"));
      end compare;

      function isEqual "Determine whether two strings are identical"
        extends Modelica.Icons.Function;
        input String string1;
        input String string2;
        input Boolean caseSensitive=true
        "= false, if lower and upper case are ignored for the comparison";
        output Boolean identical "True, if string1 is identical to string2";
      algorithm
        identical :=compare(string1, string2, caseSensitive) == Types.Compare.Equal;
        annotation (
      Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
Strings.<b>isEqual</b>(string1, string2);
Strings.<b>isEqual</b>(string1, string2, caseSensitive=true);
</pre></blockquote>
<h4>Description</h4>
<p>
Compare whether two strings are identical,
optionally ignoring case.
</p>
</html>"));
      end isEqual;

      function isEmpty
      "Return true if a string is empty (has only white space characters)"
        extends Modelica.Icons.Function;
        input String string;
        output Boolean result "True, if string is empty";
    protected
        Integer nextIndex;
        Integer len;
      algorithm
        nextIndex := Strings.Advanced.skipWhiteSpace(string);
        len := Strings.length(string);
        if len < 1 or nextIndex > len then
          result := true;
        else
          result := false;
        end if;

        annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
Strings.<b>isEmpty</b>(string);
</pre></blockquote>
<h4>Description</h4>
<p>
Returns true if the string has no characters or if the string consists
only of white space characters. Otherwise, false is returned.
</p>

<h4>Example</h4>
<blockquote><pre>
  isEmpty(\"\");       // returns true
  isEmpty(\"   \");    // returns true
  isEmpty(\"  abc\");  // returns false
  isEmpty(\"a\");      // returns false
</pre></blockquote>
</html>"));
      end isEmpty;

      package Advanced "Advanced scanning functions"
      extends Modelica.Icons.Package;

        function skipWhiteSpace "Scans white space"
          extends Modelica.Icons.Function;
          input String string;
          input Integer startIndex(min=1)=1;
          output Integer nextIndex;
          external "C" nextIndex = ModelicaStrings_skipWhiteSpace(string, startIndex) annotation(Library="ModelicaExternalC");
          annotation (Documentation(info="<html>
<h4>Syntax</h4>
<blockquote><pre>
nextIndex = <b>skipWhiteSpace</b>(string, startIndex);
</pre></blockquote>
<h4>Description</h4>
<p>
Starts scanning of \"string\" at position \"startIndex\" and
skips white space. The function returns nextIndex = index of character
of the first non white space character.
</p>
<h4>See also</h4>
<a href=\"modelica://Modelica.Utilities.Strings.Advanced\">Strings.Advanced</a>.
</html>"));
        end skipWhiteSpace;
        annotation (Documentation(info="<html>
<h4>Library content</h4>
<p>
Package <b>Strings.Advanced</b> contains basic scanning
functions. These functions should be <b>not called</b> directly, because
it is much simpler to utilize the higher level functions \"Strings.scanXXX\".
The functions of the \"Strings.Advanced\" library provide
the basic interface in order to implement the higher level
functions in package \"Strings\".
</p>
<p>
Library \"Advanced\" provides the following functions:
</p>
<pre>
  (nextIndex, realNumber)    = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanReal\">scanReal</a>        (string, startIndex, unsigned=false);
  (nextIndex, integerNumber) = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanInteger\">scanInteger</a>     (string, startIndex, unsigned=false);
  (nextIndex, string2)       = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanString\">scanString</a>      (string, startIndex);
  (nextIndex, identifier)    = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanIdentifier\">scanIdentifier</a>  (string, startIndex);
   nextIndex                 = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.skipWhiteSpace\">skipWhiteSpace</a>  (string, startIndex);
   nextIndex                 = <a href=\"modelica://Modelica.Utilities.Strings.Advanced.skipLineComments\">skipLineComments</a>(string, startIndex);
</pre>
<p>
All functions perform the following actions:
</p>
<ol>
<li> Scanning starts at character position \"startIndex\" of
     \"string\" (startIndex has a default of 1).
<li> First, white space is skipped, such as blanks (\" \"), tabs (\"\\t\"), or newline (\"\\n\")</li>
<li> Afterwards, the required token is scanned.</li>
<li> If successful, on return nextIndex = index of character
     directly after the found token and the token value is returned
     as second output argument.<br>
     If not successful, on return nextIndex = startIndex.
     </li>
</ol>
<p>
The following additional rules apply for the scanning:
</p>
<ul>
<li> Function <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanReal\">scanReal</a>:<br>
     Scans a full number including one optional leading \"+\" or \"-\" (if unsigned=false)
     according to the Modelica grammar. For example, \"+1.23e-5\", \"0.123\" are
     Real numbers, but \".1\" is not.
     Note, an Integer number, such as \"123\" is also treated as a Real number.<br>&nbsp;</li>
<li> Function <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanInteger\">scanInteger</a>:<br>
     Scans an Integer number including one optional leading \"+\"
     or \"-\" (if unsigned=false) according to the Modelica (and C/C++) grammar.
     For example, \"+123\", \"20\" are Integer numbers.
     Note, a Real number, such as \"123.4\" is not an Integer and
     scanInteger returns nextIndex = startIndex.<br>&nbsp;</li>
<li> Function <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanString\">scanString</a>:<br>
     Scans a String according to the Modelica (and C/C++) grammar, e.g.,
     \"This is a \"string\"\" is a valid string token.<br>&nbsp;</li>
<li> Function <a href=\"modelica://Modelica.Utilities.Strings.Advanced.scanIdentifier\">scanIdentifier</a>:<br>
     Scans a Modelica identifier, i.e., the identifier starts either
     with a letter, followed by letters, digits or \"_\".
     For example, \"w_rel\", \"T12\".<br>&nbsp;</li>
<li> Function <a href=\"modelica://Modelica.Utilities.Strings.Advanced.skipLineComments\">skipLineComments</a><br>
     Skips white space and Modelica (C/C++) line comments iteratively.
     A line comment starts with \"//\" and ends either with an
     end-of-line (\"\\n\") or the end of the \"string\". </li>
</ul>
</html>"));
      end Advanced;
      annotation (
        Documentation(info="<HTML>
<h4>Library content</h4>
<p>
Package <b>Strings</b> contains functions to manipulate strings.
</p>
<p>
In the table below an example
call to every function is given using the <b>default</b> options.
</p>
<table border=1 cellspacing=0 cellpadding=2>
  <tr><th><b><i>Function</i></b></th><th><b><i>Description</i></b></th></tr>
  <tr><td valign=\"top\">len = <a href=\"modelica://Modelica.Utilities.Strings.length\">length</a>(string)</td>
      <td valign=\"top\">Returns length of string</td></tr>
  <tr><td valign=\"top\">string2 = <a href=\"modelica://Modelica.Utilities.Strings.substring\">substring</a>(string1,startIndex,endIndex)
       </td>
      <td valign=\"top\">Returns a substring defined by start and end index</td></tr>
  <tr><td valign=\"top\">result = <a href=\"modelica://Modelica.Utilities.Strings.repeat\">repeat</a>(n)<br>
 result = <a href=\"modelica://Modelica.Utilities.Strings.repeat\">repeat</a>(n,string)</td>
      <td valign=\"top\">Repeat a blank or a string n times.</td></tr>
  <tr><td valign=\"top\">result = <a href=\"modelica://Modelica.Utilities.Strings.compare\">compare</a>(string1, string2)</td>
      <td valign=\"top\">Compares two substrings with regards to alphabetical order</td></tr>
  <tr><td valign=\"top\">identical =
<a href=\"modelica://Modelica.Utilities.Strings.isEqual\">isEqual</a>(string1,string2)</td>
      <td valign=\"top\">Determine whether two strings are identical</td></tr>
  <tr><td valign=\"top\">result = <a href=\"modelica://Modelica.Utilities.Strings.count\">count</a>(string,searchString)</td>
      <td valign=\"top\">Count the number of occurrences of a string</td></tr>
  <tr>
<td valign=\"top\">index = <a href=\"modelica://Modelica.Utilities.Strings.find\">find</a>(string,searchString)</td>
      <td valign=\"top\">Find first occurrence of a string in another string</td></tr>
<tr>
<td valign=\"top\">index = <a href=\"modelica://Modelica.Utilities.Strings.findLast\">findLast</a>(string,searchString)</td>
      <td valign=\"top\">Find last occurrence of a string in another string</td></tr>
  <tr><td valign=\"top\">string2 = <a href=\"modelica://Modelica.Utilities.Strings.replace\">replace</a>(string,searchString,replaceString)</td>
      <td valign=\"top\">Replace one or all occurrences of a string</td></tr>
  <tr><td valign=\"top\">stringVector2 = <a href=\"modelica://Modelica.Utilities.Strings.sort\">sort</a>(stringVector1)</td>
      <td valign=\"top\">Sort vector of strings in alphabetic order</td></tr>
  <tr><td valign=\"top\">(token, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanToken\">scanToken</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for a token (Real/Integer/Boolean/String/Identifier/Delimiter/NoToken)</td></tr>
  <tr><td valign=\"top\">(number, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanReal\">scanReal</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for a Real constant</td></tr>
  <tr><td valign=\"top\">(number, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanInteger\">scanInteger</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for an Integer constant</td></tr>
  <tr><td valign=\"top\">(boolean, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanBoolean\">scanBoolean</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for a Boolean constant</td></tr>
  <tr><td valign=\"top\">(string2, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanString\">scanString</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for a String constant</td></tr>
  <tr><td valign=\"top\">(identifier, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanIdentifier\">scanIdentifier</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for an identifier</td></tr>
  <tr><td valign=\"top\">(delimiter, index) = <a href=\"modelica://Modelica.Utilities.Strings.scanDelimiter\">scanDelimiter</a>(string,startIndex)</td>
      <td valign=\"top\">Scan for delimiters</td></tr>
  <tr><td valign=\"top\"><a href=\"modelica://Modelica.Utilities.Strings.scanNoToken\">scanNoToken</a>(string,startIndex)</td>
      <td valign=\"top\">Check that remaining part of string consists solely of <br>
          white space or line comments (\"// ...\\n\").</td></tr>
  <tr><td valign=\"top\"><a href=\"modelica://Modelica.Utilities.Strings.syntaxError\">syntaxError</a>(string,index,message)</td>
      <td valign=\"top\"> Print a \"syntax error message\" as well as a string and the <br>
           index at which scanning detected an error</td></tr>
</table>
<p>
The functions \"compare\", \"isEqual\", \"count\", \"find\", \"findLast\", \"replace\", \"sort\"
have the optional
input argument <b>caseSensitive</b> with default <b>true</b>.
If <b>false</b>, the operation is carried out without taking
into account whether a character is upper or lower case.
</p>
</HTML>"));
    end Strings;

    package Types "Type definitions used in package Modelica.Utilities"
      extends Modelica.Icons.TypesPackage;

      type Compare = enumeration(
        Less "String 1 is lexicographically less than string 2",
        Equal "String 1 is identical to string 2",
        Greater "String 1 is lexicographically greater than string 2")
      "Enumeration defining comparison of two strings";
      annotation (Documentation(info="<html>
<p>
This package contains type definitions used in Modelica.Utilities.
</p>

</html>"));
    end Types;
      annotation (
  Icon(coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}}), graphics={
      Polygon(
        origin={1.3835,-4.1418},
        rotation=45.0,
        fillColor={64,64,64},
        pattern=LinePattern.None,
        fillPattern=FillPattern.Solid,
        points={{-15.0,93.333},{-15.0,68.333},{0.0,58.333},{15.0,68.333},{15.0,93.333},{20.0,93.333},{25.0,83.333},{25.0,58.333},{10.0,43.333},{10.0,-41.667},{25.0,-56.667},{25.0,-76.667},{10.0,-91.667},{0.0,-91.667},{0.0,-81.667},{5.0,-81.667},{15.0,-71.667},{15.0,-61.667},{5.0,-51.667},{-5.0,-51.667},{-15.0,-61.667},{-15.0,-71.667},{-5.0,-81.667},{0.0,-81.667},{0.0,-91.667},{-10.0,-91.667},{-25.0,-76.667},{-25.0,-56.667},{-10.0,-41.667},{-10.0,43.333},{-25.0,58.333},{-25.0,83.333},{-20.0,93.333}}),
      Polygon(
        origin={10.1018,5.218},
        rotation=-45.0,
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid,
        points={{-15.0,87.273},{15.0,87.273},{20.0,82.273},{20.0,27.273},{10.0,17.273},{10.0,7.273},{20.0,2.273},{20.0,-2.727},{5.0,-2.727},{5.0,-77.727},{10.0,-87.727},{5.0,-112.727},{-5.0,-112.727},{-10.0,-87.727},{-5.0,-77.727},{-5.0,-2.727},{-20.0,-2.727},{-20.0,2.273},{-10.0,7.273},{-10.0,17.273},{-20.0,27.273},{-20.0,82.273}})}),
  Documentation(info="<html>
<p>
This package contains Modelica <b>functions</b> that are
especially suited for <b>scripting</b>. The functions might
be used to work with strings, read data from file, write data
to file or copy, move and remove files.
</p>
<p>
For an introduction, have especially a look at:
</p>
<ul>
<li> <a href=\"modelica://Modelica.Utilities.UsersGuide\">Modelica.Utilities.User's Guide</a>
     discusses the most important aspects of this library.</li>
<li> <a href=\"modelica://Modelica.Utilities.Examples\">Modelica.Utilities.Examples</a>
     contains examples that demonstrate the usage of this library.</li>
</ul>
<p>
The following main sublibraries are available:
</p>
<ul>
<li> <a href=\"modelica://Modelica.Utilities.Files\">Files</a>
     provides functions to operate on files and directories, e.g.,
     to copy, move, remove files.</li>
<li> <a href=\"modelica://Modelica.Utilities.Streams\">Streams</a>
     provides functions to read from files and write to files.</li>
<li> <a href=\"modelica://Modelica.Utilities.Strings\">Strings</a>
     provides functions to operate on strings. E.g.
     substring, find, replace, sort, scanToken.</li>
<li> <a href=\"modelica://Modelica.Utilities.System\">System</a>
     provides functions to interact with the environment.
     E.g., get or set the working directory or environment
     variables and to send a command to the default shell.</li>
</ul>

<p>
Copyright &copy; 1998-2013, Modelica Association, DLR, and Dassault Syst&egrave;mes AB.
</p>

<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>

</html>"));
  end Utilities;

  package Constants
  "Library of mathematical constants and constants of nature (e.g., pi, eps, R, sigma)"
    import SI = Modelica.SIunits;
    import NonSI = Modelica.SIunits.Conversions.NonSIunits;
    extends Modelica.Icons.Package;

    final constant Real pi=2*Modelica.Math.asin(1.0);

    final constant Real eps=ModelicaServices.Machine.eps
    "Biggest number such that 1.0 + eps = 1.0";

    final constant Real small=ModelicaServices.Machine.small
    "Smallest number such that small and -small are representable on the machine";

    final constant Real R(final unit="J/(mol.K)") = 8.314472
    "Molar gas constant";

    final constant Real sigma(final unit="W/(m2.K4)") = 5.670400e-8
    "Stefan-Boltzmann constant";

    final constant NonSI.Temperature_degC T_zero=-273.15
    "Absolute zero temperature";
    annotation (
      Documentation(info="<html>
<p>
This package provides often needed constants from mathematics, machine
dependent constants and constants from nature. The latter constants
(name, value, description) are from the following source:
</p>

<dl>
<dt>Peter J. Mohr and Barry N. Taylor (1999):</dt>
<dd><b>CODATA Recommended Values of the Fundamental Physical Constants: 1998</b>.
    Journal of Physical and Chemical Reference Data, Vol. 28, No. 6, 1999 and
    Reviews of Modern Physics, Vol. 72, No. 2, 2000. See also <a href=
\"http://physics.nist.gov/cuu/Constants/\">http://physics.nist.gov/cuu/Constants/</a></dd>
</dl>

<p>CODATA is the Committee on Data for Science and Technology.</p>

<dl>
<dt><b>Main Author:</b></dt>
<dd><a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a><br>
    Deutsches Zentrum f&uuml;r Luft und Raumfahrt e. V. (DLR)<br>
    Oberpfaffenhofen<br>
    Postfach 11 16<br>
    D-82230 We&szlig;ling<br>
    email: <a href=\"mailto:Martin.Otter@dlr.de\">Martin.Otter@dlr.de</a></dd>
</dl>

<p>
Copyright &copy; 1998-2013, Modelica Association and DLR.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</html>",   revisions="<html>
<ul>
<li><i>Nov 8, 2004</i>
       by <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br>
       Constants updated according to 2002 CODATA values.</li>
<li><i>Dec 9, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Constants updated according to 1998 CODATA values. Using names, values
       and description text from this source. Included magnetic and
       electric constant.</li>
<li><i>Sep 18, 1999</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Constants eps, inf, small introduced.</li>
<li><i>Nov 15, 1997</i>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized.</li>
</ul>
</html>"),
      Icon(coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}}), graphics={
        Polygon(
          origin={-9.2597,25.6673},
          fillColor={102,102,102},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{48.017,11.336},{48.017,11.336},{10.766,11.336},{-25.684,10.95},{-34.944,-15.111},{-34.944,-15.111},{-32.298,-15.244},{-32.298,-15.244},{-22.112,0.168},{11.292,0.234},{48.267,-0.097},{48.267,-0.097}},
          smooth=Smooth.Bezier),
        Polygon(
          origin={-19.9923,-8.3993},
          fillColor={102,102,102},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{3.239,37.343},{3.305,37.343},{-0.399,2.683},{-16.936,-20.071},{-7.808,-28.604},{6.811,-22.519},{9.986,37.145},{9.986,37.145}},
          smooth=Smooth.Bezier),
        Polygon(
          origin={23.753,-11.5422},
          fillColor={102,102,102},
          pattern=LinePattern.None,
          fillPattern=FillPattern.Solid,
          points={{-10.873,41.478},{-10.873,41.478},{-14.048,-4.162},{-9.352,-24.8},{7.912,-24.469},{16.247,0.27},{16.247,0.27},{13.336,0.071},{13.336,0.071},{7.515,-9.983},{-3.134,-7.271},{-2.671,41.214},{-2.671,41.214}},
          smooth=Smooth.Bezier)}));
  end Constants;

  package Icons "Library of icons"
    extends Icons.Package;

    partial package Package "Icon for standard packages"

      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
            Rectangle(
              lineColor={200,200,200},
              fillColor={248,248,248},
              fillPattern=FillPattern.HorizontalCylinder,
              extent={{-100.0,-100.0},{100.0,100.0}},
              radius=25.0),
            Rectangle(
              lineColor={128,128,128},
              fillPattern=FillPattern.None,
              extent={{-100.0,-100.0},{100.0,100.0}},
              radius=25.0)}),   Documentation(info="<html>
<p>Standard package icon.</p>
</html>"));
    end Package;

    partial package BasesPackage "Icon for packages containing base classes"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Ellipse(
              extent={{-30.0,-30.0},{30.0,30.0}},
              lineColor={128,128,128},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid)}),
                                Documentation(info="<html>
<p>This icon shall be used for a package/library that contains base models and classes, respectively.</p>
</html>"));
    end BasesPackage;

    partial package VariantsPackage "Icon for package containing variants"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=true,  extent={{-100,-100},
                {100,100}}),       graphics={
            Ellipse(
              origin={10.0,10.0},
              fillColor={76,76,76},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{-80.0,-80.0},{-20.0,-20.0}}),
            Ellipse(
              origin={10.0,10.0},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{0.0,-80.0},{60.0,-20.0}}),
            Ellipse(
              origin={10.0,10.0},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{0.0,0.0},{60.0,60.0}}),
            Ellipse(
              origin={10.0,10.0},
              lineColor={128,128,128},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid,
              extent={{-80.0,0.0},{-20.0,60.0}})}),
                                Documentation(info="<html>
<p>This icon shall be used for a package/library that contains several variants of one components.</p>
</html>"));
    end VariantsPackage;

    partial package InterfacesPackage "Icon for packages containing interfaces"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Polygon(origin={20.0,0.0},
              lineColor={64,64,64},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid,
              points={{-10.0,70.0},{10.0,70.0},{40.0,20.0},{80.0,20.0},{80.0,-20.0},{40.0,-20.0},{10.0,-70.0},{-10.0,-70.0}}),
            Polygon(fillColor={102,102,102},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{-100.0,20.0},{-60.0,20.0},{-30.0,70.0},{-10.0,70.0},{-10.0,-70.0},{-30.0,-70.0},{-60.0,-20.0},{-100.0,-20.0}})}),
                                Documentation(info="<html>
<p>This icon indicates packages containing interfaces.</p>
</html>"));
    end InterfacesPackage;

    partial package SourcesPackage "Icon for packages containing sources"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Polygon(origin={23.3333,0.0},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{-23.333,30.0},{46.667,0.0},{-23.333,-30.0}}),
            Rectangle(
              fillColor=  {128,128,128},
              pattern=  LinePattern.None,
              fillPattern=  FillPattern.Solid,
              extent=  {{-70,-4.5},{0,4.5}})}),
                                Documentation(info="<html>
<p>This icon indicates a package which contains sources.</p>
</html>"));
    end SourcesPackage;

    partial package SensorsPackage "Icon for packages containing sensors"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Ellipse(origin={0.0,-30.0},
              fillColor={255,255,255},
              extent={{-90.0,-90.0},{90.0,90.0}},
              startAngle=20.0,
              endAngle=160.0),
            Ellipse(origin={0.0,-30.0},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{-20.0,-20.0},{20.0,20.0}}),
            Line(origin={0.0,-30.0},
              points={{0.0,60.0},{0.0,90.0}}),
            Ellipse(origin={-0.0,-30.0},
              fillColor={64,64,64},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{-10.0,-10.0},{10.0,10.0}}),
            Polygon(
              origin={-0.0,-30.0},
              rotation=-35.0,
              fillColor={64,64,64},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{-7.0,0.0},{-3.0,85.0},{0.0,90.0},{3.0,85.0},{7.0,0.0}})}),
                                Documentation(info="<html>
<p>This icon indicates a package containing sensors.</p>
</html>"));
    end SensorsPackage;

    partial package UtilitiesPackage "Icon for utility packages"
      extends Modelica.Icons.Package;
       annotation (Icon(coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}}), graphics={
      Polygon(
        origin={1.3835,-4.1418},
        rotation=45.0,
        fillColor={64,64,64},
        pattern=LinePattern.None,
        fillPattern=FillPattern.Solid,
        points={{-15.0,93.333},{-15.0,68.333},{0.0,58.333},{15.0,68.333},{15.0,93.333},{20.0,93.333},{25.0,83.333},{25.0,58.333},{10.0,43.333},{10.0,-41.667},{25.0,-56.667},{25.0,-76.667},{10.0,-91.667},{0.0,-91.667},{0.0,-81.667},{5.0,-81.667},{15.0,-71.667},{15.0,-61.667},{5.0,-51.667},{-5.0,-51.667},{-15.0,-61.667},{-15.0,-71.667},{-5.0,-81.667},{0.0,-81.667},{0.0,-91.667},{-10.0,-91.667},{-25.0,-76.667},{-25.0,-56.667},{-10.0,-41.667},{-10.0,43.333},{-25.0,58.333},{-25.0,83.333},{-20.0,93.333}}),
      Polygon(
        origin={10.1018,5.218},
        rotation=-45.0,
        fillColor={255,255,255},
        fillPattern=FillPattern.Solid,
        points={{-15.0,87.273},{15.0,87.273},{20.0,82.273},{20.0,27.273},{10.0,17.273},{10.0,7.273},{20.0,2.273},{20.0,-2.727},{5.0,-2.727},{5.0,-77.727},{10.0,-87.727},{5.0,-112.727},{-5.0,-112.727},{-10.0,-87.727},{-5.0,-77.727},{-5.0,-2.727},{-20.0,-2.727},{-20.0,2.273},{-10.0,7.273},{-10.0,17.273},{-20.0,27.273},{-20.0,82.273}})}),
      Documentation(info="<html>
<p>This icon indicates a package containing utility classes.</p>
</html>"));
    end UtilitiesPackage;

    partial package TypesPackage
    "Icon for packages containing type definitions"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={Polygon(
              origin={-12.167,-23},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{12.167,65},{14.167,93},{36.167,89},{24.167,20},{4.167,-30},
                  {14.167,-30},{24.167,-30},{24.167,-40},{-5.833,-50},{-15.833,
                  -30},{4.167,20},{12.167,65}},
              smooth=Smooth.Bezier,
              lineColor={0,0,0}), Polygon(
              origin={2.7403,1.6673},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{49.2597,22.3327},{31.2597,24.3327},{7.2597,18.3327},{-26.7403,
                10.3327},{-46.7403,14.3327},{-48.7403,6.3327},{-32.7403,0.3327},{-6.7403,
                4.3327},{33.2597,14.3327},{49.2597,14.3327},{49.2597,22.3327}},
              smooth=Smooth.Bezier)}));
    end TypesPackage;

    partial package IconsPackage "Icon for packages containing icons"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={Polygon(
              origin={-8.167,-17},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{-15.833,20.0},{-15.833,30.0},{14.167,40.0},{24.167,20.0},{
                  4.167,-30.0},{14.167,-30.0},{24.167,-30.0},{24.167,-40.0},{-5.833,
                  -50.0},{-15.833,-30.0},{4.167,20.0},{-5.833,20.0}},
              smooth=Smooth.Bezier,
              lineColor={0,0,0}), Ellipse(
              origin={-0.5,56.5},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{-12.5,-12.5},{12.5,12.5}},
              lineColor={0,0,0})}));
    end IconsPackage;

    partial package MaterialPropertiesPackage
    "Icon for package containing property classes"
      extends Modelica.Icons.Package;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={
            Ellipse(
              lineColor={102,102,102},
              fillColor={204,204,204},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Sphere,
              extent={{-60.0,-60.0},{60.0,60.0}})}),
                                Documentation(info="<html>
<p>This icon indicates a package that contains properties</p>
</html>"));
    end MaterialPropertiesPackage;

    partial class MaterialProperty "Icon for property classes"

      annotation (Icon(coordinateSystem(preserveAspectRatio=true,  extent={{-100,-100},{100,100}}), graphics={
            Ellipse(lineColor={102,102,102},
              fillColor={204,204,204},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Sphere,
              extent={{-100.0,-100.0},{100.0,100.0}})}),
                                Documentation(info="<html>
<p>This icon indicates a property class.</p>
</html>"));
    end MaterialProperty;

    partial function Function "Icon for functions"

      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
            Text(
              lineColor={0,0,255},
              extent={{-150,105},{150,145}},
              textString="%name"),
            Ellipse(
              lineColor=  {108,88,49},
              fillColor=  {255,215,136},
              fillPattern=  FillPattern.Solid,
              extent=  {{-100,-100},{100,100}}),
            Text(
              lineColor={108,88,49},
              extent={{-90.0,-90.0},{90.0,90.0}},
              textString="f")}),
    Documentation(info="<html>
<p>This icon indicates Modelica functions.</p>
</html>"));
    end Function;

    partial record Record "Icon for records"

      annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,100}}), graphics={
            Text(
              lineColor={0,0,255},
              extent={{-150,60},{150,100}},
              textString="%name"),
            Rectangle(
              origin={0.0,-25.0},
              lineColor={64,64,64},
              fillColor={255,215,136},
              fillPattern=FillPattern.Solid,
              extent={{-100.0,-75.0},{100.0,75.0}},
              radius=25.0),
            Line(
              points={{-100.0,0.0},{100.0,0.0}},
              color={64,64,64}),
            Line(
              origin={0.0,-50.0},
              points={{-100.0,0.0},{100.0,0.0}},
              color={64,64,64}),
            Line(
              origin={0.0,-25.0},
              points={{0.0,75.0},{0.0,-75.0}},
              color={64,64,64})}),                        Documentation(info="<html>
<p>
This icon is indicates a record.
</p>
</html>"));
    end Record;

    expandable connector SignalBus "Icon for signal bus"

      annotation (
        Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}, initialScale=0.2), graphics={
              Rectangle(
                lineColor={255,204,51},
                lineThickness=0.5,
                extent={{-20.0,-2.0},{20.0,2.0}}),
              Polygon(
                fillColor={255,215,136},
                fillPattern=FillPattern.Solid,
                points={{-80.0,50.0},{80.0,50.0},{100.0,30.0},{80.0,-40.0},{60.0,-50.0},{-60.0,-50.0},{-80.0,-40.0},{-100.0,30.0}},
                smooth=Smooth.Bezier),
              Ellipse(
                fillPattern=FillPattern.Solid,
                extent={{-65.0,15.0},{-55.0,25.0}}),
              Ellipse(
                fillPattern=FillPattern.Solid,
                extent={{-5.0,15.0},{5.0,25.0}}),
              Ellipse(
                fillPattern=FillPattern.Solid,
                extent={{55.0,15.0},{65.0,25.0}}),
              Ellipse(
                fillPattern=FillPattern.Solid,
                extent={{-35.0,-25.0},{-25.0,-15.0}}),
              Ellipse(
                fillPattern=FillPattern.Solid,
                extent={{25.0,-25.0},{35.0,-15.0}})}),
        Diagram(coordinateSystem(
            preserveAspectRatio=false,
            extent={{-100,-100},{100,100}},
            initialScale=0.2), graphics={
            Polygon(
              points={{-40,25},{40,25},{50,15},{40,-20},{30,-25},{-30,-25},{-40,-20},{-50,15}},
              lineColor={0,0,0},
              fillColor={255,204,51},
              fillPattern=FillPattern.Solid,
              smooth=Smooth.Bezier),
            Ellipse(
              extent={{-32.5,7.5},{-27.5,12.5}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-2.5,12.5},{2.5,7.5}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{27.5,12.5},{32.5,7.5}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{-17.5,-7.5},{-12.5,-12.5}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Ellipse(
              extent={{12.5,-7.5},{17.5,-12.5}},
              lineColor={0,0,0},
              fillColor={0,0,0},
              fillPattern=FillPattern.Solid),
            Text(
              extent={{-150,70},{150,40}},
              lineColor={0,0,0},
              textString="%name")}),
        Documentation(info="<html>
This icon is designed for a <b>signal bus</b> connector.
</html>"));
    end SignalBus;

    partial package Library
    "This icon will be removed in future Modelica versions, use Package instead"
      // extends Modelica.Icons.ObsoleteModel;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
            Rectangle(
              lineColor={200,200,200},
              fillColor={248,248,248},
              fillPattern=FillPattern.HorizontalCylinder,
              extent={{-100.0,-100.0},{100.0,100.0}},
              radius=25.0),
            Rectangle(
              lineColor={128,128,128},
              fillPattern=FillPattern.None,
              extent={{-100.0,-100.0},{100.0,100.0}},
              radius=25.0)}),   Documentation(info="<html>
<p>This icon of a package will be removed in future versions of the library.</p>
<h5>Note</h5>
<p>This icon will be removed in future versions of the Modelica Standard Library. Instead the icon <a href=\"modelica://Modelica.Icons.Package\">Package</a> shall be used.</p>
</html>"));
    end Library;
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                -100},{100,100}}), graphics={Polygon(
              origin={-8.167,-17},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              points={{-15.833,20.0},{-15.833,30.0},{14.167,40.0},{24.167,20.0},{
                  4.167,-30.0},{14.167,-30.0},{24.167,-30.0},{24.167,-40.0},{-5.833,
                  -50.0},{-15.833,-30.0},{4.167,20.0},{-5.833,20.0}},
              smooth=Smooth.Bezier,
              lineColor={0,0,0}), Ellipse(
              origin={-0.5,56.5},
              fillColor={128,128,128},
              pattern=LinePattern.None,
              fillPattern=FillPattern.Solid,
              extent={{-12.5,-12.5},{12.5,12.5}},
              lineColor={0,0,0})}), Documentation(info="<html>
<p>This package contains definitions for the graphical layout of components which may be used in different libraries. The icons can be utilized by inheriting them in the desired class using &quot;extends&quot; or by directly copying the &quot;icon&quot; layer. </p>

<h4>Main Authors:</h4>

<dl>
<dt><a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a></dt>
    <dd>Deutsches Zentrum fuer Luft und Raumfahrt e.V. (DLR)</dd>
    <dd>Oberpfaffenhofen</dd>
    <dd>Postfach 1116</dd>
    <dd>D-82230 Wessling</dd>
    <dd>email: <a href=\"mailto:Martin.Otter@dlr.de\">Martin.Otter@dlr.de</a></dd>
<dt>Christian Kral</dt>
    <dd><a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a></dd>
    <dd>Mobility Department</dd><dd>Giefinggasse 2</dd>
    <dd>1210 Vienna, Austria</dd>
    <dd>email: <a href=\"mailto:dr.christian.kral@gmail.com\">dr.christian.kral@gmail.com</a></dd>
<dt>Johan Andreasson</dt>
    <dd><a href=\"http://www.modelon.se/\">Modelon AB</a></dd>
    <dd>Ideon Science Park</dd>
    <dd>22370 Lund, Sweden</dd>
    <dd>email: <a href=\"mailto:johan.andreasson@modelon.se\">johan.andreasson@modelon.se</a></dd>
</dl>

<p>Copyright &copy; 1998-2013, Modelica Association, DLR, AIT, and Modelon AB. </p>
<p><i>This Modelica package is <b>free</b> software; it can be redistributed and/or modified under the terms of the <b>Modelica license</b>, see the license conditions and the accompanying <b>disclaimer</b> in <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a>.</i> </p>
</html>"));
  end Icons;

  package SIunits
  "Library of type and unit definitions based on SI units according to ISO 31-1992"
    extends Modelica.Icons.Package;

    package Icons "Icons for SIunits"
      extends Modelica.Icons.IconsPackage;

      partial function Conversion "Base icon for conversion functions"

        annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={
              Rectangle(
                extent={{-100,100},{100,-100}},
                lineColor={191,0,0},
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Line(points={{-90,0},{30,0}}, color={191,0,0}),
              Polygon(
                points={{90,0},{30,20},{30,-20},{90,0}},
                lineColor={191,0,0},
                fillColor={191,0,0},
                fillPattern=FillPattern.Solid),
              Text(
                extent={{-115,155},{115,105}},
                textString="%name",
                lineColor={0,0,255})}));
      end Conversion;
    end Icons;

    package Conversions
    "Conversion functions to/from non SI units and type definitions of non SI units"
      extends Modelica.Icons.Package;

      package NonSIunits "Type definitions of non SI units"
        extends Modelica.Icons.Package;

        type Temperature_degC = Real (final quantity="ThermodynamicTemperature",
              final unit="degC")
        "Absolute temperature in degree Celsius (for relative temperature use SIunits.TemperatureDifference)"
                                                                                                            annotation(absoluteValue=true);

        type Angle_deg = Real (final quantity="Angle", final unit="deg")
        "Angle in degree";

        type Pressure_bar = Real (final quantity="Pressure", final unit="bar")
        "Absolute pressure in bar";
        annotation (Documentation(info="<HTML>
<p>
This package provides predefined types, such as <b>Angle_deg</b> (angle in
degree), <b>AngularVelocity_rpm</b> (angular velocity in revolutions per
minute) or <b>Temperature_degF</b> (temperature in degree Fahrenheit),
which are in common use but are not part of the international standard on
units according to ISO 31-1992 \"General principles concerning quantities,
units and symbols\" and ISO 1000-1992 \"SI units and recommendations for
the use of their multiples and of certain other units\".</p>
<p>If possible, the types in this package should not be used. Use instead
types of package Modelica.SIunits. For more information on units, see also
the book of Francois Cardarelli <b>Scientific Unit Conversion - A
Practical Guide to Metrication</b> (Springer 1997).</p>
<p>Some units, such as <b>Temperature_degC/Temp_C</b> are both defined in
Modelica.SIunits and in Modelica.Conversions.NonSIunits. The reason is that these
definitions have been placed erroneously in Modelica.SIunits although they
are not SIunits. For backward compatibility, these type definitions are
still kept in Modelica.SIunits.</p>
</html>"),   Icon(coordinateSystem(extent={{-100,-100},{100,100}}), graphics={
        Text(
          origin={15.0,51.8518},
          extent={{-105.0,-86.8518},{75.0,-16.8518}},
          lineColor={0,0,0},
          textString="[km/h]")}));
      end NonSIunits;

      function to_degC "Convert from Kelvin to degCelsius"
        extends Modelica.SIunits.Icons.Conversion;
        input Temperature Kelvin "Kelvin value";
        output NonSIunits.Temperature_degC Celsius "Celsius value";
      algorithm
        Celsius := Kelvin + Modelica.Constants.T_zero;
        annotation (Inline=true,Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={Text(
                extent={{-20,100},{-100,20}},
                lineColor={0,0,0},
                textString="K"), Text(
                extent={{100,-20},{20,-100}},
                lineColor={0,0,0},
                textString="degC")}));
      end to_degC;

      function from_degC "Convert from degCelsius to Kelvin"
        extends Modelica.SIunits.Icons.Conversion;
        input NonSIunits.Temperature_degC Celsius "Celsius value";
        output Temperature Kelvin "Kelvin value";
      algorithm
        Kelvin := Celsius - Modelica.Constants.T_zero;
        annotation (Inline=true,Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={Text(
                extent={{-20,100},{-100,20}},
                lineColor={0,0,0},
                textString="degC"),  Text(
                extent={{100,-20},{20,-100}},
                lineColor={0,0,0},
                textString="K")}));
      end from_degC;

      function to_deg "Convert from radian to degree"
        extends Modelica.SIunits.Icons.Conversion;
        input Angle radian "radian value";
        output NonSIunits.Angle_deg degree "degree value";
      algorithm
        degree := (180.0/Modelica.Constants.pi)*radian;
        annotation (Inline=true,Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={Text(
                extent={{10,100},{-100,46}},
                lineColor={0,0,0},
                textString="rad"), Text(
                extent={{100,-44},{-10,-100}},
                lineColor={0,0,0},
                textString="deg")}));
      end to_deg;

      function to_bar "Convert from Pascal to bar"
        extends Modelica.SIunits.Icons.Conversion;
        input Pressure Pa "Pascal value";
        output NonSIunits.Pressure_bar bar "bar value";
      algorithm
        bar := Pa/1e5;
        annotation (Inline=true,Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                  -100},{100,100}}), graphics={Text(
                extent={{-12,100},{-100,56}},
                lineColor={0,0,0},
                textString="Pa"),     Text(
                extent={{98,-52},{-4,-100}},
                lineColor={0,0,0},
                textString="bar")}));
      end to_bar;
      annotation (                              Documentation(info="<HTML>
<p>This package provides conversion functions from the non SI Units
defined in package Modelica.SIunits.Conversions.NonSIunits to the
corresponding SI Units defined in package Modelica.SIunits and vice
versa. It is recommended to use these functions in the following
way (note, that all functions have one Real input and one Real output
argument):</p>
<pre>
  <b>import</b> SI = Modelica.SIunits;
  <b>import</b> Modelica.SIunits.Conversions.*;
     ...
  <b>parameter</b> SI.Temperature     T   = from_degC(25);   // convert 25 degree Celsius to Kelvin
  <b>parameter</b> SI.Angle           phi = from_deg(180);   // convert 180 degree to radian
  <b>parameter</b> SI.AngularVelocity w   = from_rpm(3600);  // convert 3600 revolutions per minutes
                                                      // to radian per seconds
</pre>

</html>"));
    end Conversions;

    type Angle = Real (
        final quantity="Angle",
        final unit="rad",
        displayUnit="deg");

    type Length = Real (final quantity="Length", final unit="m");

    type Area = Real (final quantity="Area", final unit="m2");

    type Volume = Real (final quantity="Volume", final unit="m3");

    type Time = Real (final quantity="Time", final unit="s");

    type Velocity = Real (final quantity="Velocity", final unit="m/s");

    type Mass = Real (
        quantity="Mass",
        final unit="kg",
        min=0);

    type Density = Real (
        final quantity="Density",
        final unit="kg/m3",
        displayUnit="g/cm3",
        min=0.0);

    type Pressure = Real (
        final quantity="Pressure",
        final unit="Pa",
        displayUnit="bar");

    type AbsolutePressure = Pressure (min=0.0, nominal = 1e5);

    type DynamicViscosity = Real (
        final quantity="DynamicViscosity",
        final unit="Pa.s",
        min=0);

    type KinematicViscosity = Real (
        final quantity="KinematicViscosity",
        final unit="m2/s",
        min=0);

    type Power = Real (final quantity="Power", final unit="W");

    type EnthalpyFlowRate = Real (final quantity="EnthalpyFlowRate", final unit=
            "W");

    type MassFlowRate = Real (quantity="MassFlowRate", final unit="kg/s");

    type ThermodynamicTemperature = Real (
        final quantity="ThermodynamicTemperature",
        final unit="K",
        min = 0.0,
        start = 288.15,
        nominal = 300,
        displayUnit="degC")
    "Absolute temperature (use type TemperatureDifference for relative temperatures)"
                                                                                                        annotation(absoluteValue=true);

    type Temp_K = ThermodynamicTemperature;

    type Temperature = ThermodynamicTemperature;

    type TemperatureDifference = Real (
        final quantity="ThermodynamicTemperature",
        final unit="K") annotation(absoluteValue=false);

    type TemperatureSlope = Real (final quantity="TemperatureSlope",
        final unit="K/s");

    type LinearTemperatureCoefficient = Real(final quantity = "LinearTemperatureCoefficient", final unit="1/K");

    type Compressibility = Real (final quantity="Compressibility", final unit=
            "1/Pa");

    type IsothermalCompressibility = Compressibility;

    type HeatFlowRate = Real (final quantity="Power", final unit="W");

    type ThermalConductivity = Real (final quantity="ThermalConductivity", final unit=
               "W/(m.K)");

    type ThermalConductance = Real (final quantity="ThermalConductance", final unit=
               "W/K");

    type ThermalDiffusivity = Real (final quantity="ThermalDiffusivity", final unit=
               "m2/s");

    type HeatCapacity = Real (final quantity="HeatCapacity", final unit="J/K");

    type SpecificHeatCapacity = Real (final quantity="SpecificHeatCapacity",
          final unit="J/(kg.K)");

    type RatioOfSpecificHeatCapacities = Real (final quantity=
            "RatioOfSpecificHeatCapacities", final unit="1");

    type SpecificEntropy = Real (final quantity="SpecificEntropy",
                                 final unit="J/(kg.K)");

    type SpecificEnergy = Real (final quantity="SpecificEnergy",
                                final unit="J/kg");

    type SpecificInternalEnergy = SpecificEnergy;

    type SpecificEnthalpy = SpecificEnergy;

    type DerDensityByEnthalpy = Real (final unit="kg.s2/m5");

    type DerDensityByPressure = Real (final unit="s2/m2");

    type DerDensityByTemperature = Real (final unit="kg/(m3.K)");

    type Irradiance = Real (final quantity="Irradiance", final unit="W/m2");

    type Emissivity = Real (final quantity="Emissivity", final unit="1");

    type MolarMass = Real (final quantity="MolarMass", final unit="kg/mol",min=0);

    type MolarVolume = Real (final quantity="MolarVolume", final unit="m3/mol", min=0);

    type MassFraction = Real (final quantity="MassFraction", final unit="1",
                              min=0, max=1);

    type MoleFraction = Real (final quantity="MoleFraction", final unit="1",
                              min = 0, max = 1);

    type PrandtlNumber = Real (final quantity="PrandtlNumber", final unit="1");
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
              -100},{100,100}}), graphics={
          Line(
            points={{-66,78},{-66,-40}},
            color={64,64,64},
            smooth=Smooth.None),
          Ellipse(
            extent={{12,36},{68,-38}},
            lineColor={64,64,64},
            fillColor={175,175,175},
            fillPattern=FillPattern.Solid),
          Rectangle(
            extent={{-74,78},{-66,-40}},
            lineColor={64,64,64},
            fillColor={175,175,175},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-66,-4},{-66,6},{-16,56},{-16,46},{-66,-4}},
            lineColor={64,64,64},
            smooth=Smooth.None,
            fillColor={175,175,175},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-46,16},{-40,22},{-2,-40},{-10,-40},{-46,16}},
            lineColor={64,64,64},
            smooth=Smooth.None,
            fillColor={175,175,175},
            fillPattern=FillPattern.Solid),
          Ellipse(
            extent={{22,26},{58,-28}},
            lineColor={64,64,64},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{68,2},{68,-46},{64,-60},{58,-68},{48,-72},{18,-72},{18,-64},
                {46,-64},{54,-60},{58,-54},{60,-46},{60,-26},{64,-20},{68,-6},{68,
                2}},
            lineColor={64,64,64},
            smooth=Smooth.Bezier,
            fillColor={175,175,175},
            fillPattern=FillPattern.Solid)}), Documentation(info="<html>
<p>This package provides predefined types, such as <i>Mass</i>,
<i>Angle</i>, <i>Time</i>, based on the international standard
on units, e.g.,
</p>

<pre>   <b>type</b> Angle = Real(<b>final</b> quantity = \"Angle\",
                     <b>final</b> unit     = \"rad\",
                     displayUnit    = \"deg\");
</pre>

<p>
as well as conversion functions from non SI-units to SI-units
and vice versa in subpackage
<a href=\"modelica://Modelica.SIunits.Conversions\">Conversions</a>.
</p>

<p>
For an introduction how units are used in the Modelica standard library
with package SIunits, have a look at:
<a href=\"modelica://Modelica.SIunits.UsersGuide.HowToUseSIunits\">How to use SIunits</a>.
</p>

<p>
Copyright &copy; 1998-2013, Modelica Association and DLR.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</html>",   revisions="<html>
<ul>
<li><i>May 25, 2011</i> by Stefan Wischhusen:<br/>Added molar units for energy and enthalpy.</li>
<li><i>Jan. 27, 2010</i> by Christian Kral:<br/>Added complex units.</li>
<li><i>Dec. 14, 2005</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>Add User&#39;;s Guide and removed &quot;min&quot; values for Resistance and Conductance.</li>
<li><i>October 21, 2002</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a> and <a href=\"http://www.robotic.dlr.de/Christian.Schweiger/\">Christian Schweiger</a>:<br/>Added new package <b>Conversions</b>. Corrected typo <i>Wavelenght</i>.</li>
<li><i>June 6, 2000</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>Introduced the following new types<br/>type Temperature = ThermodynamicTemperature;<br/>types DerDensityByEnthalpy, DerDensityByPressure, DerDensityByTemperature, DerEnthalpyByPressure, DerEnergyByDensity, DerEnergyByPressure<br/>Attribute &quot;final&quot; removed from min and max values in order that these values can still be changed to narrow the allowed range of values.<br/>Quantity=&quot;Stress&quot; removed from type &quot;Stress&quot;, in order that a type &quot;Stress&quot; can be connected to a type &quot;Pressure&quot;.</li>
<li><i>Oct. 27, 1999</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>New types due to electrical library: Transconductance, InversePotential, Damping.</li>
<li><i>Sept. 18, 1999</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>Renamed from SIunit to SIunits. Subpackages expanded, i.e., the SIunits package, does no longer contain subpackages.</li>
<li><i>Aug 12, 1999</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>Type &quot;Pressure&quot; renamed to &quot;AbsolutePressure&quot; and introduced a new type &quot;Pressure&quot; which does not contain a minimum of zero in order to allow convenient handling of relative pressure. Redefined BulkModulus as an alias to AbsolutePressure instead of Stress, since needed in hydraulics.</li>
<li><i>June 29, 1999</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br/>Bug-fix: Double definition of &quot;Compressibility&quot; removed and appropriate &quot;extends Heat&quot; clause introduced in package SolidStatePhysics to incorporate ThermodynamicTemperature.</li>
<li><i>April 8, 1998</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a> and Astrid Jaschinski:<br/>Complete ISO 31 chapters realized.</li>
<li><i>Nov. 15, 1997</i> by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a> and <a href=\"http://www.control.lth.se/~hubertus/\">Hubertus Tummescheit</a>:<br/>Some chapters realized.</li>
</ul>
</html>"));
  end SIunits;
annotation (
preferredView="info",
version="3.2.1",
versionBuild=2,
versionDate="2013-08-14",
dateModified = "2013-08-14 08:44:41Z",
revisionId="$Id:: package.mo 6947 2013-08-23 07:41:37Z #$",
uses(Complex(version="3.2.1"), ModelicaServices(version="3.2.1")),
conversion(
 noneFromVersion="3.2",
 noneFromVersion="3.1",
 noneFromVersion="3.0.1",
 noneFromVersion="3.0",
 from(version="2.1", script="modelica://Modelica/Resources/Scripts/Dymola/ConvertModelica_from_2.2.2_to_3.0.mos"),
 from(version="2.2", script="modelica://Modelica/Resources/Scripts/Dymola/ConvertModelica_from_2.2.2_to_3.0.mos"),
 from(version="2.2.1", script="modelica://Modelica/Resources/Scripts/Dymola/ConvertModelica_from_2.2.2_to_3.0.mos"),
 from(version="2.2.2", script="modelica://Modelica/Resources/Scripts/Dymola/ConvertModelica_from_2.2.2_to_3.0.mos")),
Icon(coordinateSystem(extent={{-100.0,-100.0},{100.0,100.0}}), graphics={
  Polygon(
    origin={-6.9888,20.048},
    fillColor={0,0,0},
    pattern=LinePattern.None,
    fillPattern=FillPattern.Solid,
    points={{-93.0112,10.3188},{-93.0112,10.3188},{-73.011,24.6},{-63.011,31.221},{-51.219,36.777},{-39.842,38.629},{-31.376,36.248},{-25.819,29.369},{-24.232,22.49},{-23.703,17.463},{-15.501,25.135},{-6.24,32.015},{3.02,36.777},{15.191,39.423},{27.097,37.306},{32.653,29.633},{35.035,20.108},{43.501,28.046},{54.085,35.19},{65.991,39.952},{77.897,39.688},{87.422,33.338},{91.126,21.696},{90.068,9.525},{86.099,-1.058},{79.749,-10.054},{71.283,-21.431},{62.816,-33.337},{60.964,-32.808},{70.489,-16.14},{77.368,-2.381},{81.072,10.054},{79.749,19.05},{72.605,24.342},{61.758,23.019},{49.587,14.817},{39.003,4.763},{29.214,-6.085},{21.012,-16.669},{13.339,-26.458},{5.401,-36.777},{-1.213,-46.037},{-6.24,-53.446},{-8.092,-52.387},{-0.684,-40.746},{5.401,-30.692},{12.81,-17.198},{19.424,-3.969},{23.658,7.938},{22.335,18.785},{16.514,23.283},{8.047,23.019},{-1.478,19.05},{-11.267,11.113},{-19.734,2.381},{-29.259,-8.202},{-38.519,-19.579},{-48.044,-31.221},{-56.511,-43.392},{-64.449,-55.298},{-72.386,-66.939},{-77.678,-74.612},{-79.53,-74.083},{-71.857,-61.383},{-62.861,-46.037},{-52.278,-28.046},{-44.869,-15.346},{-38.784,-2.117},{-35.344,8.731},{-36.403,19.844},{-42.488,23.813},{-52.013,22.49},{-60.744,16.933},{-68.947,10.054},{-76.884,2.646},{-93.0112,-12.1707},{-93.0112,-12.1707}},
    smooth=Smooth.Bezier),
  Ellipse(
    origin={40.8208,-37.7602},
    fillColor={161,0,4},
    pattern=LinePattern.None,
    fillPattern=FillPattern.Solid,
    extent={{-17.8562,-17.8563},{17.8563,17.8562}})}),
Documentation(info="<HTML>
<p>
Package <b>Modelica&reg;</b> is a <b>standardized</b> and <b>free</b> package
that is developed together with the Modelica&reg; language from the
Modelica Association, see
<a href=\"https://www.Modelica.org\">https://www.Modelica.org</a>.
It is also called <b>Modelica Standard Library</b>.
It provides model components in many domains that are based on
standardized interface definitions. Some typical examples are shown
in the next figure:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/UsersGuide/ModelicaLibraries.png\">
</p>

<p>
For an introduction, have especially a look at:
</p>
<ul>
<li> <a href=\"modelica://Modelica.UsersGuide.Overview\">Overview</a>
  provides an overview of the Modelica Standard Library
  inside the <a href=\"modelica://Modelica.UsersGuide\">User's Guide</a>.</li>
<li><a href=\"modelica://Modelica.UsersGuide.ReleaseNotes\">Release Notes</a>
 summarizes the changes of new versions of this package.</li>
<li> <a href=\"modelica://Modelica.UsersGuide.Contact\">Contact</a>
  lists the contributors of the Modelica Standard Library.</li>
<li> The <b>Examples</b> packages in the various libraries, demonstrate
  how to use the components of the corresponding sublibrary.</li>
</ul>

<p>
This version of the Modelica Standard Library consists of
</p>
<ul>
<li><b>1360</b> models and blocks, and</li>
<li><b>1280</b> functions</li>
</ul>
<p>
that are directly usable (= number of public, non-partial classes). It is fully compliant
to <a href=\"https://www.modelica.org/documents/ModelicaSpec32Revision2.pdf\">Modelica Specification Version 3.2 Revision 2</a>
and it has been tested with Modelica tools from different vendors.
</p>

<p>
<b>Licensed by the Modelica Association under the Modelica License 2</b><br>
Copyright &copy; 1998-2013, ABB, AIT, T.&nbsp;B&ouml;drich, DLR, Dassault Syst&egrave;mes AB, Fraunhofer, A.Haumer, ITI, Modelon,
TU Hamburg-Harburg, Politecnico di Milano, XRG Simulation.
</p>

<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\"> https://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>

<p>
<b>Modelica&reg;</b> is a registered trademark of the Modelica Association.
</p>
</html>"));
end Modelica;

package IDEAS "Integrated District Energy Assessment Simulation"
extends Modelica.Icons.Library;
import SI = Modelica.SIunits;

  model SimInfoManager
  "Simulation information manager for handling time and climate data required in each for simulation."

    replaceable IDEAS.Climate.Meteo.Detail detail constrainedby
    IDEAS.Climate.Meteo.Detail "Timeframe detail of the climate data"
      annotation (__Dymola_choicesAllMatching=true,Dialog(group="Climate"));
    replaceable IDEAS.Climate.Meteo.Location city constrainedby
    IDEAS.Climate.Meteo.Location "Location of the depicted climate data"
      annotation (__Dymola_choicesAllMatching=true,Dialog(group="Climate"));
    parameter Boolean occBeh=false
    "put to true if  user behaviour is to be read from files"
      annotation (Dialog(group="User behaviour"));

    parameter Boolean DHW=false
    "put to true if domestic how water (DHW) consumption is to be read from files"
      annotation (Dialog(group="User behaviour"));
    parameter Boolean PV=false
    "put to true if photovoltaics is to be read from files "
      annotation (Dialog(group="Photovoltaics"));

    replaceable parameter IDEAS.Occupants.Extern.Interfaces.Occ_Files occupants
      constrainedby IDEAS.Occupants.Extern.Interfaces.Occ_Files
    "Specifies the files with occupant behavior"
      annotation (Dialog(group="User behaviour"));
    parameter Integer nOcc=33 "Number of occupant profiles to be read"
      annotation (Dialog(group="User behaviour"));

    parameter String fileNamePv="onePVpanel10min"
    "Filename for photvoltaic profiles"
      annotation (Dialog(group="Photovoltaics"));
    parameter Integer nPV=33 "Number of photovoltaic profiles"
      annotation (Dialog(group="Photovoltaics"));
    parameter Integer PNom=1000
    "Nominal power (W) of the photovoltaic profiles"
      annotation (Dialog(group="Photovoltaics"));

protected
    final parameter String filNamClim="../Inputs/" + city.locNam + detail.filNam;
    final parameter Modelica.SIunits.Angle lat(displayUnit="deg") = city.lat
    "latitude of the locatioin";
    final parameter Modelica.SIunits.Angle lon(displayUnit="deg") = city.lon;
    final parameter Modelica.SIunits.Temperature Tdes=city.Tdes
    "design outdoor temperature";
    final parameter Modelica.SIunits.Temperature TdesGround=city.TdesGround
    "design ground temperature";
    final parameter Modelica.SIunits.Time timZonSta=city.timZonSta
    "standard time zone";
    final parameter Boolean DST=city.DST
    "boolean to take into account daylight saving time";
    final parameter Integer yr=city.yr "depcited year for DST only";

    final parameter Boolean BesTest=Modelica.Utilities.Strings.isEqual(city.locNam,
        "BesTest")
    "boolean to determine if this simulation is a BESTEST simulation";

public
    Modelica.SIunits.Irradiance solDirPer=climate_solar.y[3]
    "direct irradiation on normal to solar zenith";
    Modelica.SIunits.Irradiance solDirHor=climate_solar.y[1] - climate_solar.y[2]
    "direct irradiation on horizontal surface";
    Modelica.SIunits.Irradiance solDifHor=climate_solar.y[2]
    "difuse irradiation on horizontal surface";
    Modelica.SIunits.Irradiance solGloHor=solDirHor + solDifHor
    "global irradiation on horizontal";
    Modelica.SIunits.Temperature Te=climate_nonSolar.y[1] + 273.15
    "ambient outdoor temperature for determination of sky radiation exchange";
    Modelica.SIunits.Temperature Tsky "effective overall sky temperature";
    Modelica.SIunits.Temperature TeAv=Te
    "running average of ambient outdoor temperature of the last 5 days, not yet implemented";
    Modelica.SIunits.Temperature Tground=TdesGround "ground temperature";
    Modelica.SIunits.Velocity Va "air velocity";
    Real Fc "cloud factor";
    Modelica.SIunits.Irradiance irr=climate_solar.y[1];
    Boolean summer=timMan.summer;

    Boolean day=true;

    Modelica.SIunits.Time timLoc=timMan.timLoc "Local time";
    Modelica.SIunits.Time timSol=timMan.timSol "Solar time";
    Modelica.SIunits.Time timCal=timMan.timCal "Calendar time";

protected
    IDEAS.Climate.Time.SimTimes timMan(
      delay=detail.timestep/2,
      timZonSta=timZonSta,
      lon=lon,
      DST=false,
      ifSolCor=true)
      annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
    Modelica.Blocks.Tables.CombiTable1Ds climate_nonSolar(
      final smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
      final tableOnFile=true,
      final tableName="data",
      final fileName=filNamClim,
      final columns={15,16,12,10})
      annotation (Placement(transformation(extent={{-40,66},{-26,80}})));
    Modelica.Blocks.Tables.CombiTable1Ds climate_solar(
      final tableOnFile=true,
      final tableName="data",
      final fileName=filNamClim,
      final columns={7,11,14},
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments)
      annotation (Placement(transformation(extent={{-40,46},{-26,60}})));

public
    Modelica.Blocks.Tables.CombiTable1Ds tabQCon(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filQCon,
      columns=2:nOcc + 1) if occBeh
      annotation (Placement(transformation(extent={{-40,-34},{-26,-20}})));
    Modelica.Blocks.Tables.CombiTable1Ds tabQRad(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filQRad,
      columns=2:nOcc + 1) if occBeh
      annotation (Placement(transformation(extent={{-36,-38},{-22,-24}})));
    Modelica.Blocks.Sources.CombiTimeTable tabPre(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filPres,
      columns=2:nOcc + 1) if occBeh
      annotation (Placement(transformation(extent={{0,-34},{14,-20}})));
    Modelica.Blocks.Tables.CombiTable1Ds tabP(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filP,
      columns=2:nOcc + 1) if occBeh
      annotation (Placement(transformation(extent={{-40,-58},{-26,-44}})));
    Modelica.Blocks.Tables.CombiTable1Ds tabQ(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filQ,
      columns=2:nOcc + 1) if occBeh
      annotation (Placement(transformation(extent={{-36,-62},{-22,-48}})));
    Modelica.Blocks.Sources.CombiTimeTable tabDHW(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + occupants.filDHW,
      columns=2:nOcc + 1) if DHW
      annotation (Placement(transformation(extent={{0,-58},{14,-44}})));
    Modelica.Blocks.Tables.CombiTable1Ds tabPPV(
      final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
      tableOnFile=true,
      tableName="data",
      fileName="..\\Inputs\\" + fileNamePv,
      columns=2:nPV + 1) if PV
      annotation (Placement(transformation(extent={{-36,2},{-22,16}})));

  equation
    if not BesTest then
      Tsky = Te - (23.8 - 0.2025*(Te - 273.15)*(1 - 0.87*Fc));
      Fc = 0.2;
      Va = 2.5;
    else
      Tsky = climate_nonSolar.y[2] + 273.15;
      Fc = climate_nonSolar.y[3]*0.87;
      Va = climate_nonSolar.y[4];
    end if;

    connect(timMan.timCalSol, climate_solar.u) annotation (Line(
        points={{-60,62},{-52,62},{-52,53},{-41.4,53}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timSol, climate_nonSolar.u) annotation (Line(
        points={{-60,70},{-50,70},{-50,73},{-41.4,73}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timCal, tabQCon.u) annotation (Line(
        points={{-60,66},{-52,66},{-52,-27},{-41.4,-27}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timCal, tabQRad.u) annotation (Line(
        points={{-60,66},{-50,66},{-50,-31},{-37.4,-31}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timCal, tabP.u) annotation (Line(
        points={{-60,66},{-52,66},{-52,-51},{-41.4,-51}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timCal, tabQ.u) annotation (Line(
        points={{-60,66},{-50,66},{-50,-55},{-37.4,-55}},
        color={0,0,127},
        smooth=Smooth.None));
    connect(timMan.timCal, tabPPV.u) annotation (Line(
        points={{-60,66},{-48,66},{-48,9},{-37.4,9}},
        color={0,0,127},
        smooth=Smooth.None));
    annotation (
      defaultComponentName="sim",
      defaultComponentPrefixes="inner",
      missingInnerMessage=
          "Your model is using an outer \"sim\" component. An inner \"sim\" component is not defined. For simulation drag IDEAS.SimInfoManager into your model.",
      Icon(graphics={
          Ellipse(
            extent={{-60,78},{74,-58}},
            lineColor={95,95,95},
            fillColor={135,135,135},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{18,52},{30,44},{36,44},{36,46},{34,48},{34,56},{22,60},{16,
                60},{10,58},{6,54},{8,52},{2,52},{-8,48},{-14,52},{-24,48},{-26,
                40},{-18,40},{-14,32},{-14,28},{-12,24},{-16,10},{-8,2},{-8,-2},{
                -6,-6},{-4,-4},{0,-6},{2,-12},{10,-18},{18,-24},{22,-30},{26,-36},
                {32,-44},{34,-50},{36,-58},{60,-44},{72,-28},{72,-18},{64,-14},{
                58,-12},{48,-12},{44,-14},{40,-16},{34,-16},{26,-24},{20,-22},{20,
                -18},{24,-12},{16,-16},{8,-12},{8,-8},{10,-2},{16,0},{24,0},{28,-2},
                {30,-8},{32,-6},{28,2},{30,12},{34,18},{36,20},{38,24},{34,26},{
                36,32},{26,38},{18,38},{20,32},{18,28},{12,32},{14,38},{16,42},{
                24,40},{22,46},{16,50},{18,52}},
            lineColor={255,255,255},
            smooth=Smooth.None,
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-34,64},{-30,62},{-26,64},{-24,60},{-36,58},{-24,52},{-16,54},
                {-14,62},{-8,68},{6,74},{12,74},{22,70},{28,64},{30,64},{44,62},{
                46,58},{42,56},{50,50},{66,34},{68,20},{74,12},{80,46},{70,78},{
                44,90},{2,90},{-32,80},{-34,64}},
            lineColor={255,255,255},
            smooth=Smooth.None,
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Bitmap(extent={{22,-8},{20,-8}}, fileName=""),
          Ellipse(extent={{-60,78},{74,-58}}, lineColor={95,95,95}),
          Polygon(
            points={{-66,-20},{-70,-16},{-72,-20},{-68,-30},{-60,-42},{-60,-40},{
                -62,-32},{-66,-20}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-62,-4},{-58,0},{-54,-2},{-54,-12},{-52,-20},{-48,-24},{-50,
                -28},{-50,-30},{-54,-28},{-56,-26},{-58,-12},{-62,-4}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-48,0},{-46,4},{-42,4},{-40,0},{-40,-4},{-38,-16},{-38,-22},
                {-40,-24},{-44,-22},{-44,-16},{-48,0}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-32,2},{-28,4},{-24,4},{-24,0},{-24,-12},{-24,-20},{-26,-24},
                {-30,-24},{-32,-6},{-32,2}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-6,-36},{-12,-42},{-8,-42},{-4,-36},{0,-26},{-2,-22},{-6,-22},
                {-8,-26},{-10,-32},{-8,-36},{-6,-36}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-60,-44},{-58,-40},{-54,-40},{-50,-36},{-42,-32},{-36,-32},{
                -32,-28},{-26,-28},{-24,-34},{-24,-36},{-26,-38},{-20,-42},{-16,-46},
                {-12,-46},{-8,-48},{-10,-52},{-12,-60},{-16,-66},{-20,-68},{-26,-70},
                {-30,-70},{-34,-70},{-36,-74},{-40,-76},{-42,-76},{-48,-72},{-54,
                -62},{-60,-44}},
            lineColor={127,0,0},
            smooth=Smooth.None,
            fillColor={127,67,62},
            fillPattern=FillPattern.Solid)}),
      Diagram(graphics),
      Documentation(info="<html>
</html>"));
  end SimInfoManager;

  package Climate "Climate data"
  extends Modelica.Icons.Package;

    package Meteo
    extends Modelica.Icons.Package;

      model Detail

        parameter String filNam;
        parameter Modelica.SIunits.Time timestep;

      end Detail;

      model Location "Geogrphical location"

        parameter Modelica.SIunits.Angle lat(displayUnit="degree")
        "latitude of the locatioin";
        parameter Modelica.SIunits.Angle lon(displayUnit="degree")
        "longitude of the locatioin";
        parameter Modelica.SIunits.Temperature Tdes
        "Design outdoor temperature";
        parameter Modelica.SIunits.Temperature TdesGround
        "Design ground temperature";
        parameter Modelica.SIunits.Time timZonSta "Standard (winter) time zone";
        parameter Boolean DST "Take into account daylight saving time or not";
        parameter Integer yr "Ddepcited year for DST only";
        parameter String locNam;

      end Location;

      package Files
      extends Modelica.Icons.Package;

        model min60 "60-minute data"
          extends IDEAS.Climate.Meteo.Detail(filNam="_60.txt", timestep=3600);
        end min60;
      end Files;

      package Solar
      extends Modelica.Icons.Package;

        package BaseClasses
        "Baseclass elements for solar incidence calculation"
        extends Modelica.Icons.BasesPackage;

          model AngleDay

            Real day;
            Real t;
            Real N "year";

          equation
            N = (time - 365*24*60*30)/60/60/24/365;
            t = time - 86400*N;
            day = t/60/60/24/365.25*2*Modelica.Constants.pi - 0.048869;

          end AngleDay;

          block AngleHour

            extends Modelica.Blocks.Interfaces.BlockIcon;

            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-92,74},{-72,94}})));

            Modelica.Blocks.Interfaces.RealOutput angHou(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg") "hour angle"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

          algorithm
            angHou := (sim.timSol/3600 - 12)*2*Modelica.Constants.pi/24;

            annotation (Diagram(graphics));
          end AngleHour;

          model AngleAzimuth "Azimuth angle to surface"

            extends Modelica.Blocks.Interfaces.BlockIcon;

            parameter Modelica.SIunits.Angle lat(displayUnit="degree");
            parameter Modelica.SIunits.Angle azi(displayUnit="degree");

        public
            Modelica.Blocks.Interfaces.RealInput angDec(quantity="Angle", unit="rad")
            "declination"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealInput angHou(quantity="Angle", unit="rad")
            "hour angle"
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealOutput angAzi(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg") "Zenith Angle"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

            Modelica.Blocks.Interfaces.RealInput angZen(quantity="Angle", unit="rad")
            "zenith angle"
              annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));

        protected
            Real cosDec=Modelica.Math.cos(angDec);
            Real sinDec=Modelica.Math.sin(angDec);
            Real cosHou=Modelica.Math.cos(angHou);
            Real sinHou=Modelica.Math.sin(angHou);
            Real sinZen=Modelica.Math.sin(angZen);

          equation
            angAzi = asin(sinHou*cosDec/sinZen) - azi;

            annotation (Diagram(graphics), Icon(graphics={Polygon(
                    points={{-88,-78},{-38,-38},{42,-38},{92,-78},{-88,-78}},
                    lineColor={95,95,95},
                    smooth=Smooth.None,
                    fillColor={175,175,175},
                    fillPattern=FillPattern.Solid),Ellipse(
                    extent={{90,90},{42,44}},
                    lineColor={255,255,0},
                    fillColor={255,255,0},
                    fillPattern=FillPattern.Solid),Line(
                    points={{66,68},{-2,-56}},
                    color={0,0,0},
                    smooth=Smooth.None,
                    pattern=LinePattern.Dash),Line(
                    points={{-2,-56},{56,-78}},
                    color={0,0,0},
                    smooth=Smooth.None),Line(
                    points={{64,-56},{-2,-56}},
                    color={0,0,0},
                    smooth=Smooth.None)}));
          end AngleAzimuth;

          model AngleSolar "solar angle to surface"

            extends Modelica.Blocks.Interfaces.BlockIcon;

            parameter Modelica.SIunits.Angle inc "inclination";
            parameter Modelica.SIunits.Angle azi "azimuth";
            parameter Modelica.SIunits.Angle lat;

        public
            Modelica.Blocks.Interfaces.RealInput angDec(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg")
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealInput angHou(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg")
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealOutput angInc(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg") "Incidence angle"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

        protected
            Real cosDec=Modelica.Math.cos(angDec);
            Real sinDec=Modelica.Math.sin(angDec);
            Real cosHou=Modelica.Math.cos(angHou);
            Real sinHou=Modelica.Math.sin(angHou);
            Real cosLat=Modelica.Math.cos(lat);
            Real sinLat=Modelica.Math.sin(lat);

          equation
          //  angInc = acos( cos(inc)*(cosDec*cosHou*cosLat + sinDec*sinLat) + sin(inc)*(sin(
          //    azi)*cosDec*sinHou + cos(azi)*(cosDec*cosHou*sinLat - sinDec*cosLat)) );

            angInc = acos(sinDec*sinLat*cos(inc) - sinDec*cosLat*sin(inc)*cos(azi) + cosDec*cosLat*cos(inc)*cosHou + cosDec*sinLat*sin(inc)*cos(azi)*cosHou + cosDec*sin(inc)*sin(azi)*sinHou);

            annotation (Icon(graphics={Ellipse(
                    extent={{88,88},{40,42}},
                    lineColor={255,255,0},
                    fillColor={255,255,0},
                    fillPattern=FillPattern.Solid),Polygon(
                    points={{-90,-76},{-40,-36},{40,-36},{90,-76},{-90,-76}},
                    lineColor={95,95,95},
                    smooth=Smooth.None),Polygon(
                    points={{16,-42},{22,-68},{-72,0},{-18,-18},{16,-42}},
                    lineColor={0,0,0},
                    smooth=Smooth.None,
                    fillPattern=FillPattern.Solid,
                    fillColor={175,175,175}),Line(
                    points={{-6,-36},{84,40}},
                    color={0,0,0},
                    smooth=Smooth.None),Line(
                    points={{-6,-36},{64,68}},
                    color={0,0,0},
                    smooth=Smooth.None)}), Diagram(graphics));
          end AngleSolar;

          model AngleZenith "solar angle to surface"

            extends Modelica.Blocks.Interfaces.BlockIcon;

            parameter Modelica.SIunits.Angle lat(displayUnit="degree");

        public
            Modelica.Blocks.Interfaces.RealInput angDec(quantity="Angle", unit="rad")
            "declination"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealInput angHou(quantity="Angle", unit="rad")
            "hour angle"
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealOutput angZen(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg") "Zenith Angle"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

          equation
            angZen = acos(cos(lat)*cos(angDec)*cos(angHou) + sin(lat)*sin(angDec));

            annotation (Diagram(graphics), Icon(graphics={Polygon(
                    points={{-88,-78},{-38,-38},{42,-38},{92,-78},{-88,-78}},
                    lineColor={95,95,95},
                    smooth=Smooth.None,
                    fillColor={175,175,175},
                    fillPattern=FillPattern.Solid),Ellipse(
                    extent={{90,90},{42,44}},
                    lineColor={255,255,0},
                    fillColor={255,255,0},
                    fillPattern=FillPattern.Solid),Line(
                    points={{66,68},{-2,-56}},
                    color={0,0,0},
                    smooth=Smooth.None),Line(
                    points={{-2,-56},{-2,84}},
                    color={0,0,0},
                    smooth=Smooth.None)}));
          end AngleZenith;

          block Declination "solar declination"

            extends Modelica.Blocks.Interfaces.BlockIcon;

            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
            Modelica.Blocks.Interfaces.RealOutput delta(
              final quantity="Angle",
              final unit="rad",
              displayUnit="deg") "Declination angle"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));
          equation
          //  delta = asin(-sin(23.45*Modelica.Constants.pi/180)*cos((sim.timLoc/86400 +
          //    10)*2*Modelica.Constants.pi/365.25));

            delta = 23.45*Modelica.Constants.pi/180 * sin((sim.timLoc/86400 + 284)*2*Modelica.Constants.pi/365.25);

            annotation (Icon(graphics={Ellipse(
                    extent={{-74,74},{78,-72}},
                    lineColor={0,0,0},
                    fillColor={85,170,255},
                    fillPattern=FillPattern.Solid),Line(
                    points={{0,90},{0,-88}},
                    color={0,0,0},
                    smooth=Smooth.None),Line(
                    points={{-28,-86},{32,88}},
                    color={0,0,0},
                    smooth=Smooth.None)}));
          end Declination;

          model solDifTil

            extends Modelica.Blocks.Interfaces.BlockIcon;

            parameter Modelica.SIunits.Area A;
            parameter Modelica.SIunits.Angle inc(displayUnit="degree")
            "inclination";

            Modelica.Blocks.Interfaces.RealOutput solDifTil
              annotation (Placement(transformation(extent={{90,50},{110,70}})));
            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{60,72},{80,92}})));

            Modelica.Blocks.Interfaces.RealInput angZen
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealInput angInc
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));

            final parameter Modelica.SIunits.Angle i=inc/180*Modelica.Constants.pi;

            SkyClearness skyClearness
              annotation (Placement(transformation(extent={{-60,10},{-42,28}})));
            RelativeAirMass relativeAirMass
              annotation (Placement(transformation(extent={{-60,-18},{-42,0}})));
            SkyBrightness skyBrightness
              annotation (Placement(transformation(extent={{-34,-18},{-16,0}})));
            SkyBrightnessCoefficients skyBrightnessCoefficients
              annotation (Placement(transformation(extent={{0,22},{18,40}})));
            Perez perez(A=A, inc=inc)
              annotation (Placement(transformation(extent={{40,44},{60,64}})));

          equation
            connect(angZen, skyClearness.angZen) annotation (Line(
                points={{-100,20},{-70,20},{-70,24},{-66,24},{-60,24.4}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(angZen, relativeAirMass.angZen) annotation (Line(
                points={{-100,20},{-70,20},{-70,-3.6},{-60,-3.6}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(relativeAirMass.relAirMas, skyBrightness.relAirMas) annotation (Line(
                points={{-42,-3.6},{-40,-3.6},{-40,-3.6},{-38,-3.6},{-38,-3.6},{-34,-3.6}},
                color={0,0,127},
                smooth=Smooth.None));

            connect(angZen, skyBrightnessCoefficients.angZen) annotation (Line(
                points={{-100,20},{-70,20},{-70,36.4},{0,36.4}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(skyClearness.skyCle, skyBrightnessCoefficients.skyCle) annotation (
                Line(
                points={{-42,24.4},{-22,24.4},{-22,32.8},{0,32.8}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(skyBrightness.skyBri, skyBrightnessCoefficients.skyBri) annotation (
                Line(
                points={{-16,-3.6},{-8,-3.6},{-8,29.2},{0,29.2}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(skyBrightnessCoefficients.F1, perez.F1) annotation (Line(
                points={{18,36.4},{22,36},{26,36},{26,52},{40,52}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(skyBrightnessCoefficients.F2, perez.F2) annotation (Line(
                points={{18,32.8},{30,32.8},{30,48},{40,48}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(angZen, perez.angZen) annotation (Line(
                points={{-100,20},{-70,20},{-70,56},{40,56}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(angInc, perez.angInc) annotation (Line(
                points={{-100,60},{40,60}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(perez.solDifTil, solDifTil) annotation (Line(
                points={{60,60},{100,60}},
                color={0,0,127},
                smooth=Smooth.None));
            annotation (Diagram(graphics));
          end solDifTil;

          model solDirTil

            extends Modelica.Blocks.Interfaces.BlockIcon;

            parameter Modelica.SIunits.Area A;
            parameter Modelica.SIunits.Angle inc(displayUnit="degree")
            "inclination";

            Modelica.Blocks.Interfaces.RealInput angSol
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealOutput solDirTil
              annotation (Placement(transformation(extent={{90,50},{110,70}})));
            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-60,60},{-40,80}})));

          algorithm
          //  if inc <= Modelica.Constants.small then
          //    solDirTil := IDEAS.BaseClasses.Math.MaxSmooth(
          //      0,
          //      A*sim.solDirHor,
          //      delta=0.01);
          //  else
              solDirTil := IDEAS.BaseClasses.Math.MaxSmooth(
                0,
                A*cos(angSol)*sim.solDirPer,
                delta=0.01);
          //  end if;
          end solDirTil;

          model solradExtraTerra

            extends Modelica.Blocks.Interfaces.BlockIcon;

            IDEAS.Climate.Meteo.Solar.BaseClasses.AngleDay angleDay;

            Modelica.Blocks.Interfaces.RealOutput sol
              annotation (Placement(transformation(extent={{90,50},{110,70}})));
          algorithm
            sol := 1366.1*(1 + 0.0033412*cos(angleDay.day));

            annotation (Icon(graphics));
          end solradExtraTerra;

          block RelativeAirMass
            extends Modelica.Blocks.Interfaces.BlockIcon;

            Modelica.Blocks.Interfaces.RealInput angZen(
              quantity="Angle",
              unit="rad",
              displayUnit="degreeC") "zenith angle"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealOutput relAirMas "relative air mass"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

        protected
            Real angZenDeg "limited zenith angle in degrees";
            Real angZenLim;

          algorithm
            angZenLim := IDEAS.BaseClasses.Math.MinSmooth(angZen,Modelica.Constants.pi/2,0.01);
            angZenDeg := angZenLim*180/Modelica.Constants.pi;
            relAirMas := 1/(cos(angZenLim) + 0.15*(93.9 - angZenDeg)^(-1.253));

          end RelativeAirMass;

          block SkyClearness
            extends Modelica.Blocks.Interfaces.BlockIcon;
            Modelica.Blocks.Interfaces.RealInput angZen(
              quantity="Angle",
              unit="rad",
              displayUnit="degreeC") "zenith angle"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealOutput skyCle "sky clearness"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));
            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-80,72},{-60,92}})));

          //  final parameter Real kappa=1.041 "original kappa of 1.014 but for degrees";
        protected
            final parameter Real kappa = 5.534*10^(-6)
            "original kappa of 1.014 but for degrees";

            Real solDifHor "smoothed horizontal difuse radiation";
            Real angZenDeg = angZen*180/Modelica.Constants.pi;

          algorithm
            solDifHor := IDEAS.BaseClasses.Math.MaxSmooth(
              sim.solDifHor,
              1e-4,
              1e-5);
            skyCle := smooth(1, if noEvent(sim.solGloHor < 1) then 1 else ((sim.solGloHor)
              /solDifHor + kappa*angZenDeg^3)/(1 + kappa*angZenDeg^3));

            annotation (Diagram(graphics));
          end SkyClearness;

          block SkyBrightness
            extends Modelica.Blocks.Interfaces.BlockIcon;
            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-80,72},{-60,92}})));
            Modelica.Blocks.Interfaces.RealInput relAirMas "relative air mass"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealOutput skyBri "sky brightness"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

          algorithm
            skyBri := IDEAS.BaseClasses.Math.MinSmooth(
              sim.solDifHor*relAirMas/1367,
              1,
              0.025);

            annotation (Diagram(graphics));
          end SkyBrightness;

          block SkyBrightnessCoefficients
            extends Modelica.Blocks.Interfaces.BlockIcon;
            Modelica.Blocks.Interfaces.RealInput skyCle
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealInput angZen
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealInput skyBri
              annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
            Modelica.Blocks.Interfaces.RealOutput F1
            "circumsolar brightening coefficient"
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

            Modelica.Blocks.Interfaces.RealOutput F2
            "horizon brightening coefficient"
              annotation (Placement(transformation(extent={{90,10},{110,30}})));

        protected
            Real F11;
            Real F12;
            Real F13;
            Real F21;
            Real F22;
            Real F23;
            final parameter Real d=0.01;
            Real[8] a;
            Real[8] b;

          algorithm
            //first we define the discrete sky clearness categories a[:]
            b[1] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              1.065 - skyCle,
              d);
            b[2] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              1.23 - skyCle,
              d);
            b[3] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              1.50 - skyCle,
              d);
            b[4] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              1.95 - skyCle,
              d);
            b[5] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              2.8 - skyCle,
              d);
            b[6] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              4.5 - skyCle,
              d);
            b[7] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              6.2 - skyCle,
              d);
            b[8] := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
              1,
              0,
              skyCle - 6.2,
              d);
            a[1] := b[1];
            a[1] := b[2] - b[1];
            a[2] := b[3] - b[2];
            a[3] := b[4] - b[3];
            a[4] := b[5] - b[4];
            a[5] := b[6] - b[5];
            a[6] := b[7] - b[6];
            a[7] := b[8];

            F11 := -0.008*a[1] + 0.130*a[2] + 0.330*a[3] + 0.568*a[4] + 0.873*a[5] +
              1.132*a[6] + 1.060*a[7] + 0.678*a[8];
            F12 := 0.588*a[1] + 0.683*a[2] + 0.487*a[3] + 0.187*a[4] - 0.392*a[5] - 1.237
              *a[6] - 1.600*a[7] - 0.327*a[8];
            F13 := -0.062*a[1] - 0.151*a[2] - 0.221*a[3] - 0.295*a[4] - 0.362*a[5] -
              0.412*a[6] - 0.359*a[7] - 0.250*a[8];
            F21 := -0.060*a[1] - 0.019*a[2] + 0.055*a[3] + 0.109*a[4] + 0.226*a[5] +
              0.288*a[6] + 0.264*a[7] + 0.156*a[8];
            F22 := 0.072*a[1] + 0.066*a[2] - 0.064*a[3] - 0.152*a[4] - 0.462*a[5] - 0.823
              *a[6] - 1.127*a[7] - 1.377*a[8];
            F23 := -0.022*a[1] - 0.029*a[2] - 0.026*a[3] - 0.014*a[4] + 0.001*a[5] +
              0.056*a[6] + 0.131*a[7] + 0.251*a[8];
            F1 := IDEAS.BaseClasses.Math.MaxSmooth(
              0,
              F11 + F12*skyBri + F13*angZen,
              0.01);
            F2 := F21 + F22*skyBri + F23*angZen;

            annotation (Diagram(graphics));
          end SkyBrightnessCoefficients;

          block Perez
            extends Modelica.Blocks.Interfaces.BlockIcon;
            outer IDEAS.SimInfoManager sim
              annotation (Placement(transformation(extent={{-68,72},{-48,92}})));
            parameter Real rho=0.2 "Ground reflectance";
            parameter Modelica.SIunits.Angle inc(displayUnit="degree")
            "surface inclination";
            parameter Modelica.SIunits.Area A "surface area";

            Modelica.Blocks.Interfaces.RealInput F1
            "Circomsolar brightening coefficient"
              annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
            Modelica.Blocks.Interfaces.RealInput F2
            "horizon brightening coefficient"
              annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
            Modelica.Blocks.Interfaces.RealInput angZen(
              quantity="Angle",
              unit="rad",
              displayUnit="degree") "zenith angle"
              annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
            Modelica.Blocks.Interfaces.RealInput angInc(
              quantity="Angle",
              unit="rad",
              displayUnit="degree") "incedence angle"
              annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
            Modelica.Blocks.Interfaces.RealOutput solDifTil
              annotation (Placement(transformation(extent={{90,50},{110,70}})));

        protected
            Real a;
            Real b;

          algorithm
            a := IDEAS.BaseClasses.Math.MaxSmooth(
              0,
              cos(angInc),
              0.01);
            b := IDEAS.BaseClasses.Math.MaxSmooth(
              0.087,
              cos(angZen),
              0.01);

          //  if inc <= Modelica.Constants.small then
          //    solDifTil := sim.solDifHor;
          //  else
              solDifTil := A*sim.solDifHor*(0.5*(1 - F1)*(1 + cos(inc)) + F1*a/b + F2*sin(inc)) + A*sim.solGloHor*0.5*rho*(1 - cos(inc));
          //  end if;
          end Perez;
        end BaseClasses;

        model RadSol "solar angle to surface"

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Modelica.SIunits.Angle inc(displayUnit="degree")
          "inclination";
          parameter Modelica.SIunits.Angle azi(displayUnit="degree") "azimuth";
          parameter Modelica.SIunits.Angle lat(displayUnit="degree") = sim.city.lat
          "latitude";
          parameter Modelica.SIunits.Area A;

          outer IDEAS.SimInfoManager sim
            annotation (Placement(transformation(extent={{-80,60},{-60,80}})));

          BaseClasses.Declination declination
            annotation (Placement(transformation(extent={{-80,20},{-60,40}})));
          BaseClasses.AngleHour angleHour
            annotation (Placement(transformation(extent={{-80,-2},{-60,18}})));
          BaseClasses.AngleSolar angSolar(
            inc=inc,
            azi=azi,
            lat=lat) annotation (Placement(transformation(extent={{-40,20},{-20,40}})));
          BaseClasses.solDirTil solDirTil(A=A, inc=inc)
            annotation (Placement(transformation(extent={{0,20},{20,40}})));
          BaseClasses.solDifTil solDifTil(A=A, inc=inc)
            annotation (Placement(transformation(extent={{0,-2},{20,18}})));
          BaseClasses.solradExtraTerra extraTerra
            annotation (Placement(transformation(extent={{-80,-24},{-60,-4}})));
          Modelica.Blocks.Interfaces.RealOutput solDir
            annotation (Placement(transformation(extent={{90,50},{110,70}})));
          Modelica.Blocks.Interfaces.RealOutput solDif
            annotation (Placement(transformation(extent={{90,10},{110,30}})));
          BaseClasses.AngleZenith angleZenith(lat=lat)
            annotation (Placement(transformation(extent={{-40,-2},{-20,18}})));
          Modelica.Blocks.Interfaces.RealOutput angInc "Angle of incidence"
            annotation (Placement(transformation(extent={{90,-50},{110,-30}})));
          Modelica.Blocks.Interfaces.RealOutput angZen "Angle of incidence"
            annotation (Placement(transformation(extent={{90,-70},{110,-50}})));
          Modelica.Blocks.Interfaces.RealOutput angHou "Angle of incidence"
            annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
        equation
          connect(declination.delta, angSolar.angDec) annotation (Line(
              points={{-60,36},{-40,36}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angSolar.angHou) annotation (Line(
              points={{-60,14},{-48,14},{-48,32},{-40,32}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDirTil.solDirTil, solDir) annotation (Line(
              points={{20,36},{56,36},{56,60},{100,60}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDifTil.solDifTil, solDif) annotation (Line(
              points={{20,14},{56,14},{56,20},{100,20}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(declination.delta, angleZenith.angDec) annotation (Line(
              points={{-60,36},{-50,36},{-50,14},{-40,14}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angleZenith.angHou) annotation (Line(
              points={{-60,14},{-50,14},{-50,10},{-40,10}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleZenith.angZen, solDifTil.angZen) annotation (Line(
              points={{-20,14},{-6,14},{-6,10},{0,10}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, solDifTil.angInc) annotation (Line(
              points={{-20,36},{-4,36},{-4,14},{0,14}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, solDirTil.angSol) annotation (Line(
              points={{-20,36},{0,36}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, angInc) annotation (Line(
              points={{-20,36},{-10,36},{-10,-40},{100,-40}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angHou) annotation (Line(
              points={{-60,14},{-50,14},{-50,-80},{100,-80}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleZenith.angZen, angZen) annotation (Line(
              points={{-20,14},{-14,14},{-14,-60},{100,-60}},
              color={0,0,127},
              smooth=Smooth.None));
          annotation (Diagram(graphics), Icon(graphics={
                Polygon(
                  points={{-90,-80},{-40,-40},{40,-40},{90,-80},{-90,-80}},
                  lineColor={95,95,95},
                  smooth=Smooth.None),
                Polygon(
                  points={{16,-46},{22,-72},{-72,-4},{-18,-22},{16,-46}},
                  lineColor={0,0,0},
                  smooth=Smooth.None,
                  fillPattern=FillPattern.Solid,
                  fillColor={175,175,175}),
                Ellipse(
                  extent={{88,84},{40,38}},
                  lineColor={255,255,0},
                  fillColor={255,255,0},
                  fillPattern=FillPattern.Solid)}));
        end RadSol;

        model ShadedRadSol "Solar angle to surface"

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Modelica.SIunits.Angle inc(displayUnit="degree")
          "Inclination";
          parameter Modelica.SIunits.Angle azi(displayUnit="degree") "Azimuth";
          parameter Modelica.SIunits.Angle lat(displayUnit="degree") = sim.city.lat
          "Latitude";
          parameter Modelica.SIunits.Area A;

          outer IDEAS.SimInfoManager sim
            annotation (Placement(transformation(extent={{-80,60},{-60,80}})));

          BaseClasses.Declination declination
            annotation (Placement(transformation(extent={{-80,20},{-60,40}})));
          BaseClasses.AngleHour angleHour
            annotation (Placement(transformation(extent={{-80,-2},{-60,18}})));
          BaseClasses.AngleSolar angSolar(
            inc=inc,
            azi=azi,
            lat=lat) annotation (Placement(transformation(extent={{-40,20},{-20,40}})));
          BaseClasses.solDirTil solDirTil(A=A, inc=inc)
            annotation (Placement(transformation(extent={{0,20},{20,40}})));
          BaseClasses.solDifTil solDifTil(A=A, inc=inc)
            annotation (Placement(transformation(extent={{0,-2},{20,18}})));
          BaseClasses.solradExtraTerra extraTerra
            annotation (Placement(transformation(extent={{-80,-24},{-60,-4}})));
          Modelica.Blocks.Interfaces.RealOutput solDir
            annotation (Placement(transformation(extent={{90,50},{110,70}})));
          Modelica.Blocks.Interfaces.RealOutput solDif
            annotation (Placement(transformation(extent={{90,10},{110,30}})));
          BaseClasses.AngleZenith angleZenith(lat=lat)
            annotation (Placement(transformation(extent={{-40,-10},{-20,10}})));
          Modelica.Blocks.Interfaces.RealOutput angInc "Angle of incidence"
            annotation (Placement(transformation(extent={{90,-50},{110,-30}})));
          Modelica.Blocks.Interfaces.RealOutput angZen "Angle of incidence"
            annotation (Placement(transformation(extent={{90,-70},{110,-50}})));
          Modelica.Blocks.Interfaces.RealOutput angAzi "Azimuth angle"
            annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
          BaseClasses.AngleAzimuth angleAzimuth(lat=lat, azi=azi)
            annotation (Placement(transformation(extent={{-40,-40},{-20,-20}})));
        equation
          connect(declination.delta, angSolar.angDec) annotation (Line(
              points={{-60,36},{-40,36}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angSolar.angHou) annotation (Line(
              points={{-60,14},{-48,14},{-48,32},{-40,32}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDirTil.solDirTil, solDir) annotation (Line(
              points={{20,36},{56,36},{56,60},{100,60}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDifTil.solDifTil, solDif) annotation (Line(
              points={{20,14},{56,14},{56,20},{100,20}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(declination.delta, angleZenith.angDec) annotation (Line(
              points={{-60,36},{-50,36},{-50,6},{-40,6}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angleZenith.angHou) annotation (Line(
              points={{-60,14},{-50,14},{-50,2},{-40,2}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleZenith.angZen, solDifTil.angZen) annotation (Line(
              points={{-20,6},{-6,6},{-6,10},{0,10}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, solDifTil.angInc) annotation (Line(
              points={{-20,36},{-4,36},{-4,14},{0,14}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, solDirTil.angSol) annotation (Line(
              points={{-20,36},{0,36}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angSolar.angInc, angInc) annotation (Line(
              points={{-20,36},{-10,36},{-10,-40},{100,-40}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleZenith.angZen, angZen) annotation (Line(
              points={{-20,6},{-12,6},{-12,-60},{100,-60}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleZenith.angZen, angleAzimuth.angZen) annotation (Line(
              points={{-20,6},{-18,6},{-18,-12},{-46,-12},{-46,-32},{-40,-32}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleHour.angHou, angleAzimuth.angHou) annotation (Line(
              points={{-60,14},{-52,14},{-52,-28},{-40,-28}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(declination.delta, angleAzimuth.angDec) annotation (Line(
              points={{-60,36},{-50,36},{-50,-24},{-40,-24}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angleAzimuth.angAzi, angAzi) annotation (Line(
              points={{-20,-24},{-14,-24},{-14,-80},{100,-80}},
              color={0,0,127},
              smooth=Smooth.None));
          annotation (Diagram(graphics), Icon(graphics={
                Polygon(
                  points={{-90,-80},{-40,-40},{40,-40},{90,-80},{-90,-80}},
                  lineColor={95,95,95},
                  smooth=Smooth.None),
                Polygon(
                  points={{16,-46},{22,-72},{-72,-4},{-18,-22},{16,-46}},
                  lineColor={0,0,0},
                  smooth=Smooth.None,
                  fillPattern=FillPattern.Solid,
                  fillColor={175,175,175}),
                Ellipse(
                  extent={{88,84},{40,38}},
                  lineColor={255,255,0},
                  fillColor={255,255,0},
                  fillPattern=FillPattern.Solid)}));
        end ShadedRadSol;
      end Solar;
    end Meteo;

    package Time
    extends Modelica.Icons.Package;

      package BaseClasses
      extends Modelica.Icons.BasesPackage;

        model CalendarTime

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Boolean ifSolCor;

          Modelica.Blocks.Interfaces.RealInput timSim
            annotation (Placement(transformation(extent={{-120,20},{-80,60}})));
          Modelica.Blocks.Interfaces.RealInput delay
            annotation (Placement(transformation(extent={{-120,-60},{-80,-20}})));
          Modelica.Blocks.Interfaces.RealOutput timCal
            annotation (Placement(transformation(extent={{90,30},{110,50}})));
          Modelica.Blocks.Interfaces.RealOutput timCalSol
            annotation (Placement(transformation(extent={{90,-50},{110,-30}})));

        equation
          timCal = timSim;
          // - integer(timSim/31536000)*31536000;

          if ifSolCor then
            timCalSol = timSim + delay;
          else
            timCalSol = timSim;
          end if;

          annotation (Diagram(graphics));
        end CalendarTime;

        model LocalTime

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Modelica.SIunits.Angle lon(displayUnit="deg") "longitude";

          Modelica.Blocks.Interfaces.RealInput timZon "time zone"
            annotation (Placement(transformation(extent={{-120,20},{-80,60}})));
          Modelica.Blocks.Interfaces.RealInput timSim "simulation time"
            annotation (Placement(transformation(extent={{-120,-60},{-80,-20}})));
          Modelica.Blocks.Interfaces.RealOutput timLoc "local time"
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

        equation
          timLoc = timSim - timZon + lon*43200/Modelica.Constants.pi;

          annotation (Diagram(graphics));
        end LocalTime;

        model SimulationDelay

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Modelica.SIunits.Time delay;

          Modelica.Blocks.Interfaces.RealOutput timSim
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

        equation
          timSim = delay;

          annotation (Diagram(graphics));
        end SimulationDelay;

        model SimulationTime

          extends Modelica.Blocks.Interfaces.BlockIcon;

          Modelica.Blocks.Interfaces.RealOutput timSim
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

        equation
          timSim = rem(time, 31536000);

          annotation (Diagram(graphics));
        end SimulationTime;

        model SolarTime

          extends Modelica.Blocks.Interfaces.BlockIcon;

          Modelica.Blocks.Interfaces.RealInput timLoc(quantity="Time", unit="s")
            annotation (Placement(transformation(extent={{-120,20},{-80,60}})));
          Modelica.Blocks.Interfaces.RealInput timSim(quantity="Time", unit="s")
            annotation (Placement(transformation(extent={{-120,-60},{-80,-20}})));
          Modelica.Blocks.Interfaces.RealOutput timSol(quantity="Time", unit="s")
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

      protected
          Modelica.SIunits.Angle Bt;
          Modelica.SIunits.Time delta "difference of solar time to local time";
          Modelica.SIunits.Time nDay "Zero-based day number in seconds";

        algorithm
          nDay := timSim;
          Bt := Modelica.Constants.pi*((nDay + 86400)/86400 - 81)/182;
          delta := 60*(9.87*sin(2*Bt) - 7.53*cos(Bt) - 1.5*sin(Bt));
          timSol := timLoc + delta;

          annotation (Diagram(graphics));
        end SolarTime;

        block TimeZone

          extends Modelica.Blocks.Interfaces.BlockIcon;

          parameter Modelica.SIunits.Time timZonSta "standard time zone";
          parameter Boolean DST=true;
          parameter Integer yr "depcited year";

          Modelica.Blocks.Interfaces.RealInput timCal "time zone"
            annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));
          Modelica.Blocks.Interfaces.RealOutput timZon "calendar time"
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

          parameter Modelica.SIunits.Time DSTstart=86400*(31 + 28 + 31 - rem(5*yr/4 + 4,
              7)) + 2*3600;
          parameter Modelica.SIunits.Time DSTend=86400*(31 + 28 + 31 + 30 + 31 + 30 +
              31 + 31 + 30 + 31 - rem(5*yr/4 + 1, 7)) + 2*3600;
          // Source : http://www.webexhibits.org/daylightsaving/i.html

          Modelica.Blocks.Interfaces.BooleanOutput summer annotation (Placement(
                transformation(
                extent={{10,-10},{-10,10}},
                rotation=-90,
                origin={0,100})));

        equation
          if timCal >= DSTstart and timCal <= DSTend then
            if DST then
              timZon = timZonSta + 3600;
              summer = true;
            else
              timZon = timZonSta;
              summer = false;
            end if;
          else
            timZon = timZonSta;
            summer = false;
          end if;

        end TimeZone;
      end BaseClasses;

      block SimTimes

        extends Modelica.Blocks.Interfaces.BlockIcon;

        parameter Modelica.SIunits.Angle lon(displayUnit="deg") = 4.317
        "longitude";
        parameter Modelica.SIunits.Time delay(displayUnit="s") = 0
        "delay for solar data";
        parameter Modelica.SIunits.Time timZonSta=3600 "standard time zone";
        parameter Boolean DST=false "take into account daylight saving time";
        parameter Integer yr=2010 "depcited year for DST only";
        parameter Boolean ifSolCor=true;

        Modelica.Blocks.Interfaces.RealOutput timSol "solar time"
          annotation (Placement(transformation(extent={{90,-10},{110,10}})));
        Modelica.Blocks.Interfaces.RealOutput timCal "calendar time"
          annotation (Placement(transformation(extent={{90,-50},{110,-30}})));
        Modelica.Blocks.Interfaces.RealOutput timCalSol
        "calendar time for solar data"
          annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
        Modelica.Blocks.Interfaces.RealOutput timLoc
          annotation (Placement(transformation(extent={{90,30},{110,50}})));
        Modelica.Blocks.Interfaces.BooleanOutput summer
          annotation (Placement(transformation(extent={{90,70},{110,90}})));

    protected
        IDEAS.Climate.Time.BaseClasses.LocalTime localTime(lon=lon)
          annotation (Placement(transformation(extent={{-10,-6},{10,14}})));
        IDEAS.Climate.Time.BaseClasses.SolarTime solarTime
          annotation (Placement(transformation(extent={{30,-10},{50,10}})));
        IDEAS.Climate.Time.BaseClasses.CalendarTime calendarTime(ifSolCor=ifSolCor)
          annotation (Placement(transformation(extent={{30,-54},{50,-34}})));
        IDEAS.Climate.Time.BaseClasses.SimulationTime simulationTime
          annotation (Placement(transformation(extent={{-90,-30},{-70,-10}})));
        IDEAS.Climate.Time.BaseClasses.SimulationDelay simulationDelay(delay=delay)
          annotation (Placement(transformation(extent={{-90,-58},{-70,-38}})));
        IDEAS.Climate.Time.BaseClasses.TimeZone timeZone(
          timZonSta=timZonSta,
          DST=DST,
          yr=yr) annotation (Placement(transformation(extent={{-50,-6},{-30,14}})));

      equation
        connect(localTime.timLoc, solarTime.timLoc) annotation (Line(
            points={{10,4},{30,4}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(solarTime.timSol, timSol) annotation (Line(
            points={{50,0},{100,0}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(calendarTime.timCal, timCal) annotation (Line(
            points={{50,-40},{100,-40}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(calendarTime.timCalSol, timCalSol) annotation (Line(
            points={{50,-48},{60,-48},{60,-80},{100,-80}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(simulationDelay.timSim, calendarTime.delay) annotation (Line(
            points={{-70,-48},{30,-48}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(simulationTime.timSim, calendarTime.timSim) annotation (Line(
            points={{-70,-20},{-22,-20},{-22,-40},{30,-40}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(simulationTime.timSim, localTime.timSim) annotation (Line(
            points={{-70,-20},{-22,-20},{-22,0},{-10,0}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(simulationTime.timSim, solarTime.timSim) annotation (Line(
            points={{-70,-20},{20,-20},{20,-4},{30,-4}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timeZone.timZon, localTime.timZon) annotation (Line(
            points={{-30,4},{-22,4},{-22,8},{-10,8}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(calendarTime.timCal, timeZone.timCal) annotation (Line(
            points={{50,-40},{60,-40},{60,-26},{-56,-26},{-56,4},{-50,4}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(localTime.timLoc, timLoc) annotation (Line(
            points={{10,4},{20,4},{20,40},{100,40}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timeZone.summer, summer) annotation (Line(
            points={{-40,14},{-40,80},{100,80}},
            color={255,0,255},
            smooth=Smooth.None));
        annotation (
          defaultComponentName="timMan",
          Documentation(info="<html>
<p>
This component defines all required types of time in the simulation.
</p>
</html>
",       revisions="<html>
<ul>
<li>
April 6, 2011, by Ruben Baetens:<br>
First implementation.
</li>
</ul>
</html>"),Diagram(coordinateSystem(preserveAspectRatio=true,extent={{-100,-100},{100,
                  100}}), graphics),
          Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                  100}}), graphics={Text(
                extent={{-78,48},{74,-42}},
                lineColor={0,0,0},
                textString="time")}));
      end SimTimes;
    end Time;
  end Climate;

  package Buildings "Transient building models and model components"
  extends Modelica.Icons.Package;

    package Components
    "Building components for high-order building models or component analysis"
    extends Modelica.Icons.Package;

      model InternalWall "interior opaque wall between two zones"

        extends IDEAS.Buildings.Components.Interfaces.StateWall;

        replaceable parameter Data.Interfaces.Construction constructionType
          constrainedby Data.Interfaces.Construction(final insulationType=
              insulationType, final insulationTickness=insulationThickness)
        "Type of building construction"   annotation (
          __Dymola_choicesAllMatching=true,
          Placement(transformation(extent={{-38,72},{-34,76}})),
          Dialog(group="Construction details"));
        replaceable parameter Data.Interfaces.Insulation insulationType
          constrainedby Data.Interfaces.Insulation(final d=insulationThickness)
        "Type of thermal insulation"   annotation (
          __Dymola_choicesAllMatching=true,
          Placement(transformation(extent={{-38,84},{-34,88}})),
          Dialog(group="Construction details"));
        parameter Modelica.SIunits.Length insulationThickness
        "Thermal insulation thickness"
          annotation (Dialog(group="Construction details"));
        parameter Modelica.SIunits.Area AWall "Total wall area";
        parameter Modelica.SIunits.Angle inc
        "Inclination of the wall, i.e. 90deg denotes vertical";
        parameter Modelica.SIunits.Angle azi
        "Azimuth of the wall, i.e. 0deg denotes South";
        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a surfCon_b
        "convective nod on the inside"
          annotation (Placement(transformation(extent={{-60,-40},{-40,-20}})));
        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b surfRad_b
        "rad.node on the inside"
          annotation (Placement(transformation(extent={{-60,-70},{-40,-50}})));
        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_emb
        "port for gains by embedded active layers"
          annotation (Placement(transformation(extent={{-10,-110},{10,-90}})));

    protected
        IDEAS.Buildings.Components.BaseClasses.InteriorConvection intCon_b(final A=
              AWall, final inc=inc)
        "convective surface heat transimission on the interior side of the wall"
          annotation (Placement(transformation(extent={{-20,-40},{-40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.InteriorConvection intCon_a(final A=
              AWall, final inc=inc + Modelica.Constants.pi)
        "convective surface heat transimission on the interior side of the wall"
          annotation (Placement(transformation(extent={{20,-40},{40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.MultiLayerOpaque layMul(
          final A=AWall,
          final inc=inc,
          final nLay=constructionType.nLay,
          final mats=constructionType.mats,
          final locGain=constructionType.locGain)
        "declaration of array of resistances and capacitances for wall simulation"
          annotation (Placement(transformation(extent={{10,-40},{-10,-20}})));

    public
        Interfaces.PropsBus propsBus_b annotation (Placement(transformation(
              extent={{-20,20},{20,-20}},
              rotation=-90,
              origin={-50,40}), iconTransformation(
              extent={{-20,20},{20,-20}},
              rotation=-90,
              origin={-50,40})));
      equation
        connect(layMul.port_a, surfRad_a) annotation (Line(
            points={{10,-30},{14,-30},{14,-60},{50,-60}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_b, surfRad_b) annotation (Line(
            points={{-10,-30},{-12,-30},{-12,-60},{-50,-60}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(surfCon_b, intCon_b.port_b) annotation (Line(
            points={{-50,-30},{-40,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(surfCon_a, intCon_a.port_b) annotation (Line(
            points={{50,-30},{40,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_gain, port_emb) annotation (Line(
            points={{0,-40},{0,-100}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(intCon_b.port_a, layMul.port_b) annotation (Line(
            points={{-20,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_a, intCon_a.port_a) annotation (Line(
            points={{10,-30},{20,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.iEpsSw_a, propsBus_a.epsSw) annotation (Line(
            points={{10,-26},{18,-26},{18,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.iEpsLw_a, propsBus_a.epsLw) annotation (Line(
            points={{10,-22},{14,-22},{14,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.area, propsBus_a.area) annotation (Line(
            points={{0,-20},{0,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.area, propsBus_b.area) annotation (Line(
            points={{0,-20},{0,40},{-50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.iEpsSw_b, propsBus_b.epsSw) annotation (Line(
            points={{-10,-26},{-18,-26},{-18,40},{-50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.iEpsLw_b, propsBus_b.epsLw) annotation (Line(
            points={{-10,-22},{-14,-22},{-14,40},{-50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        annotation (
          Icon(coordinateSystem(preserveAspectRatio=false,extent={{-50,-100},{50,100}}),
              graphics={
              Rectangle(
                extent={{-10,80},{10,-70}},
                fillColor={175,175,175},
                fillPattern=FillPattern.Backward,
                pattern=LinePattern.None),
              Line(
                points={{-50,80},{50,80}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,-70},{50,-70}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,-90},{50,-90}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,100},{50,100}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-10,80},{-10,-70}},
                smooth=Smooth.None,
                color={0,0,0},
                thickness=0.5),
              Line(
                points={{10,80},{10,-70}},
                smooth=Smooth.None,
                color={0,0,0},
                thickness=0.5)}),
          Diagram(coordinateSystem(preserveAspectRatio=false,extent={{-50,-100},{50,
                  100}}), graphics),
          Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>InternalWall.mo</code> model describes the transient behaviour of opaque builiding constructions separating two thermal zones. The description of the thermal response of a wall is structured as in the 2 different occurring processes, i.e. heat conduction between both surfaces and the heat balance of the interior surfaces.</p>
<p><h5>Description</h5></p>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p>The heat balance of the interior surface is determined as Q_{net} = Q_{c} + Sum(Q_{SW,i}) + Sum(Q_{LW,i}) where Q_{net} denotes the heat flow into the wall, Q_{c} denotes heat transfer by convection, Q_{SW,i} denotes short-wave absorption of direct and diffuse solar light netering the interior zone through windows and Q_{LW,i} denotes long-wave heat exchange with the surounding interior surfaces. </p>
<p>The surface heat resistances <img src=\"modelica://IDEAS/Images/equations/equation-mp9YB9Y0.png\"/> for the exterior and interior surface respectively are determined as 1/R_{s} = A.h_{c} where A is the surface area and where h_ {c} is the exterior and interior convective heat transfer coefficient. The interior natural convective heat transfer coefficient h_{c,i} <img src=\"modelica://IDEAS/Images/equations/equation-eZGZlJrg.png\"/> is computed for each interior surface as h_{c,i} = n1.D^{n2}.(T_{a}-T_{s})^{n3} where D is the characteristic length of the surface, T_{a} is the indoor air temperature and n are correlation coefficients. These parameters {n1, n2, n3} are identical to {1.823,-0.121,0.293} for vertical surfaces <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, {2.175,-0.076,0.308} for horizontal surfaces wherefore the heat flux is in the same direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, and {2.72,-,0.13} for horizontal surfaces wherefore the heat flux is in the opposite direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Awbi 1999]</a>. The interior natural convective heat transfer coefficient is only described as function of the temperature difference. </p>
<p>Similar to the thermal model for heat transfer through a wall, a thermal circuit formulation for the direct radiant exchange between surfaces can be derived <a href=\"IDEAS.Buildings.UsersGuide.References\">[Buchberg 1955, Oppenheim 1956]</a>. The resulting heat exchange by longwave radiation between two surface s_{i} and s_{j} can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sj}^{4})/((1-e_{si})/e_{si} + 1/F_{si,sj} + A_{si}/sum(A_{si}) ) as derived from the Stefan-Boltzmann law wherefore e_{si} and e_{sj} are the emissivity of surfaces s_{i} and s_{j} respectively, F_{si,sj} is radiant-interchange configuration factor <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a> between surfaces s_{i} and s_{j} , A_{i} and A_{j} are the areas of surfaces s_{i} and s_{j} respectively, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and R_{i} and T_{j} are the surface temperature of surfaces s_{i} and s_{j} respectively. The above description of longwave radiation for a room or thermal zone results in the necessity of a very detailed input, i.e. the configuration between all surfaces needs to be described by their shape, position and orientation in order to define F_{si,sj}, and difficulties to introduce windows and internal gains in the zone of interest. Simplification is achieved by means of a delta-star transformation <a href=\"IDEAS.Buildings.UsersGuide.References\">[Kenelly 1899]</a> and by definition of a (fictive) radiant star node in the zone model. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. The heat exchange by longwave radiation between surface <img src=\"modelica://IDEAS/Images/equations/equation-Mjd7rCtc.png\"/> and the radiant star node in the zone model can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sr}^{4})/((1-e_{si})/e_{si} + A_{si}/sum(A_{si}) ) = sigma where e_{si} is the emissivity of surface s_{i}, A_{si} is the area of surface s_{i}, sum(A_{si}) is the sum of areas for all surfaces s_{i} of the thermal zone, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and T_{si} and T_{sr} are the temperatures of surfaces <img src=\"modelica://IDEAS/Images/equations/equation-olgnuMEg.png\"/> and the radiant star node respectively. Absorption of shortwave solar radiation on the interior surface is handled equally as for the outside surface. Determination of the receiving solar radiation on the interior surface after passing through windows is dealt with in the zone model.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>By means of the <code>BESTEST.mo</code> examples in the <code>Validation.mo</code> package.</p>
</html>"));
      end InternalWall;

      model OuterWall "Opaque building envelope construction"

        extends IDEAS.Buildings.Components.Interfaces.StateWall;

        replaceable parameter Data.Constructions.CavityWall constructionType
          constrainedby Data.Interfaces.Construction(final insulationType=
              insulationType, final insulationTickness=insulationThickness)
        "Type of building construction"   annotation (
          __Dymola_choicesAllMatching=true,
          Placement(transformation(extent={{-38,72},{-34,76}})),
          Dialog(group="Construction details"));

        replaceable parameter Data.Insulation.Rockwool insulationType constrainedby
        Data.Interfaces.Insulation(  final d=insulationThickness)
        "Type of thermal insulation"   annotation (
          __Dymola_choicesAllMatching=true,
          Placement(transformation(extent={{-38,84},{-34,88}})),
          Dialog(group="Construction details"));
        parameter Modelica.SIunits.Length insulationThickness=0.05
        "Thermal insulation thickness"
          annotation (Dialog(group="Construction details"));
        parameter Modelica.SIunits.Area AWall "Total wall area";
        parameter Modelica.SIunits.Angle inc
        "Inclination of the wall, i.e. 90deg denotes vertical";
        parameter Modelica.SIunits.Angle azi
        "Azimuth of the wall, i.e. 0deg denotes South";

        final parameter Real U_value=1/(1/8 + sum(constructionType.mats.R) + 1/25)
        "Wall U-value";
        final parameter Modelica.SIunits.Power QNom=U_value*AWall*(273.15 + 21 - sim.city.Tdes)
        "Design heat losses at reference outdoor temperature";

        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_emb
        "port for gains by embedded active layers"
          annotation (Placement(transformation(extent={{-10,-110},{10,-90}})));

        //protected
        IDEAS.Climate.Meteo.Solar.RadSol radSol(
          final inc=inc,
          final azi=azi,
          final A=AWall)
        "determination of incident solar radiation on wall based on inclination and azimuth"
          annotation (Placement(transformation(extent={{-70,-40},{-50,-20}})));
        IDEAS.Buildings.Components.BaseClasses.MultiLayerOpaque layMul(
          final A=AWall,
          final inc=inc,
          final nLay=constructionType.nLay,
          final mats=constructionType.mats,
          final locGain=constructionType.locGain)
        "declaration of array of resistances and capacitances for wall simulation"
          annotation (Placement(transformation(extent={{-10,-40},{10,-20}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorConvection extCon(final A=
              AWall)
        "convective surface heat transimission on the exterior side of the wall"
          annotation (Placement(transformation(extent={{-20,-60},{-40,-40}})));
        IDEAS.Buildings.Components.BaseClasses.InteriorConvection intCon(final A=
              AWall, final inc=inc)
        "convective surface heat transimission on the interior side of the wall"
          annotation (Placement(transformation(extent={{20,-40},{40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorSolarAbsorption solAbs(final A=
             AWall)
        "determination of absorbed solar radiation by wall based on incident radiation"
          annotation (Placement(transformation(extent={{-20,-40},{-40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorHeatRadidation extRad(final A=
              AWall, inc=inc)
        "determination of radiant heat exchange with the environment and sky"
          annotation (Placement(transformation(extent={{-20,-20},{-40,0}})));

      equation
        connect(radSol.solDir, solAbs.solDir) annotation (Line(
            points={{-50,-24},{-40,-24}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radSol.solDif, solAbs.solDif) annotation (Line(
            points={{-50,-28},{-40,-28}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(extCon.port_a, layMul.port_a) annotation (Line(
            points={{-20,-50},{-16,-50},{-16,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(solAbs.port_a, layMul.port_a) annotation (Line(
            points={{-20,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(extRad.port_a, layMul.port_a) annotation (Line(
            points={{-20,-10},{-16,-10},{-16,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_b, intCon.port_a) annotation (Line(
            points={{10,-30},{20,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.iEpsSw_a, solAbs.epsSw) annotation (Line(
            points={{-10,-26},{-14,-26},{-14,-24},{-20,-24}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(layMul.iEpsLw_a, extRad.epsLw) annotation (Line(
            points={{-10,-22},{-14,-22},{-14,-4},{-20,-4}},
            color={0,0,127},
            smooth=Smooth.None));

        connect(port_emb, layMul.port_gain) annotation (Line(
            points={{0,-100},{0,-40}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(intCon.port_b, surfCon_a) annotation (Line(
            points={{40,-30},{50,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_b, surfRad_a) annotation (Line(
            points={{10,-30},{16,-30},{16,-60},{50,-60}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.iEpsSw_b, propsBus_a.epsSw) annotation (Line(
            points={{10,-26},{14,-26},{14,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.iEpsLw_b, propsBus_a.epsLw) annotation (Line(
            points={{10,-22},{12,-22},{12,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.area, propsBus_a.area) annotation (Line(
            points={{0,-20},{0,-20},{0,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        annotation (
          Icon(coordinateSystem(preserveAspectRatio=true, extent={{-50,-100},{50,100}}),
              graphics={
              Polygon(
                points={{-50,60},{-30,60},{-30,80},{50,80},{50,100},{-50,100},{-50,60}},
                pattern=LinePattern.None,
                lineThickness=0.5,
                smooth=Smooth.None,
                fillColor={175,175,175},
                fillPattern=FillPattern.Backward),
              Rectangle(
                extent={{-30,-70},{-50,-20}},
                lineThickness=0.5,
                fillColor={175,175,175},
                fillPattern=FillPattern.Backward,
                pattern=LinePattern.None),
              Line(
                points={{-50,60},{-50,66},{-50,100},{50,100}},
                color={175,175,175},
                smooth=Smooth.None),
              Line(
                points={{-50,60},{-30,60},{-30,80},{50,80}},
                color={175,175,175},
                smooth=Smooth.None),
              Line(
                points={{-50,-20},{-30,-20},{-30,-70},{-30,-70},{52,-70}},
                color={175,175,175},
                smooth=Smooth.None),
              Line(
                points={{-50,-20},{-50,-90},{50,-90}},
                color={175,175,175},
                smooth=Smooth.None),
              Line(
                points={{-44,60},{-30,60},{-30,80},{-28,80},{50,80}},
                pattern=LinePattern.None,
                thickness=0.5,
                smooth=Smooth.None),
              Line(
                points={{-44,-20},{-30,-20},{-30,-70}},
                pattern=LinePattern.None,
                thickness=0.5,
                smooth=Smooth.None),
              Line(
                points={{-44,60},{-44,-20}},
                smooth=Smooth.None,
                color={175,175,175})}),
          Diagram(coordinateSystem(preserveAspectRatio=false,extent={{-100,-100},{100,
                  100}}), graphics),
          Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>OuterWall.mo</code> model describes the transient behaviour of opaque builiding enelope constructions. The description of the thermal response of a wall is structured as in the 3 different occurring processes, i.e. the heat balance of the exterior surface, heat conduction between both surfaces and the heat balance of the interior surface.</p>
<p><h5>Description</h5></p>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p>The heat balance of the exterior surface is determined as Q_{net} = Q_{c} + Q_{SW} + Q_{LW,e} + Q_{LW,sky} where Q_{net} denotes the heat flow into the wall, Q_{c} denotes heat transfer by convection, Q_{SW} denotes short-wave absorption of direct and diffuse solar light, Q_{LW,e} denotes long-wave heat exchange with the environment and Q_{nLW,sky} denotes long-wave heat exchange with the sky. The exterior convective heat flow is computed as Q_{c} = 5,01.A.v_{10}^{0.85}.(T_{db}-T{s}) where A is the surface area, T_{db} is the dry-bulb exterior air temperature, T_{s} is the surface temperature and v_{10} is the wind speed in the undisturbed flow at 10 meter above the ground and where the stated correlation is valid for a v_{10} range of [0.15,7.5] meter per second <a href=\"IDEAS.Buildings.UsersGuide.References\">[Defraeye 2011]</a>. The v_{10}-dependent term denoting the exterior convective heat transfer coefficient h_{ce} is determined as max(f(v_{10}), 5.6) in order to take into account buoyancy effects at low wind speeds <a href=\"IDEAS.Buildings.UsersGuide.References\">[Jurges 1924]</a>. Longwave radiation between the surface and environment Q_{LW,e} is determined as Q_{LW,e} = sigma.e.A.( T_{s}^4 - F_{sky}.T_{sky}^4 - (1-F_{sky})T_{db}^4 ) as derived from the Stefan-Boltzmann law wherefore sigma the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a>, e the longwave emissivity of the exterior surface, F_{sky} the radiant-interchange configuration factor between the surface and sky <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a>, and the surface and the environment respectively and T_{s} and T_{sky} are the exterior surface and sky temperature respectively. Shortwave solar irradiation absorbed by the exterior surface is determined as Q_{SW} = e_{SW}.A.E_{SW} where e_{SW} is the shortwave absorption of the surface and E_{SW} the total irradiation on the depicted surface. </p>
<p>The heat balance of the interior surface is determined as Q_{net} = Q_{c} + Sum(Q_{SW,i}) + Sum(Q_{LW,i}) where Q_{net} denotes the heat flow into the wall, Q_{c} denotes heat transfer by convection, Q_{SW,i} denotes short-wave absorption of direct and diffuse solar light netering the interior zone through windows and Q_{LW,i} denotes long-wave heat exchange with the surounding interior surfaces. </p>
<p>The surface heat resistances <img src=\"modelica://IDEAS/Images/equations/equation-mp9YB9Y0.png\" alt=\"R_s\"/> for the exterior and interior surface respectively are determined as 1/R_{s} = A.h_{c} where A is the surface area and where h_ {c} is the exterior and interior convective heat transfer coefficient. The interior natural convective heat transfer coefficient h_{c,i} <img src=\"modelica://IDEAS/Images/equations/equation-eZGZlJrg.png\" alt=\"h_ci\"/> is computed for each interior surface as h_{c,i} = n1.D^{n2}.(T_{a}-T_{s})^{n3} where D is the characteristic length of the surface, T_{a} is the indoor air temperature and n are correlation coefficients. These parameters {n1, n2, n3} are identical to {1.823,-0.121,0.293} for vertical surfaces <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, {2.175,-0.076,0.308} for horizontal surfaces wherefore the heat flux is in the same direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, and {2.72,-,0.13} for horizontal surfaces wherefore the heat flux is in the opposite direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Awbi 1999]</a>. The interior natural convective heat transfer coefficient is only described as function of the temperature difference. </p>
<p>Similar to the thermal model for heat transfer through a wall, a thermal circuit formulation for the direct radiant exchange between surfaces can be derived <a href=\"IDEAS.Buildings.UsersGuide.References\">[Buchberg 1955, Oppenheim 1956]</a>. The resulting heat exchange by longwave radiation between two surface s_{i} and s_{j} can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sj}^{4})/((1-e_{si})/e_{si} + 1/F_{si,sj} + A_{si}/sum(A_{si}) ) as derived from the Stefan-Boltzmann law wherefore e_{si} and e_{sj} are the emissivity of surfaces s_{i} and s_{j} respectively, F_{si,sj} is radiant-interchange configuration factor <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a> between surfaces s_{i} and s_{j} , A_{i} and A_{j} are the areas of surfaces s_{i} and s_{j} respectively, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and R_{i} and T_{j} are the surface temperature of surfaces s_{i} and s_{j} respectively. The above description of longwave radiation for a room or thermal zone results in the necessity of a very detailed input, i.e. the configuration between all surfaces needs to be described by their shape, position and orientation in order to define F_{si,sj}, and difficulties to introduce windows and internal gains in the zone of interest. Simplification is achieved by means of a delta-star transformation <a href=\"IDEAS.Buildings.UsersGuide.References\">[Kenelly 1899]</a> and by definition of a (fictive) radiant star node in the zone model. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. The heat exchange by longwave radiation between surface <img src=\"modelica://IDEAS/Images/equations/equation-Mjd7rCtc.png\" alt=\"s_i\"/> and the radiant star node in the zone model can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sr}^{4})/((1-e_{si})/e_{si} + A_{si}/sum(A_{si}) ) = sigma where e_{si} is the emissivity of surface s_{i}, A_{si} is the area of surface s_{i}, sum(A_{si}) is the sum of areas for all surfaces s_{i} of the thermal zone, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and T_{si} and T_{sr} are the temperatures of surfaces <img src=\"modelica://IDEAS/Images/equations/equation-olgnuMEg.png\" alt=\"s_i\"/> and the radiant star node respectively. Absorption of shortwave solar radiation on the interior surface is handled equally as for the outside surface. Determination of the receiving solar radiation on the interior surface after passing through windows is dealt with in the zone model.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>By means of the <code>BESTEST.mo</code> examples in the <code>Validation.mo</code> package.</p>
</html>"));
      end OuterWall;

      model Window "Multipane window"

        extends IDEAS.Buildings.Components.Interfaces.StateWall;

        parameter Modelica.SIunits.Area A "Total window and windowframe area";
        parameter Real frac(
          min=0,
          max=1) = 0.15 "Area fraction of the window frame";

        parameter Modelica.SIunits.Angle inc
        "Inclination of the window, i.e. 90deg denotes vertical";
        parameter Modelica.SIunits.Angle azi
        "Azimuth of the wall, i.e. 0deg denotes South";
        final parameter Modelica.SIunits.Power QNom=glazing.U_value*A*(273.15 + 21 -
            sim.city.Tdes)
        "Design heat losses at reference outdoor temperature";

        replaceable parameter IDEAS.Buildings.Data.Interfaces.Glazing glazing
          constrainedby IDEAS.Buildings.Data.Interfaces.Glazing "Glazing type"
          annotation (__Dymola_choicesAllMatching=true, Dialog(group=
                "Construction details"));
        replaceable parameter IDEAS.Buildings.Data.Interfaces.Frame fraType
          constrainedby IDEAS.Buildings.Data.Interfaces.Frame
        "Window frame type"
          annotation (__Dymola_choicesAllMatching=true, Dialog(group=
                "Construction details"));
        replaceable Interfaces.StateShading shaType constrainedby
        Interfaces.StateShading(  final azi=azi) "Shading type" annotation (
            __Dymola_choicesAllMatching=true, Dialog(group="Construction details"));

        Modelica.Blocks.Interfaces.RealInput Ctrl if shaType.controled
        "Control signal between 0 and 1, i.e. 1 is fully closed"   annotation (
            Placement(transformation(
              extent={{20,-20},{-20,20}},
              rotation=-90,
              origin={-30,-110}), iconTransformation(
              extent={{10,-10},{-10,10}},
              rotation=-90,
              origin={-30,-100})));
        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b iSolDir
        "direct solar gains transmitted by windows"   annotation (Placement(
              transformation(extent={{-10,-110},{10,-90}}), iconTransformation(extent=
                 {{-10,-110},{10,-90}})));
        Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b iSolDif
        "diffuse solar gains transmitted by windows"   annotation (Placement(
              transformation(extent={{20,-110},{40,-90}}), iconTransformation(extent=
                  {{20,-110},{40,-90}})));

    protected
        IDEAS.Climate.Meteo.Solar.ShadedRadSol radSol(
          final inc=inc,
          final azi=azi,
          final A=A*(1 - frac))
        "determination of incident solar radiation on wall based on inclination and azimuth"
          annotation (Placement(transformation(extent={{-70,-70},{-50,-50}})));
        IDEAS.Buildings.Components.BaseClasses.MultiLayerLucent layMul(
          final A=A*(1 - frac),
          final inc=inc,
          final nLay=glazing.nLay,
          final mats=glazing.mats)
        "declaration of array of resistances and capacitances for wall simulation"
          annotation (Placement(transformation(extent={{-10,-40},{10,-20}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorConvection eCon(final A=A*(1
               - frac))
        "convective surface heat transimission on the exterior side of the wall"
          annotation (Placement(transformation(extent={{-20,-40},{-40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.InteriorConvectionWindow iCon(final A=
              A*(1 - frac), final inc=inc)
        "convective surface heat transimission on the interior side of the wall"
          annotation (Placement(transformation(extent={{20,-40},{40,-20}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorHeatRadidation skyRad(final A=
              A*(1 - frac), final inc=inc)
        "determination of radiant heat exchange with the environment and sky"
          annotation (Placement(transformation(extent={{-20,-20},{-40,0}})));
        IDEAS.Buildings.Components.BaseClasses.SwWindowResponse solWin(
          final nLay=glazing.nLay,
          final SwAbs=glazing.SwAbs,
          final SwTrans=glazing.SwTrans,
          final SwTransDif=glazing.SwTransDif,
          final SwAbsDif=glazing.SwAbsDif)
          annotation (Placement(transformation(extent={{-10,-70},{10,-50}})));

        IDEAS.Buildings.Components.BaseClasses.InteriorConvection iConFra(A=A*frac,
            inc=inc) if fraType.present
        "convective surface heat transimission on the interior side of the wall"
          annotation (Placement(transformation(extent={{20,70},{40,90}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorHeatRadidation skyRadFra(
            final A=A*frac, final inc=inc) if fraType.present
        "determination of radiant heat exchange with the environment and sky"
          annotation (Placement(transformation(extent={{-20,80},{-40,100}})));
        IDEAS.Buildings.Components.BaseClasses.ExteriorConvection eConFra(final A=A*
              frac) if fraType.present
        "convective surface heat transimission on the exterior side of the wall"
          annotation (Placement(transformation(extent={{-20,60},{-40,80}})));
        Modelica.Thermal.HeatTransfer.Components.ThermalConductor layFra(final G=
              fraType.U_value*A*frac) if fraType.present
          annotation (Placement(transformation(extent={{-10,70},{10,90}})));

      equation
        connect(eCon.port_a, layMul.port_a) annotation (Line(
            points={{-20,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(skyRad.port_a, layMul.port_a) annotation (Line(
            points={{-20,-10},{-16,-10},{-16,-30},{-10,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(solWin.iSolDir, iSolDir) annotation (Line(
            points={{-2,-70},{-2,-80},{0,-80},{0,-100}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(solWin.iSolDif, iSolDif) annotation (Line(
            points={{2,-70},{0,-70},{0,-80},{30,-80},{30,-100}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(solWin.iSolAbs, layMul.port_gain) annotation (Line(
            points={{0,-50},{0,-40}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.iEpsLw_a, skyRad.epsLw) annotation (Line(
            points={{-10,-22},{-14,-22},{-14,-4},{-20,-4}},
            color={0,0,127},
            smooth=Smooth.None));

        connect(layMul.port_b, surfRad_a) annotation (Line(
            points={{10,-30},{16,-30},{16,-60},{50,-60}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(iCon.port_b, surfCon_a) annotation (Line(
            points={{40,-30},{50,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.port_b, iCon.port_a) annotation (Line(
            points={{10,-30},{20,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(radSol.solDir, shaType.solDir) annotation (Line(
            points={{-50,-54},{-36,-54}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radSol.solDif, shaType.solDif) annotation (Line(
            points={{-50,-58},{-36,-58}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radSol.angInc, shaType.angInc) annotation (Line(
            points={{-50,-64},{-36,-64}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radSol.angZen, shaType.angZen) annotation (Line(
            points={{-50,-66},{-36,-66}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radSol.angAzi, shaType.angAzi) annotation (Line(
            points={{-50,-68},{-36,-68}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(shaType.iSolDir, solWin.solDir) annotation (Line(
            points={{-26,-54},{-10,-54}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(shaType.iSolDif, solWin.solDif) annotation (Line(
            points={{-26,-58},{-10,-58}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(shaType.iAngInc, solWin.angInc) annotation (Line(
            points={{-26,-66},{-10,-66}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(shaType.Ctrl, Ctrl) annotation (Line(
            points={{-31,-70},{-30,-70},{-30,-110}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(iConFra.port_b, surfCon_a) annotation (Line(
            points={{40,80},{44,80},{44,-30},{50,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layFra.port_b, iConFra.port_a) annotation (Line(
            points={{10,80},{20,80}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(skyRadFra.port_a, layFra.port_a) annotation (Line(
            points={{-20,90},{-16,90},{-16,80},{-10,80}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(eConFra.port_a, layFra.port_a) annotation (Line(
            points={{-20,70},{-16,70},{-16,80},{-10,80}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(layMul.iEpsLw_a, skyRadFra.epsLw) annotation (Line(
            points={{-10,-22},{-14,-22},{-14,96},{-20,96}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(layMul.iEpsSw_b, propsBus_a.epsSw) annotation (Line(
            points={{10,-26},{14,-26},{14,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.iEpsLw_b, propsBus_a.epsLw) annotation (Line(
            points={{10,-22},{12,-22},{12,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        connect(layMul.area, propsBus_a.area) annotation (Line(
            points={{0,-20},{0,40},{50,40}},
            color={0,0,127},
            smooth=Smooth.None), Text(
            string="%second",
            index=1,
            extent={{6,3},{6,3}}));
        annotation (
          Icon(coordinateSystem(preserveAspectRatio=true, extent={{-50,-100},{50,100}}),
              graphics={
              Polygon(
                points={{-46,60},{50,24},{50,-50},{-30,-20},{-46,-20},{-46,60}},
                smooth=Smooth.None,
                pattern=LinePattern.None,
                fillColor={255,255,170},
                fillPattern=FillPattern.Solid,
                lineColor={0,0,0}),
              Line(
                points={{-50,60},{-30,60},{-30,80},{50,80}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,-20},{-30,-20},{-30,-70},{-30,-70},{52,-70}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,60},{-50,66},{-50,100},{50,100}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-50,-20},{-50,-90},{50,-90}},
                color={95,95,95},
                smooth=Smooth.None),
              Line(
                points={{-46,60},{-46,-20}},
                color={0,0,0},
                thickness=0.5,
                smooth=Smooth.None)}),
          Diagram(coordinateSystem(preserveAspectRatio=false,extent={{-100,-100},{100,
                  100}}), graphics),
          Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>Window</code> model describes the transient behaviour of translucent builiding enelope constructions. The description of the thermal response of a wall is structured as in the 4 different occurring processes, i.e. the transmittance and absorptance of shortwave solar radiation, heat balance of the exterior surface, heat conduction between both surfaces and the heat balance of the interior surface.</p>
<p><h5>Description</h5></p>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p><br/>The heat balance of the exterior surface is determined as Q_{net} = Q_{c} + Q_{SW} + Q_{LW,e} + Q_{LW,sky} where Q_{net} denotes the heat flow into the wall, Q_{c} denotes heat transfer by convection, Q_{SW} denotes short-wave absorption of direct and diffuse solar light, Q_{LW,e} denotes long-wave heat exchange with the environment and Q_{nLW,sky} denotes long-wave heat exchange with the sky. The exterior convective heat flow is computed as Q_{c} = 5,01.A.v_{10}^{0.85}.(T_{db}-T{s}) where A is the surface area, T_{db} is the dry-bulb exterior air temperature, T_{s} is the surface temperature and v_{10} is the wind speed in the undisturbed flow at 10 meter above the ground and where the stated correlation is valid for a v_{10} range of [0.15,7.5] meter per second <a href=\"IDEAS.Buildings.UsersGuide.References\">[Defraeye 2011]</a>. The v_{10}-dependent term denoting the exterior convective heat transfer coefficient h_{ce} is determined as max(f(v_{10}), 5.6) in order to take into account buoyancy effects at low wind speeds <a href=\"IDEAS.Buildings.UsersGuide.References\">[Jurges 1924]</a>. Longwave radiation between the surface and environment Q_{LW,e} is determined as Q_{LW,e} = sigma.e.A.( T_{s}^4 - F_{sky}.T_{sky}^4 - (1-F_{sky})T_{db}^4 ) as derived from the Stefan-Boltzmann law wherefore sigma the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a>, e the longwave emissivity of the exterior surface, F_{sky} the radiant-interchange configuration factor between the surface and sky <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a>, and the surface and the environment respectively and T_{s} and T_{sky} are the exterior surface and sky temperature respectively. Shortwave solar irradiation absorbed by the exterior surface is determined as Q_{SW} = e_{SW}.A.E_{SW} where e_{SW} is the shortwave absorption of the surface and E_{SW} the total irradiation on the depicted surface. </p>
<p>The properties for absorption by and transmission through the glazingare taken into account depending on the angle of incidence of solar irradiation and are based on the output of the <a href=\"IDEAS.Buildings.UsersGuide.References\">[WINDOW 6.3]</a> software, i.e. the shortwave properties itselves based on the layers in the window are not calculated in the model but are input parameters. </p>
<p>The heat balance of the interior surface is determined as Q_{net} = Q_{c} + Sum(Q_{SW,i}) + Sum(Q_{LW,i}) where Q_{net} denotes the heat flow into the wall, Q_{c} denotes heat transfer by convection, Q_{SW,i} denotes short-wave absorption of direct and diffuse solar light netering the interior zone through windows and Q_{LW,i} denotes long-wave heat exchange with the surounding interior surfaces. </p>
<p>The surface heat resistances <img src=\"modelica://IDEAS/Images/equations/equation-mp9YB9Y0.png\"/> for the exterior and interior surface respectively are determined as 1/R_{s} = A.h_{c} where A is the surface area and where h_ {c} is the exterior and interior convective heat transfer coefficient. The interior natural convective heat transfer coefficient h_{c,i} <img src=\"modelica://IDEAS/Images/equations/equation-eZGZlJrg.png\"/> is computed for each interior surface as h_{c,i} = n1.D^{n2}.(T_{a}-T_{s})^{n3} where D is the characteristic length of the surface, T_{a} is the indoor air temperature and n are correlation coefficients. These parameters {n1, n2, n3} are identical to {1.823,-0.121,0.293} for vertical surfaces <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, {2.175,-0.076,0.308} for horizontal surfaces wherefore the heat flux is in the same direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, and {2.72,-,0.13} for horizontal surfaces wherefore the heat flux is in the opposite direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Awbi 1999]</a>. The interior natural convective heat transfer coefficient is only described as function of the temperature difference. </p>
<p>Similar to the thermal model for heat transfer through a wall, a thermal circuit formulation for the direct radiant exchange between surfaces can be derived <a href=\"IDEAS.Buildings.UsersGuide.References\">[Buchberg 1955, Oppenheim 1956]</a>. The resulting heat exchange by longwave radiation between two surface s_{i} and s_{j} can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sj}^{4})/((1-e_{si})/e_{si} + 1/F_{si,sj} + A_{si}/sum(A_{si}) ) as derived from the Stefan-Boltzmann law wherefore e_{si} and e_{sj} are the emissivity of surfaces s_{i} and s_{j} respectively, F_{si,sj} is radiant-interchange configuration factor <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a> between surfaces s_{i} and s_{j} , A_{i} and A_{j} are the areas of surfaces s_{i} and s_{j} respectively, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and R_{i} and T_{j} are the surface temperature of surfaces s_{i} and s_{j} respectively. The above description of longwave radiation for a room or thermal zone results in the necessity of a very detailed input, i.e. the configuration between all surfaces needs to be described by their shape, position and orientation in order to define F_{si,sj}, and difficulties to introduce windows and internal gains in the zone of interest. Simplification is achieved by means of a delta-star transformation <a href=\"IDEAS.Buildings.UsersGuide.References\">[Kenelly 1899]</a> and by definition of a (fictive) radiant star node in the zone model. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. The heat exchange by longwave radiation between surface <img src=\"modelica://IDEAS/Images/equations/equation-Mjd7rCtc.png\"/> and the radiant star node in the zone model can be described as Q_{si,sj} = sigma.A_{si}.(T_{si}^{4}-T_{sr}^{4})/((1-e_{si})/e_{si} + A_{si}/sum(A_{si}) ) = sigma where e_{si} is the emissivity of surface s_{i}, A_{si} is the area of surface s_{i}, sum(A_{si}) is the sum of areas for all surfaces s_{i} of the thermal zone, sigma is the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a> and T_{si} and T_{sr} are the temperatures of surfaces <img src=\"modelica://IDEAS/Images/equations/equation-olgnuMEg.png\"/> and the radiant star node respectively. Absorption of shortwave solar radiation on the interior surface is handled equally as for the outside surface. Determination of the receiving solar radiation on the interior surface after passing through windows is dealt with in the zone model.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>By means of the <code>BESTEST.mo</code> examples in the <code>Validation.mo</code> package.</p>
</html>"));
      end Window;

      model Zone "thermal building zone"

        extends IDEAS.Buildings.Components.Interfaces.StateZone;

        parameter Modelica.SIunits.Volume V "Total zone air volume";
        parameter Real n50=0.6
        "n50 value cfr airtightness, i.e. the ACH at a pressure diffence of 50 Pa";
        parameter Real corrCV=5
        "Multiplication factor for the zone air capacity";
        parameter Modelica.SIunits.Temperature TOpStart=297.15;

        parameter Boolean linear=true;

        final parameter Modelica.SIunits.Power QNom=1012*1.204*V/3600*n50/20*(273.15
             + 21 - sim.city.Tdes)
        "Design heat losses at reference outdoor temperature";

        Modelica.SIunits.Temperature TAir=conDistr.TCon;
        Modelica.SIunits.Temperature TStar=radDistr.TRad;

    protected
        IDEAS.Buildings.Components.BaseClasses.ZoneLwGainDistribution radDistr(final
            nSurf=nSurf) "distribution of radiative internal gains" annotation (
            Placement(transformation(
              extent={{10,10},{-10,-10}},
              rotation=-90,
              origin={-54,-44})));
        IDEAS.Buildings.Components.BaseClasses.MixedAir conDistr(
          final nSurf=nSurf,
          final V=V,
          final corrCV=corrCV) "convective part of the zone"
          annotation (Placement(transformation(extent={{-2,10},{-22,30}})));
        IDEAS.Buildings.Components.BaseClasses.AirLeakage vent(final n50=n50,final V=
              V) "zone air leakage" annotation (Placement(transformation(
              extent={{-10,-10},{10,10}},
              rotation=90,
              origin={10,42})));
        IDEAS.Buildings.Components.BaseClasses.ZoneLwDistribution radDistrLw(final
            nSurf=nSurf, final linear=linear)
        "internal longwave radiative heat exchange"   annotation (Placement(
              transformation(
              extent={{10,-10},{-10,10}},
              rotation=90,
              origin={-54,-10})));
        Modelica.Blocks.Math.Sum sum(
          nin=2,
          k={0.5,0.5},
          y(start=TOpStart))
          annotation (Placement(transformation(extent={{0,-66},{12,-54}})));
      equation
        connect(surfRad, radDistr.radSurfTot) annotation (Line(
            points={{-100,-60},{-74,-60},{-74,-26},{-54,-26},{-54,-34}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(radDistr.iSolDir, iSolDir) annotation (Line(
            points={{-58,-54},{-58,-80},{-20,-80},{-20,-100}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(radDistr.iSolDif, iSolDif) annotation (Line(
            points={{-54,-54},{-54,-76},{20,-76},{20,-100}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(surfCon, conDistr.conSurf) annotation (Line(
            points={{-100,-30},{-30,-30},{-30,20},{-22,20}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(conDistr.conGain, gainCon) annotation (Line(
            points={{-2,20},{49,20},{49,-30},{100,-30}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(radDistr.radGain, gainRad) annotation (Line(
            points={{-50.2,-54},{-50,-54},{-50,-72},{80,-72},{80,-60},{100,-60}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(vent.port_a, conDistr.conGain) annotation (Line(
            points={{10,32},{10,20},{-2,20}},
            color={191,0,0},
            smooth=Smooth.None));
        connect(surfRad, radDistrLw.port_a) annotation (Line(
            points={{-100,-60},{-74,-60},{-74,-26},{-54,-26},{-54,-20}},
            color={191,0,0},
            smooth=Smooth.None));

        connect(sum.y, TSensor) annotation (Line(
            points={{12.6,-60},{59.3,-60},{59.3,0},{106,0}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(radDistr.TRad, sum.u[1]) annotation (Line(
            points={{-44,-44},{-22,-44},{-22,-60.6},{-1.2,-60.6}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(conDistr.TCon, sum.u[2]) annotation (Line(
            points={{-12,10},{-12,-62},{-1.2,-62},{-1.2,-59.4}},
            color={0,0,127},
            smooth=Smooth.None));

        connect(propsBus.area, radDistr.area) annotation (Line(
            points={{-100,40},{-82,40},{-82,-40},{-64,-40}},
            color={127,0,0},
            smooth=Smooth.None), Text(
            string="%first",
            index=-1,
            extent={{-6,3},{-6,3}}));
        connect(propsBus.area, radDistrLw.A) annotation (Line(
            points={{-100,40},{-82,40},{-82,-14},{-64,-14}},
            color={127,0,0},
            smooth=Smooth.None), Text(
            string="%first",
            index=-1,
            extent={{-6,3},{-6,3}}));
        connect(propsBus.epsLw, radDistrLw.epsLw) annotation (Line(
            points={{-100,40},{-82,40},{-82,-10},{-64,-10}},
            color={127,0,0},
            smooth=Smooth.None), Text(
            string="%first",
            index=-1,
            extent={{-6,3},{-6,3}}));
        connect(propsBus.epsLw, radDistr.epsLw) annotation (Line(
            points={{-100,40},{-82,40},{-82,-44},{-64,-44}},
            color={127,0,0},
            smooth=Smooth.None), Text(
            string="%first",
            index=-1,
            extent={{-6,3},{-6,3}}));
        connect(propsBus.epsSw, radDistr.epsSw) annotation (Line(
            points={{-100,40},{-82,40},{-82,-48},{-64,-48}},
            color={127,0,0},
            smooth=Smooth.None), Text(
            string="%first",
            index=-1,
            extent={{-6,3},{-6,3}}));
        annotation (
          Icon(graphics),
          Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>Also the thermal response of a zone can be divided into a convective, longwave radiative and shortwave radiative process influencing both thermal comfort in the depicted zone as well as the response of adjacent wall structures.</p>
<p><h5>Description</h5></p>
<p>The air within the zone is modeled based on the assumption that it is well-stirred, i.e. it is characterized by a single uniform air temperature. This is practically accomplished with the mixing caused by the air distribution system. The convective gains and the resulting change in air temperature T_{a} of a single thermal zone can be modeled as a thermal circuit. The resulting heat balance for the air node can be described as c_{a}.V_{a}.dT_{a}/dt = som(Q_{ia}) + sum(h_{ci}.A_{si}.(T_{a}-T_{si})) + sum(m_{az}.(h_{a}-h_{az})) + m_{ae}(h_{a}-h_{ae}) + m_{sys}(h_{a}-h_{sys}) wherefore h_{a} is the specific air enthalpy and where T_{a} is the air temperature of the zone, c_{a} is the specific heat capacity of air at constant pressure, V_{a} is the zone air volume, Q_{a} is a convective internal load, R_{si} is the convective surface resistance of surface s_{i}, A_{si} is the area of surface s_{i}, T_{si} the surface temperature of surface s_{i}, m_{az} is the mass flow rate between zones, m_{ae} is the mass flow rate between the exterior by natural infiltrationa and m_{sys} is the mass flow rate provided by the ventilation system. </p>
<p>Infiltration and ventilation systems provide air to the zones, undesirably or to meet heating or cooling loads. The thermal energy provided to the zone by this air change rate can be formulated from the difference between the supply air enthalpy and the enthalpy of the air leaving the zone <img src=\"modelica://IDEAS/Images/equations/equation-jiSQ22c0.png\" alt=\"h_a\"/>. It is assumed that the zone supply air mass flow rate is exactly equal to the sum of the air flow rates leaving the zone, and all air streams exit the zone at the zone mean air temperature. The moisture dependence of the air enthalpy is neglected.</p>
<p>A multiplier for the zone capacitance f_{ca} is included. A f_{ca} equaling unity represents just the capacitance of the air volume in the specified zone. This multiplier can be greater than unity if the zone air capacitance needs to be increased for stability of the simulation. This multiplier increases the capacitance of the air volume by increasing the zone volume and can be done for numerical reasons or to account for the additional capacitances in the zone to see the effect on the dynamics of the simulation. This multiplier is constant throughout the simulation and is set to 5.0 if the value is not defined <a href=\"IDEAS.Buildings.UsersGuide.References\">[Masy 2008]</a>.</p>
<p>The exchange of longwave radiation in a zone has been previously described in the building component models and further considering the heat balance of the interior surface. Here, an expression based on <i>radiant interchange configuration factors</i> or <i>view factors</i> is avoided based on a delta-star transformation and by definition of a <i>radiant star temperature</i> T_{rs}. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. ThisT_{rs} can be derived from the law of energy conservation in the radiant star node as sum(Q_{si,rs}) must equal zero. Long wave radiation from internal sources are dealt with by including them in the heat balance of the radiant star node resulting in a diffuse distribution of the radiative source.</p>
<p>Transmitted shortwave solar radiation is distributed over all surfaces in the zone in a prescribed scale. This scale is an input value which may be dependent on the shape of the zone and the location of the windows, but literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>By means of the <code>BESTEST.mo</code> examples in the <code>Validation.mo</code> package.</p>
</html>"),Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
                  100,100}}), graphics));
      end Zone;

      package Shading "Shadeing devices for windows"
      extends Modelica.Icons.Package;

        model None "No solar shadeing"
          extends IDEAS.Buildings.Components.Interfaces.StateShading(controled=false);

        equation
          connect(solDir, iSolDir) annotation (Line(
              points={{-60,50},{40,50}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDif, iSolDif) annotation (Line(
              points={{-60,10},{40,10}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angInc, iAngInc) annotation (Line(
              points={{-60,-50},{-16,-50},{-16,-70},{40,-70}},
              color={0,0,127},
              smooth=Smooth.None));
          annotation (Diagram(graphics));
        end None;
      end Shading;

      package Interfaces "Building component interfaces"
      extends Modelica.Icons.InterfacesPackage;

        partial model StateZone "Partial model for thermal building zones"

          parameter Integer nSurf(min=1)
          "Number of surfaces adjacent to and heat exchangeing with the zone";
          outer IDEAS.SimInfoManager sim
          "Simulation information manager for climate data"
            annotation (Placement(transformation(extent={{-100,80},{-80,100}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b gainRad
          "Internal zone node for radiative heat gains"
            annotation (Placement(transformation(extent={{90,-70},{110,-50}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a gainCon
          "Internal zone node for convective heat gains"
            annotation (Placement(transformation(extent={{90,-40},{110,-20}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[nSurf] surfCon
          "Convective heat transfer of surfaces adjacent to the zone"
            annotation (Placement(transformation(extent={{-110,-40},{-90,-20}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[nSurf] surfRad
          "Longwave radiative heat transfer of surfaces adjacent to the zone"
            annotation (Placement(transformation(extent={{-110,-70},{-90,-50}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDir
          "Shortwave solar heat gains by direct irradiation"
            annotation (Placement(transformation(extent={{-30,-110},{-10,-90}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDif
          "Shortwave solar heat gains by diffuse irradiation"
            annotation (Placement(transformation(extent={{10,-110},{30,-90}})));
          Modelica.Blocks.Interfaces.RealOutput TSensor
          "Sensor temperature of the zone, i.e. operative temeprature"   annotation (
              Placement(transformation(extent={{96,-10},{116,10}}), iconTransformation(
                  extent={{96,-10},{116,10}})));
          PropsBus[nSurf] propsBus annotation (Placement(transformation(
                extent={{-20,20},{20,-20}},
                rotation=-90,
                origin={-100,40}), iconTransformation(
                extent={{-20,20},{20,-20}},
                rotation=-90,
                origin={-100,40})));
          annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                    -100},{100,100}}), graphics), Icon(coordinateSystem(
                  preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
                Rectangle(
                  extent={{-90,90},{90,-90}},
                  pattern=LinePattern.None,
                  fillColor={175,175,175},
                  fillPattern=FillPattern.Backward,
                  lineColor={0,0,0}),
                Rectangle(
                  extent={{68,70},{-68,-70}},
                  pattern=LinePattern.None,
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid,
                  lineColor={0,0,0},
                  lineThickness=0.5),
                Line(
                  points={{-68,70},{68,70}},
                  color={0,0,0},
                  thickness=0.5,
                  smooth=Smooth.None),
                Rectangle(
                  extent={{-40,-70},{40,-90}},
                  lineThickness=0.5,
                  pattern=LinePattern.None,
                  lineColor={0,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{-40,-90},{68,22},{68,-42},{40,-70},{40,-90},{-40,-90},{-40,-90}},
                  lineThickness=0.5,
                  smooth=Smooth.None,
                  fillColor={255,255,170},
                  fillPattern=FillPattern.Solid,
                  pattern=LinePattern.None),
                Line(
                  points={{-68,70},{-68,-70},{-40,-70},{-40,-80},{40,-80},{40,-70},{68,
                      -70},{68,70}},
                  color={0,0,0},
                  smooth=Smooth.None,
                  thickness=0.5),
                Text(
                  extent={{-39,40},{39,-40}},
                  lineColor={0,0,0},
                  fontName="Calibri",
                  origin={-2,3},
                  rotation=0,
                  textString="%name")}));

        end StateZone;

        partial model StateWall
        "Partial model for building envelope components"

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a surfCon_a
          "Convective surface node"
            annotation (Placement(transformation(extent={{40,-40},{60,-20}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b surfRad_a
          "Radiative surface node"
            annotation (Placement(transformation(extent={{40,-70},{60,-50}})));
          outer IDEAS.SimInfoManager sim
          "Simulation information manager for climate data"
            annotation (Placement(transformation(extent={{30,-100},{50,-80}})));
          PropsBus propsBus_a annotation (Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={50,40}), iconTransformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={50,40})));
          annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
                    -100},{100,100}}), graphics), Icon(coordinateSystem(
                  preserveAspectRatio=false, extent={{-50,-100},{50,100}}), graphics));

        end StateWall;

        partial model StateShading "Window shading"

          parameter Boolean controled=true;

          parameter Modelica.SIunits.Angle azi "window azimuth";

          Modelica.Blocks.Interfaces.RealInput solDir
          "direct solar illuminance on surface se"   annotation (Placement(
                transformation(extent={{-80,30},{-40,70}}), iconTransformation(extent={
                    {-60,50},{-40,70}})));
          Modelica.Blocks.Interfaces.RealInput solDif
          "diffuse solar illuminance on surface s"   annotation (Placement(
                transformation(extent={{-80,-10},{-40,30}}), iconTransformation(extent=
                    {{-60,10},{-40,30}})));
          Modelica.Blocks.Interfaces.RealInput angZen "angle of incidence" annotation (
              Placement(transformation(extent={{-80,-90},{-40,-50}}),
                iconTransformation(extent={{-60,-70},{-40,-50}})));
          Modelica.Blocks.Interfaces.RealOutput iSolDir
          "direct solar illuminance on surface se"   annotation (Placement(
                transformation(extent={{20,30},{60,70}}), iconTransformation(extent={{
                    40,50},{60,70}})));
          Modelica.Blocks.Interfaces.RealOutput iSolDif
          "diffuse solar illuminance on surface s"   annotation (Placement(
                transformation(extent={{20,-10},{60,30}}), iconTransformation(extent={{
                    40,10},{60,30}})));
          Modelica.Blocks.Interfaces.RealOutput iAngInc
          "angle of incidence after transmittance through shading (or not)"
            annotation (Placement(transformation(extent={{20,-90},{60,-50}}),
                iconTransformation(extent={{40,-70},{60,-50}})));

          Modelica.Blocks.Interfaces.RealInput angInc "angle of incidence" annotation (
              Placement(transformation(extent={{-80,-70},{-40,-30}}),
                iconTransformation(extent={{-60,-50},{-40,-30}})));
          Modelica.Blocks.Interfaces.RealInput angAzi "angle of incidence" annotation (
              Placement(transformation(extent={{-80,-110},{-40,-70}}),
                iconTransformation(extent={{-60,-90},{-40,-70}})));
          Modelica.Blocks.Interfaces.RealInput Ctrl if controled
          "Control signal between 0 and 1, i.e. 1 is fully closed"   annotation (
              Placement(transformation(
                extent={{20,-20},{-20,20}},
                rotation=-90,
                origin={-10,-110}), iconTransformation(
                extent={{-10,-10},{10,10}},
                rotation=-90,
                origin={0,-100})));
          annotation (Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,
                    -100},{100,100}}), graphics), Icon(coordinateSystem(
                  preserveAspectRatio=true, extent={{-50,-100},{50,100}}), graphics={
                Polygon(
                  points={{-50,80},{0,60},{4,60},{4,-20},{-50,0},{-50,80}},
                  smooth=Smooth.None,
                  pattern=LinePattern.None,
                  fillColor={255,255,170},
                  fillPattern=FillPattern.Solid,
                  lineColor={0,0,0}),
                Polygon(
                  points={{4,40},{50,20},{50,-32},{20,-20},{4,-20},{4,40}},
                  smooth=Smooth.None,
                  pattern=LinePattern.None,
                  fillColor={179,179,179},
                  fillPattern=FillPattern.Solid,
                  lineColor={0,0,0}),
                Line(
                  points={{0,60},{20,60},{20,80},{50,80}},
                  color={95,95,95},
                  smooth=Smooth.None),
                Line(
                  points={{0,-20},{20,-20},{20,-70},{20,-70},{50,-70}},
                  color={95,95,95},
                  smooth=Smooth.None),
                Line(
                  points={{0,60},{0,66},{0,100},{50,100}},
                  color={95,95,95},
                  smooth=Smooth.None),
                Line(
                  points={{0,-20},{0,-90},{50,-90}},
                  color={95,95,95},
                  smooth=Smooth.None),
                Line(
                  points={{4,60},{4,-20}},
                  color={0,0,0},
                  thickness=0.5,
                  smooth=Smooth.None)}));
        end StateShading;

        expandable connector PropsBus "Bus to transfer wall properties"
          extends Modelica.Icons.SignalBus;

          Modelica.SIunits.Area area;
          Modelica.SIunits.Emissivity epsLw;
          Modelica.SIunits.Emissivity epsSw;

        end PropsBus;
      end Interfaces;

      package BaseClasses
      extends Modelica.Icons.BasesPackage;

        model HeatRadiation "radiative heat exchange between two temperatures"

          input Real R "heat resistance for longwave radiative heat exchange";

          parameter Boolean linear=true;

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.SIunits.TemperatureDifference dT=port_a.T - port_b.T;

        equation
          port_a.Q_flow = -port_b.Q_flow;

          if linear then
            port_a.Q_flow = 0.8*5.67*dT/R;
          else
            port_a.Q_flow = Modelica.Constants.sigma/R*dT*(port_a.T + port_b.T)*(port_a.T
              ^2 + port_b.T^2);

          end if;
          annotation (Icon(graphics={Line(points={{-40,10},{40,10}}, color={191,0,0}),
                  Line(points={{-40,10},{-30,16}}, color={191,0,0}),Line(points={{-40,
                  10},{-30,4}}, color={191,0,0}),Line(points={{-40,-10},{40,-10}},
                  color={191,0,0}),Line(points={{30,-16},{40,-10}}, color={191,0,0}),
                  Line(points={{30,-4},{40,-10}}, color={191,0,0}),Line(points={{-40,-30},
                  {40,-30}}, color={191,0,0}),Line(points={{-40,-30},{-30,-24}}, color=
                  {191,0,0}),Line(points={{-40,-30},{-30,-36}}, color={191,0,0}),Line(
                  points={{-40,30},{40,30}}, color={191,0,0}),Line(points={{30,24},{40,
                  30}}, color={191,0,0}),Line(points={{30,36},{40,30}}, color={191,0,0}),
                  Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5),Rectangle(
                  extent={{90,80},{60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),Line(
                  points={{60,80},{60,-80}},
                  color={0,0,0},
                  thickness=0.5)}), Documentation(info="<html>
<p>Basic implementation of Stefan Boltzmanns law for radiation.</p>
</html>"));
        end HeatRadiation;

        model MixedAir "Mixed air capacity of the thermal zone"

          parameter Integer nSurf(min=1)
          "number of surfaces in contact with the zone";
          parameter Modelica.SIunits.Volume V "air volume of the zone";
          parameter Real corrCV=5 "correction factor on the zone air capacity";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a conGain
          "convective internal gains"
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[nSurf] conSurf
          "convective gains on surfaces"
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.Blocks.Interfaces.RealOutput TCon
          "convective zone temperature"
            annotation (Placement(transformation(
                extent={{20,-20},{-20,20}},
                rotation=90,
                origin={0,-100})));
          Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor TiSensor annotation (
              Placement(transformation(
                extent={{-10,-10},{10,10}},
                rotation=-90,
                origin={0,-30})));
          Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCap(C=1012*1.204*V
                *corrCV, T(start=293.15)) "air capacity"
            annotation (Placement(transformation(extent={{-10,0},{10,20}})));
        equation
          for i in 1:nSurf loop
            connect(heatCap.port, conSurf[i]) annotation (Line(
                points={{0,0},{100,0}},
                color={191,0,0},
                pattern=LinePattern.None,
                smooth=Smooth.None));
          end for;
          connect(conGain, heatCap.port) annotation (Line(
              points={{-100,0},{0,0}},
              color={191,0,0},
              pattern=LinePattern.None,
              smooth=Smooth.None));

          connect(heatCap.port, TiSensor.port) annotation (Line(
              points={{0,0},{0,2},{1.98721e-022,2},{1.98721e-022,-20},{1.83697e-015,-20}},
              color={191,0,0},
              pattern=LinePattern.None,
              smooth=Smooth.None));

          connect(TiSensor.T, TCon) annotation (Line(
              points={{-1.83697e-015,-40},{0,-40},{0,-100}},
              color={0,0,127},
              pattern=LinePattern.None,
              smooth=Smooth.None));
          annotation (
            Diagram(graphics),
            Icon(graphics={
                Polygon(
                  points={{0,83},{-20,79},{-40,73},{-52,59},{-58,51},{-68,41},{-72,29},
                      {-76,15},{-78,1},{-76,-15},{-76,-27},{-76,-37},{-70,-49},{-64,-57},
                      {-48,-61},{-30,-67},{-18,-67},{-2,-69},{8,-73},{22,-73},{32,-71},
                      {42,-65},{54,-59},{56,-57},{66,-45},{68,-37},{70,-35},{72,-19},{
                      76,-5},{78,3},{78,19},{74,31},{66,41},{54,49},{44,57},{36,73},{26,
                      81},{0,83}},
                  lineColor={160,160,164},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Solid),
                Polygon(
                  points={{-58,51},{-68,41},{-72,29},{-76,15},{-78,1},{-76,-15},{-76,-27},
                      {-76,-37},{-70,-49},{-64,-57},{-48,-61},{-30,-67},{-18,-67},{-2,-69},
                      {8,-73},{22,-73},{32,-71},{42,-65},{54,-59},{42,-61},{40,-61},{30,
                      -63},{20,-65},{18,-65},{10,-65},{2,-61},{-12,-57},{-22,-57},{-30,
                      -55},{-40,-49},{-50,-39},{-56,-27},{-58,-19},{-58,-9},{-60,3},{-60,
                      11},{-60,23},{-58,33},{-56,35},{-52,43},{-48,51},{-44,61},{-40,73},
                      {-58,51}},
                  lineColor={0,0,0},
                  fillColor={160,160,164},
                  fillPattern=FillPattern.Solid),
                Ellipse(
                  extent={{-6,15},{6,4}},
                  lineColor={0,0,127},
                  fillColor={0,0,127},
                  fillPattern=FillPattern.Solid,
                  lineThickness=0.5),
                Text(
                  extent={{11,29},{50,-9}},
                  lineColor={0,0,0},
                  textString="T"),
                Line(points={{0,4},{0,-80}}, color={0,0,127})}),
            Documentation(info="<html>
<p>The air within the zone is modeled based on the assumption that it is well-stirred, i.e. it is characterized by a single uniform air temperature. This is practically accomplished with the mixing caused by the air distribution system. The convective gains and the resulting change in air temperature <img src=\"modelica://IDEAS/Images/equations/equation-ps2Eq199.png\"/> of a single thermal zone can be modeled as a thermal circuit. The resulting heat balance for the air node can be described as</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-5E7Q41vV.png\"/></p>
<p>wherefore <img src=\"modelica://IDEAS/Images/equations/equation-jiSQ22c0.png\"/> is the specific air enthalpy and where <img src=\"modelica://IDEAS/Images/equations/equation-WIlQpAg5.png\"/> is the air temperature of the zone, <img src=\"modelica://IDEAS/Images/equations/equation-h7Dz77UJ.png\"/> is the specific heat capacity of air at constant pressure, <img src=\"modelica://IDEAS/Images/equations/equation-x4LHc8Qp.png\"/> is the zone air volume, <img src=\"modelica://IDEAS/Images/equations/equation-7maZgvq7.png\"/> is a convective internal load, <img src=\"modelica://IDEAS/Images/equations/equation-NZR0rJFG.png\"/> is the convective surface resistance of surface <img src=\"modelica://IDEAS/Images/equations/equation-bvc5hZ2Y.png\"/>,<img src=\"modelica://IDEAS/Images/equations/equation-ujUu9oii.png\"/> is the area of surface<img src=\"modelica://IDEAS/Images/equations/equation-PRmDSqgy.png\"/>, <img src=\"modelica://IDEAS/Images/equations/equation-LwXKbxRC.png\"/> the surface temperature of surface <img src=\"modelica://IDEAS/Images/equations/equation-cTp9P38I.png\"/>, <img src=\"modelica://IDEAS/Images/equations/equation-94Yf3BLu.png\"/> is the mass flow rate between zones, <img src=\"modelica://IDEAS/Images/equations/equation-Cwfjkj5R.png\"/> is the mass flow rate between the exterior by natural infiltration,<img src=\"modelica://IDEAS/Images/equations/equation-ZgcYnSGu.png\"/> is the mass flow rate provided by the ventilation system, <img src=\"modelica://IDEAS/Images/equations/equation-pCXdHoAS.png\"/> is the air temperature in degrees Celsius, <img src=\"modelica://IDEAS/Images/equations/equation-QSo9JTGT.png\"/> is the air humidity ratio, <img src=\"modelica://IDEAS/Images/equations/equation-zntTkmwk.png\"/> is specific heat of water vapor at constant pressure and <img src=\"modelica://IDEAS/Images/equations/equation-ZjHIP8wZ.png\"/> is evaporation heat of water at 0 degrees Celsius. </p>
<p>Infiltration and ventilation systems provide air to the zones, undesirably or to meet heating or cooling loads. The thermal energy provided to the zone by this air change rate can be formulated from the difference between the supply air enthalpy and the enthalpy of the air leaving the zone <img src=\"modelica://IDEAS/Images/equations/equation-jiSQ22c0.png\"/>. It is assumed that the zone supply air mass flow rate is exactly equal to the sum of the air flow rates leaving the zone, and all air streams exit the zone at the zone mean air temperature. The moisture dependence of the air enthalpy is neglected.</p>
<p>A multiplier for the zone capacitance <img src=\"modelica://IDEAS/Images/equations/equation-BsmTOKms.png\"/> is included. A <img src=\"modelica://IDEAS/Images/equations/equation-BsmTOKms.png\"/> equaling unity represents just the capacitance of the air volume in the specified zone. This multiplier can be greater than unity if the zone air capacitance needs to be increased for stability of the simulation. This multiplier increases the capacitance of the air volume by increasing the zone volume and can be done for numerical reasons or to account for the additional capacitances in the zone to see the effect on the dynamics of the simulation. This multiplier is constant throughout the simulation and is set to 5.0 if the value is not defined <a href=\"IDEAS.Buildings.UsersGuide.References\">[Masy 2008]</a>.</p>
</html>"));
        end MixedAir;

        model ZoneLwGainDistribution "distribution of radiative internal gains"

          parameter Integer nSurf(min=1)
          "number of surfaces in contact with the zone";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDir
          "direct solar radiation gains recieved through windows"
            annotation (Placement(transformation(extent={{-110,30},{-90,50}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDif
          "difuse solar radiation gains recieved through windows"
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a radGain
          "longwave internal gains"
            annotation (Placement(transformation(extent={{-110,-48},{-90,-28}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[nSurf] radSurfTot
          "total recieved radiation by surface"
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.Blocks.Interfaces.RealOutput TRad
          "radiative zonetemperature"
            annotation (Placement(transformation(
                extent={{20,-20},{-20,20}},
                rotation=90,
                origin={0,-100})));

          Modelica.Blocks.Interfaces.RealInput[nSurf] epsLw
          "longwave surface emissivities"   annotation (Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={0,100})));
          Modelica.Blocks.Interfaces.RealInput[nSurf] epsSw
          "shortwave surface emissivities"   annotation (Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={-40,100})));
          Modelica.Blocks.Interfaces.RealInput[nSurf] area "surface areas" annotation (
              Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={40,100})));

      protected
          Real[nSurf] areaAbsDifSol=area .* epsSw
          "longwave emissivity weighted areas";
          Real areaAbsDifTotSol=sum(areaAbsDifSol)
          "sum of longwave emissivity weighted areas";
          Real[nSurf] areaAbsGain=area .* epsLw
          "shortwave emissivity weighted areas";
          Real areaAbsTotGain=sum(areaAbsGain)
          "sum of shortwave emissivity weighted areas";

          Real[nSurf] weightFactorDir = 0.96 * area ./ (ones(nSurf)*sum(area))
          "weightfactor for received direct shortwave solar radiation";
          Real[nSurf] weightFactorDif = 0.96 * areaAbsDifSol ./ (ones(nSurf)*areaAbsDifTotSol)
          "weightfactor for received direct shortwave solar radiation";
          Real[nSurf] weightFactorGain = areaAbsGain ./ (ones(nSurf)*areaAbsTotGain)
          "weightfactor for received direct shortwave solar radiation";

        equation
          for k in 1:nSurf loop
            radSurfTot[k].Q_flow = -weightFactorDif[k]*iSolDif.Q_flow -
              weightFactorDir[k]*iSolDir.Q_flow - weightFactorGain[k]*radGain.Q_flow;
          end for;

          TRad = sum(radSurfTot.T .* area/sum(area));

          iSolDir.T = 273.15;
          iSolDif.T = 273.15;
          radGain.T = TRad;

          annotation (
            Diagram(graphics),
            Icon(graphics={
                Line(points={{-40,10},{40,10}}, color={191,0,0}),
                Line(points={{-40,10},{-30,16}}, color={191,0,0}),
                Line(points={{-40,10},{-30,4}}, color={191,0,0}),
                Line(points={{-40,-10},{40,-10}}, color={191,0,0}),
                Line(points={{30,-16},{40,-10}}, color={191,0,0}),
                Line(points={{30,-4},{40,-10}}, color={191,0,0}),
                Line(points={{-40,-30},{40,-30}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-24}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-36}}, color={191,0,0}),
                Line(points={{-40,30},{40,30}}, color={191,0,0}),
                Line(points={{30,24},{40,30}}, color={191,0,0}),
                Line(points={{30,36},{40,30}}, color={191,0,0}),
                Rectangle(
                  extent={{-15,80},{15,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None,
                  origin={9,66},
                  rotation=90),
                Rectangle(
                  extent={{90,80},{60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{-70,50},{60,50},{60,-80}},
                  color={0,0,0},
                  thickness=0.5,
                  smooth=Smooth.None)}),
            Documentation(info="<html>
<p>The exchange of longwave radiation in a zone has been previously described in the building component models and further considering the heat balance of the interior surface. Here, an expression based on <i>radiant interchange configuration factors</i> or <i>view factors</i> is avoided based on a delta-star transformation and by definition of a <i>radiant star temperature</i> <img src=\"modelica://IDEAS/Images/equations/equation-rE4hQkmG.png\"/>. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. This <img src=\"modelica://IDEAS/Images/equations/equation-rE4hQkmG.png\"/> can be derived from the law of energy conservation in the radiant star node as <img src=\"modelica://IDEAS/Images/equations/equation-iH8dRZqh.png\"/> must equal zero. Long wave radiation from internal sources are dealt with by including them in the heat balance of the radiant star node resulting in a diffuse distribution of the radiative source.</p>
</html>"));
        end ZoneLwGainDistribution;

        model ZoneLwDistribution "internal longwave radiative heat exchange"

          parameter Integer nSurf(min=1)
          "number of surfaces in contact with the zone";

          parameter Boolean linear=true;

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[nSurf] port_a
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          IDEAS.Buildings.Components.BaseClasses.HeatRadiation[nSurf] radRes(R=R, each
              linear=linear);

          Modelica.Blocks.Interfaces.RealInput[nSurf] A "surface areas" annotation (
              Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={40,100})));
          Modelica.Blocks.Interfaces.RealInput[nSurf] epsLw
          "longwave surface emissivities"   annotation (Placement(transformation(
                extent={{-20,-20},{20,20}},
                rotation=-90,
                origin={0,100})));

      protected
          Real[nSurf] F=A ./ (ones(nSurf)*sum(A) - A) "view factor per surface";
          Real[nSurf] R=(ones(nSurf) - epsLw) ./ (A .* epsLw) + (ones(nSurf) - F) ./ A
          "heat resistance for logwave radiative heat exchange";

        equation
          for i in 1:nSurf loop
            connect(radRes[i].port_b, port_a[i]);
          end for;

          for i in 1:nSurf - 1 loop
            connect(radRes[i].port_a, radRes[i + 1].port_a);
          end for;

          annotation (
            Diagram(graphics),
            Icon(graphics={
                Rectangle(
                  extent={{-90,80},{90,-80}},
                  pattern=LinePattern.None,
                  fillColor={175,175,175},
                  fillPattern=FillPattern.Backward,
                  lineColor={0,0,0}),
                Rectangle(
                  extent={{68,60},{-68,-60}},
                  pattern=LinePattern.None,
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid,
                  lineColor={0,0,0},
                  lineThickness=0.5),
                Line(points={{-40,10},{40,10}}, color={191,0,0}),
                Line(points={{-40,10},{-30,16}}, color={191,0,0}),
                Line(points={{-40,10},{-30,4}}, color={191,0,0}),
                Line(points={{-40,-10},{40,-10}}, color={191,0,0}),
                Line(points={{30,-16},{40,-10}}, color={191,0,0}),
                Line(points={{30,-4},{40,-10}}, color={191,0,0}),
                Line(points={{-40,-30},{40,-30}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-24}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-36}}, color={191,0,0}),
                Line(points={{-40,30},{40,30}}, color={191,0,0}),
                Line(points={{30,24},{40,30}}, color={191,0,0}),
                Line(points={{30,36},{40,30}}, color={191,0,0}),
                Line(
                  points={{-68,60},{68,60}},
                  color={0,0,0},
                  thickness=0.5,
                  smooth=Smooth.None),
                Line(
                  points={{68,60},{68,-60},{-68,-60},{-68,60}},
                  color={0,0,0},
                  thickness=0.5,
                  smooth=Smooth.None)}),
            Documentation(info="<html>
<p>The exchange of longwave radiation in a zone has been previously described in the building component models and further considering the heat balance of the interior surface. Here, an expression based on <i>radiant interchange configuration factors</i> or <i>view factors</i> is avoided based on a delta-star transformation and by definition of a <i>radiant star temperature</i> <img src=\"modelica://IDEAS/Images/equations/equation-rE4hQkmG.png\"/>. Literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption. This <img src=\"modelica://IDEAS/Images/equations/equation-rE4hQkmG.png\"/> can be derived from the law of energy conservation in the radiant star node as <img src=\"modelica://IDEAS/Images/equations/equation-iH8dRZqh.png\"/> must equal zero. Long wave radiation from internal sources are dealt with by including them in the heat balance of the radiant star node resulting in a diffuse distribution of the radiative source.</p>
</html>"));
        end ZoneLwDistribution;

        model AirLeakage "air leakage due to limied air tightness"

          parameter Modelica.SIunits.Volume V "zone air volume";
          parameter Real n50=0 "n50-value of airtightness";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          outer IDEAS.SimInfoManager sim "Simulation information manager"
            annotation (Placement(transformation(extent={{-100,80},{-80,100}})));

        equation
          port_a.Q_flow = (port_a.T - sim.Te)*1012*1.204*V/3600*n50/20;

          annotation (Icon(graphics={
                Line(points={{-30,80},{-30,-80}}, color={0,127,255}),
                Line(points={{-30,-80},{-40,-60}}, color={0,127,255}),
                Line(points={{-30,-80},{-20,-60}}, color={0,127,255}),
                Line(points={{10,-80},{0,-60}}, color={0,127,255}),
                Line(points={{10,80},{10,-80}}, color={0,127,255}),
                Line(points={{10,-80},{20,-60}},color={0,127,255}),
                Line(points={{44,-80},{34,-60}}, color={0,127,255}),
                Line(points={{44,80},{44,-80}}, color={0,127,255}),
                Line(points={{44,-80},{54,-60}}, color={0,127,255}),
                Line(points={{80,-80},{70,-60}}, color={0,127,255}),
                Line(points={{80,80},{80,-80}}, color={0,127,255}),
                Line(points={{80,-80},{90,-60}}, color={0,127,255}),
                Line(points={{-60,-80},{-70,-60}}, color={0,127,255}),
                Line(points={{-60,80},{-60,-80}}, color={0,127,255}),
                Line(points={{-60,-80},{-50,-60}}, color={0,127,255})}));
        end AirLeakage;

        model AngleOfIncidence "angle of incidence"

          Modelica.Blocks.Interfaces.RealInput angInc
          "angle of incidence in radians"
            annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));
          Modelica.Blocks.Interfaces.RealOutput angIncDeg
          "angle of incidence in degrees for lookup table"
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

        algorithm
          angIncDeg := Modelica.SIunits.Conversions.to_deg(angInc);

        end AngleOfIncidence;

        model MonoLayerLucent "single non-opaque layer"

          parameter Modelica.SIunits.Area A "surface area";
          parameter IDEAS.Buildings.Data.Interfaces.Material mat "material";
          parameter Modelica.SIunits.Angle inc "inclination";

          parameter Modelica.SIunits.Emissivity epsLw_a=mat.epsLw_a
          "longwave emissivity on exterior side";
          parameter Modelica.SIunits.Emissivity epsLw_b=mat.epsLw_b
          "longwave emissivity on interior side";

          final parameter Real R=mat.R "Total specific thermal resistance";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_gain
          "port for gains by embedded active layers"
            annotation (Placement(transformation(extent={{-10,90},{10,110}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

      protected
          parameter Real h=mat.k/mat.d "conductance";

          /*
  The effective Nusselt nuber is to be calculated as :
  
  Real beta=1/((port_a.T + port_b.T)/2) 
    "thermal expansion coefficient of the mterial, if a gas";
  Real Gr=if mat.gas then 9.81*beta*(mat.rho^2)*(mat.d^3)/(mat.mhu^2)*abs(
      port_a.T - port_b.T) else 0 "Grrashof number";
  Real Nu = if mat.gas then IDEAS.BaseClasses.Math.MaxSmooth(1,0.0384*abs(Gr)^(0.37),0.01) else 1 
    "Nusselt number";
  Real h =  mat.k/mat.d*Nu;

  But no influence is found on the results of the simulation, whereas removing this equation and 
  setting Nu equal to 1 speeds up the simuation significantly (eg. by 30 per cent)
*/

        equation
          port_gain.T = 293.15;
          port_a.Q_flow + port_b.Q_flow + port_gain.Q_flow = 0
          "no heat is stored";

          if mat.gas then
            port_a.Q_flow = A*h*(port_a.T - port_b.T) + A*Modelica.Constants.sigma*(1/(
              (1/epsLw_a) + (1/epsLw_b) - 1))*(port_a.T^4 - port_b.T^4);
          else
            port_a.Q_flow = A*h*(port_a.T - port_b.T);
          end if;

          annotation (
            Diagram(graphics),
            Icon(graphics={Rectangle(
                  extent={{-90,80},{90,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),Text(
                  extent={{-150,113},{150,73}},
                  textString="%name",
                  lineColor={0,0,255})}),
            Documentation(info="<html>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-pqp0E04K.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-I7KXJhSH.png\"/> is the added energy to the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-B0HPmGTu.png\"/> is the temperature of the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-t7aqbnLB.png\"/> is the thermal capacity of the lumped capacity equal to<img src=\"modelica://IDEAS/Images/equations/equation-JieDs0oi.png\"/> for which rho denotes the density and <img src=\"modelica://IDEAS/Images/equations/equation-ml5CM4zK.png\"/> is the specific heat capacity of the material and <img src=\"modelica://IDEAS/Images/equations/equation-hOGNA6h5.png\"/> the equivalent thickness of the lumped element, where <img src=\"modelica://IDEAS/Images/equations/equation-1pDREAb7.png\"/> the heat flux through the lumped resistance and <img src=\"modelica://IDEAS/Images/equations/equation-XYf3O3hw.png\"/> is the total thermal resistance of the lumped resistance and where <img src=\"modelica://IDEAS/Images/equations/equation-dgS5sGAN.png\"/> are internal thermal source.</p>
</html>"));
        end MonoLayerLucent;

        model MonoLayerOpaque "single material layer"

          parameter Modelica.SIunits.Area A "Layer area";
          parameter IDEAS.Buildings.Data.Interfaces.Material mat
          "Layer material";
          parameter Modelica.SIunits.Angle inc "Inclination";

          parameter Modelica.SIunits.Temperature TStart=289.15
          "Start temperature for each of the states";

          final parameter Integer nSta=mat.nSta;
          final parameter Integer nFlo=mat.nSta + 1;
          final parameter Real R=mat.R "Total specific thermal resistance";
          final parameter Modelica.SIunits.ThermalConductance G=(A*mat.k*nSta)/mat.d;
          final parameter Modelica.SIunits.HeatCapacity C=(A*mat.rho*mat.c*mat.d)/nSta;

      public
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=TStart))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=TStart))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.SIunits.Temperature[nSta] T(start=ones(nSta)*TStart)
          "Temperature at the states";
          Modelica.SIunits.HeatFlowRate[nFlo] Q_flow
          "Heat flow rate from state i to i+1";

        equation
          // connectors
          port_a.Q_flow = +Q_flow[1];
          port_b.Q_flow = -Q_flow[nFlo];

          // edge resistances
          port_a.T - T[1] = Q_flow[1]/(G*2);
          T[nSta] - port_b.T = Q_flow[nSta + 1]/(G*2);

          // Q_flow[i] is heat flowing from (i-1) to (i)
          for i in 2:nSta loop
            T[i - 1] - T[i] = Q_flow[i]/G;
          end for;

          // Heat storages in the masses
          for i in 1:nSta loop
            der(T[i]) = (Q_flow[i] - Q_flow[i + 1])/C;
          end for;

          annotation (
            Diagram(graphics),
            Icon(graphics={Rectangle(
                  extent={{-90,80},{90,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),Text(
                  extent={{-150,113},{150,73}},
                  textString="%name",
                  lineColor={0,0,255}),Ellipse(
                  extent={{-40,-42},{40,38}},
                  lineColor={127,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),Text(
                  extent={{-39,40},{39,-40}},
                  lineColor={127,0,0},
                  fontName="Calibri",
                  origin={0,-1},
                  rotation=90,
                  textString="S")}),
            Documentation(info="<html>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-pqp0E04K.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-I7KXJhSH.png\"/> is the added energy to the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-B0HPmGTu.png\"/> is the temperature of the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-t7aqbnLB.png\"/> is the thermal capacity of the lumped capacity equal to<img src=\"modelica://IDEAS/Images/equations/equation-JieDs0oi.png\"/> for which rho denotes the density and <img src=\"modelica://IDEAS/Images/equations/equation-ml5CM4zK.png\"/> is the specific heat capacity of the material and <img src=\"modelica://IDEAS/Images/equations/equation-hOGNA6h5.png\"/> the equivalent thickness of the lumped element, where <img src=\"modelica://IDEAS/Images/equations/equation-1pDREAb7.png\"/> the heat flux through the lumped resistance and <img src=\"modelica://IDEAS/Images/equations/equation-XYf3O3hw.png\"/> is the total thermal resistance of the lumped resistance and where <img src=\"modelica://IDEAS/Images/equations/equation-dgS5sGAN.png\"/> are internal thermal source.</p>
</html>"));
        end MonoLayerOpaque;

        model MultiLayerLucent "multiple non-opaque layers"

          parameter Modelica.SIunits.Area A "surface area";
          parameter Modelica.SIunits.Angle inc "inclination";
          parameter Integer nLay(min=1) "input: number of layers";
          parameter IDEAS.Buildings.Data.Interfaces.Material mats[nLay] "input";

          final parameter Real R=sum(nMat.R)
          "total specific thermal resistance";

          IDEAS.Buildings.Components.BaseClasses.MonoLayerLucent[nLay] nMat(
            each final A=A,
            each final inc=inc,
            mat=mats);

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[nLay] port_gain
          "port for gains by embedded active layers"
            annotation (Placement(transformation(extent={{-10,-110},{10,-90}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsLw_b
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{90,70},{110,90}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsSw_b
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{90,30},{110,50}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsLw_a
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{-90,70},{-110,90}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsSw_a
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{-90,30},{-110,50}})));
          Modelica.Blocks.Interfaces.RealOutput area=A
          "output of the interior emissivity for radiative heat losses"   annotation (
              Placement(transformation(
                extent={{10,-10},{-10,10}},
                rotation=-90,
                origin={0,100})));
        equation
          connect(port_a, nMat[1].port_a);

          for j in 1:nLay - 1 loop
            connect(nMat[j].port_b, nMat[j + 1].port_a);
          end for;

          connect(nMat.port_gain, port_gain);
          connect(port_b, nMat[nLay].port_b);

          iEpsLw_a = mats[1].epsLw;
          iEpsSw_a = mats[1].epsSw;
          iEpsLw_b = mats[nLay].epsLw;
          iEpsSw_b = mats[nLay].epsSw;
          annotation (
            Diagram(graphics),
            Icon(graphics={
                Rectangle(
                  extent={{-90,80},{20,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Text(
                  extent={{-150,113},{150,73}},
                  textString="%name",
                  lineColor={0,0,255}),
                Rectangle(
                  extent={{20,80},{40,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Forward,
                  pattern=LinePattern.None,
                  lineColor={0,0,0}),
                Rectangle(
                  extent={{40,80},{80,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{20,80},{20,-80}},
                  pattern=LinePattern.None,
                  smooth=Smooth.None),
                Line(
                  points={{40,80},{40,-80}},
                  pattern=LinePattern.None,
                  smooth=Smooth.None),
                Ellipse(
                  extent={{-40,-42},{40,38}},
                  lineColor={127,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-39,40},{39,-40}},
                  lineColor={127,0,0},
                  fontName="Calibri",
                  origin={0,-1},
                  rotation=90,
                  textString="S")}),
            Documentation(info="<html>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-pqp0E04K.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-I7KXJhSH.png\"/> is the added energy to the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-B0HPmGTu.png\"/> is the temperature of the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-t7aqbnLB.png\"/> is the thermal capacity of the lumped capacity equal to<img src=\"modelica://IDEAS/Images/equations/equation-JieDs0oi.png\"/> for which rho denotes the density and <img src=\"modelica://IDEAS/Images/equations/equation-ml5CM4zK.png\"/> is the specific heat capacity of the material and <img src=\"modelica://IDEAS/Images/equations/equation-hOGNA6h5.png\"/> the equivalent thickness of the lumped element, where <img src=\"modelica://IDEAS/Images/equations/equation-1pDREAb7.png\"/> the heat flux through the lumped resistance and <img src=\"modelica://IDEAS/Images/equations/equation-XYf3O3hw.png\"/> is the total thermal resistance of the lumped resistance and where <img src=\"modelica://IDEAS/Images/equations/equation-dgS5sGAN.png\"/> are internal thermal source.</p>
</html>"));
        end MultiLayerLucent;

        model MultiLayerOpaque "multiple material layers in series"

          parameter Modelica.SIunits.Area A "total multilayer area";
          parameter Modelica.SIunits.Angle inc "inclination";
          parameter Integer nLay(min=1) "number of layers";
          parameter IDEAS.Buildings.Data.Interfaces.Material[nLay] mats
          "array of layer materials";
          parameter Integer locGain(min=1) "location of the internal gain";

          parameter Modelica.SIunits.Temperature[nLay] TStart=ones(nLay)*289.15
          "Start temperature for each of the layers";

          IDEAS.Buildings.Components.BaseClasses.MonoLayerOpaque[nLay] nMat(
            each final A=A,
            each final inc=inc,
            final TStart=TStart,
            final mat=mats) "layers";

          final parameter Real R=sum(nMat.R)
          "total specific thermal resistance";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_gain
          "port for gains by embedded active layers"
            annotation (Placement(transformation(extent={{-10,-110},{10,-90}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsLw_b
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{90,70},{110,90}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsSw_b
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{90,30},{110,50}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsLw_a
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{-90,70},{-110,90}})));
          Modelica.Blocks.Interfaces.RealOutput iEpsSw_a
          "output of the interior emissivity for radiative heat losses"
            annotation (Placement(transformation(extent={{-90,30},{-110,50}})));
          Modelica.Blocks.Interfaces.RealOutput area=A
          "output of the interior emissivity for radiative heat losses"   annotation (
              Placement(transformation(
                extent={{10,-10},{-10,10}},
                rotation=-90,
                origin={0,100})));
        equation
          connect(port_a, nMat[1].port_a);

          for j in 1:nLay - 1 loop
            connect(nMat[j].port_b, nMat[j + 1].port_a);
          end for;

          connect(nMat[locGain].port_b, port_gain);
          connect(port_b, nMat[nLay].port_b);

          iEpsLw_a = mats[1].epsLw;
          iEpsSw_a = mats[1].epsSw;
          iEpsLw_b = mats[nLay].epsLw;
          iEpsSw_b = mats[nLay].epsSw;

          annotation (
            Diagram(graphics),
            Icon(graphics={
                Rectangle(
                  extent={{-90,80},{20,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Text(
                  extent={{-150,113},{150,73}},
                  textString="%name",
                  lineColor={0,0,255}),
                Rectangle(
                  extent={{20,80},{40,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Forward,
                  pattern=LinePattern.None,
                  lineColor={0,0,0}),
                Rectangle(
                  extent={{40,80},{80,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{20,80},{20,-80}},
                  pattern=LinePattern.None,
                  smooth=Smooth.None),
                Line(
                  points={{40,80},{40,-80}},
                  pattern=LinePattern.None,
                  smooth=Smooth.None),
                Ellipse(
                  extent={{-40,-42},{40,38}},
                  lineColor={127,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-39,40},{39,-40}},
                  lineColor={127,0,0},
                  fontName="Calibri",
                  origin={0,-1},
                  rotation=90,
                  textString="S")}),
            Documentation(info="<html>
<p>For the purpose of dynamic building simulation, the partial differential equation of the continuous time and space model of heat transport through a solid is most often simplified into ordinary differential equations with a finite number of parameters representing only one-dimensional heat transport through a construction layer. Within this context, the wall is modeled with lumped elements, i.e. a model where temperatures and heat fluxes are determined from a system composed of a sequence of discrete resistances and capacitances R_{n+1}, C_{n}. The number of capacitive elements $n$ used in modeling the transient thermal response of the wall denotes the order of the lumped capacitance model.</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-pqp0E04K.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-I7KXJhSH.png\"/> is the added energy to the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-B0HPmGTu.png\"/> is the temperature of the lumped capacity, <img src=\"modelica://IDEAS/Images/equations/equation-t7aqbnLB.png\"/> is the thermal capacity of the lumped capacity equal to<img src=\"modelica://IDEAS/Images/equations/equation-JieDs0oi.png\"/> for which rho denotes the density and <img src=\"modelica://IDEAS/Images/equations/equation-ml5CM4zK.png\"/> is the specific heat capacity of the material and <img src=\"modelica://IDEAS/Images/equations/equation-hOGNA6h5.png\"/> the equivalent thickness of the lumped element, where <img src=\"modelica://IDEAS/Images/equations/equation-1pDREAb7.png\"/> the heat flux through the lumped resistance and <img src=\"modelica://IDEAS/Images/equations/equation-XYf3O3hw.png\"/> is the total thermal resistance of the lumped resistance and where <img src=\"modelica://IDEAS/Images/equations/equation-dgS5sGAN.png\"/> are internal thermal source.</p>
</html>"));
        end MultiLayerOpaque;

        model InteriorConvection "interior surface convection"

          parameter Modelica.SIunits.Area A "surface area";
          parameter Modelica.SIunits.Angle inc "inclination";

          parameter Boolean fixed = false
          "Fixed convective heat transfer coefficient or DT-dependent.";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));

      protected
          Modelica.SIunits.TemperatureDifference dT;
          final parameter Boolean Ceiling=abs(sin(inc)) < 10E-5 and cos(inc) > 0
          "true if ceiling";
          final parameter Boolean Floor=abs(sin(inc)) < 10E-5 and cos(inc) < 0
          "true if floor";

        equation
        if not fixed then
          if Ceiling then
            port_a.Q_flow = if noEvent(dT > 0) then max(A*1.31*abs(dT)^1.33,0.1*A*abs(dT)) else min(-A*0.76*
              abs(dT)^1.33,-A*0.1*abs(dT));
          elseif Floor then
            port_a.Q_flow = if noEvent(dT > 0) then max(A*0.76*abs(dT)^1.33,0.1*A*abs(dT)) else min(-A*1.31*
              abs(dT)^1.33,-0.1*A*abs(dT));
          else
            port_a.Q_flow = sign(dT)*max(A*1.310*abs(dT)^1.33,0.1*A*abs(dT));
          end if;
        else
          if Ceiling then
            port_a.Q_flow = if noEvent(dT > 0) then 4.040*A*dT else 0.948*A*dT;
          elseif Floor then
            port_a.Q_flow = if noEvent(dT > 0) then 0.948*A*dT else 4.040*A*dT;
          else
            port_a.Q_flow = 3.076*A*dT;
          end if;
        end if;

          port_a.Q_flow + port_b.Q_flow = 0 "no heat is stored";
          dT = port_a.T - port_b.T;

          annotation (Icon(graphics={
                Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(points={{-60,20},{76,20}}, color={191,0,0}),
                Line(points={{-34,80},{-34,-80}}, color={0,127,255}),
                Line(points={{-60,-20},{76,-20}}, color={191,0,0}),
                Line(points={{56,30},{76,20}}, color={191,0,0}),
                Line(points={{56,10},{76,20}}, color={191,0,0}),
                Line(points={{56,-10},{76,-20}}, color={191,0,0}),
                Line(points={{56,-30},{76,-20}}, color={191,0,0}),
                Line(points={{6,80},{6,-80}}, color={0,127,255}),
                Line(points={{40,80},{40,-80}}, color={0,127,255}),
                Line(points={{76,80},{76,-80}}, color={0,127,255}),
                Line(points={{-34,-80},{-44,-60}}, color={0,127,255}),
                Line(points={{-34,-80},{-24,-60}}, color={0,127,255}),
                Line(points={{6,-80},{-4,-60}}, color={0,127,255}),
                Line(points={{6,-80},{16,-60}}, color={0,127,255}),
                Line(points={{40,-80},{30,-60}}, color={0,127,255}),
                Line(points={{40,-80},{50,-60}}, color={0,127,255}),
                Line(points={{76,-80},{66,-60}}, color={0,127,255}),
                Line(points={{76,-80},{86,-60}}, color={0,127,255}),
                Text(
                  extent={{-150,-90},{150,-130}},
                  textString="%name",
                  lineColor={0,0,255}),
                Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5)}), Documentation(info="<html>
<p>The interior natural convective heat transfer coefficient <img src=\"modelica://IDEAS/Images/equations/equation-eZGZlJrg.png\"/> is computed for each interior surface as </p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-KNBSKUDK.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-W5kvS3SS.png\"/> is the characteristic length of the surface, <img src=\"modelica://IDEAS/Images/equations/equation-jhC1rqax.png\"/> is the indoor air temperature and <img src=\"modelica://IDEAS/Images/equations/equation-sbXAgHuQ.png\"/> are correlation coefficients. These parameters {<img src=\"modelica://IDEAS/Images/equations/equation-nHmmePq5.png\"/>,<img src=\"modelica://IDEAS/Images/equations/equation-zJZmNUzp.png\"/>,<img src=\"modelica://IDEAS/Images/equations/equation-7nwXbcLp.png\"/>} are identical to {1.823,-0.121,0.293} for vertical surfaces <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, {2.175,-0.076,0.308} for horizontal surfaces wherefore the heat flux is in the same direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, and {2.72,-,0.13} for horizontal surfaces wherefore the heat flux is in the opposite direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Awbi 1999]</a>. The interior natural convective heat transfer coefficient is only described as function of the temperature difference. Similar to the thermal model for heat transfer through a wall, a thermal circuit formulation for the direct radiant exchange between surfaces can be derived <a href=\"IDEAS.Buildings.UsersGuide.References\">[ Buchberg 1955, Oppenheim 1956]</a>.</p>
</html>"));
        end InteriorConvection;

        model InteriorConvectionWindow
        "interior surface convection for windows"

          parameter Modelica.SIunits.Area A "surface area";
          parameter Modelica.SIunits.Angle inc "inclination";

          parameter Boolean fixed = false
          "Fixed convective heat transfer coefficient or DT-dependent.";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b port_b(T(start=289.15))
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
          Real hcon;

      protected
          Modelica.SIunits.TemperatureDifference dT;
          final parameter Boolean Ceiling=abs(sin(inc)) < 10E-5 and cos(inc) > 0
          "true if ceiling";
          final parameter Boolean Floor=abs(sin(inc)) < 10E-5 and cos(inc) < 0
          "true if floor";

        equation
        if not fixed then
          port_a.Q_flow = sign(dT)*max(A*1.310*abs(dT)^1.33,0.1*A*abs(dT));
        else
          port_a.Q_flow = 3.076*A*dT;
        end if;

          port_a.Q_flow + port_b.Q_flow = 0 "no heat is stored";
          dT = port_a.T - port_b.T;
          hcon = port_a.Q_flow/dT;

          annotation (Icon(graphics={
                Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(points={{-60,20},{76,20}}, color={191,0,0}),
                Line(points={{-34,80},{-34,-80}}, color={0,127,255}),
                Line(points={{-60,-20},{76,-20}}, color={191,0,0}),
                Line(points={{56,30},{76,20}}, color={191,0,0}),
                Line(points={{56,10},{76,20}}, color={191,0,0}),
                Line(points={{56,-10},{76,-20}}, color={191,0,0}),
                Line(points={{56,-30},{76,-20}}, color={191,0,0}),
                Line(points={{6,80},{6,-80}}, color={0,127,255}),
                Line(points={{40,80},{40,-80}}, color={0,127,255}),
                Line(points={{76,80},{76,-80}}, color={0,127,255}),
                Line(points={{-34,-80},{-44,-60}}, color={0,127,255}),
                Line(points={{-34,-80},{-24,-60}}, color={0,127,255}),
                Line(points={{6,-80},{-4,-60}}, color={0,127,255}),
                Line(points={{6,-80},{16,-60}}, color={0,127,255}),
                Line(points={{40,-80},{30,-60}}, color={0,127,255}),
                Line(points={{40,-80},{50,-60}}, color={0,127,255}),
                Line(points={{76,-80},{66,-60}}, color={0,127,255}),
                Line(points={{76,-80},{86,-60}}, color={0,127,255}),
                Text(
                  extent={{-150,-90},{150,-130}},
                  textString="%name",
                  lineColor={0,0,255}),
                Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5)}), Documentation(info="<html>
<p>The interior natural convective heat transfer coefficient <img src=\"modelica://IDEAS/Images/equations/equation-eZGZlJrg.png\"/> is computed for each interior surface as </p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-KNBSKUDK.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-W5kvS3SS.png\"/> is the characteristic length of the surface, <img src=\"modelica://IDEAS/Images/equations/equation-jhC1rqax.png\"/> is the indoor air temperature and <img src=\"modelica://IDEAS/Images/equations/equation-sbXAgHuQ.png\"/> are correlation coefficients. These parameters {<img src=\"modelica://IDEAS/Images/equations/equation-nHmmePq5.png\"/>,<img src=\"modelica://IDEAS/Images/equations/equation-zJZmNUzp.png\"/>,<img src=\"modelica://IDEAS/Images/equations/equation-7nwXbcLp.png\"/>} are identical to {1.823,-0.121,0.293} for vertical surfaces <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, {2.175,-0.076,0.308} for horizontal surfaces wherefore the heat flux is in the same direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Khalifa 2001]</a>, and {2.72,-,0.13} for horizontal surfaces wherefore the heat flux is in the opposite direction as the buoyancy force <a href=\"IDEAS.Buildings.UsersGuide.References\">[Awbi 1999]</a>. The interior natural convective heat transfer coefficient is only described as function of the temperature difference. Similar to the thermal model for heat transfer through a wall, a thermal circuit formulation for the direct radiant exchange between surfaces can be derived <a href=\"IDEAS.Buildings.UsersGuide.References\">[ Buchberg 1955, Oppenheim 1956]</a>.</p>
</html>"));
        end InteriorConvectionWindow;

        model ExteriorConvection "exterior surface convection"

          parameter Modelica.SIunits.Area A "surface area";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          outer IDEAS.SimInfoManager sim "Simulation information manager"
            annotation (Placement(transformation(extent={{-100,80},{-80,100}})));

          Real hcon "equivalent surface conductance";

        equation
          if noEvent(sim.Va <= 5) then
            hcon = 4.0*sim.Va + 5.6;
          else
            hcon = 7.1*abs(sim.Va)^(0.78);
          end if;

          port_a.Q_flow = hcon*A*(port_a.T - sim.Te);

          annotation (Icon(graphics={
                Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(points={{-60,20},{76,20}}, color={191,0,0}),
                Line(points={{-34,80},{-34,-80}}, color={0,127,255}),
                Line(points={{-60,-20},{76,-20}}, color={191,0,0}),
                Line(points={{56,30},{76,20}}, color={191,0,0}),
                Line(points={{56,10},{76,20}}, color={191,0,0}),
                Line(points={{56,-10},{76,-20}}, color={191,0,0}),
                Line(points={{56,-30},{76,-20}}, color={191,0,0}),
                Line(points={{6,80},{6,-80}}, color={0,127,255}),
                Line(points={{40,80},{40,-80}}, color={0,127,255}),
                Line(points={{76,80},{76,-80}}, color={0,127,255}),
                Line(points={{-34,-80},{-44,-60}}, color={0,127,255}),
                Line(points={{-34,-80},{-24,-60}}, color={0,127,255}),
                Line(points={{6,-80},{-4,-60}}, color={0,127,255}),
                Line(points={{6,-80},{16,-60}}, color={0,127,255}),
                Line(points={{40,-80},{30,-60}}, color={0,127,255}),
                Line(points={{40,-80},{50,-60}}, color={0,127,255}),
                Line(points={{76,-80},{66,-60}}, color={0,127,255}),
                Line(points={{76,-80},{86,-60}}, color={0,127,255}),
                Text(
                  extent={{-150,-90},{150,-130}},
                  textString="%name",
                  lineColor={0,0,255}),
                Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5)}), Documentation(info="<html>
<p>The exterior convective heat flow is computed as </p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-dlroqBUD.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-pvb42RGk.png\"/> is the surface area, <img src=\"modelica://IDEAS/Images/equations/equation-EFr6uClx.png\"/> is the dry-bulb exterior air temperature, <img src=\"modelica://IDEAS/Images/equations/equation-9BU57cj4.png\"/> is the surface temperature and <img src=\"modelica://IDEAS/Images/equations/equation-HvwkeunV.png\"/> is the wind speed in the undisturbed flow at 10 meter above the ground and where the stated correlation is valid for a <img src=\"modelica://IDEAS/Images/equations/equation-HvwkeunV.png\"/> range of [0.15,7.5] meter per second <a href=\"IDEAS.Buildings.UsersGuide.References\">[Defraeye 2011]</a>. The <img src=\"modelica://IDEAS/Images/equations/equation-HvwkeunV.png\"/>-dependent term denoting the exterior convective heat transfer coefficient <img src=\"modelica://IDEAS/Images/equations/equation-W7Ft8vaa.png\"/> is determined as <img src=\"modelica://IDEAS/Images/equations/equation-aZcbMNkz.png\"/> in order to take into account buoyancy effects at low wind speeds <a href=\"IDEAS.Buildings.UsersGuide.References\">[Jurges 1924]</a>.</p>
</html>"));
        end ExteriorConvection;

        model ExteriorSolarAbsorption
        "shortwave radiation absorption on an exterior surface"

          parameter Modelica.SIunits.Area A "surface area";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Modelica.Blocks.Interfaces.RealInput solDir
          "direct solar illuminance on surface se"
            annotation (Placement(transformation(extent={{120,40},{80,80}})));
          Modelica.Blocks.Interfaces.RealInput solDif
          "diffuse solar illuminance on surface s"
            annotation (Placement(transformation(extent={{120,0},{80,40}})));
          Modelica.Blocks.Interfaces.RealInput epsSw
          "shortwave emissivity of the surface"
            annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
        equation
          port_a.Q_flow = -(solDir + solDif)*epsSw;

          annotation (Icon(graphics={
                Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5),
                Line(points={{-40,10},{40,10}}, color={191,0,0}),
                Line(points={{-40,10},{-30,16}}, color={191,0,0}),
                Line(points={{-40,10},{-30,4}}, color={191,0,0}),
                Line(points={{-40,-10},{40,-10}}, color={191,0,0}),
                Line(points={{-40,-30},{40,-30}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-24}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-36}}, color={191,0,0}),
                Line(points={{-40,30},{40,30}}, color={191,0,0}),
                Line(points={{-40,30},{-30,36}}, color={191,0,0}),
                Line(points={{-40,30},{-30,24}},color={191,0,0}),
                Line(points={{-40,-10},{-30,-4}},color={191,0,0}),
                Line(points={{-40,-10},{-30,-16}}, color={191,0,0})}), Documentation(
                info="<html>
<p>Transmitted shortwave solar radiation is distributed over all surfaces in the zone in a prescribed scale. This scale is an input value which may be dependent on the shape of the zone and the location of the windows, but literature <a href=\"IDEAS.Buildings.UsersGuide.References\">[Liesen 1997]</a> shows that the overall model is not significantly sensitive to this assumption.</p>
</html>"));
        end ExteriorSolarAbsorption;

        model ExteriorHeatRadidation
        "longwave radiative heat exchange of an exterior surface with the environment"

          parameter Modelica.SIunits.Area A "surface area";
          parameter Modelica.SIunits.Angle inc "inclination";

          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port_a(T(start=289.15))
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          outer IDEAS.SimInfoManager sim "Simulation information manager"
            annotation (Placement(transformation(extent={{-100,80},{-80,100}})));

      protected
          Real Fse=(1 - cos(inc))/2
          "radiant-interchange configuration factor between surface and environment";
          Real Fssky=(1 + cos(inc))/2
          "radiant-interchange configuration factor between surface and sky";
          Modelica.SIunits.Temperature Tenv
          "Radiative temperature of the total environment";

      public
          Modelica.Blocks.Interfaces.RealInput epsLw
          "shortwave emissivity of the surface"
            annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
        equation

          Tenv = (Fssky*sim.Tsky^4 + (1 - Fssky)*sim.Te^4)^0.25;
          port_a.Q_flow = A*Modelica.Constants.sigma*epsLw*(port_a.T - Tenv)*(port_a.T
             + Tenv)*(port_a.T^2 + Tenv^2);

          annotation (Icon(graphics={
                Line(points={{-40,10},{40,10}}, color={191,0,0}),
                Line(points={{-40,10},{-30,16}}, color={191,0,0}),
                Line(points={{-40,10},{-30,4}}, color={191,0,0}),
                Line(points={{-40,-10},{40,-10}}, color={191,0,0}),
                Line(points={{30,-16},{40,-10}}, color={191,0,0}),
                Line(points={{30,-4},{40,-10}}, color={191,0,0}),
                Line(points={{-40,-30},{40,-30}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-24}}, color={191,0,0}),
                Line(points={{-40,-30},{-30,-36}}, color={191,0,0}),
                Line(points={{-40,30},{40,30}}, color={191,0,0}),
                Line(points={{30,24},{40,30}}, color={191,0,0}),
                Line(points={{30,36},{40,30}}, color={191,0,0}),
                Rectangle(
                  extent={{-90,80},{-60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{-60,80},{-60,-80}},
                  color={0,0,0},
                  thickness=0.5),
                Rectangle(
                  extent={{90,80},{60,-80}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{60,80},{60,-80}},
                  color={0,0,0},
                  thickness=0.5)}), Documentation(info="<html>
<p>Longwave radiation between the surface and environment <img src=\"modelica://IDEAS/Images/equations/equation-AMjoTx5S.png\"/> is determined as</p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-nt0agyic.png\"/></p>
<p>as derived from the Stefan-Boltzmann law wherefore <img src=\"modelica://IDEAS/Images/equations/equation-C6ZFvd5P.png\"/> the Stefan-Boltzmann constant <a href=\"IDEAS.Buildings.UsersGuide.References\">[Mohr 2008]</a>, <img src=\"modelica://IDEAS/Images/equations/equation-sLNH0zgx.png\"/> the longwave emissivity of the exterior surface, <img src=\"modelica://IDEAS/Images/equations/equation-Q5X4Yht9.png\"/> the radiant-interchange configuration factor between the surface and sky <a href=\"IDEAS.Buildings.UsersGuide.References\">[Hamilton 1952]</a>, and the surface and the environment respectively and <img src=\"modelica://IDEAS/Images/equations/equation-k2V39u5g.png\"/> and <img src=\"modelica://IDEAS/Images/equations/equation-GuSnzLxW.png\"/> are the exterior surface and sky temperature respectively. Shortwave solar irradiation absorbed by the exterior surface is determined as </p>
<p align=\"center\"><img src=\"modelica://IDEAS/Images/equations/equation-cISf3Itz.png\"/></p>
<p>where <img src=\"modelica://IDEAS/Images/equations/equation-IKuIUMef.png\"/> is the shortwave absorption of the surface and <img src=\"modelica://IDEAS/Images/equations/equation-Vuo4fgcb.png\"/> the total irradiation on the depicted surface. </p>
</html>"));
        end ExteriorHeatRadidation;

        model SwWindowResponse "shortwave window respones"

          parameter Integer nLay(min=1) "number of layers of the wall";
          parameter Real[:, nLay + 1] SwAbs
          "absorbed solar radiation for each layer for look-up table as function of angle of incidence";
          parameter Real[:, 2] SwTrans
          "transmitted solar radiation for look-up table as function of angle of incidence";
          parameter Real[nLay] SwAbsDif
          "absorbed solar radiation for each layer for look-up table as function of angle of incidence";
          parameter Real SwTransDif
          "transmitted solar radiation for look-up table as function of angle of incidence";

          final parameter Integer[nLay] columns=if (nLay == 1) then {2} else integer(
              linspace(
              2,
              nLay + 1,
              nLay));

          Modelica.Blocks.Interfaces.RealInput solDir
          "direct solar illuminance on surface se"
            annotation (Placement(transformation(extent={{-120,40},{-80,80}})));
          Modelica.Blocks.Interfaces.RealInput solDif
          "diffuse solar illuminance on surface s"
            annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
          Modelica.Blocks.Interfaces.RealInput angInc "angle of incidence"
            annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[nLay] iSolAbs
          "solar absorptance in the panes"
            annotation (Placement(transformation(extent={{-10,90},{10,110}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDir
          "transmitted direct solar riadtion"
            annotation (Placement(transformation(extent={{-30,-110},{-10,-90}})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a iSolDif
          "transmitted difuse solar riadtion"
            annotation (Placement(transformation(extent={{10,-110},{30,-90}})));
          IDEAS.Buildings.Components.BaseClasses.AngleOfIncidence angDir
          "angle of incidence conversion"
            annotation (Placement(transformation(extent={{-58,-52},{-40,-34}})));
          Modelica.Blocks.Tables.CombiTable1Ds SwAbsDir(
            final table=SwAbs,
            final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
            final columns=columns) "lookup table for AOI dependent absorptance"
            annotation (Placement(transformation(
                extent={{-9,-9},{9,9}},
                rotation=90,
                origin={-29,-11})));
          Modelica.Blocks.Tables.CombiTable1Ds SwTransDir(
            final table=SwTrans,
            final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
            final columns={2}) "lookup table for AOI dependent transmittance"
            annotation (Placement(transformation(
                extent={{-9,-9},{9,9}},
                rotation=90,
                origin={-3,-11})));
          Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow[nLay] Abs_flow
          "solar absorptance in the panes source"   annotation (Placement(
                transformation(
                extent={{-8,-8},{8,8}},
                rotation=90,
                origin={-8.88178e-016,78})));
          Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Dir_flow
          "transmitted direct solar riadtion source"   annotation (Placement(
                transformation(
                extent={{-8,-8},{8,8}},
                rotation=-90,
                origin={-20,-78})));
          Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Dif_flow
          "transmitted difuse solar riadtion source"   annotation (Placement(
                transformation(
                extent={{-8,-8},{8,8}},
                rotation=-90,
                origin={20,-78})));
          Modelica.Blocks.Math.Product[nLay] SwAbsDirProd annotation (Placement(
                transformation(
                extent={{-7,-7},{7,7}},
                rotation=90,
                origin={-33,19})));
          Modelica.Blocks.Math.Product SwTransDirProd annotation (Placement(
                transformation(
                extent={{-7,-7},{7,7}},
                rotation=90,
                origin={-7,19})));
          Modelica.Blocks.Math.Product[nLay] SwAbsDifProd annotation (Placement(
                transformation(
                extent={{-7,-7},{7,7}},
                rotation=90,
                origin={19,17})));
          Modelica.Blocks.Math.Product SwTransDifProd annotation (Placement(
                transformation(
                extent={{-7,-7},{7,7}},
                rotation=90,
                origin={45,17})));
          Modelica.Blocks.Math.Add[nLay] add annotation (Placement(transformation(
                extent={{8,-8},{-8,8}},
                rotation=-90,
                origin={-32,48})));

        equation
          SwAbsDifProd.u2 = SwAbsDif;
          SwTransDifProd.u2 = SwTransDif;

          connect(angDir.angIncDeg, SwAbsDir.u) annotation (Line(
              points={{-40,-43},{-29,-43},{-29,-21.8}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angDir.angIncDeg, SwTransDir.u) annotation (Line(
              points={{-40,-43},{-3,-43},{-3,-21.8}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(angInc, angDir.angInc) annotation (Line(
              points={{-100,-60},{-66,-60},{-66,-43},{-58,-43}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(Abs_flow.port, iSolAbs) annotation (Line(
              points={{4.89859e-016,86},{0,86},{0,100}},
              color={191,0,0},
              smooth=Smooth.None));
          connect(Dir_flow.port, iSolDir) annotation (Line(
              points={{-20,-86},{-20,-100}},
              color={191,0,0},
              smooth=Smooth.None));
          connect(Dif_flow.port, iSolDif) annotation (Line(
              points={{20,-86},{20,-100}},
              color={191,0,0},
              smooth=Smooth.None));
          connect(solDif, SwTransDifProd.u1) annotation (Line(
              points={{-100,20},{-62,20},{-62,2},{40.8,2},{40.8,8.6}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(solDir, SwTransDirProd.u1) annotation (Line(
              points={{-100,60},{-60,60},{-60,4},{-11.2,4},{-11.2,10.6}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(SwAbsDir.y, SwAbsDirProd.u2) annotation (Line(
              points={{-29,-1.1},{-29,13.45},{-28.8,13.45},{-28.8,10.6}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(SwTransDir.y[1], SwTransDirProd.u2) annotation (Line(
              points={{-3,-1.1},{-3,13.45},{-2.8,13.45},{-2.8,10.6}},
              color={0,0,127},
              smooth=Smooth.None));

          for i in 1:nLay loop
            connect(solDir, SwAbsDirProd[i].u1) annotation (Line(
                points={{-100,60},{-60,60},{-60,4},{-37.2,4},{-37.2,10.6}},
                color={0,0,127},
                smooth=Smooth.None));
            connect(solDif, SwAbsDifProd[i].u1) annotation (Line(
                points={{-100,20},{-62,20},{-62,2},{14.8,2},{14.8,8.6}},
                color={0,0,127},
                smooth=Smooth.None));
          end for;

          connect(SwTransDifProd.y, Dif_flow.Q_flow) annotation (Line(
              points={{45,24.7},{45,32},{66,32},{66,-44},{20,-44},{20,-70}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(SwTransDirProd.y, Dir_flow.Q_flow) annotation (Line(
              points={{-7,26.7},{-7,50},{80,50},{80,-54},{-20,-54},{-20,-70}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(SwAbsDirProd.y, add.u2) annotation (Line(
              points={{-33,26.7},{-33,31.35},{-36.8,31.35},{-36.8,38.4}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(SwAbsDifProd.y, add.u1) annotation (Line(
              points={{19,24.7},{19,32},{-27.2,32},{-27.2,38.4}},
              color={0,0,127},
              smooth=Smooth.None));
          connect(add.y, Abs_flow.Q_flow) annotation (Line(
              points={{-32,56.8},{-32,62},{-4.89859e-016,62},{-4.89859e-016,70}},
              color={0,0,127},
              smooth=Smooth.None));
          annotation (
            Diagram(graphics),
            Icon(graphics={
                Rectangle(
                  extent={{-80,90},{80,70}},
                  fillColor={192,192,192},
                  fillPattern=FillPattern.Backward,
                  pattern=LinePattern.None),
                Line(
                  points={{-80,70},{80,70}},
                  pattern=LinePattern.None,
                  thickness=0.5,
                  smooth=Smooth.None),
                Line(
                  points={{44,40},{44,-50}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{44,40},{38,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{44,40},{50,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{14,40},{14,-50}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{14,40},{8,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{14,40},{20,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-16,40},{-16,-50}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-16,40},{-22,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-16,40},{-10,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-46,40},{-46,-50}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-46,40},{-52,30}},
                  smooth=Smooth.None,
                  color={127,0,0}),
                Line(
                  points={{-46,40},{-40,30}},
                  smooth=Smooth.None,
                  color={127,0,0})}),
            Documentation(info="<html>
<p>he properties for absorption by and transmission through the glazingare taken into account depending on the angle of incidence of solar irradiation and are based on the output of the <a href=\"IDEAS.Buildings.UsersGuide.References\">[WINDOW 6.3]</a> software, i.e. the shortwave properties itselves based on the layers in the window are not calculated in the model but are input parameters. </p>
</html>"));
        end SwWindowResponse;
      end BaseClasses;
    end Components;

    package Data "Data for transient thermal building simulation"
    extends Modelica.Icons.MaterialPropertiesPackage;

      package Insulation "Library of thermal insulation materials"
      extends Modelica.Icons.MaterialPropertiesPackage;

        record Rockwool = IDEAS.Buildings.Data.Interfaces.Insulation (
            final k=0.036,
            final c=840,
            final rho=110,
            final epsLw=0.8,
            final epsSw=0.8) "Rockwool";

        record none = IDEAS.Buildings.Data.Interfaces.Insulation (
            k=1000,
            c=1008,
            rho=1.23,
            epsLw=0.8,
            epsSw=0.8) "none";
      end Insulation;

      package Materials "Library of construction materials"
      extends Modelica.Icons.MaterialPropertiesPackage;

        record BrickMe = IDEAS.Buildings.Data.Interfaces.Material (
            k=0.75,
            c=840,
            rho=1400,
            epsLw=0.88,
            epsSw=0.55) "Medium masonry for exterior applications ";

        record BrickMi = IDEAS.Buildings.Data.Interfaces.Material (
            k=0.54,
            c=840,
            rho=1400,
            epsLw=0.88,
            epsSw=0.55) "Medium masonry for interior applications ";

        record Gypsum = IDEAS.Buildings.Data.Interfaces.Material (
            k=0.6,
            c=840,
            rho=975,
            epsLw=0.85,
            epsSw=0.65) "Gypsum plaster for finishing";
      end Materials;

      package Frames "Library of building glazing frames"
      extends Modelica.Icons.MaterialPropertiesPackage;

        record None = IDEAS.Buildings.Data.Interfaces.Frame (present=false) "None";
      end Frames;

      package Constructions "Library of building envelope constructions"
      extends Modelica.Icons.MaterialPropertiesPackage;

        model CavityWall
        "Example - Classic cavity wall construction with fully-filled cavity"

          extends IDEAS.Buildings.Data.Interfaces.Construction(
            nLay=4,
            locGain=2,
            final mats={Materials.BrickMe(d=0.08),insulationType,Materials.BrickMi(d=
                0.14),Materials.Gypsum(d=0.015)});

        end CavityWall;
      end Constructions;

      package Interfaces "Building data interfaces"
      extends Modelica.Icons.InterfacesPackage;

        record Material "Properties of building materials"

          extends Modelica.Icons.MaterialProperty;

          parameter Modelica.SIunits.Length d=0 "Layer thickness";
          parameter Modelica.SIunits.ThermalConductivity k
          "Thermal conductivity";
          parameter Modelica.SIunits.SpecificHeatCapacity c
          "Specific thermal capacity";
          parameter Modelica.SIunits.Density rho "Density";
          parameter Modelica.SIunits.Emissivity epsLw=0.85 "Longwave emisivity";
          parameter Modelica.SIunits.Emissivity epsSw=0.85
          "Shortwave emissivity";
          parameter Boolean gas=false "Boolean wether the material is a gas";
          parameter Real mhu(unit="m2/s") = 0
          "Viscosity, i.e. if the material is a fluid";
          final parameter Real R=d/k;

          parameter Modelica.SIunits.Emissivity epsLw_a=0.84
          "Longwave emisivity";
          parameter Modelica.SIunits.Emissivity epsLw_b=0.84
          "Longwave emisivity";

          final parameter Modelica.SIunits.ThermalDiffusivity alpha=k/(c*rho)
          "Thermal diffusivity";
          final parameter Integer nStaRef=3
          "Number of states of a reference case, ie. 20 cm dense concrete";
          final parameter Real piRef=224
          "d/sqrt(mat.alpha) of a reference case, ie. 20 cm dense concrete";
          final parameter Real piLay=d/sqrt(alpha)
          "d/sqrt(mat.alpha) of the depicted layer";
          final parameter Integer nSta(min=1) = max(1, integer(ceil(nStaRef*piLay/piRef)))
          "Actual number of state variables in material";

          annotation (Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>Material.mo</code> partial describes the material data required for building construction modelling.</p>
<p><h5>Assumptions and limitations</h5></p>
<p><ol>
<li>Current number of states in the material layer is determined by a reference number of states in a 20cm concrete slab.</li>
</ol></p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>No validation required.</p>
</html>"));
        end Material;

        record Insulation

          extends IDEAS.Buildings.Data.Interfaces.Material;

        end Insulation;

        record Glazing

          extends Modelica.Icons.MaterialProperty;

          parameter Integer nLay(min=1)
          "Number of layers of the glazing, including gaps";
          parameter IDEAS.Buildings.Data.Interfaces.Material[nLay] mats
          "Array of materials";
          parameter Real[:, nLay + 1] SwAbs
          "Absorbed solar radiation for each layer as function of angle of incidence";
          parameter Real[:, 2] SwTrans
          "Transmitted solar radiation as function of angle of incidence";
          parameter Real[nLay] SwAbsDif
          "Absorbed solar radiation for each layer as function of angle of incidence";
          parameter Real SwTransDif
          "Transmitted solar radiation as function of angle of incidence";

          parameter Real U_value "U-value";
          parameter Real g_value "g-value";

          annotation (Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>Glazing.mo</code> partial describes the material data required for glazing construction modelling.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>No validation required.</p>
</html>"));
        end Glazing;

        model Construction

          extends Modelica.Icons.MaterialProperty;

          parameter Integer nLay(min=1)
          "Number of layers of the construction, including gaps";
          parameter Integer locGain(min=1) = 1
          "Location of possible embedded system";
          replaceable parameter IDEAS.Buildings.Data.Interfaces.Insulation
            insulationType(final d=insulationTickness) constrainedby
          IDEAS.Buildings.Data.Interfaces.Insulation
          "Type of thermal insulation";
          parameter IDEAS.Buildings.Data.Interfaces.Material[nLay] mats
          "Array of materials";
          parameter Modelica.SIunits.Length insulationTickness=0
          "Thermal insulation thickness";

          annotation (Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>Construction.mo</code> partial describes the material data required for building construction modelling.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>No validation required.</p>
</html>"));
        end Construction;

        record Frame "Window frame"

          extends Modelica.Icons.MaterialProperty;

          parameter Boolean present=true;
          parameter Real U_value=1.1 "U-value window frame";

          annotation (Documentation(info="<html>
<p><h4><font color=\"#008000\">General description</font></h4></p>
<p><h5>Goal</h5></p>
<p>The <code>Frame.mo</code> partial describes the material data required for window frame modelling.</p>
<p><h4><font color=\"#008000\">Validation </font></h4></p>
<p>No validation required.</p>
</html>"));
        end Frame;
      end Interfaces;
    end Data;
  end Buildings;

  package Thermal "Thermal systems, HVAC and thermal renewable energy"
  extends Modelica.Icons.Package;
  import SI = Modelica.SIunits;

    package Components
    "Thermal models for building HVAC systems and their control"
    extends Modelica.Icons.Package;

      package Production "Models for heat/cold production devices"
      extends Modelica.Icons.Package;

        model Boiler
        "Modulating boiler with losses to environment, based on performance tables"
          extends
          IDEAS.Thermal.Components.Production.Interfaces.PartialDynamicHeaterWithLosses(
              final heaterType=IDEAS.Thermal.Components.Production.BaseClasses.HeaterType.Boiler);

          Real eta "Instanteanous efficiency";

          IDEAS.Thermal.Components.Production.BaseClasses.HeatSource_CondensingGasBurner
            heatSource(
            medium=medium,
            QNom=QNom,
            TBoilerSet=TSet,
            TEnvironment=heatPort.T,
            UALoss=UALoss,
            THxIn=heatedFluid.T_a,
            m_flowHx=heatedFluid.flowPort_a.m_flow,
            modulationMin=modulationMin,
            modulationStart=modulationStart)
            annotation (Placement(transformation(extent={{-68,20},{-48,40}})));
          parameter Real modulationMin=25 "Minimal modulation percentage";
          parameter Real modulationStart=35
          "Min estimated modulation level required for start of HP";
        equation
          // Electricity consumption for electronics and fan only.  Pump is covered by pumpHeater;
          // This data is taken from Viessmann VitoDens 300W, smallest model.  So only valid for
          // very small household condensing gas boilers.
          PEl = 7 + heatSource.modulation/100*(33 - 7);
          PFuel = heatSource.PFuel;
          eta = heatSource.eta;
          connect(heatSource.heatPort, heatedFluid.heatPort) annotation (Line(
              points={{-48,30},{-20,30},{-20,6.12323e-016}},
              color={191,0,0},
              smooth=Smooth.None));
          annotation (
            Diagram(graphics),
            Icon(graphics={
                Ellipse(
                  extent={{-58,60},{60,-60}},
                  lineColor={127,0,0},
                  fillPattern=FillPattern.Solid,
                  fillColor={255,255,255}),
                Ellipse(extent={{-46,46},{48,-46}}, lineColor={95,95,95}),
                Line(
                  points={{-30,34},{32,-34}},
                  color={95,95,95},
                  smooth=Smooth.None),
                Line(
                  points={{100,20},{44,20}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{102,-40},{70,-40},{70,-80},{0,-80},{0,-46}},
                  color={0,0,127},
                  smooth=Smooth.None)}),
            Documentation(info="<html>
<p><h4><font color=\"#008000\">Description </font></h4></p>
<p>Dynamic boiler model, based on interpolation in performance tables. The boiler has thermal losses to the environment which are often not mentioned in the performance tables. Therefore, the additional environmental heat losses are added to the heat production in order to ensure the same performance as in the manufacturers data, while still obtaining a dynamic model with heat losses (also when boiler is off). The heatSource will compute the required power and the environmental heat losses, and try to reach the set point. </p>
<p>See<a href=\"modelica://IDEAS.Thermal.Components.Production.Interfaces.PartialDynamicHeaterWithLosses\"> IDEAS.Thermal.Components.Production.Interfaces.PartialDynamicHeaterWithLosses</a> for more details about the heat losses and dynamics. </p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>Dynamic model based on water content and lumped dry capacity</li>
<li>Limited power (based on QNom and interpolation tables in heatSource) </li>
<li>Heat losses to environment which are compensated &apos;artifically&apos; to meet the manufacturers data in steady state conditions</li>
<li>No enforced min on or min off time; Hysteresis on start/stop thanks to different parameters for minimum modulation to start and stop the heat pump</li>
</ol></p>
<p><h4>Model use</h4></p>
<p>This model is based on performance tables of a specific boiler, as specified by <a href=\"modelica://IDEAS.Thermal.Components.Production.BaseClasses.HeatSource_CondensingGasBurner\">IDEAS.Thermal.Components.Production.BaseClasses.HeatSource_CondensingGasBurner</a>. If a different gas boiler is to be simulated, create a different Burner model with adapted interpolation tables.</p>
<p><ol>
<li>Specify medium and initial temperature (of the water + dry mass)</li>
<li>Specify the nominal power</li>
<li>Specify the minimum required modulation level for the boiler to start (modulation_start) and the minimum modulation level when the boiler is operating (modulation_min). The difference between both will ensure some off-time in case of low heat demands</li>
<li>Connect TSet, the flowPorts and the heatPort to environment. </li>
</ol></p>
<p>See also<a href=\"modelica://IDEAS.Thermal.Components.Production.Interfaces.PartialDynamicHeaterWithLosses\"> IDEAS.Thermal.Components.Production.Interfaces.PartialDynamicHeaterWithLosses</a> for more details about the heat losses and dynamics. </p>
<p><h4>Validation </h4></p>
<p>The model has been verified in order to check if the &apos;artificial&apos; heat loss compensation still leads to correct steady state efficiencies according to the manufacturer data. This verification is integrated in the example model <a href=\"modelica://IDEAS.Thermal.Components.Examples.Boiler_validation\">IDEAS.Thermal.Components.Examples.Boiler_validation</a>.</p>
<p><h4>Example</h4></p>
<p>See validation.</p>
</html>",         revisions="<html>
<p><ul>
<li>2013 May, Roel De Coninck: documentation</li>
<li>2011 August, Roel De Coninck: first version</li>
</ul></p>
</html>"));
        end Boiler;

        package BaseClasses
        "Partials, submodels and general stuff to be used in other HVAC models"
        extends Modelica.Icons.BasesPackage;

          type HeaterType = enumeration(
            HP_AW "Air/water Heat pump",
            HP_BW "Brine/water Heat pump",
            HP_BW_Collective "Brine/water HP with collective borefield",
            Boiler "Boiler")
          "Type of the heater: heat pump, gas boiler, fuel boiler, pellet boiler, ...";

          model HeatSource_CondensingGasBurner
          "Burner for use in Boiler, based on interpolation data.  Takes into account losses of the boiler to the environment"

            //protected
            parameter Thermal.Data.Interfaces.Medium medium=Data.Media.Water()
            "Medium in the component";

            final parameter Real[6] modVector={0,20,40,60,80,100}
            "6 modulation steps, %";
            Real eta
            "Instantaneous efficiency of the boiler (higher heating value)";
            Real[6] etaVector
            "Thermal efficiency (higher heating value) for 6 modulation steps, base 1";
            Real[6] QVector "Thermal power for 6 modulation steps, in kW";
            Modelica.SIunits.Power QMax
            "Maximum thermal power at specified evap and condr temperatures, in W";
            Modelica.SIunits.Power QAsked(start=0);
            parameter Modelica.SIunits.ThermalConductance UALoss
            "UA of heat losses of HP to environment";
            parameter Modelica.SIunits.Power QNom
            "The power at nominal conditions (50/30)";

        public
            parameter Real etaNom=0.922
            "Nominal efficiency (higher heating value)of the xxx boiler at 50/30degC.  See datafile";
            parameter Real modulationMin(max=29) = 25
            "Minimal modulation percentage";
            // dont' set this to 0 or very low values, you might get negative P at very low modulations because of wrong extrapolation
            parameter Real modulationStart(min=min(30, modulationMin + 5)) = 35
            "Min estimated modulation level required for start of HP";
            Real modulationInit
            "Initial modulation, decides on start/stop of the boiler";
            Real modulation(min=0, max=1) "Current modulation percentage";
            Modelica.SIunits.Power PFuel "Resulting fuel consumption";
            input Modelica.SIunits.Temperature THxIn "Condensor temperature";
            input Modelica.SIunits.Temperature TBoilerSet
            "Condensor setpoint temperature.  Not always possible to reach it";
            input Modelica.SIunits.MassFlowRate m_flowHx
            "Condensor mass flow rate";
            input Modelica.SIunits.Temperature TEnvironment
            "Temperature of environment for heat losses";

        protected
            Real kgps2lph=3600/medium.rho*1000 "Conversion from kg/s to l/h";
            Modelica.Blocks.Tables.CombiTable2D eta100(smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
                table=[0, 100, 400, 700, 1000, 1300; 20.0, 0.9015, 0.9441, 0.9599, 0.9691,
                  0.9753; 30.0, 0.8824, 0.9184, 0.9324, 0.941, 0.9471; 40.0, 0.8736,
                  0.8909, 0.902, 0.9092, 0.9143; 50.0, 0.8676, 0.8731, 0.8741, 0.8746,
                  0.8774; 60.0, 0.8, 0.867, 0.8681, 0.8686, 0.8689; 70.0, 0.8, 0.8609,
                  0.8619, 0.8625, 0.8628; 80.0, 0.8, 0.8547, 0.8558, 0.8563, 0.8566])
              annotation (Placement(transformation(extent={{-58,66},{-38,86}})));
            Modelica.Blocks.Tables.CombiTable2D eta80(smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
                table=[0, 100, 400, 700, 1000, 1300; 20.0, 0.9155, 0.9587, 0.9733, 0.9813,
                  0.9866; 30.0, 0.8937, 0.9311, 0.9449, 0.953, 0.9585; 40.0, 0.8753,
                  0.9007, 0.9121, 0.9192, 0.9242; 50.0, 0.8691, 0.8734, 0.8755, 0.8804,
                  0.884; 60.0, 0.8628, 0.8671, 0.8679, 0.8683, 0.8686; 70.0, 0.7415,
                  0.8607, 0.8616, 0.862, 0.8622; 80.0, 0.6952, 0.8544, 0.8552, 0.8556,
                  0.8559])
              annotation (Placement(transformation(extent={{-58,32},{-38,52}})));
            Modelica.Blocks.Tables.CombiTable2D eta60(smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
                table=[0, 100, 400, 700, 1000, 1300; 20.0, 0.9349, 0.9759, 0.9879, 0.9941,
                  0.998; 30.0, 0.9096, 0.9471, 0.9595, 0.9664, 0.9709; 40.0, 0.8831,
                  0.9136, 0.9247, 0.9313, 0.9357; 50.0, 0.8701, 0.8759, 0.8838, 0.8887,
                  0.8921; 60.0, 0.8634, 0.8666, 0.8672, 0.8675, 0.8677; 70.0, 0.8498,
                  0.8599, 0.8605, 0.8608, 0.861; 80.0, 0.8488, 0.8532, 0.8538, 0.8541,
                  0.8543])
              annotation (Placement(transformation(extent={{-58,-6},{-38,14}})));
            Modelica.Blocks.Tables.CombiTable2D eta40(smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
                table=[0, 100, 400, 700, 1000, 1300; 20.0, 0.9624, 0.9947, 0.9985, 0.9989,
                  0.999; 30.0, 0.9333, 0.9661, 0.9756, 0.9803, 0.9833; 40.0, 0.901,
                  0.9306, 0.94, 0.9451, 0.9485; 50.0, 0.8699, 0.8871, 0.8946, 0.8989,
                  0.9018; 60.0, 0.8626, 0.8647, 0.8651, 0.8653, 0.8655; 70.0, 0.8553,
                  0.8573, 0.8577, 0.8579, 0.8581; 80.0, 0.8479, 0.8499, 0.8503, 0.8505,
                  0.8506])
              annotation (Placement(transformation(extent={{-58,-44},{-38,-24}})));
            Modelica.Blocks.Tables.CombiTable2D eta20(smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
                table=[0, 100, 400, 700, 1000, 1300; 20.0, 0.9969, 0.9987, 0.999, 0.999,
                  0.999; 30.0, 0.9671, 0.9859, 0.99, 0.9921, 0.9934; 40.0, 0.9293, 0.9498,
                  0.9549, 0.9575, 0.9592; 50.0, 0.8831, 0.9003, 0.9056, 0.9083, 0.9101;
                  60.0, 0.8562, 0.857, 0.8575, 0.8576, 0.8577; 70.0, 0.8398, 0.8479,
                  0.8481, 0.8482, 0.8483; 80.0, 0.8374, 0.8384, 0.8386, 0.8387, 0.8388])
              annotation (Placement(transformation(extent={{-58,-86},{-38,-66}})));

            Modelica.SIunits.HeatFlowRate QLossesToCompensate
            "Environment losses";
        public
            Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPort
            "heatPort connection to water in condensor"
              annotation (Placement(transformation(extent={{90,-10},{110,10}})));
            IDEAS.BaseClasses.Control.Hyst_NoEvent onOff(
              uLow=modulationMin,
              uHigh=modulationStart,
              y(start=0),
              enableRelease=true) "on-off, based on modulationInit"
              annotation (Placement(transformation(extent={{28,40},{48,60}})));

          equation
            onOff.u = modulationInit;
            onOff.release = if noEvent(m_flowHx > 0) then 1.0 else 0.0;
            QAsked = max(0, m_flowHx*medium.cp*(TBoilerSet - THxIn));
            eta100.u1 = THxIn - 273.15;
            eta100.u2 = m_flowHx*kgps2lph;
            eta80.u1 = THxIn - 273.15;
            eta80.u2 = m_flowHx*kgps2lph;
            eta60.u1 = THxIn - 273.15;
            eta60.u2 = m_flowHx*kgps2lph;
            eta40.u1 = THxIn - 273.15;
            eta40.u2 = m_flowHx*kgps2lph;
            eta20.u1 = THxIn - 273.15;
            eta20.u2 = m_flowHx*kgps2lph;

            // all these are in kW
            etaVector[1] = 0;
            etaVector[2] = eta20.y;
            etaVector[3] = eta40.y;
            etaVector[4] = eta60.y;
            etaVector[5] = eta80.y;
            etaVector[6] = eta100.y;
            QVector = etaVector/etaNom .* modVector/100*QNom;
            // in W
            QMax = QVector[6];

            modulationInit = Modelica.Math.Vectors.interpolate(
              QVector,
              modVector,
              QAsked);
            modulation = onOff.y*min(modulationInit, 100);

            // compensation of heat losses (only when the hp is operating)
            QLossesToCompensate = if noEvent(modulation > 0) then UALoss*(heatPort.T -
              TEnvironment) else 0;

            eta = Modelica.Math.Vectors.interpolate(
              modVector,
              etaVector,
              modulation);
            heatPort.Q_flow = -Modelica.Math.Vectors.interpolate(
              modVector,
              QVector,
              modulation) - QLossesToCompensate;
            PFuel = if noEvent(modulation > 0) then -heatPort.Q_flow/eta else 0;

            annotation (Diagram(graphics), Documentation(info="<html>
<p><b>Description</b> </p>
<p>This&nbsp;model&nbsp;is&nbsp;based&nbsp;on&nbsp;data&nbsp;from&nbsp;a Remeha boiler. It is used in the <a href=\"modelica://IDEAS.Thermal.Components.Production.Boiler\">Boiler</a> model. </p>
<p>The&nbsp;nominal&nbsp;power&nbsp;of&nbsp;the&nbsp;original&nbsp;boiler&nbsp;is&nbsp;10.1&nbsp;kW&nbsp;at &nbsp;50/30 degC&nbsp;water&nbsp;temperatures.&nbsp;&nbsp;&nbsp;The&nbsp;efficiency&nbsp;in&nbsp;this&nbsp;point&nbsp;is&nbsp;92.2&percnt;&nbsp;on&nbsp;higher&nbsp;heating&nbsp;value.&nbsp;</p>
<p>First,&nbsp;the&nbsp;efficiency&nbsp;is&nbsp;interpolated&nbsp;for&nbsp;the&nbsp;&nbsp;return&nbsp;water&nbsp;temperature&nbsp;and&nbsp;flowrate&nbsp;at&nbsp;5&nbsp;different&nbsp;modulation&nbsp;levels.&nbsp;These&nbsp;modulation&nbsp;levels&nbsp;are&nbsp;the&nbsp;FUEL&nbsp;input&nbsp;power&nbsp;to&nbsp;the&nbsp;boiler.&nbsp;&nbsp;The&nbsp;results&nbsp;&nbsp;are&nbsp;rescaled&nbsp;to&nbsp;the&nbsp;nominal&nbsp;power&nbsp;of&nbsp;the&nbsp;modelled&nbsp;heatpump&nbsp;(with&nbsp;QNom/QNom_data)&nbsp;and&nbsp;&nbsp;stored&nbsp;in&nbsp;a&nbsp;vector,&nbsp;eta_vector.</p>
<p>Finally,&nbsp;the&nbsp;initial&nbsp;modulation&nbsp;is&nbsp;calculated&nbsp;based&nbsp;on&nbsp;the&nbsp;asked&nbsp;power&nbsp;and&nbsp;the&nbsp;max&nbsp;power&nbsp;at&nbsp;&nbsp;operating&nbsp;conditions:&nbsp;</p>
<p><ul>
<li>&nbsp;&nbsp;if&nbsp;modulation_init&nbsp;&LT;&nbsp;modulation_min,&nbsp;the&nbsp;boiler&nbsp;is&nbsp;OFF,&nbsp;modulation&nbsp;=&nbsp;0.&nbsp;&nbsp;</li>
<li>&nbsp;&nbsp;if&nbsp;modulation_init&nbsp;&GT;&nbsp;100&percnt;,&nbsp;the&nbsp;modulation&nbsp;is&nbsp;100&percnt;</li>
<li>&nbsp;&nbsp;if&nbsp;modulation_init&nbsp;between&nbsp;modulation_min&nbsp;and&nbsp;modulation_start:&nbsp;hysteresis&nbsp;for&nbsp;on/off&nbsp;cycling.</li>
</ul></p>
<p>If&nbsp;the&nbsp;boiler&nbsp;is&nbsp;on&nbsp;another&nbsp;modulation,&nbsp;interpolation&nbsp;is&nbsp;made&nbsp;to&nbsp;get&nbsp;eta&nbsp;at&nbsp;the&nbsp;real&nbsp;modulation.</p>
<p><h4>ATTENTION</h4></p>
<p>This&nbsp;model&nbsp;takes&nbsp;into&nbsp;account&nbsp;environmental&nbsp;heat&nbsp;losses&nbsp;of&nbsp;the&nbsp;boiler.&nbsp;&nbsp;In&nbsp;order&nbsp;to&nbsp;keep&nbsp;the&nbsp;same&nbsp;nominal&nbsp;eta&apos;s&nbsp;during&nbsp;operation,&nbsp;these&nbsp;heat&nbsp;losses&nbsp;are&nbsp;added&nbsp;to&nbsp;the&nbsp;computed&nbsp;power.&nbsp;&nbsp;Therefore,&nbsp;the&nbsp;heat&nbsp;losses&nbsp;are&nbsp;only&nbsp;really&nbsp;&apos;losses&apos;&nbsp;when&nbsp;the&nbsp;boiler&nbsp;is&nbsp;NOT&nbsp;operating.&nbsp;</p>
<p>The&nbsp;eta&nbsp;is&nbsp;calculated&nbsp;as&nbsp;the&nbsp;heat&nbsp;delivered&nbsp;to&nbsp;the&nbsp;heatedFluid&nbsp;divided&nbsp;by&nbsp;the&nbsp;fuel&nbsp;consumption&nbsp;PFuel.&nbsp;</p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>Based on interpolation in manufacturer data for Remeha condensing gas boiler</li>
</ol></p>
<p><h4>Model use</h4></p>
<p>This model is used in the <a href=\"modelica://IDEAS.Thermal.Components.Production.Boiler\">Boiler</a> model. If a different gas boiler is to be simulated, copy this Burner model and adapt the interpolation tables.</p>
<p><h4>Validation </h4></p>
<p>See the <a href=\"modelica://IDEAS.Thermal.Components.Production.Boiler\">Boiler</a> model. </p>
</html>",           revisions="<html>
<p><ul>
<li>2013 May, Roel De Coninck: documentation</li>
<li>2011 August, Roel De Coninck: first version</li>
</ul></p>
</html>"));
          end HeatSource_CondensingGasBurner;
        end BaseClasses;

        package Interfaces
        "Contains partial classes for the IDEAS.Thermal.Components.Production package"
        extends Modelica.Icons.InterfacesPackage;

          model PartialDynamicHeaterWithLosses
          "Partial heater model incl dynamics and environmental losses"

            import IDEAS.Thermal.Components.Production.BaseClasses.HeaterType;
            parameter HeaterType heaterType
            "Type of the heater, is used mainly for post processing";
            parameter Modelica.SIunits.Temperature TInitial=293.15
            "Initial temperature of the water and dry mass";
            parameter Modelica.SIunits.Power QNom "Nominal power";
            parameter Thermal.Data.Interfaces.Medium medium=Data.Media.Water()
            "Medium in the component";

            Modelica.SIunits.Power PFuel "Fuel consumption";
            parameter Modelica.SIunits.Time tauHeatLoss=7200
            "Time constant of environmental heat losses";
            parameter Modelica.SIunits.Mass mWater=5
            "Mass of water in the condensor";
            parameter Modelica.SIunits.HeatCapacity cDry=4800
            "Capacity of dry material lumped to condensor";

            final parameter Modelica.SIunits.ThermalConductance UALoss=(cDry + mWater*
                medium.cp)/tauHeatLoss;

            IDEAS.Thermal.Components.BaseClasses.Pipe_HeatPort heatedFluid(
              medium=medium,
              m=mWater,
              TInitial=TInitial) annotation (Placement(transformation(
                  extent={{-10,10},{10,-10}},
                  rotation=90,
                  origin={-10,0})));

            Thermal.Components.Interfaces.FlowPort_a flowPort_a(final medium=medium, h(
                  min=1140947, max=1558647)) "Fluid inlet " annotation (Placement(
                  transformation(extent={{90,-48},{110,-28}}), iconTransformation(extent=
                      {{90,-48},{110,-28}})));
            Thermal.Components.Interfaces.FlowPort_b flowPort_b(final medium=medium, h(
                  min=1140947, max=1558647)) "Fluid outlet"
              annotation (Placement(transformation(extent={{90,10},{110,30}})));
            Modelica.Thermal.HeatTransfer.Components.HeatCapacitor mDry(C=cDry, T(start=
                    TInitial))
            "Lumped dry mass subject to heat exchange/accumulation"
              annotation (Placement(transformation(
                  extent={{-10,-10},{10,10}},
                  rotation=90,
                  origin={-40,-30})));
            Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalLosses(G=
                  UALoss) annotation (Placement(transformation(
                  extent={{-10,-10},{10,10}},
                  rotation=-90,
                  origin={-30,-70})));
            Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPort
            "heatPort for thermal losses to environment"   annotation (Placement(
                  transformation(extent={{-40,-110},{-20,-90}}), iconTransformation(
                    extent={{-40,-110},{-20,-90}})));
            Modelica.Blocks.Interfaces.RealInput TSet
            "Temperature setpoint, acts as on/off signal too"   annotation (Placement(
                  transformation(extent={{-126,-20},{-86,20}}), iconTransformation(
                  extent={{-10,-10},{10,10}},
                  rotation=-90,
                  origin={-10,120})));
            Modelica.Blocks.Interfaces.RealOutput PEl "Electrical consumption"
              annotation (Placement(transformation(extent={{-252,10},{-232,30}}),
                  iconTransformation(
                  extent={{-10,-10},{10,10}},
                  rotation=-90,
                  origin={-74,-100})));
          equation

            connect(flowPort_a, heatedFluid.flowPort_a) annotation (Line(
                points={{100,-38},{-10,-38},{-10,-10}},
                color={255,0,0},
                smooth=Smooth.None));
            connect(heatedFluid.flowPort_b, flowPort_b) annotation (Line(
                points={{-10,10},{-10,20},{100,20}},
                color={255,0,0},
                smooth=Smooth.None));
            connect(mDry.port, heatedFluid.heatPort) annotation (Line(
                points={{-30,-30},{-30,6.12323e-016},{-20,6.12323e-016}},
                color={191,0,0},
                smooth=Smooth.None));
            connect(mDry.port, thermalLosses.port_a) annotation (Line(
                points={{-30,-30},{-30,-30},{-30,-60},{-30,-60}},
                color={191,0,0},
                smooth=Smooth.None));
            connect(thermalLosses.port_b, heatPort) annotation (Line(
                points={{-30,-80},{-30,-100}},
                color={191,0,0},
                smooth=Smooth.None));
            annotation (
              Diagram(coordinateSystem(extent={{-100,-100},{100,120}},
                    preserveAspectRatio=false), graphics),
              Icon(coordinateSystem(extent={{-100,-100},{100,120}}, preserveAspectRatio=
                      false), graphics),
              Documentation(info="<html>
<p><b>Description</b> </p>
<p>This is a partial model from which most heaters (boilers, heat pumps) will extend. This model is <u>dynamic</u> (there is a water content in the heater and a dry mass lumped to it) and it has <u>thermal losses to the environment</u>. To complete this model and turn it into a heater, a <u>heatSource</u> has to be added, specifying how much heat is injected in the heatedFluid pipe, at which efficiency, if there is a maximum power, etc. HeatSource models are grouped in <a href=\"modelica://IDEAS.Thermal.Components.Production.BaseClasses\">IDEAS.Thermal.Components.Production.BaseClasses.</a></p>
<p>The set temperature of the model is passed as a realInput.The model has a realOutput PEl for the electricity consumption.</p>
<p>See the extensions of this model for more details.</p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>the temperature of the dry mass is identical as the outlet temperature of the heater </li>
<li>no pressure drop</li>
</ol></p>
<p><h4>Model use</h4></p>
<p>Depending on the extended model, different parameters will have to be set. Common to all these extensions are the following:</p>
<p><ol>
<li>the environmental heat losses are specified by a <u>time constant</u>. Based on the water content, dry capacity and this time constant, the UA value of the heat transfer to the environment will be set</li>
<li>set the heaterType (useful in post-processing)</li>
<li>connect the set temperature to the TSet realInput connector</li>
<li>connect the flowPorts (flowPort_b is the outlet) </li>
<li>if heat losses to environment are to be considered, connect heatPort to the environment.  If this port is not connected, the dry capacity and water content will still make this a dynamic model, but without heat losses to environment,.  IN that case, the time constant is not used.</li>
</ol></p>
<p><h4>Validation </h4></p>
<p>This partial model is based on physical principles and is not validated. Extensions may be validated.</p>
<p><h4>Examples</h4></p>
<p>See the extensions, like the <a href=\"modelica://IDEAS.Thermal.Components.Production.IdealHeater\">IdealHeater</a>, the <a href=\"modelica://IDEAS.Thermal.Components.Production.Boiler\">Boiler</a> or <a href=\"modelica://IDEAS.Thermal.Components.Production.HP_AWMod_Losses\">air-water heat pump</a></p>
</html>"));
          end PartialDynamicHeaterWithLosses;
        end Interfaces;
      end Production;

      package Emission "Models for heat/cold emission"
      extends Modelica.Icons.Package;

        model Radiator "Simple 1-node radiator model according to EN 442"

          extends IDEAS.Thermal.Components.Emission.Interfaces.Partial_Emission(final
              floorHeating=false, final radiators=true);

          parameter Modelica.SIunits.Temperature TInNom=75 + 273.15
          "Nominal inlet temperature";
          parameter Modelica.SIunits.Temperature TOutNom=65 + 273.15
          "Nominal outlet temperature";
          parameter Modelica.SIunits.Temperature TZoneNom=20 + 273.15
          "Nominal room temperature";

          parameter Modelica.SIunits.Power QNom=1000
          "Nominal thermal power at the specified conditions";
          parameter Real fraRad=0.35 "Fraction of radiation at Nominal power";
          parameter Real n=1.3 "Radiator coefficient according to EN 442-2";

          parameter Real powerFactor=1
          "Size increase compared to design at 75/65/20";
          // For reference: 45/35/20 is 3.37; 50/40/20 is 2.5:
          // Source: http://www.radson.com/be/producten/paneelradiatoren/radson-compact.htm, accessed on 15/06/2011
          parameter Modelica.SIunits.Mass mMedium(start=1) = 0.0038*QNom*powerFactor
          "Mass of medium (water) in the radiator";
          parameter Modelica.SIunits.Mass mDry(start=1) = 0.018*QNom*powerFactor
          "Mass of dry material (steel/aluminium) in the radiator";
          // cpDry for steel: based on carbon steel, Polytechnisch zakboekje, E1/8
          parameter Modelica.SIunits.SpecificHeatCapacity cpDry=480
          "Specific heat capacity of the dry material, default is for steel";

          final parameter Real UA=QNom/((TInNom + TOutNom)/2 - TZoneNom)^n;

          Modelica.SIunits.HeatFlowRate QTotal(start=0)
          "Total heat emission of the radiator";
          Modelica.SIunits.TemperatureDifference dTRadRoo;
          Modelica.SIunits.Power QHeatTotal=-heatPortCon.Q_flow - heatPortRad.Q_flow;

      protected
          parameter Modelica.SIunits.MassFlowRate mFlowNom=QNom/medium.cp/(TInNom -
              TOutNom) "nominal mass flowrate";

        equation
          dTRadRoo = max(0, TMean - heatPortCon.T);
          // mass balance
          flowPort_a.m_flow + flowPort_b.m_flow = 0;

          // no pressure drop
          flowPort_a.p = flowPort_b.p;

          // fixing temperatures
          if noEvent(flowPort_a.m_flow > mFlowNom/10) then
            TIn = flowPort_a.h/medium.cp;
            TOut = max(heatPortCon.T, 2*TMean - TIn);
          else
            TIn = TMean;
            TOut = TMean;
          end if;

          // radiator equation
          QTotal = -UA*(dTRadRoo)^n;
          // negative for heat emission!
          heatPortCon.Q_flow = QTotal*(1 - fraRad);
          heatPortRad.Q_flow = QTotal*fraRad;

          // energy balance
          // the mass is lumped to TMean!  TOut can be DIFFERENT from TMean (when there is a flowrate)
          flowPort_a.H_flow + flowPort_b.H_flow + QTotal = (mMedium*medium.cp + mDry*
            cpDry)*der(TMean);

          // massflow a->b mixing rule at a, energy flow at b defined by medium's temperature
          // massflow b->a mixing rule at b, energy flow at a defined by medium's temperature
          flowPort_a.H_flow = semiLinear(
            flowPort_a.m_flow,
            flowPort_a.h,
            TOut*medium.cp);
          flowPort_b.H_flow = semiLinear(
            flowPort_b.m_flow,
            flowPort_b.h,
            TOut*medium.cp);
          annotation (Documentation(info="<html>
<p><b>Description</b> </p>
<p>Simplified dynamic radiator model, not discretized, based on EN&nbsp;442-2. </p>
<p>The <u>thermal emission</u> of the radiator is based on three equations:</p>
<p><code>&nbsp;QTotal&nbsp;=&nbsp;-&nbsp;UA&nbsp;*&nbsp;(dTRadRoo)^n;<font style=\"color: #006400; \">&nbsp;//&nbsp;negative&nbsp;for&nbsp;heat&nbsp;emission!</font></code></p>
<pre> heatPortCon.Q_flow&nbsp;=&nbsp;QTotal&nbsp;*&nbsp;(1-fraRad);
&nbsp;heatPortRad.Q_flow&nbsp;=&nbsp;QTotal&nbsp;*&nbsp;fraRad;</pre>
<p>In these equations, the temperature difference between radiator and room is based on TMean, while the outlet temperature TOut can be different. When there is no flow rate, all temperatures are equal and follow TMean. The first equation is the so-called radiator equation according&nbsp;to&nbsp;EN&nbsp;442-2, with n the radiator exponent (~ 1.3 for normal radiators).</p>
<p>The&nbsp;<u>capacity&nbsp;of&nbsp;the&nbsp;radiator</u>&nbsp;is&nbsp;based&nbsp;on&nbsp;a&nbsp;calculation&nbsp;for&nbsp;one&nbsp;type&nbsp;of&nbsp;radiator&nbsp;from&nbsp;Radson.&nbsp;&nbsp;The&nbsp;headlines&nbsp;of&nbsp;the&nbsp;calculation:</p>
<p>&nbsp;&nbsp;-&nbsp;we&nbsp;suppose&nbsp;the&nbsp;normative&nbsp;75/65/20&nbsp;design&nbsp;conditions&nbsp;(this&nbsp;is&nbsp;a&nbsp;crucial&nbsp;parameter: InletTemperature/OutletTemperature/AmbientTemperature!!!) </p>
<p>&nbsp;&nbsp;-&nbsp;we&nbsp;take&nbsp;a&nbsp;type&nbsp;22&nbsp;radiator&nbsp;from&nbsp;the&nbsp;Radson&nbsp;Compact&nbsp;or&nbsp;Integra&nbsp;series</p>
<p>&nbsp;&nbsp;-&nbsp;we&nbsp;take&nbsp;a&nbsp;length&nbsp;of&nbsp;1.05m,&nbsp;height&nbsp;0.6m</p>
<p>&nbsp;&nbsp;-&nbsp;we&nbsp;get&nbsp;a&nbsp;power&nbsp;of&nbsp;1924W,&nbsp;a&nbsp;water&nbsp;content&nbsp;of&nbsp;7.24&nbsp;l&nbsp;and&nbsp;a&nbsp;steel&nbsp;weight&nbsp;of&nbsp;35.52&nbsp;kg</p>
<p>&nbsp;&nbsp;-&nbsp;water&nbsp;content:&nbsp;0.0038&nbsp;l/W&nbsp;</p>
<p>&nbsp;&nbsp;-&nbsp;steel&nbsp;weight:&nbsp;0.018&nbsp;kg/W</p>
<p>&nbsp;&nbsp;Resulting&nbsp;capacity:&nbsp;24.6&nbsp;J/K&nbsp;per&nbsp;Watt&nbsp;of&nbsp;nominal&nbsp;power</p>
<p>&nbsp;&nbsp;Redo&nbsp;this&nbsp;calculation&nbsp;for&nbsp;other&nbsp;design&nbsp;conditions. &nbsp;Example:&nbsp;for&nbsp;45/35/20&nbsp;we&nbsp;would&nbsp;get&nbsp;3.37&nbsp;times&nbsp;less&nbsp;power,&nbsp;&nbsp;so&nbsp;we&nbsp;have&nbsp;to&nbsp;increase&nbsp;the&nbsp;volume&nbsp;and&nbsp;weight&nbsp;per&nbsp;Watt&nbsp;by&nbsp;3.37</p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>Simplified model based on normed radiator equation</li>
<li>No discretization (use an array of Radiators to obtain discretization)</li>
</ol></p>
<p><h4>Model use</h4></p>
<p><ol>
<li>Set all the parameters specifying the nominal power of the radiator (temperatures, Nominal heating power, radiator coefficient n, ...)</li>
<li>Set the parameters specifying the inertia (water content and dry mass). First, the powerFactor is set according to the design temperatures (for&nbsp;reference:&nbsp;45/35/20&nbsp;is&nbsp;3.37;&nbsp;50/40/20&nbsp;is&nbsp;2.5; Source:&nbsp;http://www.radson.com/be/producten/paneelradiatoren/compact.htm,&nbsp;accessed&nbsp;on&nbsp;15/06/2011). In most cases, this will be sufficient. The default computation for mMedium and mDry can be overwritten if a specific design is known. </li>
<li>Connect<u><b> both the heatPortCon and heatPortRad, </b></u>connection only one of them will lead to WRONG RESULTS.</li>
</ol></p>
<p><h4>Validation </h4></p>
<p>Validation has not been performed, but different verification models have been made to verify the properties under different operating conditions.</p>
<p><ul>
<li>the energy balance is checked for different operating conditions in <a href=\"modelica://IDEAS.Thermal.Components.Examples.Radiator_EnergyBalance\">IDEAS.Thermal.Components.Examples.Radiator_EnergyBalance</a></li>
<li>cooling down behaviour is tested in<a href=\"modelica://IDEAS.Thermal.Components.Examples.Radiator_CoolingDown\"> IDEAS.Thermal.Components.Examples.Radiator_CoolingDown</a></li>
</ul></p>
<p><h4>Example (optional) </h4></p>
<p>Besides the validation models, an example of the use of the radiator can be found in <a href=\"modelica://IDEAS.Thermal.Components.Examples.RadiatorWithMixingValve\">IDEAS.Thermal.Components.Examples.RadiatorWithMixingValve</a>.</p>
</html>",         revisions="<html>
<p><ul>
<li>2013 May, Roel De Coninck: documentation</li>
<li>2012 April, Roel De Coninck: rebasing on common Partial_Emission</li>
<li>2011, Roel De Coninck: first version</li>
</ul></p>
</html>"),         Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
                    {140,60}}), graphics={
                Rectangle(extent={{-64,-100},{-42,60}}, lineColor={135,135,135}),
                Rectangle(extent={{-34,-100},{-12,60}}, lineColor={135,135,135}),
                Rectangle(extent={{-4,-100},{18,60}}, lineColor={135,135,135}),
                Rectangle(extent={{26,-100},{48,60}}, lineColor={135,135,135}),
                Rectangle(extent={{54,-100},{76,60}}, lineColor={135,135,135}),
                Rectangle(extent={{82,-100},{104,60}}, lineColor={135,135,135})}));
        end Radiator;

        package Interfaces
        extends Modelica.Icons.InterfacesPackage;

          partial model Partial_Emission
          "Partial emission system for both radiators and floor heating"

            parameter Thermal.Data.Interfaces.Medium medium=Data.Media.Water()
            "Medium in the emission system";

            parameter Boolean floorHeating
            "true if the emission has a floor heating";
            parameter Boolean radiators "true if the emission has a radiator";

            // Interfaces ////////////////////////////////////////////////////////////////////////////////////////
            Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPortCon if radiators
            "convective heat transfer from radiators"   annotation (Placement(
                  transformation(extent={{40,50},{60,70}}), iconTransformation(extent={{
                      40,50},{60,70}})));

            Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPortRad if radiators
            "radiation heat transfer from radiators"   annotation (Placement(
                  transformation(extent={{80,50},{100,70}}), iconTransformation(extent={{
                      80,50},{100,70}})));

            Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b heatPortEmb if
              floorHeating
            "Port to the core of a floor heating/concrete activation"
              annotation (Placement(transformation(extent={{-60,48},{-40,68}}),
                  iconTransformation(extent={{-60,48},{-40,68}})));

            // General parameters for the design (nominal) conditions /////////////////////////////////////////////

            // Other parameters//////////////////////////////////////////////////////////////////////////////////////
            parameter Modelica.SIunits.Temperature TInitial=293.15
            "Initial temperature of all state variables";
            replaceable parameter
            IDEAS.Thermal.Components.BaseClasses.FH_Characteristics
              FHChars if floorHeating constrainedby
            IDEAS.Thermal.Components.BaseClasses.FH_Characteristics
            "Properties of the floor heating or TABS, if present";

            // Variables ///////////////////////////////////////////////////////////////////////////////////////////
            Modelica.SIunits.Temperature TMean(start=TInitial, fixed=false)
            "Mean water temperature";
            Modelica.SIunits.Temperature TIn(start=TInitial, fixed=false)
            "Temperature of medium inflow through flowPort_a";
            Modelica.SIunits.Temperature TOut(start=TInitial, fixed=false)
            "Temperature of medium outflow through flowPort_b";

            // General outputs

            Thermal.Components.Interfaces.FlowPort_a flowPort_a(h(start=TInitial*medium.cp,
                  fixed=false), medium=medium) "Fluid inlet" annotation (Placement(
                  transformation(extent={{-110,-80},{-90,-60}}), iconTransformation(
                    extent={{-110,-80},{-90,-60}})));
            Thermal.Components.Interfaces.FlowPort_b flowPort_b(h(start=TInitial*medium.cp,
                  fixed=false), medium=medium) "Fluid outlet" annotation (Placement(
                  transformation(extent={{130,20},{150,40}}), iconTransformation(extent={
                      {130,20},{150,40}})));
          initial equation
            //der(flowPort_a.h) = 0;
            annotation (
              Icon(coordinateSystem(extent={{-100,-100},{140,60}}, preserveAspectRatio=
                      true), graphics={
                  Line(
                    points={{-70,-70},{-100,-70}},
                    color={0,0,127},
                    smooth=Smooth.None),
                  Line(
                    points={{-70,-60},{-70,-80}},
                    color={0,0,127},
                    smooth=Smooth.None),
                  Line(
                    points={{110,40},{110,20}},
                    color={0,0,127},
                    smooth=Smooth.None),
                  Line(
                    points={{110,30},{140,30}},
                    color={0,0,127},
                    smooth=Smooth.None)}),
              Diagram(coordinateSystem(extent={{-100,-100},{140,60}}, preserveAspectRatio=
                     true), graphics),
              Documentation(info="<html>
<p><b>Description</b> </p>
<p>Partial class for hydraulic heat emission systems. Can be used to create radiators, fan coil units etc. but also for embedded systems (or thermally activated building systems, TABS) like floor heating, wall heating, concrete core activation etc. </p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>Defines 3 thermal ports: one for embedded systems, and two for stand-alone heat emission systems</li>
<li>Defines an inlet and outlet flowPort, but no dynamics nor equations are predefined in this partial class.</li>
<li>Defines variables TIn, TOut and TMean, the medium and the initial temperature TInitial.</li>
</ol></p>
<p><h4>Model use</h4></p>
<p>See the extensions of this class, like the <a href=\"modelica://IDEAS.Thermal.Components.Emission.Radiator\">Radiator</a> or EmbeddedPipe models. </p>
<p>Common to all those types is that the <a href=\"modelica://IDEAS.Thermal.Components.Emission.Interfaces.EmissionType\">emissionType</a> (enumeration) is to be set and this defines the presence of the heatPorts.</p>
</html>",           revisions="<html>
<p><ul>
<li>2013 May, Roel De Coninck: documentation</li>
<li>2011 August, Roel De Coninck: first version</li>
</ul></p>
</html>"));
          end Partial_Emission;
        end Interfaces;
      end Emission;

      package BaseClasses "Basic components for thermal fluid flow"
      extends Modelica.Icons.BasesPackage;

        model Pipe_HeatPort "Pipe with HeatPort"

          extends Thermal.Components.Interfaces.Partials.TwoPort;
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPort annotation (
              Placement(transformation(extent={{-10,-110},{10,-90}}, rotation=0)));
        equation
          // energy exchange with medium
          Q_flow = heatPort.Q_flow;
          // defines heatPort's temperature
          heatPort.T = T;
          // pressure drop = none
          flowPort_a.p = flowPort_b.p;
          annotation (
            Documentation(info="<html>
<p><b>Description</b> </p>
<p>Model for fluid flow through a pipe, including heat exchange with the environment. A dynamic heat balance is included, based on the in- and outlet enthalpy flow, the heat flux to/from environment and the internal mass m of the fluid content in the pipe. A stationary model is obtained when m=0 </p>
<p>m.cv.der(T) = heatPort.Q_flow + ( h_flow_in - h_flow_out) </p>
<p><b>Note:</b> as can be seen from the equation, injecting heat into a pipe with zero mass flow rate causes temperature rise defined by storing heat in medium&apos;s mass. </p>
<p><h4>Assumptions and limitations</h4></p>
<p><ol>
<li>No pressure drop</li>
<li>Conservation of mass</li>
<li>Heat exchange with environment</li>
</ol></p>
<p><h4>Parameters</h4></p>
<p>The following parameters have to be set by the user</p>
<p><ol>
<li>medium</li>
<li>mass of fluid in the pipe (<b>Note:</b> Setting parameter m to zero leads to neglection of temperature transient cv.m.der(T).)</li>
<li>initial temperature of the fluid (defaults to 20&deg;C)</li>
</ol></p>
<p><h4>Validation </h4></p>
<p>No validation performed; the model is based on physical principles</p>
<p><h4>Examples</h4></p>
<p>An example in which this model is used is the <a href=\"modelica://IDEAS.Thermal.Components.Examples.HydraulicCircuit\">HydraulicCircuit</a>.</p>
</html>",         revisions="<html>
<p><ul>
<li>2013 May 23, Roel De Coninck, documentation;</li>
<li>2012 November, Roel De Coninck, first implementation. </li>
</ul></p>
</html>"),  Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={Text(extent={{-150,100},{150,40}}, textString=
                  "%name"),Polygon(
                  points={{-10,-90},{-10,-40},{0,-20},{10,-40},{10,-90},{-10,-90}},
                  lineColor={255,0,0},
                  fillPattern=FillPattern.Forward,
                  fillColor={255,255,255}),Rectangle(
                  extent={{-100,20},{100,-20}},
                  lineColor={255,255,255},
                  fillColor={85,170,255},
                  fillPattern=FillPattern.HorizontalCylinder)}),
            Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
                    100,100}}), graphics));
        end Pipe_HeatPort;

        model Pipe_Insulated "Pipe with insulation, characterised by UA"

          parameter Thermal.Data.Interfaces.Medium medium=Data.Interfaces.Medium()
          "Medium in the component"   annotation (choicesAllMatching=true);
          parameter Modelica.SIunits.Mass m(start=1) "Mass of medium";
          // I remove this parameter completely because it can lead to wrong models!!!
          // See note in evernote of RDC
          //parameter Real tapT(final min=0, final max=1)=1
          //  "Defines temperature of heatPort between inlet and outlet temperature";
          parameter Modelica.SIunits.Temperature TInitial=293.15
          "Initial temperature of all Temperature states";

          parameter SI.ThermalConductance UA
          "Thermal conductance of the insulation";

          IDEAS.Thermal.Components.BaseClasses.Pipe_HeatPort heatedPipe(
            m=m,
            medium=medium,
            TInitial=TInitial)
            annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
          Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalConductor(G=
                UA) annotation (Placement(transformation(
                extent={{-4,-4},{4,4}},
                rotation=90,
                origin={0,-22})));
          Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heatPort annotation (
              Placement(transformation(extent={{-10,-50},{10,-30}}), iconTransformation(
                  extent={{-10,-50},{10,-30}})));
          Interfaces.FlowPort_a flowPort_a(medium=medium)
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
          Interfaces.FlowPort_b flowPort_b(medium=medium)
            annotation (Placement(transformation(extent={{90,-10},{110,10}})));
        equation
          connect(heatedPipe.heatPort, thermalConductor.port_b) annotation (Line(
              points={{0,-10},{0,-18},{2.22045e-016,-18}},
              color={191,0,0},
              smooth=Smooth.None));
          connect(thermalConductor.port_a, heatPort) annotation (Line(
              points={{-4.44089e-016,-26},{0,-26},{0,-40}},
              color={191,0,0},
              smooth=Smooth.None));
          connect(heatedPipe.flowPort_a, flowPort_a) annotation (Line(
              points={{-10,0},{-100,0}},
              color={0,128,255},
              smooth=Smooth.None));
          connect(heatedPipe.flowPort_b, flowPort_b) annotation (Line(
              points={{10,0},{100,0}},
              color={0,128,255},
              smooth=Smooth.None));
          annotation (
            Diagram(coordinateSystem(extent={{-100,-40},{100,40}}, preserveAspectRatio=
                    false), graphics),
            Icon(coordinateSystem(extent={{-100,-40},{100,40}}, preserveAspectRatio=
                    true), graphics={
                Line(
                  points={{-68,20},{-68,-20}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{68,20},{68,-20}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{-68,0},{-100,0}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{68,0},{100,0}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Rectangle(
                  extent={{-60,20},{60,-20}},
                  lineColor={100,100,100},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid)}),
            Documentation(info="<html>
<p><b>Description</b> </p>
<p>Insulated pipe: heat exchange with the environment is based on UA-value of the insulation.</p>
<p>Model for fluid flow through a pipe, including heat losses or gains with the environment through insulation. A dynamic heat balance is included, based on the in- and outlet enthalpy flow, the heat flux to/from environment and the internal mass m of the fluid content in the pipe. A stationary model is obtained when m=0 </p>
<p>m.cv.der(T) = ( h_flow_in - h_flow_out) - UA.(T - TAmb) </p>
<p><b>Note:</b> as can be seen from the equation, the pipe temperature T will converge to the ambient temperature when there is no mass flow rate. </p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>No pressure drop</li>
<li>Conservation of mass</li>
<li>Heat losses/gains with environment through conduction based on UA-value</li>
</ol></p>
<p><h4>Parameters</h4></p>
<p>The following parameters have to be set by the user</p>
<p><ol>
<li>medium</li>
<li>mass of fluid in the pipe (<b>Note:</b> Setting parameter m to zero leads to neglection of temperature transient cv.m.der(T).)</li>
<li>initial temperature of the fluid (defaults to 20&deg;C)</li>
<li>UA-value (W/K)</li>
</ol></p>
<p><h4>Validation </h4></p>
<p>No validation performed; the model is based on physical principles</p>
<p><h4><font color=\"#008000\">Examples</font></h4></p>
<p>Many models use an insulated pipe.  A very basic example can be found in the <a href=\"modelica://IDEAS.Thermal.Components.Examples.OpenHydraulicSystem\">OpenHydraulicSystem</a>.</p>
</html>",         revisions="<html>
<p><ul>
<li>2013 May 23, Roel De Coninck, documentation;</li>
<li>2012 November, Roel De Coninck, first implementation. </li>
</ul></p>
</html>"));
        end Pipe_Insulated;

        model AbsolutePressure "Defines absolute pressure level"

          parameter Thermal.Data.Interfaces.Medium medium=Data.Media.Water()
          "medium"
            annotation (__Dymola_choicesAllMatching=true);
          parameter Modelica.SIunits.Pressure p(start=0) "Pressure ground";
          Thermal.Components.Interfaces.FlowPort_a flowPort(final medium=medium)
            annotation (Placement(transformation(extent={{-110,-10},{-90,10}}, rotation=
                   0)));
        equation
          // defining pressure
          flowPort.p = p;
          // no energy exchange; no mass flow by default
          flowPort.H_flow = 0;
          annotation (
            Documentation(info="<html>
<p><h4>Description</h4></p>
<p><br/>This model sets an absolute pressure at the flowPort. It takes the role of an expansion vessel in an hydraulic system. </p>
<p>The function of this model can also be compared to a grounding in electrical circuits. </p>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>There is no enthalpy flowrate (nor mass flow) through the flowPort, so this model does not influence the thermal behaviour of the system. </li>
</ol></p>
<p><h4>Model use</h4></p>
<p>It is important that the absolute pressure is known in EVERY branch of an hydraulic system. All hydraulic components will simply pass the pressure through all their ports, except the pumps. There are two components that can set the pressure: the <a href=\"modelica://IDEAS.Thermal.Components.BaseClasses.Ambient\">IDEAS.Thermal.Components.BaseClasses.Ambient</a> and this one.  Therefore, the model will be balanced if one of these components determines the pressure in every section of the hydraulic circuitry which is isolated by pumps.</p>
<p>The following parameters have to be set:</p>
<p><ol>
<li>medium</li>
<li>the absolute pressure is to be specified, but the value is generally of no importance. </li>
</ol></p>
<p><h4>Validation </h4></p>
<p>None</p>
<p><h4>Example</h4></p>
<p>An example in which this model is used is the <a href=\"modelica://IDEAS.Thermal.Components.Examples.PumpePipeTester\">PumpPipeTester</a>.</p>
</html>"),  Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}),graphics),
            Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={
                Line(
                  points={{-70,20},{-70,-20}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{-70,0},{-100,0}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Ellipse(
                  extent={{-60,60},{60,-60}},
                  lineColor={100,100,100},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid)}));
        end AbsolutePressure;

        model Pump "Prescribed mass flow rate, no heat exchange."

          extends Thermal.Components.Interfaces.Partials.TwoPort;
          parameter Boolean useInput=false
          "Enable / disable MassFlowRate input"
            annotation (Evaluate=true);
          parameter Modelica.SIunits.MassFlowRate m_flowNom(min=0, start=1)
          "Nominal mass flowrate"   annotation (Dialog(enable=not useVolumeFlowInput));
          parameter Modelica.SIunits.Pressure dpFix=50000
          "Fixed pressure drop, used for determining the electricity consumption";
          parameter Real etaTot=0.8 "Fixed total pump efficiency";
          Modelica.SIunits.Power PEl "Electricity consumption";
          Modelica.Blocks.Interfaces.RealInput m_flowSet(
            start=0,
            min=0,
            max=1) = m_flow/m_flowNom if useInput annotation (Placement(transformation(
                origin={0,100},
                extent={{-10,-10},{10,10}},
                rotation=270)));
      protected
          Modelica.SIunits.MassFlowRate m_flow;

        equation
          if not useInput then
            m_flow = m_flowNom;
          end if;

          Q_flow = 0;
          flowPort_a.m_flow = m_flow;
          PEl = m_flow/medium.rho*dpFix/etaTot;
          annotation (
            Documentation(info="<html>
<p><b>Description</b> </p>
<p>Basic pump model without heat exchange. This model sets the mass flow rate, either as a constant or based on an input. The thermal equations are identical to the <a href=\"modelica://IDEAS.Thermal.Components.BaseClasses.Pipe\">Pipe</a> model.</p>
<p>If an input is used (<code>useInput&nbsp;=&nbsp;true)</code>, <code>m_flowSet</code> is supposed to be a real value, and the flowrate is then <code>m_flowSet * m_flowNom. m_flowSet </code>is logically between 0 and 1, but any value is possible, as shown in the provided Example.</p>
<p>The model calculates the electricity consumption of the pump in a very simplified way: a fixed pressure drop and an efficiency are given as parameters, and the electricity consumption is computed as:</p>
<pre>PEl&nbsp;=&nbsp;m_flow&nbsp;/&nbsp;medium.rho&nbsp;*&nbsp;dpFix&nbsp;/&nbsp;etaTot;</pre>
<p><h4>Assumptions and limitations </h4></p>
<p><ol>
<li>This model does not specify a relation between pressure and flowrate, the flowrate is IMPOSED</li>
<li>If the water content of the pump, m, is zero, there are no thermal dynamics. </li>
<li>The electricity consumption is computed based on a FIXED efficiency and FIXED pressure drop AS PARAMETERS</li>
<li>The inefficiency of the pump does NOT lead to an enthalpy increase of the outlet flow.</li>
</ol></p>
<p><h4>Model use</h4></p>
<p><ol>
<li>Decide if the pump will be controlled through an input or if the flowrate is a constant</li>
<li>Set medium and water content of the pump</li>
<li>Specify the parameters for computing the electricity consumption</li>
</ol></p>
<p><h4>Validation </h4></p>
<p>None</p>
<p><h4>Example </h4></p>
<p>An example in which this model is used is the <a href=\"modelica://IDEAS.Thermal.Components.Examples.HydraulicCircuit\">HydraulicCircuit</a>.</p>
</html>",         revisions="<html>
<p><ul>
<li>2013, Roel De Coninck, documentation</li>
<li>2012, Ruben Baetens, changed graphics</li>
<li>2010, Roel De Coninck, First version</li>
</ul></p>
</html>"),  Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={
                Ellipse(
                  extent={{-60,60},{60,-60}},
                  lineColor={135,135,135},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-40,20},{0,-20}},
                  lineColor={0,0,0},
                  textString="V"),
                Line(
                  points={{-100,0},{-60,0}},
                  color={0,128,255},
                  smooth=Smooth.None),
                Line(
                  points={{100,0},{60,0}},
                  color={0,128,255},
                  smooth=Smooth.None),
                Line(
                  points={{0,0},{0,80}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Line(
                  points={{-40,80},{40,80}},
                  color={0,0,127},
                  smooth=Smooth.None),
                Polygon(
                  points={{-38,46},{60,0},{60,0},{-38,-46},{-38,46}},
                  lineColor={135,135,135},
                  fillColor={135,135,135},
                  fillPattern=FillPattern.Solid)}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics));
        end Pump;

        record FH_Characteristics
        "Record containing all parameters for a given floor heating"

          // The terminology from prEN 15377 is followed, even if I find the development of the theory
          // by Koschenz and Lehmann better (see Thermoaktive Bauteilsysteme tabs, from Empa)

          // First Version 20110622

          // Changed 20110629:
          // Important: this record ALSO contains the parameters that are specific to the building.

          parameter Boolean tabs = true
          "true if the model is used for tabs, false if the model is used for floor heating";

          parameter Modelica.SIunits.Length T(
            min=0.15,
            max=0.3) = 0.2 "Pipe spacing, limits imposed by prEN 15377-3 p22";
          parameter Modelica.SIunits.Length d_a=0.02
          "External diameter of the pipe";
          parameter Modelica.SIunits.Length s_r=0.0025
          "Thickness of the pipe wall";
          parameter Modelica.SIunits.ThermalConductivity lambda_r=0.35
          "Thermal conductivity of the material of the pipe";
          parameter Modelica.SIunits.Length S_1=0.1
          "Thickness of the concrete/screed ABOVE the pipe layer";
          parameter Modelica.SIunits.Length S_2=0.1
          "Thickness of the concrete/screed UNDER the pipe layer";
          parameter Modelica.SIunits.Area A_Floor=1
          "Tabs floor surface, CHANGE THIS!!";
          parameter Modelica.SIunits.ThermalConductivity lambda_b=1.8
          "Thermal conductivity of the concrete or screed layer";
          parameter Modelica.SIunits.SpecificHeatCapacity c_b=840
          "Thermal capacity of the concrete/screed material";
          parameter Modelica.SIunits.Density rho_b=2100
          "Density of the concrete/screed layer";
          constant Integer n1=3 "Number of discrete capacities in upper layer";
          constant Integer n2=3 "Number of discrete capacities in lower layer";

          // Extra parameters for floor heating
          parameter Modelica.SIunits.ThermalConductivity lambda_i = 0.036
          "heat conductivity of the isolation";
          parameter Modelica.SIunits.Length d_i = 0.05
          "Thickness of the insulation";
          final parameter Real alp2 = lambda_i / d_i
          "help variable for resistance calculation";
          annotation (Documentation(info="<html>
<p><b>Description</b> </p>
<p>Record containing the properties of a floor heating or TABS.  The&nbsp;terminology&nbsp;from&nbsp;prEN&nbsp;15377&nbsp;is&nbsp;followed,&nbsp;even&nbsp;if&nbsp;I&nbsp;find&nbsp;the&nbsp;development&nbsp;of&nbsp;the&nbsp;theory by&nbsp;Koschenz&nbsp;and&nbsp;Lehmann&nbsp;better&nbsp;(see&nbsp;Thermoaktive&nbsp;Bauteilsysteme&nbsp;tabs,&nbsp;from&nbsp;Empa)</p>
<p><h4>Model use</h4></p>
<p><ol>
<li>It&apos;s important to set at least the floor surface to something different from 1</li>
<li>The embeddedPipe model has a few assertions to check the validity of some parameters and their combinations.</li>
</ol></p>
</html>",         revisions="<html>
<p><ul>
<li>2013 May, Roel De Coninck, documentation</li>
<li>2011 June, Roel De Coninck, first version</li>
</ul></p>
</html>"));
        end FH_Characteristics;
      annotation (Documentation(info="<html>
</html>",       revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.20 Beta 2005/02/18 Anton Haumer<br>
       introduced geodetic height in Components.Pipes<br>
       <i>new models: Components.Valve</i></li>
  <li> v1.30 Beta 2005/06/02 Anton Haumer<br>
       friction losses are fed to medium</li>
  </ul>
</HTML>
"),       Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                100}}), graphics));
      end BaseClasses;

      package Interfaces "Connectors and partial models"
      extends Modelica.Icons.InterfacesPackage;

        connector FlowPort "Connector flow port"

          extends Modelica.Thermal.FluidHeatFlow.Interfaces.FlowPort;
          annotation (Documentation(info="<HTML>
Basic definition of the connector.<br>
<b>Variables:</b>
<ul>
<li>Pressure p</li>
<li>flow MassFlowRate m_flow</li>
<li>Specific Enthalpy h</li>
<li>flow EnthaplyFlowRate H_flow</li>
</ul>
If ports with different media are connected, the simulation is asserted due to the check of parameter.
</HTML>"));
        end FlowPort;

        connector FlowPort_a "Filled flow port (used upstream)"

          extends FlowPort;
          annotation (
            Documentation(info="<HTML>
Same as FlowPort, but icon allows to differentiate direction of flow.
</HTML>"),  Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={Rectangle(
                  extent={{-100,100},{100,-100}},
                  lineColor={0,0,255},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid), Ellipse(
                  extent={{-98,98},{98,-98}},
                  lineColor={0,0,255},
                  fillColor={0,0,255},
                  fillPattern=FillPattern.Solid)}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={
                Rectangle(
                  extent={{-50,50},{50,-50}},
                  lineColor={255,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Ellipse(
                  extent={{-48,48},{48,-48}},
                  lineColor={0,0,255},
                  fillColor={0,0,255},
                  fillPattern=FillPattern.Solid),
                Text(
                  extent={{-100,110},{100,50}},
                  lineColor={0,0,255},
                  textString="%name")}));
        end FlowPort_a;

        connector FlowPort_b "Hollow flow port (used downstream)"

          extends FlowPort;
          annotation (
            Documentation(info="<HTML>
Same as FlowPort, but icon allows to differentiate direction of flow.
</HTML>"),  Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={Rectangle(
                  extent={{-100,100},{100,-100}},
                  lineColor={0,0,255},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid), Ellipse(
                  extent={{-98,98},{98,-98}},
                  lineColor={0,0,255},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid)}),
            Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                    100}}), graphics={
                Rectangle(
                  extent={{-50,50},{50,-50}},
                  lineColor={255,0,0},
                  fillColor={255,255,255},
                  fillPattern=FillPattern.Solid),
                Ellipse(extent={{-48,48},{48,-48}}, lineColor={0,0,255}),
                Text(
                  extent={{-100,110},{100,50}},
                  lineColor={0,0,255},
                  textString="%name")}));
        end FlowPort_b;

        package Partials "Partial models"
        extends Modelica.Icons.Package;

          partial model TwoPort "Partial model of two port"

            parameter Thermal.Data.Interfaces.Medium medium=Data.Interfaces.Medium()
            "Medium in the component"   annotation (choicesAllMatching=true);
            parameter Modelica.SIunits.Mass m(start=1) "Mass of medium";
            // I remove this parameter completely because it can lead to wrong models!!!
            // See note in evernote of RDC
            //parameter Real tapT(final min=0, final max=1)=1
            //  "Defines temperature of heatPort between inlet and outlet temperature";
            parameter Modelica.SIunits.Temperature TInitial=293.15
            "Initial temperature of all Temperature states";

            Modelica.SIunits.HeatFlowRate Q_flow(start=0)
            "Heat exchange with ambient";
            Modelica.SIunits.Temperature T(start=TInitial)
            "Outlet temperature of medium";
            Modelica.SIunits.Temperature T_a(start=TInitial) = flowPort_a.h/medium.cp
            "Temperature at flowPort_a";
            Modelica.SIunits.Temperature T_b(start=TInitial) = flowPort_b.h/medium.cp
            "Temperature at flowPort_b";

            Modelica.SIunits.TemperatureDifference dT(start=0) = if noEvent(flowPort_a.m_flow
               >= 0) then T - T_a else T_b - T
            "Outlet temperature minus inlet temperature";

            Modelica.SIunits.SpecificEnthalpy h=medium.cp*T
            "Medium's specific enthalpy";

        public
            FlowPort_a flowPort_a(final medium=medium, h(min=1140947, max=1558647))
              annotation (Placement(transformation(extent={{-110,-10},{-90,10}}, rotation=
                     0)));
            FlowPort_b flowPort_b(final medium=medium, h(min=1140947, max=1558647))
              annotation (Placement(transformation(extent={{90,-10},{110,10}}, rotation=0)));
          equation
            // mass balance
            flowPort_a.m_flow + flowPort_b.m_flow = 0;

            // no equation about pressure drop here in order to allow pumps to extend from this partial

            // energy balance
            if m > Modelica.Constants.small then
              flowPort_a.H_flow + flowPort_b.H_flow + Q_flow = m*medium.cv*der(T);
            else
              flowPort_a.H_flow + flowPort_b.H_flow + Q_flow = 0;
            end if;
            // massflow a->b mixing rule at a, energy flow at b defined by medium's temperature
            // massflow b->a mixing rule at b, energy flow at a defined by medium's temperature
            flowPort_a.H_flow = semiLinear(
              flowPort_a.m_flow,
              flowPort_a.h,
              h);
            flowPort_b.H_flow = semiLinear(
              flowPort_b.m_flow,
              flowPort_b.h,
              h);
            annotation (Documentation(info="<html>
<p><b>General description</b> </p>
<p><h5>Goal</h5></p>
<p>Partial model with two flowPorts.</p>
<p><h5>Description </h5></p>
<p>This model is deviated from Modelica.Thermal.FluidHeatFlow.Interfaces.Partials.TwoPort</p>
<p>Possible heat exchange with the ambient is defined by Q_flow; setting this = 0 means no energy exchange.</p>
<p>Setting parameter m (mass of medium within component) to zero leads to neglection of temperature transient cv*m*der(T).</p>
<p>Mass flow can go in both directions, the temperature T is mapped to the outlet temperature. Mixing rule is applied. </p>
<p><h5>Assumptions and limitations </h5></p>
<p><ol>
<li>This model makes assumption of mass balance: outlet flowrate = inlet flowrate</li>
<li>This model includes the energy balance equation as a first order differential equation,<b> unless m=0</b></li>
</ol></p>
<p><h4>Parameters</h4></p>
<p>Partial model, see extensions for implementation details.</p>
<p><h4>Validation </h4></p>
<p>Based on physical principles, no validation performed.</p>
</html>"));
          end TwoPort;
        annotation (Documentation(info="<HTML>
This package contains partial models, defining in a very compact way the basic thermodynamic equations used by the different components.<br>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  <p>
  Dr. Christian Kral<br>
  <a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a><br>
  Giefinggasse 2<br>
  A-1210 Vienna, Austria
</p>
  </dd>
</dl>
<p>
Copyright &copy; 1998-2010, Modelica Association, Anton Haumer and Austrian Institute of Technology, AIT.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"http://www.modelica.org/licenses/ModelicaLicense2\"> http://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",         revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.10 2005/02/15 Anton Haumer<br>
       moved Partials into Interfaces</li>
  <li> v1.11 2005/02/18 Anton Haumer<br>
       corrected usage of cv and cp</li>
  <li> v1.30 Beta 2005/06/02 Anton Haumer<br>
       friction losses are fed to medium</li>
  <li> v1.31 Beta 2005/06/04 Anton Haumer<br>
       searching solution for problems @ m_flow=0</li>
  <li> v1.33 Beta 2005/06/07 Anton Haumer<br>
       corrected usage of simpleFlow</li>
  <li> v1.43 Beta 2005/06/20 Anton Haumer<br>
       Test of mixing / semiLinear</li>
  <li> v1.50 2005/09/07 Anton Haumer<br>
       semiLinear works fine<br>
       removed test-version of semiLinear</li>
  <li> v1.60 2007/01/23 Anton Haumer<br>
       new parameter tapT defining Temperature of heatPort</li>
  </ul>
</HTML>
"));
        end Partials;
      annotation (Documentation(info="<HTML>
This package contains connectors and partial models:
<ul>
<li>FlowPort: basic definition of the connector.</li>
<li>FlowPort_a &amp; FlowPort_b: same as FlowPort with different icons to differentiate direction of flow</li>
<li>package Partials (defining basic thermodynamic equations)</li>
</ul>
<dl>
  <dt><b>Main Authors:</b></dt>
  <dd>
  <p>
  <a href=\"http://www.haumer.at/\">Anton Haumer</a><br>
  Technical Consulting &amp; Electrical Engineering<br>
  A-3423 St.Andrae-Woerdern, Austria<br>
  email: <a href=\"mailto:a.haumer@haumer.at\">a.haumer@haumer.at</a>
</p>
  <p>
  Dr. Christian Kral<br>
  <a href=\"http://www.ait.ac.at/\">Austrian Institute of Technology, AIT</a><br>
  Giefinggasse 2<br>
  A-1210 Vienna, Austria
</p>
  </dd>
</dl>
<p>
Copyright &copy; 1998-2010, Modelica Association, Anton Haumer and Austrian Institute of Technology, AIT.
</p>
<p>
<i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>; it can be redistributed and/or modified under the terms of the Modelica License 2. For license conditions (including the disclaimer of warranty) see <a href=\"modelica://Modelica.UsersGuide.ModelicaLicense2\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"http://www.modelica.org/licenses/ModelicaLicense2\"> http://www.modelica.org/licenses/ModelicaLicense2</a>.</i>
</p>
</HTML>",       revisions="<HTML>
  <ul>
  <li> v1.00 2005/02/01 Anton Haumer<br>
       first stable official release</li>
  <li> v1.10 2005/02/15 Anton Haumer<br>
       moved Partials into Interfaces</li>
  <li> v1.11 2005/02/18 Anton Haumer<br>
       corrected usage of cv and cp</li>
  <li> v1.30 Beta 2005/06/02 Anton Haumer<br>
       friction losses are fed to medium</li>
  <li> v1.33 Beta 2005/06/07 Anton Haumer<br>
       corrected usage of simpleFlow</li>
  <li> v1.43 Beta 2005/06/20 Anton Haumer<br>
       Test of mixing / semiLinear</li>
  <li> v1.50 2005/09/07 Anton Haumer<br>
       semiLinear works fine</li>
  </ul>
</HTML>
"),       Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                100}}), graphics));
      end Interfaces;
    end Components;

    package Data
    extends Modelica.Icons.MaterialPropertiesPackage;

      package Media
      extends Modelica.Icons.MaterialPropertiesPackage;

        record Water "Medium properties of water"
          extends Thermal.Data.Interfaces.Medium(
            rho=995.6,
            cp=4177,
            cv=4177,
            lamda=0.615,
            nue=0.8E-6);
          annotation (Documentation(info="<html>
Medium: properties of water
</html>"));
        end Water;
      end Media;

      package Interfaces
      extends Modelica.Icons.InterfacesPackage;

        record Medium "Record containing media properties"

          extends Modelica.Icons.MaterialProperty;

          parameter Modelica.SIunits.Density rho=1 "Density";
          parameter Modelica.SIunits.SpecificHeatCapacity cp=1
          "Specific heat capacity at constant pressure";
          parameter Modelica.SIunits.SpecificHeatCapacity cv=1
          "Specific heat capacity at constant volume";
          parameter Modelica.SIunits.ThermalConductivity lamda=1
          "Thermal conductivity";
          parameter Modelica.SIunits.KinematicViscosity nue=1
          "Kinematic viscosity";
          annotation (Documentation(info="<html>
Record containing (constant) medium properties.
</html>"));
        end Medium;
      end Interfaces;
    end Data;
  end Thermal;

  package Occupants "Building occupant models"
  extends Modelica.Icons.Package;

    package Extern
    extends Modelica.Icons.Package;

      package Interfaces
      extends Modelica.Icons.InterfacesPackage;

        model Occ_Files "Dummy file reader for occupant model"
          parameter Integer nOcc=1 "Number of occupant data sets to be read"
            annotation (Dialog(group="Building occupants"));
          parameter String filPres="User_zeros.txt"
          "Filename for occupancy presence"
            annotation (Dialog(group="Building occupants"));
          parameter String filQCon="User_zeros.txt"
          "Filename for occupancy-driven convective gains"
            annotation (Dialog(group="Building occupants"));
          parameter String filQRad="User_zeros.txt"
          "Filename for occupancy-driven radiative gains"
            annotation (Dialog(group="Building occupants"));
          parameter String filP="User_zeros.txt"
          "Filename for occupancy-driven active power load"
            annotation (Dialog(group="Building occupants"));
          parameter String filQ="User_zeros.txt"
          "Filename for occupancy-driven reactive power load"
            annotation (Dialog(group="Building occupants"));
          parameter String filDHW="User_zeros.txt"
          "Filename for occupancy-driven domestic hot water redrawal"
            annotation (Dialog(group="Building occupants"));
        end Occ_Files;
      end Interfaces;
    end Extern;
  end Occupants;

  package BaseClasses "Base classes for IDEAS"
  extends Modelica.Icons.BasesPackage;

    package Control "General stuff"
    extends Modelica.Icons.Package;

      block Hyst_NoEvent "Hysteresis without events, with Real in- and output"

        extends Modelica.Blocks.Interfaces.partialBooleanBlockIcon;
        parameter Real uLow;
        parameter Real uHigh;
        parameter Boolean enableRelease=false
        "if true, an additional RealInput will be available for releasing the controller";

        Modelica.Blocks.Interfaces.RealInput u
          annotation (Placement(transformation(extent={{-128,-20},{-88,20}})));
        Modelica.Blocks.Interfaces.RealOutput y(start=0)
          annotation (Placement(transformation(extent={{96,-10},{116,10}})));

        output Real error(start=0);

        Modelica.Blocks.Interfaces.RealInput release(start=0) = rel if enableRelease
        "if < 0.5, the controller is OFF"
          annotation (Placement(transformation(extent={{-128,60},{-88,100}})));
    protected
        Real rel
        "release, either 1 ,either from RealInput release if enableRelease is true";

      equation
        if not enableRelease then
          rel = 1;
        end if;

        if noEvent(u >= uHigh and rel > 0.5) then
          y = 1;
        elseif noEvent(u <= uLow) then
          y = 0;
        elseif noEvent(u > uLow) and noEvent(y > 0.5) and noEvent(rel > 0.5) then
          y = 1;
        else
          y = 0;
        end if;

        /* 
  We have experienced errors with the hysteresis without events in case the tolerance of the 
  integrator is too low: some unlogical behaviour.
  To check correct behaviour, it was possible to define the error as below. 
  The u-delay(u,1) is there because der(u) causes problems in case u is not continuous...
  */

        error = if noEvent(u < uHigh and u > uLow and u - delay(u, 1) < 0 and y < 0.5)
           then 1.0 else 0.0;
        annotation (
          Diagram(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                  100}}), graphics={Polygon(
                points={{-65,89},{-73,67},{-57,67},{-65,89}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),Line(points={{-65,67},{-65,-81}},
                color={192,192,192}),Line(points={{-90,-70},{82,-70}}, color={192,192,
                192}),Polygon(
                points={{90,-70},{68,-62},{68,-78},{90,-70}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),Text(
                extent={{70,-80},{94,-100}},
                lineColor={160,160,164},
                textString="u"),Text(
                extent={{-65,93},{-12,75}},
                lineColor={160,160,164},
                textString="y"),Line(
                points={{-80,-70},{30,-70}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{-50,10},{80,10}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{-50,10},{-50,-70}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{30,10},{30,-70}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{-10,-65},{0,-70},{-10,-75}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{-10,15},{-20,10},{-10,5}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{-55,-20},{-50,-30},{-44,-20}},
                color={0,0,0},
                thickness=0.5),Line(
                points={{25,-30},{30,-19},{35,-30}},
                color={0,0,0},
                thickness=0.5),Text(
                extent={{-99,2},{-70,18}},
                lineColor={160,160,164},
                textString="true"),Text(
                extent={{-98,-87},{-66,-73}},
                lineColor={160,160,164},
                textString="false"),Text(
                extent={{19,-87},{44,-70}},
                lineColor={0,0,0},
                textString="uHigh"),Text(
                extent={{-63,-88},{-38,-71}},
                lineColor={0,0,0},
                textString="uLow"),Line(points={{-69,10},{-60,10}}, color={160,160,
                164})}),
          Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},{100,
                  100}}), graphics={Polygon(
                points={{-80,90},{-88,68},{-72,68},{-80,90}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),Line(points={{-80,68},{-80,-29}},
                color={192,192,192}),Polygon(
                points={{92,-29},{70,-21},{70,-37},{92,-29}},
                lineColor={192,192,192},
                fillColor={192,192,192},
                fillPattern=FillPattern.Solid),Line(points={{-79,-29},{84,-29}},
                color={192,192,192}),Line(points={{-79,-29},{41,-29}}, color={0,0,0}),
                Line(points={{-15,-21},{1,-29},{-15,-36}}, color={0,0,0}),Line(points=
                 {{41,51},{41,-29}}, color={0,0,0}),Line(points={{33,3},{41,22},{50,3}},
                color={0,0,0}),Line(points={{-49,51},{81,51}}, color={0,0,0}),Line(
                points={{-4,59},{-19,51},{-4,43}}, color={0,0,0}),Line(points={{-59,
                29},{-49,11},{-39,29}}, color={0,0,0}),Line(points={{-49,51},{-49,-29}},
                color={0,0,0}),Text(
                extent={{-92,-49},{-9,-92}},
                lineColor={192,192,192},
                textString="%uLow"),Text(
                extent={{2,-49},{91,-92}},
                lineColor={192,192,192},
                textString="%uHigh"),Rectangle(extent={{-91,-49},{-8,-92}}, lineColor=
                 {192,192,192}),Line(points={{-49,-29},{-49,-49}}, color={192,192,192}),
                Rectangle(extent={{2,-49},{91,-92}}, lineColor={192,192,192}),Line(
                points={{41,-29},{41,-49}}, color={192,192,192})}),
          Documentation(info="<HTML>
<p>
This block transforms a <b>Real</b> input signal into a <b>Boolean</b>
output signal:
</p>
<ul>
<li> When the output was <b>false</b> and the input becomes
     <b>greater</b> than parameter <b>uHigh</b>, the output
     switches to <b>true</b>.</li>
<li> When the output was <b>true</b> and the input becomes
     <b>less</b> than parameter <b>uLow</b>, the output
     switches to <b>false</b>.</li>
</ul>
<p>
The start value of the output is defined via parameter
<b>pre_y_start</b> (= value of pre(y) at initial time).
The default value of this parameter is <b>false</b>.
</p>
</HTML>
"));
      end Hyst_NoEvent;
    end Control;

    package Math "General mathematical stuff"
    extends Modelica.Icons.Package;

      function MaxSmooth

        input Real u1 "first argument for maximum";
        input Real u2 "second argument for maximum";
        input Real delta "width of the transition interval";
        output Real y "smooth maximum result";

      algorithm
        y := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
          pos=u1,
          neg=u2,
          x=u1 - u2,
          deltax=delta);

      end MaxSmooth;

      function MinSmooth

        input Real u1 "first argument for maximum";
        input Real u2 "second argument for maximum";
        input Real delta "width of the transition interval";
        output Real y "smooth maximum result";

      algorithm
        y := Modelica.Media.Air.MoistAir.Utilities.spliceFunction(
          pos=u1,
          neg=u2,
          x=u2 - u1,
          deltax=delta);

      end MinSmooth;
    end Math;
  end BaseClasses;

  package Constants "Constants for IDEAS"
  extends Modelica.Icons.VariantsPackage;

  final constant Modelica.SIunits.Angle Wall=Modelica.Constants.pi/2
    "Inclination for vertical wall";

  final constant Modelica.SIunits.Angle Floor=Modelica.Constants.pi
    "inclination for floor";

  final constant Modelica.SIunits.Angle South=0
    "Azimuth for an exterior wall whose outer surface faces south";

  final constant Modelica.SIunits.Angle North=Modelica.Constants.pi
    "Azimuth for an exterior wall whose outer surface faces north";

  final constant Modelica.SIunits.Angle West=+Modelica.Constants.pi/2
    "Azimuth for an exterior wall whose outer surface faces west";
  end Constants;
annotation (
  uses(Modelica(version="3.2.1")),
  Icon(graphics),
  version="0.1",
  conversion(noneFromVersion="", noneFromVersion="1"),
  Documentation(info="<html>
<p>Licensed by KU Leuven and 3E under the Modelica License 2 </p>
<p>Copyright &copy; 2013-2023, KU Leuven and 3E. </p>
<p>&nbsp; </p>
<p><i>This Modelica package is <u>free</u> software and the use is completely at <u>your own risk</u>;</i>  <i>it can be redistributed and/or modified under the terms of the Modelica License 2. </i></p>
<p><i>For license conditions (including the disclaimer of warranty) see <a href=\"UrlBlockedError.aspx\">Modelica.UsersGuide.ModelicaLicense2</a> or visit <a href=\"https://www.modelica.org/licenses/ModelicaLicense2\">https://www.modelica.org/licenses/ModelicaLicense2</a>.</i> </p>
</html>"));
end IDEAS;

package UseCaseEnEffBIM

  package BoilerGasRadiator1_1

    model IDEAS
      import IDEAS;

      IDEAS.Buildings.Components.Zone zone(
        V=52.5,
        nSurf=7,
        corrCV=1,
        linear=true,
        n50=12,
        TOpStart=294.15)
        annotation (Placement(transformation(extent={{82,66},{102,86}})));
      IDEAS.Buildings.Components.InternalWall internalWall(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType,
        AWall=15,
        inc=IDEAS.Constants.Wall,
        azi=IDEAS.Constants.South,
        insulationThickness=0,
        constructionType(nLay=1, mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.24,
              k=0.56,
              c=1050,
              rho=1300,
              epsLw=0.88,
              epsSw=0.55,
              gas=false)})) "Ostseite"    annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={13,58})));
      IDEAS.Buildings.Components.Window window(
        A=7,
        frac=0,
        azi=IDEAS.Constants.South,
        redeclare IDEAS.Buildings.Data.Frames.None fraType,
        redeclare IDEAS.Buildings.Components.Shading.None shaType,
        glazing(
          nLay=3,
          SwAbs=[0,0.0643,0.0,0.0522; 20,0.0659,0.0,0.0534; 30,0.0679,0.0,0.0548;
              40,0.0708,0.0,0.0566; 48,0.0738,0.0,0.058; 55,0.0769,0.0,0.0587; 57,
              0.0779,0.0,0.0587; 60,0.0796,0.0,0.0585; 63,0.0815,0.0,0.0579; 66,
              0.0837,0.0,0.0568; 68,0.0852,0.0,0.0558; 70,0.0858,0.0,0.0544; 72,
              0.089,0.0,0.0521; 75,0.0911,0.0,0.0495; 77.5,0.0929,0.0,0.0457; 80,
              0.094,0.0,0.0413; 82,0.0937,0.0,0.0372; 83.5,0.0924,0.0,0.0335; 85,
              0.0892,0.0,0.0291; 86,0.0854,0.0,0.0254; 87,0.079,0.0,0.0205; 88,
              0.0671,0.0,0.0128; 89,0.0473,0.0,0.0043; 89.5,0.304,0.0,0.0004; 89.99,
              0.001,0.0,0.0; 90,0.00,0.0,0.0],
          SwTrans=[0,0.747454; 10,0.746824; 20,0.744654; 30,0.739491; 40,0.729832;
              45,0.720922; 50,0.707331; 60,0.652331; 70,0.516754; 80,0.263009; 88.9,
              0.00; 90,0.00],
          SwAbsDif={0.0796,0.0,0.0585},
          SwTransDif=0.652331,
          U_value=2.1,
          g_value=0.75,
          mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.003175,
              k=0.96,
              c=750,
              rho=2500,
              epsLw=0.84,
              epsSw=0.67,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.013,
              k=0.0241,
              c=1008,
              rho=1.23,
              epsLw=0,
              epsSw=0,
              gas=true,
              mhu=18.3*10e-6),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.003175,
              k=0.96,
              c=750,
              rho=2500,
              epsLw=0.84,
              epsSw=0.67,
              gas=false)}),
        inc=1.5707963267949) annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={65,58})));
      IDEAS.Buildings.Components.InternalWall internalWall1(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType(
          k=0.06,
          c=840,
          rho=50),
        AWall=17.5,
        inc=IDEAS.Constants.Floor,
        azi=IDEAS.Constants.South,
        insulationThickness=0,
        constructionType(nLay=4, mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.002,
              k=0.21,
              c=1470,
              rho=1300,
              epsLw=0.93,
              epsSw=0.94,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.045,
              k=1.4,
              c=1050,
              rho=2200,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.012,
              k=0.06,
              c=840,
              rho=50,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.15,
              k=2.035,
              c=1050,
              rho=2400,
              epsLw=0.88,
              epsSw=0.55,
              gas=false)})) "Fußboden"    annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={-85,58})));
      IDEAS.Buildings.Components.InternalWall internalWall2(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType,
        AWall=15,
        inc=IDEAS.Constants.Wall,
        azi=IDEAS.Constants.West,
        insulationThickness=0,
        constructionType(nLay=1, mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.24,
              k=0.56,
              c=1050,
              rho=1300,
              epsLw=0.88,
              epsSw=0.55,
              gas=false)})) "Westseite"    annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={-35,58})));
      IDEAS.Buildings.Components.InternalWall internalWall3(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType,
        AWall=10.5,
        inc=IDEAS.Constants.Wall,
        azi=IDEAS.Constants.North,
        insulationThickness=0,
        constructionType(nLay=1, mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.24,
              k=0.56,
              c=1050,
              rho=1300,
              epsLw=0.88,
              epsSw=0.55,
              gas=false)})) "Nordseite"    annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={-11,58})));
      IDEAS.Buildings.Components.InternalWall internalWall4(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType(
          k=0.06,
          c=840,
          rho=50),
        AWall=17.5,
        inc=IDEAS.Constants.Floor,
        azi=IDEAS.Constants.South,
        insulationThickness=0,
        constructionType(nLay=4, mats={IDEAS.Buildings.Data.Interfaces.Material(
              d=0.002,
              k=0.21,
              c=1470,
              rho=1300,
              epsLw=0.93,
              epsSw=0.94,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.045,
              k=1.4,
              c=1050,
              rho=2200,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.012,
              k=0.06,
              c=840,
              rho=50,
              gas=false),IDEAS.Buildings.Data.Interfaces.Material(
              d=0.15,
              k=2.035,
              c=1050,
              rho=2400,
              epsLw=0.88,
              epsSw=0.55,
              gas=false)})) "Decke"    annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=270,
            origin={-59,58})));
      IDEAS.Buildings.Components.OuterWall      outerWall_Mats(
        redeclare IDEAS.Buildings.Data.Insulation.none insulationType,
        insulationThickness=0,
        AWall=3.5,
        inc=IDEAS.Constants.Wall,
        azi=IDEAS.Constants.South,
        redeclare UseCaseEnEffBIM.Utilities.IDEAS.Wall constructionType)
                                   annotation (Placement(transformation(
            extent={{-5,-10},{5,10}},
            rotation=90,
            origin={39,58})));
      IDEAS.Thermal.Components.Emission.Radiator radiator(medium=
            IDEAS.Thermal.Data.Media.Water(),
        QNom=1300,
        fraRad=0.35,
        TInNom=343.15,
        TOutNom=313.15,
        TZoneNom=294.15)
        annotation (Placement(transformation(extent={{90,-62},{114,-46}})));
      IDEAS.Thermal.Components.Production.Boiler boiler(
        QNom=1300,
        medium=IDEAS.Thermal.Data.Media.Water(),
        TInitial=293.15)
        annotation (Placement(transformation(extent={{-80,-72},{-60,-50}})));
      Modelica.Blocks.Sources.Constant Nenntemperatur(k=340)
        annotation (Placement(transformation(extent={{-94,-46},{-74,-26}})));
      Modelica.Blocks.Continuous.LimPID PID(
        yMax=1,
        Td=10.5,
        k=2.5,
        Ti=50,
        yMin=0.00001)
                annotation (Placement(transformation(extent={{-22,16},{-2,36}})));
      IDEAS.Thermal.Components.BaseClasses.Pump Pumpe(
        useInput=true,
        medium=IDEAS.Thermal.Data.Media.Water(),
        m=0.05,
        m_flowNom=0.05)                          annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={10,-60})));
      IDEAS.Thermal.Components.BaseClasses.AbsolutePressure absolutePressure(medium=
            IDEAS.Thermal.Data.Media.Water(), p=200000)
                                             annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-40,-44})));
      Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow konvBelastung
        annotation (Placement(transformation(extent={{146,64},{126,84}})));
      Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow radBelastung
        annotation (Placement(transformation(extent={{146,48},{126,68}})));
      IDEAS.Thermal.Components.BaseClasses.Pipe_Insulated Rohr_Vorlauf(
        medium=IDEAS.Thermal.Data.Media.Water(),
        m=1.8,
        UA=1.15)
        annotation (Placement(transformation(extent={{36,-56},{56,-64}})));
      Modelica.Blocks.Sources.Pulse pulse1(
        period=86400,
        width=41.66666666666,
        startTime=25200,
        amplitude=3,
        offset=291.15)
        annotation (Placement(transformation(extent={{-60,16},{-40,36}})));
      IDEAS.Thermal.Components.BaseClasses.Pipe_Insulated Rohr_Ruecklauf(
        medium=IDEAS.Thermal.Data.Media.Water(),
        m=1.8,
        UA=1.15)
        annotation (Placement(transformation(extent={{72,-80},{52,-88}})));
      Modelica.Blocks.Math.Sum sum1(nin=2)
        annotation (Placement(transformation(extent={{174,64},{154,84}})));
      inner Utilities.IDEAS.SimInfoManagerKoeln
                                      sim(redeclare
        IDEAS.Climate.Meteo.Files.min60
          detail, city(
          DST=false,
          yr=2010,
          locNam="Koeln",
          lat(displayUnit="deg") = 0.88784899048952,
          lon(displayUnit="deg") = 0.12514010736799,
          timZonSta=3600,
          Tdes=261.15,
          TdesGround=283.15))
        annotation (Placement(transformation(extent={{-94,12},{-74,32}})));
      Modelica.Blocks.Math.Gain pers(k=800/17.5)
        annotation (Placement(transformation(extent={{182,10},{192,20}})));
      Modelica.Blocks.Math.Gain mach(k=200/17.5)
        annotation (Placement(transformation(extent={{182,-10},{192,0}})));
      Modelica.Blocks.Sources.CombiTimeTable combiTimeTable(
        tableOnFile=true,
        tableName="InnerLoads",
        columns={2,3,4},
        fileName="D:/workspaces/InnerLoads.txt")
        annotation (Placement(transformation(extent={{140,-4},{158,14}})));
    equation

      //Simulationsergebnisgrößen

      connect(window.iSolDir, zone.iSolDir) annotation (Line(
          points={{75,58},{90,58},{90,66}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(window.surfRad_a, zone.surfRad[7]) annotation (Line(
          points={{71,63},{71,70.8571},{82,70.8571}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(window.surfCon_a, zone.surfCon[7]) annotation (Line(
          points={{68,63},{68,73.8571},{82,73.8571}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(window.propsBus_a, zone.propsBus[7]) annotation (Line(
          points={{61,63},{61,78.2857},{82,78.2857}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(internalWall.propsBus_a, zone.propsBus[5]) annotation (Line(
          points={{9,63},{9,79.4286},{82,79.4286}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(internalWall.surfCon_a, zone.surfCon[5]) annotation (Line(
          points={{16,63},{16,73.2857},{82,73.2857}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall.surfRad_a, zone.surfRad[5]) annotation (Line(
          points={{19,63},{19,70.2857},{82,70.2857}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall3.surfRad_a, zone.surfRad[4]) annotation (Line(
          points={{-5,63},{-5,68},{82,68},{82,70}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall3.surfCon_a, zone.surfCon[4]) annotation (Line(
          points={{-8,63},{-8,73},{82,73}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall3.propsBus_a, zone.propsBus[4]) annotation (Line(
          points={{-15,63},{-15,80},{82,80}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(internalWall2.surfRad_a, zone.surfRad[3]) annotation (Line(
          points={{-29,63},{-29,69.7143},{82,69.7143}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall2.surfCon_a, zone.surfCon[3]) annotation (Line(
          points={{-32,63},{-32,72.7143},{82,72.7143}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall2.propsBus_a, zone.propsBus[3]) annotation (Line(
          points={{-39,63},{-39,80.5714},{82,80.5714}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(internalWall1.propsBus_a, zone.propsBus[1]) annotation (Line(
          points={{-89,63},{-89,81.7143},{82,81.7143}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(internalWall1.surfCon_a, zone.surfCon[1]) annotation (Line(
          points={{-82,63},{-82,72.1429},{82,72.1429}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(outerWall_Mats.propsBus_a, zone.propsBus[6]) annotation (Line(
          points={{35,63},{35,78.8571},{82,78.8571}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(outerWall_Mats.surfCon_a, zone.surfCon[6]) annotation (Line(
          points={{42,63},{42,74},{82,74},{82,73.5714}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(outerWall_Mats.surfRad_a, zone.surfRad[6]) annotation (Line(
          points={{45,63},{45,70.5714},{82,70.5714}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall1.surfRad_a, zone.surfRad[1]) annotation (Line(
          points={{-79,63},{-79,69.1429},{82,69.1429}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall4.surfCon_b, zone.surfCon[2]) annotation (Line(
          points={{-62,63},{-62,72.4286},{82,72.4286}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall4.surfRad_b, zone.surfRad[2]) annotation (Line(
          points={{-65,63},{-65,69.4286},{82,69.4286}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(internalWall4.propsBus_b, zone.propsBus[2]) annotation (Line(
          points={{-55,63},{-55,81.1429},{82,81.1429}},
          color={255,204,51},
          thickness=0.5,
          smooth=Smooth.None));
      connect(Nenntemperatur.y, boiler.TSet) annotation (Line(
          points={{-73,-36},{-71,-36},{-71,-50}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(zone.gainCon, radiator.heatPortCon) annotation (Line(
          points={{102,73},{106,73},{106,-46},{105,-46}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(PID.y, Pumpe.m_flowSet) annotation (Line(
          points={{-1,26},{10,26},{10,-50}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(boiler.flowPort_b, Pumpe.flowPort_a) annotation (Line(
          points={{-60,-60},{0,-60}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(Pumpe.flowPort_a, absolutePressure.flowPort) annotation (Line(
          points={{0,-60},{-40,-60},{-40,-54}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(konvBelastung.port, zone.gainCon) annotation (Line(
          points={{126,74},{120,74},{120,73},{102,73}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(radiator.heatPortRad, zone.gainRad) annotation (Line(
          points={{109,-46},{108,-46},{108,70},{102,70}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(radBelastung.port, zone.gainRad) annotation (Line(
          points={{126,58},{102,58},{102,70}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(Pumpe.flowPort_b, Rohr_Vorlauf.flowPort_a) annotation (Line(
          points={{20,-60},{36,-60}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(radiator.flowPort_a, Rohr_Vorlauf.flowPort_b) annotation (Line(
          points={{90,-59},{74,-59},{74,-60},{56,-60}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(pulse1.y, PID.u_s) annotation (Line(
          points={{-39,26},{-24,26}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(boiler.flowPort_a, Rohr_Ruecklauf.flowPort_b) annotation (Line(
          points={{-60,-65.8},{-60,-84},{52,-84}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(radiator.flowPort_b, Rohr_Ruecklauf.flowPort_a) annotation (Line(
          points={{114,-49},{116,-49},{116,-84},{72,-84}},
          color={0,0,255},
          smooth=Smooth.None));
      connect(konvBelastung.Q_flow, sum1.y) annotation (Line(
          points={{146,74},{153,74}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(window.iSolDif, zone.iSolDif) annotation (Line(
          points={{75,61},{94,61},{94,66}},
          color={191,0,0},
          smooth=Smooth.None));
      connect(zone.TSensor, PID.u_m) annotation (Line(
          points={{102.6,76},{110,76},{110,-4},{-12,-4},{-12,14}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(combiTimeTable.y[1], pers.u) annotation (Line(
          points={{158.9,5},{170,5},{170,15},{181,15}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(combiTimeTable.y[2], mach.u) annotation (Line(
          points={{158.9,5},{170,5},{170,-5},{181,-5}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pers.y, radBelastung.Q_flow) annotation (Line(
          points={{192.5,15},{202,15},{202,58},{146,58}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(mach.y, sum1.u[1]) annotation (Line(
          points={{192.5,-5},{212,-5},{212,73},{176,73}},
          color={0,0,127},
          smooth=Smooth.None));
      connect(pers.y, sum1.u[2]) annotation (Line(
          points={{192.5,15},{224,15},{224,75},{176,75}},
          color={0,0,127},
          smooth=Smooth.None));
      annotation (
        Diagram(coordinateSystem(extent={{-100,-100},{220,100}},
              preserveAspectRatio=false), graphics),
        Icon(coordinateSystem(extent={{-100,-100},{220,100}})),
        experiment(StopTime=3.1536e+007, Interval=3600),
        __Dymola_experimentSetupOutput);
    end IDEAS;
  end BoilerGasRadiator1_1;

  package Utilities

    package IDEAS

      model SimInfoManagerKoeln
      "Simulation information manager for handling time and climate data required in each for simulation."
        import IDEAS;

        replaceable IDEAS.Climate.Meteo.Detail detail constrainedby
        IDEAS.Climate.Meteo.Detail "Timeframe detail of the climate data"
          annotation (__Dymola_choicesAllMatching=true, Dialog(group="Climate"));
        replaceable IDEAS.Climate.Meteo.Location city constrainedby
        IDEAS.Climate.Meteo.Location "Location of the depicted climate data"
          annotation (__Dymola_choicesAllMatching=true,Dialog(group="Climate"));
        parameter Boolean occBeh=false
        "put to true if  user behaviour is to be read from files"
          annotation (Dialog(group="User behaviour"));

        parameter Boolean DHW=false
        "put to true if domestic how water (DHW) consumption is to be read from files"
          annotation (Dialog(group="User behaviour"));
        parameter Boolean PV=false
        "put to true if photovoltaics is to be read from files "
          annotation (Dialog(group="Photovoltaics"));

        replaceable parameter IDEAS.Occupants.Extern.Interfaces.Occ_Files occupants
          constrainedby IDEAS.Occupants.Extern.Interfaces.Occ_Files
        "Specifies the files with occupant behavior"
          annotation (Dialog(group="User behaviour"));
        parameter Integer nOcc=33 "Number of occupant profiles to be read"
          annotation (Dialog(group="User behaviour"));

        parameter String fileNamePv="onePVpanel10min"
        "Filename for photvoltaic profiles"
          annotation (Dialog(group="Photovoltaics"));
        parameter Integer nPV=33 "Number of photovoltaic profiles"
          annotation (Dialog(group="Photovoltaics"));
        parameter Integer PNom=1000
        "Nominal power (W) of the photovoltaic profiles"
          annotation (Dialog(group="Photovoltaics"));

    protected
        final parameter String filNamClim="N:/Forschung/EBC0134_PTJ_Eneff-BIM_/Students/mla-fdi/IDEAS_aktuell Modelica3-2-1/IDEAS-master/IDEAS-master/Inputs/" + city.locNam + detail.filNam;  // filNamClim="../Inputs/" + city.locNam + detail.filNam;
        final parameter Modelica.SIunits.Angle lat(displayUnit="deg") = city.lat
        "latitude of the locatioin";
        final parameter Modelica.SIunits.Angle lon(displayUnit="deg") = city.lon;
        final parameter Modelica.SIunits.Temperature Tdes=city.Tdes
        "design outdoor temperature";
        final parameter Modelica.SIunits.Temperature TdesGround=city.TdesGround
        "design ground temperature";
        final parameter Modelica.SIunits.Time timZonSta=city.timZonSta
        "standard time zone";
        final parameter Boolean DST=city.DST
        "boolean to take into account daylight saving time";
        final parameter Integer yr=city.yr "depcited year for DST only";

        final parameter Boolean BesTest=Modelica.Utilities.Strings.isEqual(city.locNam,
            "BesTest")
        "boolean to determine if this simulation is a BESTEST simulation";

    public
        Modelica.SIunits.Irradiance solDirPer=climate_solar.y[3]
        "direct irradiation on normal to solar zenith";
        Modelica.SIunits.Irradiance solDirHor=climate_solar.y[1] - climate_solar.y[2]
        "direct irradiation on horizontal surface";
        Modelica.SIunits.Irradiance solDifHor=climate_solar.y[2]
        "difuse irradiation on horizontal surface";
        Modelica.SIunits.Irradiance solGloHor=solDirHor + solDifHor
        "global irradiation on horizontal";
        Modelica.SIunits.Temperature Te=climate_nonSolar.y[1] + 273.15
        "ambient outdoor temperature for determination of sky radiation exchange";
        Modelica.SIunits.Temperature Tsky "effective overall sky temperature";
        Modelica.SIunits.Temperature TeAv=Te
        "running average of ambient outdoor temperature of the last 5 days, not yet implemented";
        Modelica.SIunits.Temperature Tground=TdesGround "ground temperature";
        Modelica.SIunits.Velocity Va "air velocity";
        Real Fc "cloud factor";
        Modelica.SIunits.Irradiance irr=climate_solar.y[1];
        Boolean summer=timMan.summer;

        Boolean day=true;

        Modelica.SIunits.Time timLoc=timMan.timLoc "Local time";
        Modelica.SIunits.Time timSol=timMan.timSol "Solar time";
        Modelica.SIunits.Time timCal=timMan.timCal "Calendar time";

    protected
        IDEAS.Climate.Time.SimTimes timMan(
          delay=detail.timestep/2,
          timZonSta=timZonSta,
          lon=lon,
          DST=false,
          ifSolCor=true)
          annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
        Modelica.Blocks.Tables.CombiTable1Ds climate_nonSolar(
          final smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
          final tableOnFile=true,
          final fileName=filNamClim,
          final tableName="tab1",
          final columns={2,18,17,31})
          annotation (Placement(transformation(extent={{-40,66},{-26,80}})));
        Modelica.Blocks.Tables.CombiTable1Ds climate_solar(
          final tableOnFile=true,
          final fileName=filNamClim,
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          final tableName="tab1",
          final columns={9,11,10})
          annotation (Placement(transformation(extent={{-40,46},{-26,60}})));

    public
        Modelica.Blocks.Tables.CombiTable1Ds tabQCon(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filQCon,
          columns=2:nOcc + 1) if occBeh
          annotation (Placement(transformation(extent={{-40,-34},{-26,-20}})));
        Modelica.Blocks.Tables.CombiTable1Ds tabQRad(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filQRad,
          columns=2:nOcc + 1) if occBeh
          annotation (Placement(transformation(extent={{-36,-38},{-22,-24}})));
        Modelica.Blocks.Sources.CombiTimeTable tabPre(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filPres,
          columns=2:nOcc + 1) if occBeh
          annotation (Placement(transformation(extent={{0,-34},{14,-20}})));
        Modelica.Blocks.Tables.CombiTable1Ds tabP(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filP,
          columns=2:nOcc + 1) if occBeh
          annotation (Placement(transformation(extent={{-40,-58},{-26,-44}})));
        Modelica.Blocks.Tables.CombiTable1Ds tabQ(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filQ,
          columns=2:nOcc + 1) if occBeh
          annotation (Placement(transformation(extent={{-36,-62},{-22,-48}})));
        Modelica.Blocks.Sources.CombiTimeTable tabDHW(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + occupants.filDHW,
          columns=2:nOcc + 1) if DHW
          annotation (Placement(transformation(extent={{0,-58},{14,-44}})));
        Modelica.Blocks.Tables.CombiTable1Ds tabPPV(
          final smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
          tableOnFile=true,
          tableName="data",
          fileName="..\\Inputs\\" + fileNamePv,
          columns=2:nPV + 1) if PV
          annotation (Placement(transformation(extent={{-36,2},{-22,16}})));

      equation
          Tsky = climate_nonSolar.y[4] "in K";
          Fc = climate_nonSolar.y[2]*0.1*0.87;
          Va = climate_nonSolar.y[3] "!!! if not BesTest then
    Tsky = Te - (23.8 - 0.2025*(Te - 273.15)*(1 - 0.87*Fc));
    Fc = 0.2;
    Va = 2.5;
  else
    Tsky = climate_nonSolar.y[2] + 273.15;
    Fc = climate_nonSolar.y[3]*0.87;
    Va = climate_nonSolar.y[4];
  end if;!!!";
        connect(timMan.timCalSol, climate_solar.u) annotation (Line(
            points={{-60,62},{-52,62},{-52,53},{-41.4,53}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timSol, climate_nonSolar.u) annotation (Line(
            points={{-60,70},{-50,70},{-50,73},{-41.4,73}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timCal, tabQCon.u) annotation (Line(
            points={{-60,66},{-52,66},{-52,-27},{-41.4,-27}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timCal, tabQRad.u) annotation (Line(
            points={{-60,66},{-50,66},{-50,-31},{-37.4,-31}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timCal, tabP.u) annotation (Line(
            points={{-60,66},{-52,66},{-52,-51},{-41.4,-51}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timCal, tabQ.u) annotation (Line(
            points={{-60,66},{-50,66},{-50,-55},{-37.4,-55}},
            color={0,0,127},
            smooth=Smooth.None));
        connect(timMan.timCal, tabPPV.u) annotation (Line(
            points={{-60,66},{-48,66},{-48,9},{-37.4,9}},
            color={0,0,127},
            smooth=Smooth.None));
        annotation (
          defaultComponentName="sim",
          defaultComponentPrefixes="inner",
          missingInnerMessage=
              "Your model is using an outer \"sim\" component. An inner \"sim\" component is not defined. For simulation drag IDEAS.SimInfoManager into your model.",
          Icon(graphics={
              Ellipse(
                extent={{-60,78},{74,-58}},
                lineColor={95,95,95},
                fillColor={135,135,135},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{18,52},{30,44},{36,44},{36,46},{34,48},{34,56},{22,60},{16,
                    60},{10,58},{6,54},{8,52},{2,52},{-8,48},{-14,52},{-24,48},{-26,
                    40},{-18,40},{-14,32},{-14,28},{-12,24},{-16,10},{-8,2},{-8,-2},{
                    -6,-6},{-4,-4},{0,-6},{2,-12},{10,-18},{18,-24},{22,-30},{26,-36},
                    {32,-44},{34,-50},{36,-58},{60,-44},{72,-28},{72,-18},{64,-14},{
                    58,-12},{48,-12},{44,-14},{40,-16},{34,-16},{26,-24},{20,-22},{20,
                    -18},{24,-12},{16,-16},{8,-12},{8,-8},{10,-2},{16,0},{24,0},{28,-2},
                    {30,-8},{32,-6},{28,2},{30,12},{34,18},{36,20},{38,24},{34,26},{
                    36,32},{26,38},{18,38},{20,32},{18,28},{12,32},{14,38},{16,42},{
                    24,40},{22,46},{16,50},{18,52}},
                lineColor={255,255,255},
                smooth=Smooth.None,
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-34,64},{-30,62},{-26,64},{-24,60},{-36,58},{-24,52},{-16,54},
                    {-14,62},{-8,68},{6,74},{12,74},{22,70},{28,64},{30,64},{44,62},{
                    46,58},{42,56},{50,50},{66,34},{68,20},{74,12},{80,46},{70,78},{
                    44,90},{2,90},{-32,80},{-34,64}},
                lineColor={255,255,255},
                smooth=Smooth.None,
                fillColor={255,255,255},
                fillPattern=FillPattern.Solid),
              Bitmap(extent={{22,-8},{20,-8}}, fileName=""),
              Ellipse(extent={{-60,78},{74,-58}}, lineColor={95,95,95}),
              Polygon(
                points={{-66,-20},{-70,-16},{-72,-20},{-68,-30},{-60,-42},{-60,-40},{
                    -62,-32},{-66,-20}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-62,-4},{-58,0},{-54,-2},{-54,-12},{-52,-20},{-48,-24},{-50,
                    -28},{-50,-30},{-54,-28},{-56,-26},{-58,-12},{-62,-4}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-48,0},{-46,4},{-42,4},{-40,0},{-40,-4},{-38,-16},{-38,-22},
                    {-40,-24},{-44,-22},{-44,-16},{-48,0}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-32,2},{-28,4},{-24,4},{-24,0},{-24,-12},{-24,-20},{-26,-24},
                    {-30,-24},{-32,-6},{-32,2}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-6,-36},{-12,-42},{-8,-42},{-4,-36},{0,-26},{-2,-22},{-6,-22},
                    {-8,-26},{-10,-32},{-8,-36},{-6,-36}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid),
              Polygon(
                points={{-60,-44},{-58,-40},{-54,-40},{-50,-36},{-42,-32},{-36,-32},{
                    -32,-28},{-26,-28},{-24,-34},{-24,-36},{-26,-38},{-20,-42},{-16,-46},
                    {-12,-46},{-8,-48},{-10,-52},{-12,-60},{-16,-66},{-20,-68},{-26,-70},
                    {-30,-70},{-34,-70},{-36,-74},{-40,-76},{-42,-76},{-48,-72},{-54,
                    -62},{-60,-44}},
                lineColor={127,0,0},
                smooth=Smooth.None,
                fillColor={127,67,62},
                fillPattern=FillPattern.Solid)}),
          Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
                  100,100}}),
                  graphics),
          Documentation(info="<html>
</html>"));
      end SimInfoManagerKoeln;

      record Material1
        import IDEAS;
        extends IDEAS.Buildings.Data.Interfaces.Material(
              k=2.035,
              c=920,
              rho=2100,
              epsLw=0.88,
              epsSw=0.55);
      end Material1;

      record Material2
        import IDEAS;
        extends IDEAS.Buildings.Data.Interfaces.Material(
              k=2.035,
              c=920,
              rho=2100,
              epsLw=0.88,
              epsSw=0.55);
      end Material2;

      record Material3
        import IDEAS;
        extends IDEAS.Buildings.Data.Interfaces.Material(
              d=0.025,
              k=0.45,
              c=1050,
              rho=1300);
      end Material3;

      model Wall
        import IDEAS;
        extends IDEAS.Buildings.Data.Interfaces.Construction(
          final nLay=3,
          final locGain=1,
          final mats={Material1(d=0.24),Material2(0.062), Material3(d=0.025)});
      end Wall;
    end IDEAS;
  end Utilities;
annotation (uses(
    Modelica(version="3.2.1"),
    AixLib(version="0.1.0"),
    BuildingSystems(version="0.14"),
    Buildings(version="1.7"),
    IDEAS(version="0.1")),            version="1");
end UseCaseEnEffBIM;
model UseCaseEnEffBIM_BoilerGasRadiator1_1_IDEAS
 extends UseCaseEnEffBIM.BoilerGasRadiator1_1.IDEAS;
  annotation(experiment(StopTime=3.1536e+007, Interval=3600),uses(UseCaseEnEffBIM(version="1")));
end UseCaseEnEffBIM_BoilerGasRadiator1_1_IDEAS;
