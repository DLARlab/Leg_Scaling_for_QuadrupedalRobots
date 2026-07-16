/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot_src.h"

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
  double t789;
  double t2498;
  double t2671;
  double t2626;
  double t2868;
  double t2153;
  double t1937;
  double t2098;
  double t2158;
  double t2662;
  double t2936;
  double t3039;
  double t3044;
  double t3055;
  double t3074;
  double t3126;
  double t3128;
  double t3147;
  double t3171;
  double t261;
  double t3277;
  double t3373;
  double t3394;
  double t3420;
  double t3431;
  double t3445;
  double t3455;
  double t3456;
  double t3466;
  double t3475;
  double t3621;
  double t3633;
  double t3635;
  double t2125;
  double t3198;
  double t3267;
  double t3313;
  double t3317;
  double t3328;
  double t3372;
  double t3512;
  double t3522;
  double t3558;
  double t3573;
  double t3587;
  double t3619;
  double t3638;
  double t3642;
  double t3647;
  double t3653;
  double t3667;
  t789 = Cos(var1[3]);
  t2498 = Cos(var1[5]);
  t2671 = Sin(var1[3]);
  t2626 = Sin(var1[4]);
  t2868 = Sin(var1[5]);
  t2153 = Cos(var1[10]);
  t1937 = Cos(var1[4]);
  t2098 = Sin(var1[10]);
  t2158 = Cos(var1[9]);
  t2662 = t789*t2498*t2626;
  t2936 = t2671*t2868;
  t3039 = t2662 + t2936;
  t3044 = t2158*t3039;
  t3055 = Sin(var1[9]);
  t3074 = -1.*t2498*t2671;
  t3126 = t789*t2626*t2868;
  t3128 = t3074 + t3126;
  t3147 = -1.*t3055*t3128;
  t3171 = t3044 + t3147;
  t261 = Sin(var1[11]);
  t3277 = Cos(var1[11]);
  t3373 = t2498*t2671*t2626;
  t3394 = -1.*t789*t2868;
  t3420 = t3373 + t3394;
  t3431 = t2158*t3420;
  t3445 = t789*t2498;
  t3455 = t2671*t2626*t2868;
  t3456 = t3445 + t3455;
  t3466 = -1.*t3055*t3456;
  t3475 = t3431 + t3466;
  t3621 = t2158*t1937*t2498;
  t3633 = -1.*t1937*t3055*t2868;
  t3635 = t3621 + t3633;
  t2125 = t789*t1937*t2098;
  t3198 = t2153*t3171;
  t3267 = t2125 + t3198;
  t3313 = t2153*t789*t1937;
  t3317 = -1.*t2098*t3171;
  t3328 = t3313 + t3317;
  t3372 = t1937*t2098*t2671;
  t3512 = t2153*t3475;
  t3522 = t3372 + t3512;
  t3558 = t2153*t1937*t2671;
  t3573 = -1.*t2098*t3475;
  t3587 = t3558 + t3573;
  t3619 = -1.*t2098*t2626;
  t3638 = t2153*t3635;
  t3642 = t3619 + t3638;
  t3647 = -1.*t2153*t2626;
  t3653 = -1.*t2098*t3635;
  t3667 = t3647 + t3653;
  p_output1[0]=-1.*t261*t3267 + t3277*t3328;
  p_output1[1]=-1.*t261*t3522 + t3277*t3587;
  p_output1[2]=-1.*t261*t3642 + t3277*t3667;
  p_output1[3]=t3039*t3055 + t2158*t3128;
  p_output1[4]=t3055*t3420 + t2158*t3456;
  p_output1[5]=t1937*t2158*t2868 + t1937*t2498*t3055;
  p_output1[6]=t3267*t3277 + t261*t3328;
  p_output1[7]=t3277*t3522 + t261*t3587;
  p_output1[8]=t3277*t3642 + t261*t3667;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
