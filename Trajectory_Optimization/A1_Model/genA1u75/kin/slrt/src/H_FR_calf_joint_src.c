/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t507;
  double t1402;
  double t2097;
  double t1455;
  double t2134;
  double t1134;
  double t1250;
  double t1856;
  double t2143;
  double t2175;
  double t2216;
  double t2225;
  double t2290;
  double t2308;
  double t2314;
  double t2325;
  double t2377;
  double t1039;
  double t2409;
  double t417;
  double t3005;
  double t3119;
  double t3195;
  double t3197;
  double t3198;
  double t3392;
  double t3721;
  double t3728;
  double t3751;
  double t2805;
  double t4034;
  double t4064;
  double t4085;
  double t2539;
  double t2638;
  double t2782;
  double t1218;
  double t2454;
  double t2506;
  double t3825;
  double t3840;
  double t3918;
  double t2940;
  double t3773;
  double t3807;
  double t4155;
  double t4220;
  double t4244;
  double t4030;
  double t4086;
  double t4111;
  double t4399;
  double t4459;
  double t4506;
  double t5554;
  double t5562;
  double t2528;
  double t2828;
  double t2841;
  double t4768;
  double t4772;
  double t4800;
  double t4994;
  double t5020;
  double t5115;
  double t5177;
  double t5203;
  double t5216;
  double t5243;
  double t5310;
  double t5320;
  double t5375;
  double t4514;
  double t4516;
  double t4544;
  double t5483;
  double t5491;
  double t5568;
  double t5571;
  double t5641;
  double t5683;
  double t5730;
  double t5732;
  double t3815;
  double t3988;
  double t4007;
  double t4801;
  double t4826;
  double t4837;
  double t4563;
  double t4623;
  double t4765;
  double t4122;
  double t4319;
  double t4363;
  double t4893;
  double t4896;
  double t4988;
  t507 = Cos(var1[3]);
  t1402 = Cos(var1[5]);
  t2097 = Sin(var1[3]);
  t1455 = Sin(var1[4]);
  t2134 = Sin(var1[5]);
  t1134 = Cos(var1[7]);
  t1250 = Cos(var1[6]);
  t1856 = t507*t1402*t1455;
  t2143 = t2097*t2134;
  t2175 = t1856 + t2143;
  t2216 = t1250*t2175;
  t2225 = -1.*t1402*t2097;
  t2290 = t507*t1455*t2134;
  t2308 = t2225 + t2290;
  t2314 = Sin(var1[6]);
  t2325 = -1.*t2308*t2314;
  t2377 = t2216 + t2325;
  t1039 = Cos(var1[4]);
  t2409 = Sin(var1[7]);
  t417 = Cos(var1[8]);
  t3005 = t1402*t2097*t1455;
  t3119 = -1.*t507*t2134;
  t3195 = t3005 + t3119;
  t3197 = t1250*t3195;
  t3198 = t507*t1402;
  t3392 = t2097*t1455*t2134;
  t3721 = t3198 + t3392;
  t3728 = -1.*t3721*t2314;
  t3751 = t3197 + t3728;
  t2805 = Sin(var1[8]);
  t4034 = t1039*t1402*t1250;
  t4064 = -1.*t1039*t2134*t2314;
  t4085 = t4034 + t4064;
  t2539 = t1134*t2377;
  t2638 = t507*t1039*t2409;
  t2782 = t2539 + t2638;
  t1218 = t507*t1039*t1134;
  t2454 = -1.*t2377*t2409;
  t2506 = t1218 + t2454;
  t3825 = t1134*t3751;
  t3840 = t1039*t2097*t2409;
  t3918 = t3825 + t3840;
  t2940 = t1039*t1134*t2097;
  t3773 = -1.*t3751*t2409;
  t3807 = t2940 + t3773;
  t4155 = t1134*t4085;
  t4220 = -1.*t1455*t2409;
  t4244 = t4155 + t4220;
  t4030 = -1.*t1134*t1455;
  t4086 = -1.*t4085*t2409;
  t4111 = t4030 + t4086;
  t4399 = t1250*t2308;
  t4459 = t2175*t2314;
  t4506 = t4399 + t4459;
  t5554 = -1.*t417;
  t5562 = 1. + t5554;
  t2528 = t417*t2506;
  t2828 = -1.*t2782*t2805;
  t2841 = t2528 + t2828;
  t4768 = t417*t2782;
  t4772 = t2506*t2805;
  t4800 = t4768 + t4772;
  t4994 = -1.*t1134;
  t5020 = 1. + t4994;
  t5115 = 0.183*t5020;
  t5177 = 0. + t5115;
  t5203 = -1.*t1250;
  t5216 = 1. + t5203;
  t5243 = -0.047*t5216;
  t5310 = 0. + t5243;
  t5320 = 0.047*t2314;
  t5375 = 0. + t5320;
  t4514 = t1250*t3721;
  t4516 = t3195*t2314;
  t4544 = t4514 + t4516;
  t5483 = 0.183*t2409;
  t5491 = 0. + t5483;
  t5568 = 0.183*t5562;
  t5571 = 0.15*t2805;
  t5641 = 0. + t5568 + t5571;
  t5683 = -0.15*t5562;
  t5730 = 0.183*t2805;
  t5732 = 0. + t5683 + t5730;
  t3815 = t417*t3807;
  t3988 = -1.*t3918*t2805;
  t4007 = t3815 + t3988;
  t4801 = t417*t3918;
  t4826 = t3807*t2805;
  t4837 = t4801 + t4826;
  t4563 = t1039*t1250*t2134;
  t4623 = t1039*t1402*t2314;
  t4765 = t4563 + t4623;
  t4122 = t417*t4111;
  t4319 = -1.*t4244*t2805;
  t4363 = t4122 + t4319;
  t4893 = t417*t4244;
  t4896 = t4111*t2805;
  t4988 = t4893 + t4896;
  p_output1[0]=t2841;
  p_output1[1]=t4007;
  p_output1[2]=t4363;
  p_output1[3]=0.;
  p_output1[4]=t4506;
  p_output1[5]=t4544;
  p_output1[6]=t4765;
  p_output1[7]=0.;
  p_output1[8]=t4800;
  p_output1[9]=t4837;
  p_output1[10]=t4988;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2841 - 0.11079*t4506 - 0.15*t4800 + t1039*t507*t5177 + t2308*t5310 + t2175*t5375 + t2377*t5491 + t2506*t5641 + t2782*t5732 + var1[0];
  p_output1[13]=0. + 0.183*t4007 - 0.11079*t4544 - 0.15*t4837 + t1039*t2097*t5177 + t3721*t5310 + t3195*t5375 + t3751*t5491 + t3807*t5641 + t3918*t5732 + var1[1];
  p_output1[14]=0. + 0.183*t4363 - 0.11079*t4765 - 0.15*t4988 - 1.*t1455*t5177 + t1039*t2134*t5310 + t1039*t1402*t5375 + t4085*t5491 + t4111*t5641 + t4244*t5732 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
