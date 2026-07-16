/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t4394;
  double t6053;
  double t6126;
  double t6120;
  double t6153;
  double t5861;
  double t6124;
  double t6154;
  double t6158;
  double t6201;
  double t6305;
  double t6316;
  double t6420;
  double t4399;
  double t6513;
  double t260;
  double t6533;
  double t6542;
  double t6560;
  double t6576;
  double t6580;
  double t6633;
  double t6654;
  double t6670;
  double t6688;
  double t6689;
  double t6787;
  double t6789;
  double t6827;
  double t372;
  double t832;
  double t2635;
  double t3987;
  double t5910;
  double t5957;
  double t6207;
  double t6225;
  double t6231;
  double t6298;
  double t7027;
  double t7035;
  double t7058;
  double t7076;
  double t7077;
  double t7078;
  double t6518;
  double t6523;
  double t6644;
  double t6660;
  double t6665;
  double t7136;
  double t7143;
  double t7144;
  double t6709;
  double t6716;
  double t6760;
  double t7185;
  double t7202;
  double t7231;
  double t7289;
  double t7296;
  double t7314;
  double t7533;
  double t7567;
  double t7568;
  double t7608;
  double t7610;
  double t7637;
  double t7657;
  double t7658;
  double t7676;
  t4394 = Cos(var1[3]);
  t6053 = Cos(var1[5]);
  t6126 = Sin(var1[3]);
  t6120 = Sin(var1[4]);
  t6153 = Sin(var1[5]);
  t5861 = Sin(var1[15]);
  t6124 = t4394*t6053*t6120;
  t6154 = t6126*t6153;
  t6158 = t6124 + t6154;
  t6201 = Cos(var1[15]);
  t6305 = -1.*t6053*t6126;
  t6316 = t4394*t6120*t6153;
  t6420 = t6305 + t6316;
  t4399 = Cos(var1[4]);
  t6513 = Sin(var1[16]);
  t260 = Cos(var1[16]);
  t6533 = t6201*t6158;
  t6542 = -1.*t5861*t6420;
  t6560 = t6533 + t6542;
  t6576 = Cos(var1[17]);
  t6580 = -1.*t6576;
  t6633 = 1. + t6580;
  t6654 = Sin(var1[17]);
  t6670 = t4394*t4399*t6513;
  t6688 = t260*t6560;
  t6689 = t6670 + t6688;
  t6787 = t260*t4394*t4399;
  t6789 = -1.*t6513*t6560;
  t6827 = t6787 + t6789;
  t372 = -1.*t260;
  t832 = 1. + t372;
  t2635 = -0.183*t832;
  t3987 = 0. + t2635;
  t5910 = -0.047*t5861;
  t5957 = 0. + t5910;
  t6207 = -1.*t6201;
  t6225 = 1. + t6207;
  t6231 = 0.047*t6225;
  t6298 = 0. + t6231;
  t7027 = t6053*t6126*t6120;
  t7035 = -1.*t4394*t6153;
  t7058 = t7027 + t7035;
  t7076 = t4394*t6053;
  t7077 = t6126*t6120*t6153;
  t7078 = t7076 + t7077;
  t6518 = -0.183*t6513;
  t6523 = 0. + t6518;
  t6644 = -0.1*t6633;
  t6660 = -0.183*t6654;
  t6665 = 0. + t6644 + t6660;
  t7136 = t6201*t7058;
  t7143 = -1.*t5861*t7078;
  t7144 = t7136 + t7143;
  t6709 = -0.183*t6633;
  t6716 = 0.1*t6654;
  t6760 = 0. + t6709 + t6716;
  t7185 = t4399*t6513*t6126;
  t7202 = t260*t7144;
  t7231 = t7185 + t7202;
  t7289 = t260*t4399*t6126;
  t7296 = -1.*t6513*t7144;
  t7314 = t7289 + t7296;
  t7533 = t6201*t4399*t6053;
  t7567 = -1.*t4399*t5861*t6153;
  t7568 = t7533 + t7567;
  t7608 = -1.*t6513*t6120;
  t7610 = t260*t7568;
  t7637 = t7608 + t7610;
  t7657 = -1.*t260*t6120;
  t7658 = -1.*t6513*t7568;
  t7676 = t7657 + t7658;
  p_output1[0]=0. + t3987*t4394*t4399 + t5957*t6158 + t6298*t6420 + 0.13205*(t5861*t6158 + t6201*t6420) + t6523*t6560 + t6665*t6689 + t6760*t6827 - 0.183*(-1.*t6654*t6689 + t6576*t6827) - 0.2*(t6576*t6689 + t6654*t6827) + var1[0];
  p_output1[1]=0. + t3987*t4399*t6126 + t5957*t7058 + t6298*t7078 + 0.13205*(t5861*t7058 + t6201*t7078) + t6523*t7144 + t6665*t7231 + t6760*t7314 - 0.183*(-1.*t6654*t7231 + t6576*t7314) - 0.2*(t6576*t7231 + t6654*t7314) + var1[1];
  p_output1[2]=0. + t4399*t5957*t6053 - 1.*t3987*t6120 + 0.13205*(t4399*t5861*t6053 + t4399*t6153*t6201) + t4399*t6153*t6298 + t6523*t7568 + t6665*t7637 + t6760*t7676 - 0.183*(-1.*t6654*t7637 + t6576*t7676) - 0.2*(t6576*t7637 + t6654*t7676) + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
