/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint_src.h"

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
  double t3440;
  double t4063;
  double t4163;
  double t4078;
  double t4188;
  double t3965;
  double t3978;
  double t4060;
  double t4254;
  double t4275;
  double t4221;
  double t4229;
  double t4231;
  double t4162;
  double t4195;
  double t4204;
  double t4315;
  double t4322;
  double t4324;
  double t4294;
  double t4297;
  double t4300;
  double t4218;
  double t4259;
  double t4267;
  double t4312;
  double t4331;
  double t4332;
  double t4389;
  double t4390;
  double t4392;
  t3440 = Cos(var1[3]);
  t4063 = Cos(var1[5]);
  t4163 = Sin(var1[3]);
  t4078 = Sin(var1[4]);
  t4188 = Sin(var1[5]);
  t3965 = Cos(var1[4]);
  t3978 = Cos(var1[7]);
  t4060 = Cos(var1[6]);
  t4254 = Sin(var1[6]);
  t4275 = Sin(var1[7]);
  t4221 = -1.*t4063*t4163;
  t4229 = t3440*t4078*t4188;
  t4231 = t4221 + t4229;
  t4162 = t3440*t4063*t4078;
  t4195 = t4163*t4188;
  t4204 = t4162 + t4195;
  t4315 = t3440*t4063;
  t4322 = t4163*t4078*t4188;
  t4324 = t4315 + t4322;
  t4294 = t4063*t4163*t4078;
  t4297 = -1.*t3440*t4188;
  t4300 = t4294 + t4297;
  t4218 = t4060*t4204;
  t4259 = -1.*t4231*t4254;
  t4267 = t4218 + t4259;
  t4312 = t4060*t4300;
  t4331 = -1.*t4324*t4254;
  t4332 = t4312 + t4331;
  t4389 = t3965*t4063*t4060;
  t4390 = -1.*t3965*t4188*t4254;
  t4392 = t4389 + t4390;
  p_output1[0]=t3440*t3965*t3978 - 1.*t4267*t4275;
  p_output1[1]=t3965*t3978*t4163 - 1.*t4275*t4332;
  p_output1[2]=-1.*t3978*t4078 - 1.*t4275*t4392;
  p_output1[3]=t4060*t4231 + t4204*t4254;
  p_output1[4]=t4254*t4300 + t4060*t4324;
  p_output1[5]=t3965*t4060*t4188 + t3965*t4063*t4254;
  p_output1[6]=t3978*t4267 + t3440*t3965*t4275;
  p_output1[7]=t3965*t4163*t4275 + t3978*t4332;
  p_output1[8]=-1.*t4078*t4275 + t3978*t4392;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
