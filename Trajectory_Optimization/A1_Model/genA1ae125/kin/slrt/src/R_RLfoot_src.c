/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:48 GMT-05:00
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
  double t118;
  double t3729;
  double t4965;
  double t3996;
  double t5074;
  double t1571;
  double t1088;
  double t1112;
  double t3380;
  double t4092;
  double t5075;
  double t5294;
  double t5343;
  double t5399;
  double t5476;
  double t5500;
  double t5540;
  double t5546;
  double t5547;
  double t106;
  double t5581;
  double t5697;
  double t5770;
  double t5784;
  double t5793;
  double t5799;
  double t5857;
  double t5932;
  double t5947;
  double t6032;
  double t6303;
  double t6326;
  double t6372;
  double t1566;
  double t5550;
  double t5560;
  double t5587;
  double t5596;
  double t5611;
  double t5687;
  double t6108;
  double t6110;
  double t6172;
  double t6175;
  double t6230;
  double t6301;
  double t6375;
  double t6386;
  double t6393;
  double t6398;
  double t6408;
  t118 = Cos(var1[3]);
  t3729 = Cos(var1[5]);
  t4965 = Sin(var1[3]);
  t3996 = Sin(var1[4]);
  t5074 = Sin(var1[5]);
  t1571 = Cos(var1[16]);
  t1088 = Cos(var1[4]);
  t1112 = Sin(var1[16]);
  t3380 = Cos(var1[15]);
  t4092 = t118*t3729*t3996;
  t5075 = t4965*t5074;
  t5294 = t4092 + t5075;
  t5343 = t3380*t5294;
  t5399 = Sin(var1[15]);
  t5476 = -1.*t3729*t4965;
  t5500 = t118*t3996*t5074;
  t5540 = t5476 + t5500;
  t5546 = -1.*t5399*t5540;
  t5547 = t5343 + t5546;
  t106 = Sin(var1[17]);
  t5581 = Cos(var1[17]);
  t5697 = t3729*t4965*t3996;
  t5770 = -1.*t118*t5074;
  t5784 = t5697 + t5770;
  t5793 = t3380*t5784;
  t5799 = t118*t3729;
  t5857 = t4965*t3996*t5074;
  t5932 = t5799 + t5857;
  t5947 = -1.*t5399*t5932;
  t6032 = t5793 + t5947;
  t6303 = t3380*t1088*t3729;
  t6326 = -1.*t1088*t5399*t5074;
  t6372 = t6303 + t6326;
  t1566 = t118*t1088*t1112;
  t5550 = t1571*t5547;
  t5560 = t1566 + t5550;
  t5587 = t1571*t118*t1088;
  t5596 = -1.*t1112*t5547;
  t5611 = t5587 + t5596;
  t5687 = t1088*t1112*t4965;
  t6108 = t1571*t6032;
  t6110 = t5687 + t6108;
  t6172 = t1571*t1088*t4965;
  t6175 = -1.*t1112*t6032;
  t6230 = t6172 + t6175;
  t6301 = -1.*t1112*t3996;
  t6375 = t1571*t6372;
  t6386 = t6301 + t6375;
  t6393 = -1.*t1571*t3996;
  t6398 = -1.*t1112*t6372;
  t6408 = t6393 + t6398;
  p_output1[0]=-1.*t106*t5560 + t5581*t5611;
  p_output1[1]=-1.*t106*t6110 + t5581*t6230;
  p_output1[2]=-1.*t106*t6386 + t5581*t6408;
  p_output1[3]=t5294*t5399 + t3380*t5540;
  p_output1[4]=t5399*t5784 + t3380*t5932;
  p_output1[5]=t1088*t3380*t5074 + t1088*t3729*t5399;
  p_output1[6]=t5560*t5581 + t106*t5611;
  p_output1[7]=t5581*t6110 + t106*t6230;
  p_output1[8]=t5581*t6386 + t106*t6408;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
