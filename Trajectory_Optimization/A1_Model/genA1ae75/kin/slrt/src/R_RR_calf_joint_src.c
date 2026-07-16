/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:53 GMT-05:00
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
  double t1115;
  double t1813;
  double t1894;
  double t1820;
  double t1903;
  double t1469;
  double t1210;
  double t1264;
  double t1799;
  double t1883;
  double t1912;
  double t1940;
  double t1964;
  double t1991;
  double t4404;
  double t4419;
  double t4420;
  double t4513;
  double t4697;
  double t1039;
  double t5053;
  double t5157;
  double t5159;
  double t5160;
  double t5164;
  double t5168;
  double t5171;
  double t5175;
  double t5179;
  double t5183;
  double t5552;
  double t5564;
  double t5565;
  double t1312;
  double t4727;
  double t4729;
  double t5057;
  double t5058;
  double t5060;
  double t5077;
  double t5235;
  double t5401;
  double t5416;
  double t5427;
  double t5432;
  double t5467;
  double t5569;
  double t5571;
  double t5576;
  double t5580;
  double t5599;
  t1115 = Cos(var1[3]);
  t1813 = Cos(var1[5]);
  t1894 = Sin(var1[3]);
  t1820 = Sin(var1[4]);
  t1903 = Sin(var1[5]);
  t1469 = Cos(var1[13]);
  t1210 = Cos(var1[4]);
  t1264 = Sin(var1[13]);
  t1799 = Cos(var1[12]);
  t1883 = t1115*t1813*t1820;
  t1912 = t1894*t1903;
  t1940 = t1883 + t1912;
  t1964 = t1799*t1940;
  t1991 = Sin(var1[12]);
  t4404 = -1.*t1813*t1894;
  t4419 = t1115*t1820*t1903;
  t4420 = t4404 + t4419;
  t4513 = -1.*t1991*t4420;
  t4697 = t1964 + t4513;
  t1039 = Sin(var1[14]);
  t5053 = Cos(var1[14]);
  t5157 = t1813*t1894*t1820;
  t5159 = -1.*t1115*t1903;
  t5160 = t5157 + t5159;
  t5164 = t1799*t5160;
  t5168 = t1115*t1813;
  t5171 = t1894*t1820*t1903;
  t5175 = t5168 + t5171;
  t5179 = -1.*t1991*t5175;
  t5183 = t5164 + t5179;
  t5552 = t1799*t1210*t1813;
  t5564 = -1.*t1210*t1991*t1903;
  t5565 = t5552 + t5564;
  t1312 = t1115*t1210*t1264;
  t4727 = t1469*t4697;
  t4729 = t1312 + t4727;
  t5057 = t1469*t1115*t1210;
  t5058 = -1.*t1264*t4697;
  t5060 = t5057 + t5058;
  t5077 = t1210*t1264*t1894;
  t5235 = t1469*t5183;
  t5401 = t5077 + t5235;
  t5416 = t1469*t1210*t1894;
  t5427 = -1.*t1264*t5183;
  t5432 = t5416 + t5427;
  t5467 = -1.*t1264*t1820;
  t5569 = t1469*t5565;
  t5571 = t5467 + t5569;
  t5576 = -1.*t1469*t1820;
  t5580 = -1.*t1264*t5565;
  t5599 = t5576 + t5580;
  p_output1[0]=-1.*t1039*t4729 + t5053*t5060;
  p_output1[1]=-1.*t1039*t5401 + t5053*t5432;
  p_output1[2]=-1.*t1039*t5571 + t5053*t5599;
  p_output1[3]=t1940*t1991 + t1799*t4420;
  p_output1[4]=t1991*t5160 + t1799*t5175;
  p_output1[5]=t1210*t1799*t1903 + t1210*t1813*t1991;
  p_output1[6]=t4729*t5053 + t1039*t5060;
  p_output1[7]=t5053*t5401 + t1039*t5432;
  p_output1[8]=t5053*t5571 + t1039*t5599;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
