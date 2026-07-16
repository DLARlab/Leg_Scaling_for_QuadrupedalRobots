/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t1914;
  double t4640;
  double t6151;
  double t6021;
  double t6272;
  double t3060;
  double t6141;
  double t6558;
  double t6745;
  double t7064;
  double t7526;
  double t7534;
  double t7544;
  double t2021;
  double t7883;
  double t148;
  double t8212;
  double t8234;
  double t8337;
  double t8359;
  double t8361;
  double t8380;
  double t8416;
  double t8459;
  double t8463;
  double t8496;
  double t8516;
  double t8536;
  double t8543;
  double t752;
  double t1495;
  double t1789;
  double t1792;
  double t3311;
  double t4625;
  double t7190;
  double t7241;
  double t7377;
  double t7471;
  double t8582;
  double t8583;
  double t8587;
  double t8590;
  double t8591;
  double t8598;
  double t8057;
  double t8197;
  double t8412;
  double t8431;
  double t8447;
  double t8611;
  double t8612;
  double t8613;
  double t8507;
  double t8510;
  double t8512;
  double t8615;
  double t8616;
  double t8617;
  double t8639;
  double t8643;
  double t8657;
  double t8723;
  double t8725;
  double t8727;
  double t8740;
  double t8741;
  double t8744;
  double t8748;
  double t8749;
  double t8750;
  t1914 = Cos(var1[3]);
  t4640 = Cos(var1[5]);
  t6151 = Sin(var1[3]);
  t6021 = Sin(var1[4]);
  t6272 = Sin(var1[5]);
  t3060 = Sin(var1[9]);
  t6141 = t1914*t4640*t6021;
  t6558 = t6151*t6272;
  t6745 = t6141 + t6558;
  t7064 = Cos(var1[9]);
  t7526 = -1.*t4640*t6151;
  t7534 = t1914*t6021*t6272;
  t7544 = t7526 + t7534;
  t2021 = Cos(var1[4]);
  t7883 = Sin(var1[10]);
  t148 = Cos(var1[10]);
  t8212 = t7064*t6745;
  t8234 = -1.*t3060*t7544;
  t8337 = t8212 + t8234;
  t8359 = Cos(var1[11]);
  t8361 = -1.*t8359;
  t8380 = 1. + t8361;
  t8416 = Sin(var1[11]);
  t8459 = t1914*t2021*t7883;
  t8463 = t148*t8337;
  t8496 = t8459 + t8463;
  t8516 = t148*t1914*t2021;
  t8536 = -1.*t7883*t8337;
  t8543 = t8516 + t8536;
  t752 = -1.*t148;
  t1495 = 1. + t752;
  t1789 = 0.183*t1495;
  t1792 = 0. + t1789;
  t3311 = -0.047*t3060;
  t4625 = 0. + t3311;
  t7190 = -1.*t7064;
  t7241 = 1. + t7190;
  t7377 = 0.047*t7241;
  t7471 = 0. + t7377;
  t8582 = t4640*t6151*t6021;
  t8583 = -1.*t1914*t6272;
  t8587 = t8582 + t8583;
  t8590 = t1914*t4640;
  t8591 = t6151*t6021*t6272;
  t8598 = t8590 + t8591;
  t8057 = 0.183*t7883;
  t8197 = 0. + t8057;
  t8412 = -0.25*t8380;
  t8431 = 0.183*t8416;
  t8447 = 0. + t8412 + t8431;
  t8611 = t7064*t8587;
  t8612 = -1.*t3060*t8598;
  t8613 = t8611 + t8612;
  t8507 = 0.183*t8380;
  t8510 = 0.25*t8416;
  t8512 = 0. + t8507 + t8510;
  t8615 = t2021*t7883*t6151;
  t8616 = t148*t8613;
  t8617 = t8615 + t8616;
  t8639 = t148*t2021*t6151;
  t8643 = -1.*t7883*t8613;
  t8657 = t8639 + t8643;
  t8723 = t7064*t2021*t4640;
  t8725 = -1.*t2021*t3060*t6272;
  t8727 = t8723 + t8725;
  t8740 = -1.*t7883*t6021;
  t8741 = t148*t8727;
  t8744 = t8740 + t8741;
  t8748 = -1.*t148*t6021;
  t8749 = -1.*t7883*t8727;
  t8750 = t8748 + t8749;
  p_output1[0]=0. + t1792*t1914*t2021 + t4625*t6745 + t7471*t7544 + 0.13205*(t3060*t6745 + t7064*t7544) + t8197*t8337 + t8447*t8496 + t8512*t8543 + 0.183*(-1.*t8416*t8496 + t8359*t8543) - 0.5*(t8359*t8496 + t8416*t8543) + var1[0];
  p_output1[1]=0. + t1792*t2021*t6151 + t4625*t8587 + t7471*t8598 + 0.13205*(t3060*t8587 + t7064*t8598) + t8197*t8613 + t8447*t8617 + t8512*t8657 + 0.183*(-1.*t8416*t8617 + t8359*t8657) - 0.5*(t8359*t8617 + t8416*t8657) + var1[1];
  p_output1[2]=0. + t2021*t4625*t4640 - 1.*t1792*t6021 + 0.13205*(t2021*t3060*t4640 + t2021*t6272*t7064) + t2021*t6272*t7471 + t8197*t8727 + t8447*t8744 + t8512*t8750 + 0.183*(-1.*t8416*t8744 + t8359*t8750) - 0.5*(t8359*t8744 + t8416*t8750) + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
