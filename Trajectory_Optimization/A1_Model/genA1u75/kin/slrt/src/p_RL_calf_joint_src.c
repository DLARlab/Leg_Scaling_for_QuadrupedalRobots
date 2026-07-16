/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:11 GMT-05:00
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
  double t823;
  double t2816;
  double t4166;
  double t2817;
  double t4317;
  double t2458;
  double t3725;
  double t4328;
  double t4424;
  double t5455;
  double t6055;
  double t6078;
  double t6276;
  double t2248;
  double t7245;
  double t338;
  double t7760;
  double t7762;
  double t7764;
  double t7782;
  double t7785;
  double t7789;
  double t7838;
  double t7893;
  double t7897;
  double t7947;
  double t8321;
  double t8332;
  double t8374;
  double t762;
  double t768;
  double t809;
  double t819;
  double t2623;
  double t2792;
  double t5605;
  double t5765;
  double t5776;
  double t5966;
  double t8718;
  double t8731;
  double t8737;
  double t8750;
  double t8760;
  double t8761;
  double t7708;
  double t7757;
  double t7800;
  double t7848;
  double t7891;
  double t8844;
  double t8845;
  double t8868;
  double t7949;
  double t8123;
  double t8223;
  double t8962;
  double t8979;
  double t8987;
  double t9009;
  double t9010;
  double t9051;
  double t9373;
  double t9386;
  double t9393;
  double t9529;
  double t9603;
  double t9627;
  double t9635;
  double t9636;
  double t9640;
  t823 = Cos(var1[3]);
  t2816 = Cos(var1[5]);
  t4166 = Sin(var1[3]);
  t2817 = Sin(var1[4]);
  t4317 = Sin(var1[5]);
  t2458 = Sin(var1[15]);
  t3725 = t823*t2816*t2817;
  t4328 = t4166*t4317;
  t4424 = t3725 + t4328;
  t5455 = Cos(var1[15]);
  t6055 = -1.*t2816*t4166;
  t6078 = t823*t2817*t4317;
  t6276 = t6055 + t6078;
  t2248 = Cos(var1[4]);
  t7245 = Sin(var1[16]);
  t338 = Cos(var1[16]);
  t7760 = t5455*t4424;
  t7762 = -1.*t2458*t6276;
  t7764 = t7760 + t7762;
  t7782 = Cos(var1[17]);
  t7785 = -1.*t7782;
  t7789 = 1. + t7785;
  t7838 = Sin(var1[17]);
  t7893 = t823*t2248*t7245;
  t7897 = t338*t7764;
  t7947 = t7893 + t7897;
  t8321 = t338*t823*t2248;
  t8332 = -1.*t7245*t7764;
  t8374 = t8321 + t8332;
  t762 = -1.*t338;
  t768 = 1. + t762;
  t809 = -0.183*t768;
  t819 = 0. + t809;
  t2623 = -0.047*t2458;
  t2792 = 0. + t2623;
  t5605 = -1.*t5455;
  t5765 = 1. + t5605;
  t5776 = 0.047*t5765;
  t5966 = 0. + t5776;
  t8718 = t2816*t4166*t2817;
  t8731 = -1.*t823*t4317;
  t8737 = t8718 + t8731;
  t8750 = t823*t2816;
  t8760 = t4166*t2817*t4317;
  t8761 = t8750 + t8760;
  t7708 = -0.183*t7245;
  t7757 = 0. + t7708;
  t7800 = -0.15*t7789;
  t7848 = -0.183*t7838;
  t7891 = 0. + t7800 + t7848;
  t8844 = t5455*t8737;
  t8845 = -1.*t2458*t8761;
  t8868 = t8844 + t8845;
  t7949 = -0.183*t7789;
  t8123 = 0.15*t7838;
  t8223 = 0. + t7949 + t8123;
  t8962 = t2248*t7245*t4166;
  t8979 = t338*t8868;
  t8987 = t8962 + t8979;
  t9009 = t338*t2248*t4166;
  t9010 = -1.*t7245*t8868;
  t9051 = t9009 + t9010;
  t9373 = t5455*t2248*t2816;
  t9386 = -1.*t2248*t2458*t4317;
  t9393 = t9373 + t9386;
  t9529 = -1.*t7245*t2817;
  t9603 = t338*t9393;
  t9627 = t9529 + t9603;
  t9635 = -1.*t338*t2817;
  t9636 = -1.*t7245*t9393;
  t9640 = t9635 + t9636;
  p_output1[0]=0. + t2792*t4424 + t5966*t6276 + 0.11079*(t2458*t4424 + t5455*t6276) + t7757*t7764 + t7891*t7947 + t2248*t819*t823 + t8223*t8374 - 0.183*(-1.*t7838*t7947 + t7782*t8374) - 0.15*(t7782*t7947 + t7838*t8374) + var1[0];
  p_output1[1]=0. + t2248*t4166*t819 + t2792*t8737 + t5966*t8761 + 0.11079*(t2458*t8737 + t5455*t8761) + t7757*t8868 + t7891*t8987 + t8223*t9051 - 0.183*(-1.*t7838*t8987 + t7782*t9051) - 0.15*(t7782*t8987 + t7838*t9051) + var1[1];
  p_output1[2]=0. + t2248*t2792*t2816 + 0.11079*(t2248*t2458*t2816 + t2248*t4317*t5455) + t2248*t4317*t5966 - 1.*t2817*t819 + t7757*t9393 + t7891*t9627 + t8223*t9640 - 0.183*(-1.*t7838*t9627 + t7782*t9640) - 0.15*(t7782*t9627 + t7838*t9640) + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
