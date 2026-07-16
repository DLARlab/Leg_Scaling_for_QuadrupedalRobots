/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t2247;
  double t5620;
  double t5657;
  double t5638;
  double t5685;
  double t5073;
  double t5642;
  double t5832;
  double t5838;
  double t6236;
  double t6587;
  double t6604;
  double t6738;
  double t4542;
  double t7355;
  double t916;
  double t7518;
  double t7538;
  double t7700;
  double t7744;
  double t7800;
  double t7804;
  double t7817;
  double t7835;
  double t7837;
  double t7841;
  double t7859;
  double t7860;
  double t7866;
  double t1070;
  double t1440;
  double t1701;
  double t2142;
  double t5348;
  double t5575;
  double t6252;
  double t6279;
  double t6361;
  double t6453;
  double t7902;
  double t7903;
  double t7908;
  double t7911;
  double t7914;
  double t7917;
  double t7424;
  double t7432;
  double t7815;
  double t7822;
  double t7832;
  double t7934;
  double t7936;
  double t7937;
  double t7852;
  double t7855;
  double t7857;
  double t7939;
  double t7940;
  double t7941;
  double t7947;
  double t7952;
  double t7957;
  double t8022;
  double t8029;
  double t8030;
  double t8033;
  double t8034;
  double t8036;
  double t8045;
  double t8055;
  double t8056;
  t2247 = Cos(var1[3]);
  t5620 = Cos(var1[5]);
  t5657 = Sin(var1[3]);
  t5638 = Sin(var1[4]);
  t5685 = Sin(var1[5]);
  t5073 = Sin(var1[15]);
  t5642 = t2247*t5620*t5638;
  t5832 = t5657*t5685;
  t5838 = t5642 + t5832;
  t6236 = Cos(var1[15]);
  t6587 = -1.*t5620*t5657;
  t6604 = t2247*t5638*t5685;
  t6738 = t6587 + t6604;
  t4542 = Cos(var1[4]);
  t7355 = Sin(var1[16]);
  t916 = Cos(var1[16]);
  t7518 = t6236*t5838;
  t7538 = -1.*t5073*t6738;
  t7700 = t7518 + t7538;
  t7744 = Cos(var1[17]);
  t7800 = -1.*t7744;
  t7804 = 1. + t7800;
  t7817 = Sin(var1[17]);
  t7835 = t2247*t4542*t7355;
  t7837 = t916*t7700;
  t7841 = t7835 + t7837;
  t7859 = t916*t2247*t4542;
  t7860 = -1.*t7355*t7700;
  t7866 = t7859 + t7860;
  t1070 = -1.*t916;
  t1440 = 1. + t1070;
  t1701 = -0.183*t1440;
  t2142 = 0. + t1701;
  t5348 = -0.047*t5073;
  t5575 = 0. + t5348;
  t6252 = -1.*t6236;
  t6279 = 1. + t6252;
  t6361 = 0.047*t6279;
  t6453 = 0. + t6361;
  t7902 = t5620*t5657*t5638;
  t7903 = -1.*t2247*t5685;
  t7908 = t7902 + t7903;
  t7911 = t2247*t5620;
  t7914 = t5657*t5638*t5685;
  t7917 = t7911 + t7914;
  t7424 = -0.183*t7355;
  t7432 = 0. + t7424;
  t7815 = -0.25*t7804;
  t7822 = -0.183*t7817;
  t7832 = 0. + t7815 + t7822;
  t7934 = t6236*t7908;
  t7936 = -1.*t5073*t7917;
  t7937 = t7934 + t7936;
  t7852 = -0.183*t7804;
  t7855 = 0.25*t7817;
  t7857 = 0. + t7852 + t7855;
  t7939 = t4542*t7355*t5657;
  t7940 = t916*t7937;
  t7941 = t7939 + t7940;
  t7947 = t916*t4542*t5657;
  t7952 = -1.*t7355*t7937;
  t7957 = t7947 + t7952;
  t8022 = t6236*t4542*t5620;
  t8029 = -1.*t4542*t5073*t5685;
  t8030 = t8022 + t8029;
  t8033 = -1.*t7355*t5638;
  t8034 = t916*t8030;
  t8036 = t8033 + t8034;
  t8045 = -1.*t916*t5638;
  t8055 = -1.*t7355*t8030;
  t8056 = t8045 + t8055;
  p_output1[0]=0. + t2142*t2247*t4542 + t5575*t5838 + t6453*t6738 + 0.13205*(t5073*t5838 + t6236*t6738) + t7432*t7700 + t7832*t7841 + t7857*t7866 - 0.183*(-1.*t7817*t7841 + t7744*t7866) - 0.25*(t7744*t7841 + t7817*t7866) + var1[0];
  p_output1[1]=0. + t2142*t4542*t5657 + t5575*t7908 + t6453*t7917 + 0.13205*(t5073*t7908 + t6236*t7917) + t7432*t7937 + t7832*t7941 + t7857*t7957 - 0.183*(-1.*t7817*t7941 + t7744*t7957) - 0.25*(t7744*t7941 + t7817*t7957) + var1[1];
  p_output1[2]=0. + t4542*t5575*t5620 - 1.*t2142*t5638 + 0.13205*(t4542*t5073*t5620 + t4542*t5685*t6236) + t4542*t5685*t6453 + t7432*t8030 + t7832*t8036 + t7857*t8056 - 0.183*(-1.*t7817*t8036 + t7744*t8056) - 0.25*(t7744*t8036 + t7817*t8056) + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
