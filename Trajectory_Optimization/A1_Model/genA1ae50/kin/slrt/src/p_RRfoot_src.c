/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot_src.h"

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
  double t1174;
  double t1329;
  double t1437;
  double t1406;
  double t1453;
  double t1293;
  double t1408;
  double t1479;
  double t1482;
  double t1550;
  double t2563;
  double t2848;
  double t3377;
  double t1235;
  double t3646;
  double t341;
  double t3699;
  double t3709;
  double t3721;
  double t3781;
  double t3790;
  double t3820;
  double t3853;
  double t3890;
  double t3894;
  double t3918;
  double t4012;
  double t4026;
  double t4037;
  double t500;
  double t504;
  double t554;
  double t804;
  double t1325;
  double t1326;
  double t1736;
  double t1822;
  double t1969;
  double t2175;
  double t4152;
  double t4201;
  double t4227;
  double t4263;
  double t4362;
  double t4375;
  double t3682;
  double t3694;
  double t3850;
  double t3854;
  double t3872;
  double t4527;
  double t4546;
  double t4561;
  double t3961;
  double t3967;
  double t3971;
  double t4617;
  double t4695;
  double t4702;
  double t4747;
  double t4749;
  double t4764;
  double t5115;
  double t5169;
  double t5177;
  double t5243;
  double t5244;
  double t5265;
  double t5268;
  double t5273;
  double t5274;
  t1174 = Cos(var1[3]);
  t1329 = Cos(var1[5]);
  t1437 = Sin(var1[3]);
  t1406 = Sin(var1[4]);
  t1453 = Sin(var1[5]);
  t1293 = Sin(var1[12]);
  t1408 = t1174*t1329*t1406;
  t1479 = t1437*t1453;
  t1482 = t1408 + t1479;
  t1550 = Cos(var1[12]);
  t2563 = -1.*t1329*t1437;
  t2848 = t1174*t1406*t1453;
  t3377 = t2563 + t2848;
  t1235 = Cos(var1[4]);
  t3646 = Sin(var1[13]);
  t341 = Cos(var1[13]);
  t3699 = t1550*t1482;
  t3709 = -1.*t1293*t3377;
  t3721 = t3699 + t3709;
  t3781 = Cos(var1[14]);
  t3790 = -1.*t3781;
  t3820 = 1. + t3790;
  t3853 = Sin(var1[14]);
  t3890 = t1174*t1235*t3646;
  t3894 = t341*t3721;
  t3918 = t3890 + t3894;
  t4012 = t341*t1174*t1235;
  t4026 = -1.*t3646*t3721;
  t4037 = t4012 + t4026;
  t500 = -1.*t341;
  t504 = 1. + t500;
  t554 = -0.183*t504;
  t804 = 0. + t554;
  t1325 = 0.047*t1293;
  t1326 = 0. + t1325;
  t1736 = -1.*t1550;
  t1822 = 1. + t1736;
  t1969 = -0.047*t1822;
  t2175 = 0. + t1969;
  t4152 = t1329*t1437*t1406;
  t4201 = -1.*t1174*t1453;
  t4227 = t4152 + t4201;
  t4263 = t1174*t1329;
  t4362 = t1437*t1406*t1453;
  t4375 = t4263 + t4362;
  t3682 = -0.183*t3646;
  t3694 = 0. + t3682;
  t3850 = -0.1*t3820;
  t3854 = -0.183*t3853;
  t3872 = 0. + t3850 + t3854;
  t4527 = t1550*t4227;
  t4546 = -1.*t1293*t4375;
  t4561 = t4527 + t4546;
  t3961 = -0.183*t3820;
  t3967 = 0.1*t3853;
  t3971 = 0. + t3961 + t3967;
  t4617 = t1235*t3646*t1437;
  t4695 = t341*t4561;
  t4702 = t4617 + t4695;
  t4747 = t341*t1235*t1437;
  t4749 = -1.*t3646*t4561;
  t4764 = t4747 + t4749;
  t5115 = t1550*t1235*t1329;
  t5169 = -1.*t1235*t1293*t1453;
  t5177 = t5115 + t5169;
  t5243 = -1.*t3646*t1406;
  t5244 = t341*t5177;
  t5265 = t5243 + t5244;
  t5268 = -1.*t341*t1406;
  t5273 = -1.*t3646*t5177;
  t5274 = t5268 + t5273;
  p_output1[0]=0. + t1326*t1482 + t2175*t3377 - 0.13205*(t1293*t1482 + t1550*t3377) + t3694*t3721 + t3872*t3918 + t3971*t4037 - 0.183*(-1.*t3853*t3918 + t3781*t4037) - 0.2*(t3781*t3918 + t3853*t4037) + t1174*t1235*t804 + var1[0];
  p_output1[1]=0. + t1326*t4227 + t2175*t4375 - 0.13205*(t1293*t4227 + t1550*t4375) + t3694*t4561 + t3872*t4702 + t3971*t4764 - 0.183*(-1.*t3853*t4702 + t3781*t4764) - 0.2*(t3781*t4702 + t3853*t4764) + t1235*t1437*t804 + var1[1];
  p_output1[2]=0. + t1235*t1326*t1329 - 0.13205*(t1235*t1293*t1329 + t1235*t1453*t1550) + t1235*t1453*t2175 + t3694*t5177 + t3872*t5265 + t3971*t5274 - 0.183*(-1.*t3853*t5265 + t3781*t5274) - 0.2*(t3781*t5265 + t3853*t5274) - 1.*t1406*t804 + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
