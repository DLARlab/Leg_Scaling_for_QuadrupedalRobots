/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint_src.h"

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
  double t4066;
  double t4120;
  double t4113;
  double t4117;
  double t4121;
  double t4105;
  double t4119;
  double t4122;
  double t4123;
  double t4125;
  double t4131;
  double t4133;
  double t4134;
  double t753;
  double t4107;
  double t4108;
  double t4126;
  double t4127;
  double t4128;
  double t4129;
  double t4142;
  double t4143;
  double t4144;
  double t4146;
  double t4147;
  double t4148;
  double t4184;
  double t4185;
  double t4187;
  double t4195;
  double t4196;
  double t4197;
  double t4190;
  double t4201;
  double t4220;
  double t4221;
  double t4222;
  double t4208;
  double t4209;
  double t4210;
  double t4211;
  t4066 = Sin(var1[3]);
  t4120 = Cos(var1[3]);
  t4113 = Cos(var1[5]);
  t4117 = Sin(var1[4]);
  t4121 = Sin(var1[5]);
  t4105 = Sin(var1[15]);
  t4119 = -1.*t4113*t4066*t4117;
  t4122 = t4120*t4121;
  t4123 = t4119 + t4122;
  t4125 = Cos(var1[15]);
  t4131 = -1.*t4120*t4113;
  t4133 = -1.*t4066*t4117*t4121;
  t4134 = t4131 + t4133;
  t753 = Cos(var1[4]);
  t4107 = -0.047*t4105;
  t4108 = 0. + t4107;
  t4126 = -1.*t4125;
  t4127 = 1. + t4126;
  t4128 = 0.047*t4127;
  t4129 = 0. + t4128;
  t4142 = t4120*t4113*t4117;
  t4143 = t4066*t4121;
  t4144 = t4142 + t4143;
  t4146 = -1.*t4113*t4066;
  t4147 = t4120*t4117*t4121;
  t4148 = t4146 + t4147;
  t4184 = t4113*t4066;
  t4185 = -1.*t4120*t4117*t4121;
  t4187 = t4184 + t4185;
  t4195 = t4113*t4066*t4117;
  t4196 = -1.*t4120*t4121;
  t4197 = t4195 + t4196;
  t4190 = t4125*t4144;
  t4201 = t4125*t4197;
  t4220 = t4120*t4113;
  t4221 = t4066*t4117*t4121;
  t4222 = t4220 + t4221;
  t4208 = t4125*t753*t4113;
  t4209 = -1.*t753*t4105*t4121;
  t4210 = t4208 + t4209;
  t4211 = 0.047*t4210;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4108*t4123 + t4129*t4134 + 0.047*(t4105*t4123 + t4125*t4134) + 0.183*t4066*t753;
  p_output1[10]=t4108*t4144 + t4129*t4148 + 0.047*(t4105*t4144 + t4125*t4148) - 0.183*t4120*t753;
  p_output1[11]=0;
  p_output1[12]=0.183*t4117*t4120 + t4108*t4113*t4120*t753 + t4120*t4121*t4129*t753 + 0.047*(t4105*t4113*t4120*t753 + t4120*t4121*t4125*t753);
  p_output1[13]=0.183*t4066*t4117 + t4066*t4108*t4113*t753 + t4066*t4121*t4129*t753 + 0.047*(t4066*t4105*t4113*t753 + t4066*t4121*t4125*t753);
  p_output1[14]=-1.*t4108*t4113*t4117 + 0.047*(-1.*t4105*t4113*t4117 - 1.*t4117*t4121*t4125) - 1.*t4117*t4121*t4129 + 0.183*t753;
  p_output1[15]=t4129*t4144 + t4108*t4187 + 0.047*(t4105*t4187 + t4190);
  p_output1[16]=t4108*t4134 + t4129*t4197 + 0.047*(t4105*t4134 + t4201);
  p_output1[17]=t4211 - 1.*t4108*t4121*t753 + t4113*t4129*t753;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.047*t4125*t4144 + 0.047*t4105*t4148 + 0.047*(-1.*t4105*t4148 + t4190);
  p_output1[46]=-0.047*t4125*t4197 + 0.047*t4105*t4222 + 0.047*(t4201 - 1.*t4105*t4222);
  p_output1[47]=t4211 + 0.047*t4105*t4121*t753 - 0.047*t4113*t4125*t753;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
