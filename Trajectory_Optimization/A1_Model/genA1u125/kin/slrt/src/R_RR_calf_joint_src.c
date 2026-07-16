/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:38 GMT-05:00
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
  double t3719;
  double t5245;
  double t5290;
  double t5264;
  double t5335;
  double t4734;
  double t3872;
  double t4652;
  double t5066;
  double t5288;
  double t5343;
  double t5388;
  double t5416;
  double t5471;
  double t5475;
  double t5517;
  double t5520;
  double t5539;
  double t5548;
  double t3369;
  double t5595;
  double t5829;
  double t5835;
  double t5852;
  double t5903;
  double t5924;
  double t5930;
  double t6007;
  double t6032;
  double t6037;
  double t6209;
  double t6217;
  double t6234;
  double t4708;
  double t5569;
  double t5587;
  double t5643;
  double t5646;
  double t5652;
  double t5730;
  double t6046;
  double t6048;
  double t6097;
  double t6106;
  double t6164;
  double t6195;
  double t6236;
  double t6250;
  double t6312;
  double t6321;
  double t6344;
  t3719 = Cos(var1[3]);
  t5245 = Cos(var1[5]);
  t5290 = Sin(var1[3]);
  t5264 = Sin(var1[4]);
  t5335 = Sin(var1[5]);
  t4734 = Cos(var1[13]);
  t3872 = Cos(var1[4]);
  t4652 = Sin(var1[13]);
  t5066 = Cos(var1[12]);
  t5288 = t3719*t5245*t5264;
  t5343 = t5290*t5335;
  t5388 = t5288 + t5343;
  t5416 = t5066*t5388;
  t5471 = Sin(var1[12]);
  t5475 = -1.*t5245*t5290;
  t5517 = t3719*t5264*t5335;
  t5520 = t5475 + t5517;
  t5539 = -1.*t5471*t5520;
  t5548 = t5416 + t5539;
  t3369 = Sin(var1[14]);
  t5595 = Cos(var1[14]);
  t5829 = t5245*t5290*t5264;
  t5835 = -1.*t3719*t5335;
  t5852 = t5829 + t5835;
  t5903 = t5066*t5852;
  t5924 = t3719*t5245;
  t5930 = t5290*t5264*t5335;
  t6007 = t5924 + t5930;
  t6032 = -1.*t5471*t6007;
  t6037 = t5903 + t6032;
  t6209 = t5066*t3872*t5245;
  t6217 = -1.*t3872*t5471*t5335;
  t6234 = t6209 + t6217;
  t4708 = t3719*t3872*t4652;
  t5569 = t4734*t5548;
  t5587 = t4708 + t5569;
  t5643 = t4734*t3719*t3872;
  t5646 = -1.*t4652*t5548;
  t5652 = t5643 + t5646;
  t5730 = t3872*t4652*t5290;
  t6046 = t4734*t6037;
  t6048 = t5730 + t6046;
  t6097 = t4734*t3872*t5290;
  t6106 = -1.*t4652*t6037;
  t6164 = t6097 + t6106;
  t6195 = -1.*t4652*t5264;
  t6236 = t4734*t6234;
  t6250 = t6195 + t6236;
  t6312 = -1.*t4734*t5264;
  t6321 = -1.*t4652*t6234;
  t6344 = t6312 + t6321;
  p_output1[0]=-1.*t3369*t5587 + t5595*t5652;
  p_output1[1]=-1.*t3369*t6048 + t5595*t6164;
  p_output1[2]=-1.*t3369*t6250 + t5595*t6344;
  p_output1[3]=t5388*t5471 + t5066*t5520;
  p_output1[4]=t5471*t5852 + t5066*t6007;
  p_output1[5]=t3872*t5066*t5335 + t3872*t5245*t5471;
  p_output1[6]=t5587*t5595 + t3369*t5652;
  p_output1[7]=t5595*t6048 + t3369*t6164;
  p_output1[8]=t5595*t6250 + t3369*t6344;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
