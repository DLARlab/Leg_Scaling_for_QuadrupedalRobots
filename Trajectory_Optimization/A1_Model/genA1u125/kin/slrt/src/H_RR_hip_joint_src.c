/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t1082;
  double t526;
  double t2276;
  double t1758;
  double t4281;
  double t5662;
  double t3317;
  double t6175;
  double t4399;
  double t5683;
  double t6010;
  double t6227;
  double t6232;
  double t6238;
  double t6374;
  double t6385;
  double t6387;
  double t6413;
  double t6453;
  double t6456;
  double t6113;
  double t6285;
  double t6359;
  double t6720;
  double t6727;
  double t6766;
  double t6767;
  double t6784;
  double t6787;
  double t6394;
  double t6471;
  double t6503;
  double t6520;
  double t6525;
  double t6535;
  t1082 = Cos(var1[4]);
  t526 = Cos(var1[3]);
  t2276 = Sin(var1[4]);
  t1758 = Sin(var1[3]);
  t4281 = Cos(var1[5]);
  t5662 = Sin(var1[5]);
  t3317 = Sin(var1[12]);
  t6175 = Cos(var1[12]);
  t4399 = t526*t4281*t2276;
  t5683 = t1758*t5662;
  t6010 = t4399 + t5683;
  t6227 = -1.*t4281*t1758;
  t6232 = t526*t2276*t5662;
  t6238 = t6227 + t6232;
  t6374 = t4281*t1758*t2276;
  t6385 = -1.*t526*t5662;
  t6387 = t6374 + t6385;
  t6413 = t526*t4281;
  t6453 = t1758*t2276*t5662;
  t6456 = t6413 + t6453;
  t6113 = t3317*t6010;
  t6285 = t6175*t6238;
  t6359 = t6113 + t6285;
  t6720 = 0.047*t3317;
  t6727 = 0. + t6720;
  t6766 = -1.*t6175;
  t6767 = 1. + t6766;
  t6784 = -0.047*t6767;
  t6787 = 0. + t6784;
  t6394 = t3317*t6387;
  t6471 = t6175*t6456;
  t6503 = t6394 + t6471;
  t6520 = t1082*t4281*t3317;
  t6525 = t6175*t1082*t5662;
  t6535 = t6520 + t6525;
  p_output1[0]=t1082*t526;
  p_output1[1]=t1082*t1758;
  p_output1[2]=-1.*t2276;
  p_output1[3]=0.;
  p_output1[4]=t6359;
  p_output1[5]=t6503;
  p_output1[6]=t6535;
  p_output1[7]=0.;
  p_output1[8]=t6010*t6175 - 1.*t3317*t6238;
  p_output1[9]=t6175*t6387 - 1.*t3317*t6456;
  p_output1[10]=-1.*t1082*t3317*t5662 + t1082*t4281*t6175;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t1082*t526 - 0.047*t6359 + t6010*t6727 + t6238*t6787 + var1[0];
  p_output1[13]=0. - 0.183*t1082*t1758 - 0.047*t6503 + t6387*t6727 + t6456*t6787 + var1[1];
  p_output1[14]=0. + 0.183*t2276 - 0.047*t6535 + t1082*t4281*t6727 + t1082*t5662*t6787 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
