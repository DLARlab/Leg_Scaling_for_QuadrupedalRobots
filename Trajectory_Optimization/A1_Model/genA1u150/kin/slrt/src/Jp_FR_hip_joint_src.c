/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint_src.h"

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
  double t1676;
  double t4086;
  double t4316;
  double t4069;
  double t4507;
  double t2105;
  double t4146;
  double t4685;
  double t4723;
  double t5330;
  double t5432;
  double t6193;
  double t6196;
  double t846;
  double t3033;
  double t3232;
  double t3799;
  double t4053;
  double t6254;
  double t6285;
  double t6511;
  double t6526;
  double t6572;
  double t6685;
  double t6715;
  double t6724;
  double t7247;
  double t7270;
  double t7281;
  double t7407;
  double t7418;
  double t7429;
  double t7331;
  double t7465;
  double t7792;
  double t7806;
  double t7815;
  double t7515;
  double t7560;
  double t7569;
  double t7573;
  t1676 = Sin(var1[3]);
  t4086 = Cos(var1[5]);
  t4316 = Sin(var1[4]);
  t4069 = Cos(var1[3]);
  t4507 = Sin(var1[5]);
  t2105 = Cos(var1[6]);
  t4146 = -1.*t4069*t4086;
  t4685 = -1.*t1676*t4316*t4507;
  t4723 = t4146 + t4685;
  t5330 = -1.*t4086*t1676*t4316;
  t5432 = t4069*t4507;
  t6193 = t5330 + t5432;
  t6196 = Sin(var1[6]);
  t846 = Cos(var1[4]);
  t3033 = -1.*t2105;
  t3232 = 1. + t3033;
  t3799 = -0.047*t3232;
  t4053 = 0. + t3799;
  t6254 = 0.047*t6196;
  t6285 = 0. + t6254;
  t6511 = -1.*t4086*t1676;
  t6526 = t4069*t4316*t4507;
  t6572 = t6511 + t6526;
  t6685 = t4069*t4086*t4316;
  t6715 = t1676*t4507;
  t6724 = t6685 + t6715;
  t7247 = t4086*t1676;
  t7270 = -1.*t4069*t4316*t4507;
  t7281 = t7247 + t7270;
  t7407 = t4086*t1676*t4316;
  t7418 = -1.*t4069*t4507;
  t7429 = t7407 + t7418;
  t7331 = t2105*t6724;
  t7465 = t2105*t7429;
  t7792 = t4069*t4086;
  t7806 = t1676*t4316*t4507;
  t7815 = t7792 + t7806;
  t7515 = t846*t4086*t2105;
  t7560 = -1.*t846*t4507*t6196;
  t7569 = t7515 + t7560;
  t7573 = -0.047*t7569;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4053*t4723 - 0.047*(t2105*t4723 + t6193*t6196) + t6193*t6285 - 0.183*t1676*t846;
  p_output1[10]=t4053*t6572 + t6285*t6724 - 0.047*(t2105*t6572 + t6196*t6724) + 0.183*t4069*t846;
  p_output1[11]=0;
  p_output1[12]=-0.183*t4069*t4316 + t4053*t4069*t4507*t846 + t4069*t4086*t6285*t846 - 0.047*(t2105*t4069*t4507*t846 + t4069*t4086*t6196*t846);
  p_output1[13]=-0.183*t1676*t4316 + t1676*t4053*t4507*t846 + t1676*t4086*t6285*t846 - 0.047*(t1676*t2105*t4507*t846 + t1676*t4086*t6196*t846);
  p_output1[14]=-1.*t4053*t4316*t4507 - 0.047*(-1.*t2105*t4316*t4507 - 1.*t4086*t4316*t6196) - 1.*t4086*t4316*t6285 - 0.183*t846;
  p_output1[15]=t4053*t6724 + t6285*t7281 - 0.047*(t6196*t7281 + t7331);
  p_output1[16]=t4723*t6285 + t4053*t7429 - 0.047*(t4723*t6196 + t7465);
  p_output1[17]=t7573 + t4053*t4086*t846 - 1.*t4507*t6285*t846;
  p_output1[18]=-0.047*t6196*t6572 + 0.047*t2105*t6724 - 0.047*(-1.*t6196*t6572 + t7331);
  p_output1[19]=0.047*t2105*t7429 - 0.047*t6196*t7815 - 0.047*(t7465 - 1.*t6196*t7815);
  p_output1[20]=t7573 + 0.047*t2105*t4086*t846 - 0.047*t4507*t6196*t846;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
