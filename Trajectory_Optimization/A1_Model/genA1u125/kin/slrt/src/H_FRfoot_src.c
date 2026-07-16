/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:47 GMT-05:00
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
  double t508;
  double t1063;
  double t1161;
  double t1064;
  double t1220;
  double t656;
  double t777;
  double t1068;
  double t1412;
  double t1433;
  double t1455;
  double t1471;
  double t1480;
  double t1495;
  double t1546;
  double t1551;
  double t1553;
  double t579;
  double t1649;
  double t401;
  double t2158;
  double t2234;
  double t2270;
  double t2425;
  double t2428;
  double t2466;
  double t2575;
  double t2590;
  double t2677;
  double t1964;
  double t2892;
  double t2943;
  double t2969;
  double t1809;
  double t1874;
  double t1939;
  double t743;
  double t1775;
  double t1784;
  double t2853;
  double t2854;
  double t2867;
  double t2148;
  double t2725;
  double t2830;
  double t3131;
  double t3163;
  double t3169;
  double t2883;
  double t2997;
  double t3025;
  double t3256;
  double t3293;
  double t3362;
  double t4300;
  double t4327;
  double t1804;
  double t1976;
  double t2066;
  double t3550;
  double t3554;
  double t3595;
  double t3802;
  double t3808;
  double t3810;
  double t3820;
  double t3919;
  double t3964;
  double t3975;
  double t4042;
  double t4061;
  double t4062;
  double t3377;
  double t3394;
  double t3398;
  double t4177;
  double t4225;
  double t4340;
  double t4369;
  double t4536;
  double t4548;
  double t4555;
  double t4584;
  double t2846;
  double t2870;
  double t2881;
  double t3704;
  double t3731;
  double t3733;
  double t3425;
  double t3434;
  double t3530;
  double t3119;
  double t3230;
  double t3243;
  double t3744;
  double t3769;
  double t3784;
  t508 = Cos(var1[3]);
  t1063 = Cos(var1[5]);
  t1161 = Sin(var1[3]);
  t1064 = Sin(var1[4]);
  t1220 = Sin(var1[5]);
  t656 = Cos(var1[7]);
  t777 = Cos(var1[6]);
  t1068 = t508*t1063*t1064;
  t1412 = t1161*t1220;
  t1433 = t1068 + t1412;
  t1455 = t777*t1433;
  t1471 = -1.*t1063*t1161;
  t1480 = t508*t1064*t1220;
  t1495 = t1471 + t1480;
  t1546 = Sin(var1[6]);
  t1551 = -1.*t1495*t1546;
  t1553 = t1455 + t1551;
  t579 = Cos(var1[4]);
  t1649 = Sin(var1[7]);
  t401 = Cos(var1[8]);
  t2158 = t1063*t1161*t1064;
  t2234 = -1.*t508*t1220;
  t2270 = t2158 + t2234;
  t2425 = t777*t2270;
  t2428 = t508*t1063;
  t2466 = t1161*t1064*t1220;
  t2575 = t2428 + t2466;
  t2590 = -1.*t2575*t1546;
  t2677 = t2425 + t2590;
  t1964 = Sin(var1[8]);
  t2892 = t579*t1063*t777;
  t2943 = -1.*t579*t1220*t1546;
  t2969 = t2892 + t2943;
  t1809 = t656*t1553;
  t1874 = t508*t579*t1649;
  t1939 = t1809 + t1874;
  t743 = t508*t579*t656;
  t1775 = -1.*t1553*t1649;
  t1784 = t743 + t1775;
  t2853 = t656*t2677;
  t2854 = t579*t1161*t1649;
  t2867 = t2853 + t2854;
  t2148 = t579*t656*t1161;
  t2725 = -1.*t2677*t1649;
  t2830 = t2148 + t2725;
  t3131 = t656*t2969;
  t3163 = -1.*t1064*t1649;
  t3169 = t3131 + t3163;
  t2883 = -1.*t656*t1064;
  t2997 = -1.*t2969*t1649;
  t3025 = t2883 + t2997;
  t3256 = t777*t1495;
  t3293 = t1433*t1546;
  t3362 = t3256 + t3293;
  t4300 = -1.*t401;
  t4327 = 1. + t4300;
  t1804 = t401*t1784;
  t1976 = -1.*t1939*t1964;
  t2066 = t1804 + t1976;
  t3550 = t401*t1939;
  t3554 = t1784*t1964;
  t3595 = t3550 + t3554;
  t3802 = -1.*t656;
  t3808 = 1. + t3802;
  t3810 = 0.183*t3808;
  t3820 = 0. + t3810;
  t3919 = -1.*t777;
  t3964 = 1. + t3919;
  t3975 = -0.047*t3964;
  t4042 = 0. + t3975;
  t4061 = 0.047*t1546;
  t4062 = 0. + t4061;
  t3377 = t777*t2575;
  t3394 = t2270*t1546;
  t3398 = t3377 + t3394;
  t4177 = 0.183*t1649;
  t4225 = 0. + t4177;
  t4340 = -0.25*t4327;
  t4369 = 0.183*t1964;
  t4536 = 0. + t4340 + t4369;
  t4548 = 0.183*t4327;
  t4555 = 0.25*t1964;
  t4584 = 0. + t4548 + t4555;
  t2846 = t401*t2830;
  t2870 = -1.*t2867*t1964;
  t2881 = t2846 + t2870;
  t3704 = t401*t2867;
  t3731 = t2830*t1964;
  t3733 = t3704 + t3731;
  t3425 = t579*t777*t1220;
  t3434 = t579*t1063*t1546;
  t3530 = t3425 + t3434;
  t3119 = t401*t3025;
  t3230 = -1.*t3169*t1964;
  t3243 = t3119 + t3230;
  t3744 = t401*t3169;
  t3769 = t3025*t1964;
  t3784 = t3744 + t3769;
  p_output1[0]=t2066;
  p_output1[1]=t2881;
  p_output1[2]=t3243;
  p_output1[3]=0.;
  p_output1[4]=t3362;
  p_output1[5]=t3398;
  p_output1[6]=t3530;
  p_output1[7]=0.;
  p_output1[8]=t3595;
  p_output1[9]=t3733;
  p_output1[10]=t3784;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2066 - 0.15331*t3362 - 0.5*t3595 + t1495*t4042 + t1433*t4062 + t1553*t4225 + t1939*t4536 + t1784*t4584 + t3820*t508*t579 + var1[0];
  p_output1[13]=0. + 0.183*t2881 - 0.15331*t3398 - 0.5*t3733 + t2575*t4042 + t2270*t4062 + t2677*t4225 + t2867*t4536 + t2830*t4584 + t1161*t3820*t579 + var1[1];
  p_output1[14]=0. + 0.183*t3243 - 0.15331*t3530 - 0.5*t3784 - 1.*t1064*t3820 + t2969*t4225 + t3169*t4536 + t3025*t4584 + t1220*t4042*t579 + t1063*t4062*t579 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
