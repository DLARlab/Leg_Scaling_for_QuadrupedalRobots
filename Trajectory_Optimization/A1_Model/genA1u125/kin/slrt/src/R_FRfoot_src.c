/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot_src.h"

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
  double t1413;
  double t3377;
  double t3975;
  double t3801;
  double t4132;
  double t2856;
  double t3293;
  double t3967;
  double t4369;
  double t4424;
  double t4537;
  double t4544;
  double t4548;
  double t4555;
  double t4584;
  double t4603;
  double t4605;
  double t1844;
  double t4645;
  double t274;
  double t4807;
  double t4823;
  double t4862;
  double t4864;
  double t4933;
  double t4962;
  double t4983;
  double t4985;
  double t5054;
  double t4757;
  double t5205;
  double t5233;
  double t5261;
  double t4720;
  double t4731;
  double t4744;
  double t3286;
  double t4646;
  double t4660;
  double t5128;
  double t5143;
  double t5147;
  double t4798;
  double t5102;
  double t5103;
  double t5310;
  double t5342;
  double t5346;
  double t5201;
  double t5265;
  double t5277;
  t1413 = Cos(var1[3]);
  t3377 = Cos(var1[5]);
  t3975 = Sin(var1[3]);
  t3801 = Sin(var1[4]);
  t4132 = Sin(var1[5]);
  t2856 = Cos(var1[7]);
  t3293 = Cos(var1[6]);
  t3967 = t1413*t3377*t3801;
  t4369 = t3975*t4132;
  t4424 = t3967 + t4369;
  t4537 = t3293*t4424;
  t4544 = -1.*t3377*t3975;
  t4548 = t1413*t3801*t4132;
  t4555 = t4544 + t4548;
  t4584 = Sin(var1[6]);
  t4603 = -1.*t4555*t4584;
  t4605 = t4537 + t4603;
  t1844 = Cos(var1[4]);
  t4645 = Sin(var1[7]);
  t274 = Cos(var1[8]);
  t4807 = t3377*t3975*t3801;
  t4823 = -1.*t1413*t4132;
  t4862 = t4807 + t4823;
  t4864 = t3293*t4862;
  t4933 = t1413*t3377;
  t4962 = t3975*t3801*t4132;
  t4983 = t4933 + t4962;
  t4985 = -1.*t4983*t4584;
  t5054 = t4864 + t4985;
  t4757 = Sin(var1[8]);
  t5205 = t1844*t3377*t3293;
  t5233 = -1.*t1844*t4132*t4584;
  t5261 = t5205 + t5233;
  t4720 = t2856*t4605;
  t4731 = t1413*t1844*t4645;
  t4744 = t4720 + t4731;
  t3286 = t1413*t1844*t2856;
  t4646 = -1.*t4605*t4645;
  t4660 = t3286 + t4646;
  t5128 = t2856*t5054;
  t5143 = t1844*t3975*t4645;
  t5147 = t5128 + t5143;
  t4798 = t1844*t2856*t3975;
  t5102 = -1.*t5054*t4645;
  t5103 = t4798 + t5102;
  t5310 = t2856*t5261;
  t5342 = -1.*t3801*t4645;
  t5346 = t5310 + t5342;
  t5201 = -1.*t2856*t3801;
  t5265 = -1.*t5261*t4645;
  t5277 = t5201 + t5265;
  p_output1[0]=t274*t4660 - 1.*t4744*t4757;
  p_output1[1]=t274*t5103 - 1.*t4757*t5147;
  p_output1[2]=t274*t5277 - 1.*t4757*t5346;
  p_output1[3]=t3293*t4555 + t4424*t4584;
  p_output1[4]=t4584*t4862 + t3293*t4983;
  p_output1[5]=t1844*t3293*t4132 + t1844*t3377*t4584;
  p_output1[6]=t274*t4744 + t4660*t4757;
  p_output1[7]=t4757*t5103 + t274*t5147;
  p_output1[8]=t4757*t5277 + t274*t5346;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
