/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint_src.h"

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
  double t76;
  double t2321;
  double t1783;
  double t2099;
  double t2753;
  double t752;
  double t2259;
  double t4315;
  double t4322;
  double t5638;
  double t5814;
  double t5948;
  double t5955;
  double t51;
  double t893;
  double t1714;
  double t5673;
  double t5685;
  double t5748;
  double t5803;
  double t6138;
  double t6146;
  double t6159;
  double t6189;
  double t6215;
  double t6221;
  double t6946;
  double t6982;
  double t6995;
  double t7161;
  double t7191;
  double t7207;
  double t7026;
  double t7232;
  double t7582;
  double t7583;
  double t7592;
  double t7383;
  double t7420;
  double t7422;
  double t7435;
  t76 = Sin(var1[3]);
  t2321 = Cos(var1[3]);
  t1783 = Cos(var1[5]);
  t2099 = Sin(var1[4]);
  t2753 = Sin(var1[5]);
  t752 = Sin(var1[12]);
  t2259 = -1.*t1783*t76*t2099;
  t4315 = t2321*t2753;
  t4322 = t2259 + t4315;
  t5638 = Cos(var1[12]);
  t5814 = -1.*t2321*t1783;
  t5948 = -1.*t76*t2099*t2753;
  t5955 = t5814 + t5948;
  t51 = Cos(var1[4]);
  t893 = 0.047*t752;
  t1714 = 0. + t893;
  t5673 = -1.*t5638;
  t5685 = 1. + t5673;
  t5748 = -0.047*t5685;
  t5803 = 0. + t5748;
  t6138 = t2321*t1783*t2099;
  t6146 = t76*t2753;
  t6159 = t6138 + t6146;
  t6189 = -1.*t1783*t76;
  t6215 = t2321*t2099*t2753;
  t6221 = t6189 + t6215;
  t6946 = t1783*t76;
  t6982 = -1.*t2321*t2099*t2753;
  t6995 = t6946 + t6982;
  t7161 = t1783*t76*t2099;
  t7191 = -1.*t2321*t2753;
  t7207 = t7161 + t7191;
  t7026 = t5638*t6159;
  t7232 = t5638*t7207;
  t7582 = t2321*t1783;
  t7583 = t76*t2099*t2753;
  t7592 = t7582 + t7583;
  t7383 = t5638*t51*t1783;
  t7420 = -1.*t51*t752*t2753;
  t7422 = t7383 + t7420;
  t7435 = -0.047*t7422;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1714*t4322 + t5803*t5955 - 0.047*(t5638*t5955 + t4322*t752) + 0.183*t51*t76;
  p_output1[10]=-0.183*t2321*t51 + t1714*t6159 + t5803*t6221 - 0.047*(t5638*t6221 + t6159*t752);
  p_output1[11]=0;
  p_output1[12]=0.183*t2099*t2321 + t1714*t1783*t2321*t51 + t2321*t2753*t51*t5803 - 0.047*(t2321*t2753*t51*t5638 + t1783*t2321*t51*t752);
  p_output1[13]=0.183*t2099*t76 + t1714*t1783*t51*t76 + t2753*t51*t5803*t76 - 0.047*(t2753*t51*t5638*t76 + t1783*t51*t752*t76);
  p_output1[14]=-1.*t1714*t1783*t2099 + 0.183*t51 - 1.*t2099*t2753*t5803 - 0.047*(-1.*t2099*t2753*t5638 - 1.*t1783*t2099*t752);
  p_output1[15]=t5803*t6159 + t1714*t6995 - 0.047*(t7026 + t6995*t752);
  p_output1[16]=t1714*t5955 + t5803*t7207 - 0.047*(t7232 + t5955*t752);
  p_output1[17]=-1.*t1714*t2753*t51 + t1783*t51*t5803 + t7435;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[36]=0.047*t5638*t6159 - 0.047*t6221*t752 - 0.047*(t7026 - 1.*t6221*t752);
  p_output1[37]=0.047*t5638*t7207 - 0.047*t752*t7592 - 0.047*(t7232 - 1.*t752*t7592);
  p_output1[38]=0.047*t1783*t51*t5638 + t7435 - 0.047*t2753*t51*t752;
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



void Jp_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
