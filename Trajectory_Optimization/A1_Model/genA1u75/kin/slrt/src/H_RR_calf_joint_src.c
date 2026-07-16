/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t148;
  double t821;
  double t878;
  double t827;
  double t916;
  double t450;
  double t180;
  double t270;
  double t721;
  double t862;
  double t1051;
  double t1150;
  double t1181;
  double t1741;
  double t1887;
  double t1927;
  double t2017;
  double t2033;
  double t2042;
  double t65;
  double t2247;
  double t2585;
  double t2590;
  double t2599;
  double t2625;
  double t2696;
  double t2722;
  double t2941;
  double t2966;
  double t3008;
  double t3501;
  double t3520;
  double t3544;
  double t393;
  double t2068;
  double t2170;
  double t2256;
  double t2289;
  double t2350;
  double t2576;
  double t3067;
  double t3081;
  double t3196;
  double t3226;
  double t3269;
  double t3444;
  double t3635;
  double t3646;
  double t3677;
  double t3772;
  double t3813;
  double t4075;
  double t4082;
  double t4091;
  double t5513;
  double t5526;
  double t2220;
  double t2423;
  double t2541;
  double t4280;
  double t4314;
  double t4417;
  double t4626;
  double t4641;
  double t4666;
  double t4737;
  double t4878;
  double t4883;
  double t4915;
  double t5002;
  double t5067;
  double t5123;
  double t4095;
  double t4114;
  double t4145;
  double t5187;
  double t5420;
  double t5597;
  double t5740;
  double t5762;
  double t5880;
  double t5959;
  double t5964;
  double t3191;
  double t3371;
  double t3415;
  double t4432;
  double t4433;
  double t4443;
  double t4149;
  double t4154;
  double t4243;
  double t3650;
  double t3852;
  double t4012;
  double t4470;
  double t4584;
  double t4622;
  t148 = Cos(var1[3]);
  t821 = Cos(var1[5]);
  t878 = Sin(var1[3]);
  t827 = Sin(var1[4]);
  t916 = Sin(var1[5]);
  t450 = Cos(var1[13]);
  t180 = Cos(var1[4]);
  t270 = Sin(var1[13]);
  t721 = Cos(var1[12]);
  t862 = t148*t821*t827;
  t1051 = t878*t916;
  t1150 = t862 + t1051;
  t1181 = t721*t1150;
  t1741 = Sin(var1[12]);
  t1887 = -1.*t821*t878;
  t1927 = t148*t827*t916;
  t2017 = t1887 + t1927;
  t2033 = -1.*t1741*t2017;
  t2042 = t1181 + t2033;
  t65 = Sin(var1[14]);
  t2247 = Cos(var1[14]);
  t2585 = t821*t878*t827;
  t2590 = -1.*t148*t916;
  t2599 = t2585 + t2590;
  t2625 = t721*t2599;
  t2696 = t148*t821;
  t2722 = t878*t827*t916;
  t2941 = t2696 + t2722;
  t2966 = -1.*t1741*t2941;
  t3008 = t2625 + t2966;
  t3501 = t721*t180*t821;
  t3520 = -1.*t180*t1741*t916;
  t3544 = t3501 + t3520;
  t393 = t148*t180*t270;
  t2068 = t450*t2042;
  t2170 = t393 + t2068;
  t2256 = t450*t148*t180;
  t2289 = -1.*t270*t2042;
  t2350 = t2256 + t2289;
  t2576 = t180*t270*t878;
  t3067 = t450*t3008;
  t3081 = t2576 + t3067;
  t3196 = t450*t180*t878;
  t3226 = -1.*t270*t3008;
  t3269 = t3196 + t3226;
  t3444 = -1.*t270*t827;
  t3635 = t450*t3544;
  t3646 = t3444 + t3635;
  t3677 = -1.*t450*t827;
  t3772 = -1.*t270*t3544;
  t3813 = t3677 + t3772;
  t4075 = t1741*t1150;
  t4082 = t721*t2017;
  t4091 = t4075 + t4082;
  t5513 = -1.*t2247;
  t5526 = 1. + t5513;
  t2220 = -1.*t65*t2170;
  t2423 = t2247*t2350;
  t2541 = t2220 + t2423;
  t4280 = t2247*t2170;
  t4314 = t65*t2350;
  t4417 = t4280 + t4314;
  t4626 = -1.*t450;
  t4641 = 1. + t4626;
  t4666 = -0.183*t4641;
  t4737 = 0. + t4666;
  t4878 = 0.047*t1741;
  t4883 = 0. + t4878;
  t4915 = -1.*t721;
  t5002 = 1. + t4915;
  t5067 = -0.047*t5002;
  t5123 = 0. + t5067;
  t4095 = t1741*t2599;
  t4114 = t721*t2941;
  t4145 = t4095 + t4114;
  t5187 = -0.183*t270;
  t5420 = 0. + t5187;
  t5597 = -0.15*t5526;
  t5740 = -0.183*t65;
  t5762 = 0. + t5597 + t5740;
  t5880 = -0.183*t5526;
  t5959 = 0.15*t65;
  t5964 = 0. + t5880 + t5959;
  t3191 = -1.*t65*t3081;
  t3371 = t2247*t3269;
  t3415 = t3191 + t3371;
  t4432 = t2247*t3081;
  t4433 = t65*t3269;
  t4443 = t4432 + t4433;
  t4149 = t180*t821*t1741;
  t4154 = t721*t180*t916;
  t4243 = t4149 + t4154;
  t3650 = -1.*t65*t3646;
  t3852 = t2247*t3813;
  t4012 = t3650 + t3852;
  t4470 = t2247*t3646;
  t4584 = t65*t3813;
  t4622 = t4470 + t4584;
  p_output1[0]=t2541;
  p_output1[1]=t3415;
  p_output1[2]=t4012;
  p_output1[3]=0.;
  p_output1[4]=t4091;
  p_output1[5]=t4145;
  p_output1[6]=t4243;
  p_output1[7]=0.;
  p_output1[8]=t4417;
  p_output1[9]=t4443;
  p_output1[10]=t4622;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2541 - 0.11079*t4091 - 0.15*t4417 + t148*t180*t4737 + t1150*t4883 + t2017*t5123 + t2042*t5420 + t2170*t5762 + t2350*t5964 + var1[0];
  p_output1[13]=0. - 0.183*t3415 - 0.11079*t4145 - 0.15*t4443 + t2599*t4883 + t2941*t5123 + t3008*t5420 + t3081*t5762 + t3269*t5964 + t180*t4737*t878 + var1[1];
  p_output1[14]=0. - 0.183*t4012 - 0.11079*t4243 - 0.15*t4622 + t3544*t5420 + t3646*t5762 + t3813*t5964 + t180*t4883*t821 - 1.*t4737*t827 + t180*t5123*t916 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
