/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:08 GMT-05:00
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
  double t1232;
  double t2213;
  double t3323;
  double t2896;
  double t3457;
  double t1869;
  double t1263;
  double t1430;
  double t2176;
  double t3258;
  double t3460;
  double t3462;
  double t3496;
  double t3517;
  double t3526;
  double t3527;
  double t3536;
  double t3585;
  double t3586;
  double t1060;
  double t3635;
  double t4043;
  double t4073;
  double t4082;
  double t4105;
  double t4112;
  double t4115;
  double t4146;
  double t4149;
  double t4155;
  double t4539;
  double t4545;
  double t4551;
  double t1613;
  double t3602;
  double t3607;
  double t3707;
  double t3717;
  double t3726;
  double t3981;
  double t4164;
  double t4251;
  double t4299;
  double t4370;
  double t4409;
  double t4535;
  double t4555;
  double t4577;
  double t4595;
  double t4609;
  double t4624;
  t1232 = Cos(var1[3]);
  t2213 = Cos(var1[5]);
  t3323 = Sin(var1[3]);
  t2896 = Sin(var1[4]);
  t3457 = Sin(var1[5]);
  t1869 = Cos(var1[13]);
  t1263 = Cos(var1[4]);
  t1430 = Sin(var1[13]);
  t2176 = Cos(var1[12]);
  t3258 = t1232*t2213*t2896;
  t3460 = t3323*t3457;
  t3462 = t3258 + t3460;
  t3496 = t2176*t3462;
  t3517 = Sin(var1[12]);
  t3526 = -1.*t2213*t3323;
  t3527 = t1232*t2896*t3457;
  t3536 = t3526 + t3527;
  t3585 = -1.*t3517*t3536;
  t3586 = t3496 + t3585;
  t1060 = Sin(var1[14]);
  t3635 = Cos(var1[14]);
  t4043 = t2213*t3323*t2896;
  t4073 = -1.*t1232*t3457;
  t4082 = t4043 + t4073;
  t4105 = t2176*t4082;
  t4112 = t1232*t2213;
  t4115 = t3323*t2896*t3457;
  t4146 = t4112 + t4115;
  t4149 = -1.*t3517*t4146;
  t4155 = t4105 + t4149;
  t4539 = t2176*t1263*t2213;
  t4545 = -1.*t1263*t3517*t3457;
  t4551 = t4539 + t4545;
  t1613 = t1232*t1263*t1430;
  t3602 = t1869*t3586;
  t3607 = t1613 + t3602;
  t3707 = t1869*t1232*t1263;
  t3717 = -1.*t1430*t3586;
  t3726 = t3707 + t3717;
  t3981 = t1263*t1430*t3323;
  t4164 = t1869*t4155;
  t4251 = t3981 + t4164;
  t4299 = t1869*t1263*t3323;
  t4370 = -1.*t1430*t4155;
  t4409 = t4299 + t4370;
  t4535 = -1.*t1430*t2896;
  t4555 = t1869*t4551;
  t4577 = t4535 + t4555;
  t4595 = -1.*t1869*t2896;
  t4609 = -1.*t1430*t4551;
  t4624 = t4595 + t4609;
  p_output1[0]=-1.*t1060*t3607 + t3635*t3726;
  p_output1[1]=-1.*t1060*t4251 + t3635*t4409;
  p_output1[2]=-1.*t1060*t4577 + t3635*t4624;
  p_output1[3]=t3462*t3517 + t2176*t3536;
  p_output1[4]=t3517*t4082 + t2176*t4146;
  p_output1[5]=t1263*t2176*t3457 + t1263*t2213*t3517;
  p_output1[6]=t3607*t3635 + t1060*t3726;
  p_output1[7]=t3635*t4251 + t1060*t4409;
  p_output1[8]=t3635*t4577 + t1060*t4624;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
