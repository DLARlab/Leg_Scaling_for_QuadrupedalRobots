/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t1191;
  double t2218;
  double t2542;
  double t2285;
  double t3109;
  double t1935;
  double t2412;
  double t3270;
  double t3296;
  double t4235;
  double t6117;
  double t6157;
  double t6204;
  double t1667;
  double t6443;
  double t162;
  double t6528;
  double t6594;
  double t6691;
  double t6721;
  double t6733;
  double t6745;
  double t6919;
  double t6952;
  double t7030;
  double t7031;
  double t7183;
  double t7257;
  double t7280;
  double t585;
  double t877;
  double t979;
  double t982;
  double t1944;
  double t2031;
  double t4722;
  double t4796;
  double t5746;
  double t5849;
  double t7558;
  double t7612;
  double t7655;
  double t7745;
  double t7776;
  double t7789;
  double t6500;
  double t6527;
  double t6905;
  double t6930;
  double t6940;
  double t7971;
  double t7984;
  double t8035;
  double t7096;
  double t7126;
  double t7169;
  double t8063;
  double t8088;
  double t8121;
  double t8146;
  double t8228;
  double t8241;
  double t8549;
  double t8551;
  double t8554;
  double t8583;
  double t8590;
  double t8591;
  double t8600;
  double t8606;
  double t8608;
  t1191 = Cos(var1[3]);
  t2218 = Cos(var1[5]);
  t2542 = Sin(var1[3]);
  t2285 = Sin(var1[4]);
  t3109 = Sin(var1[5]);
  t1935 = Sin(var1[15]);
  t2412 = t1191*t2218*t2285;
  t3270 = t2542*t3109;
  t3296 = t2412 + t3270;
  t4235 = Cos(var1[15]);
  t6117 = -1.*t2218*t2542;
  t6157 = t1191*t2285*t3109;
  t6204 = t6117 + t6157;
  t1667 = Cos(var1[4]);
  t6443 = Sin(var1[16]);
  t162 = Cos(var1[16]);
  t6528 = t4235*t3296;
  t6594 = -1.*t1935*t6204;
  t6691 = t6528 + t6594;
  t6721 = Cos(var1[17]);
  t6733 = -1.*t6721;
  t6745 = 1. + t6733;
  t6919 = Sin(var1[17]);
  t6952 = t1191*t1667*t6443;
  t7030 = t162*t6691;
  t7031 = t6952 + t7030;
  t7183 = t162*t1191*t1667;
  t7257 = -1.*t6443*t6691;
  t7280 = t7183 + t7257;
  t585 = -1.*t162;
  t877 = 1. + t585;
  t979 = -0.183*t877;
  t982 = 0. + t979;
  t1944 = -0.047*t1935;
  t2031 = 0. + t1944;
  t4722 = -1.*t4235;
  t4796 = 1. + t4722;
  t5746 = 0.047*t4796;
  t5849 = 0. + t5746;
  t7558 = t2218*t2542*t2285;
  t7612 = -1.*t1191*t3109;
  t7655 = t7558 + t7612;
  t7745 = t1191*t2218;
  t7776 = t2542*t2285*t3109;
  t7789 = t7745 + t7776;
  t6500 = -0.183*t6443;
  t6527 = 0. + t6500;
  t6905 = -0.25*t6745;
  t6930 = -0.183*t6919;
  t6940 = 0. + t6905 + t6930;
  t7971 = t4235*t7655;
  t7984 = -1.*t1935*t7789;
  t8035 = t7971 + t7984;
  t7096 = -0.183*t6745;
  t7126 = 0.25*t6919;
  t7169 = 0. + t7096 + t7126;
  t8063 = t1667*t6443*t2542;
  t8088 = t162*t8035;
  t8121 = t8063 + t8088;
  t8146 = t162*t1667*t2542;
  t8228 = -1.*t6443*t8035;
  t8241 = t8146 + t8228;
  t8549 = t4235*t1667*t2218;
  t8551 = -1.*t1667*t1935*t3109;
  t8554 = t8549 + t8551;
  t8583 = -1.*t6443*t2285;
  t8590 = t162*t8554;
  t8591 = t8583 + t8590;
  t8600 = -1.*t162*t2285;
  t8606 = -1.*t6443*t8554;
  t8608 = t8600 + t8606;
  p_output1[0]=0. + t2031*t3296 + t5849*t6204 + 0.15331*(t1935*t3296 + t4235*t6204) + t6527*t6691 + t6940*t7031 + t7169*t7280 - 0.183*(-1.*t6919*t7031 + t6721*t7280) - 0.25*(t6721*t7031 + t6919*t7280) + t1191*t1667*t982 + var1[0];
  p_output1[1]=0. + t2031*t7655 + t5849*t7789 + 0.15331*(t1935*t7655 + t4235*t7789) + t6527*t8035 + t6940*t8121 + t7169*t8241 - 0.183*(-1.*t6919*t8121 + t6721*t8241) - 0.25*(t6721*t8121 + t6919*t8241) + t1667*t2542*t982 + var1[1];
  p_output1[2]=0. + t1667*t2031*t2218 + 0.15331*(t1667*t1935*t2218 + t1667*t3109*t4235) + t1667*t3109*t5849 + t6527*t8554 + t6940*t8591 + t7169*t8608 - 0.183*(-1.*t6919*t8591 + t6721*t8608) - 0.25*(t6721*t8591 + t6919*t8608) - 1.*t2285*t982 + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
