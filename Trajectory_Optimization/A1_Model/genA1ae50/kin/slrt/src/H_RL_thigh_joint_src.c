/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t1864;
  double t2784;
  double t3624;
  double t2809;
  double t3962;
  double t90;
  double t2054;
  double t2520;
  double t2758;
  double t4376;
  double t3242;
  double t4117;
  double t4207;
  double t4429;
  double t4761;
  double t4802;
  double t4970;
  double t5151;
  double t5163;
  double t5194;
  double t5206;
  double t5236;
  double t4214;
  double t4849;
  double t4859;
  double t5193;
  double t5238;
  double t5264;
  double t5487;
  double t5488;
  double t5527;
  double t5786;
  double t5800;
  double t6321;
  double t2361;
  double t4873;
  double t4902;
  double t6781;
  double t6783;
  double t6800;
  double t6806;
  double t6905;
  double t6906;
  double t7071;
  double t7228;
  double t7232;
  double t7238;
  double t6336;
  double t6356;
  double t6358;
  double t7285;
  double t7321;
  double t4913;
  double t5269;
  double t5282;
  double t6365;
  double t6372;
  double t6411;
  double t5352;
  double t5647;
  double t5783;
  t1864 = Cos(var1[3]);
  t2784 = Cos(var1[5]);
  t3624 = Sin(var1[3]);
  t2809 = Sin(var1[4]);
  t3962 = Sin(var1[5]);
  t90 = Cos(var1[16]);
  t2054 = Cos(var1[4]);
  t2520 = Sin(var1[16]);
  t2758 = Cos(var1[15]);
  t4376 = Sin(var1[15]);
  t3242 = t1864*t2784*t2809;
  t4117 = t3624*t3962;
  t4207 = t3242 + t4117;
  t4429 = -1.*t2784*t3624;
  t4761 = t1864*t2809*t3962;
  t4802 = t4429 + t4761;
  t4970 = t2784*t3624*t2809;
  t5151 = -1.*t1864*t3962;
  t5163 = t4970 + t5151;
  t5194 = t1864*t2784;
  t5206 = t3624*t2809*t3962;
  t5236 = t5194 + t5206;
  t4214 = t2758*t4207;
  t4849 = -1.*t4376*t4802;
  t4859 = t4214 + t4849;
  t5193 = t2758*t5163;
  t5238 = -1.*t4376*t5236;
  t5264 = t5193 + t5238;
  t5487 = t2758*t2054*t2784;
  t5488 = -1.*t2054*t4376*t3962;
  t5527 = t5487 + t5488;
  t5786 = t4376*t4207;
  t5800 = t2758*t4802;
  t6321 = t5786 + t5800;
  t2361 = t90*t1864*t2054;
  t4873 = -1.*t2520*t4859;
  t4902 = t2361 + t4873;
  t6781 = -1.*t90;
  t6783 = 1. + t6781;
  t6800 = -0.183*t6783;
  t6806 = 0. + t6800;
  t6905 = -0.047*t4376;
  t6906 = 0. + t6905;
  t7071 = -1.*t2758;
  t7228 = 1. + t7071;
  t7232 = 0.047*t7228;
  t7238 = 0. + t7232;
  t6336 = t4376*t5163;
  t6356 = t2758*t5236;
  t6358 = t6336 + t6356;
  t7285 = -0.183*t2520;
  t7321 = 0. + t7285;
  t4913 = t90*t2054*t3624;
  t5269 = -1.*t2520*t5264;
  t5282 = t4913 + t5269;
  t6365 = t2054*t2784*t4376;
  t6372 = t2758*t2054*t3962;
  t6411 = t6365 + t6372;
  t5352 = -1.*t90*t2809;
  t5647 = -1.*t2520*t5527;
  t5783 = t5352 + t5647;
  p_output1[0]=t4902;
  p_output1[1]=t5282;
  p_output1[2]=t5783;
  p_output1[3]=0.;
  p_output1[4]=t6321;
  p_output1[5]=t6358;
  p_output1[6]=t6411;
  p_output1[7]=0.;
  p_output1[8]=t1864*t2054*t2520 + t4859*t90;
  p_output1[9]=t2054*t2520*t3624 + t5264*t90;
  p_output1[10]=-1.*t2520*t2809 + t5527*t90;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4902 + 0.13205*t6321 + t1864*t2054*t6806 + t4207*t6906 + t4802*t7238 + t4859*t7321 + var1[0];
  p_output1[13]=0. - 0.183*t5282 + 0.13205*t6358 + t2054*t3624*t6806 + t5163*t6906 + t5236*t7238 + t5264*t7321 + var1[1];
  p_output1[14]=0. - 0.183*t5783 + 0.13205*t6411 - 1.*t2809*t6806 + t2054*t2784*t6906 + t2054*t3962*t7238 + t5527*t7321 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
