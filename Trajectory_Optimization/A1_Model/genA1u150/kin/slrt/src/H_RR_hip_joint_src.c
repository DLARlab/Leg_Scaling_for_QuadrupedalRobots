/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t1791;
  double t169;
  double t2884;
  double t1876;
  double t4283;
  double t5370;
  double t4024;
  double t5748;
  double t5125;
  double t5456;
  double t5545;
  double t5871;
  double t5955;
  double t5982;
  double t6085;
  double t6104;
  double t6107;
  double t6132;
  double t6138;
  double t6146;
  double t5567;
  double t5994;
  double t6076;
  double t6457;
  double t6462;
  double t6492;
  double t6520;
  double t6527;
  double t6539;
  double t6121;
  double t6159;
  double t6181;
  double t6215;
  double t6232;
  double t6235;
  t1791 = Cos(var1[4]);
  t169 = Cos(var1[3]);
  t2884 = Sin(var1[4]);
  t1876 = Sin(var1[3]);
  t4283 = Cos(var1[5]);
  t5370 = Sin(var1[5]);
  t4024 = Sin(var1[12]);
  t5748 = Cos(var1[12]);
  t5125 = t169*t4283*t2884;
  t5456 = t1876*t5370;
  t5545 = t5125 + t5456;
  t5871 = -1.*t4283*t1876;
  t5955 = t169*t2884*t5370;
  t5982 = t5871 + t5955;
  t6085 = t4283*t1876*t2884;
  t6104 = -1.*t169*t5370;
  t6107 = t6085 + t6104;
  t6132 = t169*t4283;
  t6138 = t1876*t2884*t5370;
  t6146 = t6132 + t6138;
  t5567 = t4024*t5545;
  t5994 = t5748*t5982;
  t6076 = t5567 + t5994;
  t6457 = 0.047*t4024;
  t6462 = 0. + t6457;
  t6492 = -1.*t5748;
  t6520 = 1. + t6492;
  t6527 = -0.047*t6520;
  t6539 = 0. + t6527;
  t6121 = t4024*t6107;
  t6159 = t5748*t6146;
  t6181 = t6121 + t6159;
  t6215 = t1791*t4283*t4024;
  t6232 = t5748*t1791*t5370;
  t6235 = t6215 + t6232;
  p_output1[0]=t169*t1791;
  p_output1[1]=t1791*t1876;
  p_output1[2]=-1.*t2884;
  p_output1[3]=0.;
  p_output1[4]=t6076;
  p_output1[5]=t6181;
  p_output1[6]=t6235;
  p_output1[7]=0.;
  p_output1[8]=t5545*t5748 - 1.*t4024*t5982;
  p_output1[9]=t5748*t6107 - 1.*t4024*t6146;
  p_output1[10]=-1.*t1791*t4024*t5370 + t1791*t4283*t5748;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t169*t1791 - 0.047*t6076 + t5545*t6462 + t5982*t6539 + var1[0];
  p_output1[13]=0. - 0.183*t1791*t1876 - 0.047*t6181 + t6107*t6462 + t6146*t6539 + var1[1];
  p_output1[14]=0. + 0.183*t2884 - 0.047*t6235 + t1791*t4283*t6462 + t1791*t5370*t6539 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
