/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:58 GMT-05:00
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
  double t3883;
  double t3953;
  double t3958;
  double t3955;
  double t3959;
  double t3916;
  double t3884;
  double t3906;
  double t3947;
  double t3957;
  double t3960;
  double t3961;
  double t3962;
  double t3963;
  double t3965;
  double t3968;
  double t3969;
  double t3970;
  double t3973;
  double t3870;
  double t3977;
  double t3984;
  double t3985;
  double t3986;
  double t3987;
  double t3990;
  double t3991;
  double t3992;
  double t3993;
  double t3994;
  double t4006;
  double t4009;
  double t4010;
  double t3915;
  double t3974;
  double t3975;
  double t3978;
  double t3979;
  double t3980;
  double t3983;
  double t3995;
  double t3996;
  double t3999;
  double t4000;
  double t4001;
  double t4005;
  double t4012;
  double t4013;
  double t4016;
  double t4017;
  double t4018;
  t3883 = Cos(var1[3]);
  t3953 = Cos(var1[5]);
  t3958 = Sin(var1[3]);
  t3955 = Sin(var1[4]);
  t3959 = Sin(var1[5]);
  t3916 = Cos(var1[13]);
  t3884 = Cos(var1[4]);
  t3906 = Sin(var1[13]);
  t3947 = Cos(var1[12]);
  t3957 = t3883*t3953*t3955;
  t3960 = t3958*t3959;
  t3961 = t3957 + t3960;
  t3962 = t3947*t3961;
  t3963 = Sin(var1[12]);
  t3965 = -1.*t3953*t3958;
  t3968 = t3883*t3955*t3959;
  t3969 = t3965 + t3968;
  t3970 = -1.*t3963*t3969;
  t3973 = t3962 + t3970;
  t3870 = Sin(var1[14]);
  t3977 = Cos(var1[14]);
  t3984 = t3953*t3958*t3955;
  t3985 = -1.*t3883*t3959;
  t3986 = t3984 + t3985;
  t3987 = t3947*t3986;
  t3990 = t3883*t3953;
  t3991 = t3958*t3955*t3959;
  t3992 = t3990 + t3991;
  t3993 = -1.*t3963*t3992;
  t3994 = t3987 + t3993;
  t4006 = t3947*t3884*t3953;
  t4009 = -1.*t3884*t3963*t3959;
  t4010 = t4006 + t4009;
  t3915 = t3883*t3884*t3906;
  t3974 = t3916*t3973;
  t3975 = t3915 + t3974;
  t3978 = t3916*t3883*t3884;
  t3979 = -1.*t3906*t3973;
  t3980 = t3978 + t3979;
  t3983 = t3884*t3906*t3958;
  t3995 = t3916*t3994;
  t3996 = t3983 + t3995;
  t3999 = t3916*t3884*t3958;
  t4000 = -1.*t3906*t3994;
  t4001 = t3999 + t4000;
  t4005 = -1.*t3906*t3955;
  t4012 = t3916*t4010;
  t4013 = t4005 + t4012;
  t4016 = -1.*t3916*t3955;
  t4017 = -1.*t3906*t4010;
  t4018 = t4016 + t4017;
  p_output1[0]=-1.*t3870*t3975 + t3977*t3980;
  p_output1[1]=-1.*t3870*t3996 + t3977*t4001;
  p_output1[2]=-1.*t3870*t4013 + t3977*t4018;
  p_output1[3]=t3961*t3963 + t3947*t3969;
  p_output1[4]=t3963*t3986 + t3947*t3992;
  p_output1[5]=t3884*t3947*t3959 + t3884*t3953*t3963;
  p_output1[6]=t3975*t3977 + t3870*t3980;
  p_output1[7]=t3977*t3996 + t3870*t4001;
  p_output1[8]=t3977*t4013 + t3870*t4018;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
