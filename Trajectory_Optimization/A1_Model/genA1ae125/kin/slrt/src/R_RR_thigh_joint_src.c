/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t3118;
  double t4268;
  double t4529;
  double t4383;
  double t4641;
  double t2390;
  double t3119;
  double t3960;
  double t4079;
  double t5055;
  double t4462;
  double t4746;
  double t4777;
  double t5280;
  double t5406;
  double t5531;
  double t6196;
  double t6201;
  double t6277;
  double t6564;
  double t6619;
  double t6624;
  double t4831;
  double t5536;
  double t5640;
  double t6412;
  double t6636;
  double t6639;
  double t6647;
  double t6648;
  double t6651;
  t3118 = Cos(var1[3]);
  t4268 = Cos(var1[5]);
  t4529 = Sin(var1[3]);
  t4383 = Sin(var1[4]);
  t4641 = Sin(var1[5]);
  t2390 = Cos(var1[13]);
  t3119 = Cos(var1[4]);
  t3960 = Sin(var1[13]);
  t4079 = Cos(var1[12]);
  t5055 = Sin(var1[12]);
  t4462 = t3118*t4268*t4383;
  t4746 = t4529*t4641;
  t4777 = t4462 + t4746;
  t5280 = -1.*t4268*t4529;
  t5406 = t3118*t4383*t4641;
  t5531 = t5280 + t5406;
  t6196 = t4268*t4529*t4383;
  t6201 = -1.*t3118*t4641;
  t6277 = t6196 + t6201;
  t6564 = t3118*t4268;
  t6619 = t4529*t4383*t4641;
  t6624 = t6564 + t6619;
  t4831 = t4079*t4777;
  t5536 = -1.*t5055*t5531;
  t5640 = t4831 + t5536;
  t6412 = t4079*t6277;
  t6636 = -1.*t5055*t6624;
  t6639 = t6412 + t6636;
  t6647 = t4079*t3119*t4268;
  t6648 = -1.*t3119*t5055*t4641;
  t6651 = t6647 + t6648;
  p_output1[0]=t2390*t3118*t3119 - 1.*t3960*t5640;
  p_output1[1]=t2390*t3119*t4529 - 1.*t3960*t6639;
  p_output1[2]=-1.*t2390*t4383 - 1.*t3960*t6651;
  p_output1[3]=t4777*t5055 + t4079*t5531;
  p_output1[4]=t5055*t6277 + t4079*t6624;
  p_output1[5]=t3119*t4079*t4641 + t3119*t4268*t5055;
  p_output1[6]=t3118*t3119*t3960 + t2390*t5640;
  p_output1[7]=t3119*t3960*t4529 + t2390*t6639;
  p_output1[8]=-1.*t3960*t4383 + t2390*t6651;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
