/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t329;
  double t1392;
  double t70;
  double t3273;
  double t4511;
  double t5106;
  double t4121;
  double t6193;
  double t5369;
  double t5432;
  double t5893;
  double t4880;
  double t5123;
  double t5140;
  double t6526;
  double t6549;
  double t6642;
  double t6440;
  double t6474;
  double t6476;
  double t5317;
  double t6253;
  double t6254;
  double t6902;
  double t6906;
  double t6920;
  double t6928;
  double t6985;
  double t6996;
  double t6512;
  double t6663;
  double t6685;
  double t6700;
  double t6715;
  double t6724;
  t329 = Cos(var1[4]);
  t1392 = Sin(var1[3]);
  t70 = Cos(var1[3]);
  t3273 = Sin(var1[4]);
  t4511 = Cos(var1[5]);
  t5106 = Sin(var1[5]);
  t4121 = Cos(var1[6]);
  t6193 = Sin(var1[6]);
  t5369 = t70*t4511*t3273;
  t5432 = t1392*t5106;
  t5893 = t5369 + t5432;
  t4880 = -1.*t4511*t1392;
  t5123 = t70*t3273*t5106;
  t5140 = t4880 + t5123;
  t6526 = t4511*t1392*t3273;
  t6549 = -1.*t70*t5106;
  t6642 = t6526 + t6549;
  t6440 = t70*t4511;
  t6474 = t1392*t3273*t5106;
  t6476 = t6440 + t6474;
  t5317 = t4121*t5140;
  t6253 = t5893*t6193;
  t6254 = t5317 + t6253;
  t6902 = -1.*t4121;
  t6906 = 1. + t6902;
  t6920 = -0.047*t6906;
  t6928 = 0. + t6920;
  t6985 = 0.047*t6193;
  t6996 = 0. + t6985;
  t6512 = t4121*t6476;
  t6663 = t6642*t6193;
  t6685 = t6512 + t6663;
  t6700 = t329*t4121*t5106;
  t6715 = t329*t4511*t6193;
  t6724 = t6700 + t6715;
  p_output1[0]=t329*t70;
  p_output1[1]=t1392*t329;
  p_output1[2]=-1.*t3273;
  p_output1[3]=0.;
  p_output1[4]=t6254;
  p_output1[5]=t6685;
  p_output1[6]=t6724;
  p_output1[7]=0.;
  p_output1[8]=t4121*t5893 - 1.*t5140*t6193;
  p_output1[9]=-1.*t6193*t6476 + t4121*t6642;
  p_output1[10]=t329*t4121*t4511 - 1.*t329*t5106*t6193;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.047*t6254 + t5140*t6928 + t5893*t6996 + 0.183*t329*t70 + var1[0];
  p_output1[13]=0. + 0.183*t1392*t329 - 0.047*t6685 + t6476*t6928 + t6642*t6996 + var1[1];
  p_output1[14]=0. - 0.183*t3273 - 0.047*t6724 + t329*t5106*t6928 + t329*t4511*t6996 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
