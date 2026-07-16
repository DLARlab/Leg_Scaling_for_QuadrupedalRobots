/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint_src.h"

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
  double t53;
  double t1478;
  double t2797;
  double t1789;
  double t3003;
  double t244;
  double t261;
  double t968;
  double t4289;
  double t4499;
  double t4094;
  double t4113;
  double t4129;
  double t2487;
  double t3029;
  double t3052;
  double t4828;
  double t4860;
  double t5072;
  double t4625;
  double t4656;
  double t4671;
  double t4044;
  double t4476;
  double t4478;
  double t4675;
  double t5091;
  double t5223;
  double t5745;
  double t5873;
  double t5876;
  t53 = Cos(var1[3]);
  t1478 = Cos(var1[5]);
  t2797 = Sin(var1[3]);
  t1789 = Sin(var1[4]);
  t3003 = Sin(var1[5]);
  t244 = Cos(var1[4]);
  t261 = Cos(var1[7]);
  t968 = Cos(var1[6]);
  t4289 = Sin(var1[6]);
  t4499 = Sin(var1[7]);
  t4094 = -1.*t1478*t2797;
  t4113 = t53*t1789*t3003;
  t4129 = t4094 + t4113;
  t2487 = t53*t1478*t1789;
  t3029 = t2797*t3003;
  t3052 = t2487 + t3029;
  t4828 = t53*t1478;
  t4860 = t2797*t1789*t3003;
  t5072 = t4828 + t4860;
  t4625 = t1478*t2797*t1789;
  t4656 = -1.*t53*t3003;
  t4671 = t4625 + t4656;
  t4044 = t968*t3052;
  t4476 = -1.*t4129*t4289;
  t4478 = t4044 + t4476;
  t4675 = t968*t4671;
  t5091 = -1.*t5072*t4289;
  t5223 = t4675 + t5091;
  t5745 = t244*t1478*t968;
  t5873 = -1.*t244*t3003*t4289;
  t5876 = t5745 + t5873;
  p_output1[0]=-1.*t4478*t4499 + t244*t261*t53;
  p_output1[1]=t244*t261*t2797 - 1.*t4499*t5223;
  p_output1[2]=-1.*t1789*t261 - 1.*t4499*t5876;
  p_output1[3]=t3052*t4289 + t4129*t968;
  p_output1[4]=t4289*t4671 + t5072*t968;
  p_output1[5]=t1478*t244*t4289 + t244*t3003*t968;
  p_output1[6]=t261*t4478 + t244*t4499*t53;
  p_output1[7]=t244*t2797*t4499 + t261*t5223;
  p_output1[8]=-1.*t1789*t4499 + t261*t5876;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
