/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint_src.h"

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
  double t3793;
  double t4062;
  double t4125;
  double t3966;
  double t4127;
  double t3852;
  double t4120;
  double t4143;
  double t4144;
  double t4150;
  double t4160;
  double t4199;
  double t4209;
  double t1682;
  double t3391;
  double t4468;
  double t4500;
  double t4502;
  double t4508;
  double t3450;
  double t3510;
  double t3764;
  double t3771;
  double t3860;
  double t3863;
  double t3927;
  double t3936;
  double t4283;
  double t4316;
  double t4720;
  double t4728;
  double t4759;
  double t4788;
  double t4791;
  double t4837;
  double t4529;
  double t4530;
  double t4899;
  double t4915;
  double t4923;
  double t5083;
  double t5176;
  double t5185;
  double t5369;
  double t5393;
  double t5412;
  double t5726;
  double t5730;
  double t5846;
  double t5963;
  double t5983;
  double t5985;
  double t6132;
  double t6137;
  double t6138;
  double t6188;
  double t6213;
  double t6214;
  double t4403;
  double t6374;
  double t6407;
  double t6603;
  double t6610;
  double t6621;
  double t6839;
  double t6840;
  double t6308;
  double t6898;
  double t6899;
  double t6903;
  double t6928;
  double t6941;
  double t6503;
  double t6584;
  double t6588;
  double t6600;
  double t6642;
  double t6647;
  double t6906;
  double t6910;
  t3793 = Sin(var1[3]);
  t4062 = Cos(var1[5]);
  t4125 = Sin(var1[4]);
  t3966 = Cos(var1[3]);
  t4127 = Sin(var1[5]);
  t3852 = Cos(var1[6]);
  t4120 = -1.*t3966*t4062;
  t4143 = -1.*t3793*t4125*t4127;
  t4144 = t4120 + t4143;
  t4150 = -1.*t4062*t3793*t4125;
  t4160 = t3966*t4127;
  t4199 = t4150 + t4160;
  t4209 = Sin(var1[6]);
  t1682 = Cos(var1[4]);
  t3391 = Cos(var1[7]);
  t4468 = t3852*t4199;
  t4500 = -1.*t4144*t4209;
  t4502 = t4468 + t4500;
  t4508 = Sin(var1[7]);
  t3450 = -1.*t3391;
  t3510 = 1. + t3450;
  t3764 = 0.183*t3510;
  t3771 = 0. + t3764;
  t3860 = -1.*t3852;
  t3863 = 1. + t3860;
  t3927 = -0.047*t3863;
  t3936 = 0. + t3927;
  t4283 = 0.047*t4209;
  t4316 = 0. + t4283;
  t4720 = -1.*t4062*t3793;
  t4728 = t3966*t4125*t4127;
  t4759 = t4720 + t4728;
  t4788 = t3966*t4062*t4125;
  t4791 = t3793*t4127;
  t4837 = t4788 + t4791;
  t4529 = 0.183*t4508;
  t4530 = 0. + t4529;
  t4899 = t3852*t4837;
  t4915 = -1.*t4759*t4209;
  t4923 = t4899 + t4915;
  t5083 = t3966*t1682*t4062*t3852;
  t5176 = -1.*t3966*t1682*t4127*t4209;
  t5185 = t5083 + t5176;
  t5369 = t1682*t4062*t3852*t3793;
  t5393 = -1.*t1682*t3793*t4127*t4209;
  t5412 = t5369 + t5393;
  t5726 = -1.*t4062*t3852*t4125;
  t5730 = t4125*t4127*t4209;
  t5846 = t5726 + t5730;
  t5963 = t4062*t3793;
  t5983 = -1.*t3966*t4125*t4127;
  t5985 = t5963 + t5983;
  t6132 = t3852*t5985;
  t6137 = -1.*t4837*t4209;
  t6138 = t6132 + t6137;
  t6188 = t4062*t3793*t4125;
  t6213 = -1.*t3966*t4127;
  t6214 = t6188 + t6213;
  t4403 = t3852*t4144;
  t6374 = -1.*t6214*t4209;
  t6407 = t4403 + t6374;
  t6603 = -1.*t1682*t3852*t4127;
  t6610 = -1.*t1682*t4062*t4209;
  t6621 = t6603 + t6610;
  t6839 = -1.*t3852*t4759;
  t6840 = t6839 + t6137;
  t6308 = t3852*t6214;
  t6898 = t3966*t4062;
  t6899 = t3793*t4125*t4127;
  t6903 = t6898 + t6899;
  t6928 = -1.*t3852*t6903;
  t6941 = t6928 + t6374;
  t6503 = t1682*t4062*t3852;
  t6584 = -1.*t1682*t4127*t4209;
  t6588 = t6503 + t6584;
  t6600 = -0.13205*t6588;
  t6642 = t6621*t4530;
  t6647 = -0.183*t6621*t4508;
  t6906 = -1.*t6903*t4209;
  t6910 = t6308 + t6906;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1682*t3771*t3793 + t3936*t4144 + t4199*t4316 - 0.13205*(t4199*t4209 + t4403) + 0.183*(-1.*t1682*t3391*t3793 - 1.*t4502*t4508) + t4502*t4530;
  p_output1[10]=t1682*t3771*t3966 + t3936*t4759 + t4316*t4837 - 0.13205*(t3852*t4759 + t4209*t4837) + t4530*t4923 + 0.183*(t1682*t3391*t3966 - 1.*t4508*t4923);
  p_output1[11]=0;
  p_output1[12]=-1.*t3771*t3966*t4125 + t1682*t3936*t3966*t4127 - 0.13205*(t1682*t3852*t3966*t4127 + t1682*t3966*t4062*t4209) + t1682*t3966*t4062*t4316 + t4530*t5185 + 0.183*(-1.*t3391*t3966*t4125 - 1.*t4508*t5185);
  p_output1[13]=-1.*t3771*t3793*t4125 + t1682*t3793*t3936*t4127 - 0.13205*(t1682*t3793*t3852*t4127 + t1682*t3793*t4062*t4209) + t1682*t3793*t4062*t4316 + t4530*t5412 + 0.183*(-1.*t3391*t3793*t4125 - 1.*t4508*t5412);
  p_output1[14]=-1.*t1682*t3771 - 1.*t3936*t4125*t4127 - 0.13205*(-1.*t3852*t4125*t4127 - 1.*t4062*t4125*t4209) - 1.*t4062*t4125*t4316 + t4530*t5846 + 0.183*(-1.*t1682*t3391 - 1.*t4508*t5846);
  p_output1[15]=t3936*t4837 + t4316*t5985 - 0.13205*(t4899 + t4209*t5985) - 0.183*t4508*t6138 + t4530*t6138;
  p_output1[16]=t4144*t4316 + t3936*t6214 - 0.13205*(t4144*t4209 + t6308) - 0.183*t4508*t6407 + t4530*t6407;
  p_output1[17]=t1682*t3936*t4062 - 1.*t1682*t4127*t4316 + t6600 + t6642 + t6647;
  p_output1[18]=-0.047*t4209*t4759 + 0.047*t3852*t4837 - 0.13205*t4923 - 0.183*t4508*t6840 + t4530*t6840;
  p_output1[19]=0.047*t3852*t6214 - 0.047*t4209*t6903 - 0.13205*t6910 - 0.183*t4508*t6941 + t4530*t6941;
  p_output1[20]=0.047*t1682*t3852*t4062 - 0.047*t1682*t4127*t4209 + t6600 + t6642 + t6647;
  p_output1[21]=0.183*t1682*t3966*t4508 + 0.183*t3391*t4923 + 0.183*(-1.*t1682*t3966*t4508 - 1.*t3391*t4923);
  p_output1[22]=0.183*t1682*t3793*t4508 + 0.183*t3391*t6910 + 0.183*(-1.*t1682*t3793*t4508 - 1.*t3391*t6910);
  p_output1[23]=-0.183*t4125*t4508 + 0.183*t3391*t6588 + 0.183*(t4125*t4508 - 1.*t3391*t6588);
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



void Jp_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
