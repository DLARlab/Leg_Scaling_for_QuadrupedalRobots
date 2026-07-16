/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint_src.h"

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
  double t1054;
  double t1917;
  double t923;
  double t4043;
  double t5609;
  double t6253;
  double t5317;
  double t6440;
  double t6394;
  double t6402;
  double t6429;
  double t6186;
  double t6254;
  double t6273;
  double t6605;
  double t6634;
  double t6637;
  double t6471;
  double t6474;
  double t6512;
  t1054 = Cos(var1[4]);
  t1917 = Sin(var1[3]);
  t923 = Cos(var1[3]);
  t4043 = Sin(var1[4]);
  t5609 = Cos(var1[5]);
  t6253 = Sin(var1[5]);
  t5317 = Cos(var1[6]);
  t6440 = Sin(var1[6]);
  t6394 = t923*t5609*t4043;
  t6402 = t1917*t6253;
  t6429 = t6394 + t6402;
  t6186 = -1.*t5609*t1917;
  t6254 = t923*t4043*t6253;
  t6273 = t6186 + t6254;
  t6605 = t5609*t1917*t4043;
  t6634 = -1.*t923*t6253;
  t6637 = t6605 + t6634;
  t6471 = t923*t5609;
  t6474 = t1917*t4043*t6253;
  t6512 = t6471 + t6474;
  p_output1[0]=t1054*t923;
  p_output1[1]=t1054*t1917;
  p_output1[2]=-1.*t4043;
  p_output1[3]=t5317*t6273 + t6429*t6440;
  p_output1[4]=t5317*t6512 + t6440*t6637;
  p_output1[5]=t1054*t5317*t6253 + t1054*t5609*t6440;
  p_output1[6]=t5317*t6429 - 1.*t6273*t6440;
  p_output1[7]=-1.*t6440*t6512 + t5317*t6637;
  p_output1[8]=t1054*t5317*t5609 - 1.*t1054*t6253*t6440;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
