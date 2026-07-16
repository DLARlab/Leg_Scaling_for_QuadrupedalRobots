/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

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
  double t954;
  double t2670;
  double t3366;
  double t2688;
  double t3373;
  double t2637;
  double t2330;
  double t2333;
  double t2639;
  double t2798;
  double t3436;
  double t3440;
  double t3450;
  double t3466;
  double t3689;
  double t3707;
  double t3767;
  double t3786;
  double t3860;
  double t145;
  double t4100;
  double t4215;
  double t4256;
  double t4299;
  double t4344;
  double t4358;
  double t4398;
  double t4486;
  double t4491;
  double t4509;
  double t4799;
  double t4804;
  double t4834;
  double t2603;
  double t3863;
  double t3873;
  double t4121;
  double t4134;
  double t4140;
  double t4160;
  double t4515;
  double t4554;
  double t4607;
  double t4615;
  double t4624;
  double t4661;
  double t4877;
  double t4934;
  double t4961;
  double t4981;
  double t5009;
  t954 = Cos(var1[3]);
  t2670 = Cos(var1[5]);
  t3366 = Sin(var1[3]);
  t2688 = Sin(var1[4]);
  t3373 = Sin(var1[5]);
  t2637 = Cos(var1[10]);
  t2330 = Cos(var1[4]);
  t2333 = Sin(var1[10]);
  t2639 = Cos(var1[9]);
  t2798 = t954*t2670*t2688;
  t3436 = t3366*t3373;
  t3440 = t2798 + t3436;
  t3450 = t2639*t3440;
  t3466 = Sin(var1[9]);
  t3689 = -1.*t2670*t3366;
  t3707 = t954*t2688*t3373;
  t3767 = t3689 + t3707;
  t3786 = -1.*t3466*t3767;
  t3860 = t3450 + t3786;
  t145 = Sin(var1[11]);
  t4100 = Cos(var1[11]);
  t4215 = t2670*t3366*t2688;
  t4256 = -1.*t954*t3373;
  t4299 = t4215 + t4256;
  t4344 = t2639*t4299;
  t4358 = t954*t2670;
  t4398 = t3366*t2688*t3373;
  t4486 = t4358 + t4398;
  t4491 = -1.*t3466*t4486;
  t4509 = t4344 + t4491;
  t4799 = t2639*t2330*t2670;
  t4804 = -1.*t2330*t3466*t3373;
  t4834 = t4799 + t4804;
  t2603 = t954*t2330*t2333;
  t3863 = t2637*t3860;
  t3873 = t2603 + t3863;
  t4121 = t2637*t954*t2330;
  t4134 = -1.*t2333*t3860;
  t4140 = t4121 + t4134;
  t4160 = t2330*t2333*t3366;
  t4515 = t2637*t4509;
  t4554 = t4160 + t4515;
  t4607 = t2637*t2330*t3366;
  t4615 = -1.*t2333*t4509;
  t4624 = t4607 + t4615;
  t4661 = -1.*t2333*t2688;
  t4877 = t2637*t4834;
  t4934 = t4661 + t4877;
  t4961 = -1.*t2637*t2688;
  t4981 = -1.*t2333*t4834;
  t5009 = t4961 + t4981;
  p_output1[0]=-1.*t145*t3873 + t4100*t4140;
  p_output1[1]=-1.*t145*t4554 + t4100*t4624;
  p_output1[2]=-1.*t145*t4934 + t4100*t5009;
  p_output1[3]=t3440*t3466 + t2639*t3767;
  p_output1[4]=t3466*t4299 + t2639*t4486;
  p_output1[5]=t2330*t2639*t3373 + t2330*t2670*t3466;
  p_output1[6]=t3873*t4100 + t145*t4140;
  p_output1[7]=t4100*t4554 + t145*t4624;
  p_output1[8]=t4100*t4934 + t145*t5009;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
