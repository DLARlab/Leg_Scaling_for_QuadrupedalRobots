/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t1266;
  double t1411;
  double t367;
  double t3110;
  double t3691;
  double t3981;
  double t3275;
  double t4516;
  double t4437;
  double t4492;
  double t4510;
  double t3870;
  double t3996;
  double t4167;
  double t4762;
  double t4837;
  double t4886;
  double t4621;
  double t4640;
  double t4643;
  double t4404;
  double t4522;
  double t4574;
  double t5933;
  double t5946;
  double t5947;
  double t5965;
  double t6004;
  double t6059;
  double t4689;
  double t4892;
  double t4900;
  double t4911;
  double t4912;
  double t5062;
  t1266 = Cos(var1[4]);
  t1411 = Sin(var1[3]);
  t367 = Cos(var1[3]);
  t3110 = Sin(var1[4]);
  t3691 = Cos(var1[5]);
  t3981 = Sin(var1[5]);
  t3275 = Cos(var1[6]);
  t4516 = Sin(var1[6]);
  t4437 = t367*t3691*t3110;
  t4492 = t1411*t3981;
  t4510 = t4437 + t4492;
  t3870 = -1.*t3691*t1411;
  t3996 = t367*t3110*t3981;
  t4167 = t3870 + t3996;
  t4762 = t3691*t1411*t3110;
  t4837 = -1.*t367*t3981;
  t4886 = t4762 + t4837;
  t4621 = t367*t3691;
  t4640 = t1411*t3110*t3981;
  t4643 = t4621 + t4640;
  t4404 = t3275*t4167;
  t4522 = t4510*t4516;
  t4574 = t4404 + t4522;
  t5933 = -1.*t3275;
  t5946 = 1. + t5933;
  t5947 = -0.047*t5946;
  t5965 = 0. + t5947;
  t6004 = 0.047*t4516;
  t6059 = 0. + t6004;
  t4689 = t3275*t4643;
  t4892 = t4886*t4516;
  t4900 = t4689 + t4892;
  t4911 = t1266*t3275*t3981;
  t4912 = t1266*t3691*t4516;
  t5062 = t4911 + t4912;
  p_output1[0]=t1266*t367;
  p_output1[1]=t1266*t1411;
  p_output1[2]=-1.*t3110;
  p_output1[3]=0.;
  p_output1[4]=t4574;
  p_output1[5]=t4900;
  p_output1[6]=t5062;
  p_output1[7]=0.;
  p_output1[8]=t3275*t4510 - 1.*t4167*t4516;
  p_output1[9]=-1.*t4516*t4643 + t3275*t4886;
  p_output1[10]=t1266*t3275*t3691 - 1.*t1266*t3981*t4516;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1266*t367 - 0.047*t4574 + t4167*t5965 + t4510*t6059 + var1[0];
  p_output1[13]=0. + 0.183*t1266*t1411 - 0.047*t4900 + t4643*t5965 + t4886*t6059 + var1[1];
  p_output1[14]=0. - 0.183*t3110 - 0.047*t5062 + t1266*t3981*t5965 + t1266*t3691*t6059 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
