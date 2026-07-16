/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot_src.h"

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
  double t2497;
  double t3985;
  double t4362;
  double t4210;
  double t4585;
  double t3461;
  double t2835;
  double t2998;
  double t3465;
  double t4351;
  double t4587;
  double t4830;
  double t4881;
  double t4946;
  double t4968;
  double t4973;
  double t5009;
  double t5040;
  double t5046;
  double t2387;
  double t5312;
  double t5528;
  double t5559;
  double t5584;
  double t5610;
  double t5612;
  double t5717;
  double t5718;
  double t5742;
  double t5751;
  double t5853;
  double t5869;
  double t5878;
  double t3140;
  double t5240;
  double t5248;
  double t5366;
  double t5393;
  double t5411;
  double t5526;
  double t5787;
  double t5789;
  double t5818;
  double t5819;
  double t5828;
  double t5840;
  double t5887;
  double t5899;
  double t5909;
  double t5913;
  double t5914;
  t2497 = Cos(var1[3]);
  t3985 = Cos(var1[5]);
  t4362 = Sin(var1[3]);
  t4210 = Sin(var1[4]);
  t4585 = Sin(var1[5]);
  t3461 = Cos(var1[16]);
  t2835 = Cos(var1[4]);
  t2998 = Sin(var1[16]);
  t3465 = Cos(var1[15]);
  t4351 = t2497*t3985*t4210;
  t4587 = t4362*t4585;
  t4830 = t4351 + t4587;
  t4881 = t3465*t4830;
  t4946 = Sin(var1[15]);
  t4968 = -1.*t3985*t4362;
  t4973 = t2497*t4210*t4585;
  t5009 = t4968 + t4973;
  t5040 = -1.*t4946*t5009;
  t5046 = t4881 + t5040;
  t2387 = Sin(var1[17]);
  t5312 = Cos(var1[17]);
  t5528 = t3985*t4362*t4210;
  t5559 = -1.*t2497*t4585;
  t5584 = t5528 + t5559;
  t5610 = t3465*t5584;
  t5612 = t2497*t3985;
  t5717 = t4362*t4210*t4585;
  t5718 = t5612 + t5717;
  t5742 = -1.*t4946*t5718;
  t5751 = t5610 + t5742;
  t5853 = t3465*t2835*t3985;
  t5869 = -1.*t2835*t4946*t4585;
  t5878 = t5853 + t5869;
  t3140 = t2497*t2835*t2998;
  t5240 = t3461*t5046;
  t5248 = t3140 + t5240;
  t5366 = t3461*t2497*t2835;
  t5393 = -1.*t2998*t5046;
  t5411 = t5366 + t5393;
  t5526 = t2835*t2998*t4362;
  t5787 = t3461*t5751;
  t5789 = t5526 + t5787;
  t5818 = t3461*t2835*t4362;
  t5819 = -1.*t2998*t5751;
  t5828 = t5818 + t5819;
  t5840 = -1.*t2998*t4210;
  t5887 = t3461*t5878;
  t5899 = t5840 + t5887;
  t5909 = -1.*t3461*t4210;
  t5913 = -1.*t2998*t5878;
  t5914 = t5909 + t5913;
  p_output1[0]=-1.*t2387*t5248 + t5312*t5411;
  p_output1[1]=-1.*t2387*t5789 + t5312*t5828;
  p_output1[2]=-1.*t2387*t5899 + t5312*t5914;
  p_output1[3]=t4830*t4946 + t3465*t5009;
  p_output1[4]=t4946*t5584 + t3465*t5718;
  p_output1[5]=t2835*t3465*t4585 + t2835*t3985*t4946;
  p_output1[6]=t5248*t5312 + t2387*t5411;
  p_output1[7]=t5312*t5789 + t2387*t5828;
  p_output1[8]=t5312*t5899 + t2387*t5914;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
