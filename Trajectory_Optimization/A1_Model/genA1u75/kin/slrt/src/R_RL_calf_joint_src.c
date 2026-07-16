/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:13 GMT-05:00
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
  double t1175;
  double t3553;
  double t4002;
  double t3760;
  double t4143;
  double t3409;
  double t1526;
  double t1801;
  double t3473;
  double t3761;
  double t4235;
  double t4253;
  double t4372;
  double t4436;
  double t4461;
  double t4463;
  double t4489;
  double t4490;
  double t4535;
  double t907;
  double t4697;
  double t4898;
  double t4910;
  double t4922;
  double t4975;
  double t4987;
  double t4998;
  double t5043;
  double t5091;
  double t5122;
  double t5400;
  double t5426;
  double t5429;
  double t3133;
  double t4619;
  double t4653;
  double t4769;
  double t4801;
  double t4866;
  double t4891;
  double t5145;
  double t5149;
  double t5160;
  double t5200;
  double t5280;
  double t5386;
  double t5440;
  double t5446;
  double t5545;
  double t5598;
  double t5606;
  t1175 = Cos(var1[3]);
  t3553 = Cos(var1[5]);
  t4002 = Sin(var1[3]);
  t3760 = Sin(var1[4]);
  t4143 = Sin(var1[5]);
  t3409 = Cos(var1[16]);
  t1526 = Cos(var1[4]);
  t1801 = Sin(var1[16]);
  t3473 = Cos(var1[15]);
  t3761 = t1175*t3553*t3760;
  t4235 = t4002*t4143;
  t4253 = t3761 + t4235;
  t4372 = t3473*t4253;
  t4436 = Sin(var1[15]);
  t4461 = -1.*t3553*t4002;
  t4463 = t1175*t3760*t4143;
  t4489 = t4461 + t4463;
  t4490 = -1.*t4436*t4489;
  t4535 = t4372 + t4490;
  t907 = Sin(var1[17]);
  t4697 = Cos(var1[17]);
  t4898 = t3553*t4002*t3760;
  t4910 = -1.*t1175*t4143;
  t4922 = t4898 + t4910;
  t4975 = t3473*t4922;
  t4987 = t1175*t3553;
  t4998 = t4002*t3760*t4143;
  t5043 = t4987 + t4998;
  t5091 = -1.*t4436*t5043;
  t5122 = t4975 + t5091;
  t5400 = t3473*t1526*t3553;
  t5426 = -1.*t1526*t4436*t4143;
  t5429 = t5400 + t5426;
  t3133 = t1175*t1526*t1801;
  t4619 = t3409*t4535;
  t4653 = t3133 + t4619;
  t4769 = t3409*t1175*t1526;
  t4801 = -1.*t1801*t4535;
  t4866 = t4769 + t4801;
  t4891 = t1526*t1801*t4002;
  t5145 = t3409*t5122;
  t5149 = t4891 + t5145;
  t5160 = t3409*t1526*t4002;
  t5200 = -1.*t1801*t5122;
  t5280 = t5160 + t5200;
  t5386 = -1.*t1801*t3760;
  t5440 = t3409*t5429;
  t5446 = t5386 + t5440;
  t5545 = -1.*t3409*t3760;
  t5598 = -1.*t1801*t5429;
  t5606 = t5545 + t5598;
  p_output1[0]=t4697*t4866 - 1.*t4653*t907;
  p_output1[1]=t4697*t5280 - 1.*t5149*t907;
  p_output1[2]=t4697*t5606 - 1.*t5446*t907;
  p_output1[3]=t4253*t4436 + t3473*t4489;
  p_output1[4]=t4436*t4922 + t3473*t5043;
  p_output1[5]=t1526*t3473*t4143 + t1526*t3553*t4436;
  p_output1[6]=t4653*t4697 + t4866*t907;
  p_output1[7]=t4697*t5149 + t5280*t907;
  p_output1[8]=t4697*t5446 + t5606*t907;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
