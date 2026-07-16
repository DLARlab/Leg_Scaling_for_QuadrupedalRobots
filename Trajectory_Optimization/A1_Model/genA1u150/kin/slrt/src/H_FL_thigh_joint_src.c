/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:45 GMT-05:00
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
  double t342;
  double t1282;
  double t1509;
  double t1497;
  double t1711;
  double t235;
  double t352;
  double t667;
  double t889;
  double t2519;
  double t1507;
  double t1829;
  double t2023;
  double t2638;
  double t2776;
  double t2781;
  double t3516;
  double t3634;
  double t3809;
  double t4006;
  double t4364;
  double t4374;
  double t2084;
  double t2852;
  double t3110;
  double t3955;
  double t4402;
  double t4429;
  double t4765;
  double t4872;
  double t4874;
  double t5031;
  double t5382;
  double t5449;
  double t661;
  double t3147;
  double t3157;
  double t6495;
  double t6528;
  double t6532;
  double t6647;
  double t6796;
  double t6801;
  double t6877;
  double t6936;
  double t6972;
  double t6989;
  double t5516;
  double t5540;
  double t5596;
  double t7169;
  double t7261;
  double t3159;
  double t4591;
  double t4686;
  double t5626;
  double t5680;
  double t5743;
  double t4703;
  double t4956;
  double t5029;
  t342 = Cos(var1[3]);
  t1282 = Cos(var1[5]);
  t1509 = Sin(var1[3]);
  t1497 = Sin(var1[4]);
  t1711 = Sin(var1[5]);
  t235 = Cos(var1[10]);
  t352 = Cos(var1[4]);
  t667 = Sin(var1[10]);
  t889 = Cos(var1[9]);
  t2519 = Sin(var1[9]);
  t1507 = t342*t1282*t1497;
  t1829 = t1509*t1711;
  t2023 = t1507 + t1829;
  t2638 = -1.*t1282*t1509;
  t2776 = t342*t1497*t1711;
  t2781 = t2638 + t2776;
  t3516 = t1282*t1509*t1497;
  t3634 = -1.*t342*t1711;
  t3809 = t3516 + t3634;
  t4006 = t342*t1282;
  t4364 = t1509*t1497*t1711;
  t4374 = t4006 + t4364;
  t2084 = t889*t2023;
  t2852 = -1.*t2519*t2781;
  t3110 = t2084 + t2852;
  t3955 = t889*t3809;
  t4402 = -1.*t2519*t4374;
  t4429 = t3955 + t4402;
  t4765 = t889*t352*t1282;
  t4872 = -1.*t352*t2519*t1711;
  t4874 = t4765 + t4872;
  t5031 = t2519*t2023;
  t5382 = t889*t2781;
  t5449 = t5031 + t5382;
  t661 = t235*t342*t352;
  t3147 = -1.*t667*t3110;
  t3157 = t661 + t3147;
  t6495 = -1.*t235;
  t6528 = 1. + t6495;
  t6532 = 0.183*t6528;
  t6647 = 0. + t6532;
  t6796 = -0.047*t2519;
  t6801 = 0. + t6796;
  t6877 = -1.*t889;
  t6936 = 1. + t6877;
  t6972 = 0.047*t6936;
  t6989 = 0. + t6972;
  t5516 = t2519*t3809;
  t5540 = t889*t4374;
  t5596 = t5516 + t5540;
  t7169 = 0.183*t667;
  t7261 = 0. + t7169;
  t3159 = t235*t352*t1509;
  t4591 = -1.*t667*t4429;
  t4686 = t3159 + t4591;
  t5626 = t352*t1282*t2519;
  t5680 = t889*t352*t1711;
  t5743 = t5626 + t5680;
  t4703 = -1.*t235*t1497;
  t4956 = -1.*t667*t4874;
  t5029 = t4703 + t4956;
  p_output1[0]=t3157;
  p_output1[1]=t4686;
  p_output1[2]=t5029;
  p_output1[3]=0.;
  p_output1[4]=t5449;
  p_output1[5]=t5596;
  p_output1[6]=t5743;
  p_output1[7]=0.;
  p_output1[8]=t235*t3110 + t342*t352*t667;
  p_output1[9]=t235*t4429 + t1509*t352*t667;
  p_output1[10]=t235*t4874 - 1.*t1497*t667;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3157 + 0.17458*t5449 + t342*t352*t6647 + t2023*t6801 + t2781*t6989 + t3110*t7261 + var1[0];
  p_output1[13]=0. + 0.183*t4686 + 0.17458*t5596 + t1509*t352*t6647 + t3809*t6801 + t4374*t6989 + t4429*t7261 + var1[1];
  p_output1[14]=0. + 0.183*t5029 + 0.17458*t5743 - 1.*t1497*t6647 + t1282*t352*t6801 + t1711*t352*t6989 + t4874*t7261 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
