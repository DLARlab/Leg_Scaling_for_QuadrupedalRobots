/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot_src.h"

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
  double t2292;
  double t3417;
  double t3685;
  double t3429;
  double t3823;
  double t3394;
  double t2303;
  double t3024;
  double t3416;
  double t3613;
  double t3950;
  double t4024;
  double t4084;
  double t4127;
  double t4227;
  double t4251;
  double t4285;
  double t4289;
  double t4303;
  double t642;
  double t4443;
  double t4575;
  double t4639;
  double t4657;
  double t4673;
  double t4726;
  double t4778;
  double t4781;
  double t4785;
  double t4813;
  double t5000;
  double t5006;
  double t5018;
  double t3365;
  double t4356;
  double t4426;
  double t4444;
  double t4508;
  double t4517;
  double t4572;
  double t4841;
  double t4843;
  double t4852;
  double t4855;
  double t4920;
  double t4950;
  double t5038;
  double t5056;
  double t5078;
  double t5096;
  double t5113;
  t2292 = Cos(var1[3]);
  t3417 = Cos(var1[5]);
  t3685 = Sin(var1[3]);
  t3429 = Sin(var1[4]);
  t3823 = Sin(var1[5]);
  t3394 = Cos(var1[13]);
  t2303 = Cos(var1[4]);
  t3024 = Sin(var1[13]);
  t3416 = Cos(var1[12]);
  t3613 = t2292*t3417*t3429;
  t3950 = t3685*t3823;
  t4024 = t3613 + t3950;
  t4084 = t3416*t4024;
  t4127 = Sin(var1[12]);
  t4227 = -1.*t3417*t3685;
  t4251 = t2292*t3429*t3823;
  t4285 = t4227 + t4251;
  t4289 = -1.*t4127*t4285;
  t4303 = t4084 + t4289;
  t642 = Sin(var1[14]);
  t4443 = Cos(var1[14]);
  t4575 = t3417*t3685*t3429;
  t4639 = -1.*t2292*t3823;
  t4657 = t4575 + t4639;
  t4673 = t3416*t4657;
  t4726 = t2292*t3417;
  t4778 = t3685*t3429*t3823;
  t4781 = t4726 + t4778;
  t4785 = -1.*t4127*t4781;
  t4813 = t4673 + t4785;
  t5000 = t3416*t2303*t3417;
  t5006 = -1.*t2303*t4127*t3823;
  t5018 = t5000 + t5006;
  t3365 = t2292*t2303*t3024;
  t4356 = t3394*t4303;
  t4426 = t3365 + t4356;
  t4444 = t3394*t2292*t2303;
  t4508 = -1.*t3024*t4303;
  t4517 = t4444 + t4508;
  t4572 = t2303*t3024*t3685;
  t4841 = t3394*t4813;
  t4843 = t4572 + t4841;
  t4852 = t3394*t2303*t3685;
  t4855 = -1.*t3024*t4813;
  t4920 = t4852 + t4855;
  t4950 = -1.*t3024*t3429;
  t5038 = t3394*t5018;
  t5056 = t4950 + t5038;
  t5078 = -1.*t3394*t3429;
  t5096 = -1.*t3024*t5018;
  t5113 = t5078 + t5096;
  p_output1[0]=t4443*t4517 - 1.*t4426*t642;
  p_output1[1]=t4443*t4920 - 1.*t4843*t642;
  p_output1[2]=t4443*t5113 - 1.*t5056*t642;
  p_output1[3]=t4024*t4127 + t3416*t4285;
  p_output1[4]=t4127*t4657 + t3416*t4781;
  p_output1[5]=t2303*t3416*t3823 + t2303*t3417*t4127;
  p_output1[6]=t4426*t4443 + t4517*t642;
  p_output1[7]=t4443*t4843 + t4920*t642;
  p_output1[8]=t4443*t5056 + t5113*t642;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
