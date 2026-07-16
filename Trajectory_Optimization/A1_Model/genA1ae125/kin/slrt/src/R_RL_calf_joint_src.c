/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint_src.h"

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
  double t642;
  double t1026;
  double t2266;
  double t1032;
  double t2403;
  double t1010;
  double t774;
  double t996;
  double t1024;
  double t1033;
  double t4194;
  double t5866;
  double t6394;
  double t6650;
  double t6714;
  double t7582;
  double t7622;
  double t7625;
  double t7806;
  double t279;
  double t7891;
  double t8009;
  double t8019;
  double t8026;
  double t8039;
  double t8064;
  double t8067;
  double t8073;
  double t8079;
  double t8083;
  double t8113;
  double t8115;
  double t8116;
  double t1008;
  double t7865;
  double t7884;
  double t7902;
  double t7938;
  double t7940;
  double t7987;
  double t8089;
  double t8091;
  double t8099;
  double t8100;
  double t8105;
  double t8111;
  double t8117;
  double t8119;
  double t8123;
  double t8128;
  double t8130;
  t642 = Cos(var1[3]);
  t1026 = Cos(var1[5]);
  t2266 = Sin(var1[3]);
  t1032 = Sin(var1[4]);
  t2403 = Sin(var1[5]);
  t1010 = Cos(var1[16]);
  t774 = Cos(var1[4]);
  t996 = Sin(var1[16]);
  t1024 = Cos(var1[15]);
  t1033 = t642*t1026*t1032;
  t4194 = t2266*t2403;
  t5866 = t1033 + t4194;
  t6394 = t1024*t5866;
  t6650 = Sin(var1[15]);
  t6714 = -1.*t1026*t2266;
  t7582 = t642*t1032*t2403;
  t7622 = t6714 + t7582;
  t7625 = -1.*t6650*t7622;
  t7806 = t6394 + t7625;
  t279 = Sin(var1[17]);
  t7891 = Cos(var1[17]);
  t8009 = t1026*t2266*t1032;
  t8019 = -1.*t642*t2403;
  t8026 = t8009 + t8019;
  t8039 = t1024*t8026;
  t8064 = t642*t1026;
  t8067 = t2266*t1032*t2403;
  t8073 = t8064 + t8067;
  t8079 = -1.*t6650*t8073;
  t8083 = t8039 + t8079;
  t8113 = t1024*t774*t1026;
  t8115 = -1.*t774*t6650*t2403;
  t8116 = t8113 + t8115;
  t1008 = t642*t774*t996;
  t7865 = t1010*t7806;
  t7884 = t1008 + t7865;
  t7902 = t1010*t642*t774;
  t7938 = -1.*t996*t7806;
  t7940 = t7902 + t7938;
  t7987 = t774*t996*t2266;
  t8089 = t1010*t8083;
  t8091 = t7987 + t8089;
  t8099 = t1010*t774*t2266;
  t8100 = -1.*t996*t8083;
  t8105 = t8099 + t8100;
  t8111 = -1.*t996*t1032;
  t8117 = t1010*t8116;
  t8119 = t8111 + t8117;
  t8123 = -1.*t1010*t1032;
  t8128 = -1.*t996*t8116;
  t8130 = t8123 + t8128;
  p_output1[0]=-1.*t279*t7884 + t7891*t7940;
  p_output1[1]=-1.*t279*t8091 + t7891*t8105;
  p_output1[2]=-1.*t279*t8119 + t7891*t8130;
  p_output1[3]=t5866*t6650 + t1024*t7622;
  p_output1[4]=t6650*t8026 + t1024*t8073;
  p_output1[5]=t1024*t2403*t774 + t1026*t6650*t774;
  p_output1[6]=t7884*t7891 + t279*t7940;
  p_output1[7]=t7891*t8091 + t279*t8105;
  p_output1[8]=t7891*t8119 + t279*t8130;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
