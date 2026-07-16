/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t1528;
  double t3493;
  double t4141;
  double t3917;
  double t4292;
  double t2587;
  double t4021;
  double t4753;
  double t4781;
  double t4891;
  double t5185;
  double t5200;
  double t5272;
  double t1805;
  double t5555;
  double t40;
  double t5598;
  double t5613;
  double t5725;
  double t5772;
  double t5778;
  double t5784;
  double t5934;
  double t6011;
  double t6019;
  double t6024;
  double t6057;
  double t6091;
  double t6194;
  double t635;
  double t784;
  double t1081;
  double t1167;
  double t2941;
  double t3009;
  double t5039;
  double t5056;
  double t5087;
  double t5135;
  double t6662;
  double t6695;
  double t6768;
  double t6818;
  double t6838;
  double t6934;
  double t5577;
  double t5588;
  double t5885;
  double t5956;
  double t6008;
  double t7162;
  double t7181;
  double t7188;
  double t6034;
  double t6037;
  double t6048;
  double t7204;
  double t7217;
  double t7224;
  double t7248;
  double t7254;
  double t7268;
  double t7807;
  double t7836;
  double t7841;
  double t7873;
  double t7879;
  double t7881;
  double t7902;
  double t7906;
  double t7937;
  t1528 = Cos(var1[3]);
  t3493 = Cos(var1[5]);
  t4141 = Sin(var1[3]);
  t3917 = Sin(var1[4]);
  t4292 = Sin(var1[5]);
  t2587 = Sin(var1[12]);
  t4021 = t1528*t3493*t3917;
  t4753 = t4141*t4292;
  t4781 = t4021 + t4753;
  t4891 = Cos(var1[12]);
  t5185 = -1.*t3493*t4141;
  t5200 = t1528*t3917*t4292;
  t5272 = t5185 + t5200;
  t1805 = Cos(var1[4]);
  t5555 = Sin(var1[13]);
  t40 = Cos(var1[13]);
  t5598 = t4891*t4781;
  t5613 = -1.*t2587*t5272;
  t5725 = t5598 + t5613;
  t5772 = Cos(var1[14]);
  t5778 = -1.*t5772;
  t5784 = 1. + t5778;
  t5934 = Sin(var1[14]);
  t6011 = t1528*t1805*t5555;
  t6019 = t40*t5725;
  t6024 = t6011 + t6019;
  t6057 = t40*t1528*t1805;
  t6091 = -1.*t5555*t5725;
  t6194 = t6057 + t6091;
  t635 = -1.*t40;
  t784 = 1. + t635;
  t1081 = -0.183*t784;
  t1167 = 0. + t1081;
  t2941 = 0.047*t2587;
  t3009 = 0. + t2941;
  t5039 = -1.*t4891;
  t5056 = 1. + t5039;
  t5087 = -0.047*t5056;
  t5135 = 0. + t5087;
  t6662 = t3493*t4141*t3917;
  t6695 = -1.*t1528*t4292;
  t6768 = t6662 + t6695;
  t6818 = t1528*t3493;
  t6838 = t4141*t3917*t4292;
  t6934 = t6818 + t6838;
  t5577 = -0.183*t5555;
  t5588 = 0. + t5577;
  t5885 = -0.25*t5784;
  t5956 = -0.183*t5934;
  t6008 = 0. + t5885 + t5956;
  t7162 = t4891*t6768;
  t7181 = -1.*t2587*t6934;
  t7188 = t7162 + t7181;
  t6034 = -0.183*t5784;
  t6037 = 0.25*t5934;
  t6048 = 0. + t6034 + t6037;
  t7204 = t1805*t5555*t4141;
  t7217 = t40*t7188;
  t7224 = t7204 + t7217;
  t7248 = t40*t1805*t4141;
  t7254 = -1.*t5555*t7188;
  t7268 = t7248 + t7254;
  t7807 = t4891*t1805*t3493;
  t7836 = -1.*t1805*t2587*t4292;
  t7841 = t7807 + t7836;
  t7873 = -1.*t5555*t3917;
  t7879 = t40*t7841;
  t7881 = t7873 + t7879;
  t7902 = -1.*t40*t3917;
  t7906 = -1.*t5555*t7841;
  t7937 = t7902 + t7906;
  p_output1[0]=0. + t1167*t1528*t1805 + t3009*t4781 + t5135*t5272 - 0.15331*(t2587*t4781 + t4891*t5272) + t5588*t5725 + t6008*t6024 + t6048*t6194 - 0.183*(-1.*t5934*t6024 + t5772*t6194) - 0.25*(t5772*t6024 + t5934*t6194) + var1[0];
  p_output1[1]=0. + t1167*t1805*t4141 + t3009*t6768 + t5135*t6934 - 0.15331*(t2587*t6768 + t4891*t6934) + t5588*t7188 + t6008*t7224 + t6048*t7268 - 0.183*(-1.*t5934*t7224 + t5772*t7268) - 0.25*(t5772*t7224 + t5934*t7268) + var1[1];
  p_output1[2]=0. + t1805*t3009*t3493 - 1.*t1167*t3917 - 0.15331*(t1805*t2587*t3493 + t1805*t4292*t4891) + t1805*t4292*t5135 + t5588*t7841 + t6008*t7881 + t6048*t7937 - 0.183*(-1.*t5934*t7881 + t5772*t7937) - 0.25*(t5772*t7881 + t5934*t7937) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
