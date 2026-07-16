/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t176;
  double t1379;
  double t1707;
  double t1572;
  double t1948;
  double t95;
  double t376;
  double t636;
  double t676;
  double t2763;
  double t1610;
  double t2079;
  double t2162;
  double t2835;
  double t2927;
  double t2951;
  double t3429;
  double t3461;
  double t3511;
  double t3730;
  double t3985;
  double t3989;
  double t2441;
  double t3140;
  double t3218;
  double t3666;
  double t4007;
  double t4198;
  double t4324;
  double t4338;
  double t4343;
  double t4481;
  double t4509;
  double t4585;
  double t595;
  double t3328;
  double t3348;
  double t5393;
  double t5411;
  double t5476;
  double t5487;
  double t5518;
  double t5526;
  double t5559;
  double t5569;
  double t5584;
  double t5594;
  double t4587;
  double t4620;
  double t4690;
  double t5717;
  double t5718;
  double t3428;
  double t4210;
  double t4252;
  double t4730;
  double t4881;
  double t4968;
  double t4311;
  double t4351;
  double t4362;
  t176 = Cos(var1[3]);
  t1379 = Cos(var1[5]);
  t1707 = Sin(var1[3]);
  t1572 = Sin(var1[4]);
  t1948 = Sin(var1[5]);
  t95 = Cos(var1[16]);
  t376 = Cos(var1[4]);
  t636 = Sin(var1[16]);
  t676 = Cos(var1[15]);
  t2763 = Sin(var1[15]);
  t1610 = t176*t1379*t1572;
  t2079 = t1707*t1948;
  t2162 = t1610 + t2079;
  t2835 = -1.*t1379*t1707;
  t2927 = t176*t1572*t1948;
  t2951 = t2835 + t2927;
  t3429 = t1379*t1707*t1572;
  t3461 = -1.*t176*t1948;
  t3511 = t3429 + t3461;
  t3730 = t176*t1379;
  t3985 = t1707*t1572*t1948;
  t3989 = t3730 + t3985;
  t2441 = t676*t2162;
  t3140 = -1.*t2763*t2951;
  t3218 = t2441 + t3140;
  t3666 = t676*t3511;
  t4007 = -1.*t2763*t3989;
  t4198 = t3666 + t4007;
  t4324 = t676*t376*t1379;
  t4338 = -1.*t376*t2763*t1948;
  t4343 = t4324 + t4338;
  t4481 = t2763*t2162;
  t4509 = t676*t2951;
  t4585 = t4481 + t4509;
  t595 = t95*t176*t376;
  t3328 = -1.*t636*t3218;
  t3348 = t595 + t3328;
  t5393 = -1.*t95;
  t5411 = 1. + t5393;
  t5476 = -0.183*t5411;
  t5487 = 0. + t5476;
  t5518 = -0.047*t2763;
  t5526 = 0. + t5518;
  t5559 = -1.*t676;
  t5569 = 1. + t5559;
  t5584 = 0.047*t5569;
  t5594 = 0. + t5584;
  t4587 = t2763*t3511;
  t4620 = t676*t3989;
  t4690 = t4587 + t4620;
  t5717 = -0.183*t636;
  t5718 = 0. + t5717;
  t3428 = t95*t376*t1707;
  t4210 = -1.*t636*t4198;
  t4252 = t3428 + t4210;
  t4730 = t376*t1379*t2763;
  t4881 = t676*t376*t1948;
  t4968 = t4730 + t4881;
  t4311 = -1.*t95*t1572;
  t4351 = -1.*t636*t4343;
  t4362 = t4311 + t4351;
  p_output1[0]=t3348;
  p_output1[1]=t4252;
  p_output1[2]=t4362;
  p_output1[3]=0.;
  p_output1[4]=t4585;
  p_output1[5]=t4690;
  p_output1[6]=t4968;
  p_output1[7]=0.;
  p_output1[8]=t176*t376*t636 + t3218*t95;
  p_output1[9]=t1707*t376*t636 + t4198*t95;
  p_output1[10]=-1.*t1572*t636 + t4343*t95;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3348 + 0.17458*t4585 + t176*t376*t5487 + t2162*t5526 + t2951*t5594 + t3218*t5718 + var1[0];
  p_output1[13]=0. - 0.183*t4252 + 0.17458*t4690 + t1707*t376*t5487 + t3511*t5526 + t3989*t5594 + t4198*t5718 + var1[1];
  p_output1[14]=0. - 0.183*t4362 + 0.17458*t4968 - 1.*t1572*t5487 + t1379*t376*t5526 + t1948*t376*t5594 + t4343*t5718 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
