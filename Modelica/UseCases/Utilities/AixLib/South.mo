within UseCases.Utilities.AixLib;
record South
  import AixLib;
  extends
    AixLib.DataBase.Weather.SurfaceOrientation.SurfaceOrientationBaseDataDefinition(
    nSurfaces=1,
    name={"S"},
    Azimut={0},
    Tilt={90});
  annotation ();
end South;
