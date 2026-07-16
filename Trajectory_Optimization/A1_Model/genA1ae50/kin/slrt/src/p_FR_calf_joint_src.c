/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

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
  double t592;
  double t4614;
  double t4625;
  double t4615;
  double t4634;
  double t4599;
  double t4622;
  double t4639;
  double t4683;
  double t4685;
  double t4686;
  double t4710;
  double t4716;
  double t785;
  double t4508;
  double t4759;
  double t4767;
  double t4769;
  double t4774;
  double t4833;
  double t4836;
  double t4837;
  double t4851;
  double t4824;
  double t4825;
  double t4827;
  double t4864;
  double t4865;
  double t4866;
  double t4512;
  double t4540;
  double t4543;
  double t4578;
  double t4602;
  double t4603;
  double t4611;
  double t4613;
  double t4719;
  double t4720;
  double t4942;
  double t4943;
  double t4945;
  double t4952;
  double t4964;
  double t4969;
  double t4782;
  double t4800;
  double t5022;
  double t5033;
  double t5034;
  double t4847;
  double t4858;
  double t4860;
  double t4869;
  double t4882;
  double t4885;
  double t5043;
  double t5044;
  double t5051;
  double t5056;
  double t5059;
  double t5063;
  double t5140;
  double t5141;
  double t5143;
  double t5147;
  double t5148;
  double t5156;
  double t5162;
  double t5165;
  double t5166;
  t592 = Cos(var1[3]);
  t4614 = Cos(var1[5]);
  t4625 = Sin(var1[4]);
  t4615 = Sin(var1[3]);
  t4634 = Sin(var1[5]);
  t4599 = Cos(var1[6]);
  t4622 = -1.*t4614*t4615;
  t4639 = t592*t4625*t4634;
  t4683 = t4622 + t4639;
  t4685 = t592*t4614*t4625;
  t4686 = t4615*t4634;
  t4710 = t4685 + t4686;
  t4716 = Sin(var1[6]);
  t785 = Cos(var1[4]);
  t4508 = Cos(var1[7]);
  t4759 = t4599*t4710;
  t4767 = -1.*t4683*t4716;
  t4769 = t4759 + t4767;
  t4774 = Sin(var1[7]);
  t4833 = Cos(var1[8]);
  t4836 = -1.*t4833;
  t4837 = 1. + t4836;
  t4851 = Sin(var1[8]);
  t4824 = t592*t785*t4508;
  t4825 = -1.*t4769*t4774;
  t4827 = t4824 + t4825;
  t4864 = t4508*t4769;
  t4865 = t592*t785*t4774;
  t4866 = t4864 + t4865;
  t4512 = -1.*t4508;
  t4540 = 1. + t4512;
  t4543 = 0.183*t4540;
  t4578 = 0. + t4543;
  t4602 = -1.*t4599;
  t4603 = 1. + t4602;
  t4611 = -0.047*t4603;
  t4613 = 0. + t4611;
  t4719 = 0.047*t4716;
  t4720 = 0. + t4719;
  t4942 = t592*t4614;
  t4943 = t4615*t4625*t4634;
  t4945 = t4942 + t4943;
  t4952 = t4614*t4615*t4625;
  t4964 = -1.*t592*t4634;
  t4969 = t4952 + t4964;
  t4782 = 0.183*t4774;
  t4800 = 0. + t4782;
  t5022 = t4599*t4969;
  t5033 = -1.*t4945*t4716;
  t5034 = t5022 + t5033;
  t4847 = 0.183*t4837;
  t4858 = 0.1*t4851;
  t4860 = 0. + t4847 + t4858;
  t4869 = -0.1*t4837;
  t4882 = 0.183*t4851;
  t4885 = 0. + t4869 + t4882;
  t5043 = t785*t4508*t4615;
  t5044 = -1.*t5034*t4774;
  t5051 = t5043 + t5044;
  t5056 = t4508*t5034;
  t5059 = t785*t4615*t4774;
  t5063 = t5056 + t5059;
  t5140 = t785*t4614*t4599;
  t5141 = -1.*t785*t4634*t4716;
  t5143 = t5140 + t5141;
  t5147 = -1.*t4508*t4625;
  t5148 = -1.*t5143*t4774;
  t5156 = t5147 + t5148;
  t5162 = t4508*t5143;
  t5165 = -1.*t4625*t4774;
  t5166 = t5162 + t5165;
  p_output1[0]=0. + t4613*t4683 - 0.13205*(t4599*t4683 + t4710*t4716) + t4710*t4720 + t4769*t4800 + t4827*t4860 - 0.1*(t4827*t4851 + t4833*t4866) + 0.183*(t4827*t4833 - 1.*t4851*t4866) + t4866*t4885 + t4578*t592*t785 + var1[0];
  p_output1[1]=0. + t4613*t4945 + t4720*t4969 - 0.13205*(t4599*t4945 + t4716*t4969) + t4800*t5034 + t4860*t5051 + t4885*t5063 - 0.1*(t4851*t5051 + t4833*t5063) + 0.183*(t4833*t5051 - 1.*t4851*t5063) + t4578*t4615*t785 + var1[1];
  p_output1[2]=0. - 1.*t4578*t4625 + t4800*t5143 + t4860*t5156 + t4885*t5166 - 0.1*(t4851*t5156 + t4833*t5166) + 0.183*(t4833*t5156 - 1.*t4851*t5166) + t4613*t4634*t785 + t4614*t4720*t785 - 0.13205*(t4599*t4634*t785 + t4614*t4716*t785) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
