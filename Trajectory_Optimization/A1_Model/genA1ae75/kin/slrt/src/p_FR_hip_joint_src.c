/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint_src.h"

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
  double t994;
  double t1150;
  double t1164;
  double t1157;
  double t1168;
  double t1058;
  double t1162;
  double t1180;
  double t1203;
  double t1213;
  double t1238;
  double t1241;
  double t1253;
  double t1007;
  double t1113;
  double t1120;
  double t1125;
  double t1132;
  double t1256;
  double t1269;
  double t1329;
  double t1332;
  double t1339;
  double t1375;
  double t1384;
  double t1385;
  t994 = Cos(var1[3]);
  t1150 = Cos(var1[5]);
  t1164 = Sin(var1[4]);
  t1157 = Sin(var1[3]);
  t1168 = Sin(var1[5]);
  t1058 = Cos(var1[6]);
  t1162 = -1.*t1150*t1157;
  t1180 = t994*t1164*t1168;
  t1203 = t1162 + t1180;
  t1213 = t994*t1150*t1164;
  t1238 = t1157*t1168;
  t1241 = t1213 + t1238;
  t1253 = Sin(var1[6]);
  t1007 = Cos(var1[4]);
  t1113 = -1.*t1058;
  t1120 = 1. + t1113;
  t1125 = -0.047*t1120;
  t1132 = 0. + t1125;
  t1256 = 0.047*t1253;
  t1269 = 0. + t1256;
  t1329 = t994*t1150;
  t1332 = t1157*t1164*t1168;
  t1339 = t1329 + t1332;
  t1375 = t1150*t1157*t1164;
  t1384 = -1.*t994*t1168;
  t1385 = t1375 + t1384;
  p_output1[0]=0. + t1132*t1203 - 0.047*(t1058*t1203 + t1241*t1253) + t1241*t1269 + 0.183*t1007*t994 + var1[0];
  p_output1[1]=0. + 0.183*t1007*t1157 + t1132*t1339 + t1269*t1385 - 0.047*(t1058*t1339 + t1253*t1385) + var1[1];
  p_output1[2]=0. - 0.183*t1164 + t1007*t1132*t1168 - 0.047*(t1007*t1058*t1168 + t1007*t1150*t1253) + t1007*t1150*t1269 + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
