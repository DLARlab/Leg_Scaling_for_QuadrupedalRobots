/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

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
  double t5687;
  double t5854;
  double t5941;
  double t5856;
  double t5946;
  double t5770;
  double t5897;
  double t5952;
  double t5965;
  double t5994;
  double t6348;
  double t6349;
  double t6355;
  double t5705;
  double t6390;
  double t3135;
  double t6408;
  double t6410;
  double t6480;
  double t6484;
  double t6487;
  double t6489;
  double t6494;
  double t6524;
  double t6527;
  double t6529;
  double t7057;
  double t7666;
  double t8316;
  double t3538;
  double t4918;
  double t5522;
  double t5643;
  double t5771;
  double t5775;
  double t5995;
  double t6009;
  double t6331;
  double t6346;
  double t10119;
  double t10123;
  double t10127;
  double t10129;
  double t10130;
  double t10132;
  double t6402;
  double t6403;
  double t6491;
  double t6509;
  double t6523;
  double t10155;
  double t10161;
  double t10169;
  double t6627;
  double t6719;
  double t7027;
  double t10172;
  double t10173;
  double t10174;
  double t10177;
  double t10183;
  double t10184;
  double t10214;
  double t10215;
  double t10216;
  double t10218;
  double t10219;
  double t10220;
  double t10223;
  double t10224;
  double t10225;
  t5687 = Cos(var1[3]);
  t5854 = Cos(var1[5]);
  t5941 = Sin(var1[3]);
  t5856 = Sin(var1[4]);
  t5946 = Sin(var1[5]);
  t5770 = Sin(var1[9]);
  t5897 = t5687*t5854*t5856;
  t5952 = t5941*t5946;
  t5965 = t5897 + t5952;
  t5994 = Cos(var1[9]);
  t6348 = -1.*t5854*t5941;
  t6349 = t5687*t5856*t5946;
  t6355 = t6348 + t6349;
  t5705 = Cos(var1[4]);
  t6390 = Sin(var1[10]);
  t3135 = Cos(var1[10]);
  t6408 = t5994*t5965;
  t6410 = -1.*t5770*t6355;
  t6480 = t6408 + t6410;
  t6484 = Cos(var1[11]);
  t6487 = -1.*t6484;
  t6489 = 1. + t6487;
  t6494 = Sin(var1[11]);
  t6524 = t5687*t5705*t6390;
  t6527 = t3135*t6480;
  t6529 = t6524 + t6527;
  t7057 = t3135*t5687*t5705;
  t7666 = -1.*t6390*t6480;
  t8316 = t7057 + t7666;
  t3538 = -1.*t3135;
  t4918 = 1. + t3538;
  t5522 = 0.183*t4918;
  t5643 = 0. + t5522;
  t5771 = -0.047*t5770;
  t5775 = 0. + t5771;
  t5995 = -1.*t5994;
  t6009 = 1. + t5995;
  t6331 = 0.047*t6009;
  t6346 = 0. + t6331;
  t10119 = t5854*t5941*t5856;
  t10123 = -1.*t5687*t5946;
  t10127 = t10119 + t10123;
  t10129 = t5687*t5854;
  t10130 = t5941*t5856*t5946;
  t10132 = t10129 + t10130;
  t6402 = 0.183*t6390;
  t6403 = 0. + t6402;
  t6491 = -0.15*t6489;
  t6509 = 0.183*t6494;
  t6523 = 0. + t6491 + t6509;
  t10155 = t5994*t10127;
  t10161 = -1.*t5770*t10132;
  t10169 = t10155 + t10161;
  t6627 = 0.183*t6489;
  t6719 = 0.15*t6494;
  t7027 = 0. + t6627 + t6719;
  t10172 = t5705*t6390*t5941;
  t10173 = t3135*t10169;
  t10174 = t10172 + t10173;
  t10177 = t3135*t5705*t5941;
  t10183 = -1.*t6390*t10169;
  t10184 = t10177 + t10183;
  t10214 = t5994*t5705*t5854;
  t10215 = -1.*t5705*t5770*t5946;
  t10216 = t10214 + t10215;
  t10218 = -1.*t6390*t5856;
  t10219 = t3135*t10216;
  t10220 = t10218 + t10219;
  t10223 = -1.*t3135*t5856;
  t10224 = -1.*t6390*t10216;
  t10225 = t10223 + t10224;
  p_output1[0]=0. + t5643*t5687*t5705 + t5775*t5965 + t6346*t6355 + 0.13205*(t5770*t5965 + t5994*t6355) + t6403*t6480 + t6523*t6529 + t7027*t8316 + 0.183*(-1.*t6494*t6529 + t6484*t8316) - 0.15*(t6484*t6529 + t6494*t8316) + var1[0];
  p_output1[1]=0. + t10127*t5775 + t5643*t5705*t5941 + 0.13205*(t10127*t5770 + t10132*t5994) + t10132*t6346 + t10169*t6403 + 0.183*(t10184*t6484 - 1.*t10174*t6494) - 0.15*(t10174*t6484 + t10184*t6494) + t10174*t6523 + t10184*t7027 + var1[1];
  p_output1[2]=0. + t5705*t5775*t5854 - 1.*t5643*t5856 + 0.13205*(t5705*t5770*t5854 + t5705*t5946*t5994) + t5705*t5946*t6346 + t10216*t6403 + 0.183*(t10225*t6484 - 1.*t10220*t6494) - 0.15*(t10220*t6484 + t10225*t6494) + t10220*t6523 + t10225*t7027 + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
