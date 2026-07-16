/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:39 GMT-05:00
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
  double t349;
  double t2382;
  double t1115;
  double t1169;
  double t2672;
  double t498;
  double t2223;
  double t2789;
  double t2986;
  double t3175;
  double t3573;
  double t3756;
  double t3946;
  double t59;
  double t873;
  double t1028;
  double t3176;
  double t3492;
  double t3512;
  double t3559;
  double t5100;
  double t5211;
  double t5371;
  double t5428;
  double t5490;
  double t5493;
  double t7245;
  double t7247;
  double t7424;
  double t7709;
  double t7711;
  double t7712;
  double t7516;
  double t7740;
  double t8063;
  double t8090;
  double t8096;
  double t7897;
  double t7927;
  double t7955;
  double t7959;
  t349 = Sin(var1[3]);
  t2382 = Cos(var1[3]);
  t1115 = Cos(var1[5]);
  t1169 = Sin(var1[4]);
  t2672 = Sin(var1[5]);
  t498 = Sin(var1[15]);
  t2223 = -1.*t1115*t349*t1169;
  t2789 = t2382*t2672;
  t2986 = t2223 + t2789;
  t3175 = Cos(var1[15]);
  t3573 = -1.*t2382*t1115;
  t3756 = -1.*t349*t1169*t2672;
  t3946 = t3573 + t3756;
  t59 = Cos(var1[4]);
  t873 = -0.047*t498;
  t1028 = 0. + t873;
  t3176 = -1.*t3175;
  t3492 = 1. + t3176;
  t3512 = 0.047*t3492;
  t3559 = 0. + t3512;
  t5100 = t2382*t1115*t1169;
  t5211 = t349*t2672;
  t5371 = t5100 + t5211;
  t5428 = -1.*t1115*t349;
  t5490 = t2382*t1169*t2672;
  t5493 = t5428 + t5490;
  t7245 = t1115*t349;
  t7247 = -1.*t2382*t1169*t2672;
  t7424 = t7245 + t7247;
  t7709 = t1115*t349*t1169;
  t7711 = -1.*t2382*t2672;
  t7712 = t7709 + t7711;
  t7516 = t3175*t5371;
  t7740 = t3175*t7712;
  t8063 = t2382*t1115;
  t8090 = t349*t1169*t2672;
  t8096 = t8063 + t8090;
  t7897 = t3175*t59*t1115;
  t7927 = -1.*t59*t498*t2672;
  t7955 = t7897 + t7927;
  t7959 = 0.047*t7955;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1028*t2986 + t3559*t3946 + 0.047*(t3175*t3946 + t2986*t498) + 0.183*t349*t59;
  p_output1[10]=t1028*t5371 + t3559*t5493 + 0.047*(t498*t5371 + t3175*t5493) - 0.183*t2382*t59;
  p_output1[11]=0;
  p_output1[12]=0.183*t1169*t2382 + t1028*t1115*t2382*t59 + t2382*t2672*t3559*t59 + 0.047*(t2382*t2672*t3175*t59 + t1115*t2382*t498*t59);
  p_output1[13]=0.183*t1169*t349 + t1028*t1115*t349*t59 + t2672*t349*t3559*t59 + 0.047*(t2672*t3175*t349*t59 + t1115*t349*t498*t59);
  p_output1[14]=-1.*t1028*t1115*t1169 - 1.*t1169*t2672*t3559 + 0.047*(-1.*t1169*t2672*t3175 - 1.*t1115*t1169*t498) + 0.183*t59;
  p_output1[15]=t3559*t5371 + t1028*t7424 + 0.047*(t498*t7424 + t7516);
  p_output1[16]=t1028*t3946 + t3559*t7712 + 0.047*(t3946*t498 + t7740);
  p_output1[17]=-1.*t1028*t2672*t59 + t1115*t3559*t59 + t7959;
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
  p_output1[45]=-0.047*t3175*t5371 + 0.047*t498*t5493 + 0.047*(-1.*t498*t5493 + t7516);
  p_output1[46]=-0.047*t3175*t7712 + 0.047*t498*t8096 + 0.047*(t7740 - 1.*t498*t8096);
  p_output1[47]=-0.047*t1115*t3175*t59 + 0.047*t2672*t498*t59 + t7959;
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
