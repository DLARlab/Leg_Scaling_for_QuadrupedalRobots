/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:15 GMT-05:00
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
  double t1418;
  double t3536;
  double t3874;
  double t3771;
  double t4268;
  double t1451;
  double t3516;
  double t3782;
  double t4364;
  double t4374;
  double t4384;
  double t4429;
  double t4488;
  double t4501;
  double t4665;
  double t4676;
  double t4681;
  double t1437;
  double t4683;
  double t226;
  double t4874;
  double t4875;
  double t4956;
  double t4963;
  double t4964;
  double t4965;
  double t5029;
  double t5031;
  double t5035;
  double t4765;
  double t5182;
  double t5198;
  double t5215;
  double t4735;
  double t4741;
  double t4742;
  double t3498;
  double t4684;
  double t4686;
  double t5138;
  double t5139;
  double t5141;
  double t4872;
  double t5037;
  double t5045;
  double t5236;
  double t5249;
  double t5251;
  double t5180;
  double t5220;
  double t5227;
  t1418 = Cos(var1[3]);
  t3536 = Cos(var1[5]);
  t3874 = Sin(var1[3]);
  t3771 = Sin(var1[4]);
  t4268 = Sin(var1[5]);
  t1451 = Cos(var1[7]);
  t3516 = Cos(var1[6]);
  t3782 = t1418*t3536*t3771;
  t4364 = t3874*t4268;
  t4374 = t3782 + t4364;
  t4384 = t3516*t4374;
  t4429 = -1.*t3536*t3874;
  t4488 = t1418*t3771*t4268;
  t4501 = t4429 + t4488;
  t4665 = Sin(var1[6]);
  t4676 = -1.*t4501*t4665;
  t4681 = t4384 + t4676;
  t1437 = Cos(var1[4]);
  t4683 = Sin(var1[7]);
  t226 = Cos(var1[8]);
  t4874 = t3536*t3874*t3771;
  t4875 = -1.*t1418*t4268;
  t4956 = t4874 + t4875;
  t4963 = t3516*t4956;
  t4964 = t1418*t3536;
  t4965 = t3874*t3771*t4268;
  t5029 = t4964 + t4965;
  t5031 = -1.*t5029*t4665;
  t5035 = t4963 + t5031;
  t4765 = Sin(var1[8]);
  t5182 = t1437*t3536*t3516;
  t5198 = -1.*t1437*t4268*t4665;
  t5215 = t5182 + t5198;
  t4735 = t1451*t4681;
  t4741 = t1418*t1437*t4683;
  t4742 = t4735 + t4741;
  t3498 = t1418*t1437*t1451;
  t4684 = -1.*t4681*t4683;
  t4686 = t3498 + t4684;
  t5138 = t1451*t5035;
  t5139 = t1437*t3874*t4683;
  t5141 = t5138 + t5139;
  t4872 = t1437*t1451*t3874;
  t5037 = -1.*t5035*t4683;
  t5045 = t4872 + t5037;
  t5236 = t1451*t5215;
  t5249 = -1.*t3771*t4683;
  t5251 = t5236 + t5249;
  t5180 = -1.*t1451*t3771;
  t5220 = -1.*t5215*t4683;
  t5227 = t5180 + t5220;
  p_output1[0]=t226*t4686 - 1.*t4742*t4765;
  p_output1[1]=t226*t5045 - 1.*t4765*t5141;
  p_output1[2]=t226*t5227 - 1.*t4765*t5251;
  p_output1[3]=t3516*t4501 + t4374*t4665;
  p_output1[4]=t4665*t4956 + t3516*t5029;
  p_output1[5]=t1437*t3516*t4268 + t1437*t3536*t4665;
  p_output1[6]=t226*t4742 + t4686*t4765;
  p_output1[7]=t4765*t5045 + t226*t5141;
  p_output1[8]=t4765*t5227 + t226*t5251;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
