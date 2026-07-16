/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint_src.h"

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
  double t1481;
  double t2572;
  double t2670;
  double t2640;
  double t2690;
  double t2363;
  double t2226;
  double t2244;
  double t2493;
  double t2642;
  double t2709;
  double t2837;
  double t2910;
  double t2911;
  double t2936;
  double t3008;
  double t3029;
  double t3050;
  double t3052;
  double t709;
  double t3388;
  double t3474;
  double t3479;
  double t3484;
  double t3616;
  double t3628;
  double t3642;
  double t3646;
  double t3694;
  double t3714;
  double t3839;
  double t3866;
  double t4046;
  double t2261;
  double t3104;
  double t3171;
  double t3389;
  double t3392;
  double t3432;
  double t3466;
  double t3715;
  double t3721;
  double t3724;
  double t3726;
  double t3734;
  double t3828;
  double t4051;
  double t4055;
  double t4297;
  double t4379;
  double t4393;
  double t4556;
  double t4565;
  double t4579;
  double t5315;
  double t5323;
  double t3184;
  double t3442;
  double t3457;
  double t4724;
  double t4735;
  double t4761;
  double t4928;
  double t4939;
  double t4951;
  double t4952;
  double t4974;
  double t4982;
  double t5023;
  double t5043;
  double t5082;
  double t5174;
  double t4638;
  double t4671;
  double t4697;
  double t5293;
  double t5296;
  double t5334;
  double t5342;
  double t5466;
  double t5606;
  double t5691;
  double t5737;
  double t3723;
  double t3756;
  double t3809;
  double t4786;
  double t4822;
  double t4841;
  double t4702;
  double t4710;
  double t4717;
  double t4097;
  double t4498;
  double t4555;
  double t4845;
  double t4847;
  double t4856;
  t1481 = Cos(var1[3]);
  t2572 = Cos(var1[5]);
  t2670 = Sin(var1[3]);
  t2640 = Sin(var1[4]);
  t2690 = Sin(var1[5]);
  t2363 = Cos(var1[10]);
  t2226 = Cos(var1[4]);
  t2244 = Sin(var1[10]);
  t2493 = Cos(var1[9]);
  t2642 = t1481*t2572*t2640;
  t2709 = t2670*t2690;
  t2837 = t2642 + t2709;
  t2910 = t2493*t2837;
  t2911 = Sin(var1[9]);
  t2936 = -1.*t2572*t2670;
  t3008 = t1481*t2640*t2690;
  t3029 = t2936 + t3008;
  t3050 = -1.*t2911*t3029;
  t3052 = t2910 + t3050;
  t709 = Sin(var1[11]);
  t3388 = Cos(var1[11]);
  t3474 = t2572*t2670*t2640;
  t3479 = -1.*t1481*t2690;
  t3484 = t3474 + t3479;
  t3616 = t2493*t3484;
  t3628 = t1481*t2572;
  t3642 = t2670*t2640*t2690;
  t3646 = t3628 + t3642;
  t3694 = -1.*t2911*t3646;
  t3714 = t3616 + t3694;
  t3839 = t2493*t2226*t2572;
  t3866 = -1.*t2226*t2911*t2690;
  t4046 = t3839 + t3866;
  t2261 = t1481*t2226*t2244;
  t3104 = t2363*t3052;
  t3171 = t2261 + t3104;
  t3389 = t2363*t1481*t2226;
  t3392 = -1.*t2244*t3052;
  t3432 = t3389 + t3392;
  t3466 = t2226*t2244*t2670;
  t3715 = t2363*t3714;
  t3721 = t3466 + t3715;
  t3724 = t2363*t2226*t2670;
  t3726 = -1.*t2244*t3714;
  t3734 = t3724 + t3726;
  t3828 = -1.*t2244*t2640;
  t4051 = t2363*t4046;
  t4055 = t3828 + t4051;
  t4297 = -1.*t2363*t2640;
  t4379 = -1.*t2244*t4046;
  t4393 = t4297 + t4379;
  t4556 = t2911*t2837;
  t4565 = t2493*t3029;
  t4579 = t4556 + t4565;
  t5315 = -1.*t3388;
  t5323 = 1. + t5315;
  t3184 = -1.*t709*t3171;
  t3442 = t3388*t3432;
  t3457 = t3184 + t3442;
  t4724 = t3388*t3171;
  t4735 = t709*t3432;
  t4761 = t4724 + t4735;
  t4928 = -1.*t2363;
  t4939 = 1. + t4928;
  t4951 = 0.183*t4939;
  t4952 = 0. + t4951;
  t4974 = -0.047*t2911;
  t4982 = 0. + t4974;
  t5023 = -1.*t2493;
  t5043 = 1. + t5023;
  t5082 = 0.047*t5043;
  t5174 = 0. + t5082;
  t4638 = t2911*t3484;
  t4671 = t2493*t3646;
  t4697 = t4638 + t4671;
  t5293 = 0.183*t2244;
  t5296 = 0. + t5293;
  t5334 = -0.25*t5323;
  t5342 = 0.183*t709;
  t5466 = 0. + t5334 + t5342;
  t5606 = 0.183*t5323;
  t5691 = 0.25*t709;
  t5737 = 0. + t5606 + t5691;
  t3723 = -1.*t709*t3721;
  t3756 = t3388*t3734;
  t3809 = t3723 + t3756;
  t4786 = t3388*t3721;
  t4822 = t709*t3734;
  t4841 = t4786 + t4822;
  t4702 = t2226*t2572*t2911;
  t4710 = t2493*t2226*t2690;
  t4717 = t4702 + t4710;
  t4097 = -1.*t709*t4055;
  t4498 = t3388*t4393;
  t4555 = t4097 + t4498;
  t4845 = t3388*t4055;
  t4847 = t709*t4393;
  t4856 = t4845 + t4847;
  p_output1[0]=t3457;
  p_output1[1]=t3809;
  p_output1[2]=t4555;
  p_output1[3]=0.;
  p_output1[4]=t4579;
  p_output1[5]=t4697;
  p_output1[6]=t4717;
  p_output1[7]=0.;
  p_output1[8]=t4761;
  p_output1[9]=t4841;
  p_output1[10]=t4856;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3457 + 0.13205*t4579 - 0.25*t4761 + t1481*t2226*t4952 + t2837*t4982 + t3029*t5174 + t3052*t5296 + t3171*t5466 + t3432*t5737 + var1[0];
  p_output1[13]=0. + 0.183*t3809 + 0.13205*t4697 - 0.25*t4841 + t2226*t2670*t4952 + t3484*t4982 + t3646*t5174 + t3714*t5296 + t3721*t5466 + t3734*t5737 + var1[1];
  p_output1[14]=0. + 0.183*t4555 + 0.13205*t4717 - 0.25*t4856 - 1.*t2640*t4952 + t2226*t2572*t4982 + t2226*t2690*t5174 + t4046*t5296 + t4055*t5466 + t4393*t5737 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
