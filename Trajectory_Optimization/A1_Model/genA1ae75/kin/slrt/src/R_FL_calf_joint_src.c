/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t6447;
  double t7096;
  double t7127;
  double t7109;
  double t7133;
  double t7008;
  double t6742;
  double t6761;
  double t7043;
  double t7126;
  double t7143;
  double t7146;
  double t7149;
  double t7153;
  double t7155;
  double t7165;
  double t7188;
  double t7197;
  double t7205;
  double t2185;
  double t7235;
  double t7355;
  double t7385;
  double t7389;
  double t7390;
  double t7395;
  double t7421;
  double t7423;
  double t7445;
  double t7449;
  double t7621;
  double t7623;
  double t7629;
  double t6979;
  double t7215;
  double t7222;
  double t7236;
  double t7243;
  double t7247;
  double t7345;
  double t7451;
  double t7459;
  double t7465;
  double t7468;
  double t7484;
  double t7605;
  double t7640;
  double t7651;
  double t7659;
  double t7672;
  double t7676;
  t6447 = Cos(var1[3]);
  t7096 = Cos(var1[5]);
  t7127 = Sin(var1[3]);
  t7109 = Sin(var1[4]);
  t7133 = Sin(var1[5]);
  t7008 = Cos(var1[10]);
  t6742 = Cos(var1[4]);
  t6761 = Sin(var1[10]);
  t7043 = Cos(var1[9]);
  t7126 = t6447*t7096*t7109;
  t7143 = t7127*t7133;
  t7146 = t7126 + t7143;
  t7149 = t7043*t7146;
  t7153 = Sin(var1[9]);
  t7155 = -1.*t7096*t7127;
  t7165 = t6447*t7109*t7133;
  t7188 = t7155 + t7165;
  t7197 = -1.*t7153*t7188;
  t7205 = t7149 + t7197;
  t2185 = Sin(var1[11]);
  t7235 = Cos(var1[11]);
  t7355 = t7096*t7127*t7109;
  t7385 = -1.*t6447*t7133;
  t7389 = t7355 + t7385;
  t7390 = t7043*t7389;
  t7395 = t6447*t7096;
  t7421 = t7127*t7109*t7133;
  t7423 = t7395 + t7421;
  t7445 = -1.*t7153*t7423;
  t7449 = t7390 + t7445;
  t7621 = t7043*t6742*t7096;
  t7623 = -1.*t6742*t7153*t7133;
  t7629 = t7621 + t7623;
  t6979 = t6447*t6742*t6761;
  t7215 = t7008*t7205;
  t7222 = t6979 + t7215;
  t7236 = t7008*t6447*t6742;
  t7243 = -1.*t6761*t7205;
  t7247 = t7236 + t7243;
  t7345 = t6742*t6761*t7127;
  t7451 = t7008*t7449;
  t7459 = t7345 + t7451;
  t7465 = t7008*t6742*t7127;
  t7468 = -1.*t6761*t7449;
  t7484 = t7465 + t7468;
  t7605 = -1.*t6761*t7109;
  t7640 = t7008*t7629;
  t7651 = t7605 + t7640;
  t7659 = -1.*t7008*t7109;
  t7672 = -1.*t6761*t7629;
  t7676 = t7659 + t7672;
  p_output1[0]=-1.*t2185*t7222 + t7235*t7247;
  p_output1[1]=-1.*t2185*t7459 + t7235*t7484;
  p_output1[2]=-1.*t2185*t7651 + t7235*t7676;
  p_output1[3]=t7146*t7153 + t7043*t7188;
  p_output1[4]=t7153*t7389 + t7043*t7423;
  p_output1[5]=t6742*t7043*t7133 + t6742*t7096*t7153;
  p_output1[6]=t7222*t7235 + t2185*t7247;
  p_output1[7]=t7235*t7459 + t2185*t7484;
  p_output1[8]=t7235*t7651 + t2185*t7676;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
