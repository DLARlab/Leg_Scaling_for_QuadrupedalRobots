/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint_src.h"

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
  double t681;
  double t2967;
  double t2105;
  double t2626;
  double t3322;
  double t1094;
  double t2926;
  double t3323;
  double t3340;
  double t4162;
  double t4428;
  double t4466;
  double t4559;
  double t457;
  double t1296;
  double t1966;
  double t4181;
  double t4238;
  double t4245;
  double t4410;
  double t5136;
  double t5189;
  double t5231;
  double t5386;
  double t5391;
  double t5421;
  double t5846;
  double t5851;
  double t5870;
  double t5984;
  double t5997;
  double t6017;
  double t5901;
  double t6033;
  double t6207;
  double t6210;
  double t6221;
  double t6087;
  double t6102;
  double t6104;
  double t6112;
  t681 = Sin(var1[3]);
  t2967 = Cos(var1[3]);
  t2105 = Cos(var1[5]);
  t2626 = Sin(var1[4]);
  t3322 = Sin(var1[5]);
  t1094 = Sin(var1[9]);
  t2926 = -1.*t2105*t681*t2626;
  t3323 = t2967*t3322;
  t3340 = t2926 + t3323;
  t4162 = Cos(var1[9]);
  t4428 = -1.*t2967*t2105;
  t4466 = -1.*t681*t2626*t3322;
  t4559 = t4428 + t4466;
  t457 = Cos(var1[4]);
  t1296 = -0.047*t1094;
  t1966 = 0. + t1296;
  t4181 = -1.*t4162;
  t4238 = 1. + t4181;
  t4245 = 0.047*t4238;
  t4410 = 0. + t4245;
  t5136 = t2967*t2105*t2626;
  t5189 = t681*t3322;
  t5231 = t5136 + t5189;
  t5386 = -1.*t2105*t681;
  t5391 = t2967*t2626*t3322;
  t5421 = t5386 + t5391;
  t5846 = t2105*t681;
  t5851 = -1.*t2967*t2626*t3322;
  t5870 = t5846 + t5851;
  t5984 = t2105*t681*t2626;
  t5997 = -1.*t2967*t3322;
  t6017 = t5984 + t5997;
  t5901 = t4162*t5231;
  t6033 = t4162*t6017;
  t6207 = t2967*t2105;
  t6210 = t681*t2626*t3322;
  t6221 = t6207 + t6210;
  t6087 = t4162*t457*t2105;
  t6102 = -1.*t457*t1094*t3322;
  t6104 = t6087 + t6102;
  t6112 = 0.047*t6104;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1966*t3340 + t4410*t4559 + 0.047*(t1094*t3340 + t4162*t4559) - 0.183*t457*t681;
  p_output1[10]=0.183*t2967*t457 + t1966*t5231 + t4410*t5421 + 0.047*(t1094*t5231 + t4162*t5421);
  p_output1[11]=0;
  p_output1[12]=-0.183*t2626*t2967 + t1966*t2105*t2967*t457 + t2967*t3322*t4410*t457 + 0.047*(t1094*t2105*t2967*t457 + t2967*t3322*t4162*t457);
  p_output1[13]=-0.183*t2626*t681 + t1966*t2105*t457*t681 + t3322*t4410*t457*t681 + 0.047*(t1094*t2105*t457*t681 + t3322*t4162*t457*t681);
  p_output1[14]=-1.*t1966*t2105*t2626 + 0.047*(-1.*t1094*t2105*t2626 - 1.*t2626*t3322*t4162) - 1.*t2626*t3322*t4410 - 0.183*t457;
  p_output1[15]=t4410*t5231 + t1966*t5870 + 0.047*(t1094*t5870 + t5901);
  p_output1[16]=t1966*t4559 + t4410*t6017 + 0.047*(t1094*t4559 + t6033);
  p_output1[17]=-1.*t1966*t3322*t457 + t2105*t4410*t457 + t6112;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t4162*t5231 + 0.047*t1094*t5421 + 0.047*(-1.*t1094*t5421 + t5901);
  p_output1[28]=-0.047*t4162*t6017 + 0.047*t1094*t6221 + 0.047*(t6033 - 1.*t1094*t6221);
  p_output1[29]=0.047*t1094*t3322*t457 - 0.047*t2105*t4162*t457 + t6112;
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



void Jp_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
