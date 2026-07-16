/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint_src.h"

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
  double t1942;
  double t3120;
  double t3921;
  double t3125;
  double t4139;
  double t2415;
  double t2229;
  double t2249;
  double t2599;
  double t3781;
  double t4156;
  double t4172;
  double t4243;
  double t4368;
  double t4382;
  double t4408;
  double t4419;
  double t4420;
  double t4433;
  double t1543;
  double t4622;
  double t5123;
  double t5133;
  double t5173;
  double t5232;
  double t5321;
  double t5420;
  double t5494;
  double t5597;
  double t5611;
  double t5964;
  double t6017;
  double t6102;
  double t2369;
  double t4470;
  double t4494;
  double t4870;
  double t4878;
  double t4883;
  double t5067;
  double t5691;
  double t5706;
  double t5762;
  double t5837;
  double t5870;
  double t5961;
  double t6130;
  double t6148;
  double t6196;
  double t6221;
  double t6289;
  t1942 = Cos(var1[3]);
  t3120 = Cos(var1[5]);
  t3921 = Sin(var1[3]);
  t3125 = Sin(var1[4]);
  t4139 = Sin(var1[5]);
  t2415 = Cos(var1[13]);
  t2229 = Cos(var1[4]);
  t2249 = Sin(var1[13]);
  t2599 = Cos(var1[12]);
  t3781 = t1942*t3120*t3125;
  t4156 = t3921*t4139;
  t4172 = t3781 + t4156;
  t4243 = t2599*t4172;
  t4368 = Sin(var1[12]);
  t4382 = -1.*t3120*t3921;
  t4408 = t1942*t3125*t4139;
  t4419 = t4382 + t4408;
  t4420 = -1.*t4368*t4419;
  t4433 = t4243 + t4420;
  t1543 = Sin(var1[14]);
  t4622 = Cos(var1[14]);
  t5123 = t3120*t3921*t3125;
  t5133 = -1.*t1942*t4139;
  t5173 = t5123 + t5133;
  t5232 = t2599*t5173;
  t5321 = t1942*t3120;
  t5420 = t3921*t3125*t4139;
  t5494 = t5321 + t5420;
  t5597 = -1.*t4368*t5494;
  t5611 = t5232 + t5597;
  t5964 = t2599*t2229*t3120;
  t6017 = -1.*t2229*t4368*t4139;
  t6102 = t5964 + t6017;
  t2369 = t1942*t2229*t2249;
  t4470 = t2415*t4433;
  t4494 = t2369 + t4470;
  t4870 = t2415*t1942*t2229;
  t4878 = -1.*t2249*t4433;
  t4883 = t4870 + t4878;
  t5067 = t2229*t2249*t3921;
  t5691 = t2415*t5611;
  t5706 = t5067 + t5691;
  t5762 = t2415*t2229*t3921;
  t5837 = -1.*t2249*t5611;
  t5870 = t5762 + t5837;
  t5961 = -1.*t2249*t3125;
  t6130 = t2415*t6102;
  t6148 = t5961 + t6130;
  t6196 = -1.*t2415*t3125;
  t6221 = -1.*t2249*t6102;
  t6289 = t6196 + t6221;
  p_output1[0]=-1.*t1543*t4494 + t4622*t4883;
  p_output1[1]=-1.*t1543*t5706 + t4622*t5870;
  p_output1[2]=-1.*t1543*t6148 + t4622*t6289;
  p_output1[3]=t4172*t4368 + t2599*t4419;
  p_output1[4]=t4368*t5173 + t2599*t5494;
  p_output1[5]=t2229*t2599*t4139 + t2229*t3120*t4368;
  p_output1[6]=t4494*t4622 + t1543*t4883;
  p_output1[7]=t4622*t5706 + t1543*t5870;
  p_output1[8]=t4622*t6148 + t1543*t6289;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
