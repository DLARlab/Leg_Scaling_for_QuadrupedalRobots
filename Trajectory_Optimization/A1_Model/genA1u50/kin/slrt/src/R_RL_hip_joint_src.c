/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t4193;
  double t4181;
  double t4230;
  double t4219;
  double t4241;
  double t4243;
  double t4240;
  double t4250;
  double t4242;
  double t4247;
  double t4248;
  double t4251;
  double t4252;
  double t4253;
  double t4256;
  double t4257;
  double t4258;
  double t4260;
  double t4261;
  double t4262;
  t4193 = Cos(var1[4]);
  t4181 = Cos(var1[3]);
  t4230 = Sin(var1[4]);
  t4219 = Sin(var1[3]);
  t4241 = Cos(var1[5]);
  t4243 = Sin(var1[5]);
  t4240 = Sin(var1[15]);
  t4250 = Cos(var1[15]);
  t4242 = t4181*t4241*t4230;
  t4247 = t4219*t4243;
  t4248 = t4242 + t4247;
  t4251 = -1.*t4241*t4219;
  t4252 = t4181*t4230*t4243;
  t4253 = t4251 + t4252;
  t4256 = t4241*t4219*t4230;
  t4257 = -1.*t4181*t4243;
  t4258 = t4256 + t4257;
  t4260 = t4181*t4241;
  t4261 = t4219*t4230*t4243;
  t4262 = t4260 + t4261;
  p_output1[0]=t4181*t4193;
  p_output1[1]=t4193*t4219;
  p_output1[2]=-1.*t4230;
  p_output1[3]=t4240*t4248 + t4250*t4253;
  p_output1[4]=t4240*t4258 + t4250*t4262;
  p_output1[5]=t4193*t4240*t4241 + t4193*t4243*t4250;
  p_output1[6]=t4248*t4250 - 1.*t4240*t4253;
  p_output1[7]=t4250*t4258 - 1.*t4240*t4262;
  p_output1[8]=-1.*t4193*t4240*t4243 + t4193*t4241*t4250;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
