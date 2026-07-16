/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint_src.h"

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
  double t334;
  double t1236;
  double t2493;
  double t1973;
  double t2727;
  double t332;
  double t499;
  double t501;
  double t553;
  double t3242;
  double t2482;
  double t2808;
  double t3145;
  double t3279;
  double t3459;
  double t3552;
  double t5073;
  double t5104;
  double t5135;
  double t5522;
  double t5540;
  double t5698;
  double t3215;
  double t3557;
  double t4074;
  double t5136;
  double t5705;
  double t5744;
  double t5948;
  double t6079;
  double t6100;
  double t6405;
  double t6545;
  double t6734;
  double t500;
  double t4353;
  double t4832;
  double t7463;
  double t7481;
  double t7486;
  double t7534;
  double t7627;
  double t7629;
  double t7661;
  double t7790;
  double t7835;
  double t7836;
  double t6786;
  double t6792;
  double t6806;
  double t7862;
  double t7870;
  double t5057;
  double t5847;
  double t5848;
  double t6890;
  double t6996;
  double t7064;
  double t5903;
  double t6317;
  double t6366;
  t334 = Cos(var1[3]);
  t1236 = Cos(var1[5]);
  t2493 = Sin(var1[3]);
  t1973 = Sin(var1[4]);
  t2727 = Sin(var1[5]);
  t332 = Cos(var1[13]);
  t499 = Cos(var1[4]);
  t501 = Sin(var1[13]);
  t553 = Cos(var1[12]);
  t3242 = Sin(var1[12]);
  t2482 = t334*t1236*t1973;
  t2808 = t2493*t2727;
  t3145 = t2482 + t2808;
  t3279 = -1.*t1236*t2493;
  t3459 = t334*t1973*t2727;
  t3552 = t3279 + t3459;
  t5073 = t1236*t2493*t1973;
  t5104 = -1.*t334*t2727;
  t5135 = t5073 + t5104;
  t5522 = t334*t1236;
  t5540 = t2493*t1973*t2727;
  t5698 = t5522 + t5540;
  t3215 = t553*t3145;
  t3557 = -1.*t3242*t3552;
  t4074 = t3215 + t3557;
  t5136 = t553*t5135;
  t5705 = -1.*t3242*t5698;
  t5744 = t5136 + t5705;
  t5948 = t553*t499*t1236;
  t6079 = -1.*t499*t3242*t2727;
  t6100 = t5948 + t6079;
  t6405 = t3242*t3145;
  t6545 = t553*t3552;
  t6734 = t6405 + t6545;
  t500 = t332*t334*t499;
  t4353 = -1.*t501*t4074;
  t4832 = t500 + t4353;
  t7463 = -1.*t332;
  t7481 = 1. + t7463;
  t7486 = -0.183*t7481;
  t7534 = 0. + t7486;
  t7627 = 0.047*t3242;
  t7629 = 0. + t7627;
  t7661 = -1.*t553;
  t7790 = 1. + t7661;
  t7835 = -0.047*t7790;
  t7836 = 0. + t7835;
  t6786 = t3242*t5135;
  t6792 = t553*t5698;
  t6806 = t6786 + t6792;
  t7862 = -0.183*t501;
  t7870 = 0. + t7862;
  t5057 = t332*t499*t2493;
  t5847 = -1.*t501*t5744;
  t5848 = t5057 + t5847;
  t6890 = t499*t1236*t3242;
  t6996 = t553*t499*t2727;
  t7064 = t6890 + t6996;
  t5903 = -1.*t332*t1973;
  t6317 = -1.*t501*t6100;
  t6366 = t5903 + t6317;
  p_output1[0]=t4832;
  p_output1[1]=t5848;
  p_output1[2]=t6366;
  p_output1[3]=0.;
  p_output1[4]=t6734;
  p_output1[5]=t6806;
  p_output1[6]=t7064;
  p_output1[7]=0.;
  p_output1[8]=t332*t4074 + t334*t499*t501;
  p_output1[9]=t2493*t499*t501 + t332*t5744;
  p_output1[10]=-1.*t1973*t501 + t332*t6100;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4832 - 0.11079*t6734 + t334*t499*t7534 + t3145*t7629 + t3552*t7836 + t4074*t7870 + var1[0];
  p_output1[13]=0. - 0.183*t5848 - 0.11079*t6806 + t2493*t499*t7534 + t5135*t7629 + t5698*t7836 + t5744*t7870 + var1[1];
  p_output1[14]=0. - 0.183*t6366 - 0.11079*t7064 - 1.*t1973*t7534 + t1236*t499*t7629 + t2727*t499*t7836 + t6100*t7870 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
