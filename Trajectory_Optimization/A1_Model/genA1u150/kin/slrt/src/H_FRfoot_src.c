/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot_src.h"

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
  double t562;
  double t971;
  double t1147;
  double t997;
  double t1187;
  double t768;
  double t962;
  double t1135;
  double t1404;
  double t1468;
  double t1516;
  double t1533;
  double t1688;
  double t1765;
  double t1787;
  double t1806;
  double t1867;
  double t662;
  double t1886;
  double t474;
  double t2735;
  double t2771;
  double t2799;
  double t2808;
  double t2865;
  double t2872;
  double t2896;
  double t2942;
  double t2965;
  double t2377;
  double t3325;
  double t3345;
  double t3358;
  double t2272;
  double t2312;
  double t2326;
  double t929;
  double t1968;
  double t2141;
  double t3102;
  double t3127;
  double t3238;
  double t2712;
  double t3023;
  double t3034;
  double t3448;
  double t3621;
  double t3633;
  double t3281;
  double t3362;
  double t3368;
  double t3721;
  double t3728;
  double t3756;
  double t4575;
  double t4607;
  double t2214;
  double t2558;
  double t2685;
  double t3976;
  double t4001;
  double t4008;
  double t4225;
  double t4227;
  double t4229;
  double t4235;
  double t4270;
  double t4276;
  double t4286;
  double t4308;
  double t4437;
  double t4445;
  double t3817;
  double t3860;
  double t3883;
  double t4554;
  double t4562;
  double t4653;
  double t4670;
  double t4718;
  double t4773;
  double t4797;
  double t4859;
  double t3037;
  double t3266;
  double t3273;
  double t4018;
  double t4052;
  double t4084;
  double t3891;
  double t3935;
  double t3966;
  double t3398;
  double t3699;
  double t3705;
  double t4087;
  double t4104;
  double t4177;
  t562 = Cos(var1[3]);
  t971 = Cos(var1[5]);
  t1147 = Sin(var1[3]);
  t997 = Sin(var1[4]);
  t1187 = Sin(var1[5]);
  t768 = Cos(var1[7]);
  t962 = Cos(var1[6]);
  t1135 = t562*t971*t997;
  t1404 = t1147*t1187;
  t1468 = t1135 + t1404;
  t1516 = t962*t1468;
  t1533 = -1.*t971*t1147;
  t1688 = t562*t997*t1187;
  t1765 = t1533 + t1688;
  t1787 = Sin(var1[6]);
  t1806 = -1.*t1765*t1787;
  t1867 = t1516 + t1806;
  t662 = Cos(var1[4]);
  t1886 = Sin(var1[7]);
  t474 = Cos(var1[8]);
  t2735 = t971*t1147*t997;
  t2771 = -1.*t562*t1187;
  t2799 = t2735 + t2771;
  t2808 = t962*t2799;
  t2865 = t562*t971;
  t2872 = t1147*t997*t1187;
  t2896 = t2865 + t2872;
  t2942 = -1.*t2896*t1787;
  t2965 = t2808 + t2942;
  t2377 = Sin(var1[8]);
  t3325 = t662*t971*t962;
  t3345 = -1.*t662*t1187*t1787;
  t3358 = t3325 + t3345;
  t2272 = t768*t1867;
  t2312 = t562*t662*t1886;
  t2326 = t2272 + t2312;
  t929 = t562*t662*t768;
  t1968 = -1.*t1867*t1886;
  t2141 = t929 + t1968;
  t3102 = t768*t2965;
  t3127 = t662*t1147*t1886;
  t3238 = t3102 + t3127;
  t2712 = t662*t768*t1147;
  t3023 = -1.*t2965*t1886;
  t3034 = t2712 + t3023;
  t3448 = t768*t3358;
  t3621 = -1.*t997*t1886;
  t3633 = t3448 + t3621;
  t3281 = -1.*t768*t997;
  t3362 = -1.*t3358*t1886;
  t3368 = t3281 + t3362;
  t3721 = t962*t1765;
  t3728 = t1468*t1787;
  t3756 = t3721 + t3728;
  t4575 = -1.*t474;
  t4607 = 1. + t4575;
  t2214 = t474*t2141;
  t2558 = -1.*t2326*t2377;
  t2685 = t2214 + t2558;
  t3976 = t474*t2326;
  t4001 = t2141*t2377;
  t4008 = t3976 + t4001;
  t4225 = -1.*t768;
  t4227 = 1. + t4225;
  t4229 = 0.183*t4227;
  t4235 = 0. + t4229;
  t4270 = -1.*t962;
  t4276 = 1. + t4270;
  t4286 = -0.047*t4276;
  t4308 = 0. + t4286;
  t4437 = 0.047*t1787;
  t4445 = 0. + t4437;
  t3817 = t962*t2896;
  t3860 = t2799*t1787;
  t3883 = t3817 + t3860;
  t4554 = 0.183*t1886;
  t4562 = 0. + t4554;
  t4653 = -0.3*t4607;
  t4670 = 0.183*t2377;
  t4718 = 0. + t4653 + t4670;
  t4773 = 0.183*t4607;
  t4797 = 0.3*t2377;
  t4859 = 0. + t4773 + t4797;
  t3037 = t474*t3034;
  t3266 = -1.*t3238*t2377;
  t3273 = t3037 + t3266;
  t4018 = t474*t3238;
  t4052 = t3034*t2377;
  t4084 = t4018 + t4052;
  t3891 = t662*t962*t1187;
  t3935 = t662*t971*t1787;
  t3966 = t3891 + t3935;
  t3398 = t474*t3368;
  t3699 = -1.*t3633*t2377;
  t3705 = t3398 + t3699;
  t4087 = t474*t3633;
  t4104 = t3368*t2377;
  t4177 = t4087 + t4104;
  p_output1[0]=t2685;
  p_output1[1]=t3273;
  p_output1[2]=t3705;
  p_output1[3]=0.;
  p_output1[4]=t3756;
  p_output1[5]=t3883;
  p_output1[6]=t3966;
  p_output1[7]=0.;
  p_output1[8]=t4008;
  p_output1[9]=t4084;
  p_output1[10]=t4177;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2685 - 0.17458*t3756 - 0.6*t4008 + t1765*t4308 + t1468*t4445 + t1867*t4562 + t2326*t4718 + t2141*t4859 + t4235*t562*t662 + var1[0];
  p_output1[13]=0. + 0.183*t3273 - 0.17458*t3883 - 0.6*t4084 + t2896*t4308 + t2799*t4445 + t2965*t4562 + t3238*t4718 + t3034*t4859 + t1147*t4235*t662 + var1[1];
  p_output1[14]=0. + 0.183*t3705 - 0.17458*t3966 - 0.6*t4177 + t3358*t4562 + t3633*t4718 + t3368*t4859 + t1187*t4308*t662 + t4445*t662*t971 - 1.*t4235*t997 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
