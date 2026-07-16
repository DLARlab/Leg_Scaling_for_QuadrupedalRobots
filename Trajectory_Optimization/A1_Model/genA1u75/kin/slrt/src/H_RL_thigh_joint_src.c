/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:10 GMT-05:00
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
  double t1037;
  double t1769;
  double t2671;
  double t2016;
  double t2678;
  double t788;
  double t1207;
  double t1503;
  double t1535;
  double t3339;
  double t2634;
  double t2872;
  double t2908;
  double t3403;
  double t3460;
  double t3507;
  double t4573;
  double t4621;
  double t4774;
  double t4809;
  double t4861;
  double t4996;
  double t2989;
  double t3895;
  double t4057;
  double t4808;
  double t5017;
  double t5022;
  double t5366;
  double t5381;
  double t5382;
  double t5645;
  double t5743;
  double t5828;
  double t1400;
  double t4367;
  double t4483;
  double t6127;
  double t6151;
  double t6162;
  double t6240;
  double t6376;
  double t6379;
  double t6388;
  double t6399;
  double t6447;
  double t6493;
  double t5857;
  double t5859;
  double t5874;
  double t6627;
  double t6660;
  double t4497;
  double t5094;
  double t5169;
  double t5944;
  double t5945;
  double t5946;
  double t5360;
  double t5571;
  double t5634;
  t1037 = Cos(var1[3]);
  t1769 = Cos(var1[5]);
  t2671 = Sin(var1[3]);
  t2016 = Sin(var1[4]);
  t2678 = Sin(var1[5]);
  t788 = Cos(var1[16]);
  t1207 = Cos(var1[4]);
  t1503 = Sin(var1[16]);
  t1535 = Cos(var1[15]);
  t3339 = Sin(var1[15]);
  t2634 = t1037*t1769*t2016;
  t2872 = t2671*t2678;
  t2908 = t2634 + t2872;
  t3403 = -1.*t1769*t2671;
  t3460 = t1037*t2016*t2678;
  t3507 = t3403 + t3460;
  t4573 = t1769*t2671*t2016;
  t4621 = -1.*t1037*t2678;
  t4774 = t4573 + t4621;
  t4809 = t1037*t1769;
  t4861 = t2671*t2016*t2678;
  t4996 = t4809 + t4861;
  t2989 = t1535*t2908;
  t3895 = -1.*t3339*t3507;
  t4057 = t2989 + t3895;
  t4808 = t1535*t4774;
  t5017 = -1.*t3339*t4996;
  t5022 = t4808 + t5017;
  t5366 = t1535*t1207*t1769;
  t5381 = -1.*t1207*t3339*t2678;
  t5382 = t5366 + t5381;
  t5645 = t3339*t2908;
  t5743 = t1535*t3507;
  t5828 = t5645 + t5743;
  t1400 = t788*t1037*t1207;
  t4367 = -1.*t1503*t4057;
  t4483 = t1400 + t4367;
  t6127 = -1.*t788;
  t6151 = 1. + t6127;
  t6162 = -0.183*t6151;
  t6240 = 0. + t6162;
  t6376 = -0.047*t3339;
  t6379 = 0. + t6376;
  t6388 = -1.*t1535;
  t6399 = 1. + t6388;
  t6447 = 0.047*t6399;
  t6493 = 0. + t6447;
  t5857 = t3339*t4774;
  t5859 = t1535*t4996;
  t5874 = t5857 + t5859;
  t6627 = -0.183*t1503;
  t6660 = 0. + t6627;
  t4497 = t788*t1207*t2671;
  t5094 = -1.*t1503*t5022;
  t5169 = t4497 + t5094;
  t5944 = t1207*t1769*t3339;
  t5945 = t1535*t1207*t2678;
  t5946 = t5944 + t5945;
  t5360 = -1.*t788*t2016;
  t5571 = -1.*t1503*t5382;
  t5634 = t5360 + t5571;
  p_output1[0]=t4483;
  p_output1[1]=t5169;
  p_output1[2]=t5634;
  p_output1[3]=0.;
  p_output1[4]=t5828;
  p_output1[5]=t5874;
  p_output1[6]=t5946;
  p_output1[7]=0.;
  p_output1[8]=t1037*t1207*t1503 + t4057*t788;
  p_output1[9]=t1207*t1503*t2671 + t5022*t788;
  p_output1[10]=-1.*t1503*t2016 + t5382*t788;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4483 + 0.11079*t5828 + t1037*t1207*t6240 + t2908*t6379 + t3507*t6493 + t4057*t6660 + var1[0];
  p_output1[13]=0. - 0.183*t5169 + 0.11079*t5874 + t1207*t2671*t6240 + t4774*t6379 + t4996*t6493 + t5022*t6660 + var1[1];
  p_output1[14]=0. - 0.183*t5634 + 0.11079*t5946 - 1.*t2016*t6240 + t1207*t1769*t6379 + t1207*t2678*t6493 + t5382*t6660 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
