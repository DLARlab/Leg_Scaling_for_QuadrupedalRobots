/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:46 GMT-05:00
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
  double t2527;
  double t4249;
  double t4263;
  double t4229;
  double t4264;
  double t2979;
  double t4255;
  double t4265;
  double t4266;
  double t4268;
  double t4270;
  double t4271;
  double t4272;
  double t2309;
  double t2998;
  double t3862;
  double t3910;
  double t4202;
  double t4273;
  double t4276;
  double t4531;
  double t4534;
  double t4629;
  double t5026;
  double t5401;
  double t5441;
  double t7055;
  double t7060;
  double t7077;
  double t7097;
  double t7104;
  double t7106;
  double t7086;
  double t7118;
  double t7434;
  double t7443;
  double t7445;
  double t7239;
  double t7240;
  double t7278;
  double t7291;
  t2527 = Sin(var1[3]);
  t4249 = Cos(var1[5]);
  t4263 = Sin(var1[4]);
  t4229 = Cos(var1[3]);
  t4264 = Sin(var1[5]);
  t2979 = Cos(var1[6]);
  t4255 = -1.*t4229*t4249;
  t4265 = -1.*t2527*t4263*t4264;
  t4266 = t4255 + t4265;
  t4268 = -1.*t4249*t2527*t4263;
  t4270 = t4229*t4264;
  t4271 = t4268 + t4270;
  t4272 = Sin(var1[6]);
  t2309 = Cos(var1[4]);
  t2998 = -1.*t2979;
  t3862 = 1. + t2998;
  t3910 = -0.047*t3862;
  t4202 = 0. + t3910;
  t4273 = 0.047*t4272;
  t4276 = 0. + t4273;
  t4531 = -1.*t4249*t2527;
  t4534 = t4229*t4263*t4264;
  t4629 = t4531 + t4534;
  t5026 = t4229*t4249*t4263;
  t5401 = t2527*t4264;
  t5441 = t5026 + t5401;
  t7055 = t4249*t2527;
  t7060 = -1.*t4229*t4263*t4264;
  t7077 = t7055 + t7060;
  t7097 = t4249*t2527*t4263;
  t7104 = -1.*t4229*t4264;
  t7106 = t7097 + t7104;
  t7086 = t2979*t5441;
  t7118 = t2979*t7106;
  t7434 = t4229*t4249;
  t7443 = t2527*t4263*t4264;
  t7445 = t7434 + t7443;
  t7239 = t2309*t4249*t2979;
  t7240 = -1.*t2309*t4264*t4272;
  t7278 = t7239 + t7240;
  t7291 = -0.047*t7278;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t2309*t2527 + t4202*t4266 - 0.047*(t2979*t4266 + t4271*t4272) + t4271*t4276;
  p_output1[10]=0.183*t2309*t4229 + t4202*t4629 + t4276*t5441 - 0.047*(t2979*t4629 + t4272*t5441);
  p_output1[11]=0;
  p_output1[12]=-0.183*t4229*t4263 + t2309*t4202*t4229*t4264 - 0.047*(t2309*t2979*t4229*t4264 + t2309*t4229*t4249*t4272) + t2309*t4229*t4249*t4276;
  p_output1[13]=-0.183*t2527*t4263 + t2309*t2527*t4202*t4264 - 0.047*(t2309*t2527*t2979*t4264 + t2309*t2527*t4249*t4272) + t2309*t2527*t4249*t4276;
  p_output1[14]=-0.183*t2309 - 1.*t4202*t4263*t4264 - 0.047*(-1.*t2979*t4263*t4264 - 1.*t4249*t4263*t4272) - 1.*t4249*t4263*t4276;
  p_output1[15]=t4202*t5441 + t4276*t7077 - 0.047*(t4272*t7077 + t7086);
  p_output1[16]=t4266*t4276 + t4202*t7106 - 0.047*(t4266*t4272 + t7118);
  p_output1[17]=t2309*t4202*t4249 - 1.*t2309*t4264*t4276 + t7291;
  p_output1[18]=-0.047*t4272*t4629 + 0.047*t2979*t5441 - 0.047*(-1.*t4272*t4629 + t7086);
  p_output1[19]=0.047*t2979*t7106 - 0.047*t4272*t7445 - 0.047*(t7118 - 1.*t4272*t7445);
  p_output1[20]=0.047*t2309*t2979*t4249 - 0.047*t2309*t4264*t4272 + t7291;
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
