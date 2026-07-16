/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:38 GMT-05:00
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
  double t150;
  double t242;
  double t270;
  double t250;
  double t318;
  double t181;
  double t203;
  double t252;
  double t321;
  double t334;
  double t340;
  double t346;
  double t360;
  double t367;
  double t424;
  double t425;
  double t438;
  double t172;
  double t445;
  double t136;
  double t655;
  double t666;
  double t667;
  double t671;
  double t685;
  double t723;
  double t725;
  double t759;
  double t786;
  double t597;
  double t1323;
  double t1344;
  double t1346;
  double t538;
  double t546;
  double t586;
  double t192;
  double t477;
  double t480;
  double t849;
  double t869;
  double t966;
  double t622;
  double t809;
  double t832;
  double t1453;
  double t1475;
  double t1491;
  double t1295;
  double t1428;
  double t1430;
  double t1649;
  double t1944;
  double t1954;
  double t3375;
  double t3376;
  double t530;
  double t608;
  double t620;
  double t2408;
  double t2413;
  double t2458;
  double t2717;
  double t2749;
  double t2766;
  double t2783;
  double t2894;
  double t2897;
  double t2992;
  double t3007;
  double t3149;
  double t3156;
  double t1993;
  double t2040;
  double t2164;
  double t3238;
  double t3347;
  double t3385;
  double t3429;
  double t3460;
  double t3575;
  double t3604;
  double t3606;
  double t843;
  double t1034;
  double t1096;
  double t2518;
  double t2539;
  double t2621;
  double t2208;
  double t2302;
  double t2399;
  double t1437;
  double t1578;
  double t1609;
  double t2675;
  double t2696;
  double t2708;
  t150 = Cos(var1[3]);
  t242 = Cos(var1[5]);
  t270 = Sin(var1[3]);
  t250 = Sin(var1[4]);
  t318 = Sin(var1[5]);
  t181 = Cos(var1[7]);
  t203 = Cos(var1[6]);
  t252 = t150*t242*t250;
  t321 = t270*t318;
  t334 = t252 + t321;
  t340 = t203*t334;
  t346 = -1.*t242*t270;
  t360 = t150*t250*t318;
  t367 = t346 + t360;
  t424 = Sin(var1[6]);
  t425 = -1.*t367*t424;
  t438 = t340 + t425;
  t172 = Cos(var1[4]);
  t445 = Sin(var1[7]);
  t136 = Cos(var1[8]);
  t655 = t242*t270*t250;
  t666 = -1.*t150*t318;
  t667 = t655 + t666;
  t671 = t203*t667;
  t685 = t150*t242;
  t723 = t270*t250*t318;
  t725 = t685 + t723;
  t759 = -1.*t725*t424;
  t786 = t671 + t759;
  t597 = Sin(var1[8]);
  t1323 = t172*t242*t203;
  t1344 = -1.*t172*t318*t424;
  t1346 = t1323 + t1344;
  t538 = t181*t438;
  t546 = t150*t172*t445;
  t586 = t538 + t546;
  t192 = t150*t172*t181;
  t477 = -1.*t438*t445;
  t480 = t192 + t477;
  t849 = t181*t786;
  t869 = t172*t270*t445;
  t966 = t849 + t869;
  t622 = t172*t181*t270;
  t809 = -1.*t786*t445;
  t832 = t622 + t809;
  t1453 = t181*t1346;
  t1475 = -1.*t250*t445;
  t1491 = t1453 + t1475;
  t1295 = -1.*t181*t250;
  t1428 = -1.*t1346*t445;
  t1430 = t1295 + t1428;
  t1649 = t203*t367;
  t1944 = t334*t424;
  t1954 = t1649 + t1944;
  t3375 = -1.*t136;
  t3376 = 1. + t3375;
  t530 = t136*t480;
  t608 = -1.*t586*t597;
  t620 = t530 + t608;
  t2408 = t136*t586;
  t2413 = t480*t597;
  t2458 = t2408 + t2413;
  t2717 = -1.*t181;
  t2749 = 1. + t2717;
  t2766 = 0.183*t2749;
  t2783 = 0. + t2766;
  t2894 = -1.*t203;
  t2897 = 1. + t2894;
  t2992 = -0.047*t2897;
  t3007 = 0. + t2992;
  t3149 = 0.047*t424;
  t3156 = 0. + t3149;
  t1993 = t203*t725;
  t2040 = t667*t424;
  t2164 = t1993 + t2040;
  t3238 = 0.183*t445;
  t3347 = 0. + t3238;
  t3385 = -0.25*t3376;
  t3429 = 0.183*t597;
  t3460 = 0. + t3385 + t3429;
  t3575 = 0.183*t3376;
  t3604 = 0.25*t597;
  t3606 = 0. + t3575 + t3604;
  t843 = t136*t832;
  t1034 = -1.*t966*t597;
  t1096 = t843 + t1034;
  t2518 = t136*t966;
  t2539 = t832*t597;
  t2621 = t2518 + t2539;
  t2208 = t172*t203*t318;
  t2302 = t172*t242*t424;
  t2399 = t2208 + t2302;
  t1437 = t136*t1430;
  t1578 = -1.*t1491*t597;
  t1609 = t1437 + t1578;
  t2675 = t136*t1491;
  t2696 = t1430*t597;
  t2708 = t2675 + t2696;
  p_output1[0]=t620;
  p_output1[1]=t1096;
  p_output1[2]=t1609;
  p_output1[3]=0.;
  p_output1[4]=t1954;
  p_output1[5]=t2164;
  p_output1[6]=t2399;
  p_output1[7]=0.;
  p_output1[8]=t2458;
  p_output1[9]=t2621;
  p_output1[10]=t2708;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.13205*t1954 - 0.5*t2458 + t150*t172*t2783 + t3156*t334 + t3007*t367 + t3347*t438 + t3606*t480 + t3460*t586 + 0.183*t620 + var1[0];
  p_output1[13]=0. + 0.183*t1096 - 0.13205*t2164 - 0.5*t2621 + t172*t270*t2783 + t3156*t667 + t3007*t725 + t3347*t786 + t3606*t832 + t3460*t966 + var1[1];
  p_output1[14]=0. + 0.183*t1609 - 0.13205*t2399 - 0.5*t2708 - 1.*t250*t2783 + t172*t242*t3156 + t172*t3007*t318 + t1346*t3347 + t1491*t3460 + t1430*t3606 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
