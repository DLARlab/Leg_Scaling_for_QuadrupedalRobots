/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t1748;
  double t5670;
  double t6671;
  double t5684;
  double t6682;
  double t1225;
  double t2184;
  double t3124;
  double t5518;
  double t7839;
  double t6642;
  double t7193;
  double t7281;
  double t7953;
  double t8038;
  double t8102;
  double t8223;
  double t8239;
  double t8262;
  double t8268;
  double t8282;
  double t8286;
  double t7418;
  double t8153;
  double t8154;
  double t8263;
  double t8290;
  double t8297;
  double t8312;
  double t8316;
  double t8321;
  t1748 = Cos(var1[3]);
  t5670 = Cos(var1[5]);
  t6671 = Sin(var1[3]);
  t5684 = Sin(var1[4]);
  t6682 = Sin(var1[5]);
  t1225 = Cos(var1[13]);
  t2184 = Cos(var1[4]);
  t3124 = Sin(var1[13]);
  t5518 = Cos(var1[12]);
  t7839 = Sin(var1[12]);
  t6642 = t1748*t5670*t5684;
  t7193 = t6671*t6682;
  t7281 = t6642 + t7193;
  t7953 = -1.*t5670*t6671;
  t8038 = t1748*t5684*t6682;
  t8102 = t7953 + t8038;
  t8223 = t5670*t6671*t5684;
  t8239 = -1.*t1748*t6682;
  t8262 = t8223 + t8239;
  t8268 = t1748*t5670;
  t8282 = t6671*t5684*t6682;
  t8286 = t8268 + t8282;
  t7418 = t5518*t7281;
  t8153 = -1.*t7839*t8102;
  t8154 = t7418 + t8153;
  t8263 = t5518*t8262;
  t8290 = -1.*t7839*t8286;
  t8297 = t8263 + t8290;
  t8312 = t5518*t2184*t5670;
  t8316 = -1.*t2184*t7839*t6682;
  t8321 = t8312 + t8316;
  p_output1[0]=t1225*t1748*t2184 - 1.*t3124*t8154;
  p_output1[1]=t1225*t2184*t6671 - 1.*t3124*t8297;
  p_output1[2]=-1.*t1225*t5684 - 1.*t3124*t8321;
  p_output1[3]=t7281*t7839 + t5518*t8102;
  p_output1[4]=t7839*t8262 + t5518*t8286;
  p_output1[5]=t2184*t5518*t6682 + t2184*t5670*t7839;
  p_output1[6]=t1748*t2184*t3124 + t1225*t8154;
  p_output1[7]=t2184*t3124*t6671 + t1225*t8297;
  p_output1[8]=-1.*t3124*t5684 + t1225*t8321;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
