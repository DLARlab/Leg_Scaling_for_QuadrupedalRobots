/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint_src.h"

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
  double t332;
  double t817;
  double t1110;
  double t909;
  double t1147;
  double t552;
  double t456;
  double t482;
  double t606;
  double t1024;
  double t1180;
  double t1212;
  double t1238;
  double t1254;
  double t1313;
  double t1326;
  double t1425;
  double t1429;
  double t1548;
  double t282;
  double t1620;
  double t1916;
  double t1932;
  double t1933;
  double t1951;
  double t1972;
  double t1983;
  double t2140;
  double t2178;
  double t2189;
  double t2464;
  double t2491;
  double t2498;
  double t543;
  double t1561;
  double t1594;
  double t1653;
  double t1682;
  double t1793;
  double t1906;
  double t2195;
  double t2200;
  double t2239;
  double t2240;
  double t2250;
  double t2375;
  double t2502;
  double t2598;
  double t2822;
  double t2895;
  double t2980;
  double t3092;
  double t3098;
  double t3104;
  double t4230;
  double t4237;
  double t1595;
  double t1853;
  double t1893;
  double t3402;
  double t3405;
  double t3428;
  double t3533;
  double t3593;
  double t3608;
  double t3724;
  double t3777;
  double t3798;
  double t3841;
  double t3944;
  double t4054;
  double t4117;
  double t3209;
  double t3231;
  double t3348;
  double t4178;
  double t4191;
  double t4318;
  double t4390;
  double t4439;
  double t4504;
  double t4523;
  double t4530;
  double t2227;
  double t2258;
  double t2271;
  double t3443;
  double t3487;
  double t3490;
  double t3355;
  double t3360;
  double t3379;
  double t2747;
  double t3060;
  double t3086;
  double t3515;
  double t3519;
  double t3525;
  t332 = Cos(var1[3]);
  t817 = Cos(var1[5]);
  t1110 = Sin(var1[3]);
  t909 = Sin(var1[4]);
  t1147 = Sin(var1[5]);
  t552 = Cos(var1[10]);
  t456 = Cos(var1[4]);
  t482 = Sin(var1[10]);
  t606 = Cos(var1[9]);
  t1024 = t332*t817*t909;
  t1180 = t1110*t1147;
  t1212 = t1024 + t1180;
  t1238 = t606*t1212;
  t1254 = Sin(var1[9]);
  t1313 = -1.*t817*t1110;
  t1326 = t332*t909*t1147;
  t1425 = t1313 + t1326;
  t1429 = -1.*t1254*t1425;
  t1548 = t1238 + t1429;
  t282 = Sin(var1[11]);
  t1620 = Cos(var1[11]);
  t1916 = t817*t1110*t909;
  t1932 = -1.*t332*t1147;
  t1933 = t1916 + t1932;
  t1951 = t606*t1933;
  t1972 = t332*t817;
  t1983 = t1110*t909*t1147;
  t2140 = t1972 + t1983;
  t2178 = -1.*t1254*t2140;
  t2189 = t1951 + t2178;
  t2464 = t606*t456*t817;
  t2491 = -1.*t456*t1254*t1147;
  t2498 = t2464 + t2491;
  t543 = t332*t456*t482;
  t1561 = t552*t1548;
  t1594 = t543 + t1561;
  t1653 = t552*t332*t456;
  t1682 = -1.*t482*t1548;
  t1793 = t1653 + t1682;
  t1906 = t456*t482*t1110;
  t2195 = t552*t2189;
  t2200 = t1906 + t2195;
  t2239 = t552*t456*t1110;
  t2240 = -1.*t482*t2189;
  t2250 = t2239 + t2240;
  t2375 = -1.*t482*t909;
  t2502 = t552*t2498;
  t2598 = t2375 + t2502;
  t2822 = -1.*t552*t909;
  t2895 = -1.*t482*t2498;
  t2980 = t2822 + t2895;
  t3092 = t1254*t1212;
  t3098 = t606*t1425;
  t3104 = t3092 + t3098;
  t4230 = -1.*t1620;
  t4237 = 1. + t4230;
  t1595 = -1.*t282*t1594;
  t1853 = t1620*t1793;
  t1893 = t1595 + t1853;
  t3402 = t1620*t1594;
  t3405 = t282*t1793;
  t3428 = t3402 + t3405;
  t3533 = -1.*t552;
  t3593 = 1. + t3533;
  t3608 = 0.183*t3593;
  t3724 = 0. + t3608;
  t3777 = -0.047*t1254;
  t3798 = 0. + t3777;
  t3841 = -1.*t606;
  t3944 = 1. + t3841;
  t4054 = 0.047*t3944;
  t4117 = 0. + t4054;
  t3209 = t1254*t1933;
  t3231 = t606*t2140;
  t3348 = t3209 + t3231;
  t4178 = 0.183*t482;
  t4191 = 0. + t4178;
  t4318 = -0.25*t4237;
  t4390 = 0.183*t282;
  t4439 = 0. + t4318 + t4390;
  t4504 = 0.183*t4237;
  t4523 = 0.25*t282;
  t4530 = 0. + t4504 + t4523;
  t2227 = -1.*t282*t2200;
  t2258 = t1620*t2250;
  t2271 = t2227 + t2258;
  t3443 = t1620*t2200;
  t3487 = t282*t2250;
  t3490 = t3443 + t3487;
  t3355 = t456*t817*t1254;
  t3360 = t606*t456*t1147;
  t3379 = t3355 + t3360;
  t2747 = -1.*t282*t2598;
  t3060 = t1620*t2980;
  t3086 = t2747 + t3060;
  t3515 = t1620*t2598;
  t3519 = t282*t2980;
  t3525 = t3515 + t3519;
  p_output1[0]=t1893;
  p_output1[1]=t2271;
  p_output1[2]=t3086;
  p_output1[3]=0.;
  p_output1[4]=t3104;
  p_output1[5]=t3348;
  p_output1[6]=t3379;
  p_output1[7]=0.;
  p_output1[8]=t3428;
  p_output1[9]=t3490;
  p_output1[10]=t3525;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1893 + 0.15331*t3104 - 0.25*t3428 + t1212*t3798 + t1425*t4117 + t1548*t4191 + t1594*t4439 + t1793*t4530 + t332*t3724*t456 + var1[0];
  p_output1[13]=0. + 0.183*t2271 + 0.15331*t3348 - 0.25*t3490 + t1933*t3798 + t2140*t4117 + t2189*t4191 + t2200*t4439 + t2250*t4530 + t1110*t3724*t456 + var1[1];
  p_output1[14]=0. + 0.183*t3086 + 0.15331*t3379 - 0.25*t3525 + t2498*t4191 + t2598*t4439 + t2980*t4530 + t1147*t4117*t456 + t3798*t456*t817 - 1.*t3724*t909 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
