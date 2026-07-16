/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint_src.h"

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
  double t4141;
  double t4139;
  double t4158;
  double t4154;
  double t4167;
  double t4172;
  double t4164;
  double t4179;
  double t4169;
  double t4173;
  double t4175;
  double t4180;
  double t4181;
  double t4182;
  double t4187;
  double t4189;
  double t4191;
  double t4193;
  double t4194;
  double t4195;
  double t4177;
  double t4183;
  double t4184;
  double t4221;
  double t4223;
  double t4226;
  double t4227;
  double t4228;
  double t4229;
  double t4192;
  double t4197;
  double t4198;
  double t4200;
  double t4202;
  double t4205;
  t4141 = Cos(var1[4]);
  t4139 = Cos(var1[3]);
  t4158 = Sin(var1[4]);
  t4154 = Sin(var1[3]);
  t4167 = Cos(var1[5]);
  t4172 = Sin(var1[5]);
  t4164 = Sin(var1[15]);
  t4179 = Cos(var1[15]);
  t4169 = t4139*t4167*t4158;
  t4173 = t4154*t4172;
  t4175 = t4169 + t4173;
  t4180 = -1.*t4167*t4154;
  t4181 = t4139*t4158*t4172;
  t4182 = t4180 + t4181;
  t4187 = t4167*t4154*t4158;
  t4189 = -1.*t4139*t4172;
  t4191 = t4187 + t4189;
  t4193 = t4139*t4167;
  t4194 = t4154*t4158*t4172;
  t4195 = t4193 + t4194;
  t4177 = t4164*t4175;
  t4183 = t4179*t4182;
  t4184 = t4177 + t4183;
  t4221 = -0.047*t4164;
  t4223 = 0. + t4221;
  t4226 = -1.*t4179;
  t4227 = 1. + t4226;
  t4228 = 0.047*t4227;
  t4229 = 0. + t4228;
  t4192 = t4164*t4191;
  t4197 = t4179*t4195;
  t4198 = t4192 + t4197;
  t4200 = t4141*t4167*t4164;
  t4202 = t4179*t4141*t4172;
  t4205 = t4200 + t4202;
  p_output1[0]=t4139*t4141;
  p_output1[1]=t4141*t4154;
  p_output1[2]=-1.*t4158;
  p_output1[3]=0.;
  p_output1[4]=t4184;
  p_output1[5]=t4198;
  p_output1[6]=t4205;
  p_output1[7]=0.;
  p_output1[8]=t4175*t4179 - 1.*t4164*t4182;
  p_output1[9]=t4179*t4191 - 1.*t4164*t4195;
  p_output1[10]=-1.*t4141*t4164*t4172 + t4141*t4167*t4179;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4139*t4141 + 0.047*t4184 + t4175*t4223 + t4182*t4229 + var1[0];
  p_output1[13]=0. - 0.183*t4141*t4154 + 0.047*t4198 + t4191*t4223 + t4195*t4229 + var1[1];
  p_output1[14]=0. + 0.183*t4158 + 0.047*t4205 + t4141*t4167*t4223 + t4141*t4172*t4229 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
