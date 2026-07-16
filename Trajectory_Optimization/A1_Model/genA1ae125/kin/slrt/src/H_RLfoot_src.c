/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot_src.h"

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
  double t243;
  double t746;
  double t1105;
  double t807;
  double t1331;
  double t473;
  double t319;
  double t350;
  double t537;
  double t808;
  double t1444;
  double t1662;
  double t1725;
  double t1832;
  double t1877;
  double t1906;
  double t1981;
  double t2004;
  double t2048;
  double t204;
  double t2309;
  double t2598;
  double t2615;
  double t2657;
  double t2869;
  double t2940;
  double t3042;
  double t3073;
  double t3150;
  double t3155;
  double t3470;
  double t3489;
  double t3527;
  double t439;
  double t2051;
  double t2089;
  double t2317;
  double t2414;
  double t2417;
  double t2593;
  double t3214;
  double t3301;
  double t3318;
  double t3349;
  double t3372;
  double t3450;
  double t3554;
  double t3579;
  double t3717;
  double t3718;
  double t3729;
  double t3764;
  double t3791;
  double t3827;
  double t5289;
  double t5338;
  double t2118;
  double t2456;
  double t2563;
  double t4168;
  double t4258;
  double t4288;
  double t4524;
  double t4676;
  double t4717;
  double t4757;
  double t4908;
  double t4921;
  double t4967;
  double t4999;
  double t5042;
  double t5075;
  double t3889;
  double t3959;
  double t3988;
  double t5202;
  double t5238;
  double t5399;
  double t5410;
  double t5475;
  double t5500;
  double t5534;
  double t5539;
  double t3316;
  double t3431;
  double t3444;
  double t4299;
  double t4303;
  double t4386;
  double t3996;
  double t4092;
  double t4106;
  double t3680;
  double t3745;
  double t3757;
  double t4480;
  double t4481;
  double t4508;
  t243 = Cos(var1[3]);
  t746 = Cos(var1[5]);
  t1105 = Sin(var1[3]);
  t807 = Sin(var1[4]);
  t1331 = Sin(var1[5]);
  t473 = Cos(var1[16]);
  t319 = Cos(var1[4]);
  t350 = Sin(var1[16]);
  t537 = Cos(var1[15]);
  t808 = t243*t746*t807;
  t1444 = t1105*t1331;
  t1662 = t808 + t1444;
  t1725 = t537*t1662;
  t1832 = Sin(var1[15]);
  t1877 = -1.*t746*t1105;
  t1906 = t243*t807*t1331;
  t1981 = t1877 + t1906;
  t2004 = -1.*t1832*t1981;
  t2048 = t1725 + t2004;
  t204 = Sin(var1[17]);
  t2309 = Cos(var1[17]);
  t2598 = t746*t1105*t807;
  t2615 = -1.*t243*t1331;
  t2657 = t2598 + t2615;
  t2869 = t537*t2657;
  t2940 = t243*t746;
  t3042 = t1105*t807*t1331;
  t3073 = t2940 + t3042;
  t3150 = -1.*t1832*t3073;
  t3155 = t2869 + t3150;
  t3470 = t537*t319*t746;
  t3489 = -1.*t319*t1832*t1331;
  t3527 = t3470 + t3489;
  t439 = t243*t319*t350;
  t2051 = t473*t2048;
  t2089 = t439 + t2051;
  t2317 = t473*t243*t319;
  t2414 = -1.*t350*t2048;
  t2417 = t2317 + t2414;
  t2593 = t319*t350*t1105;
  t3214 = t473*t3155;
  t3301 = t2593 + t3214;
  t3318 = t473*t319*t1105;
  t3349 = -1.*t350*t3155;
  t3372 = t3318 + t3349;
  t3450 = -1.*t350*t807;
  t3554 = t473*t3527;
  t3579 = t3450 + t3554;
  t3717 = -1.*t473*t807;
  t3718 = -1.*t350*t3527;
  t3729 = t3717 + t3718;
  t3764 = t1832*t1662;
  t3791 = t537*t1981;
  t3827 = t3764 + t3791;
  t5289 = -1.*t2309;
  t5338 = 1. + t5289;
  t2118 = -1.*t204*t2089;
  t2456 = t2309*t2417;
  t2563 = t2118 + t2456;
  t4168 = t2309*t2089;
  t4258 = t204*t2417;
  t4288 = t4168 + t4258;
  t4524 = -1.*t473;
  t4676 = 1. + t4524;
  t4717 = -0.183*t4676;
  t4757 = 0. + t4717;
  t4908 = -0.047*t1832;
  t4921 = 0. + t4908;
  t4967 = -1.*t537;
  t4999 = 1. + t4967;
  t5042 = 0.047*t4999;
  t5075 = 0. + t5042;
  t3889 = t1832*t2657;
  t3959 = t537*t3073;
  t3988 = t3889 + t3959;
  t5202 = -0.183*t350;
  t5238 = 0. + t5202;
  t5399 = -0.25*t5338;
  t5410 = -0.183*t204;
  t5475 = 0. + t5399 + t5410;
  t5500 = -0.183*t5338;
  t5534 = 0.25*t204;
  t5539 = 0. + t5500 + t5534;
  t3316 = -1.*t204*t3301;
  t3431 = t2309*t3372;
  t3444 = t3316 + t3431;
  t4299 = t2309*t3301;
  t4303 = t204*t3372;
  t4386 = t4299 + t4303;
  t3996 = t319*t746*t1832;
  t4092 = t537*t319*t1331;
  t4106 = t3996 + t4092;
  t3680 = -1.*t204*t3579;
  t3745 = t2309*t3729;
  t3757 = t3680 + t3745;
  t4480 = t2309*t3579;
  t4481 = t204*t3729;
  t4508 = t4480 + t4481;
  p_output1[0]=t2563;
  p_output1[1]=t3444;
  p_output1[2]=t3757;
  p_output1[3]=0.;
  p_output1[4]=t3827;
  p_output1[5]=t3988;
  p_output1[6]=t4106;
  p_output1[7]=0.;
  p_output1[8]=t4288;
  p_output1[9]=t4386;
  p_output1[10]=t4508;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2563 + 0.13205*t3827 - 0.5*t4288 + t243*t319*t4757 + t1662*t4921 + t1981*t5075 + t2048*t5238 + t2089*t5475 + t2417*t5539 + var1[0];
  p_output1[13]=0. - 0.183*t3444 + 0.13205*t3988 - 0.5*t4386 + t1105*t319*t4757 + t2657*t4921 + t3073*t5075 + t3155*t5238 + t3301*t5475 + t3372*t5539 + var1[1];
  p_output1[14]=0. - 0.183*t3757 + 0.13205*t4106 - 0.5*t4508 + t1331*t319*t5075 + t3527*t5238 + t3579*t5475 + t3729*t5539 + t319*t4921*t746 - 1.*t4757*t807 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
