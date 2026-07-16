/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

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
  double t2725;
  double t4688;
  double t4924;
  double t4894;
  double t4958;
  double t3994;
  double t4529;
  double t4585;
  double t5299;
  double t5331;
  double t5083;
  double t5219;
  double t5294;
  double t4899;
  double t4967;
  double t4980;
  double t5545;
  double t5549;
  double t5651;
  double t5449;
  double t5486;
  double t5531;
  double t4987;
  double t5300;
  double t5328;
  double t5534;
  double t5652;
  double t5662;
  double t5931;
  double t5963;
  double t5985;
  double t6132;
  double t6138;
  double t6150;
  double t4540;
  double t5353;
  double t5369;
  double t6648;
  double t6688;
  double t6820;
  double t6840;
  double t6857;
  double t6876;
  double t6896;
  double t6899;
  double t6923;
  double t6941;
  double t6159;
  double t6161;
  double t6188;
  double t6991;
  double t6993;
  double t5431;
  double t5700;
  double t5730;
  double t6247;
  double t6306;
  double t6308;
  double t5907;
  double t6105;
  double t6120;
  t2725 = Cos(var1[3]);
  t4688 = Cos(var1[5]);
  t4924 = Sin(var1[3]);
  t4894 = Sin(var1[4]);
  t4958 = Sin(var1[5]);
  t3994 = Cos(var1[4]);
  t4529 = Cos(var1[7]);
  t4585 = Cos(var1[6]);
  t5299 = Sin(var1[6]);
  t5331 = Sin(var1[7]);
  t5083 = -1.*t4688*t4924;
  t5219 = t2725*t4894*t4958;
  t5294 = t5083 + t5219;
  t4899 = t2725*t4688*t4894;
  t4967 = t4924*t4958;
  t4980 = t4899 + t4967;
  t5545 = t2725*t4688;
  t5549 = t4924*t4894*t4958;
  t5651 = t5545 + t5549;
  t5449 = t4688*t4924*t4894;
  t5486 = -1.*t2725*t4958;
  t5531 = t5449 + t5486;
  t4987 = t4585*t4980;
  t5300 = -1.*t5294*t5299;
  t5328 = t4987 + t5300;
  t5534 = t4585*t5531;
  t5652 = -1.*t5651*t5299;
  t5662 = t5534 + t5652;
  t5931 = t3994*t4688*t4585;
  t5963 = -1.*t3994*t4958*t5299;
  t5985 = t5931 + t5963;
  t6132 = t4585*t5294;
  t6138 = t4980*t5299;
  t6150 = t6132 + t6138;
  t4540 = t2725*t3994*t4529;
  t5353 = -1.*t5328*t5331;
  t5369 = t4540 + t5353;
  t6648 = -1.*t4529;
  t6688 = 1. + t6648;
  t6820 = 0.183*t6688;
  t6840 = 0. + t6820;
  t6857 = -1.*t4585;
  t6876 = 1. + t6857;
  t6896 = -0.047*t6876;
  t6899 = 0. + t6896;
  t6923 = 0.047*t5299;
  t6941 = 0. + t6923;
  t6159 = t4585*t5651;
  t6161 = t5531*t5299;
  t6188 = t6159 + t6161;
  t6991 = 0.183*t5331;
  t6993 = 0. + t6991;
  t5431 = t3994*t4529*t4924;
  t5700 = -1.*t5662*t5331;
  t5730 = t5431 + t5700;
  t6247 = t3994*t4585*t4958;
  t6306 = t3994*t4688*t5299;
  t6308 = t6247 + t6306;
  t5907 = -1.*t4529*t4894;
  t6105 = -1.*t5985*t5331;
  t6120 = t5907 + t6105;
  p_output1[0]=t5369;
  p_output1[1]=t5730;
  p_output1[2]=t6120;
  p_output1[3]=0.;
  p_output1[4]=t6150;
  p_output1[5]=t6188;
  p_output1[6]=t6308;
  p_output1[7]=0.;
  p_output1[8]=t4529*t5328 + t2725*t3994*t5331;
  p_output1[9]=t3994*t4924*t5331 + t4529*t5662;
  p_output1[10]=-1.*t4894*t5331 + t4529*t5985;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t5369 - 0.13205*t6150 + t2725*t3994*t6840 + t5294*t6899 + t4980*t6941 + t5328*t6993 + var1[0];
  p_output1[13]=0. + 0.183*t5730 - 0.13205*t6188 + t3994*t4924*t6840 + t5651*t6899 + t5531*t6941 + t5662*t6993 + var1[1];
  p_output1[14]=0. + 0.183*t6120 - 0.13205*t6308 - 1.*t4894*t6840 + t3994*t4958*t6899 + t3994*t4688*t6941 + t5985*t6993 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
