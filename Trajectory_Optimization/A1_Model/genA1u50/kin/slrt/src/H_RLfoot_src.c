/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:14 GMT-05:00
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
  double t524;
  double t1871;
  double t2550;
  double t2040;
  double t2585;
  double t1262;
  double t543;
  double t1003;
  double t1870;
  double t2267;
  double t2788;
  double t3090;
  double t3163;
  double t3196;
  double t3212;
  double t3238;
  double t3240;
  double t3443;
  double t3765;
  double t510;
  double t5025;
  double t7380;
  double t7382;
  double t7384;
  double t7387;
  double t7389;
  double t7396;
  double t7400;
  double t7406;
  double t7412;
  double t7438;
  double t7440;
  double t7441;
  double t1124;
  double t3785;
  double t3844;
  double t7267;
  double t7312;
  double t7318;
  double t7373;
  double t7413;
  double t7414;
  double t7417;
  double t7423;
  double t7424;
  double t7431;
  double t7444;
  double t7449;
  double t7457;
  double t7459;
  double t7466;
  double t7469;
  double t7472;
  double t7474;
  double t7557;
  double t7563;
  double t4136;
  double t7337;
  double t7365;
  double t7501;
  double t7502;
  double t7503;
  double t7513;
  double t7514;
  double t7518;
  double t7522;
  double t7536;
  double t7537;
  double t7539;
  double t7540;
  double t7541;
  double t7542;
  double t7476;
  double t7493;
  double t7497;
  double t7546;
  double t7548;
  double t7565;
  double t7567;
  double t7569;
  double t7575;
  double t7577;
  double t7579;
  double t7416;
  double t7425;
  double t7429;
  double t7504;
  double t7506;
  double t7507;
  double t7498;
  double t7499;
  double t7500;
  double t7451;
  double t7467;
  double t7468;
  double t7509;
  double t7511;
  double t7512;
  t524 = Cos(var1[3]);
  t1871 = Cos(var1[5]);
  t2550 = Sin(var1[3]);
  t2040 = Sin(var1[4]);
  t2585 = Sin(var1[5]);
  t1262 = Cos(var1[16]);
  t543 = Cos(var1[4]);
  t1003 = Sin(var1[16]);
  t1870 = Cos(var1[15]);
  t2267 = t524*t1871*t2040;
  t2788 = t2550*t2585;
  t3090 = t2267 + t2788;
  t3163 = t1870*t3090;
  t3196 = Sin(var1[15]);
  t3212 = -1.*t1871*t2550;
  t3238 = t524*t2040*t2585;
  t3240 = t3212 + t3238;
  t3443 = -1.*t3196*t3240;
  t3765 = t3163 + t3443;
  t510 = Sin(var1[17]);
  t5025 = Cos(var1[17]);
  t7380 = t1871*t2550*t2040;
  t7382 = -1.*t524*t2585;
  t7384 = t7380 + t7382;
  t7387 = t1870*t7384;
  t7389 = t524*t1871;
  t7396 = t2550*t2040*t2585;
  t7400 = t7389 + t7396;
  t7406 = -1.*t3196*t7400;
  t7412 = t7387 + t7406;
  t7438 = t1870*t543*t1871;
  t7440 = -1.*t543*t3196*t2585;
  t7441 = t7438 + t7440;
  t1124 = t524*t543*t1003;
  t3785 = t1262*t3765;
  t3844 = t1124 + t3785;
  t7267 = t1262*t524*t543;
  t7312 = -1.*t1003*t3765;
  t7318 = t7267 + t7312;
  t7373 = t543*t1003*t2550;
  t7413 = t1262*t7412;
  t7414 = t7373 + t7413;
  t7417 = t1262*t543*t2550;
  t7423 = -1.*t1003*t7412;
  t7424 = t7417 + t7423;
  t7431 = -1.*t1003*t2040;
  t7444 = t1262*t7441;
  t7449 = t7431 + t7444;
  t7457 = -1.*t1262*t2040;
  t7459 = -1.*t1003*t7441;
  t7466 = t7457 + t7459;
  t7469 = t3196*t3090;
  t7472 = t1870*t3240;
  t7474 = t7469 + t7472;
  t7557 = -1.*t5025;
  t7563 = 1. + t7557;
  t4136 = -1.*t510*t3844;
  t7337 = t5025*t7318;
  t7365 = t4136 + t7337;
  t7501 = t5025*t3844;
  t7502 = t510*t7318;
  t7503 = t7501 + t7502;
  t7513 = -1.*t1262;
  t7514 = 1. + t7513;
  t7518 = -0.183*t7514;
  t7522 = 0. + t7518;
  t7536 = -0.047*t3196;
  t7537 = 0. + t7536;
  t7539 = -1.*t1870;
  t7540 = 1. + t7539;
  t7541 = 0.047*t7540;
  t7542 = 0. + t7541;
  t7476 = t3196*t7384;
  t7493 = t1870*t7400;
  t7497 = t7476 + t7493;
  t7546 = -0.183*t1003;
  t7548 = 0. + t7546;
  t7565 = -0.1*t7563;
  t7567 = -0.183*t510;
  t7569 = 0. + t7565 + t7567;
  t7575 = -0.183*t7563;
  t7577 = 0.1*t510;
  t7579 = 0. + t7575 + t7577;
  t7416 = -1.*t510*t7414;
  t7425 = t5025*t7424;
  t7429 = t7416 + t7425;
  t7504 = t5025*t7414;
  t7506 = t510*t7424;
  t7507 = t7504 + t7506;
  t7498 = t543*t1871*t3196;
  t7499 = t1870*t543*t2585;
  t7500 = t7498 + t7499;
  t7451 = -1.*t510*t7449;
  t7467 = t5025*t7466;
  t7468 = t7451 + t7467;
  t7509 = t5025*t7449;
  t7511 = t510*t7466;
  t7512 = t7509 + t7511;
  p_output1[0]=t7365;
  p_output1[1]=t7429;
  p_output1[2]=t7468;
  p_output1[3]=0.;
  p_output1[4]=t7474;
  p_output1[5]=t7497;
  p_output1[6]=t7500;
  p_output1[7]=0.;
  p_output1[8]=t7503;
  p_output1[9]=t7507;
  p_output1[10]=t7512;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t7365 + 0.08953*t7474 - 0.2*t7503 + t524*t543*t7522 + t3090*t7537 + t3240*t7542 + t3765*t7548 + t3844*t7569 + t7318*t7579 + var1[0];
  p_output1[13]=0. - 0.183*t7429 + 0.08953*t7497 - 0.2*t7507 + t2550*t543*t7522 + t7384*t7537 + t7400*t7542 + t7412*t7548 + t7414*t7569 + t7424*t7579 + var1[1];
  p_output1[14]=0. - 0.183*t7468 + 0.08953*t7500 - 0.2*t7512 - 1.*t2040*t7522 + t1871*t543*t7537 + t2585*t543*t7542 + t7441*t7548 + t7449*t7569 + t7466*t7579 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
