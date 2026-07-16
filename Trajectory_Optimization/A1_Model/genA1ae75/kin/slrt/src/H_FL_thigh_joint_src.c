/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint_src.h"

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
  double t1661;
  double t3695;
  double t3734;
  double t3697;
  double t3739;
  double t902;
  double t3519;
  double t3537;
  double t3630;
  double t3900;
  double t3720;
  double t3740;
  double t3803;
  double t3920;
  double t3943;
  double t3964;
  double t4102;
  double t4108;
  double t4110;
  double t4131;
  double t4141;
  double t4161;
  double t3896;
  double t4001;
  double t4049;
  double t4114;
  double t4168;
  double t4175;
  double t4239;
  double t4245;
  double t4274;
  double t4395;
  double t4396;
  double t4421;
  double t3522;
  double t4077;
  double t4095;
  double t4672;
  double t4682;
  double t4702;
  double t4712;
  double t4723;
  double t4747;
  double t4757;
  double t4765;
  double t4769;
  double t4774;
  double t4444;
  double t4466;
  double t4487;
  double t4796;
  double t4815;
  double t4097;
  double t4179;
  double t4187;
  double t4507;
  double t4522;
  double t4524;
  double t4196;
  double t4301;
  double t4302;
  t1661 = Cos(var1[3]);
  t3695 = Cos(var1[5]);
  t3734 = Sin(var1[3]);
  t3697 = Sin(var1[4]);
  t3739 = Sin(var1[5]);
  t902 = Cos(var1[10]);
  t3519 = Cos(var1[4]);
  t3537 = Sin(var1[10]);
  t3630 = Cos(var1[9]);
  t3900 = Sin(var1[9]);
  t3720 = t1661*t3695*t3697;
  t3740 = t3734*t3739;
  t3803 = t3720 + t3740;
  t3920 = -1.*t3695*t3734;
  t3943 = t1661*t3697*t3739;
  t3964 = t3920 + t3943;
  t4102 = t3695*t3734*t3697;
  t4108 = -1.*t1661*t3739;
  t4110 = t4102 + t4108;
  t4131 = t1661*t3695;
  t4141 = t3734*t3697*t3739;
  t4161 = t4131 + t4141;
  t3896 = t3630*t3803;
  t4001 = -1.*t3900*t3964;
  t4049 = t3896 + t4001;
  t4114 = t3630*t4110;
  t4168 = -1.*t3900*t4161;
  t4175 = t4114 + t4168;
  t4239 = t3630*t3519*t3695;
  t4245 = -1.*t3519*t3900*t3739;
  t4274 = t4239 + t4245;
  t4395 = t3900*t3803;
  t4396 = t3630*t3964;
  t4421 = t4395 + t4396;
  t3522 = t902*t1661*t3519;
  t4077 = -1.*t3537*t4049;
  t4095 = t3522 + t4077;
  t4672 = -1.*t902;
  t4682 = 1. + t4672;
  t4702 = 0.183*t4682;
  t4712 = 0. + t4702;
  t4723 = -0.047*t3900;
  t4747 = 0. + t4723;
  t4757 = -1.*t3630;
  t4765 = 1. + t4757;
  t4769 = 0.047*t4765;
  t4774 = 0. + t4769;
  t4444 = t3900*t4110;
  t4466 = t3630*t4161;
  t4487 = t4444 + t4466;
  t4796 = 0.183*t3537;
  t4815 = 0. + t4796;
  t4097 = t902*t3519*t3734;
  t4179 = -1.*t3537*t4175;
  t4187 = t4097 + t4179;
  t4507 = t3519*t3695*t3900;
  t4522 = t3630*t3519*t3739;
  t4524 = t4507 + t4522;
  t4196 = -1.*t902*t3697;
  t4301 = -1.*t3537*t4274;
  t4302 = t4196 + t4301;
  p_output1[0]=t4095;
  p_output1[1]=t4187;
  p_output1[2]=t4302;
  p_output1[3]=0.;
  p_output1[4]=t4421;
  p_output1[5]=t4487;
  p_output1[6]=t4524;
  p_output1[7]=0.;
  p_output1[8]=t1661*t3519*t3537 + t4049*t902;
  p_output1[9]=t3519*t3537*t3734 + t4175*t902;
  p_output1[10]=-1.*t3537*t3697 + t4274*t902;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t4095 + 0.13205*t4421 + t1661*t3519*t4712 + t3803*t4747 + t3964*t4774 + t4049*t4815 + var1[0];
  p_output1[13]=0. + 0.183*t4187 + 0.13205*t4487 + t3519*t3734*t4712 + t4110*t4747 + t4161*t4774 + t4175*t4815 + var1[1];
  p_output1[14]=0. + 0.183*t4302 + 0.13205*t4524 - 1.*t3697*t4712 + t3519*t3695*t4747 + t3519*t3739*t4774 + t4274*t4815 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
