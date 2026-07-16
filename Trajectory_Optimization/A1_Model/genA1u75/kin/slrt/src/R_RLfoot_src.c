/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:22 GMT-05:00
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
  double t1278;
  double t1680;
  double t2699;
  double t2300;
  double t2712;
  double t1592;
  double t1446;
  double t1465;
  double t1593;
  double t2367;
  double t2793;
  double t2803;
  double t3110;
  double t3123;
  double t3275;
  double t3464;
  double t3548;
  double t3719;
  double t3729;
  double t248;
  double t4165;
  double t4435;
  double t4437;
  double t4441;
  double t4492;
  double t4510;
  double t4516;
  double t4574;
  double t4621;
  double t4629;
  double t4911;
  double t4912;
  double t4948;
  double t1466;
  double t3870;
  double t3996;
  double t4167;
  double t4301;
  double t4324;
  double t4404;
  double t4640;
  double t4643;
  double t4689;
  double t4762;
  double t4837;
  double t4900;
  double t4954;
  double t5058;
  double t5062;
  double t5079;
  double t5099;
  t1278 = Cos(var1[3]);
  t1680 = Cos(var1[5]);
  t2699 = Sin(var1[3]);
  t2300 = Sin(var1[4]);
  t2712 = Sin(var1[5]);
  t1592 = Cos(var1[16]);
  t1446 = Cos(var1[4]);
  t1465 = Sin(var1[16]);
  t1593 = Cos(var1[15]);
  t2367 = t1278*t1680*t2300;
  t2793 = t2699*t2712;
  t2803 = t2367 + t2793;
  t3110 = t1593*t2803;
  t3123 = Sin(var1[15]);
  t3275 = -1.*t1680*t2699;
  t3464 = t1278*t2300*t2712;
  t3548 = t3275 + t3464;
  t3719 = -1.*t3123*t3548;
  t3729 = t3110 + t3719;
  t248 = Sin(var1[17]);
  t4165 = Cos(var1[17]);
  t4435 = t1680*t2699*t2300;
  t4437 = -1.*t1278*t2712;
  t4441 = t4435 + t4437;
  t4492 = t1593*t4441;
  t4510 = t1278*t1680;
  t4516 = t2699*t2300*t2712;
  t4574 = t4510 + t4516;
  t4621 = -1.*t3123*t4574;
  t4629 = t4492 + t4621;
  t4911 = t1593*t1446*t1680;
  t4912 = -1.*t1446*t3123*t2712;
  t4948 = t4911 + t4912;
  t1466 = t1278*t1446*t1465;
  t3870 = t1592*t3729;
  t3996 = t1466 + t3870;
  t4167 = t1592*t1278*t1446;
  t4301 = -1.*t1465*t3729;
  t4324 = t4167 + t4301;
  t4404 = t1446*t1465*t2699;
  t4640 = t1592*t4629;
  t4643 = t4404 + t4640;
  t4689 = t1592*t1446*t2699;
  t4762 = -1.*t1465*t4629;
  t4837 = t4689 + t4762;
  t4900 = -1.*t1465*t2300;
  t4954 = t1592*t4948;
  t5058 = t4900 + t4954;
  t5062 = -1.*t1592*t2300;
  t5079 = -1.*t1465*t4948;
  t5099 = t5062 + t5079;
  p_output1[0]=-1.*t248*t3996 + t4165*t4324;
  p_output1[1]=-1.*t248*t4643 + t4165*t4837;
  p_output1[2]=-1.*t248*t5058 + t4165*t5099;
  p_output1[3]=t2803*t3123 + t1593*t3548;
  p_output1[4]=t3123*t4441 + t1593*t4574;
  p_output1[5]=t1446*t1593*t2712 + t1446*t1680*t3123;
  p_output1[6]=t3996*t4165 + t248*t4324;
  p_output1[7]=t4165*t4643 + t248*t4837;
  p_output1[8]=t4165*t5058 + t248*t5099;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
