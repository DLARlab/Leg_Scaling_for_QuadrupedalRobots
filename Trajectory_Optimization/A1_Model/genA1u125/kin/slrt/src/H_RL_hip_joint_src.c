/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint_src.h"

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
  double t790;
  double t675;
  double t1469;
  double t1137;
  double t1973;
  double t2616;
  double t1766;
  double t3512;
  double t2320;
  double t2887;
  double t2925;
  double t3678;
  double t3897;
  double t3906;
  double t4224;
  double t4386;
  double t4535;
  double t4691;
  double t4716;
  double t4732;
  double t3133;
  double t4090;
  double t4111;
  double t5137;
  double t5162;
  double t5211;
  double t5221;
  double t5255;
  double t5333;
  double t4630;
  double t4750;
  double t4835;
  double t4907;
  double t4942;
  double t4967;
  t790 = Cos(var1[4]);
  t675 = Cos(var1[3]);
  t1469 = Sin(var1[4]);
  t1137 = Sin(var1[3]);
  t1973 = Cos(var1[5]);
  t2616 = Sin(var1[5]);
  t1766 = Sin(var1[15]);
  t3512 = Cos(var1[15]);
  t2320 = t675*t1973*t1469;
  t2887 = t1137*t2616;
  t2925 = t2320 + t2887;
  t3678 = -1.*t1973*t1137;
  t3897 = t675*t1469*t2616;
  t3906 = t3678 + t3897;
  t4224 = t1973*t1137*t1469;
  t4386 = -1.*t675*t2616;
  t4535 = t4224 + t4386;
  t4691 = t675*t1973;
  t4716 = t1137*t1469*t2616;
  t4732 = t4691 + t4716;
  t3133 = t1766*t2925;
  t4090 = t3512*t3906;
  t4111 = t3133 + t4090;
  t5137 = -0.047*t1766;
  t5162 = 0. + t5137;
  t5211 = -1.*t3512;
  t5221 = 1. + t5211;
  t5255 = 0.047*t5221;
  t5333 = 0. + t5255;
  t4630 = t1766*t4535;
  t4750 = t3512*t4732;
  t4835 = t4630 + t4750;
  t4907 = t790*t1973*t1766;
  t4942 = t3512*t790*t2616;
  t4967 = t4907 + t4942;
  p_output1[0]=t675*t790;
  p_output1[1]=t1137*t790;
  p_output1[2]=-1.*t1469;
  p_output1[3]=0.;
  p_output1[4]=t4111;
  p_output1[5]=t4835;
  p_output1[6]=t4967;
  p_output1[7]=0.;
  p_output1[8]=t2925*t3512 - 1.*t1766*t3906;
  p_output1[9]=t3512*t4535 - 1.*t1766*t4732;
  p_output1[10]=-1.*t1766*t2616*t790 + t1973*t3512*t790;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.047*t4111 + t2925*t5162 + t3906*t5333 - 0.183*t675*t790 + var1[0];
  p_output1[13]=0. + 0.047*t4835 + t4535*t5162 + t4732*t5333 - 0.183*t1137*t790 + var1[1];
  p_output1[14]=0. + 0.183*t1469 + 0.047*t4967 + t1973*t5162*t790 + t2616*t5333*t790 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
