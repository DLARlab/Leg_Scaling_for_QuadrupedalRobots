/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint_src.h"

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
  double t978;
  double t1663;
  double t1370;
  double t1431;
  double t1677;
  double t1291;
  double t1542;
  double t1682;
  double t1723;
  double t1784;
  double t1995;
  double t2048;
  double t2091;
  double t226;
  double t794;
  double t2316;
  double t2526;
  double t2579;
  double t2641;
  double t467;
  double t493;
  double t519;
  double t674;
  double t1302;
  double t1331;
  double t1800;
  double t1811;
  double t1901;
  double t1949;
  double t3034;
  double t3047;
  double t3049;
  double t3084;
  double t3106;
  double t3111;
  double t2334;
  double t2472;
  double t3260;
  double t3385;
  double t3390;
  double t4032;
  double t4075;
  double t4088;
  double t5024;
  double t5065;
  double t5132;
  double t6397;
  double t6442;
  double t6586;
  double t7022;
  double t7074;
  double t7120;
  double t7169;
  double t7193;
  double t7281;
  double t7726;
  double t7748;
  double t7791;
  double t2136;
  double t7936;
  double t7953;
  double t8198;
  double t8201;
  double t8203;
  double t8235;
  double t8239;
  double t8268;
  double t8270;
  double t8281;
  double t8284;
  double t8286;
  double t8122;
  double t8211;
  double t8214;
  double t8215;
  double t8217;
  double t8219;
  double t8222;
  double t8299;
  double t8301;
  t978 = Sin(var1[3]);
  t1663 = Cos(var1[3]);
  t1370 = Cos(var1[5]);
  t1431 = Sin(var1[4]);
  t1677 = Sin(var1[5]);
  t1291 = Sin(var1[12]);
  t1542 = -1.*t1370*t978*t1431;
  t1682 = t1663*t1677;
  t1723 = t1542 + t1682;
  t1784 = Cos(var1[12]);
  t1995 = -1.*t1663*t1370;
  t2048 = -1.*t978*t1431*t1677;
  t2091 = t1995 + t2048;
  t226 = Cos(var1[13]);
  t794 = Cos(var1[4]);
  t2316 = Sin(var1[13]);
  t2526 = t1784*t1723;
  t2579 = -1.*t1291*t2091;
  t2641 = t2526 + t2579;
  t467 = -1.*t226;
  t493 = 1. + t467;
  t519 = -0.183*t493;
  t674 = 0. + t519;
  t1302 = 0.047*t1291;
  t1331 = 0. + t1302;
  t1800 = -1.*t1784;
  t1811 = 1. + t1800;
  t1901 = -0.047*t1811;
  t1949 = 0. + t1901;
  t3034 = t1663*t1370*t1431;
  t3047 = t978*t1677;
  t3049 = t3034 + t3047;
  t3084 = -1.*t1370*t978;
  t3106 = t1663*t1431*t1677;
  t3111 = t3084 + t3106;
  t2334 = -0.183*t2316;
  t2472 = 0. + t2334;
  t3260 = t1784*t3049;
  t3385 = -1.*t1291*t3111;
  t3390 = t3260 + t3385;
  t4032 = t1784*t1663*t794*t1370;
  t4075 = -1.*t1663*t794*t1291*t1677;
  t4088 = t4032 + t4075;
  t5024 = t1784*t794*t1370*t978;
  t5065 = -1.*t794*t1291*t978*t1677;
  t5132 = t5024 + t5065;
  t6397 = -1.*t1784*t1370*t1431;
  t6442 = t1291*t1431*t1677;
  t6586 = t6397 + t6442;
  t7022 = t1370*t978;
  t7074 = -1.*t1663*t1431*t1677;
  t7120 = t7022 + t7074;
  t7169 = -1.*t1291*t3049;
  t7193 = t1784*t7120;
  t7281 = t7169 + t7193;
  t7726 = t1370*t978*t1431;
  t7748 = -1.*t1663*t1677;
  t7791 = t7726 + t7748;
  t2136 = t1784*t2091;
  t7936 = -1.*t1291*t7791;
  t7953 = t7936 + t2136;
  t8198 = -1.*t794*t1370*t1291;
  t8201 = -1.*t1784*t794*t1677;
  t8203 = t8198 + t8201;
  t8235 = -1.*t1784*t3111;
  t8239 = t7169 + t8235;
  t8268 = t1663*t1370;
  t8270 = t978*t1431*t1677;
  t8281 = t8268 + t8270;
  t8284 = -1.*t1784*t8281;
  t8286 = t7936 + t8284;
  t8122 = t1784*t7791;
  t8211 = t2472*t8203;
  t8214 = 0.183*t2316*t8203;
  t8215 = t1784*t794*t1370;
  t8217 = -1.*t794*t1291*t1677;
  t8219 = t8215 + t8217;
  t8222 = -0.13205*t8219;
  t8299 = -1.*t1291*t8281;
  t8301 = t8122 + t8299;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1331*t1723 + t1949*t2091 - 0.13205*(t1291*t1723 + t2136) + t2472*t2641 - 1.*t674*t794*t978 - 0.183*(-1.*t2316*t2641 - 1.*t226*t794*t978);
  p_output1[10]=t1331*t3049 + t1949*t3111 - 0.13205*(t1291*t3049 + t1784*t3111) + t2472*t3390 + t1663*t674*t794 - 0.183*(-1.*t2316*t3390 + t1663*t226*t794);
  p_output1[11]=0;
  p_output1[12]=t2472*t4088 - 0.183*(-1.*t1431*t1663*t226 - 1.*t2316*t4088) - 1.*t1431*t1663*t674 + t1331*t1370*t1663*t794 + t1663*t1677*t1949*t794 - 0.13205*(t1291*t1370*t1663*t794 + t1663*t1677*t1784*t794);
  p_output1[13]=t2472*t5132 - 1.*t1431*t674*t978 + t1331*t1370*t794*t978 + t1677*t1949*t794*t978 - 0.183*(-1.*t2316*t5132 - 1.*t1431*t226*t978) - 0.13205*(t1291*t1370*t794*t978 + t1677*t1784*t794*t978);
  p_output1[14]=-1.*t1331*t1370*t1431 - 0.13205*(-1.*t1291*t1370*t1431 - 1.*t1431*t1677*t1784) - 1.*t1431*t1677*t1949 + t2472*t6586 - 1.*t674*t794 - 0.183*(-1.*t2316*t6586 - 1.*t226*t794);
  p_output1[15]=t1949*t3049 + t1331*t7120 - 0.13205*(t3260 + t1291*t7120) + 0.183*t2316*t7281 + t2472*t7281;
  p_output1[16]=t1331*t2091 + t1949*t7791 + 0.183*t2316*t7953 + t2472*t7953 - 0.13205*(t1291*t2091 + t8122);
  p_output1[17]=-1.*t1331*t1677*t794 + t1370*t1949*t794 + t8211 + t8214 + t8222;
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
  p_output1[36]=0.047*t1784*t3049 - 0.047*t1291*t3111 - 0.13205*t3390 + 0.183*t2316*t8239 + t2472*t8239;
  p_output1[37]=0.047*t1784*t7791 - 0.047*t1291*t8281 + 0.183*t2316*t8286 + t2472*t8286 - 0.13205*t8301;
  p_output1[38]=-0.047*t1291*t1677*t794 + 0.047*t1370*t1784*t794 + t8211 + t8214 + t8222;
  p_output1[39]=-0.183*t226*t3390 - 0.183*t1663*t2316*t794 - 0.183*(-1.*t226*t3390 - 1.*t1663*t2316*t794);
  p_output1[40]=-0.183*t226*t8301 - 0.183*t2316*t794*t978 - 0.183*(-1.*t226*t8301 - 1.*t2316*t794*t978);
  p_output1[41]=0.183*t1431*t2316 - 0.183*t226*t8219 - 0.183*(t1431*t2316 - 1.*t226*t8219);
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



void Jp_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
